package main

import (
	"math"
	"path/filepath"
	"strconv"
	"strings"
)

type lookupResultClass struct {
	PackageName string
	Class       CppClass
}

type lookupResultTypedef struct {
	PackageName string
	Typedef     CppTypedef
}

type lookupResultEnum struct {
	PackageName  string
	Enum         CppEnum
	EnumTypeCABI string
	EnumTypeC    string
}

type lookupResultInclude struct {
	PackageName string
	Filename    string
}

var (
	KnownClassnames = make(map[string]lookupResultClass) // Entries of the form QFoo::Bar if it is an inner class
	KnownTypedefs   = make(map[string]lookupResultTypedef)
	KnownEnums      = make(map[string]lookupResultEnum)
	KnownIncludes   = make(map[string]lookupResultInclude)
)

// Handle child classes recursively
func registerChildClasses(class CppClass, packageName string) {
	for _, childClass := range class.ChildClassdefs {
		// Register with fully qualified name
		KnownClassnames[childClass.ClassName] = lookupResultClass{packageName, childClass}

		// Recursively register any nested children
		registerChildClasses(childClass, packageName)
	}
}

func (e CppEnum) getEnumTypeC() string {
	if len(e.Entries) > 0 {
		// perform a lazy analysis of the enum entries
		num, err := strconv.Atoi(e.Entries[len(e.Entries)-1].EntryValue)
		if err == nil {
			if float64(num) > math.MaxInt32 || float64(num) < math.MinInt32 {
				// need to use int64_t to avoid overflow
				return "int64_t"
			}
		}
	}

	switch e.UnderlyingType.ParameterType {
	// signed types
	case "char", "qint8", "signed char":
		return "int8_t"
	case "int", "qint32":
		return "int32_t"

	// unsigned types
	case "uchar", "quint8", "uint8_t", "unsigned char":
		return "uint8_t"
	case "ushort", "quint16":
		return "uint16_t"
	case "quint32", "unsigned int":
		return "uint32_t"
	case "quint64":
		return "uint64_t"

	default:
		panic("UNHANDLED ENUM TYPE: " + e.UnderlyingType.ParameterType + " for " + e.EnumName)
	}
}

func addKnownTypes(packageName string, parsed *CppParsedHeader) {
	for _, c := range parsed.Classes {
		if parsed.Filename != "" && !strings.Contains(c.ClassName, "::") {
			KnownIncludes[c.ClassName] = lookupResultInclude{packageName, filepath.Base(parsed.Filename)}
		}

		KnownClassnames[c.ClassName] = lookupResultClass{packageName, c /* copy */}

		// If it's a nested class, also register its local name
		if strings.Contains(c.ClassName, "::") {
			localName := c.ClassName[strings.Index(c.ClassName, "::")+2:]
			lastName := c.ClassName[strings.LastIndex(c.ClassName, "::")+2:]
			KnownClassnames[localName] = lookupResultClass{packageName, c}
			KnownClassnames[lastName] = lookupResultClass{packageName, c}
		}

		for _, td := range c.ChildTypedefs {
			// Register typedef with fully qualified name
			KnownTypedefs[td.Alias] = lookupResultTypedef{packageName, td /* copy */}
			if strings.Contains(td.Alias, "::") {
				localName := td.Alias[strings.Index(td.Alias, "::")+2:]
				lastName := td.Alias[strings.LastIndex(td.Alias, "::")+2:]
				KnownTypedefs[localName] = lookupResultTypedef{packageName, td}
				KnownTypedefs[lastName] = lookupResultTypedef{packageName, td}
			}
		}

		for _, childClass := range c.ChildClassdefs {
			// Register class with fully qualified name
			KnownClassnames[childClass.ClassName] = lookupResultClass{packageName, childClass}
			registerChildClasses(c, packageName)
		}

		// Handle child enums in classes
		for _, en := range c.ChildEnums {
			enumClass := en.EnumClassName()
			enumCABI := en.UnderlyingType.RenderTypeCabi(false)
			enumC := en.getEnumTypeC()

			// Register enum with fully qualified name
			KnownEnums[en.EnumName] = lookupResultEnum{packageName, en, enumCABI, enumC}
			// Register short name
			KnownEnums[enumClass] = lookupResultEnum{packageName, en, enumCABI, enumC}

			// Flags version
			flagsEnum := en // copy
			flagsEnum.EnumName = "QFlags<" + en.EnumName + ">"
			KnownEnums[flagsEnum.EnumName] = lookupResultEnum{packageName, flagsEnum, "int64_t", "int64_t"}
			KnownEnums[enumClass+"s"] = lookupResultEnum{packageName, flagsEnum, "int64_t", "int64_t"}
		}
	}

	for _, td := range parsed.Typedefs {
		KnownTypedefs[td.Alias] = lookupResultTypedef{packageName, td /* copy */}
	}

	for _, en := range parsed.Enums {
		if parsed.Filename != "" && en.EnumName != "" && !strings.Contains(en.EnumName, "::") {
			// enum classes... in Qt 6, these are found in qcborcommon.h, qdtls.h, qlogging.h, qmetatype.h, qocspresponse.h
			KnownIncludes[en.EnumName] = lookupResultInclude{packageName, filepath.Base(parsed.Filename)}
		}

		enumCABI := en.UnderlyingType.RenderTypeCabi(false)
		enumC := en.getEnumTypeC()

		KnownEnums[en.EnumName] = lookupResultEnum{packageName, en /* copy */, enumCABI, enumC}

		// Register short name if it's a scoped enum
		if strings.Contains(en.EnumName, "::") {
			shortName := en.EnumClassName()
			KnownEnums[shortName] = lookupResultEnum{packageName, en, enumCABI, enumC}
		}

		// Flags version
		flagsEnum := en // copy
		flagsEnum.EnumName = "QFlags<" + en.EnumName + ">"
		KnownEnums[flagsEnum.EnumName] = lookupResultEnum{packageName, flagsEnum, "int64_t", "int64_t"}
		if strings.Contains(en.EnumName, "::") {
			KnownEnums[en.EnumClassName()+"s"] = lookupResultEnum{packageName, flagsEnum, "int64_t", "int64_t"}
		}
	}

	if len(parsed.Enums) != 0 && parsed.Filename != "" {
		for _, en := range parsed.Enums {
			// Some headers only have enums we can process, e.g. QSsl, QtVideo
			// We also need to check for enums in scoped classes
			includeName := en.EnumValueName()
			KnownIncludes[includeName] = lookupResultInclude{packageName, filepath.Base(parsed.Filename)}
		}
	}

	// Register detected flags
	for flagName, flagInfo := range parsed.DetectedFlags {
		// Create flag enum entry
		flagEnum := CppEnum{
			EnumName:       flagInfo.PropertyName,
			UnderlyingType: flagInfo.PropertyType,
		}

		// Register with fully qualified name
		KnownEnums[flagInfo.PropertyName] = lookupResultEnum{packageName, flagEnum, "int64_t", "int64_t"}

		// Register with short name
		if strings.Contains(flagInfo.PropertyName, "::") {
			KnownEnums[flagName] = lookupResultEnum{packageName, flagEnum, "int64_t", "int64_t"}
		}
	}
}
