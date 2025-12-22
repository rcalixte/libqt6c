#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBATTRIBUTE_H
#define SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBATTRIBUTE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktexteditor-attribute.html)

/// k_texteditor__attribute_new constructs a new KTextEditor::Attribute object.
///
KTextEditor__Attribute* k_texteditor__attribute_new();

/// [Upstream resources](https://api.kde.org/ktexteditor-attribute.html)

/// k_texteditor__attribute_new2 constructs a new KTextEditor::Attribute object.
///
/// @param name const char*
/// @param style enum KSyntaxHighlighting__Theme__TextStyle
///
KTextEditor__Attribute* k_texteditor__attribute_new2(const char* name, int32_t style);

/// [Upstream resources](https://api.kde.org/ktexteditor-attribute.html)

/// k_texteditor__attribute_new3 constructs a new KTextEditor::Attribute object.
///
/// @param a KTextEditor__Attribute*
///
KTextEditor__Attribute* k_texteditor__attribute_new3(void* a);

/// [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Attribute*
///
const char* k_texteditor__attribute_name(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setName)
///
/// @param self KTextEditor__Attribute*
/// @param name const char*
///
void k_texteditor__attribute_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#defaultStyle)
///
/// @param self KTextEditor__Attribute*
///
/// @return enum KSyntaxHighlighting__Theme__TextStyle
///
int32_t k_texteditor__attribute_default_style(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setDefaultStyle)
///
/// @param self KTextEditor__Attribute*
/// @param style enum KSyntaxHighlighting__Theme__TextStyle
///
void k_texteditor__attribute_set_default_style(void* self, int32_t style);

/// [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#skipSpellChecking)
///
/// @param self KTextEditor__Attribute*
///
bool k_texteditor__attribute_skip_spell_checking(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setSkipSpellChecking)
///
/// @param self KTextEditor__Attribute*
/// @param skipspellchecking bool
///
void k_texteditor__attribute_set_skip_spell_checking(void* self, bool skipspellchecking);

