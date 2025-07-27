package main

import (
	"C"
	"fmt"
	"reflect"
	"strings"
	"unicode"
)

func reservedWordC(s string) bool {
	switch s {
	case "default", "const", "var", "type", "len", "new", "copy", "import", "error", "string", "map", "int", "select",
		"ret", "suspend", "null": // not language-reserved words, but binding-reserved words
		return true
	default:
		return false
	}
}

func getPageName(c string) string {
	pageName := strings.ToLower(c)
	if pageName == "qnamespace" {
		return "qt"
	}
	pageName = strings.ReplaceAll(pageName, "__", "-")
	return pageName
}

type PageType int

const (
	QtPage PageType = iota
	EnumPage
	DtorPage
)

var operatorLookup = map[rune]string{
	'!': "-not",
	'&': "-and",
	'(': "-28",
	')': "-29",
	'*': "-2a",
	'+': "-2b",
	'-': "-",
	'/': "-2f",
	'<': "-lt",
	'=': "-eq",
	'>': "-gt",
	'[': "-5b",
	']': "-5d",
	'^': "-5e",
	'|': "-7c",
	'~': "-7e",
}

func operatorToUrl(cmdUrl string) string {
	suffix := strings.TrimPrefix(cmdUrl, "operator")
	ret := "operator"

	for _, op := range suffix {
		if ch, ok := operatorLookup[op]; ok {
			ret += ch
		}
	}

	return ret
}

func getPageUrl(pageType PageType, pageName, cmdURL, className string) string {
	if strings.HasPrefix(pageName, "qsci") {
		if pageType == EnumPage {
			return ""
		}
		return "https://www.riverbankcomputing.com/static/Docs/QScintilla/class" + className + ".html"
	}

	if pageType == DtorPage && strings.Contains(className, "__") {
		return ""
	}

	qtUrl := "https://doc.qt.io/qt-6/"

	switch pageType {
	case QtPage:
		if strings.HasPrefix(cmdURL, "operator") {
			cmdURL = operatorToUrl(cmdURL)
		}

		return qtUrl + pageName + ".html" + ifv(cmdURL != "", "#"+cmdURL, "")
	case EnumPage:
		return qtUrl + pageName + ".html#types"
	case DtorPage:
		return qtUrl + pageName + ".html#dtor." + className
	}
	return ""
}

// cabiEnumName returns the C ABI enum name for a Qt C++ class.
func cabiEnumName(className string) string {
	// Many types are defined in qnamespace.h under Qt::
	// The C implementation for the enums replaces the namespace
	// with __ and uppercases the values. Some values are also
	// prefixed to avoid collisions.
	name := strings.Split(className, `::`)
	enumName := name[len(name)-1]
	return strings.ReplaceAll(enumName, `::`, `__`)
}

// cabiEnumClassName returns the C ABI enum class name for a Qt C++ class.
// Normally this is the same, except for class types that are nested inside another class definition.
func cabiEnumClassName(className string) string {
	// Must use __ to avoid subclass/method name collision e.g. QPagedPaintDevice::Margins
	return strings.ReplaceAll(className, `::`, `__`)
}

func cSafeMethodName(name string) string {
	var result []rune
	for _, char := range name {
		if unicode.IsUpper(char) {
			result = append(result, '_')
			result = append(result, unicode.ToLower(char))
		} else {
			result = append(result, char)
		}
	}
	return strings.TrimSuffix(string(result), "_")
}

func (p CppParameter) RenderTypeC(cfs *cFileState, isReturnType, fullEnumName bool) string {
	if (p.Pointer && p.ParameterType == "char") || p.ParameterType == "QByteArray" ||
		p.ParameterType == "QAnyStringView" {
		if p.Const {
			return "const char*"
		}
		return "char*"
	}

	if p.ParameterType == "QString" || p.ParameterType == "QByteArrayView" ||
		p.ParameterType == "QStringView" {
		return "const char*"
	}

	if t, _, ok := p.QListOf(); ok {
		if t.ParameterType == "QString" || t.ParameterType == "QByteArray" {
			return "const char*" + ifv(isReturnType, "*", "")
		} else if !isReturnType {
			if t.QtClassType() || t.IntType() {
				maybePointer := ""
				if !t.QtClassType() {
					maybePointer = "*"
				}
				return t.RenderTypeCabi() + maybePointer
			}
		}
		return "libqt_list " + cppComment("of "+t.RenderTypeC(cfs, isReturnType, fullEnumName))
	}

	if _, ok := p.QSetOf(); ok {
		panic("QSet<> arguments are not supported") // n.b. doesn't seem to exist in QtCore/QtGui/QtWidgets at all
	}

	if k, v, _, ok := p.QMapOf(); ok {
		return "libqt_map " + cppComment("of "+k.RenderTypeC(cfs, isReturnType, fullEnumName)+" to "+v.RenderTypeC(cfs, isReturnType, fullEnumName))
	}

	if t1, t2, ok := p.QPairOf(); ok {
		// Design QPair using capital-named members, in case it gets passed
		// across packages
		f := t1.RenderTypeC(cfs, isReturnType, fullEnumName)
		s := t2.RenderTypeC(cfs, isReturnType, fullEnumName)

		return "libqt_pair " + cppComment("tuple of "+f+" and "+s)
	}

	if p.ParameterType == "void" && p.Pointer {
		return "void*"
	}

	ret := ""
	switch p.ParameterType {
	case "uchar", "quint8":
		ret += "uint8_t"
	case "qint8", "signed char":
		ret += "char" // Signed
	case "qint16":
		ret += "int16_t"
	case "ushort", "quint16":
		ret += "uint16_t"
	case "long":
		// Windows ILP32 - 32-bits
		// Linux LP64 - 64-bits
		if C.sizeof_long == 4 {
			ret += "int32_t"
		} else {
			ret += "int64_t"
		}
	case "ulong", "unsigned long":
		if C.sizeof_long == 4 {
			ret += "uint32_t"
		} else {
			ret += "uint64_t"
		}

	case "qint32":
		ret += "int32_t"
	case "quint32", "uint", "unsigned int":
		ret += "uint32_t"
	case "qlonglong", "qint64":
		ret += "long"
	case "qulonglong", "quint64", "unsigned long long":
		ret += "uint64_t"
	case "qreal":
		ret += "double"
	case "size_t": // size_t is unsigned
		if C.sizeof_size_t == 4 {
			ret += "uint32_t"
		} else {
			ret += "uint64_t"
		}
	case "qsizetype", "QIntegerForSizeof<std::size_t>::Signed", "qptrdiff", "ptrdiff_t": // all signed
		if C.sizeof_size_t == 4 {
			ret += "int32_t"
		} else {
			ret += "int64_t"
		}

	case "qintptr", "QIntegerForSizeof<void *>::Signed":
		ret += "intptr_t"
	case "quintptr", "QIntegerForSizeof<void *>::Unsigned":
		ret += "uintptr_t"

	default:
		if ft, ok := p.QFlagsOf(); ok {
			if enumInfo, ok := KnownEnums[ft.UnderlyingEnum.ParameterType]; ok {
				if enumInfo.PackageName == cfs.currentPackageName {
					// Same package
					if fullEnumName {
						ret += "enum " + enumInfo.Enum.EnumName
					} else {
						ret += "int64_t"
					}
				}
			} else {
				if fullEnumName {
					ret += cabiEnumName(ft.UnderlyingEnum.ParameterType)
				} else {
					ret += "int64_t"
				}
			}

		} else if enumInfo, ok := KnownEnums[p.ParameterType]; ok {
			enumName := cabiEnumName(p.ParameterType)
			enumClass := strings.Split(p.ParameterType, "::")[0] + "__"
			if enumInfo.PackageName != cfs.currentPackageName {
				// Potentially cross-package
				if fullEnumName {
					ret += "enum " + enumClass + enumName
				} else {
					ret += "int64_t"
				}
			} else {
				// Same package
				if strings.Contains(p.ParameterType, "::") {
					if fullEnumName {
						ret += "enum " + enumClass + enumName
					} else {
						ret += "int64_t"
					}
				} else {
					enumClass := cfs.castType + "__"
					if fullEnumName {
						ret += "enum " + enumClass + enumName
					} else {
						ret += "int64_t"
					}
				}
			}

		} else if strings.Contains(p.ParameterType, `::`) {
			// Inner class
			ret += cabiClassName(p.ParameterType)

		} else {
			// Do not transform this type
			ret += p.ParameterType
		}
	}

	if p.ByRef || p.Pointer {
		if isReturnType {
			if !strings.HasSuffix(ret, "*") {
				ret += "*"
			}
		}
	}

	if _, ok := KnownEnums[ret]; ok {
		if fullEnumName {
			if strings.HasPrefix(p.ParameterType, "QFlags<") {
				enumType := strings.Split(p.ParameterType, "QFlags<")[1]
				enumType = strings.Split(enumType, ">")[0]
				ret = "enum " + enumType + ret
			} else {
				enumType := p.ParameterType
				ret = "enum " + enumType + ret
			}
		} else {
			ret = "int64_t"
		}
	}
	switch ret {
	case "quint8":
		ret = "uint8_t"
	case "uint", "unsigned int", "quint32":
		ret = "uint32_t"
	}

	if !strings.HasSuffix(ret, "*") {
		if p.Pointer {
			ret += strings.Repeat("*", p.PointerCount)
		} else if p.ByRef || IsKnownClass(p.ParameterType) {
			ret += "*"
		}
	}

	if strings.Contains(ret, `::`) {
		ret = strings.ReplaceAll(ret, "::", "__")
		ret = strings.ReplaceAll(ret, "Qt__", "")
	}

	return ret // ignore const
}

