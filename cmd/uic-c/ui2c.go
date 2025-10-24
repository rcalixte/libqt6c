package main

import (
	"fmt"
	"path/filepath"
	"slices"
	"strconv"
	"strings"
)

var (
	SanitizeObjectCounter = 0
	SanitizationFlag      = false
	ExtendedFlag          = false
	FlagWarnings          = []string{}
	GlobalContext         = ""
	DefaultGridMargin     = 11
	DefaultChildrenMargin = -1
	TextCounter           = 0
	IconCounter           = 0
	SizeCounter           = 0
	FontCounter           = 0
	PixmapCounter         = 0
	CursorCounter         = 0
	ItemWidgetCounter     = 0
	VariantCounter        = 0
	SizePolicyCounter     = 0
	BrushCounter          = 0
	DateCounter           = 0
	TimeCounter           = 0
	ColorCounter          = 0
	SizePolicyMap         = map[string]string{}
	BrushColorMap         = map[string]string{}
	ButtonGroups          = map[string]*UiButtonGroup{}
	QMenus                = []string{}
	QMenuActionsMap       = map[string][]string{}
	OtherActions          = []string{}
	CustomWidgets         = make(map[string]string)
	WidgetMap             = map[string]string{}
	WidgetItemsMap        = map[string][]string{}
	WidgetItems           = []string{}
	TableWidgetMap        = map[string]struct{}{}
	cReservedWord         = map[string]struct{}{ // not an exhaustive list
		"auto":     {},
		"break":    {},
		"case":     {},
		"char":     {},
		"const":    {},
		"continue": {},
		"default":  {},
		"double":   {},
		"else":     {},
		"float":    {},
		"for":      {},
		"if":       {},
		"int":      {},
		"long":     {},
		"short":    {},
		"sizeof":   {},
		"struct":   {},
		"switch":   {},
		"typedef":  {},
		"union":    {},
		"unsigned": {},
		"void":     {},
		"while":    {},
		"volatile": {},
	}
)

func collectClassNames_Widget(u *UiWidget) []string {
	var ret []string
	className := u.Class

	if u.Name != "" {
		if cw, ok := CustomWidgets[u.Class]; ok && !(ExtendedFlag && isExtendedClass(u.Class)) {
			className = cw
		}
		ret = append(ret, strings.ReplaceAll(className, "::", "__")+"* "+u.Name+";")
		WidgetMap[u.Name] = cClassMethodPrefix(className)
	}

	for _, w := range u.Widgets {
		ret = append(ret, collectClassNames_Widget(&w)...)
	}
	if u.Layout != nil {
		ret = append(ret, collectClassNames_Layout(u.Layout)...)
	}
	for _, a := range u.Actions {
		ret = append(ret, "QAction* "+a.Name+";")
		WidgetMap[a.Name] = "q_action"
	}

	return ret
}

func collectClassNames_Layout(l *UiLayout) []string {
	var ret []string

	if l.Name != "" {
		ret = append(ret, l.Class+"* "+l.Name+";")
		WidgetMap[l.Name] = cClassMethodPrefix(l.Class)
	}

	for _, li := range l.Items {
		if li.Widget != nil {
			ret = append(ret, collectClassNames_Widget(li.Widget)...)
		}
		if li.Spacer != nil {
			ret = append(ret, "QSpacerItem* "+li.Spacer.Name+";")
		}
		if li.Layout != nil {
			ret = append(ret, collectClassNames_Layout(li.Layout)...)
		}
	}

	return ret
}

func writtenString(pre, generate, post string, notr, addComment bool) string {
	if notr {
		return pre + generate + post
	}

	var auxiliaryComment string
	if addComment {
		auxiliaryComment = " // auxiliary to q_coreapplication_translate"
	}

	returnStr := "const char* text" + strconv.Itoa(TextCounter) + " = " + generate + ";\n"
	returnStr += pre + " text" + strconv.Itoa(TextCounter) + strings.TrimSpace(post) + auxiliaryComment + "\n"
	returnStr += "libqt_free(text" + strconv.Itoa(TextCounter) + ");" + auxiliaryComment + "\n"

	TextCounter++

	return returnStr
}

func generateString(s *UiString) string {
	if s.Notr {
		return strconv.Quote(s.Value)
	}

	var suffix, disambiguation string
	if s.Disambiguation != "" {
		suffix = "3"
		disambiguation = ", " + strconv.Quote(s.Disambiguation)
	}

	context := strconv.Quote(GlobalContext) + ", "

	return "q_coreapplication_translate" + suffix + "(" + context + strconv.Quote(s.Value) + disambiguation + ")"
}

func normalizeEnumName(name, val string) string {
	enumParts := strings.Split(val, "::")

	switch len(enumParts) {
	case 1:
		// BottomToolBarArea -> Qt::BottomToolBarArea
		return "QT_" + strings.ToUpper(name+"_"+enumParts[0])
	case 3:
		// QFrame::Shape::Panel
		return strings.ToUpper(enumParts[0] + "_" + enumParts[1] + "_" + enumParts[2])
	default:
		panic("invalid enum: " + val)
	}
}

func storeAction(action, wClass, name string) {
	if wClass == "QMenu" {
		QMenuActionsMap[name] = append(QMenuActionsMap[name], action)
	} else {
		OtherActions = append(OtherActions, action)
	}
}

func processPaletteGroup(ret *strings.Builder, targetName string, groupName string, colorRoles []UiColorRole) {
	for _, role := range colorRoles {
		mapKey := role.Brush.Style + " (" + strconv.Itoa(role.Brush.Color.Red) + "," + strconv.Itoa(role.Brush.Color.Green) + "," + strconv.Itoa(role.Brush.Color.Blue) + "," + strconv.Itoa(*role.Brush.Color.Alpha) + ")"

		brushNum, ok := BrushColorMap[mapKey]
		if !ok {
			brushNum = strconv.Itoa(BrushCounter)
			BrushColorMap[mapKey] = brushNum
			ret.WriteString(getNewBrush(brushNum, role.Brush.Style, strconv.Itoa(role.Brush.Color.Red), strconv.Itoa(role.Brush.Color.Green), strconv.Itoa(role.Brush.Color.Blue), strconv.Itoa(*role.Brush.Color.Alpha)))
			BrushCounter++
		}
		ret.WriteString(getSetPaletteBrush(targetName, groupName, role.Role, brushNum))
	}
}

func getNewBrush(brushNum, style, red, green, blue, alpha string) string {
	var newBrush string

	newBrush += "QColor* color" + brushNum + " = q_color_new13(" + red + ", " + green + ", " + blue + ", " + alpha + ");\n"
	newBrush += "QBrush* brush" + brushNum + " = q_brush_new3(color" + brushNum + ");\n"
	newBrush += "q_brush_set_style(brush" + brushNum + ", QT_BRUSHSTYLE_" + strings.ToUpper(style) + ");\n"

	return newBrush
}

func getSetPaletteBrush(targetName, group, role, brushNum string) string {
	return "q_palette_set_brush2(" + targetName + "_palette, QPALETTE_COLORGROUP_" + group + ", QPALETTE_COLORROLE_" + strings.ToUpper(role) + ", brush" + brushNum + ");\n"
}

func newQSize(sizeName *string, isSizeSet *bool) string {
	if *isSizeSet {
		*sizeName = fmt.Sprintf("size%d", SizeCounter)
	} else {
		*isSizeSet = true
	}

	newSize := "QSize* " + *sizeName + " = q_size_new3();"
	SizeCounter++

	return newSize
}

func writeFlagWarning(ret *strings.Builder, name, class string) {
	warning := "Warning: Use '-e' to enable extended class support for '" + name + "' property of type '" + class + "'"
	ret.WriteString("// " + warning + "\n")
	FlagWarnings = append(FlagWarnings, warning)
}

func deleteQSize(sizeName string) string {
	return "q_size_delete(" + sizeName + ");\n"
}

