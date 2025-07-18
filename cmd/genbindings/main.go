package main

import (
	"context"
	"encoding/json"
	"flag"
	"fmt"
	"log"
	"os"
	"os/exec"
	"path/filepath"
	"runtime"
	"sort"
	"strings"
	"sync"
)

const (
	ClangSubprocessCount = 4
)

var archMap = map[string]string{
	"amd64": "x86_64",
	"arm64": "aarch64",
}

func cacheFilePath(inputHeader string) string {
	return filepath.Join("cachedir", strings.ReplaceAll(inputHeader, `/`, `__`)+".json")
}

func findHeadersInDir(srcDir string, allowHeader func(string) bool) []string {
	content, err := os.ReadDir(srcDir)
	if err != nil {
		panic(err)
	}

	var ret []string

	for _, includeFile := range content {
		if includeFile.IsDir() {
			continue
		}
		if !strings.HasSuffix(includeFile.Name(), `.h`) {
			continue
		}
		fullPath := filepath.Join(srcDir, includeFile.Name())
		if !allowHeader(fullPath) {
			continue
		}
		ret = append(ret, fullPath)
	}

	return ret
}

func cleanGeneratedFilesInDir(dirpath string) {
	log.Printf("Cleaning up output directory %q...", dirpath)

	_ = os.MkdirAll(dirpath, 0755)

	existing, err := os.ReadDir(dirpath)
	if err != nil {
		panic(err)
	}

	cleaned := 0
	for _, e := range existing {
		if e.IsDir() {
			continue
		}
		if !strings.HasPrefix(e.Name(), `libq`) {
			continue
		}
		// One of ours, clean up
		err := os.Remove(filepath.Join(dirpath, e.Name()))
		if err != nil {
			log.Printf("WARNING: Failed to remove existing file %q", e.Name())
			continue
		}

		cleaned++
	}

	log.Printf("Removed %d file(s).", cleaned)
}

func pkgConfigCflags(packageName string) string {
	stdout, err := exec.Command(`pkg-config`, `--cflags`, packageName).Output()
	if err != nil {
		panic(err)
	}

	return string(stdout)
}

func (header *CppParsedHeader) RegisterFlags() map[string]CppFlagProperty {
	if header.DetectedFlags == nil {
		header.DetectedFlags = make(map[string]CppFlagProperty)
	}

	for _, typedef := range header.Typedefs {
		typeClass := strings.Split(typedef.Alias, `::`)[0]

		// Skip private/internal types
		if strings.HasSuffix(typedef.Alias, "Private") ||
			strings.Contains(typeClass, "Private") {
			continue
		}

		// Skip protected enums
		if enum, ok := KnownEnums[typedef.Alias]; ok {
			if enum.Enum.IsProtected {
				continue
			}
		}

		if strings.Contains(typedef.Alias, "::") {
			flagDef := strings.Split(typedef.Alias, `::`)
			if len(flagDef) <= 1 {
				continue
			}

			className := flagDef[0]
			flagName := strings.Join(flagDef[1:], ``)

			flagProperty := CppFlagProperty{
				PropertyName: typedef.Alias, // Fully qualified name
				PropertyType: CppParameter{
					ParameterType: typedef.UnderlyingType.RenderTypeCabi(),
				},
			}

			// Register both forms in DetectedFlags
			header.DetectedFlags[typedef.Alias] = flagProperty // Full name
			header.DetectedFlags[flagName] = flagProperty      // Short name

			if _, ok := EnumScopeRegistry[flagName]; !ok {
				EnumScopeRegistry[flagName] = make(map[string]map[string]EnumScopeInfo)
			}
			if _, ok := EnumScopeRegistry[flagName][className]; !ok {
				EnumScopeRegistry[flagName][className] = make(map[string]EnumScopeInfo)
			}

			EnumScopeRegistry[flagName][className][""] = EnumScopeInfo{
				FullyQualifiedName: typedef.Alias,
				ClassScope:         className,
				Namespace:          "", // Flags are always class-scoped
			}
		}
	}
	return header.DetectedFlags
}