func (p CppParameter) renderReturnTypeC(cfs *cFileState) string {
	ret := p.RenderTypeC(cfs, true, false)
	if _, ok := KnownEnums[ret]; ok {
		ret = "int64_t"
	}

	if ret == "int" {
		ret = "int32_t"
	}

	if ret == "quint8" {
		ret = "uint8_t"
	}

	if ret == "uint" {
		ret = "uint32_t"
	}

	if strings.Contains(ret, `::`) {
		ret = strings.ReplaceAll(ret, "::", "__")
	}

	maybeConst := ifv(p.Const && !strings.HasPrefix(ret, "const ") && !strings.HasPrefix(ret, "libqt"), "const ", "")
	return maybeConst + ret
}

func (cfs *cFileState) emitCommentParametersC(params []CppParameter, isSlot bool) string {
	tmp := make([]string, 0, len(params))

	skipNext := false

	for i, p := range params {
		if IsArgcArgv(params, i) {
			skipNext = true
			tmp = append(tmp, "int *argc, char *argv[]")
		} else if skipNext {
			// Skip this parameter, already handled
			skipNext = false
		} else {
			// Ordinary parameter
			pName := p.ParameterName
			pType := p.RenderTypeC(cfs, false, true)
			var pTypeSlot string
			if t, _, ok := p.QListOf(); ok {
				if IsKnownClass(t.ParameterType) || strings.Contains(t.ParameterType, "::") ||
					t.IntType() {
					pName = cppComment("of "+t.RenderTypeC(cfs, false, true)) + " " + p.ParameterName
					pTypeSlot = " " + pName + " "
					pType = "libqt_list"
				} else if (strings.Contains(pType, "char*") && !strings.Contains(pType, "libqt_")) ||
					!strings.HasPrefix(pType, "libqt_") {
					pName += "[]"
					pTypeSlot = "[]"
				}
			}

			if isSlot {
				tmp = append(tmp, pType+pTypeSlot)
			} else {
				tmp = append(tmp, pType+" "+pName)
			}
		}
	}
	return strings.Join(tmp, ", ")
}

func (cfs *cFileState) emitParametersC(params []CppParameter, isSlot bool) string {
	tmp := make([]string, 0, len(params))

	skipNext := false

	for i, p := range params {
		if IsArgcArgv(params, i) {
			skipNext = true
			tmp = append(tmp, "int *argc, char *argv[]")
		} else if skipNext {
			// Skip this parameter, already handled
			skipNext = false
		} else {
			// Ordinary parameter
			pName := p.ParameterName
			pType := p.RenderTypeC(cfs, false, false)
			if t, _, ok := p.QListOf(); ok {
				if IsKnownClass(t.ParameterType) || strings.Contains(t.ParameterType, "::") ||
					t.IntType() {
					pName = p.ParameterName
					pType = "libqt_list"
				} else if (strings.Contains(pType, "char*") && !strings.Contains(pType, "libqt_")) ||
					!strings.HasPrefix(pType, "libqt_") {
					pName += "[]"
				}
			}

			if reservedWordC(pName) {
				pName = "_" + pName
			}
			if IsKnownClass(p.ParameterType) && strings.HasSuffix(pType, "*") &&
				!strings.Contains(pType, "char*") {
				pType = "void*"
			}
			if isSlot {
				tmp = append(tmp, pType)
			} else {
				tmp = append(tmp, pType+" "+pName)
			}
		}
	}
	return strings.Join(tmp, ", ")
}

type cFileState struct {
	imports            map[string]struct{}
	currentPackageName string
	currentHeaderName  string
	castType           string
}

func (cfs *cFileState) emitParametersC2CABIForwarding(m CppMethod) (preamble, forwarding string) {
	tmp := make([]string, 0, len(m.Parameters)+2)

	if !m.IsStatic {
		tmp = append(tmp, "("+cfs.castType+"*)self")
	}

	skipNext := false

	for i, p := range m.Parameters {
		if IsArgcArgv(m.Parameters, i) {
			skipNext = true
			// QApplication constructor. Convert 'args' into Qt's wanted types
			// Qt has a warning in the docs saying these pointers must be valid
			// for the entire lifetype of QApplication, so we pass by address
			// and never free the memory
			// This transformation only affects the C side. The C++ C ABI side is
			// projected naturally.

			tmp = append(tmp, "argc, argv")

		} else if skipNext {
			// Skip this parameter, already handled
			skipNext = false

		} else {
			addPreamble, rvalue := cfs.emitParameterC2CABIForwarding(p)

			preamble += addPreamble
			tmp = append(tmp, rvalue)
		}
	}
	return preamble, strings.Join(tmp, ", ")
}

func (cfs *cFileState) emitParameterC2CABIForwarding(p CppParameter) (preamble, rvalue string) {
	nameprefix := makeNamePrefix(p.ParameterName)
	if reservedWordC(p.ParameterName) {
		p.ParameterName = "_" + p.ParameterName
	}

	if p.ParameterType == "QString" || p.ParameterType == "QByteArray" {
		// Return the C string struct without allocation since the
		// temporary libqt_string is passed by value
		rvalue = "qstring(" + nameprefix + ")"

	} else if p.ParameterType == "QAnyStringView" {
		rvalue = nameprefix

	} else if p.ParameterType == "QByteArrayView" || p.ParameterType == "QStringView" {
		// Take the address of the pointer and cast it to the expected type
		preamble += "libqt_string " + nameprefix + "_string = qstring(" + p.ParameterName + ");\n"
		rvalue = "(" + p.ParameterType + "*)&" + nameprefix + "_string"

	} else if t, _, ok := p.QListOf(); ok {
		// QList<T>
		// Return the C list struct without allocation if we can

		if t.ParameterType == "QString" || t.ParameterType == "QByteArray" {
			preamble += "size_t " + nameprefix + "_len = libqt_strv_length(" + p.ParameterName + ");\n"
			preamble += "libqt_string* " + nameprefix + "_qstr = malloc(" + nameprefix + "_len * sizeof(libqt_string));\n"
			preamble += "for (size_t _i = 0; _i < " + nameprefix + "_len; ++_i) {\n"
			preamble += "    " + nameprefix + "_qstr[_i] = qstring(" + p.ParameterName + "[_i]);\n"
			preamble += "}\n"
			preamble += "libqt_list " + nameprefix + "_list = qlist(" + nameprefix + "_qstr, " + nameprefix + "_len);\n"

			rvalue = nameprefix + "_list"

		} else {
			rvalue = nameprefix
		}

	} else if _, ok := p.QSetOf(); ok {
		panic("QSet<> arguments are not yet implemented") // n.b. doesn't seem to exist in QtCore/QtGui/QtWidgets at all

	} else if _, _, _, ok := p.QMapOf(); ok {
		// QMap<K,V>
		rvalue = nameprefix

	} else if _, _, ok := p.QPairOf(); ok {
		// QPair<K,V>
		rvalue = nameprefix

	} else if p.Pointer && p.ParameterType == "char" {
		// Single char* argument
		rvalue = nameprefix

	} else if p.QtClassType() {
		// The C++ type is a pointer to Qt class
		// We want our functions to accept the C wrapper type, and forward as a pointer
		rvalue = "(" + p.RenderTypeC(cfs, true, false) + ")" + p.ParameterName

	} else if p.IntType() || p.IsFlagType() || p.IsKnownEnum() {
		rvalue = p.ParameterName

	} else if p.ParameterType == "bool" {
		if p.Pointer || p.ByRef {
			rvalue = "(" + p.RenderTypeC(cfs, true, false) + ")" + p.ParameterName // n.b. This may not work if the integer type conversion was wrong
		} else {
			rvalue = p.ParameterName
		}
	} else {
		// Default
		rvalue = p.ParameterName
	}

	return preamble, rvalue
}

