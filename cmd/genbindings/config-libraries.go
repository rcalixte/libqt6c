package main

import (
	"os"
	"os/exec"
	"path/filepath"
	"sort"
	"strings"
)

func ProcessLibraries(clangBin, outDir, extraLibsDir string) {
	AllowAllHeaders := func(string) bool { return true }

	// FLUSH all known typedefs / ...

	flushKnownTypes()
	InsertTypedefs(true)

	headerList := []string{}
	qtstructdefs := make(map[string]struct{})
	qttypedefs := make(map[string]struct{})

	// Qt 6
	generate(
		"src",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtCore",
			"/usr/include/x86_64-linux-gnu/qt6/QtGui",
			"/usr/include/x86_64-linux-gnu/qt6/QtWidgets",
		},
		func(fullpath string) bool {
			// Block cbor and generate it separately
			fname := filepath.Base(fullpath)
			if strings.HasPrefix(fname, "qcbor") {
				return false
			}

			return Widgets_AllowHeader(fullpath)
		},
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6Widgets"),
		outDir,
		"include",
		ClangMatchSameHeaderDefinitionOnly,
		&headerList,
		qtstructdefs,
		qttypedefs,
	)

	generate(
		"src/cbor",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtCore",
		},
		func(fullpath string) bool {
			// Only include the same json, xml, cbor files excluded above
			fname := filepath.Base(fullpath)
			return strings.HasPrefix(fname, "qcbor")
		},
		clangBin,
		"--std=c++20 "+pkgConfigCflags("Qt6Core"),
		outDir,
		"include/cbor",
		ClangMatchSameHeaderDefinitionOnly,
		&headerList,
		qtstructdefs,
		qttypedefs,
	)

	// Qt 6 QtPrintSupport
	generate(
		"src/printsupport",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtPrintSupport",
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6PrintSupport"),
		outDir,
		"include/printsupport",
		ClangMatchSameHeaderDefinitionOnly,
		&headerList,
		qtstructdefs,
		qttypedefs,
	)

	// Qt 6 SVG
	generate(
		"src/svg",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtSvg",
			"/usr/include/x86_64-linux-gnu/qt6/QtSvgWidgets",
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6SvgWidgets"),
		outDir,
		"include/svg",
		ClangMatchSameHeaderDefinitionOnly,
		&headerList,
		qtstructdefs,
		qttypedefs,
	)

	// Qt 6 QtNetwork
	generate(
		"src/network",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtNetwork",
		},
		func(fullpath string) bool {
			fname := filepath.Base(fullpath)
			return fname != "qtnetwork-config.h"
		},
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6Network"),
		outDir,
		"include/network",
		ClangMatchSameHeaderDefinitionOnly,
		&headerList,
		qtstructdefs,
		qttypedefs,
	)

	// Qt 6 QtMultimedia
	generate(
		"src/multimedia",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtMultimedia",
			"/usr/include/x86_64-linux-gnu/qt6/QtMultimediaWidgets",
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6MultimediaWidgets"),
		outDir,
		"include/multimedia",
		ClangMatchSameHeaderDefinitionOnly,
		&headerList,
		qtstructdefs,
		qttypedefs,
	)

	// Qt 6 Spatial Audio (on Debian this is a dependency of Qt6Multimedia)
	generate(
		"src/spatialaudio",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtSpatialAudio",
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6SpatialAudio"),
		outDir,
		"include/spatialaudio",
		ClangMatchSameHeaderDefinitionOnly,
		&headerList,
		qtstructdefs,
		qttypedefs,
	)

	// Qt 6 QWebChannel
	generate(
		"src/webchannel",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtWebChannel",
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6WebChannel"),
		outDir,
		"include/webchannel",
		ClangMatchSameHeaderDefinitionOnly,
		&headerList,
		qtstructdefs,
		qttypedefs,
	)

	// Qt 6 QWebEngine
	generate(
		"src/webengine",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtWebEngineCore",
			"/usr/include/x86_64-linux-gnu/qt6/QtWebEngineWidgets",
		},
		func(fullpath string) bool {
			baseName := filepath.Base(fullpath)
			return baseName != "qtwebenginewidgets-config.h"
		},
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6WebEngineWidgets"),
		outDir,
		"include/webengine",
		ClangMatchSameHeaderDefinitionOnly,
		&headerList,
		qtstructdefs,
		qttypedefs,
	)

	// Qt 6 Charts
	// Depends on QtCore/Gui/Widgets
	generate(
		"src/restricted-extras-charts",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/QtCharts",
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6Charts"),
		outDir,
		"include/restricted-extras-charts",
		ClangMatchSameHeaderDefinitionOnly,
		&headerList,
		qtstructdefs,
		qttypedefs,
	)

	// Qt 6 QScintilla
	// Depends on QtCore/Gui/Widgets, QPrintSupport
	generate(
		"src/restricted-extras-qscintilla",
		[]string{
			"/usr/include/x86_64-linux-gnu/qt6/Qsci",
		},
		AllowAllHeaders,
		clangBin,
		"--std=c++17 "+pkgConfigCflags("Qt6PrintSupport"),
		outDir,
		"include/restricted-extras-qscintilla",
		ClangMatchSameHeaderDefinitionOnly,
		&headerList,
		qtstructdefs,
		qttypedefs,
	)

	// Post-processing to generate auxiliary files
	structdefs := make([]string, 0, len(qtstructdefs)+len(qttypedefs))
	for k := range qtstructdefs {
		structdefs = append(structdefs, k)
	}
	sort.Strings(structdefs)

	typedefs := make([]string, 0, len(qttypedefs))
	for k := range qttypedefs {
		typedefs = append(typedefs, k)
	}
	sort.Strings(typedefs)
	outputName := filepath.Join(outDir, "src", "libqttypedefs.h")
	typedefHeader := "// THIS FILE IS AUTOMATICALLY GENERATED\n#pragma once\n#include <stddef.h>\n#include <stdint.h>\n\n"
	for _, k := range structdefs {
		typedefHeader += k + "\n"
	}
	for _, k := range typedefs {
		typedefHeader += k + "\n"
	}

	err := os.WriteFile(outputName, []byte(typedefHeader), 0644)
	if err != nil {
		panic(err)
	}
	cmd := exec.Command("clang-format", "-i", outputName)
	cmd.Stderr = os.Stderr
	err = cmd.Run()
	if err != nil {
		panic(err)
	}

	typesFile := filepath.Join(outDir, "src", "libqttypedefs.h")
	err = os.WriteFile(typesFile, []byte(typedefHeader), 0644)
	if err != nil {
		panic(err)
	}

	cmd = exec.Command("clang-format", "-i", typesFile)
	cmd.Stderr = os.Stderr
	err = cmd.Run()
	if err != nil {
		panic(err)
	}

	formattedHeader, err := os.ReadFile(typesFile)
	if err != nil {
		panic(err)
	}
	includeHeader := filepath.Join(outDir, "include", "libqttypedefs.h")

	err = os.MkdirAll(filepath.Dir(includeHeader), 0755)
	if err != nil {
		panic(err)
	}

	err = os.WriteFile(includeHeader, formattedHeader, 0644)
	if err != nil {
		panic(err)
	}

	qt6cHeader := "// THIS FILE IS AUTOMATICALLY GENERATED\n#pragma once\n\n#include \"qtlibc.h\"\n#include \"libqttypedefs.h\"\n#include \"threading/libqt6cthreading.h\"\n"
	for _, k := range headerList {
		qt6cHeader += "#include \"" + k + "\"\n"
	}
	err = os.WriteFile(filepath.Join(outDir, "src", "libqt6c.h"), []byte(qt6cHeader), 0644)
	if err != nil {
		panic(err)
	}

	err = os.WriteFile(filepath.Join(outDir, "include", "libqt6c.h"), []byte(qt6cHeader), 0644)
	if err != nil {
		panic(err)
	}

	threadingQtLibHeader := filepath.Join(outDir, "src", "threading", "libqt6cthreading.h")
	threadingIncludeQtLibHeader := filepath.Join(outDir, "include", "threading", "libqt6cthreading.h")
	threadingQtHeaderFile, err := os.ReadFile(threadingQtLibHeader)
	if err != nil {
		panic(err)
	}
	err = os.MkdirAll(filepath.Dir(threadingIncludeQtLibHeader), 0755)
	if err != nil {
		panic(err)
	}
	err = os.WriteFile(threadingIncludeQtLibHeader, threadingQtHeaderFile, 0644)
	if err != nil {
		panic(err)
	}

	qtLibHeader := filepath.Join(outDir, "src", "qtlibc.h")
	includeQtLibHeader := filepath.Join(outDir, "include", "qtlibc.h")
	qtHeaderFile, err := os.ReadFile(qtLibHeader)
	if err != nil {
		panic(err)
	}
	err = os.WriteFile(includeQtLibHeader, qtHeaderFile, 0644)
	if err != nil {
		panic(err)
	}
}