// getReferencedClasses finds all referenced Qt types in this header
func getReferencedClasses(src *CppParsedHeader) []string {
	foundTypes := map[string]struct{}{}

	var maybeAddType = func(p CppParameter) {
		if p.QtClassType() {
			foundTypes[p.ParameterType] = struct{}{}
		}
	}

	for _, c := range src.Classes {
		foundTypes[c.ClassName] = struct{}{}

		for _, ctor := range c.Ctors {
			for _, p := range ctor.Parameters {
				maybeAddType(p)
			}
		}
		for _, m := range c.Methods {
			for _, p := range m.Parameters {
				maybeAddType(p)
			}
			maybeAddType(m.ReturnType)
		}
		for _, cn := range c.DirectInherits {
			maybeAddType(CppParameter{
				ParameterType: cn,
			})
		}
	}

	// Some types (e.g. QRgb) are found but are typedefs, not classes
	for _, td := range src.Typedefs {
		delete(foundTypes, td.Alias)
	}

	// Convert to sorted list
	foundTypesList := make([]string, 0, len(foundTypes))
	for ft := range foundTypes {
		if !AllowClass(ft) {
			continue
		}

		foundTypesList = append(foundTypesList, ft)
	}
	sort.Strings(foundTypesList)

	return foundTypesList
}

// gatherTypes does just the type registration part previously done by generate()
func gatherTypes(name string, dirs []string, allowHeader func(string) bool, clangBin, cflagsCombined string) {
	//
	// PASS 0 (Fill clang cache)
	//

	var includeFiles []string
	for _, srcDir := range dirs {
		if strings.HasSuffix(srcDir, `.h`) {
			includeFiles = append(includeFiles, srcDir)
		} else {
			includeFiles = append(includeFiles, findHeadersInDir(srcDir, allowHeader)...)
		}
	}

	cflags := strings.Fields(cflagsCombined)

	generateClangCaches(includeFiles, clangBin, cflags, ClangMatchSameHeaderDefinitionOnly)

	// Build complete type registry
	for _, inputHeader := range includeFiles {
		cacheFile := cacheFilePath(inputHeader)
		astJson, err := os.ReadFile(cacheFile)
		if err != nil {
			panic("Expected cache to be created for " + inputHeader + ", but got error " + err.Error())
		}

		var astInner []interface{} = nil
		err = json.Unmarshal(astJson, &astInner)
		if err != nil {
			panic(err)
		}

		parsed, err := parseHeader(astInner, "")
		if err != nil {
			panic(err)
		}

		// Register all types
		addKnownTypes(name, parsed)

		parsed.DetectedFlags = parsed.RegisterFlags()
		refClasses := getReferencedClasses(parsed)

		for _, class := range parsed.Classes {
			class.IncludedClasses = append(class.IncludedClasses, refClasses...)
			for _, enum := range class.ChildEnums {
				shortName := enum.CabiEnumName()

				// Initialize maps if needed
				if _, ok := EnumScopeRegistry[shortName]; !ok {
					EnumScopeRegistry[shortName] = make(map[string]map[string]EnumScopeInfo)
				}
				if _, ok := EnumScopeRegistry[shortName][class.ClassName]; !ok {
					EnumScopeRegistry[shortName][class.ClassName] = make(map[string]EnumScopeInfo)
				}

				// Store the enum info
				EnumScopeRegistry[shortName][class.ClassName][""] = EnumScopeInfo{
					FullyQualifiedName: enum.EnumName,
					ClassScope:         class.ClassName,
					Namespace:          "",
				}

				// Register corresponding flags type
				flagsShortName := shortName + "s"
				flagsFullName := enum.EnumName + "s"

				if _, ok := EnumScopeRegistry[flagsShortName]; !ok {
					EnumScopeRegistry[flagsShortName] = make(map[string]map[string]EnumScopeInfo)
				}
				if _, ok := EnumScopeRegistry[flagsShortName][class.ClassName]; !ok {
					EnumScopeRegistry[flagsShortName][class.ClassName] = make(map[string]EnumScopeInfo)
				}

				EnumScopeRegistry[flagsShortName][class.ClassName][""] = EnumScopeInfo{
					FullyQualifiedName: flagsFullName,
					ClassScope:         class.ClassName,
					Namespace:          "",
				}
			}
		}
	}
	// The cache should now be fully populated
}