func (cfs *cFileState) emitCabiToC(assignExpr string, rt CppParameter, rvalue string) string {
	shouldReturn := assignExpr
	afterword := ""
	namePrefix := makeNamePrefix(rt.ParameterName)

	if rt.Void() {
		return rvalue + ";"
	} else if rt.ParameterType == "void" && rt.Pointer {
		return assignExpr + rvalue + ";"
	} else if rt.ParameterType == "QString" ||
		rt.ParameterType == "QStringView" || rt.ParameterType == "QByteArray" {
		shouldReturn := "libqt_string " + namePrefix + "_str = "
		afterword += "char* " + namePrefix + "_ret = qstring_to_char(" + namePrefix + "_str);\n"
		afterword += "libqt_string_free(&" + namePrefix + "_str);\n"

		afterword += assignExpr + " " + namePrefix + "_ret;\n"
		return shouldReturn + rvalue + ";\n" + afterword

	} else if rt.ParameterType == "QAnyStringView" {
		shouldReturn := "char* " + namePrefix + "_ret = "

		afterword += assignExpr + " " + namePrefix + "_ret;\n"
		return shouldReturn + rvalue + ";\n" + afterword

	} else if rt.ParameterType == "QByteArrayView" {
		shouldReturn := rt.ParameterType + "* " + namePrefix + "_str = "
		afterword += "const char* " + namePrefix + "_ret = " + rt.ParameterType + "_Data(" + namePrefix + "_str);\n"

		afterword += assignExpr + " " + namePrefix + "_ret;\n"
		return shouldReturn + " " + rvalue + ";\n" + afterword

	} else if rt.ParameterType == "QAnyStringView" {
		shouldReturn := "libqt_string " + namePrefix + "_str = "
		afterword += assignExpr + " &" + namePrefix + "_str;\n"
		return shouldReturn + rvalue + ";\n" + afterword

	} else if rt.ParameterType == "char" && rt.Pointer {
		// Qt functions normally return QString - anything returning char*
		// is something like QByteArray.Data() where it returns an unsafe
		// internal pointer.
		// However in case this is a signal, we need to be able to marshal both
		// forwards and backwards with the same types, this has to be a string
		// in both cases.
		// This is not a libqt_string and therefore we did not allocate it
		// and therefore we don't have to free it either.
		return shouldReturn + " " + rvalue + ";\n"

	} else if t, _, ok := rt.QListOf(); ok {
		if t.ParameterType == "QString" || t.ParameterType == "QByteArray" {
			shouldReturn = "libqt_list " + namePrefix + "_arr = "
			afterword += "const libqt_string* " + namePrefix + "_qstr = (libqt_string*)" + namePrefix + "_arr.data.ptr;\n"
			afterword += "const char** " + namePrefix + "_ret = (const char**)malloc((" + namePrefix + "_arr.len + 1) * sizeof(const char*));\n"
			afterword += "for (size_t _i = 0; _i < " + namePrefix + "_arr.len; ++_i) {\n"
			afterword += "    " + namePrefix + "_ret[_i] = qstring_to_char(" + namePrefix + "_qstr[_i]);\n"
			afterword += "}\n"
			afterword += namePrefix + "_ret[" + namePrefix + "_arr.len] = NULL;\n"
			afterword += "for (size_t _i = 0; _i < " + namePrefix + "_arr.len; ++_i) {\n"
			afterword += "    libqt_string_free((libqt_string*)&" + namePrefix + "_qstr[_i]);\n"
			afterword += "}\n"
			afterword += "libqt_free(" + namePrefix + "_arr.data.ptr);\n"
			afterword += assignExpr + " " + namePrefix + "_ret;\n"
			return shouldReturn + rvalue + ";\n" + afterword
		} else {
			shouldReturn = "libqt_list " + namePrefix + "_arr = "

			afterword += assignExpr + " " + namePrefix + "_arr;"
			return shouldReturn + rvalue + ";\n" + afterword
		}

	} else if _, ok := rt.QSetOf(); ok {
		panic("QSet<> arguments are not supported")

	} else if _, _, _, ok := rt.QMapOf(); ok {
		return shouldReturn + " " + rvalue + ";\n"

	} else if _, _, ok := rt.QPairOf(); ok {
		return shouldReturn + " " + rvalue + ";\n"

	} else if rt.QtClassType() {
		// Construct our C type based on this inner C ABI type
		shouldReturn = "return"

		_, ok := KnownClassnames[rt.ParameterType]
		if !ok {
			panic("emitCabiToC: Encountered an unknown Qt class")
		}

		if rt.Pointer || rt.ByRef {
			return assignExpr + rvalue + ";"
		}

		return shouldReturn + " " + rvalue + ";"

	} else if rt.IntType() || rt.IsKnownEnum() || rt.IsFlagType() || rt.ParameterType == "bool" || rt.QtCppOriginalType != nil {

		if rt.Pointer || rt.ByRef {
			// Cast
			return shouldReturn + "(" + rt.RenderTypeC(cfs, true, false) + ")" + rvalue + ";"
		}

		return assignExpr + rvalue + ";"

	} else if reflect.TypeOf(rt.ParameterType).Kind() == reflect.String {
		// Single type conversion from C++ C ABI State to C State type
		// This should not be necessary in most cases.
		return shouldReturn + "(int)" + rvalue + ";"

	} else {
		panic(fmt.Sprintf("emitC::emitCabiToC missing type handler for parameter %+v", rt))
	}
}

// Helper function to recursively get methods from parent classes
func collectInheritedMethodsForC(class string, seenMethods map[string]struct{}) []InheritedMethod {
	var methods []InheritedMethod

	if pkg, ok := KnownClassnames[class]; ok {
		for _, m := range pkg.Class.Methods {
			if _, seen := seenMethods[m.MethodName]; !seen {
				if m.InheritedFrom != "" {
					continue
				}
				if m.IsConst && m.IsVirtual && m.IsProtected {
					continue
				}

				// Create a copy of the method to avoid modifying the original
				methodCopy := m
				// Apply typedefs to ensure proper type resolution
				applyTypedefs_Method(&methodCopy, pkg.Class.ClassName)
				if err := blocklist_MethodAllowed(&methodCopy); err != nil {
					continue
				}

				methods = append(methods, InheritedMethod{
					Method:      methodCopy,
					SourceClass: pkg.Class.ClassName,
				})
				seenMethods[m.MethodName] = struct{}{}
			}
		}

		for _, parentClass := range pkg.Class.DirectInherits {
			if parentMethods := collectInheritedMethodsForC(parentClass, seenMethods); parentMethods != nil {
				methods = append(methods, parentMethods...)
			}
		}
	}

	return methods
}

