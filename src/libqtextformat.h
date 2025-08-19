#pragma once
#ifndef SRCQT6C_LIBQTEXTFORMAT_H
#define SRCQT6C_LIBQTEXTFORMAT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtextlength.html

/// q_textlength_new constructs a new QTextLength object.
///
/// @param other QTextLength*
QTextLength* q_textlength_new(void* other);

/// q_textlength_new2 constructs a new QTextLength object and invalidates the source QTextLength object.
///
/// @param other QTextLength*
QTextLength* q_textlength_new2(void* other);

/// q_textlength_new3 constructs a new QTextLength object.
///
QTextLength* q_textlength_new3();

/// q_textlength_new4 constructs a new QTextLength object.
///
/// @param typeVal enum QTextLength__Type
/// @param value double
QTextLength* q_textlength_new4(int32_t typeVal, double value);

/// q_textlength_new5 constructs a new QTextLength object.
///
/// @param param1 QTextLength*
QTextLength* q_textlength_new5(void* param1);

/// q_textlength_copy_assign shallow copies `other` into `self`.
///
/// @param self QTextLength*
/// @param other QTextLength*
void q_textlength_copy_assign(void* self, void* other);

/// q_textlength_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QTextLength*
/// @param other QTextLength*
void q_textlength_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlength.html#type)
///
/// @param self QTextLength*
///
/// @return enum QTextLength__Type
int32_t q_textlength_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlength.html#value)
///
/// @param self QTextLength*
/// @param maximumLength double
double q_textlength_value(void* self, double maximumLength);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlength.html#rawValue)
///
/// @param self QTextLength*
double q_textlength_raw_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlength.html#operator-eq-eq)
///
/// @param self QTextLength*
/// @param other QTextLength*
bool q_textlength_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlength.html#operator-not-eq)
///
/// @param self QTextLength*
/// @param other QTextLength*
bool q_textlength_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlength.html#operator)
///
/// @param self QTextLength*
QVariant* q_textlength_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlength.html#dtor.QTextLength)
///
/// Delete this object from C++ memory.
///
/// @param self QTextLength*
void q_textlength_delete(void* self);

/// https://doc.qt.io/qt-6/qtextformat.html

/// q_textformat_new constructs a new QTextFormat object.
///
QTextFormat* q_textformat_new();

/// q_textformat_new2 constructs a new QTextFormat object.
///
/// @param typeVal int
QTextFormat* q_textformat_new2(int typeVal);

