package main

import (
	"C"
	"fmt"
	"path/filepath"
	"reflect"
	"strings"
	"unicode"
)

// not language-reserved words, but binding-reserved words
func reservedWordC(s string) bool {
	switch s {
	case "default", "const", "var", "len", "new", "copy", "import",
		"string", "map", "int", "select", "ret", "suspend", "null", "self":
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
	'"': "-22",
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

const (
	preUrl  = "/// [Upstream resources]("
	postUrl = ")\n"
)

func getPageUrl(pageType PageType, pageName, cmdURL, className string) string {
	if strings.HasPrefix(pageName, "qsci") {
		if pageType == EnumPage {
			return ""
		}
		return preUrl + "https://www.riverbankcomputing.com/static/Docs/QScintilla/class" + className + ".html" + postUrl
	}

	if strings.HasPrefix(pageName, "layershellqt") {
		return preUrl + "https://invent.kde.org/plasma/layer-shell-qt" + postUrl
	}

	if strings.HasPrefix(pageName, "kcolorpicker") {
		return preUrl + "https://github.com/ksnip/kcolorpicker" + postUrl
	}

	if strings.HasPrefix(pageName, "kimageannotator") {
		return preUrl + "https://github.com/ksnip/kImageAnnotator" + postUrl
	}

	if strings.HasPrefix(pageName, "packagekit") {
		return preUrl + "https://github.com/PackageKit/PackageKit-Qt" + postUrl
	}

	if strings.HasPrefix(pageName, "qkeychain") {
		return preUrl + "https://github.com/frankosterfeld/qtkeychain" + postUrl
	}

	if strings.HasPrefix(pageName, "Accounts__") {
		return preUrl + "https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1" + strings.ToUpper(pageName[10:11]) + pageName[11:] + ".html" + postUrl
	}

	if strings.HasPrefix(pageName, "SignOn__") {
		return preUrl + "https://accounts-sso.gitlab.io/signond/classSignOn_1_1" + strings.ToUpper(pageName[8:9]) + pageName[9:] + ".html" + postUrl
	}

	if pageType == DtorPage && strings.Contains(className, "__") {
		return ""
	}

	if strings.HasPrefix(pageName, "qtermwidget") || strings.HasPrefix(className, "Keyboard") ||
		strings.HasPrefix(className, "Konsole") || pageName == "emulation" || pageName == "filter" {
		return preUrl + "https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api" + postUrl
	}

	qtUrl := "https://doc.qt.io/qt-6/"
	types := ifv(pageName == "qt", "types", "public-types")
	if pageName[0] != 'q' && pageName != "disambiguated_t" &&
		pageName != "partial_ordering" && pageName != "weak_ordering" && pageName != "strong_ordering" {
		qtUrl = "https://api.kde.org/"
		pageName = strings.TrimSuffix(pageName, "_1")
	}

	if pageName == "qcustomplot" || strings.HasPrefix(pageName, "QCP") {
		pageName = ifv(pageName == "qcustomplot", "QCustomPlot", pageName)
		prefix := ifv(pageName == "QCP", "namespace", "class")
		qtUrl = "https://www.qcustomplot.com/documentation/" + prefix
		types = "pub-types"
		cmdURL = ""
		if pageType == DtorPage {
			pageType = QtPage
		}
	}

	pageName = strings.ReplaceAll(pageName, "__", "-")
	pageName = strings.ReplaceAll(pageName, "_", "-")

	switch pageType {
	case QtPage:
		if strings.HasPrefix(cmdURL, "operator") {
			cmdURL = operatorToUrl(cmdURL)
		}

		return preUrl + qtUrl + pageName + ".html" + ifv(cmdURL != "", "#"+cmdURL, "") + postUrl
	case EnumPage:
		return preUrl + qtUrl + pageName + ".html#" + types + postUrl
	case DtorPage:
		return preUrl + qtUrl + pageName + ".html#dtor." + className + postUrl
	}
	return ""
}

// cabiEnumName returns the C ABI enum name for a Qt C++ class.
func cabiEnumName(className string) string {
	// Many types are defined in qnamespace.h under Qt::
	// The C implementation for the enums replaces the namespace
	// with __ and uppercases the values. Some values are also
	// prefixed to avoid collisions.
	name := strings.Split(className, "::")
	enumName := name[len(name)-1]
	return strings.ReplaceAll(enumName, "::", "__")
}

// cabiEnumClassName returns the C ABI enum class name for a Qt C++ class.
// Normally this is the same, except for class types that are nested inside another class definition.
func cabiEnumClassName(className string) string {
	// Must use __ to avoid subclass/method name collision e.g. QPagedPaintDevice::Margins
	return strings.ReplaceAll(className, "::", "__")
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
			return "const char" + strings.Repeat("*", max(p.PointerCount, 1))
		}
		return "char*"
	}

	if p.ParameterType == "QString" || p.ParameterType == "QByteArrayView" ||
		p.ParameterType == "QStringView" || p.ParameterType == "SignOn::MethodName" {
		return "const char*"
	}

	if t, _, ok := p.QListOf(); ok {
		if t.ParameterType == "QString" || t.ParameterType == "QByteArray" || t.ParameterType == "SignOn::MethodName" {
			return "const char*" + ifv(isReturnType, "*", "")
		} else if !isReturnType {
			if t.QtClassType() || t.IntType() {
				maybePointer := ""
				if !t.QtClassType() {
					maybePointer = "*"
				}
				return t.RenderTypeCabi(false) + maybePointer
			}
		}
		return "libqt_list " + cppComment("of "+t.RenderTypeC(cfs, isReturnType, fullEnumName))
	}

	if k, ok := p.QSetOf(); ok {
		return "libqt_list" + ifv(p.Pointer, "* ", " ") + cppComment("of "+k.RenderTypeC(cfs, isReturnType, fullEnumName))
	}

	if k, v, _, ok := p.QMapOf(); ok {
		return "libqt_map" + ifv(p.Pointer, "* ", " ") + cppComment("of "+k.RenderTypeC(cfs, isReturnType, fullEnumName)+" to "+v.RenderTypeC(cfs, isReturnType, fullEnumName))
	}

	if t1, t2, ok := p.QPairOf(); ok {
		// Design QPair using capital-named members, in case it gets passed
		// across packages
		f := t1.RenderTypeC(cfs, isReturnType, fullEnumName)
		s := t2.RenderTypeC(cfs, isReturnType, fullEnumName)

		return "libqt_pair " + cppComment("tuple of "+f+" and "+s)
	}

	if (p.ParameterType == "void" || p.ParameterType == "GLvoid") && p.Pointer {
		return "void*"
	}

	ret := ""

	if p.IsKnownEnum() {
		if strings.HasPrefix(p.ParameterType, "QFlags<") {
			if fullEnumName {
				ret = "flag of enum " + cabiEnumClassName(p.ParameterType[7:len(p.ParameterType)-1])
			} else {
				e, ok := KnownEnums[p.ParameterType]
				if ok {
					ret = ifv(p.Const, "const ", "") + e.EnumTypeC + ifv(p.Pointer || p.ByRef, "*", "")
				} else {
					ret = ifv(p.Const, "const ", "") + "int64_t" + ifv(p.Pointer || p.ByRef, "*", "")
				}
			}
		}

		if ret != "" {
			return ret
		}
	}

	switch p.ParameterType {
	case "GLvoid":
		ret += ifv((p.Pointer || p.ByRef) && fullEnumName, "*", "") + "void"
	case "GLchar":
		ret = "char"
	case "uchar", "quint8", "GLboolean", "GLubyte":
		ret += "uint8_t"
	case "qint8", "GLbyte":
		ret += "signed char"
	case "qint16", "GLshort":
		ret += "int16_t"
	case "ushort", "quint16", "GLushort":
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

	case "qint32", "GLint", "GLsizei":
		ret += "int32_t"
	case "quint32", "uint", "unsigned int", "GLbitfield", "GLenum", "GLuint":
		ret += "uint32_t"
	case "qlonglong", "qint64", "GLint64":
		ret += "int64_t"
	case "qulonglong", "quint64", "unsigned long long", "GLuint64":
		ret += "uint64_t"
	case "GLclampf", "GLfloat":
		ret += "float"
	case "qreal", "GLdouble":
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

	case "qintptr", "QIntegerForSizeof<void *>::Signed", "GLintptr", "GLsizeiptr":
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
						ret += enumInfo.EnumTypeC
					}
				}
			} else {
				if fullEnumName {
					ret += cabiEnumName(ft.UnderlyingEnum.ParameterType)
				} else {
					ret += enumInfo.EnumTypeC
				}
			}

		} else if enumInfo, ok := KnownEnums[p.ParameterType]; ok {
			enumName := cabiEnumName(p.ParameterType)
			lastIndex := strings.LastIndex(p.ParameterType, "::")
			if lastIndex == -1 {
				lastIndex = len(p.ParameterType)
			}
			enumClass := p.ParameterType[:lastIndex] + "__"
			enumClass = strings.ReplaceAll(enumClass, "::", "__")

			if enumInfo.PackageName != cfs.currentPackageName {
				// Potentially cross-package
				if fullEnumName {
					ret += "enum " + enumClass + enumName
				} else {
					ret += enumInfo.EnumTypeC
				}
			} else {
				// Same package
				if strings.Contains(p.ParameterType, "::") {
					if fullEnumName {
						ret += "enum " + enumClass + enumName
					} else {
						ret += enumInfo.EnumTypeC
					}
				} else {
					enumClass := cfs.castType + "__"
					if fullEnumName {
						ret += "enum " + enumClass + enumName
					} else {
						ret += enumInfo.EnumTypeC
					}
				}
			}

		} else if strings.Contains(p.ParameterType, "::") {
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
				ret += "*" + ifv(p.ByRef && p.Pointer, "*", "")
			}
		}
	}

	if e, ok := KnownEnums[ret]; ok {
		if fullEnumName {
			if strings.HasPrefix(p.ParameterType, "QFlags<") {
				enumType := strings.Split(p.ParameterType, "QFlags<")[1]
				enumType = strings.Split(enumType, ">")[0]
				enumType = strings.ReplaceAll(enumType, ":", "_")
				ret = "flag of enum " + enumType
			} else {
				enumType := p.ParameterType
				enumType = strings.ReplaceAll(enumType, ":", "_")
				ret = "flag of enum " + enumType
			}
		} else {
			ret = e.EnumTypeC
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
			ret += strings.Repeat("*", p.PointerCount) + ifv(p.ByRef && p.Pointer, "*", "")
		} else if p.ByRef || IsKnownClass(p.ParameterType) {
			ret += "*"
		}
	}

	if strings.Contains(ret, "::") && !fullEnumName {
		ret = strings.ReplaceAll(ret, "::", "__")
		ret = strings.ReplaceAll(ret, "Qt__", "")
	}

	return ret // ignore const
}