// Helper function to recursively get private signals from parent classes
func collectInheritedPrivateSignals(class string, seenSignals map[string]struct{}) []InheritedMethod {
	var signals []InheritedMethod

	if pkg, ok := KnownClassnames[class]; ok {
		for _, m := range pkg.Class.PrivateSignals {
			if _, seen := seenSignals[m.MethodName]; !seen {
				if m.InheritedFrom != "" {
					continue
				}

				// Create a copy of the method to avoid modifying the original
				methodCopy := m
				// Apply typedefs to ensure proper type resolution
				applyTypedefs_Method(&methodCopy, pkg.Class.ClassName)
				if err := blocklist_MethodAllowed(&methodCopy); err != nil {
					continue
				}

				signals = append(signals, InheritedMethod{
					Method:      methodCopy,
					SourceClass: pkg.Class.ClassName,
				})
				seenSignals[m.MethodName] = struct{}{}
			}
		}

		for _, parentClass := range pkg.Class.DirectInherits {
			if parentSignals := collectInheritedPrivateSignals(parentClass, seenSignals); parentSignals != nil {
				signals = append(signals, parentSignals...)
			}
		}
	}

	return signals
}

// Useful at the package level since we need to do the same thing
// for headers and code
var (
	qtMethodUrlOverrides = map[string]string{
		"metaObject":  "qobject",
		"qt_metacall": "",
		"qt_metacast": "",
		"tr":          "qobject",
	}

	// We need to brute force these for now
	skipFunction = map[string]struct{}{
		"QFileDevice_Close":        {},
		"QPaintDevice_PaintEngine": {},
	}

	linuxOnlyLookup = map[string]struct{}{
		"qsocketnotifier": {},
	}
)