func renderIcon(iconVal *UiIcon, ret *strings.Builder) string {
	iconName := fmt.Sprintf("icon%d", IconCounter)
	IconCounter++

	sizeName := fmt.Sprintf("size%d", SizeCounter)
	var themeIconCond, isSizeSet bool

	if iconVal.Theme != "" {
		theme := iconVal.Theme

		if strings.Contains(theme, "::") {
			theme = normalizeEnumName(iconName, theme)
			ret.WriteString("QIcon* " + iconName + " = q_icon_from_theme3(" + theme + ");\n")
		} else if iconVal.ResourceFile != "" {
			theme = strconv.Quote(theme)
			ret.WriteString("QIcon* " + iconName + ";\n")
			ret.WriteString("if (q_icon_has_theme_icon(" + theme + ")) {\n")
			ret.WriteString(iconName + " = q_icon_from_theme(" + theme + ");\n")
			ret.WriteString("} else {\n")
			ret.WriteString(iconName + " = q_icon_new();\n")
			themeIconCond = true
		} else {
			ret.WriteString("QIcon* " + iconName + " = q_icon_from_theme(" + strconv.Quote(theme) + ");\n")
		}
	} else {
		ret.WriteString("QIcon* " + iconName + " = q_icon_new();\n")
	}

	// A base entry is a synonym for NormalOff. Don't need them both
	if iconVal.NormalOff != nil && *iconVal.NormalOff != "." {
		ret.WriteString(newQSize(&sizeName, &isSizeSet))
		ret.WriteString("q_icon_add_file4(" + iconName + ", " + strconv.Quote(*iconVal.NormalOff) + ", " + sizeName + ", QICON_MODE_NORMAL, QICON_STATE_OFF);\n")
		ret.WriteString(deleteQSize(sizeName))
	} else {
		base := strings.TrimSpace(iconVal.Base)
		if base != "" && base != "." {
			ret.WriteString("q_icon_add_file(" + iconName + ", " + strconv.Quote(strings.TrimSpace(iconVal.Base)) + ");\n")
		}
	}

	if iconVal.NormalOn != nil {
		ret.WriteString(newQSize(&sizeName, &isSizeSet))
		ret.WriteString("q_icon_add_file4(" + iconName + ", " + strconv.Quote(*iconVal.NormalOn) + ", " + sizeName + ", QICON_MODE_NORMAL, QICON_STATE_ON);\n")
		ret.WriteString(deleteQSize(sizeName))
	}
	if iconVal.ActiveOff != nil {
		ret.WriteString(newQSize(&sizeName, &isSizeSet))
		ret.WriteString("q_icon_add_file4(" + iconName + ", " + strconv.Quote(*iconVal.ActiveOff) + ", " + sizeName + ", QICON_MODE_ACTIVE, QICON_STATE_OFF);\n")
		ret.WriteString(deleteQSize(sizeName))
	}
	if iconVal.ActiveOn != nil {
		ret.WriteString(newQSize(&sizeName, &isSizeSet))
		ret.WriteString("q_icon_add_file4(" + iconName + ", " + strconv.Quote(*iconVal.ActiveOn) + ", " + sizeName + ", QICON_MODE_ACTIVE, QICON_STATE_ON);\n")
		ret.WriteString(deleteQSize(sizeName))
	}
	if iconVal.DisabledOff != nil {
		ret.WriteString(newQSize(&sizeName, &isSizeSet))
		ret.WriteString("q_icon_add_file4(" + iconName + ", " + strconv.Quote(*iconVal.DisabledOff) + ", " + sizeName + ", QICON_MODE_DISABLED, QICON_STATE_OFF);\n")
		ret.WriteString(deleteQSize(sizeName))
	}
	if iconVal.DisabledOn != nil {
		ret.WriteString(newQSize(&sizeName, &isSizeSet))
		ret.WriteString("q_icon_add_file4(" + iconName + ", " + strconv.Quote(*iconVal.DisabledOn) + ", " + sizeName + ", QICON_MODE_DISABLED, QICON_STATE_ON);\n")
		ret.WriteString(deleteQSize(sizeName))
	}
	if iconVal.SelectedOff != nil {
		ret.WriteString(newQSize(&sizeName, &isSizeSet))
		ret.WriteString("q_icon_add_file4(" + iconName + ", " + strconv.Quote(*iconVal.SelectedOff) + ", " + sizeName + ", QICON_MODE_SELECTED, QICON_STATE_OFF);\n")
		ret.WriteString(deleteQSize(sizeName))
	}
	if iconVal.SelectedOn != nil {
		ret.WriteString(newQSize(&sizeName, &isSizeSet))
		ret.WriteString("q_icon_add_file4(" + iconName + ", " + strconv.Quote(*iconVal.SelectedOn) + ", " + sizeName + ", QICON_MODE_SELECTED, QICON_STATE_ON);\n")
		ret.WriteString(deleteQSize(sizeName))
	}

	if themeIconCond {
		ret.WriteString("}\n")
	}

	return iconName
}

