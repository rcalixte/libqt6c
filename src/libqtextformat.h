#pragma once
#ifndef SRCQT6C_LIBQTEXTFORMAT_H
#define SRCQT6C_LIBQTEXTFORMAT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtextlength.html

/// q_textlength_new constructs a new QTextLength object.
///
/// ``` QTextLength* other ```
QTextLength* q_textlength_new(void* other);

/// q_textlength_new2 constructs a new QTextLength object and invalidates the source QTextLength object.
///
/// ``` QTextLength* other ```
QTextLength* q_textlength_new2(void* other);

/// q_textlength_new3 constructs a new QTextLength object.
///
///
QTextLength* q_textlength_new3();

/// q_textlength_new4 constructs a new QTextLength object.
///
/// ``` enum QTextLength__Type typeVal, double value ```
QTextLength* q_textlength_new4(int64_t typeVal, double value);

/// q_textlength_new5 constructs a new QTextLength object.
///
/// ``` QTextLength* param1 ```
QTextLength* q_textlength_new5(void* param1);

/// q_textlength_copy_assign shallow copies `other` into `self`.
///
/// ``` QTextLength* self, QTextLength* other ```
void q_textlength_copy_assign(void* self, void* other);

/// q_textlength_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QTextLength* self, QTextLength* other ```
void q_textlength_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlength.html#type)
///
/// ``` QTextLength* self ```
int64_t q_textlength_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlength.html#value)
///
/// ``` QTextLength* self, double maximumLength ```
double q_textlength_value(void* self, double maximumLength);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlength.html#rawValue)
///
/// ``` QTextLength* self ```
double q_textlength_raw_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlength.html#operator==)
///
/// ``` QTextLength* self, QTextLength* other ```
bool q_textlength_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlength.html#operator!=)
///
/// ``` QTextLength* self, QTextLength* other ```
bool q_textlength_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlength.html#operator QVariant)
///
/// ``` QTextLength* self ```
QVariant* q_textlength_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlength.html#dtor.QTextLength)
///
/// Delete this object from C++ memory.
///
/// ``` QTextLength* self ```
void q_textlength_delete(void* self);

/// https://doc.qt.io/qt-6/qtextformat.html

/// q_textformat_new constructs a new QTextFormat object.
///
///
QTextFormat* q_textformat_new();

/// q_textformat_new2 constructs a new QTextFormat object.
///
/// ``` int typeVal ```
QTextFormat* q_textformat_new2(int typeVal);