/// q_textformat_new3 constructs a new QTextFormat object.
///
/// @param rhs QTextFormat*
QTextFormat* q_textformat_new3(void* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
///
/// @param self QTextFormat*
/// @param rhs QTextFormat*
void q_textformat_operator_assign(void* self, void* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#swap)
///
/// @param self QTextFormat*
/// @param other QTextFormat*
void q_textformat_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#merge)
///
/// @param self QTextFormat*
/// @param other QTextFormat*
void q_textformat_merge(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isValid)
///
/// @param self QTextFormat*
bool q_textformat_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
///
/// @param self QTextFormat*
bool q_textformat_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#type)
///
/// @param self QTextFormat*
int32_t q_textformat_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
///
/// @param self QTextFormat*
int32_t q_textformat_object_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
///
/// @param self QTextFormat*
/// @param object int
void q_textformat_set_object_index(void* self, int object);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#property)
///
/// @param self QTextFormat*
/// @param propertyId int
QVariant* q_textformat_property(void* self, int propertyId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// @param self QTextFormat*
/// @param propertyId int
/// @param value QVariant*
void q_textformat_set_property(void* self, int propertyId, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
///
/// @param self QTextFormat*
/// @param propertyId int
void q_textformat_clear_property(void* self, int propertyId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
///
/// @param self QTextFormat*
/// @param propertyId int
bool q_textformat_has_property(void* self, int propertyId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
///
/// @param self QTextFormat*
/// @param propertyId int
bool q_textformat_bool_property(void* self, int propertyId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
///
/// @param self QTextFormat*
/// @param propertyId int
int32_t q_textformat_int_property(void* self, int propertyId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
///
/// @param self QTextFormat*
/// @param propertyId int
double q_textformat_double_property(void* self, int propertyId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextFormat*
/// @param propertyId int
const char* q_textformat_string_property(void* self, int propertyId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
///
/// @param self QTextFormat*
/// @param propertyId int
QColor* q_textformat_color_property(void* self, int propertyId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
///
/// @param self QTextFormat*
/// @param propertyId int
QPen* q_textformat_pen_property(void* self, int propertyId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
///
/// @param self QTextFormat*
/// @param propertyId int
QBrush* q_textformat_brush_property(void* self, int propertyId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
///
/// @param self QTextFormat*
/// @param propertyId int
QTextLength* q_textformat_length_property(void* self, int propertyId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
///
/// @param self QTextFormat*
/// @param propertyId int
libqt_list /* of QTextLength* */ q_textformat_length_vector_property(void* self, int propertyId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// @param self QTextFormat*
/// @param propertyId int
/// @param lengths libqt_list /* of QTextLength* */
void q_textformat_set_property2(void* self, int propertyId, libqt_list lengths);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#properties)
///
/// @param self QTextFormat*
libqt_map /* of int to QVariant* */ q_textformat_properties(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
///
/// @param self QTextFormat*
int32_t q_textformat_property_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
///
/// @param self QTextFormat*
/// @param typeVal int
void q_textformat_set_object_type(void* self, int typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectType)
///
/// @param self QTextFormat*
int32_t q_textformat_object_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
///
/// @param self QTextFormat*
bool q_textformat_is_char_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
///
/// @param self QTextFormat*
bool q_textformat_is_block_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
///
/// @param self QTextFormat*
bool q_textformat_is_list_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
///
/// @param self QTextFormat*
bool q_textformat_is_frame_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
///
/// @param self QTextFormat*
bool q_textformat_is_image_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
///
/// @param self QTextFormat*
bool q_textformat_is_table_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
///
/// @param self QTextFormat*
bool q_textformat_is_table_cell_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
///
/// @param self QTextFormat*
QTextBlockFormat* q_textformat_to_block_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
///
/// @param self QTextFormat*
QTextCharFormat* q_textformat_to_char_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
///
/// @param self QTextFormat*
QTextListFormat* q_textformat_to_list_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
///
/// @param self QTextFormat*
QTextTableFormat* q_textformat_to_table_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
///
/// @param self QTextFormat*
QTextFrameFormat* q_textformat_to_frame_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
///
/// @param self QTextFormat*
QTextImageFormat* q_textformat_to_image_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
///
/// @param self QTextFormat*
QTextTableCellFormat* q_textformat_to_table_cell_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
///
/// @param self QTextFormat*
/// @param rhs QTextFormat*
bool q_textformat_operator_equal(void* self, void* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
///
/// @param self QTextFormat*
/// @param rhs QTextFormat*
bool q_textformat_operator_not_equal(void* self, void* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator)
///
/// @param self QTextFormat*
QVariant* q_textformat_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
///
/// @param self QTextFormat*
/// @param direction enum Qt__LayoutDirection
void q_textformat_set_layout_direction(void* self, int32_t direction);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
///
/// @param self QTextFormat*
///
/// @return enum Qt__LayoutDirection
int32_t q_textformat_layout_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
///
/// @param self QTextFormat*
/// @param brush QBrush*
void q_textformat_set_background(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#background)
///
/// @param self QTextFormat*
QBrush* q_textformat_background(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
///
/// @param self QTextFormat*
void q_textformat_clear_background(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
///
/// @param self QTextFormat*
/// @param brush QBrush*
void q_textformat_set_foreground(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#foreground)
///
/// @param self QTextFormat*
QBrush* q_textformat_foreground(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
///
/// @param self QTextFormat*
void q_textformat_clear_foreground(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#dtor.QTextFormat)
///
/// Delete this object from C++ memory.
///
/// @param self QTextFormat*
void q_textformat_delete(void* self);

/// https://doc.qt.io/qt-6/qtextcharformat.html

/// q_textcharformat_new constructs a new QTextCharFormat object.
///
QTextCharFormat* q_textcharformat_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#isValid)
///
/// @param self QTextCharFormat*
bool q_textcharformat_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
///
/// @param self QTextCharFormat*
/// @param font QFont*
void q_textcharformat_set_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#font)
///
/// @param self QTextCharFormat*
QFont* q_textcharformat_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamily)
///
/// @param self QTextCharFormat*
/// @param family const char*
void q_textcharformat_set_font_family(void* self, const char* family);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamily)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextCharFormat*
const char* q_textcharformat_font_family(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamilies)
///
/// @param self QTextCharFormat*
/// @param families const char**
void q_textcharformat_set_font_families(void* self, const char* families[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamilies)
///
/// @param self QTextCharFormat*
QVariant* q_textcharformat_font_families(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleName)
///
/// @param self QTextCharFormat*
/// @param styleName const char*
void q_textcharformat_set_font_style_name(void* self, const char* styleName);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleName)
///
/// @param self QTextCharFormat*
QVariant* q_textcharformat_font_style_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontPointSize)
///
/// @param self QTextCharFormat*
/// @param size double
void q_textcharformat_set_font_point_size(void* self, double size);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontPointSize)
///
/// @param self QTextCharFormat*
double q_textcharformat_font_point_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWeight)
///
/// @param self QTextCharFormat*
/// @param weight int
void q_textcharformat_set_font_weight(void* self, int weight);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontWeight)
///
/// @param self QTextCharFormat*
int32_t q_textcharformat_font_weight(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontItalic)
///
/// @param self QTextCharFormat*
/// @param italic bool
void q_textcharformat_set_font_italic(void* self, bool italic);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontItalic)
///
/// @param self QTextCharFormat*
bool q_textcharformat_font_italic(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontCapitalization)
///
/// @param self QTextCharFormat*
/// @param capitalization enum QFont__Capitalization
void q_textcharformat_set_font_capitalization(void* self, int32_t capitalization);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontCapitalization)
///
/// @param self QTextCharFormat*
///
/// @return enum QFont__Capitalization
int32_t q_textcharformat_font_capitalization(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacingType)
///
/// @param self QTextCharFormat*
/// @param letterSpacingType enum QFont__SpacingType
void q_textcharformat_set_font_letter_spacing_type(void* self, int32_t letterSpacingType);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacingType)
///
/// @param self QTextCharFormat*
///
/// @return enum QFont__SpacingType
int32_t q_textcharformat_font_letter_spacing_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacing)
///
/// @param self QTextCharFormat*
/// @param spacing double
void q_textcharformat_set_font_letter_spacing(void* self, double spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacing)
///
/// @param self QTextCharFormat*
double q_textcharformat_font_letter_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWordSpacing)
///
/// @param self QTextCharFormat*
/// @param spacing double
void q_textcharformat_set_font_word_spacing(void* self, double spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontWordSpacing)
///
/// @param self QTextCharFormat*
double q_textcharformat_font_word_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontUnderline)
///
/// @param self QTextCharFormat*
/// @param underline bool
void q_textcharformat_set_font_underline(void* self, bool underline);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontUnderline)
///
/// @param self QTextCharFormat*
bool q_textcharformat_font_underline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontOverline)
///
/// @param self QTextCharFormat*
/// @param overline bool
void q_textcharformat_set_font_overline(void* self, bool overline);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontOverline)
///
/// @param self QTextCharFormat*
bool q_textcharformat_font_overline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStrikeOut)
///
/// @param self QTextCharFormat*
/// @param strikeOut bool
void q_textcharformat_set_font_strike_out(void* self, bool strikeOut);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStrikeOut)
///
/// @param self QTextCharFormat*
bool q_textcharformat_font_strike_out(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineColor)
///
/// @param self QTextCharFormat*
/// @param color QColor*
void q_textcharformat_set_underline_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#underlineColor)
///
/// @param self QTextCharFormat*
QColor* q_textcharformat_underline_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFixedPitch)
///
/// @param self QTextCharFormat*
/// @param fixedPitch bool
void q_textcharformat_set_font_fixed_pitch(void* self, bool fixedPitch);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFixedPitch)
///
/// @param self QTextCharFormat*
bool q_textcharformat_font_fixed_pitch(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStretch)
///
/// @param self QTextCharFormat*
/// @param factor int
void q_textcharformat_set_font_stretch(void* self, int factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStretch)
///
/// @param self QTextCharFormat*
int32_t q_textcharformat_font_stretch(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
///
/// @param self QTextCharFormat*
/// @param hint enum QFont__StyleHint
void q_textcharformat_set_font_style_hint(void* self, int32_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleStrategy)
///
/// @param self QTextCharFormat*
/// @param strategy enum QFont__StyleStrategy
void q_textcharformat_set_font_style_strategy(void* self, int32_t strategy);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleHint)
///
/// @param self QTextCharFormat*
///
/// @return enum QFont__StyleHint
int32_t q_textcharformat_font_style_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleStrategy)
///
/// @param self QTextCharFormat*
///
/// @return enum QFont__StyleStrategy
int32_t q_textcharformat_font_style_strategy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontHintingPreference)
///
/// @param self QTextCharFormat*
/// @param hintingPreference enum QFont__HintingPreference
void q_textcharformat_set_font_hinting_preference(void* self, int32_t hintingPreference);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontHintingPreference)
///
/// @param self QTextCharFormat*
///
/// @return enum QFont__HintingPreference
int32_t q_textcharformat_font_hinting_preference(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontKerning)
///
/// @param self QTextCharFormat*
/// @param enable bool
void q_textcharformat_set_font_kerning(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontKerning)
///
/// @param self QTextCharFormat*
bool q_textcharformat_font_kerning(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineStyle)
///
/// @param self QTextCharFormat*
/// @param style enum QTextCharFormat__UnderlineStyle
void q_textcharformat_set_underline_style(void* self, int32_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#underlineStyle)
///
/// @param self QTextCharFormat*
///
/// @return enum QTextCharFormat__UnderlineStyle
int32_t q_textcharformat_underline_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setVerticalAlignment)
///
/// @param self QTextCharFormat*
/// @param alignment enum QTextCharFormat__VerticalAlignment
void q_textcharformat_set_vertical_alignment(void* self, int32_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#verticalAlignment)
///
/// @param self QTextCharFormat*
///
/// @return enum QTextCharFormat__VerticalAlignment
int32_t q_textcharformat_vertical_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTextOutline)
///
/// @param self QTextCharFormat*
/// @param pen QPen*
void q_textcharformat_set_text_outline(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#textOutline)
///
/// @param self QTextCharFormat*
QPen* q_textcharformat_text_outline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setToolTip)
///
/// @param self QTextCharFormat*
/// @param tip const char*
void q_textcharformat_set_tool_tip(void* self, const char* tip);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextCharFormat*
const char* q_textcharformat_tool_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setSuperScriptBaseline)
///
/// @param self QTextCharFormat*
/// @param baseline double
void q_textcharformat_set_super_script_baseline(void* self, double baseline);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#superScriptBaseline)
///
/// @param self QTextCharFormat*
double q_textcharformat_super_script_baseline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setSubScriptBaseline)
///
/// @param self QTextCharFormat*
/// @param baseline double
void q_textcharformat_set_sub_script_baseline(void* self, double baseline);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#subScriptBaseline)
///
/// @param self QTextCharFormat*
double q_textcharformat_sub_script_baseline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setBaselineOffset)
///
/// @param self QTextCharFormat*
/// @param baseline double
void q_textcharformat_set_baseline_offset(void* self, double baseline);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#baselineOffset)
///
/// @param self QTextCharFormat*
double q_textcharformat_baseline_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchor)
///
/// @param self QTextCharFormat*
/// @param anchor bool
void q_textcharformat_set_anchor(void* self, bool anchor);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#isAnchor)
///
/// @param self QTextCharFormat*
bool q_textcharformat_is_anchor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorHref)
///
/// @param self QTextCharFormat*
/// @param value const char*
void q_textcharformat_set_anchor_href(void* self, const char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#anchorHref)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextCharFormat*
const char* q_textcharformat_anchor_href(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorNames)
///
/// @param self QTextCharFormat*
/// @param names const char**
void q_textcharformat_set_anchor_names(void* self, const char* names[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#anchorNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextCharFormat*
const char** q_textcharformat_anchor_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellRowSpan)
///
/// @param self QTextCharFormat*
/// @param tableCellRowSpan int
void q_textcharformat_set_table_cell_row_span(void* self, int tableCellRowSpan);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellRowSpan)
///
/// @param self QTextCharFormat*
int32_t q_textcharformat_table_cell_row_span(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellColumnSpan)
///
/// @param self QTextCharFormat*
/// @param tableCellColumnSpan int
void q_textcharformat_set_table_cell_column_span(void* self, int tableCellColumnSpan);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellColumnSpan)
///
/// @param self QTextCharFormat*
int32_t q_textcharformat_table_cell_column_span(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
///
/// @param self QTextCharFormat*
/// @param font QFont*
/// @param behavior enum QTextCharFormat__FontPropertiesInheritanceBehavior
void q_textcharformat_set_font2(void* self, void* font, int32_t behavior);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
///
/// @param self QTextCharFormat*
/// @param hint enum QFont__StyleHint
/// @param strategy enum QFont__StyleStrategy
void q_textcharformat_set_font_style_hint2(void* self, int32_t hint, int32_t strategy);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
///
/// @param self QTextCharFormat*
/// @param rhs QTextFormat*
void q_textcharformat_operator_assign(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#swap)
///
/// @param self QTextCharFormat*
/// @param other QTextFormat*
void q_textcharformat_swap(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#merge)
///
/// @param self QTextCharFormat*
/// @param other QTextFormat*
void q_textcharformat_merge(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
///
/// @param self QTextCharFormat*
bool q_textcharformat_is_empty(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#type)
///
/// @param self QTextCharFormat*
int32_t q_textcharformat_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
///
/// @param self QTextCharFormat*
int32_t q_textcharformat_object_index(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
///
/// @param self QTextCharFormat*
/// @param object int
void q_textcharformat_set_object_index(void* self, int object);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#property)
///
/// @param self QTextCharFormat*
/// @param propertyId int
QVariant* q_textcharformat_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// @param self QTextCharFormat*
/// @param propertyId int
/// @param value QVariant*
void q_textcharformat_set_property(void* self, int propertyId, void* value);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
///
/// @param self QTextCharFormat*
/// @param propertyId int
void q_textcharformat_clear_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
///
/// @param self QTextCharFormat*
/// @param propertyId int
bool q_textcharformat_has_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
///
/// @param self QTextCharFormat*
/// @param propertyId int
bool q_textcharformat_bool_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
///
/// @param self QTextCharFormat*
/// @param propertyId int
int32_t q_textcharformat_int_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
///
/// @param self QTextCharFormat*
/// @param propertyId int
double q_textcharformat_double_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextCharFormat*
/// @param propertyId int
const char* q_textcharformat_string_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
///
/// @param self QTextCharFormat*
/// @param propertyId int
QColor* q_textcharformat_color_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
///
/// @param self QTextCharFormat*
/// @param propertyId int
QPen* q_textcharformat_pen_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
///
/// @param self QTextCharFormat*
/// @param propertyId int
QBrush* q_textcharformat_brush_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
///
/// @param self QTextCharFormat*
/// @param propertyId int
QTextLength* q_textcharformat_length_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
///
/// @param self QTextCharFormat*
/// @param propertyId int
libqt_list /* of QTextLength* */ q_textcharformat_length_vector_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// @param self QTextCharFormat*
/// @param propertyId int
/// @param lengths libqt_list /* of QTextLength* */
void q_textcharformat_set_property2(void* self, int propertyId, libqt_list lengths);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#properties)
///
/// @param self QTextCharFormat*
libqt_map /* of int to QVariant* */ q_textcharformat_properties(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
///
/// @param self QTextCharFormat*
int32_t q_textcharformat_property_count(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
///
/// @param self QTextCharFormat*
/// @param typeVal int
void q_textcharformat_set_object_type(void* self, int typeVal);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectType)
///
/// @param self QTextCharFormat*
int32_t q_textcharformat_object_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
///
/// @param self QTextCharFormat*
bool q_textcharformat_is_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
///
/// @param self QTextCharFormat*
bool q_textcharformat_is_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
///
/// @param self QTextCharFormat*
bool q_textcharformat_is_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
///
/// @param self QTextCharFormat*
bool q_textcharformat_is_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
///
/// @param self QTextCharFormat*
bool q_textcharformat_is_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
///
/// @param self QTextCharFormat*
bool q_textcharformat_is_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
///
/// @param self QTextCharFormat*
bool q_textcharformat_is_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
///
/// @param self QTextCharFormat*
QTextBlockFormat* q_textcharformat_to_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
///
/// @param self QTextCharFormat*
QTextCharFormat* q_textcharformat_to_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
///
/// @param self QTextCharFormat*
QTextListFormat* q_textcharformat_to_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
///
/// @param self QTextCharFormat*
QTextTableFormat* q_textcharformat_to_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
///
/// @param self QTextCharFormat*
QTextFrameFormat* q_textcharformat_to_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
///
/// @param self QTextCharFormat*
QTextImageFormat* q_textcharformat_to_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
///
/// @param self QTextCharFormat*
QTextTableCellFormat* q_textcharformat_to_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
///
/// @param self QTextCharFormat*
/// @param rhs QTextFormat*
bool q_textcharformat_operator_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
///
/// @param self QTextCharFormat*
/// @param rhs QTextFormat*
bool q_textcharformat_operator_not_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator)
///
/// @param self QTextCharFormat*
QVariant* q_textcharformat_to_q_variant(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
///
/// @param self QTextCharFormat*
/// @param direction enum Qt__LayoutDirection
void q_textcharformat_set_layout_direction(void* self, int32_t direction);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
///
/// @param self QTextCharFormat*
///
/// @return enum Qt__LayoutDirection
int32_t q_textcharformat_layout_direction(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
///
/// @param self QTextCharFormat*
/// @param brush QBrush*
void q_textcharformat_set_background(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#background)
///
/// @param self QTextCharFormat*
QBrush* q_textcharformat_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
///
/// @param self QTextCharFormat*
void q_textcharformat_clear_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
///
/// @param self QTextCharFormat*
/// @param brush QBrush*
void q_textcharformat_set_foreground(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#foreground)
///
/// @param self QTextCharFormat*
QBrush* q_textcharformat_foreground(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
///
/// @param self QTextCharFormat*
void q_textcharformat_clear_foreground(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#dtor.QTextCharFormat)
///
/// Delete this object from C++ memory.
///
/// @param self QTextCharFormat*
void q_textcharformat_delete(void* self);

/// https://doc.qt.io/qt-6/qtextblockformat.html

/// q_textblockformat_new constructs a new QTextBlockFormat object.
///
QTextBlockFormat* q_textblockformat_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#isValid)
///
/// @param self QTextBlockFormat*
bool q_textblockformat_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setAlignment)
///
/// @param self QTextBlockFormat*
/// @param alignment flag of enum Qt__AlignmentFlag
void q_textblockformat_set_alignment(void* self, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#alignment)
///
/// @param self QTextBlockFormat*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t q_textblockformat_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setTopMargin)
///
/// @param self QTextBlockFormat*
/// @param margin double
void q_textblockformat_set_top_margin(void* self, double margin);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#topMargin)
///
/// @param self QTextBlockFormat*
double q_textblockformat_top_margin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setBottomMargin)
///
/// @param self QTextBlockFormat*
/// @param margin double
void q_textblockformat_set_bottom_margin(void* self, double margin);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#bottomMargin)
///
/// @param self QTextBlockFormat*
double q_textblockformat_bottom_margin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setLeftMargin)
///
/// @param self QTextBlockFormat*
/// @param margin double
void q_textblockformat_set_left_margin(void* self, double margin);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#leftMargin)
///
/// @param self QTextBlockFormat*
double q_textblockformat_left_margin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setRightMargin)
///
/// @param self QTextBlockFormat*
/// @param margin double
void q_textblockformat_set_right_margin(void* self, double margin);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#rightMargin)
///
/// @param self QTextBlockFormat*
double q_textblockformat_right_margin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setTextIndent)
///
/// @param self QTextBlockFormat*
/// @param aindent double
void q_textblockformat_set_text_indent(void* self, double aindent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#textIndent)
///
/// @param self QTextBlockFormat*
double q_textblockformat_text_indent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setIndent)
///
/// @param self QTextBlockFormat*
/// @param indent int
void q_textblockformat_set_indent(void* self, int indent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#indent)
///
/// @param self QTextBlockFormat*
int32_t q_textblockformat_indent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setHeadingLevel)
///
/// @param self QTextBlockFormat*
/// @param alevel int
void q_textblockformat_set_heading_level(void* self, int alevel);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#headingLevel)
///
/// @param self QTextBlockFormat*
int32_t q_textblockformat_heading_level(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setLineHeight)
///
/// @param self QTextBlockFormat*
/// @param height double
/// @param heightType int
void q_textblockformat_set_line_height(void* self, double height, int heightType);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#lineHeight)
///
/// @param self QTextBlockFormat*
/// @param scriptLineHeight double
/// @param scaling double
double q_textblockformat_line_height(void* self, double scriptLineHeight, double scaling);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#lineHeight)
///
/// @param self QTextBlockFormat*
double q_textblockformat_line_height2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#lineHeightType)
///
/// @param self QTextBlockFormat*
int32_t q_textblockformat_line_height_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setNonBreakableLines)
///
/// @param self QTextBlockFormat*
/// @param b bool
void q_textblockformat_set_non_breakable_lines(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#nonBreakableLines)
///
/// @param self QTextBlockFormat*
bool q_textblockformat_non_breakable_lines(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setPageBreakPolicy)
///
/// @param self QTextBlockFormat*
/// @param flags flag of enum QTextFormat__PageBreakFlag
void q_textblockformat_set_page_break_policy(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#pageBreakPolicy)
///
/// @param self QTextBlockFormat*
///
/// @return flag of enum QTextFormat__PageBreakFlag
int64_t q_textblockformat_page_break_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setTabPositions)
///
/// @param self QTextBlockFormat*
/// @param tabs libqt_list /* of QTextOption__Tab* */
void q_textblockformat_set_tab_positions(void* self, libqt_list tabs);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#tabPositions)
///
/// @param self QTextBlockFormat*
libqt_list /* of QTextOption__Tab* */ q_textblockformat_tab_positions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#setMarker)
///
/// @param self QTextBlockFormat*
/// @param marker enum QTextBlockFormat__MarkerType
void q_textblockformat_set_marker(void* self, int32_t marker);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#marker)
///
/// @param self QTextBlockFormat*
///
/// @return enum QTextBlockFormat__MarkerType
int32_t q_textblockformat_marker(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
///
/// @param self QTextBlockFormat*
/// @param rhs QTextFormat*
void q_textblockformat_operator_assign(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#swap)
///
/// @param self QTextBlockFormat*
/// @param other QTextFormat*
void q_textblockformat_swap(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#merge)
///
/// @param self QTextBlockFormat*
/// @param other QTextFormat*
void q_textblockformat_merge(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
///
/// @param self QTextBlockFormat*
bool q_textblockformat_is_empty(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#type)
///
/// @param self QTextBlockFormat*
int32_t q_textblockformat_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
///
/// @param self QTextBlockFormat*
int32_t q_textblockformat_object_index(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
///
/// @param self QTextBlockFormat*
/// @param object int
void q_textblockformat_set_object_index(void* self, int object);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#property)
///
/// @param self QTextBlockFormat*
/// @param propertyId int
QVariant* q_textblockformat_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// @param self QTextBlockFormat*
/// @param propertyId int
/// @param value QVariant*
void q_textblockformat_set_property(void* self, int propertyId, void* value);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
///
/// @param self QTextBlockFormat*
/// @param propertyId int
void q_textblockformat_clear_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
///
/// @param self QTextBlockFormat*
/// @param propertyId int
bool q_textblockformat_has_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
///
/// @param self QTextBlockFormat*
/// @param propertyId int
bool q_textblockformat_bool_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
///
/// @param self QTextBlockFormat*
/// @param propertyId int
int32_t q_textblockformat_int_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
///
/// @param self QTextBlockFormat*
/// @param propertyId int
double q_textblockformat_double_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextBlockFormat*
/// @param propertyId int
const char* q_textblockformat_string_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
///
/// @param self QTextBlockFormat*
/// @param propertyId int
QColor* q_textblockformat_color_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
///
/// @param self QTextBlockFormat*
/// @param propertyId int
QPen* q_textblockformat_pen_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
///
/// @param self QTextBlockFormat*
/// @param propertyId int
QBrush* q_textblockformat_brush_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
///
/// @param self QTextBlockFormat*
/// @param propertyId int
QTextLength* q_textblockformat_length_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
///
/// @param self QTextBlockFormat*
/// @param propertyId int
libqt_list /* of QTextLength* */ q_textblockformat_length_vector_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// @param self QTextBlockFormat*
/// @param propertyId int
/// @param lengths libqt_list /* of QTextLength* */
void q_textblockformat_set_property2(void* self, int propertyId, libqt_list lengths);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#properties)
///
/// @param self QTextBlockFormat*
libqt_map /* of int to QVariant* */ q_textblockformat_properties(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
///
/// @param self QTextBlockFormat*
int32_t q_textblockformat_property_count(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
///
/// @param self QTextBlockFormat*
/// @param typeVal int
void q_textblockformat_set_object_type(void* self, int typeVal);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectType)
///
/// @param self QTextBlockFormat*
int32_t q_textblockformat_object_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
///
/// @param self QTextBlockFormat*
bool q_textblockformat_is_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
///
/// @param self QTextBlockFormat*
bool q_textblockformat_is_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
///
/// @param self QTextBlockFormat*
bool q_textblockformat_is_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
///
/// @param self QTextBlockFormat*
bool q_textblockformat_is_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
///
/// @param self QTextBlockFormat*
bool q_textblockformat_is_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
///
/// @param self QTextBlockFormat*
bool q_textblockformat_is_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
///
/// @param self QTextBlockFormat*
bool q_textblockformat_is_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
///
/// @param self QTextBlockFormat*
QTextBlockFormat* q_textblockformat_to_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
///
/// @param self QTextBlockFormat*
QTextCharFormat* q_textblockformat_to_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
///
/// @param self QTextBlockFormat*
QTextListFormat* q_textblockformat_to_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
///
/// @param self QTextBlockFormat*
QTextTableFormat* q_textblockformat_to_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
///
/// @param self QTextBlockFormat*
QTextFrameFormat* q_textblockformat_to_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
///
/// @param self QTextBlockFormat*
QTextImageFormat* q_textblockformat_to_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
///
/// @param self QTextBlockFormat*
QTextTableCellFormat* q_textblockformat_to_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
///
/// @param self QTextBlockFormat*
/// @param rhs QTextFormat*
bool q_textblockformat_operator_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
///
/// @param self QTextBlockFormat*
/// @param rhs QTextFormat*
bool q_textblockformat_operator_not_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator)
///
/// @param self QTextBlockFormat*
QVariant* q_textblockformat_to_q_variant(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
///
/// @param self QTextBlockFormat*
/// @param direction enum Qt__LayoutDirection
void q_textblockformat_set_layout_direction(void* self, int32_t direction);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
///
/// @param self QTextBlockFormat*
///
/// @return enum Qt__LayoutDirection
int32_t q_textblockformat_layout_direction(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
///
/// @param self QTextBlockFormat*
/// @param brush QBrush*
void q_textblockformat_set_background(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#background)
///
/// @param self QTextBlockFormat*
QBrush* q_textblockformat_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
///
/// @param self QTextBlockFormat*
void q_textblockformat_clear_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
///
/// @param self QTextBlockFormat*
/// @param brush QBrush*
void q_textblockformat_set_foreground(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#foreground)
///
/// @param self QTextBlockFormat*
QBrush* q_textblockformat_foreground(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
///
/// @param self QTextBlockFormat*
void q_textblockformat_clear_foreground(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextblockformat.html#dtor.QTextBlockFormat)
///
/// Delete this object from C++ memory.
///
/// @param self QTextBlockFormat*
void q_textblockformat_delete(void* self);

/// https://doc.qt.io/qt-6/qtextlistformat.html

/// q_textlistformat_new constructs a new QTextListFormat object.
///
QTextListFormat* q_textlistformat_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#isValid)
///
/// @param self QTextListFormat*
bool q_textlistformat_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#setStyle)
///
/// @param self QTextListFormat*
/// @param style enum QTextListFormat__Style
void q_textlistformat_set_style(void* self, int32_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#style)
///
/// @param self QTextListFormat*
///
/// @return enum QTextListFormat__Style
int32_t q_textlistformat_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#setIndent)
///
/// @param self QTextListFormat*
/// @param indent int
void q_textlistformat_set_indent(void* self, int indent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#indent)
///
/// @param self QTextListFormat*
int32_t q_textlistformat_indent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#setNumberPrefix)
///
/// @param self QTextListFormat*
/// @param numberPrefix const char*
void q_textlistformat_set_number_prefix(void* self, const char* numberPrefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#numberPrefix)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextListFormat*
const char* q_textlistformat_number_prefix(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#setNumberSuffix)
///
/// @param self QTextListFormat*
/// @param numberSuffix const char*
void q_textlistformat_set_number_suffix(void* self, const char* numberSuffix);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#numberSuffix)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextListFormat*
const char* q_textlistformat_number_suffix(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#setStart)
///
/// @param self QTextListFormat*
/// @param indent int
void q_textlistformat_set_start(void* self, int indent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#start)
///
/// @param self QTextListFormat*
int32_t q_textlistformat_start(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
///
/// @param self QTextListFormat*
/// @param rhs QTextFormat*
void q_textlistformat_operator_assign(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#swap)
///
/// @param self QTextListFormat*
/// @param other QTextFormat*
void q_textlistformat_swap(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#merge)
///
/// @param self QTextListFormat*
/// @param other QTextFormat*
void q_textlistformat_merge(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
///
/// @param self QTextListFormat*
bool q_textlistformat_is_empty(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#type)
///
/// @param self QTextListFormat*
int32_t q_textlistformat_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
///
/// @param self QTextListFormat*
int32_t q_textlistformat_object_index(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
///
/// @param self QTextListFormat*
/// @param object int
void q_textlistformat_set_object_index(void* self, int object);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#property)
///
/// @param self QTextListFormat*
/// @param propertyId int
QVariant* q_textlistformat_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// @param self QTextListFormat*
/// @param propertyId int
/// @param value QVariant*
void q_textlistformat_set_property(void* self, int propertyId, void* value);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
///
/// @param self QTextListFormat*
/// @param propertyId int
void q_textlistformat_clear_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
///
/// @param self QTextListFormat*
/// @param propertyId int
bool q_textlistformat_has_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
///
/// @param self QTextListFormat*
/// @param propertyId int
bool q_textlistformat_bool_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
///
/// @param self QTextListFormat*
/// @param propertyId int
int32_t q_textlistformat_int_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
///
/// @param self QTextListFormat*
/// @param propertyId int
double q_textlistformat_double_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextListFormat*
/// @param propertyId int
const char* q_textlistformat_string_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
///
/// @param self QTextListFormat*
/// @param propertyId int
QColor* q_textlistformat_color_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
///
/// @param self QTextListFormat*
/// @param propertyId int
QPen* q_textlistformat_pen_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
///
/// @param self QTextListFormat*
/// @param propertyId int
QBrush* q_textlistformat_brush_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
///
/// @param self QTextListFormat*
/// @param propertyId int
QTextLength* q_textlistformat_length_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
///
/// @param self QTextListFormat*
/// @param propertyId int
libqt_list /* of QTextLength* */ q_textlistformat_length_vector_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// @param self QTextListFormat*
/// @param propertyId int
/// @param lengths libqt_list /* of QTextLength* */
void q_textlistformat_set_property2(void* self, int propertyId, libqt_list lengths);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#properties)
///
/// @param self QTextListFormat*
libqt_map /* of int to QVariant* */ q_textlistformat_properties(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
///
/// @param self QTextListFormat*
int32_t q_textlistformat_property_count(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
///
/// @param self QTextListFormat*
/// @param typeVal int
void q_textlistformat_set_object_type(void* self, int typeVal);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectType)
///
/// @param self QTextListFormat*
int32_t q_textlistformat_object_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
///
/// @param self QTextListFormat*
bool q_textlistformat_is_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
///
/// @param self QTextListFormat*
bool q_textlistformat_is_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
///
/// @param self QTextListFormat*
bool q_textlistformat_is_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
///
/// @param self QTextListFormat*
bool q_textlistformat_is_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
///
/// @param self QTextListFormat*
bool q_textlistformat_is_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
///
/// @param self QTextListFormat*
bool q_textlistformat_is_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
///
/// @param self QTextListFormat*
bool q_textlistformat_is_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
///
/// @param self QTextListFormat*
QTextBlockFormat* q_textlistformat_to_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
///
/// @param self QTextListFormat*
QTextCharFormat* q_textlistformat_to_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
///
/// @param self QTextListFormat*
QTextListFormat* q_textlistformat_to_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
///
/// @param self QTextListFormat*
QTextTableFormat* q_textlistformat_to_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
///
/// @param self QTextListFormat*
QTextFrameFormat* q_textlistformat_to_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
///
/// @param self QTextListFormat*
QTextImageFormat* q_textlistformat_to_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
///
/// @param self QTextListFormat*
QTextTableCellFormat* q_textlistformat_to_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
///
/// @param self QTextListFormat*
/// @param rhs QTextFormat*
bool q_textlistformat_operator_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
///
/// @param self QTextListFormat*
/// @param rhs QTextFormat*
bool q_textlistformat_operator_not_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator)
///
/// @param self QTextListFormat*
QVariant* q_textlistformat_to_q_variant(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
///
/// @param self QTextListFormat*
/// @param direction enum Qt__LayoutDirection
void q_textlistformat_set_layout_direction(void* self, int32_t direction);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
///
/// @param self QTextListFormat*
///
/// @return enum Qt__LayoutDirection
int32_t q_textlistformat_layout_direction(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
///
/// @param self QTextListFormat*
/// @param brush QBrush*
void q_textlistformat_set_background(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#background)
///
/// @param self QTextListFormat*
QBrush* q_textlistformat_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
///
/// @param self QTextListFormat*
void q_textlistformat_clear_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
///
/// @param self QTextListFormat*
/// @param brush QBrush*
void q_textlistformat_set_foreground(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#foreground)
///
/// @param self QTextListFormat*
QBrush* q_textlistformat_foreground(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
///
/// @param self QTextListFormat*
void q_textlistformat_clear_foreground(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlistformat.html#dtor.QTextListFormat)
///
/// Delete this object from C++ memory.
///
/// @param self QTextListFormat*
void q_textlistformat_delete(void* self);

/// https://doc.qt.io/qt-6/qtextimageformat.html

/// q_textimageformat_new constructs a new QTextImageFormat object.
///
QTextImageFormat* q_textimageformat_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#isValid)
///
/// @param self QTextImageFormat*
bool q_textimageformat_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#setName)
///
/// @param self QTextImageFormat*
/// @param name const char*
void q_textimageformat_set_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextImageFormat*
const char* q_textimageformat_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#setWidth)
///
/// @param self QTextImageFormat*
/// @param width double
void q_textimageformat_set_width(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#width)
///
/// @param self QTextImageFormat*
double q_textimageformat_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#setMaximumWidth)
///
/// @param self QTextImageFormat*
/// @param maxWidth QTextLength*
void q_textimageformat_set_maximum_width(void* self, void* maxWidth);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#maximumWidth)
///
/// @param self QTextImageFormat*
QTextLength* q_textimageformat_maximum_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#setHeight)
///
/// @param self QTextImageFormat*
/// @param height double
void q_textimageformat_set_height(void* self, double height);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#height)
///
/// @param self QTextImageFormat*
double q_textimageformat_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#setQuality)
///
/// @param self QTextImageFormat*
/// @param quality int
void q_textimageformat_set_quality(void* self, int quality);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#setQuality)
///
/// @param self QTextImageFormat*
void q_textimageformat_set_quality2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#quality)
///
/// @param self QTextImageFormat*
int32_t q_textimageformat_quality(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
///
/// @param self QTextImageFormat*
/// @param font QFont*
void q_textimageformat_set_font(void* self, void* font);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#font)
///
/// @param self QTextImageFormat*
QFont* q_textimageformat_font(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamily)
///
/// @param self QTextImageFormat*
/// @param family const char*
void q_textimageformat_set_font_family(void* self, const char* family);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamily)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextImageFormat*
const char* q_textimageformat_font_family(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamilies)
///
/// @param self QTextImageFormat*
/// @param families const char**
void q_textimageformat_set_font_families(void* self, const char* families[]);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamilies)
///
/// @param self QTextImageFormat*
QVariant* q_textimageformat_font_families(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleName)
///
/// @param self QTextImageFormat*
/// @param styleName const char*
void q_textimageformat_set_font_style_name(void* self, const char* styleName);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleName)
///
/// @param self QTextImageFormat*
QVariant* q_textimageformat_font_style_name(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontPointSize)
///
/// @param self QTextImageFormat*
/// @param size double
void q_textimageformat_set_font_point_size(void* self, double size);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontPointSize)
///
/// @param self QTextImageFormat*
double q_textimageformat_font_point_size(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWeight)
///
/// @param self QTextImageFormat*
/// @param weight int
void q_textimageformat_set_font_weight(void* self, int weight);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontWeight)
///
/// @param self QTextImageFormat*
int32_t q_textimageformat_font_weight(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontItalic)
///
/// @param self QTextImageFormat*
/// @param italic bool
void q_textimageformat_set_font_italic(void* self, bool italic);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontItalic)
///
/// @param self QTextImageFormat*
bool q_textimageformat_font_italic(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontCapitalization)
///
/// @param self QTextImageFormat*
/// @param capitalization enum QFont__Capitalization
void q_textimageformat_set_font_capitalization(void* self, int32_t capitalization);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontCapitalization)
///
/// @param self QTextImageFormat*
///
/// @return enum QFont__Capitalization
int32_t q_textimageformat_font_capitalization(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacingType)
///
/// @param self QTextImageFormat*
/// @param letterSpacingType enum QFont__SpacingType
void q_textimageformat_set_font_letter_spacing_type(void* self, int32_t letterSpacingType);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacingType)
///
/// @param self QTextImageFormat*
///
/// @return enum QFont__SpacingType
int32_t q_textimageformat_font_letter_spacing_type(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacing)
///
/// @param self QTextImageFormat*
/// @param spacing double
void q_textimageformat_set_font_letter_spacing(void* self, double spacing);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacing)
///
/// @param self QTextImageFormat*
double q_textimageformat_font_letter_spacing(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWordSpacing)
///
/// @param self QTextImageFormat*
/// @param spacing double
void q_textimageformat_set_font_word_spacing(void* self, double spacing);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontWordSpacing)
///
/// @param self QTextImageFormat*
double q_textimageformat_font_word_spacing(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontUnderline)
///
/// @param self QTextImageFormat*
/// @param underline bool
void q_textimageformat_set_font_underline(void* self, bool underline);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontUnderline)
///
/// @param self QTextImageFormat*
bool q_textimageformat_font_underline(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontOverline)
///
/// @param self QTextImageFormat*
/// @param overline bool
void q_textimageformat_set_font_overline(void* self, bool overline);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontOverline)
///
/// @param self QTextImageFormat*
bool q_textimageformat_font_overline(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStrikeOut)
///
/// @param self QTextImageFormat*
/// @param strikeOut bool
void q_textimageformat_set_font_strike_out(void* self, bool strikeOut);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStrikeOut)
///
/// @param self QTextImageFormat*
bool q_textimageformat_font_strike_out(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineColor)
///
/// @param self QTextImageFormat*
/// @param color QColor*
void q_textimageformat_set_underline_color(void* self, void* color);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#underlineColor)
///
/// @param self QTextImageFormat*
QColor* q_textimageformat_underline_color(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFixedPitch)
///
/// @param self QTextImageFormat*
/// @param fixedPitch bool
void q_textimageformat_set_font_fixed_pitch(void* self, bool fixedPitch);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFixedPitch)
///
/// @param self QTextImageFormat*
bool q_textimageformat_font_fixed_pitch(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStretch)
///
/// @param self QTextImageFormat*
/// @param factor int
void q_textimageformat_set_font_stretch(void* self, int factor);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStretch)
///
/// @param self QTextImageFormat*
int32_t q_textimageformat_font_stretch(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
///
/// @param self QTextImageFormat*
/// @param hint enum QFont__StyleHint
void q_textimageformat_set_font_style_hint(void* self, int32_t hint);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleStrategy)
///
/// @param self QTextImageFormat*
/// @param strategy enum QFont__StyleStrategy
void q_textimageformat_set_font_style_strategy(void* self, int32_t strategy);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleHint)
///
/// @param self QTextImageFormat*
///
/// @return enum QFont__StyleHint
int32_t q_textimageformat_font_style_hint(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleStrategy)
///
/// @param self QTextImageFormat*
///
/// @return enum QFont__StyleStrategy
int32_t q_textimageformat_font_style_strategy(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontHintingPreference)
///
/// @param self QTextImageFormat*
/// @param hintingPreference enum QFont__HintingPreference
void q_textimageformat_set_font_hinting_preference(void* self, int32_t hintingPreference);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontHintingPreference)
///
/// @param self QTextImageFormat*
///
/// @return enum QFont__HintingPreference
int32_t q_textimageformat_font_hinting_preference(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontKerning)
///
/// @param self QTextImageFormat*
/// @param enable bool
void q_textimageformat_set_font_kerning(void* self, bool enable);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontKerning)
///
/// @param self QTextImageFormat*
bool q_textimageformat_font_kerning(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineStyle)
///
/// @param self QTextImageFormat*
/// @param style enum QTextCharFormat__UnderlineStyle
void q_textimageformat_set_underline_style(void* self, int32_t style);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#underlineStyle)
///
/// @param self QTextImageFormat*
///
/// @return enum QTextCharFormat__UnderlineStyle
int32_t q_textimageformat_underline_style(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setVerticalAlignment)
///
/// @param self QTextImageFormat*
/// @param alignment enum QTextCharFormat__VerticalAlignment
void q_textimageformat_set_vertical_alignment(void* self, int32_t alignment);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#verticalAlignment)
///
/// @param self QTextImageFormat*
///
/// @return enum QTextCharFormat__VerticalAlignment
int32_t q_textimageformat_vertical_alignment(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTextOutline)
///
/// @param self QTextImageFormat*
/// @param pen QPen*
void q_textimageformat_set_text_outline(void* self, void* pen);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#textOutline)
///
/// @param self QTextImageFormat*
QPen* q_textimageformat_text_outline(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setToolTip)
///
/// @param self QTextImageFormat*
/// @param tip const char*
void q_textimageformat_set_tool_tip(void* self, const char* tip);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextImageFormat*
const char* q_textimageformat_tool_tip(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setSuperScriptBaseline)
///
/// @param self QTextImageFormat*
/// @param baseline double
void q_textimageformat_set_super_script_baseline(void* self, double baseline);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#superScriptBaseline)
///
/// @param self QTextImageFormat*
double q_textimageformat_super_script_baseline(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setSubScriptBaseline)
///
/// @param self QTextImageFormat*
/// @param baseline double
void q_textimageformat_set_sub_script_baseline(void* self, double baseline);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#subScriptBaseline)
///
/// @param self QTextImageFormat*
double q_textimageformat_sub_script_baseline(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setBaselineOffset)
///
/// @param self QTextImageFormat*
/// @param baseline double
void q_textimageformat_set_baseline_offset(void* self, double baseline);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#baselineOffset)
///
/// @param self QTextImageFormat*
double q_textimageformat_baseline_offset(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchor)
///
/// @param self QTextImageFormat*
/// @param anchor bool
void q_textimageformat_set_anchor(void* self, bool anchor);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#isAnchor)
///
/// @param self QTextImageFormat*
bool q_textimageformat_is_anchor(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorHref)
///
/// @param self QTextImageFormat*
/// @param value const char*
void q_textimageformat_set_anchor_href(void* self, const char* value);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#anchorHref)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextImageFormat*
const char* q_textimageformat_anchor_href(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorNames)
///
/// @param self QTextImageFormat*
/// @param names const char**
void q_textimageformat_set_anchor_names(void* self, const char* names[]);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#anchorNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextImageFormat*
const char** q_textimageformat_anchor_names(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellRowSpan)
///
/// @param self QTextImageFormat*
/// @param tableCellRowSpan int
void q_textimageformat_set_table_cell_row_span(void* self, int tableCellRowSpan);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellRowSpan)
///
/// @param self QTextImageFormat*
int32_t q_textimageformat_table_cell_row_span(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellColumnSpan)
///
/// @param self QTextImageFormat*
/// @param tableCellColumnSpan int
void q_textimageformat_set_table_cell_column_span(void* self, int tableCellColumnSpan);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellColumnSpan)
///
/// @param self QTextImageFormat*
int32_t q_textimageformat_table_cell_column_span(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
///
/// @param self QTextImageFormat*
/// @param font QFont*
/// @param behavior enum QTextCharFormat__FontPropertiesInheritanceBehavior
void q_textimageformat_set_font2(void* self, void* font, int32_t behavior);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
///
/// @param self QTextImageFormat*
/// @param hint enum QFont__StyleHint
/// @param strategy enum QFont__StyleStrategy
void q_textimageformat_set_font_style_hint2(void* self, int32_t hint, int32_t strategy);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
///
/// @param self QTextImageFormat*
/// @param rhs QTextFormat*
void q_textimageformat_operator_assign(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#swap)
///
/// @param self QTextImageFormat*
/// @param other QTextFormat*
void q_textimageformat_swap(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#merge)
///
/// @param self QTextImageFormat*
/// @param other QTextFormat*
void q_textimageformat_merge(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
///
/// @param self QTextImageFormat*
bool q_textimageformat_is_empty(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#type)
///
/// @param self QTextImageFormat*
int32_t q_textimageformat_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
///
/// @param self QTextImageFormat*
int32_t q_textimageformat_object_index(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
///
/// @param self QTextImageFormat*
/// @param object int
void q_textimageformat_set_object_index(void* self, int object);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#property)
///
/// @param self QTextImageFormat*
/// @param propertyId int
QVariant* q_textimageformat_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// @param self QTextImageFormat*
/// @param propertyId int
/// @param value QVariant*
void q_textimageformat_set_property(void* self, int propertyId, void* value);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
///
/// @param self QTextImageFormat*
/// @param propertyId int
void q_textimageformat_clear_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
///
/// @param self QTextImageFormat*
/// @param propertyId int
bool q_textimageformat_has_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
///
/// @param self QTextImageFormat*
/// @param propertyId int
bool q_textimageformat_bool_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
///
/// @param self QTextImageFormat*
/// @param propertyId int
int32_t q_textimageformat_int_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
///
/// @param self QTextImageFormat*
/// @param propertyId int
double q_textimageformat_double_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextImageFormat*
/// @param propertyId int
const char* q_textimageformat_string_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
///
/// @param self QTextImageFormat*
/// @param propertyId int
QColor* q_textimageformat_color_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
///
/// @param self QTextImageFormat*
/// @param propertyId int
QPen* q_textimageformat_pen_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
///
/// @param self QTextImageFormat*
/// @param propertyId int
QBrush* q_textimageformat_brush_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
///
/// @param self QTextImageFormat*
/// @param propertyId int
QTextLength* q_textimageformat_length_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
///
/// @param self QTextImageFormat*
/// @param propertyId int
libqt_list /* of QTextLength* */ q_textimageformat_length_vector_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// @param self QTextImageFormat*
/// @param propertyId int
/// @param lengths libqt_list /* of QTextLength* */
void q_textimageformat_set_property2(void* self, int propertyId, libqt_list lengths);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#properties)
///
/// @param self QTextImageFormat*
libqt_map /* of int to QVariant* */ q_textimageformat_properties(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
///
/// @param self QTextImageFormat*
int32_t q_textimageformat_property_count(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
///
/// @param self QTextImageFormat*
/// @param typeVal int
void q_textimageformat_set_object_type(void* self, int typeVal);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectType)
///
/// @param self QTextImageFormat*
int32_t q_textimageformat_object_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
///
/// @param self QTextImageFormat*
bool q_textimageformat_is_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
///
/// @param self QTextImageFormat*
bool q_textimageformat_is_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
///
/// @param self QTextImageFormat*
bool q_textimageformat_is_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
///
/// @param self QTextImageFormat*
bool q_textimageformat_is_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
///
/// @param self QTextImageFormat*
bool q_textimageformat_is_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
///
/// @param self QTextImageFormat*
bool q_textimageformat_is_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
///
/// @param self QTextImageFormat*
bool q_textimageformat_is_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
///
/// @param self QTextImageFormat*
QTextBlockFormat* q_textimageformat_to_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
///
/// @param self QTextImageFormat*
QTextCharFormat* q_textimageformat_to_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
///
/// @param self QTextImageFormat*
QTextListFormat* q_textimageformat_to_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
///
/// @param self QTextImageFormat*
QTextTableFormat* q_textimageformat_to_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
///
/// @param self QTextImageFormat*
QTextFrameFormat* q_textimageformat_to_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
///
/// @param self QTextImageFormat*
QTextImageFormat* q_textimageformat_to_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
///
/// @param self QTextImageFormat*
QTextTableCellFormat* q_textimageformat_to_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
///
/// @param self QTextImageFormat*
/// @param rhs QTextFormat*
bool q_textimageformat_operator_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
///
/// @param self QTextImageFormat*
/// @param rhs QTextFormat*
bool q_textimageformat_operator_not_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator)
///
/// @param self QTextImageFormat*
QVariant* q_textimageformat_to_q_variant(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
///
/// @param self QTextImageFormat*
/// @param direction enum Qt__LayoutDirection
void q_textimageformat_set_layout_direction(void* self, int32_t direction);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
///
/// @param self QTextImageFormat*
///
/// @return enum Qt__LayoutDirection
int32_t q_textimageformat_layout_direction(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
///
/// @param self QTextImageFormat*
/// @param brush QBrush*
void q_textimageformat_set_background(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#background)
///
/// @param self QTextImageFormat*
QBrush* q_textimageformat_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
///
/// @param self QTextImageFormat*
void q_textimageformat_clear_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
///
/// @param self QTextImageFormat*
/// @param brush QBrush*
void q_textimageformat_set_foreground(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#foreground)
///
/// @param self QTextImageFormat*
QBrush* q_textimageformat_foreground(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
///
/// @param self QTextImageFormat*
void q_textimageformat_clear_foreground(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextimageformat.html#dtor.QTextImageFormat)
///
/// Delete this object from C++ memory.
///
/// @param self QTextImageFormat*
void q_textimageformat_delete(void* self);

/// https://doc.qt.io/qt-6/qtextframeformat.html

/// q_textframeformat_new constructs a new QTextFrameFormat object.
///
QTextFrameFormat* q_textframeformat_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#isValid)
///
/// @param self QTextFrameFormat*
bool q_textframeformat_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setPosition)
///
/// @param self QTextFrameFormat*
/// @param f enum QTextFrameFormat__Position
void q_textframeformat_set_position(void* self, int32_t f);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#position)
///
/// @param self QTextFrameFormat*
///
/// @return enum QTextFrameFormat__Position
int32_t q_textframeformat_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setBorder)
///
/// @param self QTextFrameFormat*
/// @param border double
void q_textframeformat_set_border(void* self, double border);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#border)
///
/// @param self QTextFrameFormat*
double q_textframeformat_border(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setBorderBrush)
///
/// @param self QTextFrameFormat*
/// @param brush QBrush*
void q_textframeformat_set_border_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#borderBrush)
///
/// @param self QTextFrameFormat*
QBrush* q_textframeformat_border_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setBorderStyle)
///
/// @param self QTextFrameFormat*
/// @param style enum QTextFrameFormat__BorderStyle
void q_textframeformat_set_border_style(void* self, int32_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#borderStyle)
///
/// @param self QTextFrameFormat*
///
/// @return enum QTextFrameFormat__BorderStyle
int32_t q_textframeformat_border_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setMargin)
///
/// @param self QTextFrameFormat*
/// @param margin double
void q_textframeformat_set_margin(void* self, double margin);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#margin)
///
/// @param self QTextFrameFormat*
double q_textframeformat_margin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setTopMargin)
///
/// @param self QTextFrameFormat*
/// @param margin double
void q_textframeformat_set_top_margin(void* self, double margin);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#topMargin)
///
/// @param self QTextFrameFormat*
double q_textframeformat_top_margin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setBottomMargin)
///
/// @param self QTextFrameFormat*
/// @param margin double
void q_textframeformat_set_bottom_margin(void* self, double margin);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#bottomMargin)
///
/// @param self QTextFrameFormat*
double q_textframeformat_bottom_margin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setLeftMargin)
///
/// @param self QTextFrameFormat*
/// @param margin double
void q_textframeformat_set_left_margin(void* self, double margin);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#leftMargin)
///
/// @param self QTextFrameFormat*
double q_textframeformat_left_margin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setRightMargin)
///
/// @param self QTextFrameFormat*
/// @param margin double
void q_textframeformat_set_right_margin(void* self, double margin);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#rightMargin)
///
/// @param self QTextFrameFormat*
double q_textframeformat_right_margin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setPadding)
///
/// @param self QTextFrameFormat*
/// @param padding double
void q_textframeformat_set_padding(void* self, double padding);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#padding)
///
/// @param self QTextFrameFormat*
double q_textframeformat_padding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setWidth)
///
/// @param self QTextFrameFormat*
/// @param width double
void q_textframeformat_set_width(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setWidth)
///
/// @param self QTextFrameFormat*
/// @param length QTextLength*
void q_textframeformat_set_width2(void* self, void* length);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#width)
///
/// @param self QTextFrameFormat*
QTextLength* q_textframeformat_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setHeight)
///
/// @param self QTextFrameFormat*
/// @param height double
void q_textframeformat_set_height(void* self, double height);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setHeight)
///
/// @param self QTextFrameFormat*
/// @param height QTextLength*
void q_textframeformat_set_height2(void* self, void* height);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#height)
///
/// @param self QTextFrameFormat*
QTextLength* q_textframeformat_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setPageBreakPolicy)
///
/// @param self QTextFrameFormat*
/// @param flags flag of enum QTextFormat__PageBreakFlag
void q_textframeformat_set_page_break_policy(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#pageBreakPolicy)
///
/// @param self QTextFrameFormat*
///
/// @return flag of enum QTextFormat__PageBreakFlag
int64_t q_textframeformat_page_break_policy(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
///
/// @param self QTextFrameFormat*
/// @param rhs QTextFormat*
void q_textframeformat_operator_assign(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#swap)
///
/// @param self QTextFrameFormat*
/// @param other QTextFormat*
void q_textframeformat_swap(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#merge)
///
/// @param self QTextFrameFormat*
/// @param other QTextFormat*
void q_textframeformat_merge(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
///
/// @param self QTextFrameFormat*
bool q_textframeformat_is_empty(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#type)
///
/// @param self QTextFrameFormat*
int32_t q_textframeformat_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
///
/// @param self QTextFrameFormat*
int32_t q_textframeformat_object_index(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
///
/// @param self QTextFrameFormat*
/// @param object int
void q_textframeformat_set_object_index(void* self, int object);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#property)
///
/// @param self QTextFrameFormat*
/// @param propertyId int
QVariant* q_textframeformat_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// @param self QTextFrameFormat*
/// @param propertyId int
/// @param value QVariant*
void q_textframeformat_set_property(void* self, int propertyId, void* value);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
///
/// @param self QTextFrameFormat*
/// @param propertyId int
void q_textframeformat_clear_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
///
/// @param self QTextFrameFormat*
/// @param propertyId int
bool q_textframeformat_has_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
///
/// @param self QTextFrameFormat*
/// @param propertyId int
bool q_textframeformat_bool_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
///
/// @param self QTextFrameFormat*
/// @param propertyId int
int32_t q_textframeformat_int_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
///
/// @param self QTextFrameFormat*
/// @param propertyId int
double q_textframeformat_double_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextFrameFormat*
/// @param propertyId int
const char* q_textframeformat_string_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
///
/// @param self QTextFrameFormat*
/// @param propertyId int
QColor* q_textframeformat_color_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
///
/// @param self QTextFrameFormat*
/// @param propertyId int
QPen* q_textframeformat_pen_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
///
/// @param self QTextFrameFormat*
/// @param propertyId int
QBrush* q_textframeformat_brush_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
///
/// @param self QTextFrameFormat*
/// @param propertyId int
QTextLength* q_textframeformat_length_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
///
/// @param self QTextFrameFormat*
/// @param propertyId int
libqt_list /* of QTextLength* */ q_textframeformat_length_vector_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// @param self QTextFrameFormat*
/// @param propertyId int
/// @param lengths libqt_list /* of QTextLength* */
void q_textframeformat_set_property2(void* self, int propertyId, libqt_list lengths);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#properties)
///
/// @param self QTextFrameFormat*
libqt_map /* of int to QVariant* */ q_textframeformat_properties(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
///
/// @param self QTextFrameFormat*
int32_t q_textframeformat_property_count(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
///
/// @param self QTextFrameFormat*
/// @param typeVal int
void q_textframeformat_set_object_type(void* self, int typeVal);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectType)
///
/// @param self QTextFrameFormat*
int32_t q_textframeformat_object_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
///
/// @param self QTextFrameFormat*
bool q_textframeformat_is_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
///
/// @param self QTextFrameFormat*
bool q_textframeformat_is_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
///
/// @param self QTextFrameFormat*
bool q_textframeformat_is_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
///
/// @param self QTextFrameFormat*
bool q_textframeformat_is_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
///
/// @param self QTextFrameFormat*
bool q_textframeformat_is_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
///
/// @param self QTextFrameFormat*
bool q_textframeformat_is_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
///
/// @param self QTextFrameFormat*
bool q_textframeformat_is_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
///
/// @param self QTextFrameFormat*
QTextBlockFormat* q_textframeformat_to_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
///
/// @param self QTextFrameFormat*
QTextCharFormat* q_textframeformat_to_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
///
/// @param self QTextFrameFormat*
QTextListFormat* q_textframeformat_to_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
///
/// @param self QTextFrameFormat*
QTextTableFormat* q_textframeformat_to_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
///
/// @param self QTextFrameFormat*
QTextFrameFormat* q_textframeformat_to_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
///
/// @param self QTextFrameFormat*
QTextImageFormat* q_textframeformat_to_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
///
/// @param self QTextFrameFormat*
QTextTableCellFormat* q_textframeformat_to_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
///
/// @param self QTextFrameFormat*
/// @param rhs QTextFormat*
bool q_textframeformat_operator_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
///
/// @param self QTextFrameFormat*
/// @param rhs QTextFormat*
bool q_textframeformat_operator_not_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator)
///
/// @param self QTextFrameFormat*
QVariant* q_textframeformat_to_q_variant(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
///
/// @param self QTextFrameFormat*
/// @param direction enum Qt__LayoutDirection
void q_textframeformat_set_layout_direction(void* self, int32_t direction);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
///
/// @param self QTextFrameFormat*
///
/// @return enum Qt__LayoutDirection
int32_t q_textframeformat_layout_direction(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
///
/// @param self QTextFrameFormat*
/// @param brush QBrush*
void q_textframeformat_set_background(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#background)
///
/// @param self QTextFrameFormat*
QBrush* q_textframeformat_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
///
/// @param self QTextFrameFormat*
void q_textframeformat_clear_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
///
/// @param self QTextFrameFormat*
/// @param brush QBrush*
void q_textframeformat_set_foreground(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#foreground)
///
/// @param self QTextFrameFormat*
QBrush* q_textframeformat_foreground(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
///
/// @param self QTextFrameFormat*
void q_textframeformat_clear_foreground(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#dtor.QTextFrameFormat)
///
/// Delete this object from C++ memory.
///
/// @param self QTextFrameFormat*
void q_textframeformat_delete(void* self);

/// https://doc.qt.io/qt-6/qtexttableformat.html

/// q_texttableformat_new constructs a new QTextTableFormat object.
///
QTextTableFormat* q_texttableformat_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#isValid)
///
/// @param self QTextTableFormat*
bool q_texttableformat_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#columns)
///
/// @param self QTextTableFormat*
int32_t q_texttableformat_columns(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#setColumns)
///
/// @param self QTextTableFormat*
/// @param columns int
void q_texttableformat_set_columns(void* self, int columns);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#setColumnWidthConstraints)
///
/// @param self QTextTableFormat*
/// @param constraints libqt_list /* of QTextLength* */
void q_texttableformat_set_column_width_constraints(void* self, libqt_list constraints);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#columnWidthConstraints)
///
/// @param self QTextTableFormat*
libqt_list /* of QTextLength* */ q_texttableformat_column_width_constraints(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#clearColumnWidthConstraints)
///
/// @param self QTextTableFormat*
void q_texttableformat_clear_column_width_constraints(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#cellSpacing)
///
/// @param self QTextTableFormat*
double q_texttableformat_cell_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#setCellSpacing)
///
/// @param self QTextTableFormat*
/// @param spacing double
void q_texttableformat_set_cell_spacing(void* self, double spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#cellPadding)
///
/// @param self QTextTableFormat*
double q_texttableformat_cell_padding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#setCellPadding)
///
/// @param self QTextTableFormat*
/// @param padding double
void q_texttableformat_set_cell_padding(void* self, double padding);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#setAlignment)
///
/// @param self QTextTableFormat*
/// @param alignment flag of enum Qt__AlignmentFlag
void q_texttableformat_set_alignment(void* self, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#alignment)
///
/// @param self QTextTableFormat*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t q_texttableformat_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#setHeaderRowCount)
///
/// @param self QTextTableFormat*
/// @param count int
void q_texttableformat_set_header_row_count(void* self, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#headerRowCount)
///
/// @param self QTextTableFormat*
int32_t q_texttableformat_header_row_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#setBorderCollapse)
///
/// @param self QTextTableFormat*
/// @param borderCollapse bool
void q_texttableformat_set_border_collapse(void* self, bool borderCollapse);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#borderCollapse)
///
/// @param self QTextTableFormat*
bool q_texttableformat_border_collapse(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setPosition)
///
/// @param self QTextTableFormat*
/// @param f enum QTextFrameFormat__Position
void q_texttableformat_set_position(void* self, int32_t f);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#position)
///
/// @param self QTextTableFormat*
///
/// @return enum QTextFrameFormat__Position
int32_t q_texttableformat_position(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setBorder)
///
/// @param self QTextTableFormat*
/// @param border double
void q_texttableformat_set_border(void* self, double border);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#border)
///
/// @param self QTextTableFormat*
double q_texttableformat_border(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setBorderBrush)
///
/// @param self QTextTableFormat*
/// @param brush QBrush*
void q_texttableformat_set_border_brush(void* self, void* brush);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#borderBrush)
///
/// @param self QTextTableFormat*
QBrush* q_texttableformat_border_brush(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setBorderStyle)
///
/// @param self QTextTableFormat*
/// @param style enum QTextFrameFormat__BorderStyle
void q_texttableformat_set_border_style(void* self, int32_t style);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#borderStyle)
///
/// @param self QTextTableFormat*
///
/// @return enum QTextFrameFormat__BorderStyle
int32_t q_texttableformat_border_style(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setMargin)
///
/// @param self QTextTableFormat*
/// @param margin double
void q_texttableformat_set_margin(void* self, double margin);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#margin)
///
/// @param self QTextTableFormat*
double q_texttableformat_margin(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setTopMargin)
///
/// @param self QTextTableFormat*
/// @param margin double
void q_texttableformat_set_top_margin(void* self, double margin);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#topMargin)
///
/// @param self QTextTableFormat*
double q_texttableformat_top_margin(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setBottomMargin)
///
/// @param self QTextTableFormat*
/// @param margin double
void q_texttableformat_set_bottom_margin(void* self, double margin);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#bottomMargin)
///
/// @param self QTextTableFormat*
double q_texttableformat_bottom_margin(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setLeftMargin)
///
/// @param self QTextTableFormat*
/// @param margin double
void q_texttableformat_set_left_margin(void* self, double margin);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#leftMargin)
///
/// @param self QTextTableFormat*
double q_texttableformat_left_margin(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setRightMargin)
///
/// @param self QTextTableFormat*
/// @param margin double
void q_texttableformat_set_right_margin(void* self, double margin);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#rightMargin)
///
/// @param self QTextTableFormat*
double q_texttableformat_right_margin(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setPadding)
///
/// @param self QTextTableFormat*
/// @param padding double
void q_texttableformat_set_padding(void* self, double padding);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#padding)
///
/// @param self QTextTableFormat*
double q_texttableformat_padding(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setWidth)
///
/// @param self QTextTableFormat*
/// @param width double
void q_texttableformat_set_width(void* self, double width);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setWidth)
///
/// @param self QTextTableFormat*
/// @param length QTextLength*
void q_texttableformat_set_width2(void* self, void* length);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#width)
///
/// @param self QTextTableFormat*
QTextLength* q_texttableformat_width(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setHeight)
///
/// @param self QTextTableFormat*
/// @param height double
void q_texttableformat_set_height(void* self, double height);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setHeight)
///
/// @param self QTextTableFormat*
/// @param height QTextLength*
void q_texttableformat_set_height2(void* self, void* height);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#height)
///
/// @param self QTextTableFormat*
QTextLength* q_texttableformat_height(void* self);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#setPageBreakPolicy)
///
/// @param self QTextTableFormat*
/// @param flags flag of enum QTextFormat__PageBreakFlag
void q_texttableformat_set_page_break_policy(void* self, int64_t flags);

/// Inherited from QTextFrameFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframeformat.html#pageBreakPolicy)
///
/// @param self QTextTableFormat*
///
/// @return flag of enum QTextFormat__PageBreakFlag
int64_t q_texttableformat_page_break_policy(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
///
/// @param self QTextTableFormat*
/// @param rhs QTextFormat*
void q_texttableformat_operator_assign(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#swap)
///
/// @param self QTextTableFormat*
/// @param other QTextFormat*
void q_texttableformat_swap(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#merge)
///
/// @param self QTextTableFormat*
/// @param other QTextFormat*
void q_texttableformat_merge(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
///
/// @param self QTextTableFormat*
bool q_texttableformat_is_empty(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#type)
///
/// @param self QTextTableFormat*
int32_t q_texttableformat_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
///
/// @param self QTextTableFormat*
int32_t q_texttableformat_object_index(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
///
/// @param self QTextTableFormat*
/// @param object int
void q_texttableformat_set_object_index(void* self, int object);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#property)
///
/// @param self QTextTableFormat*
/// @param propertyId int
QVariant* q_texttableformat_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// @param self QTextTableFormat*
/// @param propertyId int
/// @param value QVariant*
void q_texttableformat_set_property(void* self, int propertyId, void* value);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
///
/// @param self QTextTableFormat*
/// @param propertyId int
void q_texttableformat_clear_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
///
/// @param self QTextTableFormat*
/// @param propertyId int
bool q_texttableformat_has_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
///
/// @param self QTextTableFormat*
/// @param propertyId int
bool q_texttableformat_bool_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
///
/// @param self QTextTableFormat*
/// @param propertyId int
int32_t q_texttableformat_int_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
///
/// @param self QTextTableFormat*
/// @param propertyId int
double q_texttableformat_double_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextTableFormat*
/// @param propertyId int
const char* q_texttableformat_string_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
///
/// @param self QTextTableFormat*
/// @param propertyId int
QColor* q_texttableformat_color_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
///
/// @param self QTextTableFormat*
/// @param propertyId int
QPen* q_texttableformat_pen_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
///
/// @param self QTextTableFormat*
/// @param propertyId int
QBrush* q_texttableformat_brush_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
///
/// @param self QTextTableFormat*
/// @param propertyId int
QTextLength* q_texttableformat_length_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
///
/// @param self QTextTableFormat*
/// @param propertyId int
libqt_list /* of QTextLength* */ q_texttableformat_length_vector_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// @param self QTextTableFormat*
/// @param propertyId int
/// @param lengths libqt_list /* of QTextLength* */
void q_texttableformat_set_property2(void* self, int propertyId, libqt_list lengths);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#properties)
///
/// @param self QTextTableFormat*
libqt_map /* of int to QVariant* */ q_texttableformat_properties(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
///
/// @param self QTextTableFormat*
int32_t q_texttableformat_property_count(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
///
/// @param self QTextTableFormat*
/// @param typeVal int
void q_texttableformat_set_object_type(void* self, int typeVal);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectType)
///
/// @param self QTextTableFormat*
int32_t q_texttableformat_object_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
///
/// @param self QTextTableFormat*
bool q_texttableformat_is_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
///
/// @param self QTextTableFormat*
bool q_texttableformat_is_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
///
/// @param self QTextTableFormat*
bool q_texttableformat_is_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
///
/// @param self QTextTableFormat*
bool q_texttableformat_is_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
///
/// @param self QTextTableFormat*
bool q_texttableformat_is_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
///
/// @param self QTextTableFormat*
bool q_texttableformat_is_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
///
/// @param self QTextTableFormat*
bool q_texttableformat_is_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
///
/// @param self QTextTableFormat*
QTextBlockFormat* q_texttableformat_to_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
///
/// @param self QTextTableFormat*
QTextCharFormat* q_texttableformat_to_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
///
/// @param self QTextTableFormat*
QTextListFormat* q_texttableformat_to_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
///
/// @param self QTextTableFormat*
QTextTableFormat* q_texttableformat_to_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
///
/// @param self QTextTableFormat*
QTextFrameFormat* q_texttableformat_to_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
///
/// @param self QTextTableFormat*
QTextImageFormat* q_texttableformat_to_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
///
/// @param self QTextTableFormat*
QTextTableCellFormat* q_texttableformat_to_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
///
/// @param self QTextTableFormat*
/// @param rhs QTextFormat*
bool q_texttableformat_operator_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
///
/// @param self QTextTableFormat*
/// @param rhs QTextFormat*
bool q_texttableformat_operator_not_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator)
///
/// @param self QTextTableFormat*
QVariant* q_texttableformat_to_q_variant(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
///
/// @param self QTextTableFormat*
/// @param direction enum Qt__LayoutDirection
void q_texttableformat_set_layout_direction(void* self, int32_t direction);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
///
/// @param self QTextTableFormat*
///
/// @return enum Qt__LayoutDirection
int32_t q_texttableformat_layout_direction(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
///
/// @param self QTextTableFormat*
/// @param brush QBrush*
void q_texttableformat_set_background(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#background)
///
/// @param self QTextTableFormat*
QBrush* q_texttableformat_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
///
/// @param self QTextTableFormat*
void q_texttableformat_clear_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
///
/// @param self QTextTableFormat*
/// @param brush QBrush*
void q_texttableformat_set_foreground(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#foreground)
///
/// @param self QTextTableFormat*
QBrush* q_texttableformat_foreground(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
///
/// @param self QTextTableFormat*
void q_texttableformat_clear_foreground(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttableformat.html#dtor.QTextTableFormat)
///
/// Delete this object from C++ memory.
///
/// @param self QTextTableFormat*
void q_texttableformat_delete(void* self);

/// https://doc.qt.io/qt-6/qtexttablecellformat.html

/// q_texttablecellformat_new constructs a new QTextTableCellFormat object.
///
QTextTableCellFormat* q_texttablecellformat_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#isValid)
///
/// @param self QTextTableCellFormat*
bool q_texttablecellformat_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setTopPadding)
///
/// @param self QTextTableCellFormat*
/// @param padding double
void q_texttablecellformat_set_top_padding(void* self, double padding);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#topPadding)
///
/// @param self QTextTableCellFormat*
double q_texttablecellformat_top_padding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBottomPadding)
///
/// @param self QTextTableCellFormat*
/// @param padding double
void q_texttablecellformat_set_bottom_padding(void* self, double padding);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#bottomPadding)
///
/// @param self QTextTableCellFormat*
double q_texttablecellformat_bottom_padding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setLeftPadding)
///
/// @param self QTextTableCellFormat*
/// @param padding double
void q_texttablecellformat_set_left_padding(void* self, double padding);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#leftPadding)
///
/// @param self QTextTableCellFormat*
double q_texttablecellformat_left_padding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setRightPadding)
///
/// @param self QTextTableCellFormat*
/// @param padding double
void q_texttablecellformat_set_right_padding(void* self, double padding);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#rightPadding)
///
/// @param self QTextTableCellFormat*
double q_texttablecellformat_right_padding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setPadding)
///
/// @param self QTextTableCellFormat*
/// @param padding double
void q_texttablecellformat_set_padding(void* self, double padding);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setTopBorder)
///
/// @param self QTextTableCellFormat*
/// @param width double
void q_texttablecellformat_set_top_border(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#topBorder)
///
/// @param self QTextTableCellFormat*
double q_texttablecellformat_top_border(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBottomBorder)
///
/// @param self QTextTableCellFormat*
/// @param width double
void q_texttablecellformat_set_bottom_border(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#bottomBorder)
///
/// @param self QTextTableCellFormat*
double q_texttablecellformat_bottom_border(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setLeftBorder)
///
/// @param self QTextTableCellFormat*
/// @param width double
void q_texttablecellformat_set_left_border(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#leftBorder)
///
/// @param self QTextTableCellFormat*
double q_texttablecellformat_left_border(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setRightBorder)
///
/// @param self QTextTableCellFormat*
/// @param width double
void q_texttablecellformat_set_right_border(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#rightBorder)
///
/// @param self QTextTableCellFormat*
double q_texttablecellformat_right_border(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBorder)
///
/// @param self QTextTableCellFormat*
/// @param width double
void q_texttablecellformat_set_border(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setTopBorderStyle)
///
/// @param self QTextTableCellFormat*
/// @param style enum QTextFrameFormat__BorderStyle
void q_texttablecellformat_set_top_border_style(void* self, int32_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#topBorderStyle)
///
/// @param self QTextTableCellFormat*
///
/// @return enum QTextFrameFormat__BorderStyle
int32_t q_texttablecellformat_top_border_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBottomBorderStyle)
///
/// @param self QTextTableCellFormat*
/// @param style enum QTextFrameFormat__BorderStyle
void q_texttablecellformat_set_bottom_border_style(void* self, int32_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#bottomBorderStyle)
///
/// @param self QTextTableCellFormat*
///
/// @return enum QTextFrameFormat__BorderStyle
int32_t q_texttablecellformat_bottom_border_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setLeftBorderStyle)
///
/// @param self QTextTableCellFormat*
/// @param style enum QTextFrameFormat__BorderStyle
void q_texttablecellformat_set_left_border_style(void* self, int32_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#leftBorderStyle)
///
/// @param self QTextTableCellFormat*
///
/// @return enum QTextFrameFormat__BorderStyle
int32_t q_texttablecellformat_left_border_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setRightBorderStyle)
///
/// @param self QTextTableCellFormat*
/// @param style enum QTextFrameFormat__BorderStyle
void q_texttablecellformat_set_right_border_style(void* self, int32_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#rightBorderStyle)
///
/// @param self QTextTableCellFormat*
///
/// @return enum QTextFrameFormat__BorderStyle
int32_t q_texttablecellformat_right_border_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBorderStyle)
///
/// @param self QTextTableCellFormat*
/// @param style enum QTextFrameFormat__BorderStyle
void q_texttablecellformat_set_border_style(void* self, int32_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setTopBorderBrush)
///
/// @param self QTextTableCellFormat*
/// @param brush QBrush*
void q_texttablecellformat_set_top_border_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#topBorderBrush)
///
/// @param self QTextTableCellFormat*
QBrush* q_texttablecellformat_top_border_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBottomBorderBrush)
///
/// @param self QTextTableCellFormat*
/// @param brush QBrush*
void q_texttablecellformat_set_bottom_border_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#bottomBorderBrush)
///
/// @param self QTextTableCellFormat*
QBrush* q_texttablecellformat_bottom_border_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setLeftBorderBrush)
///
/// @param self QTextTableCellFormat*
/// @param brush QBrush*
void q_texttablecellformat_set_left_border_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#leftBorderBrush)
///
/// @param self QTextTableCellFormat*
QBrush* q_texttablecellformat_left_border_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setRightBorderBrush)
///
/// @param self QTextTableCellFormat*
/// @param brush QBrush*
void q_texttablecellformat_set_right_border_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#rightBorderBrush)
///
/// @param self QTextTableCellFormat*
QBrush* q_texttablecellformat_right_border_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBorderBrush)
///
/// @param self QTextTableCellFormat*
/// @param brush QBrush*
void q_texttablecellformat_set_border_brush(void* self, void* brush);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
///
/// @param self QTextTableCellFormat*
/// @param font QFont*
void q_texttablecellformat_set_font(void* self, void* font);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#font)
///
/// @param self QTextTableCellFormat*
QFont* q_texttablecellformat_font(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamily)
///
/// @param self QTextTableCellFormat*
/// @param family const char*
void q_texttablecellformat_set_font_family(void* self, const char* family);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamily)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextTableCellFormat*
const char* q_texttablecellformat_font_family(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamilies)
///
/// @param self QTextTableCellFormat*
/// @param families const char**
void q_texttablecellformat_set_font_families(void* self, const char* families[]);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamilies)
///
/// @param self QTextTableCellFormat*
QVariant* q_texttablecellformat_font_families(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleName)
///
/// @param self QTextTableCellFormat*
/// @param styleName const char*
void q_texttablecellformat_set_font_style_name(void* self, const char* styleName);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleName)
///
/// @param self QTextTableCellFormat*
QVariant* q_texttablecellformat_font_style_name(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontPointSize)
///
/// @param self QTextTableCellFormat*
/// @param size double
void q_texttablecellformat_set_font_point_size(void* self, double size);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontPointSize)
///
/// @param self QTextTableCellFormat*
double q_texttablecellformat_font_point_size(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWeight)
///
/// @param self QTextTableCellFormat*
/// @param weight int
void q_texttablecellformat_set_font_weight(void* self, int weight);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontWeight)
///
/// @param self QTextTableCellFormat*
int32_t q_texttablecellformat_font_weight(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontItalic)
///
/// @param self QTextTableCellFormat*
/// @param italic bool
void q_texttablecellformat_set_font_italic(void* self, bool italic);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontItalic)
///
/// @param self QTextTableCellFormat*
bool q_texttablecellformat_font_italic(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontCapitalization)
///
/// @param self QTextTableCellFormat*
/// @param capitalization enum QFont__Capitalization
void q_texttablecellformat_set_font_capitalization(void* self, int32_t capitalization);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontCapitalization)
///
/// @param self QTextTableCellFormat*
///
/// @return enum QFont__Capitalization
int32_t q_texttablecellformat_font_capitalization(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacingType)
///
/// @param self QTextTableCellFormat*
/// @param letterSpacingType enum QFont__SpacingType
void q_texttablecellformat_set_font_letter_spacing_type(void* self, int32_t letterSpacingType);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacingType)
///
/// @param self QTextTableCellFormat*
///
/// @return enum QFont__SpacingType
int32_t q_texttablecellformat_font_letter_spacing_type(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacing)
///
/// @param self QTextTableCellFormat*
/// @param spacing double
void q_texttablecellformat_set_font_letter_spacing(void* self, double spacing);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacing)
///
/// @param self QTextTableCellFormat*
double q_texttablecellformat_font_letter_spacing(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWordSpacing)
///
/// @param self QTextTableCellFormat*
/// @param spacing double
void q_texttablecellformat_set_font_word_spacing(void* self, double spacing);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontWordSpacing)
///
/// @param self QTextTableCellFormat*
double q_texttablecellformat_font_word_spacing(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontUnderline)
///
/// @param self QTextTableCellFormat*
/// @param underline bool
void q_texttablecellformat_set_font_underline(void* self, bool underline);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontUnderline)
///
/// @param self QTextTableCellFormat*
bool q_texttablecellformat_font_underline(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontOverline)
///
/// @param self QTextTableCellFormat*
/// @param overline bool
void q_texttablecellformat_set_font_overline(void* self, bool overline);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontOverline)
///
/// @param self QTextTableCellFormat*
bool q_texttablecellformat_font_overline(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStrikeOut)
///
/// @param self QTextTableCellFormat*
/// @param strikeOut bool
void q_texttablecellformat_set_font_strike_out(void* self, bool strikeOut);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStrikeOut)
///
/// @param self QTextTableCellFormat*
bool q_texttablecellformat_font_strike_out(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineColor)
///
/// @param self QTextTableCellFormat*
/// @param color QColor*
void q_texttablecellformat_set_underline_color(void* self, void* color);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#underlineColor)
///
/// @param self QTextTableCellFormat*
QColor* q_texttablecellformat_underline_color(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFixedPitch)
///
/// @param self QTextTableCellFormat*
/// @param fixedPitch bool
void q_texttablecellformat_set_font_fixed_pitch(void* self, bool fixedPitch);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontFixedPitch)
///
/// @param self QTextTableCellFormat*
bool q_texttablecellformat_font_fixed_pitch(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStretch)
///
/// @param self QTextTableCellFormat*
/// @param factor int
void q_texttablecellformat_set_font_stretch(void* self, int factor);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStretch)
///
/// @param self QTextTableCellFormat*
int32_t q_texttablecellformat_font_stretch(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
///
/// @param self QTextTableCellFormat*
/// @param hint enum QFont__StyleHint
void q_texttablecellformat_set_font_style_hint(void* self, int32_t hint);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleStrategy)
///
/// @param self QTextTableCellFormat*
/// @param strategy enum QFont__StyleStrategy
void q_texttablecellformat_set_font_style_strategy(void* self, int32_t strategy);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleHint)
///
/// @param self QTextTableCellFormat*
///
/// @return enum QFont__StyleHint
int32_t q_texttablecellformat_font_style_hint(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleStrategy)
///
/// @param self QTextTableCellFormat*
///
/// @return enum QFont__StyleStrategy
int32_t q_texttablecellformat_font_style_strategy(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontHintingPreference)
///
/// @param self QTextTableCellFormat*
/// @param hintingPreference enum QFont__HintingPreference
void q_texttablecellformat_set_font_hinting_preference(void* self, int32_t hintingPreference);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontHintingPreference)
///
/// @param self QTextTableCellFormat*
///
/// @return enum QFont__HintingPreference
int32_t q_texttablecellformat_font_hinting_preference(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontKerning)
///
/// @param self QTextTableCellFormat*
/// @param enable bool
void q_texttablecellformat_set_font_kerning(void* self, bool enable);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#fontKerning)
///
/// @param self QTextTableCellFormat*
bool q_texttablecellformat_font_kerning(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineStyle)
///
/// @param self QTextTableCellFormat*
/// @param style enum QTextCharFormat__UnderlineStyle
void q_texttablecellformat_set_underline_style(void* self, int32_t style);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#underlineStyle)
///
/// @param self QTextTableCellFormat*
///
/// @return enum QTextCharFormat__UnderlineStyle
int32_t q_texttablecellformat_underline_style(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setVerticalAlignment)
///
/// @param self QTextTableCellFormat*
/// @param alignment enum QTextCharFormat__VerticalAlignment
void q_texttablecellformat_set_vertical_alignment(void* self, int32_t alignment);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#verticalAlignment)
///
/// @param self QTextTableCellFormat*
///
/// @return enum QTextCharFormat__VerticalAlignment
int32_t q_texttablecellformat_vertical_alignment(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTextOutline)
///
/// @param self QTextTableCellFormat*
/// @param pen QPen*
void q_texttablecellformat_set_text_outline(void* self, void* pen);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#textOutline)
///
/// @param self QTextTableCellFormat*
QPen* q_texttablecellformat_text_outline(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setToolTip)
///
/// @param self QTextTableCellFormat*
/// @param tip const char*
void q_texttablecellformat_set_tool_tip(void* self, const char* tip);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextTableCellFormat*
const char* q_texttablecellformat_tool_tip(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setSuperScriptBaseline)
///
/// @param self QTextTableCellFormat*
/// @param baseline double
void q_texttablecellformat_set_super_script_baseline(void* self, double baseline);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#superScriptBaseline)
///
/// @param self QTextTableCellFormat*
double q_texttablecellformat_super_script_baseline(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setSubScriptBaseline)
///
/// @param self QTextTableCellFormat*
/// @param baseline double
void q_texttablecellformat_set_sub_script_baseline(void* self, double baseline);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#subScriptBaseline)
///
/// @param self QTextTableCellFormat*
double q_texttablecellformat_sub_script_baseline(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setBaselineOffset)
///
/// @param self QTextTableCellFormat*
/// @param baseline double
void q_texttablecellformat_set_baseline_offset(void* self, double baseline);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#baselineOffset)
///
/// @param self QTextTableCellFormat*
double q_texttablecellformat_baseline_offset(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchor)
///
/// @param self QTextTableCellFormat*
/// @param anchor bool
void q_texttablecellformat_set_anchor(void* self, bool anchor);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#isAnchor)
///
/// @param self QTextTableCellFormat*
bool q_texttablecellformat_is_anchor(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorHref)
///
/// @param self QTextTableCellFormat*
/// @param value const char*
void q_texttablecellformat_set_anchor_href(void* self, const char* value);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#anchorHref)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextTableCellFormat*
const char* q_texttablecellformat_anchor_href(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorNames)
///
/// @param self QTextTableCellFormat*
/// @param names const char**
void q_texttablecellformat_set_anchor_names(void* self, const char* names[]);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#anchorNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextTableCellFormat*
const char** q_texttablecellformat_anchor_names(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellRowSpan)
///
/// @param self QTextTableCellFormat*
/// @param tableCellRowSpan int
void q_texttablecellformat_set_table_cell_row_span(void* self, int tableCellRowSpan);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellRowSpan)
///
/// @param self QTextTableCellFormat*
int32_t q_texttablecellformat_table_cell_row_span(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellColumnSpan)
///
/// @param self QTextTableCellFormat*
/// @param tableCellColumnSpan int
void q_texttablecellformat_set_table_cell_column_span(void* self, int tableCellColumnSpan);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellColumnSpan)
///
/// @param self QTextTableCellFormat*
int32_t q_texttablecellformat_table_cell_column_span(void* self);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
///
/// @param self QTextTableCellFormat*
/// @param font QFont*
/// @param behavior enum QTextCharFormat__FontPropertiesInheritanceBehavior
void q_texttablecellformat_set_font2(void* self, void* font, int32_t behavior);

/// Inherited from QTextCharFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
///
/// @param self QTextTableCellFormat*
/// @param hint enum QFont__StyleHint
/// @param strategy enum QFont__StyleStrategy
void q_texttablecellformat_set_font_style_hint2(void* self, int32_t hint, int32_t strategy);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
///
/// @param self QTextTableCellFormat*
/// @param rhs QTextFormat*
void q_texttablecellformat_operator_assign(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#swap)
///
/// @param self QTextTableCellFormat*
/// @param other QTextFormat*
void q_texttablecellformat_swap(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#merge)
///
/// @param self QTextTableCellFormat*
/// @param other QTextFormat*
void q_texttablecellformat_merge(void* self, void* other);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
///
/// @param self QTextTableCellFormat*
bool q_texttablecellformat_is_empty(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#type)
///
/// @param self QTextTableCellFormat*
int32_t q_texttablecellformat_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
///
/// @param self QTextTableCellFormat*
int32_t q_texttablecellformat_object_index(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
///
/// @param self QTextTableCellFormat*
/// @param object int
void q_texttablecellformat_set_object_index(void* self, int object);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#property)
///
/// @param self QTextTableCellFormat*
/// @param propertyId int
QVariant* q_texttablecellformat_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// @param self QTextTableCellFormat*
/// @param propertyId int
/// @param value QVariant*
void q_texttablecellformat_set_property(void* self, int propertyId, void* value);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
///
/// @param self QTextTableCellFormat*
/// @param propertyId int
void q_texttablecellformat_clear_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
///
/// @param self QTextTableCellFormat*
/// @param propertyId int
bool q_texttablecellformat_has_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
///
/// @param self QTextTableCellFormat*
/// @param propertyId int
bool q_texttablecellformat_bool_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
///
/// @param self QTextTableCellFormat*
/// @param propertyId int
int32_t q_texttablecellformat_int_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
///
/// @param self QTextTableCellFormat*
/// @param propertyId int
double q_texttablecellformat_double_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextTableCellFormat*
/// @param propertyId int
const char* q_texttablecellformat_string_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
///
/// @param self QTextTableCellFormat*
/// @param propertyId int
QColor* q_texttablecellformat_color_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
///
/// @param self QTextTableCellFormat*
/// @param propertyId int
QPen* q_texttablecellformat_pen_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
///
/// @param self QTextTableCellFormat*
/// @param propertyId int
QBrush* q_texttablecellformat_brush_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
///
/// @param self QTextTableCellFormat*
/// @param propertyId int
QTextLength* q_texttablecellformat_length_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
///
/// @param self QTextTableCellFormat*
/// @param propertyId int
libqt_list /* of QTextLength* */ q_texttablecellformat_length_vector_property(void* self, int propertyId);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
///
/// @param self QTextTableCellFormat*
/// @param propertyId int
/// @param lengths libqt_list /* of QTextLength* */
void q_texttablecellformat_set_property2(void* self, int propertyId, libqt_list lengths);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#properties)
///
/// @param self QTextTableCellFormat*
libqt_map /* of int to QVariant* */ q_texttablecellformat_properties(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
///
/// @param self QTextTableCellFormat*
int32_t q_texttablecellformat_property_count(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
///
/// @param self QTextTableCellFormat*
/// @param typeVal int
void q_texttablecellformat_set_object_type(void* self, int typeVal);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#objectType)
///
/// @param self QTextTableCellFormat*
int32_t q_texttablecellformat_object_type(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
///
/// @param self QTextTableCellFormat*
bool q_texttablecellformat_is_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
///
/// @param self QTextTableCellFormat*
bool q_texttablecellformat_is_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
///
/// @param self QTextTableCellFormat*
bool q_texttablecellformat_is_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
///
/// @param self QTextTableCellFormat*
bool q_texttablecellformat_is_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
///
/// @param self QTextTableCellFormat*
bool q_texttablecellformat_is_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
///
/// @param self QTextTableCellFormat*
bool q_texttablecellformat_is_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
///
/// @param self QTextTableCellFormat*
bool q_texttablecellformat_is_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
///
/// @param self QTextTableCellFormat*
QTextBlockFormat* q_texttablecellformat_to_block_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
///
/// @param self QTextTableCellFormat*
QTextCharFormat* q_texttablecellformat_to_char_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
///
/// @param self QTextTableCellFormat*
QTextListFormat* q_texttablecellformat_to_list_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
///
/// @param self QTextTableCellFormat*
QTextTableFormat* q_texttablecellformat_to_table_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
///
/// @param self QTextTableCellFormat*
QTextFrameFormat* q_texttablecellformat_to_frame_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
///
/// @param self QTextTableCellFormat*
QTextImageFormat* q_texttablecellformat_to_image_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
///
/// @param self QTextTableCellFormat*
QTextTableCellFormat* q_texttablecellformat_to_table_cell_format(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
///
/// @param self QTextTableCellFormat*
/// @param rhs QTextFormat*
bool q_texttablecellformat_operator_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
///
/// @param self QTextTableCellFormat*
/// @param rhs QTextFormat*
bool q_texttablecellformat_operator_not_equal(void* self, void* rhs);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#operator)
///
/// @param self QTextTableCellFormat*
QVariant* q_texttablecellformat_to_q_variant(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
///
/// @param self QTextTableCellFormat*
/// @param direction enum Qt__LayoutDirection
void q_texttablecellformat_set_layout_direction(void* self, int32_t direction);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
///
/// @param self QTextTableCellFormat*
///
/// @return enum Qt__LayoutDirection
int32_t q_texttablecellformat_layout_direction(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
///
/// @param self QTextTableCellFormat*
/// @param brush QBrush*
void q_texttablecellformat_set_background(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#background)
///
/// @param self QTextTableCellFormat*
QBrush* q_texttablecellformat_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
///
/// @param self QTextTableCellFormat*
void q_texttablecellformat_clear_background(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
///
/// @param self QTextTableCellFormat*
/// @param brush QBrush*
void q_texttablecellformat_set_foreground(void* self, void* brush);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#foreground)
///
/// @param self QTextTableCellFormat*
QBrush* q_texttablecellformat_foreground(void* self);

/// Inherited from QTextFormat
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
///
/// @param self QTextTableCellFormat*
void q_texttablecellformat_clear_foreground(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecellformat.html#dtor.QTextTableCellFormat)
///
/// Delete this object from C++ memory.
///
/// @param self QTextTableCellFormat*
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