func renderProperties(properties []UiProperty, ret *strings.Builder, targetName, targetClass, parentClass string) error {
	defaultMargin := DefaultGridMargin
	if parentClass != "" {
		defaultMargin = DefaultChildrenMargin
	}
	contentsMargins := [4]int{defaultMargin, defaultMargin, defaultMargin, defaultMargin} // left, top, right, bottom
	customContentsMargins := false
	targetClassPrefix := "q_"
	targetClassIndex := 1

	if targetClass[0] != 'Q' {
		targetClassPrefix = "k_"
	}
	if targetClass[0] != 'Q' && targetClass[0] != 'K' {
		targetClassIndex = 0
	}
	cMethodPrefix := targetClassPrefix + cClassName(strings.ReplaceAll(targetClass[targetClassIndex:], "::", "__"))

	strVariantName := targetName + "_variant_str"
	numVariantName := targetName + "_variant_num"
	boolVariantName := targetName + "_variant_bool"
	urlVariantName := targetName + "_variant_url"
	enumVariantName := targetName + "_variant_enum"

	for _, prop := range properties {
		setterFunc := "_set_" + cMethodName(prop.Name)

		if prop.Name == "geometry" {
			if targetName == GlobalContext {
				ret.WriteString(cMethodPrefix + "_resize(ui->" + targetName + ", " + fmt.Sprintf("%d, %d", prop.RectVal.Width, prop.RectVal.Height) + ");\n")
			} else {
				ret.WriteString(cMethodPrefix + "_set_geometry(ui->" + targetName + ", " + fmt.Sprintf("%d, %d, %d, %d", prop.RectVal.X, prop.RectVal.Y, prop.RectVal.Width, prop.RectVal.Height) + ");\n")
			}

		} else if prop.Name == "leftMargin" {
			contentsMargins[0] = mustParseInt(*prop.NumberVal)
			customContentsMargins = true

		} else if prop.Name == "topMargin" {
			contentsMargins[1] = mustParseInt(*prop.NumberVal)
			customContentsMargins = true

		} else if prop.Name == "rightMargin" {
			contentsMargins[2] = mustParseInt(*prop.NumberVal)
			customContentsMargins = true

		} else if prop.Name == "bottomMargin" {
			contentsMargins[3] = mustParseInt(*prop.NumberVal)
			customContentsMargins = true

		} else if prop.Name == "margin" && prop.StdSetVal != nil && *prop.StdSetVal != "" {
			customMargin := mustParseInt(*prop.NumberVal)
			contentsMargins = [4]int{customMargin, customMargin, customMargin, customMargin}
			customContentsMargins = true

		} else if prop.PixmapVal != nil {
			ret.WriteString("QPixmap* pixmap" + strconv.Itoa(PixmapCounter) + ` = q_pixmap_new4("` + *prop.PixmapVal + `");` + "\n")
			ret.WriteString(cMethodPrefix + setterFunc + "(ui->" + targetName + ", pixmap" + strconv.Itoa(PixmapCounter) + ");\n")
			ret.WriteString("q_pixmap_delete(pixmap" + strconv.Itoa(PixmapCounter) + ");\n")
			PixmapCounter++

		} else if prop.Name == "buddy" {
			ret.WriteString(cMethodPrefix + setterFunc + "(ui->" + targetName + ", ui->" + *prop.CStringVal + ");\n")

		} else if prop.Name == "cursor" {
			ret.WriteString("QCursor* cursor" + strconv.Itoa(CursorCounter) + "= q_cursor_new2(QT_CURSORSHAPE_" + strings.ToUpper(*prop.CursorVal) + ");\n")
			ret.WriteString(cMethodPrefix + "_set_cursor(ui->" + targetName + ", cursor" + strconv.Itoa(CursorCounter) + ");\n")
			ret.WriteString("q_cursor_delete(cursor" + strconv.Itoa(CursorCounter) + ");\n")
			CursorCounter++

		} else if prop.StringVal != nil {
			//  "windowTitle", "title", "text"
			if prop.StdSetVal != nil && *prop.StdSetVal != "" {
				maybeComment := " // auxiliary to q_coreapplication_translate"
				if prop.StringVal.Notr {
					maybeComment = ""
				}
				ret.WriteString(writtenString("QVariant* "+strVariantName+strconv.Itoa(VariantCounter)+" = q_variant_new24(", generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
				ret.WriteString(cMethodPrefix + "_set_property(ui->" + targetName + ", " + strconv.Quote(prop.Name) + ", " + strVariantName + strconv.Itoa(VariantCounter) + ");" + maybeComment + "\n")
				ret.WriteString("q_variant_delete(" + strVariantName + strconv.Itoa(VariantCounter) + ");" + maybeComment + "\n")
				VariantCounter++
			} else if prop.Name == "shortcut" || prop.Name == "keySequence" {
				maybeComment := " // auxiliary to q_coreapplication_translate"
				if prop.StringVal.Notr {
					maybeComment = ""
				}
				ret.WriteString(writtenString("\nQKeySequence* "+targetName+"_key_sequence = q_keysequence_new2(", generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
				ret.WriteString(cMethodPrefix + setterFunc + "(ui->" + targetName + ", " + targetName + "_key_sequence);" + maybeComment + "\n")
				ret.WriteString("q_keysequence_delete(" + targetName + "_key_sequence);" + maybeComment + "\n")
			} else {
				ret.WriteString(writtenString(cMethodPrefix+setterFunc+"(ui->"+targetName+", ", generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
			}

		} else if prop.NumberVal != nil {
			// "currentIndex"
			if prop.StdSetVal != nil && *prop.StdSetVal != "" {
				ret.WriteString("QVariant* " + numVariantName + strconv.Itoa(VariantCounter) + " = q_variant_new6(" + *prop.NumberVal + ");\n")
				ret.WriteString(cMethodPrefix + "_set_property(ui->" + targetName + ", " + strconv.Quote(prop.Name) + ", " + numVariantName + strconv.Itoa(VariantCounter) + ");\n")
				ret.WriteString("q_variant_delete(" + numVariantName + strconv.Itoa(VariantCounter) + ");\n")
				VariantCounter++
			} else {
				ret.WriteString(cMethodPrefix + setterFunc + "(ui->" + targetName + ", " + *prop.NumberVal + ");\n")
			}

		} else if prop.BoolVal != nil {
			// "childrenCollapsible"
			if prop.StdSetVal != nil && *prop.StdSetVal != "" {
				ret.WriteString("QVariant* " + boolVariantName + strconv.Itoa(VariantCounter) + " = q_variant_new8(" + strconv.FormatBool(*prop.BoolVal) + ");\n")
				ret.WriteString(cMethodPrefix + "_set_property(ui->" + targetName + ", " + strconv.Quote(prop.Name) + ", " + boolVariantName + strconv.Itoa(VariantCounter) + ");\n")
				ret.WriteString("q_variant_delete(" + boolVariantName + strconv.Itoa(VariantCounter) + ");\n")
				VariantCounter++
			} else {
				// "tristate"
				var overrideNum string
				if prop.Name == "tristate" || (targetClass == "KUrlLabel" && (prop.Name == "floatEnabled" || prop.Name == "glowEnabled" || prop.Name == "underline" || prop.Name == "useTips")) {
					overrideNum = "1"
				}
				ret.WriteString(cMethodPrefix + setterFunc + overrideNum + "(ui->" + targetName + ", " + strconv.FormatBool(*prop.BoolVal) + ");\n")
			}

		} else if prop.EnumVal != nil {
			// "tabStyle"
			if prop.StdSetVal != nil && *prop.StdSetVal != "" {
				ret.WriteString("QVariant* " + enumVariantName + strconv.Itoa(VariantCounter) + " = q_variant_new6(" + normalizeEnumName(prop.Name, *prop.EnumVal) + ");\n")
				ret.WriteString(cMethodPrefix + "_set_property(ui->" + targetName + ", " + strconv.Quote(prop.Name) + ", " + enumVariantName + strconv.Itoa(VariantCounter) + ");\n")
				ret.WriteString("q_variant_delete(" + enumVariantName + strconv.Itoa(VariantCounter) + ");\n")
				VariantCounter++
			} else if targetClass == "QFrame" && prop.Name == "orientation" {
				enumVal := "HLINE"
				if strings.Contains(*prop.EnumVal, "Vertical") {
					enumVal = "VLINE"
				}
				ret.WriteString(cMethodPrefix + "_set_frame_shape(ui->" + targetName + ", QFRAME_SHAPE_" + enumVal + ");\n")
			} else {
				// "QFrame::Shape::Panel"
				ret.WriteString(cMethodPrefix + setterFunc + "(ui->" + targetName + ", " + normalizeEnumName(prop.Name, *prop.EnumVal) + ");\n")
			}

		} else if prop.SetVal != nil {
			// QDialogButtonBox::StandardButton::*
			// <set>QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Save</set>

			// block KRichTextWidget::setRichTextSupport due to poor implementation
			if prop.Name == "richTextSupport" {
				ret.WriteString("// UIC: Property `" + prop.Name + "` is not supported for type " + targetClass + "\n")
				continue
			}

			parts := strings.Split(*prop.SetVal, "|")
			for i, p := range parts {
				parts[i] = normalizeEnumName(prop.Name, p)
			}

			emit := "0"
			if len(parts) > 0 {
				emit = strings.Join(parts, "|")
			}
			ret.WriteString(cMethodPrefix + setterFunc + "(ui->" + targetName + ", " + emit + ");\n")

		} else if prop.IconVal != nil {
			iconName := renderIcon(prop.IconVal, ret)
			ret.WriteString(cMethodPrefix + setterFunc + "(ui->" + targetName + ", " + iconName + ");\n")
			ret.WriteString("q_icon_delete(icon" + strconv.Itoa(IconCounter-1) + ");\n")

		} else if prop.Name == "sizePolicy" {
			mapKey := prop.SizePolicyVal.HSizeType + "," + prop.SizePolicyVal.VSizeType + "," + strconv.Itoa(prop.SizePolicyVal.HStretch) + "," + strconv.Itoa(prop.SizePolicyVal.VStretch)

			sizePolicyNum, ok := SizePolicyMap[mapKey]
			if !ok {
				sizePolicyNum = strconv.Itoa(SizePolicyCounter)
				SizePolicyMap[mapKey] = sizePolicyNum
				ret.WriteString("QSizePolicy* sizePolicy" + sizePolicyNum + " = q_sizepolicy_new3();\n")
				ret.WriteString("q_sizepolicy_set_horizontal_policy(sizePolicy" + sizePolicyNum + ", " + normalizeEnumName("", "QSizePolicy::Policy::"+prop.SizePolicyVal.HSizeType) + ");\n")
				ret.WriteString("q_sizepolicy_set_vertical_policy(sizePolicy" + sizePolicyNum + ", " + normalizeEnumName("", "QSizePolicy::Policy::"+prop.SizePolicyVal.VSizeType) + ");\n")
				ret.WriteString("q_sizepolicy_set_horizontal_stretch(sizePolicy" + sizePolicyNum + ", " + strconv.Itoa(prop.SizePolicyVal.HStretch) + ");\n")
				ret.WriteString("q_sizepolicy_set_vertical_stretch(sizePolicy" + sizePolicyNum + ", " + strconv.Itoa(prop.SizePolicyVal.VStretch) + ");\n")
				SizePolicyCounter++
			}

			targetSP := targetName + "_sp"
			ret.WriteString("QSizePolicy* " + targetSP + " = " + cMethodPrefix + "_size_policy(ui->" + targetName + ");\n")
			ret.WriteString("q_sizepolicy_set_height_for_width(sizePolicy" + sizePolicyNum + ", q_sizepolicy_has_height_for_width(" + targetSP + "));\n")
			ret.WriteString(cMethodPrefix + "_set_size_policy(ui->" + targetName + ", sizePolicy" + sizePolicyNum + ");\n")
			ret.WriteString("q_sizepolicy_delete(" + targetSP + ");\n")

		} else if prop.Name == "font" {
			fontCounter := FontCounter
			FontCounter++

			fontVal := "font" + strconv.Itoa(fontCounter)

			ret.WriteString("QFont* " + fontVal + " = q_font_new();\n")

			if prop.FontVal.Family != nil && *prop.FontVal.Family != "" {
				ret.WriteString("q_font_set_family(" + fontVal + ", " + strconv.Quote(*prop.FontVal.Family) + ");\n")
			}

			if prop.FontVal.PointSize != nil {
				ret.WriteString("q_font_set_point_size(" + fontVal + ", " + strconv.Itoa(*prop.FontVal.PointSize) + ");\n")
			}

			if prop.FontVal.Italic != nil {
				ret.WriteString("q_font_set_italic(" + fontVal + ", " + strconv.FormatBool(*prop.FontVal.Italic) + ");\n")
			}

			if prop.FontVal.Bold != nil {
				ret.WriteString("q_font_set_bold(" + fontVal + ", " + strconv.FormatBool(*prop.FontVal.Bold) + ");\n")
			}

			if prop.FontVal.Underline != nil {
				ret.WriteString("q_font_set_underline(" + fontVal + ", " + strconv.FormatBool(*prop.FontVal.Underline) + ");\n")
			}

			if prop.FontVal.StrikeOut != nil {
				ret.WriteString("q_font_set_strike_out(" + fontVal + ", " + strconv.FormatBool(*prop.FontVal.StrikeOut) + ");\n")
			}

			if prop.FontVal.Weight != nil && *prop.FontVal.Weight != "" {
				ret.WriteString("q_font_set_weight(" + fontVal + ", QFONT_WEIGHT_" + strings.ToUpper(*prop.FontVal.Weight) + ");\n")
			}

			if prop.FontVal.Antialiasing != nil && *prop.FontVal.Antialiasing != "" {
				ret.WriteString("q_font_set_style_strategy(" + fontVal + ", QFONT_STYLESTRATEGY_" + strings.ToUpper(*prop.FontVal.Antialiasing) + ");\n")
			}

			if prop.FontVal.Kerning != nil {
				ret.WriteString("q_font_set_kerning(" + fontVal + ", " + strconv.FormatBool(*prop.FontVal.Kerning) + ");\n")
			}

			if prop.FontVal.HintingPreference != nil && *prop.FontVal.HintingPreference != "" {
				ret.WriteString("q_font_set_hinting_preference(" + fontVal + ", QFONT_HINTINGPREFERENCE_" + strings.ToUpper(*prop.FontVal.HintingPreference) + ");\n")
			}

			var maybeOnlyFixed string
			if ExtendedFlag && targetClass == "KFontRequester" {
				maybeOnlyFixed = ", false"
			} else if !ExtendedFlag && targetClass[0] == 'K' {
				writeFlagWarning(ret, prop.Name, targetClass)
			}
			ret.WriteString(cMethodPrefix + "_set_font(ui->" + targetName + ", " + fontVal + maybeOnlyFixed + ");\n")
			ret.WriteString("q_font_delete(" + fontVal + ");\n")

		} else if prop.Name == "iconSize" {
			ret.WriteString("QSize* " + targetName + "_size" + strconv.Itoa(SizeCounter) + " = q_size_new4(" + fmt.Sprintf("%d, %d", prop.SizeVal.Width, prop.SizeVal.Height) + ");\n")
			ret.WriteString(cMethodPrefix + "_set_icon_size(ui->" + targetName + ", " + targetName + "_size" + strconv.Itoa(SizeCounter) + ");\n")
			ret.WriteString("q_size_delete(" + targetName + "_size" + strconv.Itoa(SizeCounter) + ");\n")
			SizeCounter++

		} else if prop.DoubleVal != nil {
			// QDoubleSpinBox
			// "decimals", "minimum", "maximum", "value"
			ret.WriteString(cMethodPrefix + setterFunc + "(ui->" + targetName + ", " + *prop.DoubleVal + ");\n")

		} else if prop.SizeVal != nil {
			// "maximumSize", "minimumSize", "baseSize"
			ret.WriteString(cMethodPrefix + setterFunc + "2(ui->" + targetName + ", " + fmt.Sprintf("%d, %d", prop.SizeVal.Width, prop.SizeVal.Height) + ");\n")

		} else if prop.UrlVal != nil {
			// "url"
			if prop.StdSetVal != nil && *prop.StdSetVal != "" {
				ret.WriteString("QUrl* " + urlVariantName + strconv.Itoa(VariantCounter) + "_url = q_url_new3(" + strconv.Quote(prop.UrlVal.StringVal.Value) + ");\n")
				ret.WriteString("QVariant* " + urlVariantName + strconv.Itoa(VariantCounter) + " = q_variant_new26(" + urlVariantName + strconv.Itoa(VariantCounter) + "_url);\n")
				ret.WriteString(cMethodPrefix + "_set_property(ui->" + targetName + ", " + strconv.Quote(prop.Name) + ", " + urlVariantName + strconv.Itoa(VariantCounter) + ");\n")
				ret.WriteString("q_variant_delete(" + urlVariantName + strconv.Itoa(VariantCounter) + ");\n")
				ret.WriteString("q_url_delete(" + urlVariantName + strconv.Itoa(VariantCounter) + "_url);\n")
				VariantCounter++
			}

		} else if prop.Name == "palette" {
			ret.WriteString("QPalette* " + targetName + "_palette = q_palette_new();\n")

			processPaletteGroup(ret, targetName, "ACTIVE", prop.PaletteVal.Active.ColorRoles)
			processPaletteGroup(ret, targetName, "INACTIVE", prop.PaletteVal.Inactive.ColorRoles)
			processPaletteGroup(ret, targetName, "DISABLED", prop.PaletteVal.Disabled.ColorRoles)

			ret.WriteString(cMethodPrefix + "_set_palette(ui->" + targetName + ", " + targetName + "_palette);\n")
			ret.WriteString("q_palette_delete(" + targetName + "_palette);\n")

		} else if prop.Name == "backgroundBrush" {
			mapKey := prop.BackgroundBrushVal.Style + " (" + strconv.Itoa(prop.BackgroundBrushVal.Color.Red) + "," + strconv.Itoa(prop.BackgroundBrushVal.Color.Green) + "," + strconv.Itoa(prop.BackgroundBrushVal.Color.Blue) + "," + strconv.Itoa(*prop.BackgroundBrushVal.Color.Alpha) + ")"

			brushNum, ok := BrushColorMap[mapKey]
			if !ok {
				brushNum = strconv.Itoa(BrushCounter)
				BrushColorMap[mapKey] = brushNum
				ret.WriteString(getNewBrush(brushNum, prop.BackgroundBrushVal.Style, strconv.Itoa(prop.BackgroundBrushVal.Color.Red), strconv.Itoa(prop.BackgroundBrushVal.Color.Green), strconv.Itoa(prop.BackgroundBrushVal.Color.Blue), strconv.Itoa(*prop.BackgroundBrushVal.Color.Alpha)))
				BrushCounter++
			}
			ret.WriteString(cMethodPrefix + "_set_background_brush(ui->" + targetName + ", brush" + brushNum + ");\n")

		} else if prop.LocaleVal != nil {
			ret.WriteString("QLocale* locale_" + targetName + " = q_locale_new3(QLOCALE_LANGUAGE_" + strings.ToUpper(prop.LocaleVal.Language) + ", QLOCALE_COUNTRY_" + strings.ToUpper(prop.LocaleVal.Country) + ");\n")
			ret.WriteString(cMethodPrefix + "_set_locale(ui->" + targetName + ", locale_" + targetName + ");\n")
			ret.WriteString("q_locale_delete(locale_" + targetName + ");\n")

		} else if prop.UIntVal != nil {
			if !ExtendedFlag {
				writeFlagWarning(ret, prop.Name, targetClass)
			} else {
				ret.WriteString(cMethodPrefix + setterFunc + "(ui->" + targetName + ", " + *prop.UIntVal + ");\n")
			}

		} else if prop.CharVal != nil {
			if !ExtendedFlag {
				writeFlagWarning(ret, prop.Name, targetClass)
			} else {
				ret.WriteString("QChar* " + targetName + "_qchar = q_char_new4(" + prop.CharVal.Unicode + ");\n")
				ret.WriteString(cMethodPrefix + setterFunc + "(ui->" + targetName + ", " + targetName + "_qchar);\n")
				ret.WriteString("q_char_delete(" + targetName + "_qchar);\n")
			}

		} else if prop.DateVal != nil {
			if !ExtendedFlag && targetClass[0] == 'K' {
				writeFlagWarning(ret, prop.Name, targetClass)
			} else {
				dateName := targetName + "_date" + strconv.Itoa(DateCounter)
				ret.WriteString("QDate* " + dateName + " = q_date_new4(" + strconv.Itoa(prop.DateVal.Year) + ", " + strconv.Itoa(prop.DateVal.Month) + ", " + strconv.Itoa(prop.DateVal.Day) + ");\n")
				ret.WriteString(cMethodPrefix + setterFunc + "(ui->" + targetName + ", " + dateName + ");\n")
				ret.WriteString("q_date_delete(" + dateName + ");\n")
				DateCounter++
			}

		} else if prop.TimeVal != nil {
			if !ExtendedFlag && targetClass[0] == 'K' {
				writeFlagWarning(ret, prop.Name, targetClass)
			} else {
				timeName := targetName + "_time" + strconv.Itoa(TimeCounter)
				ret.WriteString("QTime* " + timeName + " = q_time_new6(" + strconv.Itoa(prop.TimeVal.Hour) + ", " + strconv.Itoa(prop.TimeVal.Minute) + ", " + strconv.Itoa(prop.TimeVal.Second) + ");\n")
				ret.WriteString(cMethodPrefix + setterFunc + "(ui->" + targetName + ", " + timeName + ");\n")
				ret.WriteString("q_time_delete(" + timeName + ");\n")
				TimeCounter++
			}

		} else if prop.ColorVal != nil {
			if !ExtendedFlag && targetClass[0] == 'K' {
				writeFlagWarning(ret, prop.Name, targetClass)
			} else {
				colorOverload := "5"
				var maybeAlpha string
				if prop.ColorVal.Alpha != nil {
					colorOverload = "13"
					maybeAlpha = ", " + strconv.Itoa(*prop.ColorVal.Alpha)
				}
				colorName := targetName + "_color" + strconv.Itoa(ColorCounter)
				ret.WriteString("QColor* " + colorName + " = q_color_new" + colorOverload + "(" + strconv.Itoa(prop.ColorVal.Red) + ", " + strconv.Itoa(prop.ColorVal.Green) + ", " + strconv.Itoa(prop.ColorVal.Blue) + maybeAlpha + ");\n")
				ret.WriteString(cMethodPrefix + setterFunc + "(ui->" + targetName + ", " + colorName + ");\n")
				ret.WriteString("q_color_delete(" + colorName + ");\n")
				ColorCounter++
			}

		} else if prop.StringListVal != nil {
			if !ExtendedFlag && targetClass[0] == 'K' {
				writeFlagWarning(ret, prop.Name, targetClass)
			} else {
				comment := " // auxiliary to q_coreapplication_translate\n"
				var items, strFrees []string
				for i, s := range prop.StringListVal.Strings {
					itemName := targetName + "_" + cMethodName(prop.Name) + strconv.Itoa(i)
					items = append(items, itemName)
					ret.WriteString("const char* " + itemName + " = " + generateString(&s) + ";\n")
					strFrees = append(strFrees, "libqt_free("+itemName+");"+comment)
				}

				ret.WriteString("const char* " + targetName + "_" + cMethodName(prop.Name) + "[] = {" + strings.Join(items, ",") + ", NULL};" + comment)
				ret.WriteString(cMethodPrefix + setterFunc + "(ui->" + targetName + ", " + targetName + "_" + cMethodName(prop.Name) + ");" + comment)

				for _, strFree := range strFrees {
					ret.WriteString(strFree + "\n")
				}
			}

		} else {
			ret.WriteString("/* UIC: no handler for " + targetName + " of type " + targetClass + " property '" + prop.Name + "' */\n")
		}
	}

	if customContentsMargins {
		ret.WriteString(cMethodPrefix + "_set_contents_margins(ui->" + targetName + ", " + fmt.Sprintf("%d, %d, %d, %d", contentsMargins[0], contentsMargins[1], contentsMargins[2], contentsMargins[3]) + ");\n")
	}

	return nil
}

func assignWidgetToLayout(ret *strings.Builder, l *UiLayout, child *UiLayoutItem, noun, widgetName string) {
	switch l.Class {
	case "QFormLayout":
		// Row and Column are always populated
		rowPos := strconv.Itoa(*child.Row)
		var colPos string
		switch {
		case child.ColSpan != nil && *child.ColSpan > 0:
			colPos = "QFORMLAYOUT_ITEMROLE_SPANNINGROLE"
		case *child.Column == 0:
			colPos = "QFORMLAYOUT_ITEMROLE_LABELROLE"
		case *child.Column == 1:
			colPos = "QFORMLAYOUT_ITEMROLE_FIELDROLE"
		default:
			ret.WriteString("/* UIC: QFormLayout does not understand this column index value */\n")
			return
		}

		// For QFormLayout, it's set_widget or set_layout
		ret.WriteString(cClassMethodPrefix(l.Class) + "_set_" + noun + "(ui->" + l.Name + ", " + rowPos + ", " + colPos + ", " + widgetName + ");\n")

	case "QGridLayout":
		if child.ColSpan != nil || child.RowSpan != nil {
			// If either are present, use full four-value add_widget3/add_layout2
			rowSpan := 1
			if child.RowSpan != nil {
				rowSpan = *child.RowSpan
			}
			colSpan := 1
			if child.ColSpan != nil {
				colSpan = *child.ColSpan
			}

			switch noun {
			case "widget":
				noun += "3"
			case "layout":
				noun += "2"
			}

			ret.WriteString(cClassMethodPrefix(l.Class) + "_add_" + noun + "(ui->" + l.Name + ", " + widgetName + ", " + fmt.Sprintf("%d, %d, %d, %d", *child.Row, *child.Column, rowSpan, colSpan) + ");\n")

		} else {
			// Row and Column are always present in the .ui file
			// For row/column it's add_widget2/add_layout

			if noun == "widget" {
				noun += "2"
			}

			ret.WriteString(cClassMethodPrefix(l.Class) + "_add_" + noun + "(ui->" + l.Name + ", " + widgetName + ", " + fmt.Sprintf("%d, %d", *child.Row, *child.Column) + ");\n")
		}

	case "QHBoxLayout", "QVBoxLayout":
		// For box layout it's add_widget/add_layout
		ret.WriteString("\n" + cClassMethodPrefix(l.Class) + "_add_" + noun + "(ui->" + l.Name + ", " + widgetName + ");\n")

	default:
		ret.WriteString("/* UIC: no handler for layout '" + l.Class + "' */\n")
	}
}

func writeLayoutAttributes(ret *strings.Builder, prop, method string) {
	if prop != "" {
		propVals := strings.Split(prop, ",")
		for i, propVal := range propVals {
			if propVal != "0" {
				ret.WriteString(method + ", " + strconv.Itoa(i) + ", " + propVal + ");\n")
			}
		}
	}
}

func generateLayout(l *UiLayout, parentName, parentClass string, isNestedLayout bool) (string, error) {
	var ret strings.Builder
	var ctor string

	wClassC := cClassMethodPrefix(l.Class)

	if isNestedLayout {
		ctor = wClassC + "_new2"

		ret.WriteString("\nui->" + l.Name + " = " + ctor + "();\n")
	} else {
		ctor = wClassC + "_new"

		ret.WriteString("\nui->" + l.Name + " = " + ctor + "(" + parentName + ");\n")
	}

	ret.WriteString(wClassC + "_set_object_name(ui->" + l.Name + ", " + strconv.Quote(l.Name) + ");\n")

	// Layout->Properties

	err := renderProperties(l.Properties, &ret, l.Name, l.Class, parentClass)
	if err != nil {
		return "", err
	}

	// Layout->Items

	for i, child := range l.Items {

		// A layout item is either a widget, or a spacer

		if child.Spacer != nil {

			var width, height int
			var method, orientation, extraParams string
			var spacerEnums [2]string

			spacerEnums[0] = "QSIZEPOLICY_POLICY_EXPANDING"
			spacerEnums[1] = "QSIZEPOLICY_POLICY_MINIMUM"

			for _, prop := range child.Spacer.Properties {
				if prop.Name == "orientation" {
					orientation = normalizeEnumName(prop.Name, *prop.EnumVal)
				}

				if prop.Name == "sizeHint" {
					width = prop.SizeVal.Width
					height = prop.SizeVal.Height
				}

				if prop.Name == "sizeType" {
					spacerEnums[0] = normalizeEnumName(prop.Name, *prop.EnumVal)
				}
			}

			if l.Class == "QGridLayout" {
				method = "2"

				if child.Row != nil && child.Column != nil {
					method = ""
					extraParams = fmt.Sprintf(", %d, %d", *child.Row, *child.Column)

					if child.RowSpan != nil {
						method = "4"
						extraParams += fmt.Sprintf(", %d", *child.RowSpan)

						if child.ColSpan != nil {
							method = "5"
							extraParams += fmt.Sprintf(", %d", *child.ColSpan)
						}
					} else if child.ColSpan != nil {
						method = "5"
						extraParams += fmt.Sprintf(", 1, %d", *child.ColSpan)
					}
				}
			}

			if strings.HasSuffix(orientation, "VERTICAL") {
				// swap enum values
				spacerEnums[0], spacerEnums[1] = spacerEnums[1], spacerEnums[0]
			}

			ret.WriteString("\nui->" + child.Spacer.Name + " = q_spaceritem_new4(" + fmt.Sprintf("%d, %d, %s, %s", width, height, spacerEnums[0], spacerEnums[1]) + ");\n")
			if l.Class == "QFormLayout" {
				role := "QFORMLAYOUT_ITEMROLE_LABELROLE"
				if *child.Column == 1 {
					role = "QFORMLAYOUT_ITEMROLE_FIELDROLE"
				}
				if (child.RowSpan != nil && *child.RowSpan > 0) || (child.ColSpan != nil && *child.ColSpan > 0) {
					role = "QFORMLAYOUT_ITEMROLE_SPANNINGROLE"
				}
				ret.WriteString(wClassC + "_set_item" + method + "(ui->" + l.Name + ", " + strconv.Itoa(*child.Row) + ", " + role + ", ui->" + child.Spacer.Name + ");\n\n")
			} else {
				ret.WriteString(wClassC + "_add_item" + method + "(ui->" + l.Name + ", ui->" + child.Spacer.Name + extraParams + ");\n\n")
			}
		}

		if child.Widget != nil {

			// Layout items have the parent as the real QWidget parent and are
			// separately assigned to the layout afterwards

			nest, err := generateWidget(*child.Widget, parentName, parentClass)
			if err != nil {
				return "", fmt.Errorf(l.Name+"/Layout/Item[%d]: %w", i, err)
			}

			ret.WriteString(nest)

			// Assign to layout
			assignWidgetToLayout(&ret, l, &child, "widget", "ui->"+child.Widget.Name)
		}

		if child.Layout != nil {

			nest, err := generateLayout(child.Layout, parentName, parentClass, true) // nested
			if err != nil {
				return "", fmt.Errorf(l.Name+"/Layout/Item[%d]: %w", i, err)
			}

			ret.WriteString(nest)

			// Assign to layout
			assignWidgetToLayout(&ret, l, &child, "layout", "ui->"+child.Layout.Name)
		}
	}

	// Layout attributes

	writeLayoutAttributes(&ret, l.Stretch, wClassC+"_set_stretch(ui->"+l.Name)
	writeLayoutAttributes(&ret, l.RowStretch, wClassC+"_set_row_stretch(ui->"+l.Name)
	writeLayoutAttributes(&ret, l.ColStretch, wClassC+"_set_column_stretch(ui->"+l.Name)
	writeLayoutAttributes(&ret, l.RowMinimumHeight, wClassC+"_set_row_minimum_height(ui->"+l.Name)
	writeLayoutAttributes(&ret, l.ColMinimumWidth, wClassC+"_set_column_minimum_width(ui->"+l.Name)

	return ret.String(), nil
}

func generateWidget(w UiWidget, parentName, parentClass string) (string, error) {
	ret := strings.Builder{}

	wClass := w.Class
	if cw, ok := CustomWidgets[w.Class]; ok && !(ExtendedFlag && isExtendedClass(w.Class)) {
		wClass = cw
	}
	wClassC := cClassMethodPrefix(strings.ReplaceAll(wClass, "::", "__"))
	ctor := wClassC + "_new"

	if parentName == "" || parentClass == "QDockWidget" || parentClass == "QScrollArea" ||
		parentClass == "QStackedWidget" || parentClass == "QTabWidget" ||
		parentClass == "QToolBox" || parentClass == "QWizard" {
		ret.WriteString("\nui->" + w.Name + " = " + ctor + "2();\n")
	} else {
		if ExtendedFlag && w.Class == "KMimeTypeChooser" {
			parentName = ""
		}
		ret.WriteString("\nui->" + w.Name + " = " + ctor + "(" + parentName + ");\n")
	}

	ret.WriteString(wClassC + "_set_object_name(ui->" + w.Name + ", " + strconv.Quote(w.Name) + ");\n")

	if wClass == "QMenu" {
		QMenus = append(QMenus, w.Name)
	}

	// Properties

	err := renderProperties(w.Properties, &ret, w.Name, wClass, parentClass)
	if err != nil {
		return "", err
	}
	// Attributes

	boolVariantName := w.Name + "_variant_bool"

	for _, attr := range w.Attributes {
		if parentClass == "QTabWidget" && attr.Name == "title" {
			ret.WriteString(writtenString("q_tabwidget_set_tab_text("+parentName+", q_tabwidget_index_of("+parentName+", ui->"+w.Name+"), ", generateString(attr.StringVal), ");\n", attr.StringVal.Notr, true))

		} else if wClass == "QDockWidget" && parentClass == "QMainWindow" && attr.Name == "dockWidgetArea" {
			ret.WriteString("q_mainwindow_add_dock_widget(" + parentName + ", /* enum Qt__DockWidgetArea */ " + *attr.NumberVal + ", ui->" + w.Name + ");\n")

		} else if wClass == "QToolBar" && parentClass == "QMainWindow" && attr.Name == "toolBarArea" {
			ret.WriteString("q_mainwindow_add_tool_bar(" + parentName + ", " + normalizeEnumName(attr.Name, *attr.EnumVal) + ", ui->" + w.Name + ");\n")

		} else if wClass == "QToolBar" && parentClass == "QMainWindow" && attr.Name == "toolBarBreak" {
			if attr.BoolVal != nil && *attr.BoolVal {
				ret.WriteString("q_mainwindow_add_tool_bar_break(" + parentName + ");\n")
			}

		} else if parentClass == "QTabWidget" && attr.Name == "icon" {
			// This will be handled when we call _add_tab() on the parent QTabWidget

		} else if parentClass == "QToolBox" && attr.Name == "label" {
			ret.WriteString("q_toolbox_add_item(" + parentName + ", ui->" + w.Name + ", " + strconv.Quote(attr.StringVal.Value) + ");\n")
			ret.WriteString(writtenString("q_toolbox_set_item_text("+parentName+", q_toolbox_index_of("+parentName+", ui->"+w.Name+"), ", generateString(attr.StringVal), ");\n", attr.StringVal.Notr, true))

		} else if attr.Name == "buttonGroup" {
			groupName := attr.StringVal.Value
			if group, exists := ButtonGroups[groupName]; exists {
				group.Buttons = append(group.Buttons, w.Name)
			} else {
				ButtonGroups[groupName] = &UiButtonGroup{
					Name:    groupName,
					Buttons: []string{w.Name},
				}
				ret.WriteString("QButtonGroup* " + groupName + " = q_buttongroup_new2(ui->" + GlobalContext + ");\n")
				ret.WriteString(("q_buttongroup_set_object_name(" + groupName + ", " + strconv.Quote(groupName) + ");\n"))
			}
			ret.WriteString("q_buttongroup_add_button(" + groupName + ", ui->" + w.Name + ");\n")

		} else if (wClass == "QTableView" || wClass == "QTableWidget") && strings.Contains(attr.Name, "Header") {
			headerType := "horizontal"
			if strings.HasPrefix(attr.Name, "vertical") {
				headerType = "vertical"
			}

			var viewParam, variantOverrideNum string
			var isTrString bool
			if attr.NumberVal != nil {
				viewParam = *attr.NumberVal
				variantOverrideNum = "6"
			} else if attr.BoolVal != nil {
				viewParam = strconv.FormatBool(*attr.BoolVal)
				variantOverrideNum = "8"
			} else if attr.StringVal != nil {
				viewParam = generateString(attr.StringVal)
				isTrString = strings.Contains(viewParam, "q_coreapplication_translate")
				variantOverrideNum = "24"
			} else if attr.EnumVal != nil {
				viewParam = normalizeEnumName(attr.Name, *attr.EnumVal)
			}

			headerName := w.Name + "_" + headerType + "_header"
			if _, ok := TableWidgetMap[headerName]; !ok {
				TableWidgetMap[headerName] = struct{}{}
				ret.WriteString("QHeaderView* " + headerName + " = " + wClassC + "_" + headerType + "_header(ui->" + w.Name + ");\n")
			}

			methodName := "set" + cMethodName(strings.TrimPrefix(attr.Name, headerType+"Header"))
			preStr := "q_headerview_" + methodName + "(" + headerName + ", "
			postStr := ");\n"
			if isTrString {
				ret.WriteString(writtenString(preStr, viewParam, postStr, true, true))
			} else if attr.StdSetVal != nil && *attr.StdSetVal != "" {
				attrName := strings.TrimPrefix(attr.Name, headerType+"Header")
				attrName = strings.ToLower(attrName[0:1]) + attrName[1:]
				ret.WriteString("QVariant* " + boolVariantName + strconv.Itoa(VariantCounter) + " = q_variant_new" + variantOverrideNum + "(" + viewParam + ");\n")
				ret.WriteString("q_headerview_set_property(" + wClassC + "_" + headerType + "_header(ui->" + w.Name + "), " + strconv.Quote(attrName) + ", " + boolVariantName + strconv.Itoa(VariantCounter) + ");\n")
				ret.WriteString("q_variant_delete(" + boolVariantName + strconv.Itoa(VariantCounter) + ");\n")
				VariantCounter++
			} else {
				ret.WriteString(preStr + viewParam + postStr)
			}

		} else if (wClass == "QTreeWidget" || wClass == "QTreeView") && attr.BoolVal != nil {
			attrName := strings.TrimPrefix(attr.Name, "header")
			if attr.StdSetVal != nil && *attr.StdSetVal != "" {
				attrName = strings.ToLower(attrName[0:1]) + attrName[1:]
				ret.WriteString("QVariant* " + boolVariantName + strconv.Itoa(VariantCounter) + " = q_variant_new8(" + strconv.FormatBool(*attr.BoolVal) + ");\n")
				ret.WriteString("q_headerview_set_property(" + wClassC + "_header(ui->" + w.Name + "), " + strconv.Quote(attrName) + ", " + boolVariantName + strconv.Itoa(VariantCounter) + ");\n")
				ret.WriteString("q_variant_delete(" + boolVariantName + strconv.Itoa(VariantCounter) + ");\n")
				VariantCounter++
			} else {
				ret.WriteString("q_headerview_set" + cMethodName(attrName) + "(" + wClassC + "_header(ui->" + w.Name + "), " + strconv.FormatBool(*attr.BoolVal) + ");\n")
			}

		} else if (wClass == "QTreeWidget" || wClass == "QTreeView") && attr.NumberVal != nil {
			attrName := strings.TrimPrefix(attr.Name, "header")
			ret.WriteString("q_headerview_set" + cMethodName(attrName) + "(" + wClassC + "_header(ui->" + w.Name + "), " + *attr.NumberVal + ");\n")

		} else if attr.Name == "toolTip" {
			ret.WriteString(writtenString(wClassC+"_set_tool_tip(ui->"+w.Name+", ", generateString(attr.StringVal), ");\n", attr.StringVal.Notr, true))

		} else {
			ret.WriteString("/* UIC: no handler for attribute '" + attr.Name + "' in class " + wClass + " */\n")
		}
	}

	// Layout

	if w.Layout != nil {
		nest, err := generateLayout(w.Layout, "ui->"+w.Name, wClass, false)
		if err != nil {
			return "", err
		}

		ret.WriteString(nest)
	}

	// Actions

	for _, a := range w.Actions {
		parent := w.Name
		if parentName != "" {
			parent = strings.TrimPrefix(parentName, "ui->")
		}

		ret.WriteString("\nui->" + a.Name + " = q_action_new4(ui->" + parent + ");")

		ret.WriteString("q_action_set_object_name(ui->" + a.Name + ", " + strconv.Quote(a.Name) + ");\n")

		// QActions are translated in the parent window's context
		if prop, ok := propertyByName(a.Properties, "text"); ok {
			ret.WriteString(writtenString("q_action_set_text(ui->"+a.Name+", ", generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
		}

		if prop, ok := propertyByName(a.Properties, "shortcut"); ok {
			maybeComment := " // auxiliary to q_coreapplication_translate"
			if prop.StringVal.Notr {
				maybeComment = ""
			}
			ret.WriteString(writtenString("\nQKeySequence* "+a.Name+"_shortcut = q_keysequence_new2(", generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
			ret.WriteString("q_action_set_shortcut(ui->" + a.Name + ", " + a.Name + "_shortcut);" + maybeComment + "\n")
			ret.WriteString("q_keysequence_delete(" + a.Name + "_shortcut);" + maybeComment + "\n")
		}

		if prop, ok := propertyByName(a.Properties, "icon"); ok {
			iconName := renderIcon(prop.IconVal, &ret)
			ret.WriteString("q_action_set_icon(ui->" + a.Name + ", " + iconName + ");\n")
			ret.WriteString("q_icon_delete(" + iconName + ");\n")
		}

		if prop, ok := propertyByName(a.Properties, "toolTip"); ok {
			ret.WriteString(writtenString("q_action_set_tool_tip(ui->"+a.Name+", ", generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
		}

		if prop, ok := propertyByName(a.Properties, "visible"); ok {
			ret.WriteString("q_action_set_visible(ui->" + a.Name + ", " + strconv.FormatBool(*prop.BoolVal) + ");\n")
		}

		if prop, ok := propertyByName(a.Properties, "menuRole"); ok {
			ret.WriteString("q_action_set_menu_role(ui->" + a.Name + ", " + normalizeEnumName(prop.Name, *prop.EnumVal) + ");\n")
		}
	}

	// Items

	for itemNo, itm := range w.Items {
		cClass := cClassMethodPrefix(wClass)
		targetSelf := "ui->" + w.Name
		var itemClass string
		var isItemClass bool

		switch wClass {
		case "QListWidget":
			targetSelf = "item" + strconv.Itoa(ItemWidgetCounter)
			isItemClass = true
			itemClass = "QListWidgetItem"
			cClass = cClassMethodPrefix(itemClass)
			ret.WriteString(itemClass + "* " + targetSelf + " = " + cClass + "_new();\n")
			ret.WriteString("q_listwidget_insert_item(ui->" + w.Name + ", " + strconv.Itoa(itemNo) + ", " + targetSelf + ");\n")
		case "QTreeWidget":
			targetSelf = "item" + strconv.Itoa(ItemWidgetCounter)
			isItemClass = true
			itemClass = "QTreeWidgetItem"
			cClass = cClassMethodPrefix(itemClass)
			ret.WriteString(itemClass + "* " + targetSelf + " = " + cClass + "_new3(ui->" + w.Name + ");\n")
		case "QTableWidget":
			isItemClass = true
			cClass = cClassMethodPrefix("QTableWidgetItem")
		}

		if !isItemClass {
			ret.WriteString(wClassC + "_add_item(ui->" + w.Name + `, "");` + "\n")
		}

		// Check for a "text" property and update the item's text
		// Do this as a 2nd step so that the SetItemText can be trapped for retranslate()
		for _, prop := range itm.Properties {
			switch prop.Name {
			case "text":
				if isItemClass {
					var maybeItemNo string
					if itemClass == "QTreeWidgetItem" {
						maybeItemNo = ", " + strconv.Itoa(itemNo)
					}
					if !prop.StringVal.Notr {
						ret.WriteString(itemClass + "* " + targetSelf + " = " + wClassC + "_item(ui->" + w.Name + ", " + strconv.Itoa(ItemWidgetCounter) + "); // auxiliary to q_coreapplication_translate " + w.Name + " " + cClassMethodPrefix(wClass) + "\n")
					}
					ret.WriteString(writtenString(cClass+"_set_text("+targetSelf+maybeItemNo+", ", generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
				} else {
					ret.WriteString(writtenString(cClass+"_set_item_text("+targetSelf+", "+strconv.Itoa(itemNo)+", ", generateString(prop.StringVal), ");\n", prop.StringVal.Notr, true))
				}
			case "icon":
				iconName := renderIcon(prop.IconVal, &ret)
				ret.WriteString(cClass + "_set_icon(" + targetSelf + ", " + iconName + ");\n")
				ret.WriteString("q_icon_delete(icon" + strconv.Itoa(IconCounter-1) + ");\n")
			case "checkState":
				ret.WriteString(cClass + "_set_check_state(" + targetSelf + ", QT_CHECKSTATE_" + strings.ToUpper(*prop.EnumVal) + ");\n")
			case "flags":
				parts := strings.Split(*prop.SetVal, "|")
				for i, p := range parts {
					parts[i] = "QT_ITEMFLAG_" + strings.ToUpper(p)
				}

				var emit string
				if len(parts) > 0 {
					emit = strings.Join(parts, "|")
				}
				ret.WriteString(cClass + "_set_flags(" + targetSelf + ", " + emit + ");\n")
			default:
				ret.WriteString("/* UIC: no handler for item property '" + prop.Name + "' */\n")
			}
		}

		if isItemClass {
			ItemWidgetCounter++
		}
	}

	// Columns

	isColumnSet := false
	for colNo, col := range w.Columns {
		isHeaderSet := false
		for _, prop := range col.Properties {
			methodName := cMethodName(prop.Name)

			switch prop.Name {
			case "text", "toolTip":
				maybeComment := " // auxiliary to q_coreapplication_translate"
				textVal := generateString(prop.StringVal)
				if !strings.Contains(textVal, "q_coreapplication_translate") || prop.StringVal.Notr {
					maybeComment = ""
				}

				colToStr := strconv.Itoa(colNo)

				var lookupKey, itemName, setColumnMethod, setHeaderMethod, setItemMethod, translateItemMethod string

				switch wClass {
				case "QTreeWidget":
					lookupKey = w.Name
					itemName = "ui_" + w.Name + "_item"
					setHeaderMethod = wClassC + "_set_header_item(ui->" + w.Name + ", " + itemName + ");\n"
					setItemMethod = writtenString(wClassC+"item_set_"+methodName+"("+itemName+", "+colToStr+", ", textVal, ");", prop.StringVal.Notr, maybeComment == "")
					translateItemMethod = wClass + "Item* " + itemName + " = " + wClassC + "_header_item(ui->" + w.Name + ");"
				default:
					lookupKey = w.Name + "_" + colToStr
					itemName = "ui_" + w.Name + "_item" + colToStr
					setColumnMethod = wClassC + "_set_column_count(ui->" + w.Name + ", " + strconv.Itoa(len(w.Columns)) + ");\n"
					setHeaderMethod = wClassC + "_set_horizontal_header_item(ui->" + w.Name + ", " + colToStr + ", " + itemName + ");\n"
					setItemMethod = writtenString(wClassC+"item_set_"+methodName+"("+itemName+", ", textVal, ");", prop.StringVal.Notr, maybeComment == "")
					translateItemMethod = wClass + "Item* " + itemName + " = " + wClassC + "_horizontal_header_item(ui->" + w.Name + ", " + colToStr + ");"
				}

				newItem := wClass + "Item* " + itemName + " = " + wClassC + "item_new();\n"

				if !isColumnSet && setColumnMethod != "" {
					ret.WriteString(setColumnMethod)
					isColumnSet = true
				}

				if _, ok := WidgetItemsMap[lookupKey]; !ok {
					if maybeComment == "" {
						ret.WriteString(newItem)
						ret.WriteString(setHeaderMethod)
						isHeaderSet = true
					} else {
						if wClass != "QTreeWidget" {
							ret.WriteString(newItem)
							ret.WriteString(setHeaderMethod)
							isHeaderSet = true
						}
						WidgetItems = append(WidgetItems, lookupKey)
						WidgetItemsMap[lookupKey] = append(WidgetItemsMap[lookupKey], translateItemMethod)
					}
				}

				switch maybeComment {
				case "":
					if !isHeaderSet {
						ret.WriteString(newItem)
						ret.WriteString(setHeaderMethod)
						isHeaderSet = true
					}
					ret.WriteString(setItemMethod)
				default:
					WidgetItemsMap[lookupKey] = append(WidgetItemsMap[lookupKey], setItemMethod)
				}

			default:
				ret.WriteString("/* UIC: no handler for column property '" + prop.Name + "' */\n")
			}
		}
	}

	// Recurse children

	var (
		setCentralWidget = false
		setMenuBar       = false
		setStatusBar     = false
	)

	for i, child := range w.Widgets {
		nest, err := generateWidget(child, "ui->"+w.Name, wClass)
		if err != nil {
			return "", fmt.Errorf(w.Name+"/Widgets[%d]: %w", i, err)
		}

		ret.WriteString(nest)

		// QMainWindow CentralWidget handling
		// The first listed class can be the central widget.
		// TODO should it be the first child with a layout? But need to handle windows with no layout
		if wClass == "QMainWindow" && !setCentralWidget {
			ret.WriteString("\n" + wClassC + "_set_central_widget(ui->" + w.Name + ", ui->" + child.Name + ");\n") // Set central widget
			setCentralWidget = true
		}

		// QDockWidget and QScrollArea also have something like a central widget
		if (wClass == "QDockWidget" || wClass == "QScrollArea") && !setCentralWidget {
			ret.WriteString(wClassC + "_set_widget(ui->" + w.Name + ", ui->" + child.Name + ");\n") // Set central widget
			setCentralWidget = true
		}

		if wClass == "QSplitter" || wClass == "QStackedWidget" {
			// We need to manually AddWidget on every child of QSplitter or QStackedWidget
			ret.WriteString(wClassC + "_add_widget(ui->" + w.Name + ", ui->" + child.Name + ");\n")
		}

		if wClass == "QMainWindow" && child.Class == "QMenuBar" && !setMenuBar {
			ret.WriteString(wClassC + "_set_menu_bar(ui->" + w.Name + ", ui->" + child.Name + ");\n")
			setMenuBar = true
		}

		if wClass == "QMainWindow" && child.Class == "QStatusBar" && !setStatusBar {
			ret.WriteString(wClassC + "_set_status_bar(ui->" + w.Name + ", ui->" + child.Name + ");\n")
			setStatusBar = true
		}

		// QTabWidget->QTab handling
		if wClass == "QTabWidget" {
			if icon, ok := propertyByName(child.Attributes, "icon"); ok {
				// addTab() overload with icon
				iconName := renderIcon(icon.IconVal, &ret)
				ret.WriteString("\n" + wClassC + "_add_tab2(ui->" + w.Name + ", ui->" + child.Name + ", " + iconName + `, "");` + "\n")

			} else {
				// addTab() overload without icon
				ret.WriteString("\n" + wClassC + "_add_tab(ui->" + w.Name + ", ui->" + child.Name + `, "");` + "\n")
			}
		}

		// child attributes
		if prop, ok := propertyByName(child.Attributes, "tabsClosable"); ok {
			ret.WriteString(cClassMethodPrefix(child.Class) + "_set_tabs_closable(ui->" + child.Name + ", " + strconv.FormatBool(*prop.BoolVal) + ");\n")
		}

		if prop, ok := propertyByName(child.Attributes, "tabBarAutoHide"); ok {
			ret.WriteString(cClassMethodPrefix(child.Class) + "_tab_bar_auto_hide(ui->" + child.Name + ", " + strconv.FormatBool(*prop.BoolVal) + ");\n")
		}

		if prop, ok := propertyByName(child.Attributes, "orientation"); ok {
			ret.WriteString(cClassMethodPrefix(child.Class) + "_set_orientation(ui->" + child.Name + ", " + normalizeEnumName(prop.Name, *prop.EnumVal) + ");\n")
		}
	}

	// AddActions
	// n.b. This must be *after* all children have been constructed, in case we
	// are adding a direct child

	for _, a := range w.AddActions {
		action := wClassC + "_add_action(ui->" + w.Name + ", q_menu_menu_action(ui->" + a.Name + "));\n"

		isQMenu := false
		if slices.Contains(QMenus, a.Name) {
			isQMenu = true
		}

		switch {
		case wClass == "QMenuBar" && a.Name != "separator":
			// If we are a menubar, then <addaction> refers to top-level QMenu instead of QAction
			ret.WriteString(action)
		case isQMenu:
			storeAction(action, wClass, w.Name)
		case a.Name == "separator":
			// TODO how does Qt Designer disambiguate a real QAction with name="separator" ?
			action = wClassC + "_add_separator(ui->" + w.Name + ");\n"
			storeAction(action, wClass, w.Name)
		default:
			action = wClassC + "_add_action(ui->" + w.Name + ", ui->" + a.Name + ");\n"
			storeAction(action, wClass, w.Name)
		}
	}

	// ZOrder
	if len(w.ZOrder) > 0 {
		ret.WriteString("\n")
		collectClassNames_Widget(&w)
		for _, zorder := range w.ZOrder {
			classPrefix, ok := WidgetMap[zorder]
			if !ok {
				fmt.Println("Warning: Z-order assignment '" + zorder + "' is not a valid widget")
				continue
			}
			ret.WriteString(classPrefix + "_raise(ui->" + zorder + ");\n")
		}
	}

	return ret.String(), nil
}

func generate(goGenerateArgs string, flagExtraOps UiFlagOptions, u UiFile) ([]byte, error) {
	ret := strings.Builder{}

	// Update globals for layoutdefault, if present

	if u.LayoutDefault != nil && u.LayoutDefault.Margin != nil {
		DefaultGridMargin = *u.LayoutDefault.Margin
		DefaultChildrenMargin = *u.LayoutDefault.Margin
	}

	uClass := strings.ReplaceAll(u.Class, "::", "__")

	// Headers

	cMethod := cMethodName(uClass)
	var maybeInclude string
	seenIncludes := map[string]struct{}{}
	if flagExtraOps.HeaderName != "" && len(u.Connections.Connections) != 0 {
		maybeInclude = "\n" + `#include "` + flagExtraOps.HeaderName + `"` + "\n"
		seenIncludes[flagExtraOps.HeaderName] = struct{}{}
	}
	if flagExtraOps.WidgetsHeader && len(u.CustomWidgets.CustomWidgets) != 0 {
		for _, cw := range u.CustomWidgets.CustomWidgets {
			if _, ok := seenIncludes[cw.Header]; !ok {
				if !(flagExtraOps.Extended && isExtendedClass(cw.Name)) {
					fileExt := filepath.Ext(cw.Header)
					headerName := strings.TrimSuffix(cw.Header, fileExt) + ".h"
					maybeInclude += "\n" + `#include "` + headerName + `"`
				}
				seenIncludes[cw.Header] = struct{}{}
			}
		}
	}

	ExtendedFlag = flagExtraOps.Extended
	GlobalContext = uClass

	// Custom widgets

	CustomWidgets["Line"] = "QFrame"
	for _, cw := range u.CustomWidgets.CustomWidgets {
		if className, ok := CustomWidgets[cw.Extends]; ok && !(flagExtraOps.Extended && isExtendedClass(cw.Name)) {
			CustomWidgets[cw.Name] = className
		} else {
			if cw.Extends != "" {
				CustomWidgets[cw.Name] = cw.Extends
			} else {
				fmt.Println("\nWARNING: Custom widget '" + cw.Name + "' has no base class. Defaulting to 'QWidget'")
				CustomWidgets[cw.Name] = "QWidget"
			}
		}
	}

	nest, err := generateWidget(u.Widget, "", "")
	if err != nil {
		return nil, err
	}

	// Core

	var translateFunc, setBuddy, setCurrentRow, setCurrentIndex, setDefault, menuActions, newFuncBody, sortingBlockEnds []string
	var foundWidgetItem bool
	var lastParentItem string
	for _, line := range strings.Split(nest, "\n") {
		if strings.Contains(line, "q_coreapplication_translate") {
			if strings.Contains(line, "WidgetItem* item") {
				retLine, parentItem, parentClass := splitLastWords(line)
				line = retLine
				if lastParentItem != parentItem && !foundWidgetItem {
					sortingBlockBegin := "bool " + parentItem + "_sortingEnabled = " + parentClass + "_is_sorting_enabled(ui->" + parentItem + ");\n"
					sortingBlockBegin += parentClass + "_set_sorting_enabled(ui->" + parentItem + ", false);"
					translateFunc = append(translateFunc, sortingBlockBegin)
					sortingBlockEnds = append(sortingBlockEnds, parentClass+"_set_sorting_enabled(ui->"+parentItem+", "+parentItem+"_sortingEnabled);\n")
				}
				foundWidgetItem = true
				lastParentItem = parentItem
			}
			translateFunc = append(translateFunc, splitTranslationComment(line))
		} else if strings.Contains(line, "_set_buddy(") {
			setBuddy = append(setBuddy, line)
		} else if strings.Contains(line, "_set_current_row(") {
			setCurrentRow = append(setCurrentRow, line)
		} else if strings.Contains(line, "_set_current_index(") {
			setCurrentIndex = append(setCurrentIndex, line)
		} else if strings.Contains(line, "_set_default(") {
			setDefault = append(setDefault, line)
		} else if strings.Contains(line, "_menu_action(") {
			menuActions = append(menuActions, line)
		} else {
			newFuncBody = append(newFuncBody, line+"\n")
		}
	}

	if foundWidgetItem {
		translateFunc = append(translateFunc, sortingBlockEnds...)
	}

	for _, tw := range WidgetItems {
		translateFunc = append(translateFunc, WidgetItemsMap[tw]...)
	}

	if len(u.Comment) > 0 {
		ret.WriteString("//! " + strings.Join(strings.Split(u.Comment, "\n"), "\n//! ") + "\n\n")
	}

	ret.WriteString(`// Generated by libqt6c uic. To update this file, edit the .ui file in
// Qt Creator/Designer, and then run the 'uic-c' command below.
//
// uic-c ` + goGenerateArgs + `

#include <libqt6c.h>` + maybeInclude + `

struct ` + uClass + `Ui;
typedef struct ` + uClass + "Ui " + uClass + `Ui;

struct ` + uClass + `Ui {
` + strings.Join(collectClassNames_Widget(&u.Widget), "\n") + `
};
`)

	if len(translateFunc) > 0 {
		ret.WriteString(`
// Retranslate reapplies all text translations
static void retranslate_` + strings.TrimPrefix(cMethod, "_") + "(" + uClass + `Ui* ui) {
    ` + strings.Join(translateFunc, "\n") + `
}
`)
	}

	ret.WriteString(`
// new` + cMethod + "_ui creates all the Qt objects for " + uClass + `Ui
static ` + uClass + "Ui* new" + cMethod + `_ui() {
    ` + uClass + "Ui* ui = (" + uClass + "Ui*)malloc(sizeof(" + uClass + `Ui));
if (ui == NULL) return NULL;
`)

	ret.WriteString(strings.Join(newFuncBody, ""))

	// QSizePolicy deallocation(s)
	for num := range SizePolicyCounter {
		ret.WriteString("q_sizepolicy_delete(sizePolicy" + strconv.Itoa(num) + ");\n")
	}

	// QColor and QBrush deallocation(s)
	for num := range BrushCounter {
		numStr := strconv.Itoa(num)
		ret.WriteString("q_color_delete(color" + numStr + ");\n")
		ret.WriteString("q_brush_delete(brush" + numStr + ");\n")
	}

	// QButtonGroup deallocation(s)
	for groupName := range ButtonGroups {
		ret.WriteString("q_buttongroup_delete(" + groupName + ");\n\n")
	}

	for _, sb := range setBuddy {
		ret.WriteString(sb + "\n")
	}

	tabStops := u.TabStops
	if len(tabStops.TabStops) > 0 {
		for i := 0; i < len(tabStops.TabStops)-1; i++ {
			current := tabStops.TabStops[i].Name
			next := tabStops.TabStops[i+1].Name
			ret.WriteString("q_widget_set_tab_order(ui->" + current + ", ui->" + next + ");\n")
		}
	}

	for _, ma := range menuActions {
		ret.WriteString(ma)
	}

	for _, qm := range QMenus {
		for _, ma := range QMenuActionsMap[qm] {
			ret.WriteString(ma)
		}
	}

	for _, oa := range OtherActions {
		ret.WriteString(oa)
	}

	if len(translateFunc) > 0 {
		ret.WriteString("\nretranslate_" + strings.TrimPrefix(cMethod, "_") + "(ui);\n\n")
	}

	for _, scr := range setCurrentRow {
		ret.WriteString(scr + "\n")
	}

	for _, sci := range setCurrentIndex {
		ret.WriteString(sci + "\n")
	}

	for _, sd := range setDefault {
		ret.WriteString(sd + "\n")
	}

	connections := u.Connections

	maybeComment := "// "
	if flagExtraOps.HeaderName != "" {
		maybeComment = ""
	}

	if len(connections.Connections) != 0 {
		if flagExtraOps.HeaderName == "" {
			ret.WriteString("\n// Uncomment the connections below when ready or regnerate with -c\n")
		}
		ret.WriteString("// Double-check that the connection override variants are correct!\n")
	}

	for _, c := range connections.Connections {
		cClass := WidgetMap[c.Sender]
		signal := splitToParens(c.Signal)
		slot := splitToParens(c.Slot)

		qtCMethod := "_on_" + cMethodName(signal)

		ret.WriteString(maybeComment + cClass + qtCMethod + "(ui->" + c.Sender + ", " + c.Sender + "_" + slot + ");\n")
	}

	ret.WriteString(`
    return ui;
}`)

	output := ret.String()

	if len(u.CustomWidgets.CustomWidgets) > 0 {
		fmt.Println("\nThis form contains some custom widget(s). It may require manual patching for proper implementation.")
		fmt.Println("\nCustom widget(s):")
		for _, cw := range u.CustomWidgets.CustomWidgets {
			fmt.Println("  * " + cw.Name + " (" + cw.Extends + ")")
		}
	}

	if len(u.Resources.Includes) > 0 {
		fmt.Println("\nTo include the resource(s), run the `qrc-c` program with the file(s) below:")
		for _, include := range u.Resources.Includes {
			fmt.Println("  * " + include.Location)
		}
	}

	if len(FlagWarnings) > 0 {
		fmt.Println()
		for _, warning := range FlagWarnings {
			fmt.Println(warning)
		}
	}

	if SanitizeObjectCounter > 0 || SanitizationFlag || len(u.CustomWidgets.CustomWidgets) > 0 || len(u.Resources.Includes) > 0 || len(FlagWarnings) > 0 {
		fmt.Println()
	}

	return []byte(output), nil
}