/// [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#fontBold)
///
/// @param self KTextEditor__Attribute*
///
bool k_texteditor__attribute_font_bold(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setFontBold)
///
/// @param self KTextEditor__Attribute*
///
void k_texteditor__attribute_set_font_bold(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#outline)
///
/// @param self KTextEditor__Attribute*
///
QBrush* k_texteditor__attribute_outline(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setOutline)
///
/// @param self KTextEditor__Attribute*
/// @param brush QBrush*
///
void k_texteditor__attribute_set_outline(void* self, void* brush);

/// [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#selectedForeground)
///
/// @param self KTextEditor__Attribute*
///
QBrush* k_texteditor__attribute_selected_foreground(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setSelectedForeground)
///
/// @param self KTextEditor__Attribute*
/// @param foreground QBrush*
///
void k_texteditor__attribute_set_selected_foreground(void* self, void* foreground);

/// [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#selectedBackground)
///
/// @param self KTextEditor__Attribute*
///
QBrush* k_texteditor__attribute_selected_background(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setSelectedBackground)
///
/// @param self KTextEditor__Attribute*
/// @param brush QBrush*
///
void k_texteditor__attribute_set_selected_background(void* self, void* brush);

/// [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#backgroundFillWhitespace)
///
/// @param self KTextEditor__Attribute*
///
bool k_texteditor__attribute_background_fill_whitespace(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setBackgroundFillWhitespace)
///
/// @param self KTextEditor__Attribute*
/// @param fillWhitespace bool
///
void k_texteditor__attribute_set_background_fill_whitespace(void* self, bool fillWhitespace);

/// [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#clear)
///
/// @param self KTextEditor__Attribute*
///
void k_texteditor__attribute_clear(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#hasAnyProperty)
///
/// @param self KTextEditor__Attribute*
///
bool k_texteditor__attribute_has_any_property(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#operator-2b-eq)
///
/// @param self KTextEditor__Attribute*
/// @param a KTextEditor__Attribute*
///
KTextEditor__Attribute* k_texteditor__attribute_operator_plus_assign(void* self, void* a);

/// [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#operator-eq)
///
/// @param self KTextEditor__Attribute*
/// @param a KTextEditor__Attribute*
///
void k_texteditor__attribute_operator_assign(void* self, void* a);

/// [Upstream resources](https://api.kde.org/ktexteditor-attribute.html#setFontBold)
///
/// @param self KTextEditor__Attribute*
/// @param bold bool
///
void k_texteditor__attribute_set_font_bold1(void* self, bool bold);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#isValid)
///
/// @param self KTextEditor__Attribute*
///
bool k_texteditor__attribute_is_valid(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
///
/// @param self KTextEditor__Attribute*
/// @param font QFont*
///
void k_texteditor__attribute_set_font(void* self, void* font);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#font)
///
/// @param self KTextEditor__Attribute*
///
QFont* k_texteditor__attribute_font(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamily)
///
/// @param self KTextEditor__Attribute*
/// @param family const char*
///
void k_texteditor__attribute_set_font_family(void* self, const char* family);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamily)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Attribute*
///
const char* k_texteditor__attribute_font_family(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamilies)
///
/// @param self KTextEditor__Attribute*
/// @param families const char**
///
void k_texteditor__attribute_set_font_families(void* self, const char* families[static 1]);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamilies)
///
/// @param self KTextEditor__Attribute*
///
QVariant* k_texteditor__attribute_font_families(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleName)
///
/// @param self KTextEditor__Attribute*
/// @param styleName const char*
///
void k_texteditor__attribute_set_font_style_name(void* self, const char* styleName);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleName)
///
/// @param self KTextEditor__Attribute*
///
QVariant* k_texteditor__attribute_font_style_name(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontPointSize)
///
/// @param self KTextEditor__Attribute*
/// @param size double
///
void k_texteditor__attribute_set_font_point_size(void* self, double size);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontPointSize)
///
/// @param self KTextEditor__Attribute*
///
double k_texteditor__attribute_font_point_size(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWeight)
///
/// @param self KTextEditor__Attribute*
/// @param weight int
///
void k_texteditor__attribute_set_font_weight(void* self, int weight);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontWeight)
///
/// @param self KTextEditor__Attribute*
///
int32_t k_texteditor__attribute_font_weight(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontItalic)
///
/// @param self KTextEditor__Attribute*
/// @param italic bool
///
void k_texteditor__attribute_set_font_italic(void* self, bool italic);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontItalic)
///
/// @param self KTextEditor__Attribute*
///
bool k_texteditor__attribute_font_italic(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontCapitalization)
///
/// @param self KTextEditor__Attribute*
/// @param capitalization enum QFont__Capitalization
///
void k_texteditor__attribute_set_font_capitalization(void* self, int32_t capitalization);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontCapitalization)
///
/// @param self KTextEditor__Attribute*
///
/// @return enum QFont__Capitalization
///
int32_t k_texteditor__attribute_font_capitalization(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacingType)
///
/// @param self KTextEditor__Attribute*
/// @param letterSpacingType enum QFont__SpacingType
///
void k_texteditor__attribute_set_font_letter_spacing_type(void* self, int32_t letterSpacingType);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacingType)
///
/// @param self KTextEditor__Attribute*
///
/// @return enum QFont__SpacingType
///
int32_t k_texteditor__attribute_font_letter_spacing_type(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacing)
///
/// @param self KTextEditor__Attribute*
/// @param spacing double
///
void k_texteditor__attribute_set_font_letter_spacing(void* self, double spacing);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacing)
///
/// @param self KTextEditor__Attribute*
///
double k_texteditor__attribute_font_letter_spacing(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWordSpacing)
///
/// @param self KTextEditor__Attribute*
/// @param spacing double
///
void k_texteditor__attribute_set_font_word_spacing(void* self, double spacing);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontWordSpacing)
///
/// @param self KTextEditor__Attribute*
///
double k_texteditor__attribute_font_word_spacing(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontUnderline)
///
/// @param self KTextEditor__Attribute*
/// @param underline bool
///
void k_texteditor__attribute_set_font_underline(void* self, bool underline);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontUnderline)
///
/// @param self KTextEditor__Attribute*
///
bool k_texteditor__attribute_font_underline(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontOverline)
///
/// @param self KTextEditor__Attribute*
/// @param overline bool
///
void k_texteditor__attribute_set_font_overline(void* self, bool overline);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontOverline)
///
/// @param self KTextEditor__Attribute*
///
bool k_texteditor__attribute_font_overline(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStrikeOut)
///
/// @param self KTextEditor__Attribute*
/// @param strikeOut bool
///
void k_texteditor__attribute_set_font_strike_out(void* self, bool strikeOut);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStrikeOut)
///
/// @param self KTextEditor__Attribute*
///
bool k_texteditor__attribute_font_strike_out(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineColor)
///
/// @param self KTextEditor__Attribute*
/// @param color QColor*
///
void k_texteditor__attribute_set_underline_color(void* self, void* color);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#underlineColor)
///
/// @param self KTextEditor__Attribute*
///
QColor* k_texteditor__attribute_underline_color(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFixedPitch)
///
/// @param self KTextEditor__Attribute*
/// @param fixedPitch bool
///
void k_texteditor__attribute_set_font_fixed_pitch(void* self, bool fixedPitch);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFixedPitch)
///
/// @param self KTextEditor__Attribute*
///
bool k_texteditor__attribute_font_fixed_pitch(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStretch)
///
/// @param self KTextEditor__Attribute*
/// @param factor int
///
void k_texteditor__attribute_set_font_stretch(void* self, int factor);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStretch)
///
/// @param self KTextEditor__Attribute*
///
int32_t k_texteditor__attribute_font_stretch(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
///
/// @param self KTextEditor__Attribute*
/// @param hint enum QFont__StyleHint
///
void k_texteditor__attribute_set_font_style_hint(void* self, int32_t hint);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleStrategy)
///
/// @param self KTextEditor__Attribute*
/// @param strategy enum QFont__StyleStrategy
///
void k_texteditor__attribute_set_font_style_strategy(void* self, int32_t strategy);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleHint)
///
/// @param self KTextEditor__Attribute*
///
/// @return enum QFont__StyleHint
///
int32_t k_texteditor__attribute_font_style_hint(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleStrategy)
///
/// @param self KTextEditor__Attribute*
///
/// @return enum QFont__StyleStrategy
///
int32_t k_texteditor__attribute_font_style_strategy(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontHintingPreference)
///
/// @param self KTextEditor__Attribute*
/// @param hintingPreference enum QFont__HintingPreference
///
void k_texteditor__attribute_set_font_hinting_preference(void* self, int32_t hintingPreference);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontHintingPreference)
///
/// @param self KTextEditor__Attribute*
///
/// @return enum QFont__HintingPreference
///
int32_t k_texteditor__attribute_font_hinting_preference(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontKerning)
///
/// @param self KTextEditor__Attribute*
/// @param enable bool
///
void k_texteditor__attribute_set_font_kerning(void* self, bool enable);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontKerning)
///
/// @param self KTextEditor__Attribute*
///
bool k_texteditor__attribute_font_kerning(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineStyle)
///
/// @param self KTextEditor__Attribute*
/// @param style enum QTextCharFormat__UnderlineStyle
///
void k_texteditor__attribute_set_underline_style(void* self, int32_t style);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#underlineStyle)
///
/// @param self KTextEditor__Attribute*
///
/// @return enum QTextCharFormat__UnderlineStyle
///
int32_t k_texteditor__attribute_underline_style(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setVerticalAlignment)
///
/// @param self KTextEditor__Attribute*
/// @param alignment enum QTextCharFormat__VerticalAlignment
///
void k_texteditor__attribute_set_vertical_alignment(void* self, int32_t alignment);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#verticalAlignment)
///
/// @param self KTextEditor__Attribute*
///
/// @return enum QTextCharFormat__VerticalAlignment
///
int32_t k_texteditor__attribute_vertical_alignment(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTextOutline)
///
/// @param self KTextEditor__Attribute*
/// @param pen QPen*
///
void k_texteditor__attribute_set_text_outline(void* self, void* pen);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#textOutline)
///
/// @param self KTextEditor__Attribute*
///
QPen* k_texteditor__attribute_text_outline(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setToolTip)
///
/// @param self KTextEditor__Attribute*
/// @param tip const char*
///
void k_texteditor__attribute_set_tool_tip(void* self, const char* tip);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Attribute*
///
const char* k_texteditor__attribute_tool_tip(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setSuperScriptBaseline)
///
/// @param self KTextEditor__Attribute*
/// @param baseline double
///
void k_texteditor__attribute_set_super_script_baseline(void* self, double baseline);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#superScriptBaseline)
///
/// @param self KTextEditor__Attribute*
///
double k_texteditor__attribute_super_script_baseline(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setSubScriptBaseline)
///
/// @param self KTextEditor__Attribute*
/// @param baseline double
///
void k_texteditor__attribute_set_sub_script_baseline(void* self, double baseline);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#subScriptBaseline)
///
/// @param self KTextEditor__Attribute*
///
double k_texteditor__attribute_sub_script_baseline(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setBaselineOffset)
///
/// @param self KTextEditor__Attribute*
/// @param baseline double
///
void k_texteditor__attribute_set_baseline_offset(void* self, double baseline);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#baselineOffset)
///
/// @param self KTextEditor__Attribute*
///
double k_texteditor__attribute_baseline_offset(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchor)
///
/// @param self KTextEditor__Attribute*
/// @param anchor bool
///
void k_texteditor__attribute_set_anchor(void* self, bool anchor);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#isAnchor)
///
/// @param self KTextEditor__Attribute*
///
bool k_texteditor__attribute_is_anchor(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorHref)
///
/// @param self KTextEditor__Attribute*
/// @param value const char*
///
void k_texteditor__attribute_set_anchor_href(void* self, const char* value);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#anchorHref)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Attribute*
///
const char* k_texteditor__attribute_anchor_href(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorNames)
///
/// @param self KTextEditor__Attribute*
/// @param names const char**
///
void k_texteditor__attribute_set_anchor_names(void* self, const char* names[static 1]);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#anchorNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KTextEditor__Attribute*
///
const char** k_texteditor__attribute_anchor_names(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellRowSpan)
///
/// @param self KTextEditor__Attribute*
/// @param tableCellRowSpan int
///
void k_texteditor__attribute_set_table_cell_row_span(void* self, int tableCellRowSpan);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellRowSpan)
///
/// @param self KTextEditor__Attribute*
///
int32_t k_texteditor__attribute_table_cell_row_span(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellColumnSpan)
///
/// @param self KTextEditor__Attribute*
/// @param tableCellColumnSpan int
///
void k_texteditor__attribute_set_table_cell_column_span(void* self, int tableCellColumnSpan);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellColumnSpan)
///
/// @param self KTextEditor__Attribute*
///
int32_t k_texteditor__attribute_table_cell_column_span(void* self);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
///
/// @param self KTextEditor__Attribute*
/// @param font QFont*
/// @param behavior enum QTextCharFormat__FontPropertiesInheritanceBehavior
///
void k_texteditor__attribute_set_font2(void* self, void* font, int32_t behavior);