func generate(srcName string, srcDirs []string, allowHeaderFn func(string) bool, outDir string, headerList *[]string, qtstructdefs, qttypedefs map[string]struct{}) {

	packageName := "src" + ifv(srcName != "", "/"+srcName, "")
	includePath := "include" + ifv(srcName != "", "/"+srcName, "")

	var includeFiles []string
	for _, srcDir := range srcDirs {
		if strings.HasSuffix(srcDir, `.h`) {
			includeFiles = append(includeFiles, srcDir) // single .h
		} else {
			includeFiles = append(includeFiles, findHeadersInDir(srcDir, allowHeaderFn)...)
		}
	}

	log.Printf("Found %d header files to process.", len(includeFiles))

	includeDir := filepath.Join(outDir, includePath)
	outDir = filepath.Join(outDir, packageName)

	cleanGeneratedFilesInDir(includeDir)
	cleanGeneratedFilesInDir(outDir)

	var processHeaders []*CppParsedHeader
	atr := astTransformRedundant{
		preserve: make(map[string]*CppEnum),
	}

	//
	// PASS 1 (clang2il)
	//

	for _, inputHeader := range includeFiles {

		cacheFile := cacheFilePath(inputHeader)

		astJson, err := os.ReadFile(cacheFile)
		if err != nil {
			panic("Expected cache to be created for " + inputHeader + ", but got error " + err.Error())
		}

		// Json decode
		var astInner []interface{} = nil
		err = json.Unmarshal(astJson, &astInner)
		if err != nil {
			panic(err)
		}

		if astInner == nil {
			panic("Null in cache file for " + inputHeader)
		}

		// Convert it to our intermediate format
		parsed, err := parseHeader(astInner, "")
		if err != nil {
			panic(err)
		}

		parsed.Filename = inputHeader // Stash

		// AST transforms on our IL
		astTransformChildClasses(parsed) // must be first
		astTransformEnumResolution(parsed)
		astTransformStructResolution(parsed)
		astTransformOptional(parsed)
		astTransformOverloads(parsed)
		astTransformConstructorOrder(parsed)
		atr.Process(parsed)

		// Update global state tracker (AFTER astTransformChildClasses)
		addKnownTypes(packageName, parsed)

		processHeaders = append(processHeaders, parsed)
	}

	//
	// PASS 2
	//

	for _, parsed := range processHeaders {

		log.Printf("Processing %q...", parsed.Filename)

		// More AST transforms on our IL
		astTransformTypedefs(parsed)
		astTransformBlocklist(parsed) // Must happen after typedef transformation

		{
			// Save the IL file for debug inspection
			jb, err := json.MarshalIndent(parsed, "", "\t")
			if err != nil {
				panic(err)
			}

			err = os.WriteFile(cacheFilePath(parsed.Filename)+".ours.json", jb, 0644)
			if err != nil {
				panic(err)
			}
		}

		// Breakout if there is nothing bindable
		if parsed.Empty() {
			log.Printf("Nothing in this header was bindable.")
			continue
		}

		// Emit code files from the intermediate format
		libName := "lib" + strings.TrimSuffix(filepath.Base(parsed.Filename), ".h")
		outputName := filepath.Join(outDir, libName)
		dirName := strings.TrimPrefix(packageName, "src/")
		dirName = strings.TrimPrefix(dirName, "src")
		if dirName != "" {
			dirName += "/"
		}

		// For packages where we scan multiple directories, it's possible that
		// there are filename collisions (e.g. Qt 6 has QtWidgets/qaction.h include
		// QtGui/qaction.h as a compatibility measure).
		// If the path exists, disambiguate it
		var counter = 0
		for {
			testName := outputName
			if counter > 0 {
				testName += fmt.Sprintf(".%d", counter)
				*headerList = append(*headerList, dirName+testName+".h")
			}

			if _, err := os.Stat(testName + ".cpp"); err != nil && os.IsNotExist(err) {
				outputName = testName // Safe
				*headerList = append(*headerList, dirName+libName+".h")
				break
			}

			counter++
		}

		bindingCppSrc, err := emitBindingCpp(parsed, filepath.Base(parsed.Filename))
		if err != nil {
			panic(err)
		}

		err = os.WriteFile(outputName+".cpp", []byte(bindingCppSrc), 0644)
		if err != nil {
			panic(err)
		}

		bindingHSrc, structdefs, typedefs, err := emitBindingHeader(parsed, filepath.Base(parsed.Filename), packageName)
		if err != nil {
			panic(err)
		}

		for k := range structdefs {
			qtstructdefs[k] = struct{}{}
		}

		for k := range typedefs {
			qttypedefs[k] = struct{}{}
		}

		err = os.WriteFile(outputName+".hpp", []byte(bindingHSrc), 0644)
		if err != nil {
			panic(err)
		}

		bindingHxxSrc, err := emitVirtualBindingHeader(parsed, filepath.Base(parsed.Filename), packageName)
		if err != nil {
			panic(err)
		}

		err = os.WriteFile(outputName+".hxx", []byte(bindingHxxSrc), 0644)
		if err != nil {
			panic(err)
		}

		cmd := exec.Command("clang-format", "-i", outputName+".cpp")
		cmd.Stderr = os.Stderr
		err = cmd.Start()
		if err != nil {
			panic(err)
		}

		cmd = exec.Command("clang-format", "-i", outputName+".hpp")
		cmd.Stderr = os.Stderr
		err = cmd.Start()
		if err != nil {
			panic(err)
		}

		cmd = exec.Command("clang-format", "-i", outputName+".hxx")
		cmd.Stderr = os.Stderr
		err = cmd.Start()
		if err != nil {
			panic(err)
		}

		srcC, err := emitC(parsed, filepath.Base(parsed.Filename), packageName)
		if err != nil {
			panic(err)
		}

		err = os.WriteFile(outputName+".c", []byte(srcC), 0644)
		if err != nil {
			panic(err)
		}

		includeH, err := emitH(parsed, filepath.Base(parsed.Filename), packageName)
		if err != nil {
			panic(err)
		}

		err = os.WriteFile(outputName+".h", []byte(includeH), 0644)
		if err != nil {
			panic(err)
		}

		cmd = exec.Command("clang-format", "-i", outputName+".c")
		cmd.Stderr = os.Stderr
		err = cmd.Run()
		if err != nil {
			panic(err)
		}

		cmd = exec.Command("clang-format", "-i", outputName+".h")
		cmd.Stderr = os.Stderr
		err = cmd.Run()
		if err != nil {
			panic(err)
		}

		formattedHeader, err := os.ReadFile(outputName + ".h")
		if err != nil {
			panic(err)
		}

		includeFile := filepath.Join(includeDir, filepath.Base(outputName+".h"))

		err = os.MkdirAll(filepath.Dir(includeDir), 0755)
		if err != nil {
			panic(err)
		}

		err = os.WriteFile(includeFile, formattedHeader, 0644)
		if err != nil {
			panic(err)
		}
	}

	log.Printf("Processing %d file(s) completed", len(includeFiles))
}