func (p CppParameter) returnAllocComment(returnType string) string {
	if strings.HasPrefix(returnType, "char*") || strings.HasPrefix(returnType, "const char*") {
		freeMethod := ifv(returnType == "const char*", "libqt_", "") + "free()"
		return "\n/// @warning Caller is responsible for freeing the returned memory using `" + freeMethod + "`\n///"
	}
	return ""
}

func (p CppParameter) renderReturnTypeC(cfs *cFileState, isSlot bool) string {
	ret := p.RenderTypeC(cfs, true, false)
	if e, ok := KnownEnums[ret]; ok {
		ret = e.EnumTypeC
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

	if strings.Contains(ret, "::") {
		ret = strings.ReplaceAll(ret, "::", "__")
	}

	maybeConst := ifv(p.Const && !strings.HasPrefix(ret, "const ") && !strings.HasPrefix(ret, "libqt"), "const ", "")

	if strings.HasPrefix(ret, "const int") {
		ret = strings.TrimPrefix(ret, "const ")
		maybeConst = ""
	}

	if isSlot {
		// overrides for slot callbacks
		if strings.HasPrefix(ret, "libqt_list") {
			if strings.Contains(ret, "of libqt_string") {
				ret = "const char**"
			} else if strings.Contains(ret, "of int") {
				ret = "int*"
			}
			if t, _, ok := p.QListOf(); ok {
				if IsKnownClass(t.ParameterType) {
					ret = t.RenderTypeC(cfs, true, true) + "*"
				}
			}
		}
	}
	return maybeConst + ret
}

func (cfs *cFileState) emitCommentParametersC(params []CppParameter, isSlot bool) string {
	if len(params) == 0 {
		return ""
	}

	tmp := make([]string, 0, len(params))

	for i := 0; i < len(params); i++ {
		p := params[i]
		if IsArgcArgv(params, i) {
			tmp = append(tmp, "/// @param argc int*\n/// @param argv char**")
			i++ // Skip the next parameter, already handled
		} else {
			// Ordinary parameter
			pName := p.ParameterName
			pType := p.RenderTypeC(cfs, false, true)
			var pTypeSlot string

			if t, _, ok := p.QListOf(); ok {
				if isSlot && IsKnownClass(t.ParameterType) {
					pType = t.RenderTypeC(cfs, false, true) + "*"
				} else if IsKnownClass(t.ParameterType) || strings.Contains(t.ParameterType, "::") ||
					t.IntType() || strings.Contains(pType, "libqt_") {
					pName = cppComment("of " + t.RenderTypeC(cfs, false, true))
					pTypeSlot = " " + pName
					pType = "libqt_list"
				} else if (strings.Contains(pType, "char*") && !strings.Contains(pType, "libqt_")) ||
					!strings.HasPrefix(pType, "libqt_") {
					pType += "*"
					pTypeSlot = "[]"
				}
			}

			if k, v, _, ok := p.QMapOf(); ok {
				pName = cppComment("of " + k.RenderTypeC(cfs, false, true) + " to " + v.RenderTypeC(cfs, false, true))
				pTypeSlot = " " + pName
				pType = "libqt_map" + ifv(p.Pointer, "*", "")
			}

			if t1, t2, ok := p.QPairOf(); ok {
				pName = cppComment("tuple of " + t1.RenderTypeC(cfs, false, true) + " and " + t2.RenderTypeC(cfs, false, true))
				pTypeSlot = " " + pName
				pType = "libqt_pair"
			}

			if isSlot {
				resParam := strings.ReplaceAll(pType+pTypeSlot, "**[]", "**")
				if strings.HasPrefix(resParam, "libqt_list") {
					if strings.Contains(resParam, "of libqt_string") {
						resParam = "const char**"
					} else if strings.Contains(resParam, "of int") {
						resParam = "int*"
					} else if IsKnownClass(strings.TrimSuffix(resParam, "*")) {
						resParam = resParam + "*"
					}
				}
				tmp = append(tmp, resParam+" "+pName)
			} else {
				if strings.Contains(pType, "libqt") {
					tmp = append(tmp, "/// @param "+p.ParameterName+" "+pType+" "+pName)
				} else {
					tmp = append(tmp, "/// @param "+pName+" "+pType)
				}
			}
		}
	}

	var maybeNewLine, maybeFinalNewLine string
	joinStr := "\n"

	if len(tmp) > 0 {
		maybeNewLine = "\n"
		maybeFinalNewLine = "\n///"
	}

	if isSlot {
		joinStr = ", "
		maybeNewLine = ""
		maybeFinalNewLine = ""
	}

	return maybeNewLine + strings.Join(tmp, joinStr) + maybeFinalNewLine
}

func (cfs *cFileState) emitParametersC(params []CppParameter, isSlot bool) string {
	if len(params) == 0 {
		return ""
	}

	tmp := make([]string, 0, len(params))

	for i := 0; i < len(params); i++ {
		p := params[i]
		if IsArgcArgv(params, i) {
			tmp = append(tmp, "int *argc, char *argv[]")
			i++ // Skip the next parameter, already handled
		} else {
			// Ordinary parameter
			pName := p.ParameterName
			pType := p.RenderTypeC(cfs, false, false)
			if t, _, ok := p.QListOf(); ok {
				if isSlot && IsKnownClass(t.ParameterType) {
					pType = t.RenderTypeC(cfs, false, true) + "*"
				} else if IsKnownClass(t.ParameterType) || strings.Contains(t.ParameterType, "::") ||
					t.IntType() {
					pName = p.ParameterName
					pType = "libqt_list"
				} else if (strings.Contains(pType, "char*") && !strings.Contains(pType, "libqt_")) ||
					!strings.HasPrefix(pType, "libqt_") {
					pName += "[static 1]"
				}
				if isSlot {
					if pType == "libqt_list" {
						pTypeCheck := t.RenderTypeC(cfs, false, true)
						if pTypeCheck == "libqt_string" {
							pType = "const char**"
						} else if pTypeCheck == "int" {
							pType = "int*"
						} else if IsKnownClass(pTypeCheck) {
							pType = pTypeCheck + "**"
						}
					}
				}
			}

			if reservedWordC(pName) {
				pName = "_" + pName
			}
			if IsKnownClass(p.ParameterType) && strings.HasSuffix(pType, "*") &&
				!strings.Contains(pType, "char*") {
				pType = "void*" + ifv(p.ByRef && p.Pointer, "*", "")
			}
			if isSlot {
				if strings.HasSuffix(pName, "[static 1]") {
					pType += "*"
				}
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
	currentMethodName  string
	castType           string
	allocCleanups      []string
}

func (cfs *cFileState) emitReturnComment(rt CppParameter) string {
	var returnComment string

	if rt.IsKnownEnum() {
		if strings.HasPrefix(rt.ParameterType, "QFlags<") {
			returnComment = "/// @return flag of enum " + cabiEnumClassName(rt.ParameterType[7:len(rt.ParameterType)-1]) + "\n///\n"
		} else {
			returnComment = "/// @return " + rt.RenderTypeC(cfs, false, true) + "\n///\n"
		}
	} else if t, _, ok := rt.QListOf(); ok {
		if _, ok := KnownEnums[t.ParameterType]; ok {
			returnComment = "/// @return libqt_list of enum " + cabiEnumClassName(t.ParameterType) + "\n///\n"
		}
	}

	return returnComment
}

func (cfs *cFileState) emitParametersC2CABIForwarding(m CppMethod) (preamble, forwarding string) {
	tmp := make([]string, 0, len(m.Parameters)+2)

	if !(m.IsStatic && !m.IsProtected) {
		tmp = append(tmp, "("+cfs.castType+"*)self")
	}

	for i := 0; i < len(m.Parameters); i++ {
		p := m.Parameters[i]
		if IsArgcArgv(m.Parameters, i) {
			// QApplication constructor. Convert 'args' into Qt's wanted types
			// Qt has a warning in the docs saying these pointers must be valid
			// for the entire lifetype of QApplication, so we pass by address
			// and never free the memory
			// This transformation only affects the C side. The C++ C ABI side is
			// projected naturally.

			tmp = append(tmp, "argc, argv")
			i++ // Skip the next parameter, already handled

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

	if p.ParameterType == "QString" || p.ParameterType == "QByteArray" ||
		p.ParameterType == "QByteArrayView" || p.ParameterType == "SignOn::MethodName" {
		// Return the C string struct without allocation since the
		// temporary libqt_string is passed by value
		rvalue = "qstring(" + nameprefix + ")"

	} else if p.ParameterType == "QAnyStringView" {
		rvalue = nameprefix

	} else if p.ParameterType == "QStringView" {
		// Take the address of the pointer and cast it to the expected type
		preamble += "libqt_string " + nameprefix + "_string = qstring(" + p.ParameterName + ");\n"
		rvalue = "(" + p.ParameterType + "*)&" + nameprefix + "_string"

	} else if t, _, ok := p.QListOf(); ok {
		// QList<T>
		// Return the C list struct without allocation if we can

		if t.ParameterType == "QString" || t.ParameterType == "QByteArray" || t.ParameterType == "SignOn::MethodName" {
			preamble += "size_t " + nameprefix + "_len = libqt_strv_length(" + p.ParameterName + ");\n"
			preamble += "libqt_string* " + nameprefix + "_qstr = (libqt_string*)malloc(" + nameprefix + "_len * sizeof(libqt_string));\n"
			preamble += "if (" + nameprefix + "_qstr == NULL) {\n"
			preamble += `    fprintf(stderr, "Memory allocation failed in ` + cfs.currentMethodName + `");` + "\n"
			preamble += "    abort();\n"
			preamble += "}\n"
			preamble += "for (size_t i = 0; i < " + nameprefix + "_len; ++i) {\n"
			preamble += "    " + nameprefix + "_qstr[i] = qstring(" + p.ParameterName + "[i]);\n"
			preamble += "}\n"
			preamble += "libqt_list " + nameprefix + "_list = qlist(" + nameprefix + "_qstr, " + nameprefix + "_len);\n"

			allocCleanup := "free(" + nameprefix + "_qstr);\n"
			cfs.allocCleanups = append(cfs.allocCleanups, allocCleanup)

			rvalue = nameprefix + "_list"

		} else {
			rvalue = nameprefix
		}

	} else if _, ok := p.QSetOf(); ok {
		rvalue = nameprefix

	} else if k, v, containerType, ok := p.QMapOf(); ok {
		// QMap<K,V>
		kType := k.RenderTypeC(cfs, false, true)
		vType := v.RenderTypeC(cfs, false, true)

		if e, ok := KnownEnums[k.ParameterType]; ok {
			kType = e.EnumTypeC
		}
		if e, ok := KnownEnums[v.ParameterType]; ok {
			vType = e.EnumTypeC
		}

		var maybeRef, keyIter, valueIter string

		maybeDeref := "."
		if p.Pointer {
			maybeDeref = "->"
			maybeRef = "&"
		}

		if v.ParameterType == "SignOn::MechanismsList" {
			vType = "const char**"
		}

		keyDest := kType
		valueDest := vType

		if k.ParameterType == "QString" || k.ParameterType == "QByteArray" || k.ParameterType == "SignOn::MethodName" {
			keyDest = "libqt_string"
		}

		if v.ParameterType == "QString" || v.ParameterType == "QByteArray" {
			valueDest = "libqt_string"
		}

		preamble += "// Convert libqt_map to " + containerType + "<" + k.ParameterType + "," + v.ParameterType + ">\n"
		preamble += "libqt_map " + nameprefix + "_ret;\n"
		preamble += nameprefix + "_ret.len = " + p.ParameterName + maybeDeref + "len;\n"

		preamble += nameprefix + "_ret.keys = malloc(" + nameprefix + "_ret.len * sizeof(" + keyDest + "));\n"
		preamble += "if (" + nameprefix + "_ret.keys == NULL) {\n"
		preamble += `    fprintf(stderr, "Failed to allocate memory for map keys\n");` + "\n"
		preamble += "    abort();\n"
		preamble += "}\n"

		keyCleanup := "libqt_free(" + nameprefix + "_ret.keys);"
		cfs.allocCleanups = append(cfs.allocCleanups, keyCleanup)

		preamble += nameprefix + "_ret.values = malloc(" + nameprefix + "_ret.len * sizeof(" + valueDest + "));\n"
		preamble += "if (" + nameprefix + "_ret.values == NULL) {\n"
		preamble += "    free(" + nameprefix + "_ret.keys);\n"
		preamble += `    fprintf(stderr, "Failed to allocate memory for map values\n");` + "\n"
		preamble += "    abort();\n"
		preamble += "}\n"

		valCleanup := "libqt_free(" + nameprefix + "_ret.values);"
		cfs.allocCleanups = append(cfs.allocCleanups, valCleanup)

		preamble += kType + "* " + nameprefix + "_karr = (" + kType + "*)" + nameprefix + maybeDeref + "keys;\n"
		preamble += keyDest + "* " + nameprefix + "_kdest = (" + keyDest + "*)" + nameprefix + "_ret.keys;\n"

		if k.ParameterType == "QString" || k.ParameterType == "QByteArray" || k.ParameterType == "SignOn::MethodName" {
			keyIter = nameprefix + "_kdest[i] = qstring(" + p.ParameterName + "_karr[i]);\n"

		} else {
			keyIter = nameprefix + "_kdest[i] = " + nameprefix + "_karr[i];\n"
		}

		preamble += vType + "* " + nameprefix + "_varr = (" + vType + "*)" + nameprefix + maybeDeref + "values;\n"
		preamble += valueDest + "* " + nameprefix + "_vdest = (" + valueDest + "*)" + nameprefix + "_ret.values;\n"

		if v.ParameterType == "QString" || v.ParameterType == "QByteArray" {
			valueIter = nameprefix + "_vdest[i] = qstring(" + p.ParameterName + "_varr[i]);\n"

		} else {
			valueIter = nameprefix + "_vdest[i] = " + nameprefix + "_varr[i];\n"
		}

		preamble += "for (size_t i = 0; i < " + nameprefix + "_ret.len; ++i) {\n"
		preamble += keyIter
		preamble += valueIter
		preamble += "}\n"

		rvalue = maybeRef + nameprefix + "_ret"

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
		if p.ParameterType == "unsigned long long" && (p.Pointer || p.ByRef) {
			rvalue = "(" + p.ParameterType + "*)" + p.ParameterName
		} else {
			rvalue = p.ParameterName
		}

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
	maybePointer := ifv(rt.Pointer && rt.ByRef, "*", "")

	if rt.Void() {
		var maybeCleanups string
		if len(cfs.allocCleanups) > 0 {
			maybeCleanups = strings.Join(cfs.allocCleanups, "\n")
			cfs.allocCleanups = []string{}
		}
		return rvalue + ";" + maybeCleanups

	} else if (rt.ParameterType == "void" || rt.ParameterType == "GLvoid") && rt.Pointer {
		return assignExpr + maybePointer + rvalue + ";"

	} else if rt.ParameterType == "QString" || rt.ParameterType == "QStringView" ||
		rt.ParameterType == "QByteArray" || rt.ParameterType == "QByteArrayView" ||
		rt.ParameterType == "SignOn::MethodName" {
		shouldReturn := "libqt_string " + namePrefix + "_str = "
		afterword += cfs.checkAndClearAllocCleanups(false)
		afterword += "char* " + namePrefix + "_ret = qstring_to_char(" + namePrefix + "_str);\n"
		afterword += "libqt_string_free(&" + namePrefix + "_str);\n"
		afterword += assignExpr + " " + namePrefix + "_ret;\n"

		cfs.allocCleanups = append(cfs.allocCleanups, "free("+namePrefix+"_ret);\n")

		return shouldReturn + rvalue + ";\n" + afterword

	} else if rt.ParameterType == "QAnyStringView" {
		shouldReturn := "char* " + namePrefix + "_ret = "

		afterword += assignExpr + " " + namePrefix + "_ret;\n"
		return shouldReturn + rvalue + ";\n" + afterword

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
		if t.ParameterType == "QString" || t.ParameterType == "QByteArray" || t.ParameterType == "SignOn::MethodName" {
			shouldReturn = "libqt_list " + namePrefix + "_arr = "
			afterword += "const libqt_string* " + namePrefix + "_qstr = (libqt_string*)" + namePrefix + "_arr.data.ptr;\n"
			afterword += "const char** " + namePrefix + "_ret = (const char**)malloc((" + namePrefix + "_arr.len + 1) * sizeof(const char*));\n"
			afterword += "if (" + namePrefix + "_ret == NULL) {\n"
			afterword += `    fprintf(stderr, "Memory allocation failed in ` + cfs.currentMethodName + `");` + "\n"
			afterword += "    abort();\n"
			afterword += "}\n"
			afterword += "for (size_t i = 0; i < " + namePrefix + "_arr.len; ++i) {\n"
			afterword += "    " + namePrefix + "_ret[i] = qstring_to_char(" + namePrefix + "_qstr[i]);\n"
			afterword += "}\n"
			afterword += namePrefix + "_ret[" + namePrefix + "_arr.len] = NULL;\n"
			afterword += "for (size_t i = 0; i < " + namePrefix + "_arr.len; ++i) {\n"
			afterword += "    libqt_string_free((libqt_string*)&" + namePrefix + "_qstr[i]);\n"
			afterword += "}\n"
			afterword += "libqt_free(" + namePrefix + "_arr.data.ptr);\n"
			afterword += assignExpr + " " + namePrefix + "_ret;\n"

			maybeAllocCleanup := cfs.checkAndClearAllocCleanups(false)
			cfs.allocCleanups = append(cfs.allocCleanups, "libqt_free("+namePrefix+"_ret);\n")

			return shouldReturn + rvalue + ";\n" + maybeAllocCleanup + afterword

		} else {
			shouldReturn = "libqt_list " + namePrefix + "_arr = "
			afterword += assignExpr + " " + namePrefix + "_arr;"
			maybeAllocCleanup := cfs.checkAndClearAllocCleanups(false)

			return shouldReturn + rvalue + ";\n" + maybeAllocCleanup + afterword
		}

	} else if _, ok := rt.QSetOf(); ok {
		return shouldReturn + " " + rvalue + ";\n"

	} else if k, v, containerType, ok := rt.QMapOf(); ok {
		// QMap<K,V>
		kType := k.RenderTypeC(cfs, false, true)
		vType := v.RenderTypeC(cfs, false, true)

		var keyAssign, keyFree, keyIter, valueAssign, valueFree, valueIter string
		keyOut := kType
		valueOut := vType

		var maybePointer string
		maybeDeref := "."

		if rt.Pointer {
			maybeDeref = "->"
			maybePointer = "*"
		}

		if k.ParameterType == "QString" || k.ParameterType == "QByteArray" || k.ParameterType == "SignOn::MethodName" {
			keyOut = "libqt_string"
		}

		if v.ParameterType == "QString" || v.ParameterType == "QByteArray" {
			valueOut = "libqt_string"
		}

		preamble := "// Convert " + containerType + "<" + k.ParameterType + "," + v.ParameterType + "> to libqt_map\n"
		preamble += "libqt_map" + maybePointer + " " + namePrefix + "_out = " + rvalue + ";\n"
		preamble += "libqt_map" + maybePointer + " " + namePrefix + "_ret;\n"
		preamble += namePrefix + "_ret" + maybeDeref + "len = " + namePrefix + "_out" + maybeDeref + "len;\n"

		if k.ParameterType == "QString" || k.ParameterType == "QByteArray" || k.ParameterType == "SignOn::MethodName" {
			preamble += keyOut + "* " + namePrefix + "_out_keys = (" + keyOut + "*)" + namePrefix + "_out" + maybeDeref + "keys;\n"
			preamble += kType + "* " + namePrefix + "_ret_keys = (" + kType + "*)malloc(" + namePrefix + "_ret" + maybeDeref + "len * sizeof(" + kType + "));\n"
			preamble += "if (" + namePrefix + "_ret_keys == NULL) {\n"
			preamble += `    fprintf(stderr, "Memory allocation failed in ` + cfs.currentMethodName + `");` + "\n"
			preamble += "    abort();\n"
			preamble += "}\n"
			keyIter = namePrefix + "_ret_keys[i] = (" + kType + ")" + namePrefix + "_out_keys[i].data;\n"
			keyFree = "    free(" + namePrefix + "_out_keys);\n"
			keyAssign = namePrefix + "_ret" + maybeDeref + "keys = (void*)" + namePrefix + "_ret_keys;\n"
		} else {
			keyAssign = namePrefix + "_ret" + maybeDeref + "keys = " + namePrefix + "_out" + maybeDeref + "keys;\n"
		}

		if v.ParameterType == "QString" || v.ParameterType == "QByteArray" {
			preamble += valueOut + "* " + namePrefix + "_out_values = (" + valueOut + "*)" + namePrefix + "_out" + maybeDeref + "values;\n"
			preamble += vType + "* " + namePrefix + "_ret_values = (" + vType + "*)malloc(" + namePrefix + "_ret" + maybeDeref + "len * sizeof(" + vType + "));\n"
			preamble += "if (" + namePrefix + "_ret_values == NULL) {\n"
			preamble += `    fprintf(stderr, "Memory allocation failed in ` + cfs.currentMethodName + `");` + "\n"
			preamble += keyFree
			preamble += "    abort();\n"
			preamble += "}\n"
			valueIter = namePrefix + "_ret_values[i] = (" + vType + ")" + namePrefix + "_out_values[i].data;\n"
			valueFree = "    free(" + namePrefix + "_out_values);\n"
			valueAssign = namePrefix + "_ret" + maybeDeref + "values = (void*)" + namePrefix + "_ret_values;\n"
		} else {
			valueAssign = namePrefix + "_ret" + maybeDeref + "values = " + namePrefix + "_out" + maybeDeref + "values;\n"
		}

		if keyIter != "" || valueIter != "" {
			preamble += "for (size_t i = 0; i < " + namePrefix + "_ret" + maybeDeref + "len; ++i) {\n"
			preamble += keyIter
			preamble += valueIter
			preamble += "}\n"
		}

		preamble += keyAssign
		preamble += valueAssign
		preamble += keyFree
		preamble += valueFree

		return preamble + shouldReturn + namePrefix + "_ret;\n" + afterword

	} else if _, _, ok := rt.QPairOf(); ok {
		return shouldReturn + " " + rvalue + ";\n"

	} else if rt.QtClassType() {
		// Construct our C type based on this inner C ABI type
		shouldReturn = "return"

		_, ok := KnownClassnames[rt.ParameterType]
		if !ok {
			panic("emitCabiToC: Encountered an unknown Qt class")
		}

		maybeAllocCleanup := cfs.checkAndClearAllocCleanups(false)

		if maybeAllocCleanup != "" {
			preamble := rt.renderReturnTypeC(cfs, false) + " " + namePrefix + "_out = " + rvalue + ";"
			rvalue = namePrefix + "_out"
			if rt.Pointer || rt.ByRef {
				return preamble + maybeAllocCleanup + assignExpr + rvalue + ";"
			}
			return preamble + maybeAllocCleanup + shouldReturn + " " + rvalue + ";"
		}

		if rt.Pointer || rt.ByRef {
			return assignExpr + rvalue + ";"
		}
		return shouldReturn + " " + rvalue + ";"

	} else if rt.IntType() || rt.IsKnownEnum() || rt.IsFlagType() || rt.ParameterType == "bool" || rt.QtCppOriginalType != nil {

		if rt.Pointer || rt.ByRef {
			// Cast
			return shouldReturn + "(" + rt.RenderTypeC(cfs, true, false) + maybePointer + ")" + rvalue + ";"
		}

		maybeAllocCleanup := cfs.checkAndClearAllocCleanups(false)

		if maybeAllocCleanup != "" {
			preamble := rt.renderReturnTypeC(cfs, false) + " " + namePrefix + "_out = " + rvalue + ";"
			rvalue = namePrefix + "_out"
			return preamble + maybeAllocCleanup + assignExpr + rvalue + ";"
		} else {
			return assignExpr + rvalue + ";"
		}

	} else if reflect.TypeOf(rt.ParameterType).Kind() == reflect.String {
		// Single type conversion from C++ C ABI State to C State type
		// This should not be necessary in most cases.
		return shouldReturn + "(int)" + rvalue + ";"

	} else {
		panic(fmt.Sprintf("emitC::emitCabiToC missing type handler for parameter %+v", rt))
	}
}

func (cfs *cFileState) checkAndClearAllocCleanups(resetAllocCleanups bool) string {
	var maybeAllocCleanup string
	if len(cfs.allocCleanups) > 0 {
		for i, ac := range cfs.allocCleanups {
			if strings.Contains(ac, "_qstr") || strings.Contains(ac, ".keys") || strings.Contains(ac, ".values") {
				maybeAllocCleanup += ac
			}
			cfs.allocCleanups[i] = ""
		}
		if resetAllocCleanups {
			cfs.allocCleanups = []string{}
		}
	}
	return maybeAllocCleanup
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

	// These functions are not portable to all platforms
	platformFunctions = map[string]struct{}{
		"QsciScintilla_FindMatchingBrace": {},
		"QTextStream_OperatorShiftRight8": {},
		"QTextStream_OperatorShiftRight9": {},
		"QVersionNumber_FromString2":      {},
	}
)

func emitH(src *CppParsedHeader, headerName, packageName string) (string, error) {
	if len(src.Classes) == 0 && len(src.Enums) == 0 {
		return "", nil
	}

	ret := strings.Builder{}

	srcFilename := filepath.Base(src.Filename)
	includeGuard := strings.ToUpper(strings.ReplaceAll(strings.ReplaceAll(packageName, "/", "_"), "-", "_")) + "_QT6C_LIB" + strings.ToUpper(strings.ReplaceAll(strings.ReplaceAll(srcFilename, ".", "_"), "-", "_"))
	bindingInclude := "qtlibc.h"
	var maybeDots string

	dirRoot := ifv(packageName == "src", "", strings.TrimPrefix(packageName, "src/"))

	cfs := cFileState{
		imports:            map[string]struct{}{},
		currentPackageName: dirRoot,
		currentHeaderName:  strings.TrimSuffix(headerName[3:], ".h"),
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

#include "` + maybeDots + `libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "` + bindingInclude + `"` + "\n\n")

	for _, c := range src.Classes {
		virtualMethods := c.VirtualMethods()
		cStructName := cabiClassName(c.ClassName)
		nameIndex := 0
		cPrefix := "q_"
		if cStructName[0] == 'Q' || cStructName[0] == 'K' || cStructName[0] == 'k' {
			nameIndex = 1
			cPrefix = strings.ToLower(cStructName[:1]) + "_"
		} else if strings.Contains(src.Filename, "KF6") || strings.Contains(src.Filename, "LayerShellQt") {
			cPrefix = "k_"
		}
		cMethodPrefix := cPrefix + strings.ToLower(cStructName[nameIndex:])

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

		var ctorPageUrl string

		if len(c.Ctors) > 0 || len(c.Methods) > 0 || len(c.VirtualMethods()) > 0 ||
			(len(c.DirectInherits) > 0 && len(collectInheritedMethodsForC(c.DirectInherits[0], map[string]struct{}{c.ClassName: {}})) > 0) {
			maybeCharts := ifv(strings.Contains(src.Filename, "QtCharts"), "-qtcharts", "")

			isSpecialCase := (cfs.currentHeaderName == "qcustomplot" && strings.HasPrefix(cStructName, "QCP")) ||
				(strings.Contains(src.Filename, "accounts-qt") && cStructName[0] != 'Q') ||
				(strings.Contains(src.Filename, "signon-qt") && cStructName[0] != 'Q')

			pageName := ifv(isSpecialCase, cStructName, getPageName(cStructName)) + maybeCharts
			ctorPageUrl = "\n\n" + getPageUrl(QtPage, pageName, "", cStructName)
			ret.WriteString(ctorPageUrl)
		}

		for i, ctor := range c.Ctors {
			if _, ok := moveCtorOnly[c.ClassName]; ok && !ctor.IsMoveCtor {
				continue
			}

			var maybeMoveCtor, maybeMacro, maybeEndMacro string

			if ctor.IsMoveCtor {
				maybeMoveCtor = " object and invalidates the source " + c.ClassName
			}

			if ctor.LinuxOnly {
				maybeMacro = "#ifdef __linux__\n"
				maybeEndMacro = "#endif\n"
			}

			cfs.castType = cStructName
			commentParams := cfs.emitCommentParametersC(ctor.Parameters, false)

			if i > 0 {
				ret.WriteString(ctorPageUrl)
			}

			ret.WriteString("\n\n" + maybeMacro + "/// " + cMethodPrefix + "_new" + maybeSuffix(i) + " constructs a new " + c.ClassName + maybeMoveCtor +
				" object.\n///" + commentParams + "\n" +
				cStructName + "* " + cMethodPrefix + "_new" + maybeSuffix(i) + "(" + cfs.emitParametersC(ctor.Parameters, false) + ");\n" + maybeEndMacro + "\n\n")
		}

		if c.HasTrivialCopyAssign {
			ret.WriteString("/// " + cMethodPrefix + "_copy_assign shallow copies `other` into `self`.\n///\n" +
				"/// @param self " + cStructName + "*\n/// @param other " + cStructName + "*\n///\n" +
				"void " + cMethodPrefix + "_copy_assign(void* self, void* other);\n\n")
		}

		if c.HasTrivialMoveAssign {
			ret.WriteString("/// " + cMethodPrefix + "_move_assign moves `other` into `self` and invalidates `other`.\n///\n" +
				"/// @param self " + cStructName + "*\n/// @param other " + cStructName + "*\n///\n" +
				"void " + cMethodPrefix + "_move_assign(void* self, void* other);\n\n")
		}

		seenMethods := make(map[string]struct{})
		baseMethods := c.Methods
		protectedMethods := c.ProtectedMethods()
		virtualEligible := AllowVirtualForClass(c.ClassName) && len(virtualMethods) > 0

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
				continue
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
			cmdMethodName := cPrefix + strings.ToLower(cStructName[nameIndex:])
			safeMethodName := cSafeMethodName(mSafeMethodName)
			var inheritedFrom string
			if m.InheritedFrom != "" {
				inheritedFrom = "\n/// Inherited from " + m.InheritedFrom + "\n///"
				cmdStructName = cabiClassName(m.InheritedFrom)
			}

			if m.InheritedInClass != "" {
				inheritedFrom = "\n/// Inherited from " + m.InheritedInClass + "\n///"
			}

			needsPlatformMacro := false
			if _, ok := platformFunctions[cmdStructName+"_"+mSafeMethodName]; ok && !m.FossOnly && !m.LinuxOnly {
				needsPlatformMacro = true
				ret.WriteString("\n#if defined(__linux__) || defined(__FreeBSD__)")
			} else if m.LinuxOnly {
				needsPlatformMacro = true
				ret.WriteString("\n#ifdef __linux__")
			}

			ret.WriteString(inheritedFrom)

			var docCommentUrl string
			className := ifv(m.InheritedInClass == "", cmdStructName, cabiClassName(m.InheritedInClass))

			isSpecialCase := (cfs.currentHeaderName == "qcustomplot" && strings.HasPrefix(className, "QCP")) ||
				(strings.Contains(src.Filename, "accounts-qt") && className[0] != 'Q') ||
				(strings.Contains(src.Filename, "signon-qt") && className[0] != 'Q')

			subjectURL := ifv(isSpecialCase, className, strings.ToLower(className))
			cmdURL := m.MethodName
			if m.OverrideMethodName != "" {
				cmdURL = m.OverrideMethodName
			}
			if newURL, ok := qtMethodUrlOverrides[cmdURL]; ok && cStructName != "QMetaObject" {
				subjectURL = newURL
			}
			if m.IsVariable {
				cmdURL = m.VariableFieldName + "-var"
			}
			if subjectURL != "" {
				maybeCharts := ifv(strings.Contains(src.Filename, "QtCharts") && inheritedFrom == "" && subjectURL != "qobject", "-qtcharts", "")
				pageURL := getPageUrl(QtPage, subjectURL+maybeCharts, cmdURL, className)
				docCommentUrl = "\n" + pageURL + "///"
				ret.WriteString(docCommentUrl)
			}

			previousMethods[m.MethodName] = struct{}{}
			previousMethods[mSafeMethodName] = struct{}{}

			cfs.castType = cmdStructName

			returnTypeDecl := m.ReturnType.renderReturnTypeC(&cfs, false)

			allocComment := m.ReturnType.returnAllocComment(returnTypeDecl)
			if allocComment != "" {
				ret.WriteString(allocComment)
			}

			var commaParams string
			if len(m.Parameters) > 0 {
				commaParams = ", "
			}

			selfParam := "\n/// @param self " + cStructName + "* "

			method := safeMethodName + "(void* self" + commaParams
			if m.IsStatic && !m.IsProtected {
				selfParam = ""
				method = safeMethodName + "("
			}

			returnComment := cfs.emitReturnComment(m.ReturnType)
			maybeFinalNewLine := ifv(selfParam != "" && len(m.Parameters) == 0 && returnComment == "", "///\n", "")
			maybeNewLine := ifv(selfParam != "" && returnComment != "" && len(m.Parameters) == 0, "\n///", "")

			ret.WriteString(selfParam + cfs.emitCommentParametersC(m.Parameters, false) + maybeNewLine + "\n" + returnComment + maybeFinalNewLine +
				returnTypeDecl + " " + cmdMethodName + method + cfs.emitParametersC(m.Parameters, false) + ");\n")

			if needsPlatformMacro {
				ret.WriteString("#endif\n")
			}

			// Add Connect() wrappers for signal functions
			if m.IsSignal {
				addConnect := true
				if _, ok := noQtConnect[cmdStructName]; ok {
					addConnect = false
				}
				if _, ok := skipQtConnect[cmdStructName+"_"+m.MethodName]; ok {
					addConnect = false
				}

				if addConnect {
					var maybeMacro, maybeEndMacro string
					slotComma := ifv(len(m.Parameters) != 0, ", ", "")
					if m.LinuxOnly {
						maybeMacro = "\n#ifdef __linux__"
						maybeEndMacro = "#endif\n"
					}

					ret.WriteString(maybeMacro + inheritedFrom + docCommentUrl + "\n/// @param self " + cStructName + "*\n/// @param callback void func(" +
						cStructName + "* self" + slotComma + cfs.emitCommentParametersC(m.Parameters, true) + ")\n///\n" +
						"void " + cmdMethodName + "_on" + safeMethodName + "(void* self, void (*callback)(void*" +
						slotComma + cfs.emitParametersC(m.Parameters, true) + "));\n" + maybeEndMacro + "\n\n")
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
				var maybeCommentStruct, maybeVoid, maybeComma, maybeMacro, maybeEndMacro string
				if len(m.Parameters) > 0 {
					maybeComma = ", "
				}
				if showHiddenParams && (len(m.Parameters) > 0 || len(m.HiddenParams) > 0) {
					maybeComma = ", "
				}
				if len(m.Parameters) != 0 {
					maybeCommentStruct = cStructName + "* self" + maybeComma
					maybeVoid = "void*"
				}
				if showHiddenParams && len(m.HiddenParams) != 0 {
					maybeCommentStruct = cStructName + "* self" + maybeComma
					maybeVoid = "void*"
				}
				if m.LinuxOnly {
					maybeMacro = "\n#ifdef __linux__"
					maybeEndMacro = "#endif\n"
				}

				onDocComment := "\n/// Allows for overriding the related default method\n///"

				ret.WriteString(maybeMacro + inheritedFrom + docCommentUrl + onDocComment + "\n/// @param self " + cStructName +
					"*\n/// @param callback " + m.ReturnType.renderReturnTypeC(&cfs, true) + " func(" + maybeCommentStruct +
					cfs.emitCommentParametersC(m.Parameters, true) + ")\n///\n" +
					"void " + cmdMethodName + "_on" + safeMethodName + "(void* self, " + m.ReturnType.renderReturnTypeC(&cfs, true) +
					"(*callback)(" + maybeVoid + maybeComma + cfs.emitParametersC(m.Parameters, true) + "));\n" + maybeEndMacro + "\n\n")

				qbaseDocComment := "\n/// Base class method implementation\n///"
				baseMethodName := cPrefix + strings.ToLower(cStructName[nameIndex:]) + "_qbase"

				ret.WriteString(maybeMacro + inheritedFrom + docCommentUrl + qbaseDocComment +
					selfParam + cfs.emitCommentParametersC(m.Parameters, false) + maybeNewLine + "\n" + returnComment + maybeFinalNewLine +
					returnTypeDecl + " " + baseMethodName + method + cfs.emitParametersC(m.Parameters, false) + ");\n" + maybeEndMacro + "\n\n")
			}
		}

		seenVirtuals := map[string]bool{}

		for _, m := range virtualMethods {
			if !virtualEligible {
				continue
			}

			mSafeMethodName := m.SafeMethodName()

			if _, ok := skippedMethods[c.ClassName+"_"+mSafeMethodName]; ok {
				continue
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
			cmdMethodName := cPrefix + strings.ToLower(cStructName[nameIndex:])
			safeMethodName := cSafeMethodName(mSafeMethodName)

			var inheritedFrom, commaParams string
			if len(m.Parameters) > 0 {
				commaParams = ", "
			}
			// Include inheritance information if we have it
			if m.InheritedFrom != "" {
				inheritedFrom = "\n/// Inherited from " + m.InheritedFrom + "\n ///"
				cmdStructName = cabiClassName(m.InheritedFrom)
			}

			if m.InheritedInClass != "" {
				inheritedFrom = "\n/// Inherited from " + m.InheritedInClass + "\n ///"
			}

			className := ifv(m.InheritedInClass == "", cmdStructName, cabiClassName(m.InheritedInClass))

			isSpecialCase := (cfs.currentHeaderName == "qcustomplot" && strings.HasPrefix(className, "QCP")) ||
				(strings.Contains(src.Filename, "accounts-qt") && className[0] != 'Q') ||
				(strings.Contains(src.Filename, "signon-qt") && className[0] != 'Q')

			subjectURL := ifv(isSpecialCase, className, strings.ToLower(className))
			cmdURL := m.MethodName
			if m.OverrideMethodName != "" {
				cmdURL = m.OverrideMethodName
			}
			if m.IsVariable {
				cmdURL = m.VariableFieldName + "-var"
			}
			maybeCharts := ifv(strings.Contains(src.Filename, "QtCharts") && inheritedFrom == "", "-qtcharts", "")
			pageURL := getPageUrl(QtPage, subjectURL+maybeCharts, cmdURL, className)
			documentationURL := "\n" + pageURL + "///"

			// Add a package-private function to call the C++ base class method
			// QWidget_PaintEvent
			cfs.castType = cStructName
			returnTypeDecl := m.ReturnType.renderReturnTypeC(&cfs, false)
			cfsParams := cfs.emitParametersC(m.Parameters, false)
			returnComment := cfs.emitReturnComment(m.ReturnType)

			allocComment := m.ReturnType.returnAllocComment(returnTypeDecl)
			headerComment := "\n/// Wrapper to allow calling virtual or protected method\n ///\n"
			maybeNewLine := ifv(len(m.Parameters) == 0 && returnComment != "", "\n///", "")
			maybeFinalNewLine := ifv(len(m.Parameters) == 0 && returnComment == "", "///\n", "")

			ret.WriteString(inheritedFrom + documentationURL + allocComment + headerComment + "/// @param self " + cStructName + "* " + maybeNewLine +
				cfs.emitCommentParametersC(m.Parameters, false) + "\n" + returnComment + maybeFinalNewLine +
				returnTypeDecl + " " + cmdMethodName + safeMethodName + "(void* self" + commaParams + cfsParams + ");\n")

			if !AllowVirtual(m) {
				continue
			}

			headerComment = "\n/// Wrapper to allow calling base class virtual or protected method\n ///\n"

			ret.WriteString(inheritedFrom + documentationURL + allocComment + headerComment + "/// @param self " + cStructName + "* " + maybeNewLine +
				cfs.emitCommentParametersC(m.Parameters, false) + "\n" + returnComment + maybeFinalNewLine +
				returnTypeDecl + " " + cmdMethodName + "_qbase" + safeMethodName + "(void* self" + commaParams + cfsParams + ");\n")

			var maybeCommentStruct, maybeVoid string
			if showHiddenParams && (len(m.Parameters) > 0 || len(m.HiddenParams) > 0) {
				commaParams = ", "
			}

			if len(m.Parameters) != 0 {
				maybeCommentStruct = cStructName + "* self" + commaParams
				maybeVoid = "void*"
			}
			if showHiddenParams && len(m.HiddenParams) != 0 {
				maybeCommentStruct = cStructName + "* self" + commaParams
				maybeVoid = "void*"
			}

			headerComment = "\n/// Wrapper to allow overriding base class virtual or protected method\n ///\n"

			ret.WriteString(inheritedFrom + documentationURL + headerComment + "/// @param self " + cStructName +
				"*\n/// @param callback " + m.ReturnType.renderReturnTypeC(&cfs, true) + " func(" + maybeCommentStruct +
				cfs.emitCommentParametersC(m.Parameters, true) + ")\n///\n" +
				"void " + cmdMethodName + "_on" + safeMethodName + "(void* self, " + m.ReturnType.renderReturnTypeC(&cfs, true) +
				"(*callback)(" + maybeVoid + commaParams + cfs.emitParametersC(m.Parameters, true) + "));\n")
		}

		for _, m := range privateSignals {
			cmdStructName := cStructName
			cmdMethodName := cPrefix + strings.ToLower(cStructName[nameIndex:])
			safeMethodName := cSafeMethodName(m.SafeMethodName())
			var inheritedFrom, docCommentUrl string
			if m.InheritedFrom != "" {
				inheritedFrom = "\n/// Inherited from " + m.InheritedFrom + "\n///"
				cmdStructName = cabiClassName(m.InheritedFrom)
			}

			if m.InheritedInClass != "" {
				inheritedFrom = "\n/// Inherited from " + m.InheritedInClass + "\n///"
			}

			className := ifv(m.InheritedInClass == "", cmdStructName, cabiClassName(m.InheritedInClass))

			isSpecialCase := (cfs.currentHeaderName == "qcustomplot" && strings.HasPrefix(className, "QCP")) ||
				(strings.Contains(src.Filename, "accounts-qt") && className[0] != 'Q') ||
				(strings.Contains(src.Filename, "signon-qt") && className[0] != 'Q')

			subjectURL := ifv(isSpecialCase, className, strings.ToLower(className))
			cmdURL := m.MethodName
			if m.OverrideMethodName != "" {
				cmdURL = m.OverrideMethodName
			}
			if newURL, ok := qtMethodUrlOverrides[cmdURL]; ok {
				subjectURL = newURL
			}
			if m.IsVariable {
				cmdURL = m.VariableFieldName + "-var"
			}
			if subjectURL != "" {
				maybeCharts := ifv(strings.Contains(src.Filename, "QtCharts") && inheritedFrom == "" && subjectURL != "qobject", "-qtcharts", "")
				pageURL := getPageUrl(QtPage, subjectURL+maybeCharts, cmdURL, className)
				docCommentUrl = "\n" + pageURL + "///\n"
			}

			slotComma := ifv(len(m.Parameters) != 0, ", ", "")
			headerComment := "/// Wrapper to allow calling private signal\n///"

			ret.WriteString(inheritedFrom + docCommentUrl + headerComment + "\n/// @param self " + cStructName + "*\n/// @param callback void func(" +
				cStructName + "* self" + slotComma + cfs.emitCommentParametersC(m.Parameters, true) + ")\n///\n" +
				"void " + cmdMethodName + "_on" + safeMethodName + "(void* self, void (*callback)(void*" +
				slotComma + cfs.emitParametersC(m.Parameters, true) + "));\n")
		}

		if c.CanDelete && (len(c.Methods) > 0 || len(c.VirtualMethods()) > 0 || len(c.Ctors) > 0) {
			maybeCharts := ifv(strings.Contains(src.Filename, "QtCharts"), "-qtcharts", "")

			isSpecialCase := (cfs.currentHeaderName == "qcustomplot" && strings.HasPrefix(cStructName, "QCP")) ||
				(strings.Contains(src.Filename, "accounts-qt") && cStructName[0] != 'Q') ||
				(strings.Contains(src.Filename, "signon-qt") && cStructName[0] != 'Q')

			pageUrl := getPageUrl(DtorPage, ifv(isSpecialCase, cStructName, getPageName(cStructName))+maybeCharts, "", cStructName)
			ret.WriteString(ifv(pageUrl != "", "\n"+pageUrl+"///\n", "\n") +
				"/// Delete this object from C++ memory.\n///\n" +
				"/// @param self " + cStructName + "*\n///\n" +
				"void " + cPrefix + cSafeMethodName(strings.ToLower(cStructName[nameIndex:])) + "_delete(void* self);\n\n")
		}
	}

	var maybeUrl string

	if len(src.Enums) > 0 {
		maybeCharts := ifv(strings.Contains(src.Filename, "QtCharts"), "-qtcharts", "")
		maybeUrlPrefix := ifv(strings.Contains(src.Filename, "KIO") && !strings.HasPrefix(getPageName(cfs.currentHeaderName), "k"), "kio-", "")
		maybeUrlPrefix = ifv(strings.Contains(src.Filename, "Accounts"), "Accounts__", maybeUrlPrefix)
		maybeUrlPrefix = ifv(strings.Contains(src.Filename, "Attica"), "attica-", maybeUrlPrefix)
		maybeUrlPrefix = ifv(strings.Contains(src.Filename, "KNSCore"), "knscore-", maybeUrlPrefix)
		maybeUrlPrefix = ifv(strings.Contains(src.Filename, "KParts"), "kparts-", maybeUrlPrefix)
		maybeUrlPrefix = ifv(strings.Contains(src.Filename, "KSvg"), "ksvg-", maybeUrlPrefix)
		maybeUrlPrefix = ifv(strings.Contains(src.Filename, "KSyntaxHighlighting"), "ksyntaxhighlighting-", maybeUrlPrefix)
		maybeUrlPrefix = ifv(strings.Contains(src.Filename, "LayerShellQt"), "layershellqt-", maybeUrlPrefix)
		maybeUrlPrefix = ifv(strings.Contains(src.Filename, "PackageKit"), "packagekit-", maybeUrlPrefix)
		maybeUrlPrefix = ifv(strings.Contains(src.Filename, "qt6keychain"), "qkeychain-", maybeUrlPrefix)
		maybeUrlPrefix = ifv(strings.Contains(src.Filename, "SignOn"), "SignOn__", maybeUrlPrefix)
		maybeUrlPrefix = ifv(strings.Contains(src.Filename, "Solid"), "solid-", maybeUrlPrefix)
		maybeUrlPrefix = ifv(strings.Contains(src.Filename, "Sonnet"), "sonnet-", maybeUrlPrefix)
		pageName := maybeUrlPrefix + getPageName(cfs.currentHeaderName) + maybeCharts
		pageUrl := getPageUrl(EnumPage, pageName, "", cfs.currentHeaderName)
		maybeUrl = ifv(pageUrl != "", "\n\n"+pageUrl, "")
	}

	for _, e := range src.Enums {
		if e.EnumName == "" {
			continue // Removed by transformRedundant AST pass
		}

		cEnumName := cabiEnumClassName(e.EnumName) // Fully qualified name of the enum

		ret.WriteString(maybeUrl + "\n\ntypedef enum {\n")

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

	srcFilename := filepath.Base(src.Filename)
	dirRoot := ifv(packageName == "src", "", strings.TrimPrefix(packageName, "src/"))

	cfs := cFileState{
		imports:            map[string]struct{}{},
		currentPackageName: dirRoot,
		currentHeaderName:  strings.TrimSuffix(headerName[3:], ".h"),
	}

	// TODO Remove this suffix hack once we have a better way to automate it
	seenRefs := map[string]struct{}{cfs.currentHeaderName: {}}
	if strings.HasSuffix(cfs.currentHeaderName, "_1") {
		seenRefs[strings.TrimSuffix(cfs.currentHeaderName, "_1")] = struct{}{}
	}

	for _, ref := range getReferencedTypes(src) {
		if cabiPreventStructDeclaration(ref) {
			continue
		}

		if _, ok := seenRefs[ref]; ok {
			continue
		}
		seenRefs[ref] = struct{}{}

		if !ImportHeaderForClass(ref, false) {
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

		// TODO Remove this suffix hack once we have a better way to automate it
		maybeFileSuffix := ""
		if (parentInclude == "" && strings.Contains(src.Filename, "KIO") && (refInc == "deletejob" || refInc == "metadata")) ||
			(parentInclude == "" && strings.Contains(src.Filename, "KNS") && refInc == "provider") ||
			(parentInclude == "" && strings.Contains(src.Filename, "KTextEditor") && (refInc == "application" || refInc == "mainwindow" || refInc == "message")) ||
			(parentInclude == "" && strings.Contains(src.Filename, "PackageKit") && refInc == "transaction") {
			maybeFileSuffix = "_1"
		}
		if parentInclude == "" && strings.Contains(src.Filename, "Accounts") && refInc == "provider" {
			maybeFileSuffix = "_2"
		}

		ret.WriteString(`#include "` + parentInclude + "lib" + refInc + maybeFileSuffix + `.hpp"` + "\n")
	}

	// workaround for qtermwidget.h
	if srcFilename == "qtermwidget.h" {
		ret.WriteString(`#include "libqtermwidget_interface.hpp"` + "\n")
	}

	// workaround for tr
	switch headerName {
	case "libk7zip.h",
		"libkar.h",
		"libkarchive.h",
		"libkcharsets.h",
		"libkconfigloader.h",
		"libkencodingprober.h",
		"libkrcc.h",
		"libktar.h",
		"libkzip.h",
		"libqcommandlineparser.h",
		"libqimagereader.h",
		"libqimagewriter.h",
		"libqsystemsemaphore.h":
		ret.WriteString(`#include "` + parentInclude + `libqobject.hpp"` + "\n")

	case "libkemailsettings.h":
		ret.WriteString(`#include "../libqobject.hpp"` + "\n")
	}

	ret.WriteString(`%%_IMPORTLIBS_%%#include "` + headerName + `pp"
#include "` + headerName + `"
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

			shortEnumName := e.EnumValueName()

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
		nameIndex := 0
		cPrefix := "q_"
		if cStructName[0] == 'Q' || cStructName[0] == 'K' || cStructName[0] == 'k' {
			nameIndex = 1
			cPrefix = strings.ToLower(cStructName[:1]) + "_"
		} else if strings.Contains(src.Filename, "KF6") || strings.Contains(src.Filename, "LayerShellQt") {
			cPrefix = "k_"
		}
		cMethodPrefix := cPrefix + strings.ToLower(cStructName[nameIndex:])

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
			if strings.HasPrefix(base, "QList<") {
				ret.WriteString("\n// Also inherits unprojectable " + base + "\n")
			}
		}

		ret.WriteString("\n")

		for i, ctor := range c.Ctors {
			if _, ok := moveCtorOnly[c.ClassName]; ok && !ctor.IsMoveCtor {
				continue
			}

			cfs.castType = cStructName
			cfs.currentMethodName = cMethodPrefix + "_new" + maybeSuffix(i)
			preamble, forwarding := cfs.emitParametersC2CABIForwarding(ctor)
			maybeAllocCleanup := cfs.checkAndClearAllocCleanups(true)

			var ctorRet string
			if maybeAllocCleanup == "" {
				ctorRet = "return " + cStructName + "_new" + maybeSuffix(i) + "(" + forwarding + ");"
			} else {
				ctorRet = cStructName + "* _out = " + cStructName + "_new" + maybeSuffix(i) + "(" + forwarding + ");"
				ctorRet += maybeAllocCleanup
				ctorRet += "return _out;"
			}

			if ctor.FossOnly {
				ret.WriteString(cStructName + "* " + cMethodPrefix + "_new" + maybeSuffix(i) + "(" + cfs.emitParametersC(ctor.Parameters, false) + `) {
        #if !defined(__linux__) && !defined(__FreeBSD__)
		    fprintf(stderr, "Error: Unsupported operating system\n");
            abort();
        #endif

` + ctorRet + "}\n\n")
			} else {
				var maybeMacro, maybeEndMacro string

				if ctor.LinuxOnly {
					maybeMacro = "#ifdef __linux__\n"
					maybeEndMacro = "#endif\n"
				}

				preamble = ifv(preamble != "", preamble+"\n", "")

				ret.WriteString(maybeMacro + cStructName + "* " + cMethodPrefix + "_new" + maybeSuffix(i) + "(" + cfs.emitParametersC(ctor.Parameters, false) + ") {\n" +
					preamble + ctorRet + "\n}\n" + maybeEndMacro + "\n\n")
			}
		}

		if c.HasTrivialCopyAssign {
			ret.WriteString("void " + cMethodPrefix + "_copy_assign(void* self, void* other) {\n" +
				cStructName + "_CopyAssign((" + cStructName + "*)self, (" + cStructName + "*)other);\n}\n\n")
		}

		if c.HasTrivialMoveAssign {
			ret.WriteString("void " + cMethodPrefix + "_move_assign(void* self, void* other) {\n" +
				cStructName + "_MoveAssign((" + cStructName + "*)self, (" + cStructName + "*)other);\n}\n\n")
		}

		seenMethods := make(map[string]struct{})
		baseMethods := c.Methods
		protectedMethods := c.ProtectedMethods()
		virtualEligible := AllowVirtualForClass(c.ClassName) && len(virtualMethods) > 0

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
				continue
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

			overrideTr := (m.MethodName == "tr" || m.OverrideMethodName == "tr") && cStructName != "QMetaObject"
			cmdStructName := ifv(overrideTr, "QObject", cStructName)
			cmdMethodName := cPrefix + strings.ToLower(cStructName[nameIndex:])
			safeMethodName := cSafeMethodName(mSafeMethodName)
			if m.InheritedFrom != "" && !overrideTr {
				cmdStructName = cabiClassName(m.InheritedFrom)
			}

			previousMethods[m.MethodName] = struct{}{}
			previousMethods[mSafeMethodName] = struct{}{}

			cfs.castType = cmdStructName
			cfs.currentMethodName = cmdMethodName + safeMethodName
			preamble, forwarding := cfs.emitParametersC2CABIForwarding(m)
			returnTypeDecl := m.ReturnType.renderReturnTypeC(&cfs, false)
			rvalue := cmdStructName + "_" + mSafeMethodName + "(" + forwarding + ")"
			returnFunc := cfs.emitCabiToC("return ", m.ReturnType, rvalue)
			cfs.checkAndClearAllocCleanups(true)

			var commaParams string
			if len(m.Parameters) > 0 {
				commaParams = ", "
			}

			method := safeMethodName + "(void* self" + commaParams
			if m.IsStatic && !m.IsProtected {
				method = safeMethodName + "("
			}

			needsPlatformMacro := false
			if _, ok := platformFunctions[cmdStructName+"_"+mSafeMethodName]; ok && !m.FossOnly && !m.LinuxOnly {
				needsPlatformMacro = true
				ret.WriteString("\n#if defined(__linux__) || defined(__FreeBSD__)\n")
			} else if m.LinuxOnly {
				needsPlatformMacro = true
				ret.WriteString("\n#ifdef __linux__\n")
			}

			ret.WriteString(returnTypeDecl + " " + cmdMethodName + method + cfs.emitParametersC(m.Parameters, false) + ") {")

			if m.FossOnly {
				ret.WriteString(`
    #if !defined(__linux__) && !defined(__FreeBSD__)
        fprintf(stderr, "Error: Unsupported operating system\n");
        abort();
    #endif
`)
			}

			ret.WriteString("\n" + preamble + returnFunc + "\n}\n")

			if needsPlatformMacro {
				ret.WriteString("#endif\n")
			}

			ret.WriteString("\n")

			// Add Connect() wrappers for signal functions
			if m.IsSignal {
				var slotComma, maybeMacro, maybeEndMacro string
				if len(m.Parameters) != 0 {
					slotComma = ", "
				}

				addConnect := true
				if _, ok := noQtConnect[cmdStructName]; ok {
					addConnect = false
				}
				if _, ok := skipQtConnect[cmdStructName+"_"+m.MethodName]; ok {
					addConnect = false
				}

				if addConnect {
					if m.LinuxOnly {
						maybeMacro = "#ifdef __linux__\n"
						maybeEndMacro = "#endif\n"
					}
					ret.WriteString(maybeMacro + "void " + cmdMethodName + "_on" + safeMethodName + "(void* self, void (*callback)(void*" +
						slotComma + cfs.emitParametersC(m.Parameters, true) + ")) {\n" +
						cmdStructName + "_Connect_" + mSafeMethodName + "((" + cmdStructName + "*)self, (intptr_t)callback);\n}\n" + maybeEndMacro + "\n\n")
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
				var maybeVoid, maybeComma, maybeMacro, maybeEndMacro string
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
				if m.LinuxOnly {
					maybeMacro = "#ifdef __linux__\n"
					maybeEndMacro = "#endif\n"
				}

				ret.WriteString(maybeMacro + "void " + cmdMethodName + "_on" + safeMethodName + "(void* self, " + m.ReturnType.renderReturnTypeC(&cfs, true) +
					"(*callback)(" + maybeVoid + maybeComma + cfs.emitParametersC(m.Parameters, true) + ")) {\n" +
					cmdStructName + "_On" + mSafeMethodName + "((" + cmdStructName + "*)self, (intptr_t)callback);\n}\n" + maybeEndMacro + "\n\n")

				baseMethodName := cPrefix + strings.ToLower(cStructName[nameIndex:]) + "_qbase"
				baseCallTarget := cmdStructName + "_QBase" + mSafeMethodName + "(" + forwarding + ")"
				basereturnFunc := cfs.emitCabiToC("return ", m.ReturnType, baseCallTarget)
				cfs.checkAndClearAllocCleanups(true)

				ret.WriteString(maybeMacro + returnTypeDecl + " " + baseMethodName + method + cfs.emitParametersC(m.Parameters, false) + ") {")

				if m.FossOnly {
					ret.WriteString(`
#if !defined(__linux__) && !defined(__FreeBSD__)
    fprintf(stderr, "Error: Unsupported operating system\n");
    abort();
#endif
`)
				}

				ret.WriteString("\n" + preamble + basereturnFunc + "\n}\n" + maybeEndMacro + "\n\n")
			}
		}

		seenVirtuals := map[string]bool{}

		for _, m := range virtualMethods {
			if !virtualEligible {
				continue
			}

			mSafeMethodName := m.SafeMethodName()

			if _, ok := skippedMethods[c.ClassName+"_"+mSafeMethodName]; ok {
				continue
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
			cmdMethodName := cPrefix + strings.ToLower(cStructName[nameIndex:])
			safeMethodName := cSafeMethodName(mSafeMethodName)

			var commaParams string
			if len(m.Parameters) > 0 {
				commaParams = ", "
			}

			// Add a package-private function to call the C++ base class method
			// QWidget_PaintEvent
			cfs.castType = cStructName
			cfs.currentMethodName = cmdMethodName + safeMethodName
			preamble, forwarding := cfs.emitParametersC2CABIForwarding(m)
			forwarding = strings.TrimPrefix(forwarding, "self")
			returnTypeDecl := m.ReturnType.renderReturnTypeC(&cfs, false)
			cfsParams := cfs.emitParametersC(m.Parameters, false)
			returnFunc := cfs.emitCabiToC("return ", m.ReturnType, cmdStructName+"_"+mSafeMethodName+"("+forwarding+")")
			cfs.checkAndClearAllocCleanups(true)

			ret.WriteString(returnTypeDecl + " " + cmdMethodName + safeMethodName + "(void* self" + commaParams + cfsParams + ") {\n    " +
				preamble + returnFunc + "\n}\n\n")

			if !AllowVirtual(m) {
				continue
			}

			var maybeMacro, maybeEndMacro string
			if m.LinuxOnly {
				maybeMacro = "#ifdef __linux__\n"
				maybeEndMacro = "#endif\n"
			}

			preamble, forwarding = cfs.emitParametersC2CABIForwarding(m)
			forwarding = strings.TrimPrefix(forwarding, "self")
			returnFunc = cfs.emitCabiToC("return ", m.ReturnType, cmdStructName+"_QBase"+mSafeMethodName+"("+forwarding+")")
			cfs.checkAndClearAllocCleanups(true)

			ret.WriteString(maybeMacro + returnTypeDecl + " " + cmdMethodName + "_qbase" + safeMethodName + "(void* self" + commaParams + cfsParams + ") {\n    " +
				preamble + returnFunc + "\n}\n" + maybeEndMacro + "\n\n")

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

			ret.WriteString(maybeMacro + "void " + cmdMethodName + "_on" + safeMethodName + "(void* self, " + m.ReturnType.renderReturnTypeC(&cfs, true) +
				"(*callback)(" + maybeVoid + commaParams + cfs.emitParametersC(m.Parameters, true) + ")) {\n" +
				cmdStructName + "_On" + mSafeMethodName + "((" + cmdStructName + "*)self, (intptr_t)callback);\n}\n" + maybeEndMacro + "\n\n")
		}

		for _, m := range privateSignals {
			cmdStructName := cStructName
			mSafeMethodName := m.SafeMethodName()
			cmdMethodName := cPrefix + strings.ToLower(cStructName[nameIndex:])
			safeMethodName := cSafeMethodName(mSafeMethodName)
			if m.InheritedFrom != "" {
				cmdStructName = cabiClassName(m.InheritedFrom)
			}
			var slotComma string
			if len(m.Parameters) != 0 {
				slotComma = ", "
			}

			ret.WriteString("void " + cmdMethodName + "_on" + safeMethodName + "(void* self, void (*callback)(void*" +
				slotComma + cfs.emitParametersC(m.Parameters, true) + ")) {\n" +
				cmdStructName + "_Connect_" + mSafeMethodName + "((" + cmdStructName + "*)self, (intptr_t)callback);\n}\n\n")
		}

		if c.CanDelete && (len(c.Methods) > 0 || len(c.VirtualMethods()) > 0 || len(c.Ctors) > 0) {
			ret.WriteString("void " + cPrefix + cSafeMethodName(strings.ToLower(cStructName[nameIndex:])) + "_delete(void* self) {\n" +
				cStructName + "_Delete((" + cStructName + "*)(self));\n}\n")
		}
	}

	cSrc := ret.String()

	// Fixup imports and struct definitions
	if len(cfs.imports) > 0 {
		allImports := make([]string, 0, len(cfs.imports))
		for k := range cfs.imports {
			if strings.HasPrefix(k, "std") {
				allImports = append(allImports, "#include <"+k+">\n")
			} else if !strings.Contains(cSrc, "lib"+k+".hpp") {
				dotInclude := ""
				if packageName != "" && k == "qcoreevent" {
					dotInclude = "../"
				}

				allImports = append(allImports, `#include "`+dotInclude+"lib"+k+`.hpp"`+"\n")
			}
		}

		cSrc = strings.ReplaceAll(cSrc, "%%_IMPORTLIBS_%%", strings.Join(allImports, "\n"))
	} else {
		cSrc = strings.ReplaceAll(cSrc, "%%_IMPORTLIBS_%%", "")
	}
	return cSrc, nil
}