/// q_textformat_new3 constructs a new QTextFormat object.
///
/// ``` QTextFormat* rhs ```
QTextFormat* q_textformat_new3(void* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator=)
///
/// ``` QTextFormat* self, QTextFormat* rhs ```
void q_textformat_operator_assign(void* self, void* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#swap)
///
/// ``` QTextFormat* self, QTextFormat* other ```
void q_textformat_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#merge)
///
/// ``` QTextFormat* self, QTextFormat* other ```
void q_textformat_merge(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isValid)
///
/// ``` QTextFormat* self ```
bool q_textformat_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
///
/// ``` QTextFormat* self ```
bool q_textformat_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#type)
///
/// ``` QTextFormat* self ```
int32_t q_textformat_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
///
/// ``` QTextFormat* self ```
int32_t q_textformat_object_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
///
/// ``` QTextFormat* self, int object ```
void q_textformat_set_object_index(void* self, int object);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#property)
///
/// ``` QTextFormat* self, int propertyId ```
QVariant* q_textformat_property(void* self, int propertyId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// ``` QTextFormat* self, int propertyId, QVariant* value ```
void q_textformat_set_property(void* self, int propertyId, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
///
/// ``` QTextFormat* self, int propertyId ```
void q_textformat_clear_property(void* self, int propertyId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
///
/// ``` QTextFormat* self, int propertyId ```
bool q_textformat_has_property(void* self, int propertyId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
///
/// ``` QTextFormat* self, int propertyId ```
bool q_textformat_bool_property(void* self, int propertyId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
///
/// ``` QTextFormat* self, int propertyId ```
int32_t q_textformat_int_property(void* self, int propertyId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
///
/// ``` QTextFormat* self, int propertyId ```
double q_textformat_double_property(void* self, int propertyId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
///
/// ``` QTextFormat* self, int propertyId ```
const char* q_textformat_string_property(void* self, int propertyId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
///
/// ``` QTextFormat* self, int propertyId ```
QColor* q_textformat_color_property(void* self, int propertyId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
///
/// ``` QTextFormat* self, int propertyId ```
QPen* q_textformat_pen_property(void* self, int propertyId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
///
/// ``` QTextFormat* self, int propertyId ```
QBrush* q_textformat_brush_property(void* self, int propertyId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
///
/// ``` QTextFormat* self, int propertyId ```
QTextLength* q_textformat_length_property(void* self, int propertyId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
///
/// ``` QTextFormat* self, int propertyId ```
libqt_list /* of QTextLength* */ q_textformat_length_vector_property(void* self, int propertyId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// ``` QTextFormat* self, int propertyId, libqt_list /* of QTextLength* */ lengths ```
void q_textformat_set_property2(void* self, int propertyId, libqt_list lengths);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#properties)
///
/// ``` QTextFormat* self ```
libqt_map /* of int to QVariant* */ q_textformat_properties(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
///
/// ``` QTextFormat* self ```
int32_t q_textformat_property_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
///
/// ``` QTextFormat* self, int typeVal ```
void q_textformat_set_object_type(void* self, int typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectType)
///
/// ``` QTextFormat* self ```
int32_t q_textformat_object_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
///
/// ``` QTextFormat* self ```
bool q_textformat_is_char_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
///
/// ``` QTextFormat* self ```
bool q_textformat_is_block_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
///
/// ``` QTextFormat* self ```
bool q_textformat_is_list_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
///
/// ``` QTextFormat* self ```
bool q_textformat_is_frame_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
///
/// ``` QTextFormat* self ```
bool q_textformat_is_image_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
///
/// ``` QTextFormat* self ```
bool q_textformat_is_table_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
///
/// ``` QTextFormat* self ```
bool q_textformat_is_table_cell_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
///
/// ``` QTextFormat* self ```
QTextBlockFormat* q_textformat_to_block_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
///
/// ``` QTextFormat* self ```
QTextCharFormat* q_textformat_to_char_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
///
/// ``` QTextFormat* self ```
QTextListFormat* q_textformat_to_list_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
///
/// ``` QTextFormat* self ```
QTextTableFormat* q_textformat_to_table_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
///
/// ``` QTextFormat* self ```
QTextFrameFormat* q_textformat_to_frame_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
///
/// ``` QTextFormat* self ```
QTextImageFormat* q_textformat_to_image_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
///
/// ``` QTextFormat* self ```
QTextTableCellFormat* q_textformat_to_table_cell_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator==)
///
/// ``` QTextFormat* self, QTextFormat* rhs ```
bool q_textformat_operator_equal(void* self, void* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator!=)
///
/// ``` QTextFormat* self, QTextFormat* rhs ```
bool q_textformat_operator_not_equal(void* self, void* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator QVariant)
///
/// ``` QTextFormat* self ```
QVariant* q_textformat_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
///
/// ``` QTextFormat* self, enum Qt__LayoutDirection direction ```
void q_textformat_set_layout_direction(void* self, int64_t direction);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
///
/// ``` QTextFormat* self ```
int64_t q_textformat_layout_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
///
/// ``` QTextFormat* self, QBrush* brush ```
void q_textformat_set_background(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#background)
///
/// ``` QTextFormat* self ```
QBrush* q_textformat_background(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
///
/// ``` QTextFormat* self ```
void q_textformat_clear_background(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
///
/// ``` QTextFormat* self, QBrush* brush ```
void q_textformat_set_foreground(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#foreground)
///
/// ``` QTextFormat* self ```
QBrush* q_textformat_foreground(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
///
/// ``` QTextFormat* self ```
void q_textformat_clear_foreground(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#dtor.QTextFormat)
///
/// Delete this object from C++ memory.
///
/// ``` QTextFormat* self ```
void q_textformat_delete(void* self);

/// https://doc.qt.io/qt-6/qtextcharformat.html

/// q_textcharformat_new constructs a new QTextCharFormat object.
///
///
QTextCharFormat* q_textcharformat_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#isValid)
///
/// ``` QTextCharFormat* self ```
bool q_textcharformat_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
///
/// ``` QTextCharFormat* self, QFont* font ```
void q_textcharformat_set_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#font)
///
/// ``` QTextCharFormat* self ```
QFont* q_textcharformat_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamily)
///
/// ``` QTextCharFormat* self, const char* family ```
void q_textcharformat_set_font_family(void* self, const char* family);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamily)
///
/// ``` QTextCharFormat* self ```
const char* q_textcharformat_font_family(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamilies)
///
/// ``` QTextCharFormat* self, const char* families[] ```
void q_textcharformat_set_font_families(void* self, const char* families[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamilies)
///
/// ``` QTextCharFormat* self ```
QVariant* q_textcharformat_font_families(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleName)
///
/// ``` QTextCharFormat* self, const char* styleName ```
void q_textcharformat_set_font_style_name(void* self, const char* styleName);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleName)
///
/// ``` QTextCharFormat* self ```
QVariant* q_textcharformat_font_style_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontPointSize)
///
/// ``` QTextCharFormat* self, double size ```
void q_textcharformat_set_font_point_size(void* self, double size);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontPointSize)
///
/// ``` QTextCharFormat* self ```
double q_textcharformat_font_point_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWeight)
///
/// ``` QTextCharFormat* self, int weight ```
void q_textcharformat_set_font_weight(void* self, int weight);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontWeight)
///
/// ``` QTextCharFormat* self ```
int32_t q_textcharformat_font_weight(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontItalic)
///
/// ``` QTextCharFormat* self, bool italic ```
void q_textcharformat_set_font_italic(void* self, bool italic);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontItalic)
///
/// ``` QTextCharFormat* self ```
bool q_textcharformat_font_italic(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontCapitalization)
///
/// ``` QTextCharFormat* self, enum QFont__Capitalization capitalization ```
void q_textcharformat_set_font_capitalization(void* self, int64_t capitalization);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontCapitalization)
///
/// ``` QTextCharFormat* self ```
int64_t q_textcharformat_font_capitalization(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacingType)
///
/// ``` QTextCharFormat* self, enum QFont__SpacingType letterSpacingType ```
void q_textcharformat_set_font_letter_spacing_type(void* self, int64_t letterSpacingType);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacingType)
///
/// ``` QTextCharFormat* self ```
int64_t q_textcharformat_font_letter_spacing_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacing)
///
/// ``` QTextCharFormat* self, double spacing ```
void q_textcharformat_set_font_letter_spacing(void* self, double spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacing)
///
/// ``` QTextCharFormat* self ```
double q_textcharformat_font_letter_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWordSpacing)
///
/// ``` QTextCharFormat* self, double spacing ```
void q_textcharformat_set_font_word_spacing(void* self, double spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontWordSpacing)
///
/// ``` QTextCharFormat* self ```
double q_textcharformat_font_word_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontUnderline)
///
/// ``` QTextCharFormat* self, bool underline ```
void q_textcharformat_set_font_underline(void* self, bool underline);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontUnderline)
///
/// ``` QTextCharFormat* self ```
bool q_textcharformat_font_underline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontOverline)
///
/// ``` QTextCharFormat* self, bool overline ```
void q_textcharformat_set_font_overline(void* self, bool overline);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontOverline)
///
/// ``` QTextCharFormat* self ```
bool q_textcharformat_font_overline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStrikeOut)
///
/// ``` QTextCharFormat* self, bool strikeOut ```
void q_textcharformat_set_font_strike_out(void* self, bool strikeOut);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStrikeOut)
///
/// ``` QTextCharFormat* self ```
bool q_textcharformat_font_strike_out(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineColor)
///
/// ``` QTextCharFormat* self, QColor* color ```
void q_textcharformat_set_underline_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#underlineColor)
///
/// ``` QTextCharFormat* self ```
QColor* q_textcharformat_underline_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFixedPitch)
///
/// ``` QTextCharFormat* self, bool fixedPitch ```
void q_textcharformat_set_font_fixed_pitch(void* self, bool fixedPitch);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFixedPitch)
///
/// ``` QTextCharFormat* self ```
bool q_textcharformat_font_fixed_pitch(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStretch)
///
/// ``` QTextCharFormat* self, int factor ```
void q_textcharformat_set_font_stretch(void* self, int factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStretch)
///
/// ``` QTextCharFormat* self ```
int32_t q_textcharformat_font_stretch(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
///
/// ``` QTextCharFormat* self, enum QFont__StyleHint hint ```
void q_textcharformat_set_font_style_hint(void* self, int64_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleStrategy)
///
/// ``` QTextCharFormat* self, enum QFont__StyleStrategy strategy ```
void q_textcharformat_set_font_style_strategy(void* self, int64_t strategy);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleHint)
///
/// ``` QTextCharFormat* self ```
int64_t q_textcharformat_font_style_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleStrategy)
///
/// ``` QTextCharFormat* self ```
int64_t q_textcharformat_font_style_strategy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontHintingPreference)
///
/// ``` QTextCharFormat* self, enum QFont__HintingPreference hintingPreference ```
void q_textcharformat_set_font_hinting_preference(void* self, int64_t hintingPreference);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontHintingPreference)
///
/// ``` QTextCharFormat* self ```
int64_t q_textcharformat_font_hinting_preference(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontKerning)
///
/// ``` QTextCharFormat* self, bool enable ```
void q_textcharformat_set_font_kerning(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontKerning)
///
/// ``` QTextCharFormat* self ```
bool q_textcharformat_font_kerning(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineStyle)
///
/// ``` QTextCharFormat* self, enum QTextCharFormat__UnderlineStyle style ```
void q_textcharformat_set_underline_style(void* self, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#underlineStyle)
///
/// ``` QTextCharFormat* self ```
int64_t q_textcharformat_underline_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setVerticalAlignment)
///
/// ``` QTextCharFormat* self, enum QTextCharFormat__VerticalAlignment alignment ```
void q_textcharformat_set_vertical_alignment(void* self, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#verticalAlignment)
///
/// ``` QTextCharFormat* self ```
int64_t q_textcharformat_vertical_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTextOutline)
///
/// ``` QTextCharFormat* self, QPen* pen ```
void q_textcharformat_set_text_outline(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#textOutline)
///
/// ``` QTextCharFormat* self ```
QPen* q_textcharformat_text_outline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setToolTip)
///
/// ``` QTextCharFormat* self, const char* tip ```
void q_textcharformat_set_tool_tip(void* self, const char* tip);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#toolTip)
///
/// ``` QTextCharFormat* self ```
const char* q_textcharformat_tool_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setSuperScriptBaseline)
///
/// ``` QTextCharFormat* self, double baseline ```
void q_textcharformat_set_super_script_baseline(void* self, double baseline);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#superScriptBaseline)
///
/// ``` QTextCharFormat* self ```
double q_textcharformat_super_script_baseline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setSubScriptBaseline)
///
/// ``` QTextCharFormat* self, double baseline ```
void q_textcharformat_set_sub_script_baseline(void* self, double baseline);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#subScriptBaseline)
///
/// ``` QTextCharFormat* self ```
double q_textcharformat_sub_script_baseline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setBaselineOffset)
///
/// ``` QTextCharFormat* self, double baseline ```
void q_textcharformat_set_baseline_offset(void* self, double baseline);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#baselineOffset)
///
/// ``` QTextCharFormat* self ```
double q_textcharformat_baseline_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchor)
///
/// ``` QTextCharFormat* self, bool anchor ```
void q_textcharformat_set_anchor(void* self, bool anchor);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#isAnchor)
///
/// ``` QTextCharFormat* self ```
bool q_textcharformat_is_anchor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorHref)
///
/// ``` QTextCharFormat* self, const char* value ```
void q_textcharformat_set_anchor_href(void* self, const char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#anchorHref)
///
/// ``` QTextCharFormat* self ```
const char* q_textcharformat_anchor_href(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorNames)
///
/// ``` QTextCharFormat* self, const char* names[] ```
void q_textcharformat_set_anchor_names(void* self, const char* names[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#anchorNames)
///
/// ``` QTextCharFormat* self ```
const char** q_textcharformat_anchor_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellRowSpan)
///
/// ``` QTextCharFormat* self, int tableCellRowSpan ```
void q_textcharformat_set_table_cell_row_span(void* self, int tableCellRowSpan);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellRowSpan)
///
/// ``` QTextCharFormat* self ```
int32_t q_textcharformat_table_cell_row_span(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellColumnSpan)
///
/// ``` QTextCharFormat* self, int tableCellColumnSpan ```
void q_textcharformat_set_table_cell_column_span(void* self, int tableCellColumnSpan);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellColumnSpan)
///
/// ``` QTextCharFormat* self ```
int32_t q_textcharformat_table_cell_column_span(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
///
/// ``` QTextCharFormat* self, QFont* font, enum QTextCharFormat__FontPropertiesInheritanceBehavior behavior ```
void q_textcharformat_set_font2(void* self, void* font, int64_t behavior);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
///
/// ``` QTextCharFormat* self, enum QFont__StyleHint hint, enum QFont__StyleStrategy strategy ```
void q_textcharformat_set_font_style_hint2(void* self, int64_t hint, int64_t strategy);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator=)
///
/// ``` QTextCharFormat* self, QTextFormat* rhs ```
void q_textcharformat_operator_assign(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#swap)
///
/// ``` QTextCharFormat* self, QTextFormat* other ```
void q_textcharformat_swap(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#merge)
///
/// ``` QTextCharFormat* self, QTextFormat* other ```
void q_textcharformat_merge(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
///
/// ``` QTextCharFormat* self ```
bool q_textcharformat_is_empty(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#type)
///
/// ``` QTextCharFormat* self ```
int32_t q_textcharformat_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
///
/// ``` QTextCharFormat* self ```
int32_t q_textcharformat_object_index(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
///
/// ``` QTextCharFormat* self, int object ```
void q_textcharformat_set_object_index(void* self, int object);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#property)
///
/// ``` QTextCharFormat* self, int propertyId ```
QVariant* q_textcharformat_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// ``` QTextCharFormat* self, int propertyId, QVariant* value ```
void q_textcharformat_set_property(void* self, int propertyId, void* value);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
///
/// ``` QTextCharFormat* self, int propertyId ```
void q_textcharformat_clear_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
///
/// ``` QTextCharFormat* self, int propertyId ```
bool q_textcharformat_has_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
///
/// ``` QTextCharFormat* self, int propertyId ```
bool q_textcharformat_bool_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
///
/// ``` QTextCharFormat* self, int propertyId ```
int32_t q_textcharformat_int_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
///
/// ``` QTextCharFormat* self, int propertyId ```
double q_textcharformat_double_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
///
/// ``` QTextCharFormat* self, int propertyId ```
const char* q_textcharformat_string_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
///
/// ``` QTextCharFormat* self, int propertyId ```
QColor* q_textcharformat_color_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
///
/// ``` QTextCharFormat* self, int propertyId ```
QPen* q_textcharformat_pen_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
///
/// ``` QTextCharFormat* self, int propertyId ```
QBrush* q_textcharformat_brush_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
///
/// ``` QTextCharFormat* self, int propertyId ```
QTextLength* q_textcharformat_length_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
///
/// ``` QTextCharFormat* self, int propertyId ```
libqt_list /* of QTextLength* */ q_textcharformat_length_vector_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// ``` QTextCharFormat* self, int propertyId, libqt_list /* of QTextLength* */ lengths ```
void q_textcharformat_set_property2(void* self, int propertyId, libqt_list lengths);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#properties)
///
/// ``` QTextCharFormat* self ```
libqt_map /* of int to QVariant* */ q_textcharformat_properties(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
///
/// ``` QTextCharFormat* self ```
int32_t q_textcharformat_property_count(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
///
/// ``` QTextCharFormat* self, int typeVal ```
void q_textcharformat_set_object_type(void* self, int typeVal);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectType)
///
/// ``` QTextCharFormat* self ```
int32_t q_textcharformat_object_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
///
/// ``` QTextCharFormat* self ```
bool q_textcharformat_is_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
///
/// ``` QTextCharFormat* self ```
bool q_textcharformat_is_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
///
/// ``` QTextCharFormat* self ```
bool q_textcharformat_is_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
///
/// ``` QTextCharFormat* self ```
bool q_textcharformat_is_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
///
/// ``` QTextCharFormat* self ```
bool q_textcharformat_is_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
///
/// ``` QTextCharFormat* self ```
bool q_textcharformat_is_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
///
/// ``` QTextCharFormat* self ```
bool q_textcharformat_is_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
///
/// ``` QTextCharFormat* self ```
QTextBlockFormat* q_textcharformat_to_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
///
/// ``` QTextCharFormat* self ```
QTextCharFormat* q_textcharformat_to_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
///
/// ``` QTextCharFormat* self ```
QTextListFormat* q_textcharformat_to_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
///
/// ``` QTextCharFormat* self ```
QTextTableFormat* q_textcharformat_to_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
///
/// ``` QTextCharFormat* self ```
QTextFrameFormat* q_textcharformat_to_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
///
/// ``` QTextCharFormat* self ```
QTextImageFormat* q_textcharformat_to_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
///
/// ``` QTextCharFormat* self ```
QTextTableCellFormat* q_textcharformat_to_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator==)
///
/// ``` QTextCharFormat* self, QTextFormat* rhs ```
bool q_textcharformat_operator_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator!=)
///
/// ``` QTextCharFormat* self, QTextFormat* rhs ```
bool q_textcharformat_operator_not_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator QVariant)
///
/// ``` QTextCharFormat* self ```
QVariant* q_textcharformat_to_q_variant(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
///
/// ``` QTextCharFormat* self, enum Qt__LayoutDirection direction ```
void q_textcharformat_set_layout_direction(void* self, int64_t direction);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
///
/// ``` QTextCharFormat* self ```
int64_t q_textcharformat_layout_direction(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
///
/// ``` QTextCharFormat* self, QBrush* brush ```
void q_textcharformat_set_background(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#background)
///
/// ``` QTextCharFormat* self ```
QBrush* q_textcharformat_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
///
/// ``` QTextCharFormat* self ```
void q_textcharformat_clear_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
///
/// ``` QTextCharFormat* self, QBrush* brush ```
void q_textcharformat_set_foreground(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#foreground)
///
/// ``` QTextCharFormat* self ```
QBrush* q_textcharformat_foreground(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
///
/// ``` QTextCharFormat* self ```
void q_textcharformat_clear_foreground(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#dtor.QTextCharFormat)
///
/// Delete this object from C++ memory.
///
/// ``` QTextCharFormat* self ```
void q_textcharformat_delete(void* self);

/// https://doc.qt.io/qt-6/qtextblockformat.html

/// q_textblockformat_new constructs a new QTextBlockFormat object.
///
///
QTextBlockFormat* q_textblockformat_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#isValid)
///
/// ``` QTextBlockFormat* self ```
bool q_textblockformat_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setAlignment)
///
/// ``` QTextBlockFormat* self, int alignment ```
void q_textblockformat_set_alignment(void* self, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#alignment)
///
/// ``` QTextBlockFormat* self ```
int64_t q_textblockformat_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setTopMargin)
///
/// ``` QTextBlockFormat* self, double margin ```
void q_textblockformat_set_top_margin(void* self, double margin);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#topMargin)
///
/// ``` QTextBlockFormat* self ```
double q_textblockformat_top_margin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setBottomMargin)
///
/// ``` QTextBlockFormat* self, double margin ```
void q_textblockformat_set_bottom_margin(void* self, double margin);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#bottomMargin)
///
/// ``` QTextBlockFormat* self ```
double q_textblockformat_bottom_margin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setLeftMargin)
///
/// ``` QTextBlockFormat* self, double margin ```
void q_textblockformat_set_left_margin(void* self, double margin);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#leftMargin)
///
/// ``` QTextBlockFormat* self ```
double q_textblockformat_left_margin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setRightMargin)
///
/// ``` QTextBlockFormat* self, double margin ```
void q_textblockformat_set_right_margin(void* self, double margin);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#rightMargin)
///
/// ``` QTextBlockFormat* self ```
double q_textblockformat_right_margin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setTextIndent)
///
/// ``` QTextBlockFormat* self, double aindent ```
void q_textblockformat_set_text_indent(void* self, double aindent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#textIndent)
///
/// ``` QTextBlockFormat* self ```
double q_textblockformat_text_indent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setIndent)
///
/// ``` QTextBlockFormat* self, int indent ```
void q_textblockformat_set_indent(void* self, int indent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#indent)
///
/// ``` QTextBlockFormat* self ```
int32_t q_textblockformat_indent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setHeadingLevel)
///
/// ``` QTextBlockFormat* self, int alevel ```
void q_textblockformat_set_heading_level(void* self, int alevel);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#headingLevel)
///
/// ``` QTextBlockFormat* self ```
int32_t q_textblockformat_heading_level(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setLineHeight)
///
/// ``` QTextBlockFormat* self, double height, int heightType ```
void q_textblockformat_set_line_height(void* self, double height, int heightType);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#lineHeight)
///
/// ``` QTextBlockFormat* self, double scriptLineHeight, double scaling ```
double q_textblockformat_line_height(void* self, double scriptLineHeight, double scaling);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#lineHeight)
///
/// ``` QTextBlockFormat* self ```
double q_textblockformat_line_height2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#lineHeightType)
///
/// ``` QTextBlockFormat* self ```
int32_t q_textblockformat_line_height_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setNonBreakableLines)
///
/// ``` QTextBlockFormat* self, bool b ```
void q_textblockformat_set_non_breakable_lines(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#nonBreakableLines)
///
/// ``` QTextBlockFormat* self ```
bool q_textblockformat_non_breakable_lines(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setPageBreakPolicy)
///
/// ``` QTextBlockFormat* self, int flags ```
void q_textblockformat_set_page_break_policy(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#pageBreakPolicy)
///
/// ``` QTextBlockFormat* self ```
int64_t q_textblockformat_page_break_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setTabPositions)
///
/// ``` QTextBlockFormat* self, libqt_list /* of QTextOption__Tab* */ tabs ```
void q_textblockformat_set_tab_positions(void* self, libqt_list tabs);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#tabPositions)
///
/// ``` QTextBlockFormat* self ```
libqt_list /* of QTextOption__Tab* */ q_textblockformat_tab_positions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setMarker)
///
/// ``` QTextBlockFormat* self, enum QTextBlockFormat__MarkerType marker ```
void q_textblockformat_set_marker(void* self, int64_t marker);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#marker)
///
/// ``` QTextBlockFormat* self ```
int64_t q_textblockformat_marker(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator=)
///
/// ``` QTextBlockFormat* self, QTextFormat* rhs ```
void q_textblockformat_operator_assign(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#swap)
///
/// ``` QTextBlockFormat* self, QTextFormat* other ```
void q_textblockformat_swap(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#merge)
///
/// ``` QTextBlockFormat* self, QTextFormat* other ```
void q_textblockformat_merge(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
///
/// ``` QTextBlockFormat* self ```
bool q_textblockformat_is_empty(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#type)
///
/// ``` QTextBlockFormat* self ```
int32_t q_textblockformat_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
///
/// ``` QTextBlockFormat* self ```
int32_t q_textblockformat_object_index(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
///
/// ``` QTextBlockFormat* self, int object ```
void q_textblockformat_set_object_index(void* self, int object);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#property)
///
/// ``` QTextBlockFormat* self, int propertyId ```
QVariant* q_textblockformat_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// ``` QTextBlockFormat* self, int propertyId, QVariant* value ```
void q_textblockformat_set_property(void* self, int propertyId, void* value);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
///
/// ``` QTextBlockFormat* self, int propertyId ```
void q_textblockformat_clear_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
///
/// ``` QTextBlockFormat* self, int propertyId ```
bool q_textblockformat_has_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
///
/// ``` QTextBlockFormat* self, int propertyId ```
bool q_textblockformat_bool_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
///
/// ``` QTextBlockFormat* self, int propertyId ```
int32_t q_textblockformat_int_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
///
/// ``` QTextBlockFormat* self, int propertyId ```
double q_textblockformat_double_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
///
/// ``` QTextBlockFormat* self, int propertyId ```
const char* q_textblockformat_string_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
///
/// ``` QTextBlockFormat* self, int propertyId ```
QColor* q_textblockformat_color_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
///
/// ``` QTextBlockFormat* self, int propertyId ```
QPen* q_textblockformat_pen_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
///
/// ``` QTextBlockFormat* self, int propertyId ```
QBrush* q_textblockformat_brush_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
///
/// ``` QTextBlockFormat* self, int propertyId ```
QTextLength* q_textblockformat_length_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
///
/// ``` QTextBlockFormat* self, int propertyId ```
libqt_list /* of QTextLength* */ q_textblockformat_length_vector_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// ``` QTextBlockFormat* self, int propertyId, libqt_list /* of QTextLength* */ lengths ```
void q_textblockformat_set_property2(void* self, int propertyId, libqt_list lengths);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#properties)
///
/// ``` QTextBlockFormat* self ```
libqt_map /* of int to QVariant* */ q_textblockformat_properties(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
///
/// ``` QTextBlockFormat* self ```
int32_t q_textblockformat_property_count(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
///
/// ``` QTextBlockFormat* self, int typeVal ```
void q_textblockformat_set_object_type(void* self, int typeVal);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectType)
///
/// ``` QTextBlockFormat* self ```
int32_t q_textblockformat_object_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
///
/// ``` QTextBlockFormat* self ```
bool q_textblockformat_is_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
///
/// ``` QTextBlockFormat* self ```
bool q_textblockformat_is_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
///
/// ``` QTextBlockFormat* self ```
bool q_textblockformat_is_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
///
/// ``` QTextBlockFormat* self ```
bool q_textblockformat_is_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
///
/// ``` QTextBlockFormat* self ```
bool q_textblockformat_is_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
///
/// ``` QTextBlockFormat* self ```
bool q_textblockformat_is_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
///
/// ``` QTextBlockFormat* self ```
bool q_textblockformat_is_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
///
/// ``` QTextBlockFormat* self ```
QTextBlockFormat* q_textblockformat_to_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
///
/// ``` QTextBlockFormat* self ```
QTextCharFormat* q_textblockformat_to_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
///
/// ``` QTextBlockFormat* self ```
QTextListFormat* q_textblockformat_to_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
///
/// ``` QTextBlockFormat* self ```
QTextTableFormat* q_textblockformat_to_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
///
/// ``` QTextBlockFormat* self ```
QTextFrameFormat* q_textblockformat_to_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
///
/// ``` QTextBlockFormat* self ```
QTextImageFormat* q_textblockformat_to_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
///
/// ``` QTextBlockFormat* self ```
QTextTableCellFormat* q_textblockformat_to_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator==)
///
/// ``` QTextBlockFormat* self, QTextFormat* rhs ```
bool q_textblockformat_operator_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator!=)
///
/// ``` QTextBlockFormat* self, QTextFormat* rhs ```
bool q_textblockformat_operator_not_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator QVariant)
///
/// ``` QTextBlockFormat* self ```
QVariant* q_textblockformat_to_q_variant(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
///
/// ``` QTextBlockFormat* self, enum Qt__LayoutDirection direction ```
void q_textblockformat_set_layout_direction(void* self, int64_t direction);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
///
/// ``` QTextBlockFormat* self ```
int64_t q_textblockformat_layout_direction(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
///
/// ``` QTextBlockFormat* self, QBrush* brush ```
void q_textblockformat_set_background(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#background)
///
/// ``` QTextBlockFormat* self ```
QBrush* q_textblockformat_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
///
/// ``` QTextBlockFormat* self ```
void q_textblockformat_clear_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
///
/// ``` QTextBlockFormat* self, QBrush* brush ```
void q_textblockformat_set_foreground(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#foreground)
///
/// ``` QTextBlockFormat* self ```
QBrush* q_textblockformat_foreground(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
///
/// ``` QTextBlockFormat* self ```
void q_textblockformat_clear_foreground(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#dtor.QTextBlockFormat)
///
/// Delete this object from C++ memory.
///
/// ``` QTextBlockFormat* self ```
void q_textblockformat_delete(void* self);

/// https://doc.qt.io/qt-6/qtextlistformat.html

/// q_textlistformat_new constructs a new QTextListFormat object.
///
///
QTextListFormat* q_textlistformat_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#isValid)
///
/// ``` QTextListFormat* self ```
bool q_textlistformat_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#setStyle)
///
/// ``` QTextListFormat* self, enum QTextListFormat__Style style ```
void q_textlistformat_set_style(void* self, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#style)
///
/// ``` QTextListFormat* self ```
int64_t q_textlistformat_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#setIndent)
///
/// ``` QTextListFormat* self, int indent ```
void q_textlistformat_set_indent(void* self, int indent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#indent)
///
/// ``` QTextListFormat* self ```
int32_t q_textlistformat_indent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#setNumberPrefix)
///
/// ``` QTextListFormat* self, const char* numberPrefix ```
void q_textlistformat_set_number_prefix(void* self, const char* numberPrefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#numberPrefix)
///
/// ``` QTextListFormat* self ```
const char* q_textlistformat_number_prefix(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#setNumberSuffix)
///
/// ``` QTextListFormat* self, const char* numberSuffix ```
void q_textlistformat_set_number_suffix(void* self, const char* numberSuffix);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#numberSuffix)
///
/// ``` QTextListFormat* self ```
const char* q_textlistformat_number_suffix(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#setStart)
///
/// ``` QTextListFormat* self, int indent ```
void q_textlistformat_set_start(void* self, int indent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#start)
///
/// ``` QTextListFormat* self ```
int32_t q_textlistformat_start(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator=)
///
/// ``` QTextListFormat* self, QTextFormat* rhs ```
void q_textlistformat_operator_assign(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#swap)
///
/// ``` QTextListFormat* self, QTextFormat* other ```
void q_textlistformat_swap(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#merge)
///
/// ``` QTextListFormat* self, QTextFormat* other ```
void q_textlistformat_merge(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
///
/// ``` QTextListFormat* self ```
bool q_textlistformat_is_empty(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#type)
///
/// ``` QTextListFormat* self ```
int32_t q_textlistformat_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
///
/// ``` QTextListFormat* self ```
int32_t q_textlistformat_object_index(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
///
/// ``` QTextListFormat* self, int object ```
void q_textlistformat_set_object_index(void* self, int object);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#property)
///
/// ``` QTextListFormat* self, int propertyId ```
QVariant* q_textlistformat_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// ``` QTextListFormat* self, int propertyId, QVariant* value ```
void q_textlistformat_set_property(void* self, int propertyId, void* value);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
///
/// ``` QTextListFormat* self, int propertyId ```
void q_textlistformat_clear_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
///
/// ``` QTextListFormat* self, int propertyId ```
bool q_textlistformat_has_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
///
/// ``` QTextListFormat* self, int propertyId ```
bool q_textlistformat_bool_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
///
/// ``` QTextListFormat* self, int propertyId ```
int32_t q_textlistformat_int_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
///
/// ``` QTextListFormat* self, int propertyId ```
double q_textlistformat_double_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
///
/// ``` QTextListFormat* self, int propertyId ```
const char* q_textlistformat_string_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
///
/// ``` QTextListFormat* self, int propertyId ```
QColor* q_textlistformat_color_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
///
/// ``` QTextListFormat* self, int propertyId ```
QPen* q_textlistformat_pen_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
///
/// ``` QTextListFormat* self, int propertyId ```
QBrush* q_textlistformat_brush_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
///
/// ``` QTextListFormat* self, int propertyId ```
QTextLength* q_textlistformat_length_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
///
/// ``` QTextListFormat* self, int propertyId ```
libqt_list /* of QTextLength* */ q_textlistformat_length_vector_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// ``` QTextListFormat* self, int propertyId, libqt_list /* of QTextLength* */ lengths ```
void q_textlistformat_set_property2(void* self, int propertyId, libqt_list lengths);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#properties)
///
/// ``` QTextListFormat* self ```
libqt_map /* of int to QVariant* */ q_textlistformat_properties(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
///
/// ``` QTextListFormat* self ```
int32_t q_textlistformat_property_count(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
///
/// ``` QTextListFormat* self, int typeVal ```
void q_textlistformat_set_object_type(void* self, int typeVal);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectType)
///
/// ``` QTextListFormat* self ```
int32_t q_textlistformat_object_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
///
/// ``` QTextListFormat* self ```
bool q_textlistformat_is_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
///
/// ``` QTextListFormat* self ```
bool q_textlistformat_is_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
///
/// ``` QTextListFormat* self ```
bool q_textlistformat_is_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
///
/// ``` QTextListFormat* self ```
bool q_textlistformat_is_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
///
/// ``` QTextListFormat* self ```
bool q_textlistformat_is_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
///
/// ``` QTextListFormat* self ```
bool q_textlistformat_is_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
///
/// ``` QTextListFormat* self ```
bool q_textlistformat_is_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
///
/// ``` QTextListFormat* self ```
QTextBlockFormat* q_textlistformat_to_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
///
/// ``` QTextListFormat* self ```
QTextCharFormat* q_textlistformat_to_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
///
/// ``` QTextListFormat* self ```
QTextListFormat* q_textlistformat_to_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
///
/// ``` QTextListFormat* self ```
QTextTableFormat* q_textlistformat_to_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
///
/// ``` QTextListFormat* self ```
QTextFrameFormat* q_textlistformat_to_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
///
/// ``` QTextListFormat* self ```
QTextImageFormat* q_textlistformat_to_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
///
/// ``` QTextListFormat* self ```
QTextTableCellFormat* q_textlistformat_to_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator==)
///
/// ``` QTextListFormat* self, QTextFormat* rhs ```
bool q_textlistformat_operator_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator!=)
///
/// ``` QTextListFormat* self, QTextFormat* rhs ```
bool q_textlistformat_operator_not_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator QVariant)
///
/// ``` QTextListFormat* self ```
QVariant* q_textlistformat_to_q_variant(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
///
/// ``` QTextListFormat* self, enum Qt__LayoutDirection direction ```
void q_textlistformat_set_layout_direction(void* self, int64_t direction);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
///
/// ``` QTextListFormat* self ```
int64_t q_textlistformat_layout_direction(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
///
/// ``` QTextListFormat* self, QBrush* brush ```
void q_textlistformat_set_background(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#background)
///
/// ``` QTextListFormat* self ```
QBrush* q_textlistformat_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
///
/// ``` QTextListFormat* self ```
void q_textlistformat_clear_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
///
/// ``` QTextListFormat* self, QBrush* brush ```
void q_textlistformat_set_foreground(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#foreground)
///
/// ``` QTextListFormat* self ```
QBrush* q_textlistformat_foreground(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
///
/// ``` QTextListFormat* self ```
void q_textlistformat_clear_foreground(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#dtor.QTextListFormat)
///
/// Delete this object from C++ memory.
///
/// ``` QTextListFormat* self ```
void q_textlistformat_delete(void* self);

/// https://doc.qt.io/qt-6/qtextimageformat.html

/// q_textimageformat_new constructs a new QTextImageFormat object.
///
///
QTextImageFormat* q_textimageformat_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#isValid)
///
/// ``` QTextImageFormat* self ```
bool q_textimageformat_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#setName)
///
/// ``` QTextImageFormat* self, const char* name ```
void q_textimageformat_set_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#name)
///
/// ``` QTextImageFormat* self ```
const char* q_textimageformat_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#setWidth)
///
/// ``` QTextImageFormat* self, double width ```
void q_textimageformat_set_width(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#width)
///
/// ``` QTextImageFormat* self ```
double q_textimageformat_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#setMaximumWidth)
///
/// ``` QTextImageFormat* self, QTextLength* maxWidth ```
void q_textimageformat_set_maximum_width(void* self, void* maxWidth);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#maximumWidth)
///
/// ``` QTextImageFormat* self ```
QTextLength* q_textimageformat_maximum_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#setHeight)
///
/// ``` QTextImageFormat* self, double height ```
void q_textimageformat_set_height(void* self, double height);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#height)
///
/// ``` QTextImageFormat* self ```
double q_textimageformat_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#setQuality)
///
/// ``` QTextImageFormat* self, int quality ```
void q_textimageformat_set_quality(void* self, int quality);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#setQuality)
///
/// ``` QTextImageFormat* self ```
void q_textimageformat_set_quality2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#quality)
///
/// ``` QTextImageFormat* self ```
int32_t q_textimageformat_quality(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
///
/// ``` QTextImageFormat* self, QFont* font ```
void q_textimageformat_set_font(void* self, void* font);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#font)
///
/// ``` QTextImageFormat* self ```
QFont* q_textimageformat_font(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamily)
///
/// ``` QTextImageFormat* self, const char* family ```
void q_textimageformat_set_font_family(void* self, const char* family);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamily)
///
/// ``` QTextImageFormat* self ```
const char* q_textimageformat_font_family(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamilies)
///
/// ``` QTextImageFormat* self, const char* families[] ```
void q_textimageformat_set_font_families(void* self, const char* families[]);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamilies)
///
/// ``` QTextImageFormat* self ```
QVariant* q_textimageformat_font_families(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleName)
///
/// ``` QTextImageFormat* self, const char* styleName ```
void q_textimageformat_set_font_style_name(void* self, const char* styleName);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleName)
///
/// ``` QTextImageFormat* self ```
QVariant* q_textimageformat_font_style_name(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontPointSize)
///
/// ``` QTextImageFormat* self, double size ```
void q_textimageformat_set_font_point_size(void* self, double size);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontPointSize)
///
/// ``` QTextImageFormat* self ```
double q_textimageformat_font_point_size(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWeight)
///
/// ``` QTextImageFormat* self, int weight ```
void q_textimageformat_set_font_weight(void* self, int weight);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontWeight)
///
/// ``` QTextImageFormat* self ```
int32_t q_textimageformat_font_weight(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontItalic)
///
/// ``` QTextImageFormat* self, bool italic ```
void q_textimageformat_set_font_italic(void* self, bool italic);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontItalic)
///
/// ``` QTextImageFormat* self ```
bool q_textimageformat_font_italic(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontCapitalization)
///
/// ``` QTextImageFormat* self, enum QFont__Capitalization capitalization ```
void q_textimageformat_set_font_capitalization(void* self, int64_t capitalization);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontCapitalization)
///
/// ``` QTextImageFormat* self ```
int64_t q_textimageformat_font_capitalization(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacingType)
///
/// ``` QTextImageFormat* self, enum QFont__SpacingType letterSpacingType ```
void q_textimageformat_set_font_letter_spacing_type(void* self, int64_t letterSpacingType);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacingType)
///
/// ``` QTextImageFormat* self ```
int64_t q_textimageformat_font_letter_spacing_type(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacing)
///
/// ``` QTextImageFormat* self, double spacing ```
void q_textimageformat_set_font_letter_spacing(void* self, double spacing);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacing)
///
/// ``` QTextImageFormat* self ```
double q_textimageformat_font_letter_spacing(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWordSpacing)
///
/// ``` QTextImageFormat* self, double spacing ```
void q_textimageformat_set_font_word_spacing(void* self, double spacing);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontWordSpacing)
///
/// ``` QTextImageFormat* self ```
double q_textimageformat_font_word_spacing(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontUnderline)
///
/// ``` QTextImageFormat* self, bool underline ```
void q_textimageformat_set_font_underline(void* self, bool underline);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontUnderline)
///
/// ``` QTextImageFormat* self ```
bool q_textimageformat_font_underline(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontOverline)
///
/// ``` QTextImageFormat* self, bool overline ```
void q_textimageformat_set_font_overline(void* self, bool overline);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontOverline)
///
/// ``` QTextImageFormat* self ```
bool q_textimageformat_font_overline(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStrikeOut)
///
/// ``` QTextImageFormat* self, bool strikeOut ```
void q_textimageformat_set_font_strike_out(void* self, bool strikeOut);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStrikeOut)
///
/// ``` QTextImageFormat* self ```
bool q_textimageformat_font_strike_out(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineColor)
///
/// ``` QTextImageFormat* self, QColor* color ```
void q_textimageformat_set_underline_color(void* self, void* color);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#underlineColor)
///
/// ``` QTextImageFormat* self ```
QColor* q_textimageformat_underline_color(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFixedPitch)
///
/// ``` QTextImageFormat* self, bool fixedPitch ```
void q_textimageformat_set_font_fixed_pitch(void* self, bool fixedPitch);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFixedPitch)
///
/// ``` QTextImageFormat* self ```
bool q_textimageformat_font_fixed_pitch(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStretch)
///
/// ``` QTextImageFormat* self, int factor ```
void q_textimageformat_set_font_stretch(void* self, int factor);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStretch)
///
/// ``` QTextImageFormat* self ```
int32_t q_textimageformat_font_stretch(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
///
/// ``` QTextImageFormat* self, enum QFont__StyleHint hint ```
void q_textimageformat_set_font_style_hint(void* self, int64_t hint);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleStrategy)
///
/// ``` QTextImageFormat* self, enum QFont__StyleStrategy strategy ```
void q_textimageformat_set_font_style_strategy(void* self, int64_t strategy);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleHint)
///
/// ``` QTextImageFormat* self ```
int64_t q_textimageformat_font_style_hint(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleStrategy)
///
/// ``` QTextImageFormat* self ```
int64_t q_textimageformat_font_style_strategy(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontHintingPreference)
///
/// ``` QTextImageFormat* self, enum QFont__HintingPreference hintingPreference ```
void q_textimageformat_set_font_hinting_preference(void* self, int64_t hintingPreference);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontHintingPreference)
///
/// ``` QTextImageFormat* self ```
int64_t q_textimageformat_font_hinting_preference(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontKerning)
///
/// ``` QTextImageFormat* self, bool enable ```
void q_textimageformat_set_font_kerning(void* self, bool enable);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontKerning)
///
/// ``` QTextImageFormat* self ```
bool q_textimageformat_font_kerning(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineStyle)
///
/// ``` QTextImageFormat* self, enum QTextCharFormat__UnderlineStyle style ```
void q_textimageformat_set_underline_style(void* self, int64_t style);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#underlineStyle)
///
/// ``` QTextImageFormat* self ```
int64_t q_textimageformat_underline_style(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setVerticalAlignment)
///
/// ``` QTextImageFormat* self, enum QTextCharFormat__VerticalAlignment alignment ```
void q_textimageformat_set_vertical_alignment(void* self, int64_t alignment);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#verticalAlignment)
///
/// ``` QTextImageFormat* self ```
int64_t q_textimageformat_vertical_alignment(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTextOutline)
///
/// ``` QTextImageFormat* self, QPen* pen ```
void q_textimageformat_set_text_outline(void* self, void* pen);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#textOutline)
///
/// ``` QTextImageFormat* self ```
QPen* q_textimageformat_text_outline(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setToolTip)
///
/// ``` QTextImageFormat* self, const char* tip ```
void q_textimageformat_set_tool_tip(void* self, const char* tip);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#toolTip)
///
/// ``` QTextImageFormat* self ```
const char* q_textimageformat_tool_tip(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setSuperScriptBaseline)
///
/// ``` QTextImageFormat* self, double baseline ```
void q_textimageformat_set_super_script_baseline(void* self, double baseline);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#superScriptBaseline)
///
/// ``` QTextImageFormat* self ```
double q_textimageformat_super_script_baseline(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setSubScriptBaseline)
///
/// ``` QTextImageFormat* self, double baseline ```
void q_textimageformat_set_sub_script_baseline(void* self, double baseline);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#subScriptBaseline)
///
/// ``` QTextImageFormat* self ```
double q_textimageformat_sub_script_baseline(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setBaselineOffset)
///
/// ``` QTextImageFormat* self, double baseline ```
void q_textimageformat_set_baseline_offset(void* self, double baseline);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#baselineOffset)
///
/// ``` QTextImageFormat* self ```
double q_textimageformat_baseline_offset(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchor)
///
/// ``` QTextImageFormat* self, bool anchor ```
void q_textimageformat_set_anchor(void* self, bool anchor);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#isAnchor)
///
/// ``` QTextImageFormat* self ```
bool q_textimageformat_is_anchor(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorHref)
///
/// ``` QTextImageFormat* self, const char* value ```
void q_textimageformat_set_anchor_href(void* self, const char* value);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#anchorHref)
///
/// ``` QTextImageFormat* self ```
const char* q_textimageformat_anchor_href(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorNames)
///
/// ``` QTextImageFormat* self, const char* names[] ```
void q_textimageformat_set_anchor_names(void* self, const char* names[]);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#anchorNames)
///
/// ``` QTextImageFormat* self ```
const char** q_textimageformat_anchor_names(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellRowSpan)
///
/// ``` QTextImageFormat* self, int tableCellRowSpan ```
void q_textimageformat_set_table_cell_row_span(void* self, int tableCellRowSpan);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellRowSpan)
///
/// ``` QTextImageFormat* self ```
int32_t q_textimageformat_table_cell_row_span(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellColumnSpan)
///
/// ``` QTextImageFormat* self, int tableCellColumnSpan ```
void q_textimageformat_set_table_cell_column_span(void* self, int tableCellColumnSpan);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellColumnSpan)
///
/// ``` QTextImageFormat* self ```
int32_t q_textimageformat_table_cell_column_span(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
///
/// ``` QTextImageFormat* self, QFont* font, enum QTextCharFormat__FontPropertiesInheritanceBehavior behavior ```
void q_textimageformat_set_font2(void* self, void* font, int64_t behavior);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
///
/// ``` QTextImageFormat* self, enum QFont__StyleHint hint, enum QFont__StyleStrategy strategy ```
void q_textimageformat_set_font_style_hint2(void* self, int64_t hint, int64_t strategy);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator=)
///
/// ``` QTextImageFormat* self, QTextFormat* rhs ```
void q_textimageformat_operator_assign(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#swap)
///
/// ``` QTextImageFormat* self, QTextFormat* other ```
void q_textimageformat_swap(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#merge)
///
/// ``` QTextImageFormat* self, QTextFormat* other ```
void q_textimageformat_merge(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
///
/// ``` QTextImageFormat* self ```
bool q_textimageformat_is_empty(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#type)
///
/// ``` QTextImageFormat* self ```
int32_t q_textimageformat_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
///
/// ``` QTextImageFormat* self ```
int32_t q_textimageformat_object_index(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
///
/// ``` QTextImageFormat* self, int object ```
void q_textimageformat_set_object_index(void* self, int object);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#property)
///
/// ``` QTextImageFormat* self, int propertyId ```
QVariant* q_textimageformat_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// ``` QTextImageFormat* self, int propertyId, QVariant* value ```
void q_textimageformat_set_property(void* self, int propertyId, void* value);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
///
/// ``` QTextImageFormat* self, int propertyId ```
void q_textimageformat_clear_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
///
/// ``` QTextImageFormat* self, int propertyId ```
bool q_textimageformat_has_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
///
/// ``` QTextImageFormat* self, int propertyId ```
bool q_textimageformat_bool_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
///
/// ``` QTextImageFormat* self, int propertyId ```
int32_t q_textimageformat_int_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
///
/// ``` QTextImageFormat* self, int propertyId ```
double q_textimageformat_double_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
///
/// ``` QTextImageFormat* self, int propertyId ```
const char* q_textimageformat_string_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
///
/// ``` QTextImageFormat* self, int propertyId ```
QColor* q_textimageformat_color_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
///
/// ``` QTextImageFormat* self, int propertyId ```
QPen* q_textimageformat_pen_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
///
/// ``` QTextImageFormat* self, int propertyId ```
QBrush* q_textimageformat_brush_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
///
/// ``` QTextImageFormat* self, int propertyId ```
QTextLength* q_textimageformat_length_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
///
/// ``` QTextImageFormat* self, int propertyId ```
libqt_list /* of QTextLength* */ q_textimageformat_length_vector_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// ``` QTextImageFormat* self, int propertyId, libqt_list /* of QTextLength* */ lengths ```
void q_textimageformat_set_property2(void* self, int propertyId, libqt_list lengths);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#properties)
///
/// ``` QTextImageFormat* self ```
libqt_map /* of int to QVariant* */ q_textimageformat_properties(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
///
/// ``` QTextImageFormat* self ```
int32_t q_textimageformat_property_count(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
///
/// ``` QTextImageFormat* self, int typeVal ```
void q_textimageformat_set_object_type(void* self, int typeVal);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectType)
///
/// ``` QTextImageFormat* self ```
int32_t q_textimageformat_object_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
///
/// ``` QTextImageFormat* self ```
bool q_textimageformat_is_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
///
/// ``` QTextImageFormat* self ```
bool q_textimageformat_is_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
///
/// ``` QTextImageFormat* self ```
bool q_textimageformat_is_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
///
/// ``` QTextImageFormat* self ```
bool q_textimageformat_is_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
///
/// ``` QTextImageFormat* self ```
bool q_textimageformat_is_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
///
/// ``` QTextImageFormat* self ```
bool q_textimageformat_is_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
///
/// ``` QTextImageFormat* self ```
bool q_textimageformat_is_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
///
/// ``` QTextImageFormat* self ```
QTextBlockFormat* q_textimageformat_to_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
///
/// ``` QTextImageFormat* self ```
QTextCharFormat* q_textimageformat_to_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
///
/// ``` QTextImageFormat* self ```
QTextListFormat* q_textimageformat_to_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
///
/// ``` QTextImageFormat* self ```
QTextTableFormat* q_textimageformat_to_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
///
/// ``` QTextImageFormat* self ```
QTextFrameFormat* q_textimageformat_to_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
///
/// ``` QTextImageFormat* self ```
QTextImageFormat* q_textimageformat_to_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
///
/// ``` QTextImageFormat* self ```
QTextTableCellFormat* q_textimageformat_to_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator==)
///
/// ``` QTextImageFormat* self, QTextFormat* rhs ```
bool q_textimageformat_operator_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator!=)
///
/// ``` QTextImageFormat* self, QTextFormat* rhs ```
bool q_textimageformat_operator_not_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator QVariant)
///
/// ``` QTextImageFormat* self ```
QVariant* q_textimageformat_to_q_variant(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
///
/// ``` QTextImageFormat* self, enum Qt__LayoutDirection direction ```
void q_textimageformat_set_layout_direction(void* self, int64_t direction);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
///
/// ``` QTextImageFormat* self ```
int64_t q_textimageformat_layout_direction(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
///
/// ``` QTextImageFormat* self, QBrush* brush ```
void q_textimageformat_set_background(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#background)
///
/// ``` QTextImageFormat* self ```
QBrush* q_textimageformat_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
///
/// ``` QTextImageFormat* self ```
void q_textimageformat_clear_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
///
/// ``` QTextImageFormat* self, QBrush* brush ```
void q_textimageformat_set_foreground(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#foreground)
///
/// ``` QTextImageFormat* self ```
QBrush* q_textimageformat_foreground(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
///
/// ``` QTextImageFormat* self ```
void q_textimageformat_clear_foreground(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#dtor.QTextImageFormat)
///
/// Delete this object from C++ memory.
///
/// ``` QTextImageFormat* self ```
void q_textimageformat_delete(void* self);

/// https://doc.qt.io/qt-6/qtextframeformat.html

/// q_textframeformat_new constructs a new QTextFrameFormat object.
///
///
QTextFrameFormat* q_textframeformat_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#isValid)
///
/// ``` QTextFrameFormat* self ```
bool q_textframeformat_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setPosition)
///
/// ``` QTextFrameFormat* self, enum QTextFrameFormat__Position f ```
void q_textframeformat_set_position(void* self, int64_t f);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#position)
///
/// ``` QTextFrameFormat* self ```
int64_t q_textframeformat_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setBorder)
///
/// ``` QTextFrameFormat* self, double border ```
void q_textframeformat_set_border(void* self, double border);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#border)
///
/// ``` QTextFrameFormat* self ```
double q_textframeformat_border(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setBorderBrush)
///
/// ``` QTextFrameFormat* self, QBrush* brush ```
void q_textframeformat_set_border_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#borderBrush)
///
/// ``` QTextFrameFormat* self ```
QBrush* q_textframeformat_border_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setBorderStyle)
///
/// ``` QTextFrameFormat* self, enum QTextFrameFormat__BorderStyle style ```
void q_textframeformat_set_border_style(void* self, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#borderStyle)
///
/// ``` QTextFrameFormat* self ```
int64_t q_textframeformat_border_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setMargin)
///
/// ``` QTextFrameFormat* self, double margin ```
void q_textframeformat_set_margin(void* self, double margin);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#margin)
///
/// ``` QTextFrameFormat* self ```
double q_textframeformat_margin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setTopMargin)
///
/// ``` QTextFrameFormat* self, double margin ```
void q_textframeformat_set_top_margin(void* self, double margin);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#topMargin)
///
/// ``` QTextFrameFormat* self ```
double q_textframeformat_top_margin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setBottomMargin)
///
/// ``` QTextFrameFormat* self, double margin ```
void q_textframeformat_set_bottom_margin(void* self, double margin);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#bottomMargin)
///
/// ``` QTextFrameFormat* self ```
double q_textframeformat_bottom_margin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setLeftMargin)
///
/// ``` QTextFrameFormat* self, double margin ```
void q_textframeformat_set_left_margin(void* self, double margin);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#leftMargin)
///
/// ``` QTextFrameFormat* self ```
double q_textframeformat_left_margin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setRightMargin)
///
/// ``` QTextFrameFormat* self, double margin ```
void q_textframeformat_set_right_margin(void* self, double margin);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#rightMargin)
///
/// ``` QTextFrameFormat* self ```
double q_textframeformat_right_margin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setPadding)
///
/// ``` QTextFrameFormat* self, double padding ```
void q_textframeformat_set_padding(void* self, double padding);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#padding)
///
/// ``` QTextFrameFormat* self ```
double q_textframeformat_padding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setWidth)
///
/// ``` QTextFrameFormat* self, double width ```
void q_textframeformat_set_width(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setWidth)
///
/// ``` QTextFrameFormat* self, QTextLength* length ```
void q_textframeformat_set_width2(void* self, void* length);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#width)
///
/// ``` QTextFrameFormat* self ```
QTextLength* q_textframeformat_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setHeight)
///
/// ``` QTextFrameFormat* self, double height ```
void q_textframeformat_set_height(void* self, double height);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setHeight)
///
/// ``` QTextFrameFormat* self, QTextLength* height ```
void q_textframeformat_set_height2(void* self, void* height);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#height)
///
/// ``` QTextFrameFormat* self ```
QTextLength* q_textframeformat_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setPageBreakPolicy)
///
/// ``` QTextFrameFormat* self, int flags ```
void q_textframeformat_set_page_break_policy(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#pageBreakPolicy)
///
/// ``` QTextFrameFormat* self ```
int64_t q_textframeformat_page_break_policy(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator=)
///
/// ``` QTextFrameFormat* self, QTextFormat* rhs ```
void q_textframeformat_operator_assign(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#swap)
///
/// ``` QTextFrameFormat* self, QTextFormat* other ```
void q_textframeformat_swap(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#merge)
///
/// ``` QTextFrameFormat* self, QTextFormat* other ```
void q_textframeformat_merge(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
///
/// ``` QTextFrameFormat* self ```
bool q_textframeformat_is_empty(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#type)
///
/// ``` QTextFrameFormat* self ```
int32_t q_textframeformat_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
///
/// ``` QTextFrameFormat* self ```
int32_t q_textframeformat_object_index(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
///
/// ``` QTextFrameFormat* self, int object ```
void q_textframeformat_set_object_index(void* self, int object);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#property)
///
/// ``` QTextFrameFormat* self, int propertyId ```
QVariant* q_textframeformat_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// ``` QTextFrameFormat* self, int propertyId, QVariant* value ```
void q_textframeformat_set_property(void* self, int propertyId, void* value);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
///
/// ``` QTextFrameFormat* self, int propertyId ```
void q_textframeformat_clear_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
///
/// ``` QTextFrameFormat* self, int propertyId ```
bool q_textframeformat_has_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
///
/// ``` QTextFrameFormat* self, int propertyId ```
bool q_textframeformat_bool_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
///
/// ``` QTextFrameFormat* self, int propertyId ```
int32_t q_textframeformat_int_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
///
/// ``` QTextFrameFormat* self, int propertyId ```
double q_textframeformat_double_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
///
/// ``` QTextFrameFormat* self, int propertyId ```
const char* q_textframeformat_string_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
///
/// ``` QTextFrameFormat* self, int propertyId ```
QColor* q_textframeformat_color_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
///
/// ``` QTextFrameFormat* self, int propertyId ```
QPen* q_textframeformat_pen_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
///
/// ``` QTextFrameFormat* self, int propertyId ```
QBrush* q_textframeformat_brush_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
///
/// ``` QTextFrameFormat* self, int propertyId ```
QTextLength* q_textframeformat_length_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
///
/// ``` QTextFrameFormat* self, int propertyId ```
libqt_list /* of QTextLength* */ q_textframeformat_length_vector_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// ``` QTextFrameFormat* self, int propertyId, libqt_list /* of QTextLength* */ lengths ```
void q_textframeformat_set_property2(void* self, int propertyId, libqt_list lengths);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#properties)
///
/// ``` QTextFrameFormat* self ```
libqt_map /* of int to QVariant* */ q_textframeformat_properties(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
///
/// ``` QTextFrameFormat* self ```
int32_t q_textframeformat_property_count(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
///
/// ``` QTextFrameFormat* self, int typeVal ```
void q_textframeformat_set_object_type(void* self, int typeVal);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectType)
///
/// ``` QTextFrameFormat* self ```
int32_t q_textframeformat_object_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
///
/// ``` QTextFrameFormat* self ```
bool q_textframeformat_is_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
///
/// ``` QTextFrameFormat* self ```
bool q_textframeformat_is_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
///
/// ``` QTextFrameFormat* self ```
bool q_textframeformat_is_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
///
/// ``` QTextFrameFormat* self ```
bool q_textframeformat_is_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
///
/// ``` QTextFrameFormat* self ```
bool q_textframeformat_is_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
///
/// ``` QTextFrameFormat* self ```
bool q_textframeformat_is_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
///
/// ``` QTextFrameFormat* self ```
bool q_textframeformat_is_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
///
/// ``` QTextFrameFormat* self ```
QTextBlockFormat* q_textframeformat_to_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
///
/// ``` QTextFrameFormat* self ```
QTextCharFormat* q_textframeformat_to_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
///
/// ``` QTextFrameFormat* self ```
QTextListFormat* q_textframeformat_to_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
///
/// ``` QTextFrameFormat* self ```
QTextTableFormat* q_textframeformat_to_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
///
/// ``` QTextFrameFormat* self ```
QTextFrameFormat* q_textframeformat_to_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
///
/// ``` QTextFrameFormat* self ```
QTextImageFormat* q_textframeformat_to_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
///
/// ``` QTextFrameFormat* self ```
QTextTableCellFormat* q_textframeformat_to_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator==)
///
/// ``` QTextFrameFormat* self, QTextFormat* rhs ```
bool q_textframeformat_operator_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator!=)
///
/// ``` QTextFrameFormat* self, QTextFormat* rhs ```
bool q_textframeformat_operator_not_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator QVariant)
///
/// ``` QTextFrameFormat* self ```
QVariant* q_textframeformat_to_q_variant(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
///
/// ``` QTextFrameFormat* self, enum Qt__LayoutDirection direction ```
void q_textframeformat_set_layout_direction(void* self, int64_t direction);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
///
/// ``` QTextFrameFormat* self ```
int64_t q_textframeformat_layout_direction(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
///
/// ``` QTextFrameFormat* self, QBrush* brush ```
void q_textframeformat_set_background(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#background)
///
/// ``` QTextFrameFormat* self ```
QBrush* q_textframeformat_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
///
/// ``` QTextFrameFormat* self ```
void q_textframeformat_clear_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
///
/// ``` QTextFrameFormat* self, QBrush* brush ```
void q_textframeformat_set_foreground(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#foreground)
///
/// ``` QTextFrameFormat* self ```
QBrush* q_textframeformat_foreground(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
///
/// ``` QTextFrameFormat* self ```
void q_textframeformat_clear_foreground(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#dtor.QTextFrameFormat)
///
/// Delete this object from C++ memory.
///
/// ``` QTextFrameFormat* self ```
void q_textframeformat_delete(void* self);

/// https://doc.qt.io/qt-6/qtexttableformat.html

/// q_texttableformat_new constructs a new QTextTableFormat object.
///
///
QTextTableFormat* q_texttableformat_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#isValid)
///
/// ``` QTextTableFormat* self ```
bool q_texttableformat_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#columns)
///
/// ``` QTextTableFormat* self ```
int32_t q_texttableformat_columns(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#setColumns)
///
/// ``` QTextTableFormat* self, int columns ```
void q_texttableformat_set_columns(void* self, int columns);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#setColumnWidthConstraints)
///
/// ``` QTextTableFormat* self, libqt_list /* of QTextLength* */ constraints ```
void q_texttableformat_set_column_width_constraints(void* self, libqt_list constraints);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#columnWidthConstraints)
///
/// ``` QTextTableFormat* self ```
libqt_list /* of QTextLength* */ q_texttableformat_column_width_constraints(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#clearColumnWidthConstraints)
///
/// ``` QTextTableFormat* self ```
void q_texttableformat_clear_column_width_constraints(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#cellSpacing)
///
/// ``` QTextTableFormat* self ```
double q_texttableformat_cell_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#setCellSpacing)
///
/// ``` QTextTableFormat* self, double spacing ```
void q_texttableformat_set_cell_spacing(void* self, double spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#cellPadding)
///
/// ``` QTextTableFormat* self ```
double q_texttableformat_cell_padding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#setCellPadding)
///
/// ``` QTextTableFormat* self, double padding ```
void q_texttableformat_set_cell_padding(void* self, double padding);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#setAlignment)
///
/// ``` QTextTableFormat* self, int alignment ```
void q_texttableformat_set_alignment(void* self, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#alignment)
///
/// ``` QTextTableFormat* self ```
int64_t q_texttableformat_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#setHeaderRowCount)
///
/// ``` QTextTableFormat* self, int count ```
void q_texttableformat_set_header_row_count(void* self, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#headerRowCount)
///
/// ``` QTextTableFormat* self ```
int32_t q_texttableformat_header_row_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#setBorderCollapse)
///
/// ``` QTextTableFormat* self, bool borderCollapse ```
void q_texttableformat_set_border_collapse(void* self, bool borderCollapse);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#borderCollapse)
///
/// ``` QTextTableFormat* self ```
bool q_texttableformat_border_collapse(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setPosition)
///
/// ``` QTextTableFormat* self, enum QTextFrameFormat__Position f ```
void q_texttableformat_set_position(void* self, int64_t f);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#position)
///
/// ``` QTextTableFormat* self ```
int64_t q_texttableformat_position(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setBorder)
///
/// ``` QTextTableFormat* self, double border ```
void q_texttableformat_set_border(void* self, double border);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#border)
///
/// ``` QTextTableFormat* self ```
double q_texttableformat_border(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setBorderBrush)
///
/// ``` QTextTableFormat* self, QBrush* brush ```
void q_texttableformat_set_border_brush(void* self, void* brush);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#borderBrush)
///
/// ``` QTextTableFormat* self ```
QBrush* q_texttableformat_border_brush(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setBorderStyle)
///
/// ``` QTextTableFormat* self, enum QTextFrameFormat__BorderStyle style ```
void q_texttableformat_set_border_style(void* self, int64_t style);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#borderStyle)
///
/// ``` QTextTableFormat* self ```
int64_t q_texttableformat_border_style(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setMargin)
///
/// ``` QTextTableFormat* self, double margin ```
void q_texttableformat_set_margin(void* self, double margin);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#margin)
///
/// ``` QTextTableFormat* self ```
double q_texttableformat_margin(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setTopMargin)
///
/// ``` QTextTableFormat* self, double margin ```
void q_texttableformat_set_top_margin(void* self, double margin);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#topMargin)
///
/// ``` QTextTableFormat* self ```
double q_texttableformat_top_margin(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setBottomMargin)
///
/// ``` QTextTableFormat* self, double margin ```
void q_texttableformat_set_bottom_margin(void* self, double margin);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#bottomMargin)
///
/// ``` QTextTableFormat* self ```
double q_texttableformat_bottom_margin(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setLeftMargin)
///
/// ``` QTextTableFormat* self, double margin ```
void q_texttableformat_set_left_margin(void* self, double margin);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#leftMargin)
///
/// ``` QTextTableFormat* self ```
double q_texttableformat_left_margin(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setRightMargin)
///
/// ``` QTextTableFormat* self, double margin ```
void q_texttableformat_set_right_margin(void* self, double margin);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#rightMargin)
///
/// ``` QTextTableFormat* self ```
double q_texttableformat_right_margin(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setPadding)
///
/// ``` QTextTableFormat* self, double padding ```
void q_texttableformat_set_padding(void* self, double padding);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#padding)
///
/// ``` QTextTableFormat* self ```
double q_texttableformat_padding(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setWidth)
///
/// ``` QTextTableFormat* self, double width ```
void q_texttableformat_set_width(void* self, double width);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setWidth)
///
/// ``` QTextTableFormat* self, QTextLength* length ```
void q_texttableformat_set_width2(void* self, void* length);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#width)
///
/// ``` QTextTableFormat* self ```
QTextLength* q_texttableformat_width(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setHeight)
///
/// ``` QTextTableFormat* self, double height ```
void q_texttableformat_set_height(void* self, double height);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setHeight)
///
/// ``` QTextTableFormat* self, QTextLength* height ```
void q_texttableformat_set_height2(void* self, void* height);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#height)
///
/// ``` QTextTableFormat* self ```
QTextLength* q_texttableformat_height(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setPageBreakPolicy)
///
/// ``` QTextTableFormat* self, int flags ```
void q_texttableformat_set_page_break_policy(void* self, int64_t flags);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#pageBreakPolicy)
///
/// ``` QTextTableFormat* self ```
int64_t q_texttableformat_page_break_policy(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator=)
///
/// ``` QTextTableFormat* self, QTextFormat* rhs ```
void q_texttableformat_operator_assign(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#swap)
///
/// ``` QTextTableFormat* self, QTextFormat* other ```
void q_texttableformat_swap(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#merge)
///
/// ``` QTextTableFormat* self, QTextFormat* other ```
void q_texttableformat_merge(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
///
/// ``` QTextTableFormat* self ```
bool q_texttableformat_is_empty(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#type)
///
/// ``` QTextTableFormat* self ```
int32_t q_texttableformat_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
///
/// ``` QTextTableFormat* self ```
int32_t q_texttableformat_object_index(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
///
/// ``` QTextTableFormat* self, int object ```
void q_texttableformat_set_object_index(void* self, int object);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#property)
///
/// ``` QTextTableFormat* self, int propertyId ```
QVariant* q_texttableformat_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// ``` QTextTableFormat* self, int propertyId, QVariant* value ```
void q_texttableformat_set_property(void* self, int propertyId, void* value);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
///
/// ``` QTextTableFormat* self, int propertyId ```
void q_texttableformat_clear_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
///
/// ``` QTextTableFormat* self, int propertyId ```
bool q_texttableformat_has_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
///
/// ``` QTextTableFormat* self, int propertyId ```
bool q_texttableformat_bool_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
///
/// ``` QTextTableFormat* self, int propertyId ```
int32_t q_texttableformat_int_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
///
/// ``` QTextTableFormat* self, int propertyId ```
double q_texttableformat_double_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
///
/// ``` QTextTableFormat* self, int propertyId ```
const char* q_texttableformat_string_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
///
/// ``` QTextTableFormat* self, int propertyId ```
QColor* q_texttableformat_color_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
///
/// ``` QTextTableFormat* self, int propertyId ```
QPen* q_texttableformat_pen_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
///
/// ``` QTextTableFormat* self, int propertyId ```
QBrush* q_texttableformat_brush_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
///
/// ``` QTextTableFormat* self, int propertyId ```
QTextLength* q_texttableformat_length_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
///
/// ``` QTextTableFormat* self, int propertyId ```
libqt_list /* of QTextLength* */ q_texttableformat_length_vector_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// ``` QTextTableFormat* self, int propertyId, libqt_list /* of QTextLength* */ lengths ```
void q_texttableformat_set_property2(void* self, int propertyId, libqt_list lengths);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#properties)
///
/// ``` QTextTableFormat* self ```
libqt_map /* of int to QVariant* */ q_texttableformat_properties(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
///
/// ``` QTextTableFormat* self ```
int32_t q_texttableformat_property_count(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
///
/// ``` QTextTableFormat* self, int typeVal ```
void q_texttableformat_set_object_type(void* self, int typeVal);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectType)
///
/// ``` QTextTableFormat* self ```
int32_t q_texttableformat_object_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
///
/// ``` QTextTableFormat* self ```
bool q_texttableformat_is_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
///
/// ``` QTextTableFormat* self ```
bool q_texttableformat_is_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
///
/// ``` QTextTableFormat* self ```
bool q_texttableformat_is_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
///
/// ``` QTextTableFormat* self ```
bool q_texttableformat_is_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
///
/// ``` QTextTableFormat* self ```
bool q_texttableformat_is_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
///
/// ``` QTextTableFormat* self ```
bool q_texttableformat_is_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
///
/// ``` QTextTableFormat* self ```
bool q_texttableformat_is_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
///
/// ``` QTextTableFormat* self ```
QTextBlockFormat* q_texttableformat_to_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
///
/// ``` QTextTableFormat* self ```
QTextCharFormat* q_texttableformat_to_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
///
/// ``` QTextTableFormat* self ```
QTextListFormat* q_texttableformat_to_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
///
/// ``` QTextTableFormat* self ```
QTextTableFormat* q_texttableformat_to_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
///
/// ``` QTextTableFormat* self ```
QTextFrameFormat* q_texttableformat_to_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
///
/// ``` QTextTableFormat* self ```
QTextImageFormat* q_texttableformat_to_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
///
/// ``` QTextTableFormat* self ```
QTextTableCellFormat* q_texttableformat_to_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator==)
///
/// ``` QTextTableFormat* self, QTextFormat* rhs ```
bool q_texttableformat_operator_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator!=)
///
/// ``` QTextTableFormat* self, QTextFormat* rhs ```
bool q_texttableformat_operator_not_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator QVariant)
///
/// ``` QTextTableFormat* self ```
QVariant* q_texttableformat_to_q_variant(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
///
/// ``` QTextTableFormat* self, enum Qt__LayoutDirection direction ```
void q_texttableformat_set_layout_direction(void* self, int64_t direction);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
///
/// ``` QTextTableFormat* self ```
int64_t q_texttableformat_layout_direction(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
///
/// ``` QTextTableFormat* self, QBrush* brush ```
void q_texttableformat_set_background(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#background)
///
/// ``` QTextTableFormat* self ```
QBrush* q_texttableformat_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
///
/// ``` QTextTableFormat* self ```
void q_texttableformat_clear_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
///
/// ``` QTextTableFormat* self, QBrush* brush ```
void q_texttableformat_set_foreground(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#foreground)
///
/// ``` QTextTableFormat* self ```
QBrush* q_texttableformat_foreground(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
///
/// ``` QTextTableFormat* self ```
void q_texttableformat_clear_foreground(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#dtor.QTextTableFormat)
///
/// Delete this object from C++ memory.
///
/// ``` QTextTableFormat* self ```
void q_texttableformat_delete(void* self);

/// https://doc.qt.io/qt-6/qtexttablecellformat.html

/// q_texttablecellformat_new constructs a new QTextTableCellFormat object.
///
///
QTextTableCellFormat* q_texttablecellformat_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#isValid)
///
/// ``` QTextTableCellFormat* self ```
bool q_texttablecellformat_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setTopPadding)
///
/// ``` QTextTableCellFormat* self, double padding ```
void q_texttablecellformat_set_top_padding(void* self, double padding);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#topPadding)
///
/// ``` QTextTableCellFormat* self ```
double q_texttablecellformat_top_padding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBottomPadding)
///
/// ``` QTextTableCellFormat* self, double padding ```
void q_texttablecellformat_set_bottom_padding(void* self, double padding);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#bottomPadding)
///
/// ``` QTextTableCellFormat* self ```
double q_texttablecellformat_bottom_padding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setLeftPadding)
///
/// ``` QTextTableCellFormat* self, double padding ```
void q_texttablecellformat_set_left_padding(void* self, double padding);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#leftPadding)
///
/// ``` QTextTableCellFormat* self ```
double q_texttablecellformat_left_padding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setRightPadding)
///
/// ``` QTextTableCellFormat* self, double padding ```
void q_texttablecellformat_set_right_padding(void* self, double padding);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#rightPadding)
///
/// ``` QTextTableCellFormat* self ```
double q_texttablecellformat_right_padding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setPadding)
///
/// ``` QTextTableCellFormat* self, double padding ```
void q_texttablecellformat_set_padding(void* self, double padding);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setTopBorder)
///
/// ``` QTextTableCellFormat* self, double width ```
void q_texttablecellformat_set_top_border(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#topBorder)
///
/// ``` QTextTableCellFormat* self ```
double q_texttablecellformat_top_border(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBottomBorder)
///
/// ``` QTextTableCellFormat* self, double width ```
void q_texttablecellformat_set_bottom_border(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#bottomBorder)
///
/// ``` QTextTableCellFormat* self ```
double q_texttablecellformat_bottom_border(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setLeftBorder)
///
/// ``` QTextTableCellFormat* self, double width ```
void q_texttablecellformat_set_left_border(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#leftBorder)
///
/// ``` QTextTableCellFormat* self ```
double q_texttablecellformat_left_border(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setRightBorder)
///
/// ``` QTextTableCellFormat* self, double width ```
void q_texttablecellformat_set_right_border(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#rightBorder)
///
/// ``` QTextTableCellFormat* self ```
double q_texttablecellformat_right_border(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBorder)
///
/// ``` QTextTableCellFormat* self, double width ```
void q_texttablecellformat_set_border(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setTopBorderStyle)
///
/// ``` QTextTableCellFormat* self, enum QTextFrameFormat__BorderStyle style ```
void q_texttablecellformat_set_top_border_style(void* self, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#topBorderStyle)
///
/// ``` QTextTableCellFormat* self ```
int64_t q_texttablecellformat_top_border_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBottomBorderStyle)
///
/// ``` QTextTableCellFormat* self, enum QTextFrameFormat__BorderStyle style ```
void q_texttablecellformat_set_bottom_border_style(void* self, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#bottomBorderStyle)
///
/// ``` QTextTableCellFormat* self ```
int64_t q_texttablecellformat_bottom_border_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setLeftBorderStyle)
///
/// ``` QTextTableCellFormat* self, enum QTextFrameFormat__BorderStyle style ```
void q_texttablecellformat_set_left_border_style(void* self, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#leftBorderStyle)
///
/// ``` QTextTableCellFormat* self ```
int64_t q_texttablecellformat_left_border_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setRightBorderStyle)
///
/// ``` QTextTableCellFormat* self, enum QTextFrameFormat__BorderStyle style ```
void q_texttablecellformat_set_right_border_style(void* self, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#rightBorderStyle)
///
/// ``` QTextTableCellFormat* self ```
int64_t q_texttablecellformat_right_border_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBorderStyle)
///
/// ``` QTextTableCellFormat* self, enum QTextFrameFormat__BorderStyle style ```
void q_texttablecellformat_set_border_style(void* self, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setTopBorderBrush)
///
/// ``` QTextTableCellFormat* self, QBrush* brush ```
void q_texttablecellformat_set_top_border_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#topBorderBrush)
///
/// ``` QTextTableCellFormat* self ```
QBrush* q_texttablecellformat_top_border_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBottomBorderBrush)
///
/// ``` QTextTableCellFormat* self, QBrush* brush ```
void q_texttablecellformat_set_bottom_border_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#bottomBorderBrush)
///
/// ``` QTextTableCellFormat* self ```
QBrush* q_texttablecellformat_bottom_border_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setLeftBorderBrush)
///
/// ``` QTextTableCellFormat* self, QBrush* brush ```
void q_texttablecellformat_set_left_border_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#leftBorderBrush)
///
/// ``` QTextTableCellFormat* self ```
QBrush* q_texttablecellformat_left_border_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setRightBorderBrush)
///
/// ``` QTextTableCellFormat* self, QBrush* brush ```
void q_texttablecellformat_set_right_border_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#rightBorderBrush)
///
/// ``` QTextTableCellFormat* self ```
QBrush* q_texttablecellformat_right_border_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBorderBrush)
///
/// ``` QTextTableCellFormat* self, QBrush* brush ```
void q_texttablecellformat_set_border_brush(void* self, void* brush);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
///
/// ``` QTextTableCellFormat* self, QFont* font ```
void q_texttablecellformat_set_font(void* self, void* font);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#font)
///
/// ``` QTextTableCellFormat* self ```
QFont* q_texttablecellformat_font(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamily)
///
/// ``` QTextTableCellFormat* self, const char* family ```
void q_texttablecellformat_set_font_family(void* self, const char* family);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamily)
///
/// ``` QTextTableCellFormat* self ```
const char* q_texttablecellformat_font_family(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamilies)
///
/// ``` QTextTableCellFormat* self, const char* families[] ```
void q_texttablecellformat_set_font_families(void* self, const char* families[]);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamilies)
///
/// ``` QTextTableCellFormat* self ```
QVariant* q_texttablecellformat_font_families(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleName)
///
/// ``` QTextTableCellFormat* self, const char* styleName ```
void q_texttablecellformat_set_font_style_name(void* self, const char* styleName);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleName)
///
/// ``` QTextTableCellFormat* self ```
QVariant* q_texttablecellformat_font_style_name(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontPointSize)
///
/// ``` QTextTableCellFormat* self, double size ```
void q_texttablecellformat_set_font_point_size(void* self, double size);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontPointSize)
///
/// ``` QTextTableCellFormat* self ```
double q_texttablecellformat_font_point_size(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWeight)
///
/// ``` QTextTableCellFormat* self, int weight ```
void q_texttablecellformat_set_font_weight(void* self, int weight);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontWeight)
///
/// ``` QTextTableCellFormat* self ```
int32_t q_texttablecellformat_font_weight(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontItalic)
///
/// ``` QTextTableCellFormat* self, bool italic ```
void q_texttablecellformat_set_font_italic(void* self, bool italic);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontItalic)
///
/// ``` QTextTableCellFormat* self ```
bool q_texttablecellformat_font_italic(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontCapitalization)
///
/// ``` QTextTableCellFormat* self, enum QFont__Capitalization capitalization ```
void q_texttablecellformat_set_font_capitalization(void* self, int64_t capitalization);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontCapitalization)
///
/// ``` QTextTableCellFormat* self ```
int64_t q_texttablecellformat_font_capitalization(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacingType)
///
/// ``` QTextTableCellFormat* self, enum QFont__SpacingType letterSpacingType ```
void q_texttablecellformat_set_font_letter_spacing_type(void* self, int64_t letterSpacingType);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacingType)
///
/// ``` QTextTableCellFormat* self ```
int64_t q_texttablecellformat_font_letter_spacing_type(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacing)
///
/// ``` QTextTableCellFormat* self, double spacing ```
void q_texttablecellformat_set_font_letter_spacing(void* self, double spacing);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacing)
///
/// ``` QTextTableCellFormat* self ```
double q_texttablecellformat_font_letter_spacing(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWordSpacing)
///
/// ``` QTextTableCellFormat* self, double spacing ```
void q_texttablecellformat_set_font_word_spacing(void* self, double spacing);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontWordSpacing)
///
/// ``` QTextTableCellFormat* self ```
double q_texttablecellformat_font_word_spacing(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontUnderline)
///
/// ``` QTextTableCellFormat* self, bool underline ```
void q_texttablecellformat_set_font_underline(void* self, bool underline);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontUnderline)
///
/// ``` QTextTableCellFormat* self ```
bool q_texttablecellformat_font_underline(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontOverline)
///
/// ``` QTextTableCellFormat* self, bool overline ```
void q_texttablecellformat_set_font_overline(void* self, bool overline);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontOverline)
///
/// ``` QTextTableCellFormat* self ```
bool q_texttablecellformat_font_overline(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStrikeOut)
///
/// ``` QTextTableCellFormat* self, bool strikeOut ```
void q_texttablecellformat_set_font_strike_out(void* self, bool strikeOut);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStrikeOut)
///
/// ``` QTextTableCellFormat* self ```
bool q_texttablecellformat_font_strike_out(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineColor)
///
/// ``` QTextTableCellFormat* self, QColor* color ```
void q_texttablecellformat_set_underline_color(void* self, void* color);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#underlineColor)
///
/// ``` QTextTableCellFormat* self ```
QColor* q_texttablecellformat_underline_color(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFixedPitch)
///
/// ``` QTextTableCellFormat* self, bool fixedPitch ```
void q_texttablecellformat_set_font_fixed_pitch(void* self, bool fixedPitch);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFixedPitch)
///
/// ``` QTextTableCellFormat* self ```
bool q_texttablecellformat_font_fixed_pitch(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStretch)
///
/// ``` QTextTableCellFormat* self, int factor ```
void q_texttablecellformat_set_font_stretch(void* self, int factor);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStretch)
///
/// ``` QTextTableCellFormat* self ```
int32_t q_texttablecellformat_font_stretch(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
///
/// ``` QTextTableCellFormat* self, enum QFont__StyleHint hint ```
void q_texttablecellformat_set_font_style_hint(void* self, int64_t hint);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleStrategy)
///
/// ``` QTextTableCellFormat* self, enum QFont__StyleStrategy strategy ```
void q_texttablecellformat_set_font_style_strategy(void* self, int64_t strategy);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleHint)
///
/// ``` QTextTableCellFormat* self ```
int64_t q_texttablecellformat_font_style_hint(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleStrategy)
///
/// ``` QTextTableCellFormat* self ```
int64_t q_texttablecellformat_font_style_strategy(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontHintingPreference)
///
/// ``` QTextTableCellFormat* self, enum QFont__HintingPreference hintingPreference ```
void q_texttablecellformat_set_font_hinting_preference(void* self, int64_t hintingPreference);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontHintingPreference)
///
/// ``` QTextTableCellFormat* self ```
int64_t q_texttablecellformat_font_hinting_preference(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontKerning)
///
/// ``` QTextTableCellFormat* self, bool enable ```
void q_texttablecellformat_set_font_kerning(void* self, bool enable);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontKerning)
///
/// ``` QTextTableCellFormat* self ```
bool q_texttablecellformat_font_kerning(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineStyle)
///
/// ``` QTextTableCellFormat* self, enum QTextCharFormat__UnderlineStyle style ```
void q_texttablecellformat_set_underline_style(void* self, int64_t style);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#underlineStyle)
///
/// ``` QTextTableCellFormat* self ```
int64_t q_texttablecellformat_underline_style(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setVerticalAlignment)
///
/// ``` QTextTableCellFormat* self, enum QTextCharFormat__VerticalAlignment alignment ```
void q_texttablecellformat_set_vertical_alignment(void* self, int64_t alignment);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#verticalAlignment)
///
/// ``` QTextTableCellFormat* self ```
int64_t q_texttablecellformat_vertical_alignment(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTextOutline)
///
/// ``` QTextTableCellFormat* self, QPen* pen ```
void q_texttablecellformat_set_text_outline(void* self, void* pen);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#textOutline)
///
/// ``` QTextTableCellFormat* self ```
QPen* q_texttablecellformat_text_outline(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setToolTip)
///
/// ``` QTextTableCellFormat* self, const char* tip ```
void q_texttablecellformat_set_tool_tip(void* self, const char* tip);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#toolTip)
///
/// ``` QTextTableCellFormat* self ```
const char* q_texttablecellformat_tool_tip(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setSuperScriptBaseline)
///
/// ``` QTextTableCellFormat* self, double baseline ```
void q_texttablecellformat_set_super_script_baseline(void* self, double baseline);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#superScriptBaseline)
///
/// ``` QTextTableCellFormat* self ```
double q_texttablecellformat_super_script_baseline(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setSubScriptBaseline)
///
/// ``` QTextTableCellFormat* self, double baseline ```
void q_texttablecellformat_set_sub_script_baseline(void* self, double baseline);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#subScriptBaseline)
///
/// ``` QTextTableCellFormat* self ```
double q_texttablecellformat_sub_script_baseline(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setBaselineOffset)
///
/// ``` QTextTableCellFormat* self, double baseline ```
void q_texttablecellformat_set_baseline_offset(void* self, double baseline);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#baselineOffset)
///
/// ``` QTextTableCellFormat* self ```
double q_texttablecellformat_baseline_offset(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchor)
///
/// ``` QTextTableCellFormat* self, bool anchor ```
void q_texttablecellformat_set_anchor(void* self, bool anchor);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#isAnchor)
///
/// ``` QTextTableCellFormat* self ```
bool q_texttablecellformat_is_anchor(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorHref)
///
/// ``` QTextTableCellFormat* self, const char* value ```
void q_texttablecellformat_set_anchor_href(void* self, const char* value);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#anchorHref)
///
/// ``` QTextTableCellFormat* self ```
const char* q_texttablecellformat_anchor_href(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorNames)
///
/// ``` QTextTableCellFormat* self, const char* names[] ```
void q_texttablecellformat_set_anchor_names(void* self, const char* names[]);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#anchorNames)
///
/// ``` QTextTableCellFormat* self ```
const char** q_texttablecellformat_anchor_names(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellRowSpan)
///
/// ``` QTextTableCellFormat* self, int tableCellRowSpan ```
void q_texttablecellformat_set_table_cell_row_span(void* self, int tableCellRowSpan);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellRowSpan)
///
/// ``` QTextTableCellFormat* self ```
int32_t q_texttablecellformat_table_cell_row_span(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellColumnSpan)
///
/// ``` QTextTableCellFormat* self, int tableCellColumnSpan ```
void q_texttablecellformat_set_table_cell_column_span(void* self, int tableCellColumnSpan);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellColumnSpan)
///
/// ``` QTextTableCellFormat* self ```
int32_t q_texttablecellformat_table_cell_column_span(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
///
/// ``` QTextTableCellFormat* self, QFont* font, enum QTextCharFormat__FontPropertiesInheritanceBehavior behavior ```
void q_texttablecellformat_set_font2(void* self, void* font, int64_t behavior);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
///
/// ``` QTextTableCellFormat* self, enum QFont__StyleHint hint, enum QFont__StyleStrategy strategy ```
void q_texttablecellformat_set_font_style_hint2(void* self, int64_t hint, int64_t strategy);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator=)
///
/// ``` QTextTableCellFormat* self, QTextFormat* rhs ```
void q_texttablecellformat_operator_assign(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#swap)
///
/// ``` QTextTableCellFormat* self, QTextFormat* other ```
void q_texttablecellformat_swap(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#merge)
///
/// ``` QTextTableCellFormat* self, QTextFormat* other ```
void q_texttablecellformat_merge(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
///
/// ``` QTextTableCellFormat* self ```
bool q_texttablecellformat_is_empty(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#type)
///
/// ``` QTextTableCellFormat* self ```
int32_t q_texttablecellformat_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
///
/// ``` QTextTableCellFormat* self ```
int32_t q_texttablecellformat_object_index(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
///
/// ``` QTextTableCellFormat* self, int object ```
void q_texttablecellformat_set_object_index(void* self, int object);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#property)
///
/// ``` QTextTableCellFormat* self, int propertyId ```
QVariant* q_texttablecellformat_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// ``` QTextTableCellFormat* self, int propertyId, QVariant* value ```
void q_texttablecellformat_set_property(void* self, int propertyId, void* value);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
///
/// ``` QTextTableCellFormat* self, int propertyId ```
void q_texttablecellformat_clear_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
///
/// ``` QTextTableCellFormat* self, int propertyId ```
bool q_texttablecellformat_has_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
///
/// ``` QTextTableCellFormat* self, int propertyId ```
bool q_texttablecellformat_bool_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
///
/// ``` QTextTableCellFormat* self, int propertyId ```
int32_t q_texttablecellformat_int_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
///
/// ``` QTextTableCellFormat* self, int propertyId ```
double q_texttablecellformat_double_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
///
/// ``` QTextTableCellFormat* self, int propertyId ```
const char* q_texttablecellformat_string_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
///
/// ``` QTextTableCellFormat* self, int propertyId ```
QColor* q_texttablecellformat_color_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
///
/// ``` QTextTableCellFormat* self, int propertyId ```
QPen* q_texttablecellformat_pen_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
///
/// ``` QTextTableCellFormat* self, int propertyId ```
QBrush* q_texttablecellformat_brush_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
///
/// ``` QTextTableCellFormat* self, int propertyId ```
QTextLength* q_texttablecellformat_length_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
///
/// ``` QTextTableCellFormat* self, int propertyId ```
libqt_list /* of QTextLength* */ q_texttablecellformat_length_vector_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// ``` QTextTableCellFormat* self, int propertyId, libqt_list /* of QTextLength* */ lengths ```
void q_texttablecellformat_set_property2(void* self, int propertyId, libqt_list lengths);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#properties)
///
/// ``` QTextTableCellFormat* self ```
libqt_map /* of int to QVariant* */ q_texttablecellformat_properties(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
///
/// ``` QTextTableCellFormat* self ```
int32_t q_texttablecellformat_property_count(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
///
/// ``` QTextTableCellFormat* self, int typeVal ```
void q_texttablecellformat_set_object_type(void* self, int typeVal);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectType)
///
/// ``` QTextTableCellFormat* self ```
int32_t q_texttablecellformat_object_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
///
/// ``` QTextTableCellFormat* self ```
bool q_texttablecellformat_is_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
///
/// ``` QTextTableCellFormat* self ```
bool q_texttablecellformat_is_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
///
/// ``` QTextTableCellFormat* self ```
bool q_texttablecellformat_is_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
///
/// ``` QTextTableCellFormat* self ```
bool q_texttablecellformat_is_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
///
/// ``` QTextTableCellFormat* self ```
bool q_texttablecellformat_is_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
///
/// ``` QTextTableCellFormat* self ```
bool q_texttablecellformat_is_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
///
/// ``` QTextTableCellFormat* self ```
bool q_texttablecellformat_is_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
///
/// ``` QTextTableCellFormat* self ```
QTextBlockFormat* q_texttablecellformat_to_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
///
/// ``` QTextTableCellFormat* self ```
QTextCharFormat* q_texttablecellformat_to_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
///
/// ``` QTextTableCellFormat* self ```
QTextListFormat* q_texttablecellformat_to_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
///
/// ``` QTextTableCellFormat* self ```
QTextTableFormat* q_texttablecellformat_to_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
///
/// ``` QTextTableCellFormat* self ```
QTextFrameFormat* q_texttablecellformat_to_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
///
/// ``` QTextTableCellFormat* self ```
QTextImageFormat* q_texttablecellformat_to_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
///
/// ``` QTextTableCellFormat* self ```
QTextTableCellFormat* q_texttablecellformat_to_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator==)
///
/// ``` QTextTableCellFormat* self, QTextFormat* rhs ```
bool q_texttablecellformat_operator_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator!=)
///
/// ``` QTextTableCellFormat* self, QTextFormat* rhs ```
bool q_texttablecellformat_operator_not_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator QVariant)
///
/// ``` QTextTableCellFormat* self ```
QVariant* q_texttablecellformat_to_q_variant(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
///
/// ``` QTextTableCellFormat* self, enum Qt__LayoutDirection direction ```
void q_texttablecellformat_set_layout_direction(void* self, int64_t direction);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
///
/// ``` QTextTableCellFormat* self ```
int64_t q_texttablecellformat_layout_direction(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
///
/// ``` QTextTableCellFormat* self, QBrush* brush ```
void q_texttablecellformat_set_background(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#background)
///
/// ``` QTextTableCellFormat* self ```
QBrush* q_texttablecellformat_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
///
/// ``` QTextTableCellFormat* self ```
void q_texttablecellformat_clear_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
///
/// ``` QTextTableCellFormat* self, QBrush* brush ```
void q_texttablecellformat_set_foreground(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#foreground)
///
/// ``` QTextTableCellFormat* self ```
QBrush* q_texttablecellformat_foreground(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
///
/// ``` QTextTableCellFormat* self ```
void q_texttablecellformat_clear_foreground(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#dtor.QTextTableCellFormat)
///
/// Delete this object from C++ memory.
///
/// ``` QTextTableCellFormat* self ```
void q_texttablecellformat_delete(void* self);

/// https://doc.qt.io/qt-6/qtextformat.html#types

typedef enum {
    QTEXTLENGTH_TYPE_VARIABLELENGTH = 0,
    QTEXTLENGTH_TYPE_FIXEDLENGTH = 1,
    QTEXTLENGTH_TYPE_PERCENTAGELENGTH = 2
} QTextLength__Type;

typedef enum {
    QTEXTFORMAT_FORMATTYPE_INVALIDFORMAT = -1,
    QTEXTFORMAT_FORMATTYPE_BLOCKFORMAT = 1,
    QTEXTFORMAT_FORMATTYPE_CHARFORMAT = 2,
    QTEXTFORMAT_FORMATTYPE_LISTFORMAT = 3,
    QTEXTFORMAT_FORMATTYPE_FRAMEFORMAT = 5,
    QTEXTFORMAT_FORMATTYPE_USERFORMAT = 100
} QTextFormat__FormatType;

typedef enum {
    QTEXTFORMAT_PROPERTY_OBJECTINDEX = 0,
    QTEXTFORMAT_PROPERTY_CSSFLOAT = 2048,
    QTEXTFORMAT_PROPERTY_LAYOUTDIRECTION = 2049,
    QTEXTFORMAT_PROPERTY_OUTLINEPEN = 2064,
    QTEXTFORMAT_PROPERTY_BACKGROUNDBRUSH = 2080,
    QTEXTFORMAT_PROPERTY_FOREGROUNDBRUSH = 2081,
    QTEXTFORMAT_PROPERTY_BACKGROUNDIMAGEURL = 2083,
    QTEXTFORMAT_PROPERTY_BLOCKALIGNMENT = 4112,
    QTEXTFORMAT_PROPERTY_BLOCKTOPMARGIN = 4144,
    QTEXTFORMAT_PROPERTY_BLOCKBOTTOMMARGIN = 4145,
    QTEXTFORMAT_PROPERTY_BLOCKLEFTMARGIN = 4146,
    QTEXTFORMAT_PROPERTY_BLOCKRIGHTMARGIN = 4147,
    QTEXTFORMAT_PROPERTY_TEXTINDENT = 4148,
    QTEXTFORMAT_PROPERTY_TABPOSITIONS = 4149,
    QTEXTFORMAT_PROPERTY_BLOCKINDENT = 4160,
    QTEXTFORMAT_PROPERTY_LINEHEIGHT = 4168,
    QTEXTFORMAT_PROPERTY_LINEHEIGHTTYPE = 4169,
    QTEXTFORMAT_PROPERTY_BLOCKNONBREAKABLELINES = 4176,
    QTEXTFORMAT_PROPERTY_BLOCKTRAILINGHORIZONTALRULERWIDTH = 4192,
    QTEXTFORMAT_PROPERTY_HEADINGLEVEL = 4208,
    QTEXTFORMAT_PROPERTY_BLOCKQUOTELEVEL = 4224,
    QTEXTFORMAT_PROPERTY_BLOCKCODELANGUAGE = 4240,
    QTEXTFORMAT_PROPERTY_BLOCKCODEFENCE = 4241,
    QTEXTFORMAT_PROPERTY_BLOCKMARKER = 4256,
    QTEXTFORMAT_PROPERTY_FIRSTFONTPROPERTY = 8160,
    QTEXTFORMAT_PROPERTY_FONTCAPITALIZATION = 8160,
    QTEXTFORMAT_PROPERTY_FONTLETTERSPACING = 8161,
    QTEXTFORMAT_PROPERTY_FONTWORDSPACING = 8162,
    QTEXTFORMAT_PROPERTY_FONTSTYLEHINT = 8163,
    QTEXTFORMAT_PROPERTY_FONTSTYLESTRATEGY = 8164,
    QTEXTFORMAT_PROPERTY_FONTKERNING = 8165,
    QTEXTFORMAT_PROPERTY_FONTHINTINGPREFERENCE = 8166,
    QTEXTFORMAT_PROPERTY_FONTFAMILIES = 8167,
    QTEXTFORMAT_PROPERTY_FONTSTYLENAME = 8168,
    QTEXTFORMAT_PROPERTY_FONTLETTERSPACINGTYPE = 8169,
    QTEXTFORMAT_PROPERTY_FONTSTRETCH = 8170,
    QTEXTFORMAT_PROPERTY_FONTFAMILY = 8192,
    QTEXTFORMAT_PROPERTY_FONTPOINTSIZE = 8193,
    QTEXTFORMAT_PROPERTY_FONTSIZEADJUSTMENT = 8194,
    QTEXTFORMAT_PROPERTY_FONTSIZEINCREMENT = 8194,
    QTEXTFORMAT_PROPERTY_FONTWEIGHT = 8195,
    QTEXTFORMAT_PROPERTY_FONTITALIC = 8196,
    QTEXTFORMAT_PROPERTY_FONTUNDERLINE = 8197,
    QTEXTFORMAT_PROPERTY_FONTOVERLINE = 8198,
    QTEXTFORMAT_PROPERTY_FONTSTRIKEOUT = 8199,
    QTEXTFORMAT_PROPERTY_FONTFIXEDPITCH = 8200,
    QTEXTFORMAT_PROPERTY_FONTPIXELSIZE = 8201,
    QTEXTFORMAT_PROPERTY_LASTFONTPROPERTY = 8201,
    QTEXTFORMAT_PROPERTY_TEXTUNDERLINECOLOR = 8224,
    QTEXTFORMAT_PROPERTY_TEXTVERTICALALIGNMENT = 8225,
    QTEXTFORMAT_PROPERTY_TEXTOUTLINE = 8226,
    QTEXTFORMAT_PROPERTY_TEXTUNDERLINESTYLE = 8227,
    QTEXTFORMAT_PROPERTY_TEXTTOOLTIP = 8228,
    QTEXTFORMAT_PROPERTY_TEXTSUPERSCRIPTBASELINE = 8229,
    QTEXTFORMAT_PROPERTY_TEXTSUBSCRIPTBASELINE = 8230,
    QTEXTFORMAT_PROPERTY_TEXTBASELINEOFFSET = 8231,
    QTEXTFORMAT_PROPERTY_ISANCHOR = 8240,
    QTEXTFORMAT_PROPERTY_ANCHORHREF = 8241,
    QTEXTFORMAT_PROPERTY_ANCHORNAME = 8242,
    QTEXTFORMAT_PROPERTY_OLDFONTLETTERSPACINGTYPE = 8243,
    QTEXTFORMAT_PROPERTY_OLDFONTSTRETCH = 8244,
    QTEXTFORMAT_PROPERTY_OLDTEXTUNDERLINECOLOR = 8208,
    QTEXTFORMAT_PROPERTY_OLDFONTFAMILY = 8192,
    QTEXTFORMAT_PROPERTY_OBJECTTYPE = 12032,
    QTEXTFORMAT_PROPERTY_LISTSTYLE = 12288,
    QTEXTFORMAT_PROPERTY_LISTINDENT = 12289,
    QTEXTFORMAT_PROPERTY_LISTNUMBERPREFIX = 12290,
    QTEXTFORMAT_PROPERTY_LISTNUMBERSUFFIX = 12291,
    QTEXTFORMAT_PROPERTY_LISTSTART = 12292,
    QTEXTFORMAT_PROPERTY_FRAMEBORDER = 16384,
    QTEXTFORMAT_PROPERTY_FRAMEMARGIN = 16385,
    QTEXTFORMAT_PROPERTY_FRAMEPADDING = 16386,
    QTEXTFORMAT_PROPERTY_FRAMEWIDTH = 16387,
    QTEXTFORMAT_PROPERTY_FRAMEHEIGHT = 16388,
    QTEXTFORMAT_PROPERTY_FRAMETOPMARGIN = 16389,
    QTEXTFORMAT_PROPERTY_FRAMEBOTTOMMARGIN = 16390,
    QTEXTFORMAT_PROPERTY_FRAMELEFTMARGIN = 16391,
    QTEXTFORMAT_PROPERTY_FRAMERIGHTMARGIN = 16392,
    QTEXTFORMAT_PROPERTY_FRAMEBORDERBRUSH = 16393,
    QTEXTFORMAT_PROPERTY_FRAMEBORDERSTYLE = 16400,
    QTEXTFORMAT_PROPERTY_TABLECOLUMNS = 16640,
    QTEXTFORMAT_PROPERTY_TABLECOLUMNWIDTHCONSTRAINTS = 16641,
    QTEXTFORMAT_PROPERTY_TABLECELLSPACING = 16642,
    QTEXTFORMAT_PROPERTY_TABLECELLPADDING = 16643,
    QTEXTFORMAT_PROPERTY_TABLEHEADERROWCOUNT = 16644,
    QTEXTFORMAT_PROPERTY_TABLEBORDERCOLLAPSE = 16645,
    QTEXTFORMAT_PROPERTY_TABLECELLROWSPAN = 18448,
    QTEXTFORMAT_PROPERTY_TABLECELLCOLUMNSPAN = 18449,
    QTEXTFORMAT_PROPERTY_TABLECELLTOPPADDING = 18450,
    QTEXTFORMAT_PROPERTY_TABLECELLBOTTOMPADDING = 18451,
    QTEXTFORMAT_PROPERTY_TABLECELLLEFTPADDING = 18452,
    QTEXTFORMAT_PROPERTY_TABLECELLRIGHTPADDING = 18453,
    QTEXTFORMAT_PROPERTY_TABLECELLTOPBORDER = 18454,
    QTEXTFORMAT_PROPERTY_TABLECELLBOTTOMBORDER = 18455,
    QTEXTFORMAT_PROPERTY_TABLECELLLEFTBORDER = 18456,
    QTEXTFORMAT_PROPERTY_TABLECELLRIGHTBORDER = 18457,
    QTEXTFORMAT_PROPERTY_TABLECELLTOPBORDERSTYLE = 18458,
    QTEXTFORMAT_PROPERTY_TABLECELLBOTTOMBORDERSTYLE = 18459,
    QTEXTFORMAT_PROPERTY_TABLECELLLEFTBORDERSTYLE = 18460,
    QTEXTFORMAT_PROPERTY_TABLECELLRIGHTBORDERSTYLE = 18461,
    QTEXTFORMAT_PROPERTY_TABLECELLTOPBORDERBRUSH = 18462,
    QTEXTFORMAT_PROPERTY_TABLECELLBOTTOMBORDERBRUSH = 18463,
    QTEXTFORMAT_PROPERTY_TABLECELLLEFTBORDERBRUSH = 18464,
    QTEXTFORMAT_PROPERTY_TABLECELLRIGHTBORDERBRUSH = 18465,
    QTEXTFORMAT_PROPERTY_IMAGENAME = 20480,
    QTEXTFORMAT_PROPERTY_IMAGETITLE = 20481,
    QTEXTFORMAT_PROPERTY_IMAGEALTTEXT = 20482,
    QTEXTFORMAT_PROPERTY_IMAGEWIDTH = 20496,
    QTEXTFORMAT_PROPERTY_IMAGEHEIGHT = 20497,
    QTEXTFORMAT_PROPERTY_IMAGEQUALITY = 20500,
    QTEXTFORMAT_PROPERTY_IMAGEMAXWIDTH = 20501,
    QTEXTFORMAT_PROPERTY_FULLWIDTHSELECTION = 24576,
    QTEXTFORMAT_PROPERTY_PAGEBREAKPOLICY = 28672,
    QTEXTFORMAT_PROPERTY_USERPROPERTY = 1048576
} QTextFormat__Property;

typedef enum {
    QTEXTFORMAT_OBJECTTYPES_NOOBJECT = 0,
    QTEXTFORMAT_OBJECTTYPES_IMAGEOBJECT = 1,
    QTEXTFORMAT_OBJECTTYPES_TABLEOBJECT = 2,
    QTEXTFORMAT_OBJECTTYPES_TABLECELLOBJECT = 3,
    QTEXTFORMAT_OBJECTTYPES_USEROBJECT = 4096
} QTextFormat__ObjectTypes;

typedef enum {
    QTEXTFORMAT_PAGEBREAKFLAG_PAGEBREAK_AUTO = 0,
    QTEXTFORMAT_PAGEBREAKFLAG_PAGEBREAK_ALWAYSBEFORE = 1,
    QTEXTFORMAT_PAGEBREAKFLAG_PAGEBREAK_ALWAYSAFTER = 16
} QTextFormat__PageBreakFlag;

typedef enum {
    QTEXTCHARFORMAT_VERTICALALIGNMENT_ALIGNNORMAL = 0,
    QTEXTCHARFORMAT_VERTICALALIGNMENT_ALIGNSUPERSCRIPT = 1,
    QTEXTCHARFORMAT_VERTICALALIGNMENT_ALIGNSUBSCRIPT = 2,
    QTEXTCHARFORMAT_VERTICALALIGNMENT_ALIGNMIDDLE = 3,
    QTEXTCHARFORMAT_VERTICALALIGNMENT_ALIGNTOP = 4,
    QTEXTCHARFORMAT_VERTICALALIGNMENT_ALIGNBOTTOM = 5,
    QTEXTCHARFORMAT_VERTICALALIGNMENT_ALIGNBASELINE = 6
} QTextCharFormat__VerticalAlignment;

typedef enum {
    QTEXTCHARFORMAT_UNDERLINESTYLE_NOUNDERLINE = 0,
    QTEXTCHARFORMAT_UNDERLINESTYLE_SINGLEUNDERLINE = 1,
    QTEXTCHARFORMAT_UNDERLINESTYLE_DASHUNDERLINE = 2,
    QTEXTCHARFORMAT_UNDERLINESTYLE_DOTLINE = 3,
    QTEXTCHARFORMAT_UNDERLINESTYLE_DASHDOTLINE = 4,
    QTEXTCHARFORMAT_UNDERLINESTYLE_DASHDOTDOTLINE = 5,
    QTEXTCHARFORMAT_UNDERLINESTYLE_WAVEUNDERLINE = 6,
    QTEXTCHARFORMAT_UNDERLINESTYLE_SPELLCHECKUNDERLINE = 7
} QTextCharFormat__UnderlineStyle;

typedef enum {
    QTEXTCHARFORMAT_FONTPROPERTIESINHERITANCEBEHAVIOR_FONTPROPERTIESSPECIFIEDONLY = 0,
    QTEXTCHARFORMAT_FONTPROPERTIESINHERITANCEBEHAVIOR_FONTPROPERTIESALL = 1
} QTextCharFormat__FontPropertiesInheritanceBehavior;

typedef enum {
    QTEXTBLOCKFORMAT_LINEHEIGHTTYPES_SINGLEHEIGHT = 0,
    QTEXTBLOCKFORMAT_LINEHEIGHTTYPES_PROPORTIONALHEIGHT = 1,
    QTEXTBLOCKFORMAT_LINEHEIGHTTYPES_FIXEDHEIGHT = 2,
    QTEXTBLOCKFORMAT_LINEHEIGHTTYPES_MINIMUMHEIGHT = 3,
    QTEXTBLOCKFORMAT_LINEHEIGHTTYPES_LINEDISTANCEHEIGHT = 4
} QTextBlockFormat__LineHeightTypes;

typedef enum {
    QTEXTBLOCKFORMAT_MARKERTYPE_NOMARKER = 0,
    QTEXTBLOCKFORMAT_MARKERTYPE_UNCHECKED = 1,
    QTEXTBLOCKFORMAT_MARKERTYPE_CHECKED = 2
} QTextBlockFormat__MarkerType;

typedef enum {
    QTEXTLISTFORMAT_STYLE_LISTDISC = -1,
    QTEXTLISTFORMAT_STYLE_LISTCIRCLE = -2,
    QTEXTLISTFORMAT_STYLE_LISTSQUARE = -3,
    QTEXTLISTFORMAT_STYLE_LISTDECIMAL = -4,
    QTEXTLISTFORMAT_STYLE_LISTLOWERALPHA = -5,
    QTEXTLISTFORMAT_STYLE_LISTUPPERALPHA = -6,
    QTEXTLISTFORMAT_STYLE_LISTLOWERROMAN = -7,
    QTEXTLISTFORMAT_STYLE_LISTUPPERROMAN = -8,
    QTEXTLISTFORMAT_STYLE_LISTSTYLEUNDEFINED = 0
} QTextListFormat__Style;

typedef enum {
    QTEXTFRAMEFORMAT_POSITION_INFLOW = 0,
    QTEXTFRAMEFORMAT_POSITION_FLOATLEFT = 1,
    QTEXTFRAMEFORMAT_POSITION_FLOATRIGHT = 2
} QTextFrameFormat__Position;

typedef enum {
    QTEXTFRAMEFORMAT_BORDERSTYLE_BORDERSTYLE_NONE = 0,
    QTEXTFRAMEFORMAT_BORDERSTYLE_BORDERSTYLE_DOTTED = 1,
    QTEXTFRAMEFORMAT_BORDERSTYLE_BORDERSTYLE_DASHED = 2,
    QTEXTFRAMEFORMAT_BORDERSTYLE_BORDERSTYLE_SOLID = 3,
    QTEXTFRAMEFORMAT_BORDERSTYLE_BORDERSTYLE_DOUBLE = 4,
    QTEXTFRAMEFORMAT_BORDERSTYLE_BORDERSTYLE_DOTDASH = 5,
    QTEXTFRAMEFORMAT_BORDERSTYLE_BORDERSTYLE_DOTDOTDASH = 6,
    QTEXTFRAMEFORMAT_BORDERSTYLE_BORDERSTYLE_GROOVE = 7,
    QTEXTFRAMEFORMAT_BORDERSTYLE_BORDERSTYLE_RIDGE = 8,
    QTEXTFRAMEFORMAT_BORDERSTYLE_BORDERSTYLE_INSET = 9,
    QTEXTFRAMEFORMAT_BORDERSTYLE_BORDERSTYLE_OUTSET = 10
} QTextFrameFormat__BorderStyle;

#endif