func generateClangCaches(includeFiles []string, clangBin string, cflags []string, matcher ClangMatcher) {

	var clangChan = make(chan string)
	var clangWg sync.WaitGroup
	ctx := context.Background()

	err := os.MkdirAll("cachedir", 0755)
	if err != nil {
		panic(err)
	}

	for i := 0; i < ClangSubprocessCount; i++ {
		clangWg.Add(1)
		go func() {
			defer clangWg.Done()
			log.Printf("Clang worker: starting")

			for {
				inputHeader, ok := <-clangChan
				if !ok {
					return // Done
				}

				log.Printf("Clang worker got message for file %q", inputHeader)

				// Parse the file
				// This seems to intermittently fail, so allow retrying
				astInner := mustClangExec(ctx, clangBin, inputHeader, cflags, matcher)

				// Write to cache
				jb, err := json.MarshalIndent(astInner, "", "\t")
				if err != nil {
					panic(err)
				}

				err = os.WriteFile(cacheFilePath(inputHeader), jb, 0644)
				if err != nil {
					panic(err)
				}

				runtime.GC()
			}
		}()
	}

	for _, inputHeader := range includeFiles {

		// Check if there is a matching cache hit
		cacheFile := cacheFilePath(inputHeader)

		if _, err := os.Stat(cacheFile); err != nil && os.IsNotExist(err) {

			// Nonexistent cache file, regenerate from clang
			log.Printf("No AST cache for file %q, running clang...", filepath.Base(inputHeader))
			clangChan <- inputHeader
		}
	}

	// Done with all clang workers
	close(clangChan)
	clangWg.Wait()
}

func main() {
	if _, ok := archMap[runtime.GOARCH]; !ok {
		panic("Unsupported architecture: " + runtime.GOARCH)
	}

	clang := flag.String("clang", "clang", "Custom path to clang")
	outDir := flag.String("outdir", "../../", "Output directory for generated gen_** files")
	extraLibsDir := flag.String("extralibs", "/usr/local/src/", "Base directory to find extra library checkouts")

	flag.Parse()

	ProcessLibraries(*clang, *outDir, *extraLibsDir)
}