func emitH(src *CppParsedHeader, headerName, packageName string) (string, error) {
	if len(src.Classes) == 0 && len(src.Enums) == 0 {
		return "", nil
	}

	ret := strings.Builder{}

	includeGuard := strings.ToUpper(strings.ReplaceAll(strings.ReplaceAll(packageName, `/`, `_`), `-`, `_`)) + "QT6C_LIB" + strings.ToUpper(strings.ReplaceAll(strings.ReplaceAll(headerName, `.`, `_`), `-`, `_`))
	bindingInclude := "qtlibc.h"
	var maybeDots string

	dirRoot := strings.TrimPrefix(packageName, "src/")
	dirRoot = strings.TrimPrefix(dirRoot, "src")

	cfs := cFileState{
		imports:            map[string]struct{}{},
		currentPackageName: dirRoot,
		currentHeaderName:  strings.TrimSuffix(headerName, ".h"),
	}

	if dirRoot != "" {
		bindingInclude = "../" + bindingInclude
		maybeDots = "../"
	}

	ret.WriteString(`#pragma once
#ifndef ` + includeGuard + `
#define ` + includeGuard + `

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "` + maybeDots + `libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "` + bindingInclude + `"` + "\n\n")

	for _, c := range src.Classes {
		virtualMethods := c.VirtualMethods()
		cStructName := cabiClassName(c.ClassName)
		nameIndex := 1
		if !strings.HasPrefix(cStructName, "Q") {
			nameIndex = 0
		}
		cMethodPrefix := "q_" + strings.ToLower(cStructName[nameIndex:])

		// Embed all inherited classes to directly allow calling inherited methods.
		// Only include the direct inherits; the recursive inherits will exist
		// on these types already
		seenInheritedMethods := make(map[string]struct{})

		for _, base := range c.DirectInherits {
			if parentMethods := collectInheritedMethodsForC(base, seenInheritedMethods); parentMethods != nil {
				for _, m := range parentMethods {
					seenInheritedMethods[m.Method.SafeMethodName()] = struct{}{}
				}
			}
			lowerClassName := strings.ToLower(cabiClassName(base))
			if lowerClassName == cfs.currentHeaderName {
				continue
			}
		}

		if len(c.Ctors) > 0 || len(c.Methods) > 0 || len(c.VirtualMethods()) > 0 {
			maybeCharts := ifv(strings.Contains(src.Filename, "QtCharts"), "-qtcharts", "")
			pageName := getPageName(cStructName) + maybeCharts
			ret.WriteString("\n\n/// " + getPageUrl(QtPage, pageName, "", cStructName) + "\n")
		}

		for i, ctor := range c.Ctors {
			if _, ok := moveCtorOnly[c.ClassName]; ok && !ctor.IsMoveCtor {
				continue
			}

			var backticks, maybeMoveCtor string

			if len(ctor.Parameters) > 0 {
				backticks = "```"
			}

			if ctor.IsMoveCtor {
				maybeMoveCtor = " object and invalidates the source " + c.ClassName
			}

			cfs.castType = cStructName
			ret.WriteString(`

/// ` + cMethodPrefix + `_new` + maybeSuffix(i) + ` constructs a new ` + c.ClassName + maybeMoveCtor +
				" object.\n///\n/// " + backticks + " " +
				cfs.emitCommentParametersC(ctor.Parameters, false) + " " + backticks + "\n" +
				cStructName + `* ` + cMethodPrefix + `_new` + maybeSuffix(i) + `(` + cfs.emitParametersC(ctor.Parameters, false) + `);` + "\n\n")
		}

		if c.HasTrivialCopyAssign {
			ret.WriteString("/// " + cMethodPrefix + "_copy_assign shallow copies `other` into `self`.\n" + "///\n" +
				"/// ``` " + cStructName + "* self, " + cStructName + "* other ```\n" +
				"void " + cMethodPrefix + "_copy_assign(void* self, void* other);\n\n")
		}

		if c.HasTrivialMoveAssign {
			ret.WriteString("/// " + cMethodPrefix + "_move_assign moves `other` into `self` and invalidates `other`.\n" + "///\n" +
				"/// ``` " + cStructName + "* self, " + cStructName + "* other ```\n" +
				"void " + cMethodPrefix + "_move_assign(void* self, void* other);\n\n")
		}

		seenMethods := make(map[string]struct{})
		baseMethods := c.Methods
		protectedMethods := c.ProtectedMethods()
		virtualEligible := AllowVirtualForClass(c.ClassName)

		if virtualEligible && len(virtualMethods) > 0 {
			virtualMethods = append(virtualMethods, protectedMethods...)
		}

		for _, m := range c.Methods {
			if !m.IsProtected {
				continue
			}

			if _, ok := nonPolymorphicClasses[c.ClassName]; ok {
				continue
			}

			virtualMethods = append(virtualMethods, m)
		}

		for _, m := range baseMethods {
			seenMethods[m.MethodName] = struct{}{}
		}

		for _, m := range virtualMethods {
			seenMethods[m.MethodName] = struct{}{}
		}

		var inheritedMethods []InheritedMethod
		for _, base := range c.DirectInherits {
			inherited := collectInheritedMethodsForC(base, seenMethods)
			if inherited != nil {
				inheritedMethods = append(inheritedMethods, inherited...)
			}
		}

		for _, im := range inheritedMethods {
			im.Method.InheritedFrom = im.SourceClass
			baseMethods = append(baseMethods, im.Method)
		}

		privateSignals := c.PrivateSignals
		var inheritedPrivateSignals []InheritedMethod
		for _, base := range c.DirectInherits {
			inheritedS := collectInheritedPrivateSignals(base, seenMethods)
			if inheritedS != nil {
				inheritedPrivateSignals = append(inheritedPrivateSignals, inheritedS...)
			}
		}

		for _, im := range inheritedPrivateSignals {
			im.Method.InheritedFrom = im.SourceClass
			privateSignals = append(privateSignals, im.Method)
		}

		previousMethods := map[string]struct{}{}
		seenMethodVariants := map[string]bool{}

		for _, m := range baseMethods {
			if m.IsProtected && m.InheritedFrom != "" {
				continue
			}

			if m.IsProtected && !virtualEligible {
				continue
			}

			mSafeMethodName := m.SafeMethodName()

			if _, ok := skippedMethods[c.ClassName+"_"+mSafeMethodName]; ok {
				if m.InheritedFrom == "" {
					continue
				}
			}

			var showHiddenParams bool
			if _, ok := seenMethodVariants[mSafeMethodName]; ok {
				continue
			}
			if b, ok := seenMethodVariants[m.MethodName]; ok {
				if b {
					continue
				} else {
					showHiddenParams = true
					seenMethodVariants[m.MethodName] = true
				}
			}
			seenMethodVariants[m.MethodName] = false
			seenMethodVariants[mSafeMethodName] = false

			if _, ok := previousMethods[mSafeMethodName]; ok {
				continue
			}
			if _, ok := previousMethods[m.MethodName]; ok {
				continue
			}

			cmdStructName := cStructName
			cmdMethodName := "q_" + strings.ToLower(cStructName[nameIndex:])
			safeMethodName := cSafeMethodName(mSafeMethodName)
			var inheritedFrom string
			if m.InheritedFrom != "" {
				inheritedFrom = "\n/// Inherited from " + m.InheritedFrom + "\n///"
				cmdStructName = m.InheritedFrom
			}

			if m.InheritedInClass != "" {
				inheritedFrom = "\n    /// Inherited from " + m.InheritedInClass + "\n    ///"
			}

			ret.WriteString(inheritedFrom)

			var docCommentUrl string
			className := ifv(m.InheritedInClass == "", cmdStructName, m.InheritedInClass)
			subjectURL := strings.ToLower(className)
			cmdURL := m.MethodName
			if m.OverrideMethodName != "" {
				cmdURL = m.OverrideMethodName
			}
			if newURL, ok := qtMethodUrlOverrides[cmdURL]; ok {
				subjectURL = newURL
			}
			if subjectURL != "" {
				maybeCharts := ifv(strings.Contains(src.Filename, "QtCharts") && inheritedFrom == "" && subjectURL != "qobject", "-qtcharts", "")
				pageURL := getPageUrl(QtPage, subjectURL+maybeCharts, cmdURL, className)
				docCommentUrl = "\n/// [Qt documentation](" + pageURL + ")\n///"
				ret.WriteString(docCommentUrl)
			}

			previousMethods[m.MethodName] = struct{}{}
			previousMethods[mSafeMethodName] = struct{}{}

			cfs.castType = cmdStructName

			returnTypeDecl := m.ReturnType.renderReturnTypeC(&cfs)

			var commaParams string
			if len(m.Parameters) > 0 {
				commaParams = ", "
			}

			commentParam := cStructName + "* self" + commaParams

			mSafeName := mSafeMethodName
			mTrim := mSafeName[:len(mSafeName)-1]
			method := safeMethodName + `(void* self` + commaParams
			if m.IsStatic {
				commentParam = ""
				method = safeMethodName + `(`
			}

			if mSafeMethodName == "Tr" || mTrim == "Tr" {
				commentParam = ""
			}

			var backticks string
			if commentParam != "" || len(m.Parameters) > 0 {
				backticks = "```"
			}

			ret.WriteString("\n/// " + backticks + " " +
				commentParam + cfs.emitCommentParametersC(m.Parameters, false) +
				" " + backticks + "\n" +
				returnTypeDecl + " " + cmdMethodName + method + cfs.emitParametersC(m.Parameters, false) + ");\n")

			// Add Connect() wrappers for signal functions
			if m.IsSignal {
				addConnect := true
				if _, ok := noQtConnect[cmdStructName]; ok {
					addConnect = false
				}

				if addConnect {
					slotComma := ifv(len(m.Parameters) != 0, ", ", "")
					ret.WriteString(inheritedFrom + docCommentUrl + "\n/// ``` " + cStructName + "* self, void (*slot)(" +
						cStructName + "*" + slotComma + cfs.emitCommentParametersC(m.Parameters, true) + ") ```\n")

					ret.WriteString("void " + cmdMethodName + "_on" + safeMethodName + "(void* self, void (*slot)(void*" +
						slotComma + cfs.emitParametersC(m.Parameters, true) + "));\n")
				}
			}

			// We need to brute force these for now
			if _, ok := skipFunction[cmdStructName+"_"+mSafeMethodName]; ok {
				continue
			}

			if !AllowVirtual(m) {
				continue
			}

			if (m.IsVirtual || m.IsProtected) && len(virtualMethods) > 0 && virtualEligible {
				var maybeCommentStruct, maybeVoid, maybeComma string
				if len(m.Parameters) > 0 {
					maybeComma = ", "
				}
				if showHiddenParams && (len(m.Parameters) > 0 || len(m.HiddenParams) > 0) {
					maybeComma = ", "
				}
				if len(m.Parameters) != 0 {
					maybeCommentStruct = cStructName + "*" + maybeComma
					maybeVoid = "void*"
				}
				if showHiddenParams && len(m.HiddenParams) != 0 {
					maybeCommentStruct = cStructName + "*" + maybeComma
					maybeVoid = "void*"
				}

				onDocComment := "\n/// Allows for overriding the related default method\n    ///"
				ret.WriteString(inheritedFrom + docCommentUrl + onDocComment + "\n/// ``` " + cStructName +
					"* self, " + m.ReturnType.renderReturnTypeC(&cfs) + " (*slot)(" + maybeCommentStruct +
					cfs.emitCommentParametersC(m.Parameters, true) + ") ```\n" +
					`void ` + cmdMethodName + "_on" + safeMethodName + `(void* self, ` + m.ReturnType.renderReturnTypeC(&cfs) +
					`(*slot)(` + maybeVoid + maybeComma + cfs.emitParametersC(m.Parameters, true) + `)` + `);` + "\n")

				qbaseDocComment := "\n/// Base class method implementation\n    ///"
				baseMethodName := "q_" + strings.ToLower(cStructName[nameIndex:]) + "_qbase"
				ret.WriteString(inheritedFrom + docCommentUrl + qbaseDocComment + "\n/// " + backticks + " " +
					commentParam + cfs.emitCommentParametersC(m.Parameters, false) +
					" " + backticks + "\n" +
					returnTypeDecl + " " + baseMethodName + method + cfs.emitParametersC(m.Parameters, false) + ");\n")
			}
		}

		seenVirtuals := map[string]bool{}

		for _, m := range virtualMethods {
			if !virtualEligible {
				continue
			}

			mSafeMethodName := m.SafeMethodName()

			if _, ok := skippedMethods[c.ClassName+"_"+mSafeMethodName]; ok {
				if m.InheritedFrom == "" {
					continue
				}
			}

			var showHiddenParams bool
			if _, ok := seenVirtuals[mSafeMethodName]; ok {
				continue
			}
			if b, ok := seenVirtuals[m.MethodName]; ok {
				if b {
					continue
				} else {
					showHiddenParams = true
					seenVirtuals[m.MethodName] = true
				}
			}
			seenVirtuals[m.MethodName] = false
			seenVirtuals[mSafeMethodName] = false

			if _, ok := previousMethods[m.MethodName]; ok {
				continue
			}
			previousMethods[m.MethodName] = struct{}{}
			previousMethods[mSafeMethodName] = struct{}{}

			cmdStructName := cStructName
			cmdMethodName := "q_" + strings.ToLower(cStructName[nameIndex:])
			safeMethodName := cSafeMethodName(mSafeMethodName)

			var inheritedFrom, commaParams string
			if len(m.Parameters) > 0 {
				commaParams = ", "
			}
			// Include inheritance information if we have it
			if m.InheritedFrom != "" {
				inheritedFrom = "\n/// Inherited from " + m.InheritedFrom + "\n ///"
				cmdStructName = m.InheritedFrom
			}

			if m.InheritedInClass != "" {
				inheritedFrom = "\n/// Inherited from " + m.InheritedInClass + "\n ///"
			}

			className := ifv(m.InheritedInClass == "", cmdStructName, m.InheritedInClass)
			subjectURL := strings.ToLower(className)
			cmdURL := m.MethodName
			if m.OverrideMethodName != "" {
				cmdURL = m.OverrideMethodName
			}
			maybeCharts := ifv(strings.Contains(src.Filename, "QtCharts") && inheritedFrom == "", "-qtcharts", "")
			pageURL := getPageUrl(QtPage, subjectURL+maybeCharts, cmdURL, className)
			documentationURL := "\n/// [Qt documentation](" + pageURL + ")\n///"

			// Add a package-private function to call the C++ base class method
			// QWidget_PaintEvent
			cfs.castType = cStructName
			returnTypeDecl := m.ReturnType.renderReturnTypeC(&cfs)
			cfsParams := cfs.emitParametersC(m.Parameters, false)

			headerComment := "\n/// Wrapper to allow calling virtual or protected method\n ///\n"

			ret.WriteString(inheritedFrom + documentationURL + headerComment + "/// ``` " + cStructName + "* self" +
				commaParams + cfs.emitCommentParametersC(m.Parameters, false) + " ```\n" +
				returnTypeDecl + ` ` + cmdMethodName + safeMethodName + `(void* self` + commaParams + cfsParams + `);` + "\n")

			if !AllowVirtual(m) {
				continue
			}

			headerComment = "\n/// Wrapper to allow calling base class virtual or protected method\n ///\n"

			ret.WriteString(inheritedFrom + documentationURL + headerComment + "/// ``` " + cStructName + "* self" +
				commaParams + cfs.emitCommentParametersC(m.Parameters, false) + " ```\n" +
				returnTypeDecl + ` ` + cmdMethodName + "_qbase" + safeMethodName + `(void* self` + commaParams + cfsParams + `);` + "\n")

			var maybeCommentStruct, maybeVoid string
			if showHiddenParams && (len(m.Parameters) > 0 || len(m.HiddenParams) > 0) {
				commaParams = ", "
			}

			if len(m.Parameters) != 0 {
				maybeCommentStruct = cStructName + "*" + commaParams
				maybeVoid = "void*"
			}
			if showHiddenParams && len(m.HiddenParams) != 0 {
				maybeCommentStruct = cStructName + "*" + commaParams
				maybeVoid = "void*"
			}

			headerComment = "\n/// Wrapper to allow overriding base class virtual or protected method\n ///\n"

			ret.WriteString(inheritedFrom + documentationURL + headerComment + "/// ``` " + cStructName +
				"* self, " + m.ReturnType.renderReturnTypeC(&cfs) + " (*slot)(" + maybeCommentStruct +
				cfs.emitCommentParametersC(m.Parameters, true) + ") ```\n" +
				`void ` + cmdMethodName + "_on" + safeMethodName + `(void* self, ` + m.ReturnType.renderReturnTypeC(&cfs) +
				`(*slot)(` + maybeVoid + commaParams + cfs.emitParametersC(m.Parameters, true) + `)` + `);` + "\n")

		}

		for _, m := range privateSignals {
			cmdStructName := cStructName
			cmdMethodName := "q_" + strings.ToLower(cStructName[nameIndex:])
			safeMethodName := cSafeMethodName(m.SafeMethodName())
			var inheritedFrom, docCommentUrl string
			if m.InheritedFrom != "" {
				inheritedFrom = "\n/// Inherited from " + m.InheritedFrom + "\n///"
				cmdStructName = m.InheritedFrom
			}

			if m.InheritedInClass != "" {
				inheritedFrom = "\n    /// Inherited from " + m.InheritedInClass + "\n    ///"
			}

			className := ifv(m.InheritedInClass == "", cmdStructName, m.InheritedInClass)
			subjectURL := strings.ToLower(className)
			cmdURL := m.MethodName
			if m.OverrideMethodName != "" {
				cmdURL = m.OverrideMethodName
			}
			if newURL, ok := qtMethodUrlOverrides[cmdURL]; ok {
				subjectURL = newURL
			}
			if subjectURL != "" {
				maybeCharts := ifv(strings.Contains(src.Filename, "QtCharts") && inheritedFrom == "" && subjectURL != "qobject", "-qtcharts", "")
				pageURL := getPageUrl(QtPage, subjectURL+maybeCharts, cmdURL, className)
				docCommentUrl = "\n/// [Qt documentation](" + pageURL + ")\n///\n"
			}

			slotComma := ifv(len(m.Parameters) != 0, ", ", "")
			headerComment := "/// Wrapper to allow calling private signal\n///"

			ret.WriteString(inheritedFrom + docCommentUrl + headerComment + "\n/// ``` " + cStructName + "* self, void (*slot)(" +
				cStructName + "*" + slotComma + cfs.emitCommentParametersC(m.Parameters, true) + ") ```\n")

			ret.WriteString("void " + cmdMethodName + "_on" + safeMethodName + "(void* self, void (*slot)(void*" +
				slotComma + cfs.emitParametersC(m.Parameters, true) + "));\n")
		}

		if c.CanDelete && (len(c.Methods) > 0 || len(c.VirtualMethods()) > 0 || len(c.Ctors) > 0) {
			maybeCharts := ifv(strings.Contains(src.Filename, "QtCharts"), "-qtcharts", "")
			pageUrl := getPageUrl(DtorPage, getPageName(c.ClassName)+maybeCharts, "", c.ClassName)
			ret.WriteString(ifv(pageUrl != "", "\n/// [Qt documentation]("+pageUrl+")\n///\n", "\n") +
				`/// Delete this object from C++ memory.
///
` + "/// ``` " + cStructName + "* self ```\n" +
				"void q_" + cSafeMethodName(strings.ToLower(cStructName[nameIndex:])) + `_delete(void* self);` + "\n\n")
		}
	}

	if len(src.Enums) > 0 {
		pageName := getPageName(cfs.currentHeaderName)
		maybeCharts := ifv(strings.Contains(src.Filename, "QtCharts"), "-qtcharts", "")
		pageUrl := getPageUrl(EnumPage, pageName+maybeCharts, "", "")
		maybeUrl := ifv(pageUrl != "", "\n\n/// "+pageUrl, "")
		ret.WriteString(maybeUrl + "\n\n")
	}

	for _, e := range src.Enums {
		if e.EnumName == "" {
			continue // Removed by transformRedundant AST pass
		}

		cEnumName := cabiEnumClassName(e.EnumName) // Fully qualified name of the enum

		ret.WriteString("\n" + `typedef enum {
`)
		if len(e.Entries) > 0 {
			for i, ee := range e.Entries {
				enumPrefix := strings.ToUpper(strings.ReplaceAll(e.EnumName, "::", "_"))
				entryName := ee.EntryName
				if !(strings.HasPrefix(entryName, "Key_") && enumPrefix == "QT_KEY") && !strings.HasPrefix(entryName, "PercentString") {
					entryName = strings.ToUpper(cabiEnumClassName(ee.EntryName))
				}
				entryName = strings.ReplaceAll(entryName, "___", "_")
				ret.WriteString("    " + enumPrefix + "_" + entryName + " = " + ee.EntryValue)
				if i < len(e.Entries)-1 {
					ret.WriteString(",\n")
				} else {
					ret.WriteString("\n")
				}
			}
		} else {
			ret.WriteString(cEnumName + "_dummy = 0\n")
		}
		if _, ok := KnownEnums[cEnumName]; ok {
			cEnumName += "__"
		}
		// this is an enum class workaround
		if cEnumName == "QCborSimpleType__" {
			cEnumName = strings.ToUpper(cfs.currentHeaderName) + "_" + cEnumName
		}
		ret.WriteString("} " + cEnumName + ";\n\n")
	}

	ret.WriteString(`#endif
`)
	return ret.String(), nil
}