/// Inherited from QTextCharFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
///
/// @param self KTextEditor__Attribute*
/// @param hint enum QFont__StyleHint
/// @param strategy enum QFont__StyleStrategy
///
void k_texteditor__attribute_set_font_style_hint2(void* self, int32_t hint, int32_t strategy);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#swap)
///
/// @param self KTextEditor__Attribute*
/// @param other QTextFormat*
///
void k_texteditor__attribute_swap(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#merge)
///
/// @param self KTextEditor__Attribute*
/// @param other QTextFormat*
///
void k_texteditor__attribute_merge(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
///
/// @param self KTextEditor__Attribute*
///
bool k_texteditor__attribute_is_empty(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#type)
///
/// @param self KTextEditor__Attribute*
///
int32_t k_texteditor__attribute_type(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
///
/// @param self KTextEditor__Attribute*
///
int32_t k_texteditor__attribute_object_index(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
///
/// @param self KTextEditor__Attribute*
/// @param object int
///
void k_texteditor__attribute_set_object_index(void* self, int object);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#property)
///
/// @param self KTextEditor__Attribute*
/// @param propertyId int
///
QVariant* k_texteditor__attribute_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// @param self KTextEditor__Attribute*
/// @param propertyId int
/// @param value QVariant*
///
void k_texteditor__attribute_set_property(void* self, int propertyId, void* value);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
///
/// @param self KTextEditor__Attribute*
/// @param propertyId int
///
void k_texteditor__attribute_clear_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
///
/// @param self KTextEditor__Attribute*
/// @param propertyId int
///
bool k_texteditor__attribute_has_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
///
/// @param self KTextEditor__Attribute*
/// @param propertyId int
///
bool k_texteditor__attribute_bool_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
///
/// @param self KTextEditor__Attribute*
/// @param propertyId int
///
int32_t k_texteditor__attribute_int_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
///
/// @param self KTextEditor__Attribute*
/// @param propertyId int
///
double k_texteditor__attribute_double_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__Attribute*
/// @param propertyId int
///
const char* k_texteditor__attribute_string_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
///
/// @param self KTextEditor__Attribute*
/// @param propertyId int
///
QColor* k_texteditor__attribute_color_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
///
/// @param self KTextEditor__Attribute*
/// @param propertyId int
///
QPen* k_texteditor__attribute_pen_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
///
/// @param self KTextEditor__Attribute*
/// @param propertyId int
///
QBrush* k_texteditor__attribute_brush_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
///
/// @param self KTextEditor__Attribute*
/// @param propertyId int
///
QTextLength* k_texteditor__attribute_length_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
///
/// @param self KTextEditor__Attribute*
/// @param propertyId int
///
libqt_list /* of QTextLength* */ k_texteditor__attribute_length_vector_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// @param self KTextEditor__Attribute*
/// @param propertyId int
/// @param lengths libqt_list /* of QTextLength* */
///
void k_texteditor__attribute_set_property2(void* self, int propertyId, libqt_list lengths);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#properties)
///
/// @param self KTextEditor__Attribute*
///
libqt_map /* of int to QVariant* */ k_texteditor__attribute_properties(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
///
/// @param self KTextEditor__Attribute*
///
int32_t k_texteditor__attribute_property_count(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
///
/// @param self KTextEditor__Attribute*
/// @param type int
///
void k_texteditor__attribute_set_object_type(void* self, int type);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectType)
///
/// @param self KTextEditor__Attribute*
///
int32_t k_texteditor__attribute_object_type(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
///
/// @param self KTextEditor__Attribute*
///
bool k_texteditor__attribute_is_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
///
/// @param self KTextEditor__Attribute*
///
bool k_texteditor__attribute_is_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
///
/// @param self KTextEditor__Attribute*
///
bool k_texteditor__attribute_is_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
///
/// @param self KTextEditor__Attribute*
///
bool k_texteditor__attribute_is_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
///
/// @param self KTextEditor__Attribute*
///
bool k_texteditor__attribute_is_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
///
/// @param self KTextEditor__Attribute*
///
bool k_texteditor__attribute_is_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
///
/// @param self KTextEditor__Attribute*
///
bool k_texteditor__attribute_is_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
///
/// @param self KTextEditor__Attribute*
///
QTextBlockFormat* k_texteditor__attribute_to_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
///
/// @param self KTextEditor__Attribute*
///
QTextCharFormat* k_texteditor__attribute_to_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
///
/// @param self KTextEditor__Attribute*
///
QTextListFormat* k_texteditor__attribute_to_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
///
/// @param self KTextEditor__Attribute*
///
QTextTableFormat* k_texteditor__attribute_to_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
///
/// @param self KTextEditor__Attribute*
///
QTextFrameFormat* k_texteditor__attribute_to_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
///
/// @param self KTextEditor__Attribute*
///
QTextImageFormat* k_texteditor__attribute_to_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
///
/// @param self KTextEditor__Attribute*
///
QTextTableCellFormat* k_texteditor__attribute_to_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
///
/// @param self KTextEditor__Attribute*
/// @param rhs QTextFormat*
///
bool k_texteditor__attribute_operator_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
///
/// @param self KTextEditor__Attribute*
/// @param rhs QTextFormat*
///
bool k_texteditor__attribute_operator_not_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator)
///
/// @param self KTextEditor__Attribute*
///
QVariant* k_texteditor__attribute_to_q_variant(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
///
/// @param self KTextEditor__Attribute*
/// @param direction enum Qt__LayoutDirection
///
void k_texteditor__attribute_set_layout_direction(void* self, int32_t direction);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
///
/// @param self KTextEditor__Attribute*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_texteditor__attribute_layout_direction(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
///
/// @param self KTextEditor__Attribute*
/// @param brush QBrush*
///
void k_texteditor__attribute_set_background(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#background)
///
/// @param self KTextEditor__Attribute*
///
QBrush* k_texteditor__attribute_background(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
///
/// @param self KTextEditor__Attribute*
///
void k_texteditor__attribute_clear_background(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
///
/// @param self KTextEditor__Attribute*
/// @param brush QBrush*
///
void k_texteditor__attribute_set_foreground(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#foreground)
///
/// @param self KTextEditor__Attribute*
///
QBrush* k_texteditor__attribute_foreground(void* self);

/// Inherited from QTextFormat
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
///
/// @param self KTextEditor__Attribute*
///
void k_texteditor__attribute_clear_foreground(void* self);

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__Attribute*
///
void k_texteditor__attribute_delete(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-attributeblock.html)

/// k_texteditor__attributeblock_new constructs a new KTextEditor::AttributeBlock object.
///
/// @param param1 KTextEditor__AttributeBlock*
///
KTextEditor__AttributeBlock* k_texteditor__attributeblock_new(void* param1);

/// [Upstream resources](https://api.kde.org/ktexteditor-attributeblock.html#start-var)
///
/// @param self KTextEditor__AttributeBlock*
///
int32_t k_texteditor__attributeblock_start(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-attributeblock.html#start-var)
///
/// @param self KTextEditor__AttributeBlock*
/// @param start int
///
void k_texteditor__attributeblock_set_start(void* self, int start);

/// [Upstream resources](https://api.kde.org/ktexteditor-attributeblock.html#length-var)
///
/// @param self KTextEditor__AttributeBlock*
///
int32_t k_texteditor__attributeblock_length(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-attributeblock.html#length-var)
///
/// @param self KTextEditor__AttributeBlock*
/// @param length int
///
void k_texteditor__attributeblock_set_length(void* self, int length);

/// [Upstream resources](https://api.kde.org/ktexteditor-attributeblock.html#operator-eq)
///
/// @param self KTextEditor__AttributeBlock*
/// @param param1 KTextEditor__AttributeBlock*
///
void k_texteditor__attributeblock_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__AttributeBlock*
///
void k_texteditor__attributeblock_delete(void* self);

/// [Upstream resources](https://api.kde.org/attribute.html#public-types)

typedef enum {
    KTEXTEDITOR_ATTRIBUTE_ACTIVATIONTYPE_ACTIVATEMOUSEIN = 0,
    KTEXTEDITOR_ATTRIBUTE_ACTIVATIONTYPE_ACTIVATECARETIN = 1
} KTextEditor__Attribute__ActivationType;

#endif