func emitC(src *CppParsedHeader, headerName, packageName string) (string, error) {
	if len(src.Classes) == 0 {
		return "", nil
	}

	ret := strings.Builder{}

	var parentInclude string

	dirRoot := strings.TrimPrefix(packageName, "src/")
	dirRoot = strings.TrimPrefix(dirRoot, "src")

	cfs := cFileState{
		imports:            map[string]struct{}{},
		currentPackageName: dirRoot,
		currentHeaderName:  strings.TrimSuffix(headerName, ".h"),
	}

	seenRefs := map[string]struct{}{cfs.currentHeaderName: {}}

	for _, ref := range getReferencedTypes(src) {
		if dirRoot != "" {
			parentInclude = "../"
		}

		if cabiPreventStructDeclaration(ref) {
			continue
		}

		if _, ok := seenRefs[ref]; ok {
			continue
		}
		seenRefs[ref] = struct{}{}

		if strings.Contains(ref, "::") || !ImportHeaderForClass(ref, false) {
			continue
		}

		var refInc string
		include, ok := KnownIncludes[ref]
		if ok {
			refInc = include.Filename[:len(include.Filename)-2]
		} else {
			continue
		}

		if _, ok := seenRefs[refInc]; ok {
			continue
		}
		seenRefs[refInc] = struct{}{}

		if include.PackageName != cfs.currentPackageName {
			if include.PackageName == "" {
				parentInclude = "../"
			} else {
				parentInclude = "../" + include.PackageName + "/"
			}
		} else {
			parentInclude = ""
		}

		ret.WriteString(`#include "` + parentInclude + `lib` + refInc + `.hpp"` + "\n")
	}

	if _, ok := linuxOnlyLookup[cfs.currentHeaderName]; ok {
		ret.WriteString(`#include <stdio.h>` + "\n")
	}

	ret.WriteString(`%%_IMPORTLIBS_%%#include "lib` + headerName + `pp"
#include "lib` + headerName + `"
`)

	// Check if short-named enums are allowed.
	// We only allow short names if there are no conflicts anywhere in the whole
	// file. This doesn't fully defend against cross-file conflicts but those
	// should hopefully be rare enough
	preventShortNames := map[string]struct{}{}
	{
		nameTest := map[string]string{}
	nextEnum:
		for _, e := range src.Enums {

			shortEnumName := e.ShortEnumName()

			// Disallow entry<-->entry collisions
			for _, ee := range e.Entries {
				if other, ok := nameTest[shortEnumName+"::"+ee.EntryName]; ok {
					preventShortNames[e.EnumName] = struct{}{} // Our full enum name
					preventShortNames[other] = struct{}{}      // Their full enum name
					continue nextEnum
				}
				nameTest[shortEnumName+"::"+ee.EntryName] = e.EnumName

				if _, ok := KnownClassnames[shortEnumName+"::"+ee.EntryName]; ok {
					preventShortNames[e.EnumName] = struct{}{}
					continue nextEnum
				}
				if _, ok := KnownEnums[shortEnumName+"::"+ee.EntryName]; ok {
					preventShortNames[e.EnumName] = struct{}{}
					continue nextEnum
				}

			}
		}
	}

	for _, c := range src.Classes {
		virtualMethods := c.VirtualMethods()
		cStructName := cabiClassName(c.ClassName)
		nameIndex := 1
		if !strings.HasPrefix(cStructName, "Q") {
			nameIndex = 0
		}
		cMethodPrefix := "q_" + strings.ToLower(cStructName[nameIndex:])

		// Embed all inherited classes to directly allow calling inherited methods.
		seenInheritedMethods := make(map[string]struct{})

		for _, base := range c.DirectInherits {
			if parentMethods := collectInheritedMethodsForC(base, seenInheritedMethods); parentMethods != nil {
				for _, m := range parentMethods {
					seenInheritedMethods[m.Method.SafeMethodName()] = struct{}{}
				}
			}
			lowerClassName := strings.ToLower(cabiClassName(base))
			if lowerClassName == cfs.currentHeaderName {
				continue
			}
			if strings.HasPrefix(base, `QList<`) {
				ret.WriteString("\n// Also inherits unprojectable " + base + "\n")
			}
		}

		ret.WriteString("\n")

		for i, ctor := range c.Ctors {
			if _, ok := moveCtorOnly[c.ClassName]; ok && !ctor.IsMoveCtor {
				continue
			}

			cfs.castType = cStructName
			preamble, forwarding := cfs.emitParametersC2CABIForwarding(ctor)

			if ctor.LinuxOnly {

				ret.WriteString(cStructName + `* ` + cMethodPrefix + `_new` + maybeSuffix(i) + `(` + cfs.emitParametersC(ctor.Parameters, false) + `) {
        #ifdef __linux__
            return ` + cStructName + `_new` + maybeSuffix(i) + `(` + forwarding + `);
        #else
            fprintf(stderr, "Error: Unsupported operating system\n");
            abort();
        #endif
}` + "\n\n")
			} else {
				if preamble != "" {
					preamble = "        " + preamble + "\n"
				}

				ret.WriteString(cStructName + `* ` + cMethodPrefix + `_new` + maybeSuffix(i) + `(` + cfs.emitParametersC(ctor.Parameters, false) + `) {
` +
					preamble +
					`    return ` + cStructName + `_new` + maybeSuffix(i) + `(` + forwarding + `);
}` + "\n\n")
			}
		}

		if c.HasTrivialCopyAssign {
			ret.WriteString("void " + cMethodPrefix + "_copy_assign(void* self, void* other) {\n" +
				cStructName + "_CopyAssign((" + cStructName + "*)self, (" + cStructName + "*)other);\n" + "}\n\n")
		}

		if c.HasTrivialMoveAssign {
			ret.WriteString("void " + cMethodPrefix + "_move_assign(void* self, void* other) {\n" +
				cStructName + "_MoveAssign((" + cStructName + "*)self, (" + cStructName + "*)other);\n" + "}\n\n")
		}

		seenMethods := make(map[string]struct{})
		baseMethods := c.Methods
		protectedMethods := c.ProtectedMethods()
		virtualEligible := AllowVirtualForClass(c.ClassName)

		if virtualEligible && len(virtualMethods) > 0 {
			virtualMethods = append(virtualMethods, protectedMethods...)
		}

		for _, m := range c.Methods {
			if !m.IsProtected {
				continue
			}

			if _, ok := nonPolymorphicClasses[c.ClassName]; ok {
				continue
			}

			virtualMethods = append(virtualMethods, m)
		}

		for _, m := range baseMethods {
			seenMethods[m.MethodName] = struct{}{}
		}

		for _, m := range virtualMethods {
			seenMethods[m.MethodName] = struct{}{}
		}

		var inheritedMethods []InheritedMethod
		for _, base := range c.DirectInherits {
			inherited := collectInheritedMethodsForC(base, seenMethods)
			if inherited != nil {
				inheritedMethods = append(inheritedMethods, inherited...)
			}
		}

		for _, im := range inheritedMethods {
			im.Method.InheritedFrom = im.SourceClass
			baseMethods = append(baseMethods, im.Method)
		}

		privateSignals := c.PrivateSignals
		var inheritedPrivateSignals []InheritedMethod
		for _, base := range c.DirectInherits {
			inheritedS := collectInheritedPrivateSignals(base, seenMethods)
			if inheritedS != nil {
				inheritedPrivateSignals = append(inheritedPrivateSignals, inheritedS...)
			}
		}

		for _, im := range inheritedPrivateSignals {
			im.Method.InheritedFrom = im.SourceClass
			privateSignals = append(privateSignals, im.Method)
		}

		previousMethods := map[string]struct{}{}
		seenMethodVariants := map[string]bool{}

		for _, m := range baseMethods {
			if m.IsProtected && m.InheritedFrom != "" {
				continue
			}

			if m.IsProtected && !virtualEligible {
				continue
			}

			mSafeMethodName := m.SafeMethodName()

			if _, ok := skippedMethods[c.ClassName+"_"+mSafeMethodName]; ok {
				if m.InheritedFrom == "" {
					continue
				}
			}

			var showHiddenParams bool
			if _, ok := seenMethodVariants[mSafeMethodName]; ok {
				continue
			}
			if b, ok := seenMethodVariants[m.MethodName]; ok {
				if b {
					continue
				} else {
					showHiddenParams = true
					seenMethodVariants[m.MethodName] = true
				}
			}
			seenMethodVariants[m.MethodName] = false
			seenMethodVariants[mSafeMethodName] = false

			if _, ok := previousMethods[mSafeMethodName]; ok {
				continue
			}
			if _, ok := previousMethods[m.MethodName]; ok {
				continue
			}

			cmdStructName := cStructName
			cmdMethodName := "q_" + strings.ToLower(cStructName[nameIndex:])
			safeMethodName := cSafeMethodName(mSafeMethodName)
			if m.InheritedFrom != "" {
				cmdStructName = m.InheritedFrom
			}

			previousMethods[m.MethodName] = struct{}{}
			previousMethods[mSafeMethodName] = struct{}{}

			cfs.castType = cmdStructName
			preamble, forwarding := cfs.emitParametersC2CABIForwarding(m)
			returnTypeDecl := m.ReturnType.renderReturnTypeC(&cfs)
			rvalue := cmdStructName + "_" + mSafeMethodName + "(" + forwarding + ")"
			returnFunc := cfs.emitCabiToC("return ", m.ReturnType, rvalue)

			var commaParams string
			if len(m.Parameters) > 0 {
				commaParams = ", "
			}

			method := safeMethodName + "(void* self" + commaParams
			if m.IsStatic {
				method = safeMethodName + "("
			}

			ret.WriteString(returnTypeDecl + " " + cmdMethodName + method + cfs.emitParametersC(m.Parameters, false) + ") {")

			if m.LinuxOnly {
				ret.WriteString(`
    #ifndef __linux__
        fprintf(stderr, "Error: Unsupported operating system\n");
        abort();
    #endif
`)
			}

			ret.WriteString(`
    ` + preamble +
				returnFunc + `
}` + "\n\n")

			// Add Connect() wrappers for signal functions
			if m.IsSignal {
				var slotComma string
				if len(m.Parameters) != 0 {
					slotComma = ", "
				}

				addConnect := true
				if _, ok := noQtConnect[cmdStructName]; ok {
					addConnect = false
				}
				if addConnect {
					ret.WriteString("void " + cmdMethodName + "_on" + safeMethodName + "(void* self, void (*slot)(void*" +
						slotComma + cfs.emitParametersC(m.Parameters, true) + `)) {
    ` + cmdStructName + "_Connect_" + mSafeMethodName + "((" + cmdStructName + "*)" + `self, (intptr_t)slot);
}` + "\n\n")
				}
			}

			// We need to brute force these for now
			if _, ok := skipFunction[cmdStructName+"_"+mSafeMethodName]; ok {
				continue
			}

			if !AllowVirtual(m) {
				continue
			}

			if (m.IsVirtual || m.IsProtected) && len(virtualMethods) > 0 && virtualEligible {
				var maybeVoid, maybeComma string
				if len(m.Parameters) > 0 {
					maybeComma = ", "
				}
				if showHiddenParams && (len(m.Parameters) > 0 || len(m.HiddenParams) > 0) {
					maybeComma = ", "
				}
				if len(m.Parameters) != 0 {
					maybeVoid = "void*"
				}
				if showHiddenParams && len(m.HiddenParams) != 0 {
					maybeVoid = "void*"
				}

				ret.WriteString(`void ` + cmdMethodName + "_on" + safeMethodName + `(void* self, ` + m.ReturnType.renderReturnTypeC(&cfs) +
					`(*slot)(` + maybeVoid + maybeComma + cfs.emitParametersC(m.Parameters, true) + `)` + `) {
` + cmdStructName + "_On" + mSafeMethodName + "((" + cmdStructName + "*)" + `self, (intptr_t)slot);
}` + "\n\n")

				baseMethodName := "q_" + strings.ToLower(cStructName[nameIndex:]) + "_qbase"
				baseCallTarget := cmdStructName + "_QBase" + mSafeMethodName + "(" + forwarding + ")"
				basereturnFunc := cfs.emitCabiToC("return ", m.ReturnType, baseCallTarget)

				ret.WriteString(returnTypeDecl + " " + baseMethodName + method + cfs.emitParametersC(m.Parameters, false) + ") {")

				if m.LinuxOnly {
					ret.WriteString(`
#ifndef __linux__
    fprintf(stderr, "Error: Unsupported operating system\n");
    abort();
#endif
`)
				}

				ret.WriteString(`
` + preamble +
					basereturnFunc + `
}` + "\n\n")
			}
		}

		seenVirtuals := map[string]bool{}

		for _, m := range virtualMethods {
			if !virtualEligible {
				continue
			}

			mSafeMethodName := m.SafeMethodName()

			if _, ok := skippedMethods[c.ClassName+"_"+mSafeMethodName]; ok {
				if m.InheritedFrom == "" {
					continue
				}
			}

			var showHiddenParams bool
			if _, ok := seenVirtuals[mSafeMethodName]; ok {
				continue
			}
			if b, ok := seenVirtuals[m.MethodName]; ok {
				if b {
					continue
				} else {
					showHiddenParams = true
					seenVirtuals[m.MethodName] = true
				}
			}
			seenVirtuals[m.MethodName] = false
			seenVirtuals[mSafeMethodName] = false

			if _, ok := previousMethods[m.MethodName]; ok {
				continue
			}
			previousMethods[m.MethodName] = struct{}{}
			previousMethods[mSafeMethodName] = struct{}{}

			cmdStructName := cStructName
			cmdMethodName := "q_" + strings.ToLower(cStructName[nameIndex:])
			safeMethodName := cSafeMethodName(mSafeMethodName)

			var commaParams string
			if len(m.Parameters) > 0 {
				commaParams = ", "
			}

			// Add a package-private function to call the C++ base class method
			// QWidget_PaintEvent
			cfs.castType = cStructName
			preamble, forwarding := cfs.emitParametersC2CABIForwarding(m)
			forwarding = strings.TrimPrefix(forwarding, `self`)
			returnTypeDecl := m.ReturnType.renderReturnTypeC(&cfs)
			cfsParams := cfs.emitParametersC(m.Parameters, false)
			returnFunc := cfs.emitCabiToC("return ", m.ReturnType, cmdStructName+"_"+mSafeMethodName+"("+forwarding+")")

			ret.WriteString(returnTypeDecl + ` ` + cmdMethodName + safeMethodName + `(void* self` + commaParams + cfsParams + `) {` +
				"\n    " + preamble +
				returnFunc + `
    }` + "\n\n")

			if !AllowVirtual(m) {
				continue
			}

			returnFunc = cfs.emitCabiToC("return ", m.ReturnType, cmdStructName+"_QBase"+mSafeMethodName+"("+forwarding+")")

			ret.WriteString(returnTypeDecl + ` ` + cmdMethodName + "_qbase" + safeMethodName + `(void* self` + commaParams + cfsParams + `) {` +
				"\n    " + preamble +
				returnFunc + `
    }` + "\n\n")

			var maybeVoid string
			if showHiddenParams && (len(m.Parameters) > 0 || len(m.HiddenParams) > 0) {
				commaParams = ", "
			}
			if len(m.Parameters) != 0 {
				maybeVoid = "void*"
			}
			if showHiddenParams && len(m.HiddenParams) != 0 {
				maybeVoid = "void*"
			}

			ret.WriteString(`void ` + cmdMethodName + "_on" + safeMethodName + `(void* self, ` + m.ReturnType.renderReturnTypeC(&cfs) +
				`(*slot)(` + maybeVoid + commaParams + cfs.emitParametersC(m.Parameters, true) + `)` + `) {
` + cmdStructName + "_On" + mSafeMethodName + "((" + cmdStructName + "*)" + `self, (intptr_t)slot);
}` + "\n\n")

		}

		for _, m := range privateSignals {
			cmdStructName := cStructName
			mSafeMethodName := m.SafeMethodName()
			cmdMethodName := "q_" + strings.ToLower(cStructName[nameIndex:])
			safeMethodName := cSafeMethodName(mSafeMethodName)
			if m.InheritedFrom != "" {
				cmdStructName = m.InheritedFrom
			}
			var slotComma string
			if len(m.Parameters) != 0 {
				slotComma = ", "
			}

			ret.WriteString("void " + cmdMethodName + "_on" + safeMethodName + "(void* self, void (*slot)(void*" +
				slotComma + cfs.emitParametersC(m.Parameters, true) + `)) {
    ` + cmdStructName + "_Connect_" + mSafeMethodName + "((" + cmdStructName + "*)" + `self, (intptr_t)slot);
}` + "\n\n")
		}

		if c.CanDelete && (len(c.Methods) > 0 || len(c.VirtualMethods()) > 0 || len(c.Ctors) > 0) {
			ret.WriteString("void q_" + cSafeMethodName(strings.ToLower(cStructName[nameIndex:])) + `_delete(void* self) {
    ` + cStructName + "_Delete((" + cStructName + `*)(self));
}` + "\n")
		}
	}

	cSrc := ret.String()

	// Fixup imports and struct definitions
	if len(cfs.imports) > 0 {
		allImports := make([]string, 0, len(cfs.imports))
		for k := range cfs.imports {
			if !strings.Contains(cSrc, "lib"+k+".hpp") {
				dotInclude := ""
				if packageName != "" && k == "qcoreevent" {
					dotInclude = "../"
				}

				allImports = append(allImports, `#include "`+dotInclude+`lib`+k+`.hpp"`+"\n")
			}
		}

		cSrc = strings.ReplaceAll(cSrc, "%%_IMPORTLIBS_%%", strings.Join(allImports, "\n"))
	} else {
		cSrc = strings.ReplaceAll(cSrc, "%%_IMPORTLIBS_%%", "")
	}
	return cSrc, nil
}
