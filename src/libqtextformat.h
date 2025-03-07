#pragma once
#ifndef SRCQT6C_LIBQTEXTFORMAT_H
#define SRCQT6C_LIBQTEXTFORMAT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqbrush.h"
#include "libqcolor.h"
#include "libqfont.h"
#include "libqpen.h"
#include <string.h>
#include "libqvariant.h"

QTextLength* q_textlength_new(void* other);
QTextLength* q_textlength_new2(void* other);
QTextLength* q_textlength_new3();
QTextLength* q_textlength_new4(int64_t typeVal, double value);
QTextLength* q_textlength_new5(void* param1);
void q_textlength_copy_assign(void* self, void* other);
void q_textlength_move_assign(void* self, void* other);
int64_t q_textlength_type(void* self);
double q_textlength_value(void* self, double maximumLength);
double q_textlength_raw_value(void* self);
bool q_textlength_operator_equal(void* self, void* other);
bool q_textlength_operator_not_equal(void* self, void* other);
QVariant* q_textlength_to_q_variant(void* self);
void q_textlength_delete(void* self);

QTextFormat* q_textformat_new();
QTextFormat* q_textformat_new2(int typeVal);
QTextFormat* q_textformat_new3(void* rhs);
void q_textformat_operator_assign(void* self, void* rhs);
void q_textformat_swap(void* self, void* other);
void q_textformat_merge(void* self, void* other);
bool q_textformat_is_valid(void* self);
bool q_textformat_is_empty(void* self);
int32_t q_textformat_type(void* self);
int32_t q_textformat_object_index(void* self);
void q_textformat_set_object_index(void* self, int object);
QVariant* q_textformat_property(void* self, int propertyId);
void q_textformat_set_property(void* self, int propertyId, void* value);
void q_textformat_clear_property(void* self, int propertyId);
bool q_textformat_has_property(void* self, int propertyId);
bool q_textformat_bool_property(void* self, int propertyId);
int32_t q_textformat_int_property(void* self, int propertyId);
double q_textformat_double_property(void* self, int propertyId);
const char* q_textformat_string_property(void* self, int propertyId);
QColor* q_textformat_color_property(void* self, int propertyId);
QPen* q_textformat_pen_property(void* self, int propertyId);
QBrush* q_textformat_brush_property(void* self, int propertyId);
QTextLength* q_textformat_length_property(void* self, int propertyId);
libqt_list /* of QTextLength* */ q_textformat_length_vector_property(void* self, int propertyId);
void q_textformat_set_property2(void* self, int propertyId, void* lengths[]);
libqt_map /* of int to QVariant* */ q_textformat_properties(void* self);
int32_t q_textformat_property_count(void* self);
void q_textformat_set_object_type(void* self, int typeVal);
int32_t q_textformat_object_type(void* self);
bool q_textformat_is_char_format(void* self);
bool q_textformat_is_block_format(void* self);
bool q_textformat_is_list_format(void* self);
bool q_textformat_is_frame_format(void* self);
bool q_textformat_is_image_format(void* self);
bool q_textformat_is_table_format(void* self);
bool q_textformat_is_table_cell_format(void* self);
QTextBlockFormat* q_textformat_to_block_format(void* self);
QTextCharFormat* q_textformat_to_char_format(void* self);
QTextListFormat* q_textformat_to_list_format(void* self);
QTextTableFormat* q_textformat_to_table_format(void* self);
QTextFrameFormat* q_textformat_to_frame_format(void* self);
QTextImageFormat* q_textformat_to_image_format(void* self);
QTextTableCellFormat* q_textformat_to_table_cell_format(void* self);
bool q_textformat_operator_equal(void* self, void* rhs);
bool q_textformat_operator_not_equal(void* self, void* rhs);
QVariant* q_textformat_to_q_variant(void* self);
void q_textformat_set_layout_direction(void* self, int64_t direction);
int64_t q_textformat_layout_direction(void* self);
void q_textformat_set_background(void* self, void* brush);
QBrush* q_textformat_background(void* self);
void q_textformat_clear_background(void* self);
void q_textformat_set_foreground(void* self, void* brush);
QBrush* q_textformat_foreground(void* self);
void q_textformat_clear_foreground(void* self);
void q_textformat_delete(void* self);

QTextCharFormat* q_textcharformat_new();
QTextCharFormat* q_textcharformat_new2(void* param1);
bool q_textcharformat_is_valid(void* self);
void q_textcharformat_set_font(void* self, void* font);
QFont* q_textcharformat_font(void* self);
void q_textcharformat_set_font_family(void* self, const char* family);
const char* q_textcharformat_font_family(void* self);
void q_textcharformat_set_font_families(void* self, const char* families[]);
QVariant* q_textcharformat_font_families(void* self);
void q_textcharformat_set_font_style_name(void* self, const char* styleName);
QVariant* q_textcharformat_font_style_name(void* self);
void q_textcharformat_set_font_point_size(void* self, double size);
double q_textcharformat_font_point_size(void* self);
void q_textcharformat_set_font_weight(void* self, int weight);
int32_t q_textcharformat_font_weight(void* self);
void q_textcharformat_set_font_italic(void* self, bool italic);
bool q_textcharformat_font_italic(void* self);
void q_textcharformat_set_font_capitalization(void* self, int64_t capitalization);
int64_t q_textcharformat_font_capitalization(void* self);
void q_textcharformat_set_font_letter_spacing_type(void* self, int64_t letterSpacingType);
int64_t q_textcharformat_font_letter_spacing_type(void* self);
void q_textcharformat_set_font_letter_spacing(void* self, double spacing);
double q_textcharformat_font_letter_spacing(void* self);
void q_textcharformat_set_font_word_spacing(void* self, double spacing);
double q_textcharformat_font_word_spacing(void* self);
void q_textcharformat_set_font_underline(void* self, bool underline);
bool q_textcharformat_font_underline(void* self);
void q_textcharformat_set_font_overline(void* self, bool overline);
bool q_textcharformat_font_overline(void* self);
void q_textcharformat_set_font_strike_out(void* self, bool strikeOut);
bool q_textcharformat_font_strike_out(void* self);
void q_textcharformat_set_underline_color(void* self, void* color);
QColor* q_textcharformat_underline_color(void* self);
void q_textcharformat_set_font_fixed_pitch(void* self, bool fixedPitch);
bool q_textcharformat_font_fixed_pitch(void* self);
void q_textcharformat_set_font_stretch(void* self, int factor);
int32_t q_textcharformat_font_stretch(void* self);
void q_textcharformat_set_font_style_hint(void* self, int64_t hint);
void q_textcharformat_set_font_style_strategy(void* self, int64_t strategy);
int64_t q_textcharformat_font_style_hint(void* self);
int64_t q_textcharformat_font_style_strategy(void* self);
void q_textcharformat_set_font_hinting_preference(void* self, int64_t hintingPreference);
int64_t q_textcharformat_font_hinting_preference(void* self);
void q_textcharformat_set_font_kerning(void* self, bool enable);
bool q_textcharformat_font_kerning(void* self);
void q_textcharformat_set_underline_style(void* self, int64_t style);
int64_t q_textcharformat_underline_style(void* self);
void q_textcharformat_set_vertical_alignment(void* self, int64_t alignment);
int64_t q_textcharformat_vertical_alignment(void* self);
void q_textcharformat_set_text_outline(void* self, void* pen);
QPen* q_textcharformat_text_outline(void* self);
void q_textcharformat_set_tool_tip(void* self, const char* tip);
const char* q_textcharformat_tool_tip(void* self);
void q_textcharformat_set_super_script_baseline(void* self, double baseline);
double q_textcharformat_super_script_baseline(void* self);
void q_textcharformat_set_sub_script_baseline(void* self, double baseline);
double q_textcharformat_sub_script_baseline(void* self);
void q_textcharformat_set_baseline_offset(void* self, double baseline);
double q_textcharformat_baseline_offset(void* self);
void q_textcharformat_set_anchor(void* self, bool anchor);
bool q_textcharformat_is_anchor(void* self);
void q_textcharformat_set_anchor_href(void* self, const char* value);
const char* q_textcharformat_anchor_href(void* self);
void q_textcharformat_set_anchor_names(void* self, const char* names[]);
const char** q_textcharformat_anchor_names(void* self);
void q_textcharformat_set_table_cell_row_span(void* self, int tableCellRowSpan);
int32_t q_textcharformat_table_cell_row_span(void* self);
void q_textcharformat_set_table_cell_column_span(void* self, int tableCellColumnSpan);
int32_t q_textcharformat_table_cell_column_span(void* self);
void q_textcharformat_set_font2(void* self, void* font, int64_t behavior);
void q_textcharformat_set_font_style_hint2(void* self, int64_t hint, int64_t strategy);
void q_textcharformat_operator_assign(void* self, void* rhs);
void q_textcharformat_swap(void* self, void* other);
void q_textcharformat_merge(void* self, void* other);
bool q_textcharformat_is_empty(void* self);
int32_t q_textcharformat_type(void* self);
int32_t q_textcharformat_object_index(void* self);
void q_textcharformat_set_object_index(void* self, int object);
QVariant* q_textcharformat_property(void* self, int propertyId);
void q_textcharformat_set_property(void* self, int propertyId, void* value);
void q_textcharformat_clear_property(void* self, int propertyId);
bool q_textcharformat_has_property(void* self, int propertyId);
bool q_textcharformat_bool_property(void* self, int propertyId);
int32_t q_textcharformat_int_property(void* self, int propertyId);
double q_textcharformat_double_property(void* self, int propertyId);
const char* q_textcharformat_string_property(void* self, int propertyId);
QColor* q_textcharformat_color_property(void* self, int propertyId);
QPen* q_textcharformat_pen_property(void* self, int propertyId);
QBrush* q_textcharformat_brush_property(void* self, int propertyId);
QTextLength* q_textcharformat_length_property(void* self, int propertyId);
libqt_list /* of QTextLength* */ q_textcharformat_length_vector_property(void* self, int propertyId);
void q_textcharformat_set_property2(void* self, int propertyId, void* lengths[]);
libqt_map /* of int to QVariant* */ q_textcharformat_properties(void* self);
int32_t q_textcharformat_property_count(void* self);
void q_textcharformat_set_object_type(void* self, int typeVal);
int32_t q_textcharformat_object_type(void* self);
bool q_textcharformat_is_char_format(void* self);
bool q_textcharformat_is_block_format(void* self);
bool q_textcharformat_is_list_format(void* self);
bool q_textcharformat_is_frame_format(void* self);
bool q_textcharformat_is_image_format(void* self);
bool q_textcharformat_is_table_format(void* self);
bool q_textcharformat_is_table_cell_format(void* self);
QTextBlockFormat* q_textcharformat_to_block_format(void* self);
QTextCharFormat* q_textcharformat_to_char_format(void* self);
QTextListFormat* q_textcharformat_to_list_format(void* self);
QTextTableFormat* q_textcharformat_to_table_format(void* self);
QTextFrameFormat* q_textcharformat_to_frame_format(void* self);
QTextImageFormat* q_textcharformat_to_image_format(void* self);
QTextTableCellFormat* q_textcharformat_to_table_cell_format(void* self);
bool q_textcharformat_operator_equal(void* self, void* rhs);
bool q_textcharformat_operator_not_equal(void* self, void* rhs);
QVariant* q_textcharformat_to_q_variant(void* self);
void q_textcharformat_set_layout_direction(void* self, int64_t direction);
int64_t q_textcharformat_layout_direction(void* self);
void q_textcharformat_set_background(void* self, void* brush);
QBrush* q_textcharformat_background(void* self);
void q_textcharformat_clear_background(void* self);
void q_textcharformat_set_foreground(void* self, void* brush);
QBrush* q_textcharformat_foreground(void* self);
void q_textcharformat_clear_foreground(void* self);
void q_textcharformat_delete(void* self);

QTextBlockFormat* q_textblockformat_new();
QTextBlockFormat* q_textblockformat_new2(void* param1);
bool q_textblockformat_is_valid(void* self);
void q_textblockformat_set_alignment(void* self, int64_t alignment);
int64_t q_textblockformat_alignment(void* self);
void q_textblockformat_set_top_margin(void* self, double margin);
double q_textblockformat_top_margin(void* self);
void q_textblockformat_set_bottom_margin(void* self, double margin);
double q_textblockformat_bottom_margin(void* self);
void q_textblockformat_set_left_margin(void* self, double margin);
double q_textblockformat_left_margin(void* self);
void q_textblockformat_set_right_margin(void* self, double margin);
double q_textblockformat_right_margin(void* self);
void q_textblockformat_set_text_indent(void* self, double aindent);
double q_textblockformat_text_indent(void* self);
void q_textblockformat_set_indent(void* self, int indent);
int32_t q_textblockformat_indent(void* self);
void q_textblockformat_set_heading_level(void* self, int alevel);
int32_t q_textblockformat_heading_level(void* self);
void q_textblockformat_set_line_height(void* self, double height, int heightType);
double q_textblockformat_line_height(void* self, double scriptLineHeight, double scaling);
double q_textblockformat_line_height2(void* self);
int32_t q_textblockformat_line_height_type(void* self);
void q_textblockformat_set_non_breakable_lines(void* self, bool b);
bool q_textblockformat_non_breakable_lines(void* self);
void q_textblockformat_set_page_break_policy(void* self, int64_t flags);
int64_t q_textblockformat_page_break_policy(void* self);
void q_textblockformat_set_tab_positions(void* self, void* tabs[]);
libqt_list /* of QTextOption__Tab* */ q_textblockformat_tab_positions(void* self);
void q_textblockformat_set_marker(void* self, int64_t marker);
int64_t q_textblockformat_marker(void* self);
void q_textblockformat_operator_assign(void* self, void* rhs);
void q_textblockformat_swap(void* self, void* other);
void q_textblockformat_merge(void* self, void* other);
bool q_textblockformat_is_empty(void* self);
int32_t q_textblockformat_type(void* self);
int32_t q_textblockformat_object_index(void* self);
void q_textblockformat_set_object_index(void* self, int object);
QVariant* q_textblockformat_property(void* self, int propertyId);
void q_textblockformat_set_property(void* self, int propertyId, void* value);
void q_textblockformat_clear_property(void* self, int propertyId);
bool q_textblockformat_has_property(void* self, int propertyId);
bool q_textblockformat_bool_property(void* self, int propertyId);
int32_t q_textblockformat_int_property(void* self, int propertyId);
double q_textblockformat_double_property(void* self, int propertyId);
const char* q_textblockformat_string_property(void* self, int propertyId);
QColor* q_textblockformat_color_property(void* self, int propertyId);
QPen* q_textblockformat_pen_property(void* self, int propertyId);
QBrush* q_textblockformat_brush_property(void* self, int propertyId);
QTextLength* q_textblockformat_length_property(void* self, int propertyId);
libqt_list /* of QTextLength* */ q_textblockformat_length_vector_property(void* self, int propertyId);
void q_textblockformat_set_property2(void* self, int propertyId, void* lengths[]);
libqt_map /* of int to QVariant* */ q_textblockformat_properties(void* self);
int32_t q_textblockformat_property_count(void* self);
void q_textblockformat_set_object_type(void* self, int typeVal);
int32_t q_textblockformat_object_type(void* self);
bool q_textblockformat_is_char_format(void* self);
bool q_textblockformat_is_block_format(void* self);
bool q_textblockformat_is_list_format(void* self);
bool q_textblockformat_is_frame_format(void* self);
bool q_textblockformat_is_image_format(void* self);
bool q_textblockformat_is_table_format(void* self);
bool q_textblockformat_is_table_cell_format(void* self);
QTextBlockFormat* q_textblockformat_to_block_format(void* self);
QTextCharFormat* q_textblockformat_to_char_format(void* self);
QTextListFormat* q_textblockformat_to_list_format(void* self);
QTextTableFormat* q_textblockformat_to_table_format(void* self);
QTextFrameFormat* q_textblockformat_to_frame_format(void* self);
QTextImageFormat* q_textblockformat_to_image_format(void* self);
QTextTableCellFormat* q_textblockformat_to_table_cell_format(void* self);
bool q_textblockformat_operator_equal(void* self, void* rhs);
bool q_textblockformat_operator_not_equal(void* self, void* rhs);
QVariant* q_textblockformat_to_q_variant(void* self);
void q_textblockformat_set_layout_direction(void* self, int64_t direction);
int64_t q_textblockformat_layout_direction(void* self);
void q_textblockformat_set_background(void* self, void* brush);
QBrush* q_textblockformat_background(void* self);
void q_textblockformat_clear_background(void* self);
void q_textblockformat_set_foreground(void* self, void* brush);
QBrush* q_textblockformat_foreground(void* self);
void q_textblockformat_clear_foreground(void* self);
void q_textblockformat_delete(void* self);

QTextListFormat* q_textlistformat_new();
QTextListFormat* q_textlistformat_new2(void* param1);
bool q_textlistformat_is_valid(void* self);
void q_textlistformat_set_style(void* self, int64_t style);
int64_t q_textlistformat_style(void* self);
void q_textlistformat_set_indent(void* self, int indent);
int32_t q_textlistformat_indent(void* self);
void q_textlistformat_set_number_prefix(void* self, const char* numberPrefix);
const char* q_textlistformat_number_prefix(void* self);
void q_textlistformat_set_number_suffix(void* self, const char* numberSuffix);
const char* q_textlistformat_number_suffix(void* self);
void q_textlistformat_operator_assign(void* self, void* rhs);
void q_textlistformat_swap(void* self, void* other);
void q_textlistformat_merge(void* self, void* other);
bool q_textlistformat_is_empty(void* self);
int32_t q_textlistformat_type(void* self);
int32_t q_textlistformat_object_index(void* self);
void q_textlistformat_set_object_index(void* self, int object);
QVariant* q_textlistformat_property(void* self, int propertyId);
void q_textlistformat_set_property(void* self, int propertyId, void* value);
void q_textlistformat_clear_property(void* self, int propertyId);
bool q_textlistformat_has_property(void* self, int propertyId);
bool q_textlistformat_bool_property(void* self, int propertyId);
int32_t q_textlistformat_int_property(void* self, int propertyId);
double q_textlistformat_double_property(void* self, int propertyId);
const char* q_textlistformat_string_property(void* self, int propertyId);
QColor* q_textlistformat_color_property(void* self, int propertyId);
QPen* q_textlistformat_pen_property(void* self, int propertyId);
QBrush* q_textlistformat_brush_property(void* self, int propertyId);
QTextLength* q_textlistformat_length_property(void* self, int propertyId);
libqt_list /* of QTextLength* */ q_textlistformat_length_vector_property(void* self, int propertyId);
void q_textlistformat_set_property2(void* self, int propertyId, void* lengths[]);
libqt_map /* of int to QVariant* */ q_textlistformat_properties(void* self);
int32_t q_textlistformat_property_count(void* self);
void q_textlistformat_set_object_type(void* self, int typeVal);
int32_t q_textlistformat_object_type(void* self);
bool q_textlistformat_is_char_format(void* self);
bool q_textlistformat_is_block_format(void* self);
bool q_textlistformat_is_list_format(void* self);
bool q_textlistformat_is_frame_format(void* self);
bool q_textlistformat_is_image_format(void* self);
bool q_textlistformat_is_table_format(void* self);
bool q_textlistformat_is_table_cell_format(void* self);
QTextBlockFormat* q_textlistformat_to_block_format(void* self);
QTextCharFormat* q_textlistformat_to_char_format(void* self);
QTextListFormat* q_textlistformat_to_list_format(void* self);
QTextTableFormat* q_textlistformat_to_table_format(void* self);
QTextFrameFormat* q_textlistformat_to_frame_format(void* self);
QTextImageFormat* q_textlistformat_to_image_format(void* self);
QTextTableCellFormat* q_textlistformat_to_table_cell_format(void* self);
bool q_textlistformat_operator_equal(void* self, void* rhs);
bool q_textlistformat_operator_not_equal(void* self, void* rhs);
QVariant* q_textlistformat_to_q_variant(void* self);
void q_textlistformat_set_layout_direction(void* self, int64_t direction);
int64_t q_textlistformat_layout_direction(void* self);
void q_textlistformat_set_background(void* self, void* brush);
QBrush* q_textlistformat_background(void* self);
void q_textlistformat_clear_background(void* self);
void q_textlistformat_set_foreground(void* self, void* brush);
QBrush* q_textlistformat_foreground(void* self);
void q_textlistformat_clear_foreground(void* self);
void q_textlistformat_delete(void* self);

QTextImageFormat* q_textimageformat_new();
bool q_textimageformat_is_valid(void* self);
void q_textimageformat_set_name(void* self, const char* name);
const char* q_textimageformat_name(void* self);
void q_textimageformat_set_width(void* self, double width);
double q_textimageformat_width(void* self);
void q_textimageformat_set_height(void* self, double height);
double q_textimageformat_height(void* self);
void q_textimageformat_set_quality(void* self, int quality);
void q_textimageformat_set_quality2(void* self);
int32_t q_textimageformat_quality(void* self);
void q_textimageformat_set_font(void* self, void* font);
QFont* q_textimageformat_font(void* self);
void q_textimageformat_set_font_family(void* self, const char* family);
const char* q_textimageformat_font_family(void* self);
void q_textimageformat_set_font_families(void* self, const char* families[]);
QVariant* q_textimageformat_font_families(void* self);
void q_textimageformat_set_font_style_name(void* self, const char* styleName);
QVariant* q_textimageformat_font_style_name(void* self);
void q_textimageformat_set_font_point_size(void* self, double size);
double q_textimageformat_font_point_size(void* self);
void q_textimageformat_set_font_weight(void* self, int weight);
int32_t q_textimageformat_font_weight(void* self);
void q_textimageformat_set_font_italic(void* self, bool italic);
bool q_textimageformat_font_italic(void* self);
void q_textimageformat_set_font_capitalization(void* self, int64_t capitalization);
int64_t q_textimageformat_font_capitalization(void* self);
void q_textimageformat_set_font_letter_spacing_type(void* self, int64_t letterSpacingType);
int64_t q_textimageformat_font_letter_spacing_type(void* self);
void q_textimageformat_set_font_letter_spacing(void* self, double spacing);
double q_textimageformat_font_letter_spacing(void* self);
void q_textimageformat_set_font_word_spacing(void* self, double spacing);
double q_textimageformat_font_word_spacing(void* self);
void q_textimageformat_set_font_underline(void* self, bool underline);
bool q_textimageformat_font_underline(void* self);
void q_textimageformat_set_font_overline(void* self, bool overline);
bool q_textimageformat_font_overline(void* self);
void q_textimageformat_set_font_strike_out(void* self, bool strikeOut);
bool q_textimageformat_font_strike_out(void* self);
void q_textimageformat_set_underline_color(void* self, void* color);
QColor* q_textimageformat_underline_color(void* self);
void q_textimageformat_set_font_fixed_pitch(void* self, bool fixedPitch);
bool q_textimageformat_font_fixed_pitch(void* self);
void q_textimageformat_set_font_stretch(void* self, int factor);
int32_t q_textimageformat_font_stretch(void* self);
void q_textimageformat_set_font_style_hint(void* self, int64_t hint);
void q_textimageformat_set_font_style_strategy(void* self, int64_t strategy);
int64_t q_textimageformat_font_style_hint(void* self);
int64_t q_textimageformat_font_style_strategy(void* self);
void q_textimageformat_set_font_hinting_preference(void* self, int64_t hintingPreference);
int64_t q_textimageformat_font_hinting_preference(void* self);
void q_textimageformat_set_font_kerning(void* self, bool enable);
bool q_textimageformat_font_kerning(void* self);
void q_textimageformat_set_underline_style(void* self, int64_t style);
int64_t q_textimageformat_underline_style(void* self);
void q_textimageformat_set_vertical_alignment(void* self, int64_t alignment);
int64_t q_textimageformat_vertical_alignment(void* self);
void q_textimageformat_set_text_outline(void* self, void* pen);
QPen* q_textimageformat_text_outline(void* self);
void q_textimageformat_set_tool_tip(void* self, const char* tip);
const char* q_textimageformat_tool_tip(void* self);
void q_textimageformat_set_super_script_baseline(void* self, double baseline);
double q_textimageformat_super_script_baseline(void* self);
void q_textimageformat_set_sub_script_baseline(void* self, double baseline);
double q_textimageformat_sub_script_baseline(void* self);
void q_textimageformat_set_baseline_offset(void* self, double baseline);
double q_textimageformat_baseline_offset(void* self);
void q_textimageformat_set_anchor(void* self, bool anchor);
bool q_textimageformat_is_anchor(void* self);
void q_textimageformat_set_anchor_href(void* self, const char* value);
const char* q_textimageformat_anchor_href(void* self);
void q_textimageformat_set_anchor_names(void* self, const char* names[]);
const char** q_textimageformat_anchor_names(void* self);
void q_textimageformat_set_table_cell_row_span(void* self, int tableCellRowSpan);
int32_t q_textimageformat_table_cell_row_span(void* self);
void q_textimageformat_set_table_cell_column_span(void* self, int tableCellColumnSpan);
int32_t q_textimageformat_table_cell_column_span(void* self);
void q_textimageformat_set_font2(void* self, void* font, int64_t behavior);
void q_textimageformat_set_font_style_hint2(void* self, int64_t hint, int64_t strategy);
void q_textimageformat_operator_assign(void* self, void* rhs);
void q_textimageformat_swap(void* self, void* other);
void q_textimageformat_merge(void* self, void* other);
bool q_textimageformat_is_empty(void* self);
int32_t q_textimageformat_type(void* self);
int32_t q_textimageformat_object_index(void* self);
void q_textimageformat_set_object_index(void* self, int object);
QVariant* q_textimageformat_property(void* self, int propertyId);
void q_textimageformat_set_property(void* self, int propertyId, void* value);
void q_textimageformat_clear_property(void* self, int propertyId);
bool q_textimageformat_has_property(void* self, int propertyId);
bool q_textimageformat_bool_property(void* self, int propertyId);
int32_t q_textimageformat_int_property(void* self, int propertyId);
double q_textimageformat_double_property(void* self, int propertyId);
const char* q_textimageformat_string_property(void* self, int propertyId);
QColor* q_textimageformat_color_property(void* self, int propertyId);
QPen* q_textimageformat_pen_property(void* self, int propertyId);
QBrush* q_textimageformat_brush_property(void* self, int propertyId);
QTextLength* q_textimageformat_length_property(void* self, int propertyId);
libqt_list /* of QTextLength* */ q_textimageformat_length_vector_property(void* self, int propertyId);
void q_textimageformat_set_property2(void* self, int propertyId, void* lengths[]);
libqt_map /* of int to QVariant* */ q_textimageformat_properties(void* self);
int32_t q_textimageformat_property_count(void* self);
void q_textimageformat_set_object_type(void* self, int typeVal);
int32_t q_textimageformat_object_type(void* self);
bool q_textimageformat_is_char_format(void* self);
bool q_textimageformat_is_block_format(void* self);
bool q_textimageformat_is_list_format(void* self);
bool q_textimageformat_is_frame_format(void* self);
bool q_textimageformat_is_image_format(void* self);
bool q_textimageformat_is_table_format(void* self);
bool q_textimageformat_is_table_cell_format(void* self);
QTextBlockFormat* q_textimageformat_to_block_format(void* self);
QTextCharFormat* q_textimageformat_to_char_format(void* self);
QTextListFormat* q_textimageformat_to_list_format(void* self);
QTextTableFormat* q_textimageformat_to_table_format(void* self);
QTextFrameFormat* q_textimageformat_to_frame_format(void* self);
QTextImageFormat* q_textimageformat_to_image_format(void* self);
QTextTableCellFormat* q_textimageformat_to_table_cell_format(void* self);
bool q_textimageformat_operator_equal(void* self, void* rhs);
bool q_textimageformat_operator_not_equal(void* self, void* rhs);
QVariant* q_textimageformat_to_q_variant(void* self);
void q_textimageformat_set_layout_direction(void* self, int64_t direction);
int64_t q_textimageformat_layout_direction(void* self);
void q_textimageformat_set_background(void* self, void* brush);
QBrush* q_textimageformat_background(void* self);
void q_textimageformat_clear_background(void* self);
void q_textimageformat_set_foreground(void* self, void* brush);
QBrush* q_textimageformat_foreground(void* self);
void q_textimageformat_clear_foreground(void* self);
void q_textimageformat_delete(void* self);

QTextFrameFormat* q_textframeformat_new();
QTextFrameFormat* q_textframeformat_new2(void* param1);
bool q_textframeformat_is_valid(void* self);
void q_textframeformat_set_position(void* self, int64_t f);
int64_t q_textframeformat_position(void* self);
void q_textframeformat_set_border(void* self, double border);
double q_textframeformat_border(void* self);
void q_textframeformat_set_border_brush(void* self, void* brush);
QBrush* q_textframeformat_border_brush(void* self);
void q_textframeformat_set_border_style(void* self, int64_t style);
int64_t q_textframeformat_border_style(void* self);
void q_textframeformat_set_margin(void* self, double margin);
double q_textframeformat_margin(void* self);
void q_textframeformat_set_top_margin(void* self, double margin);
double q_textframeformat_top_margin(void* self);
void q_textframeformat_set_bottom_margin(void* self, double margin);
double q_textframeformat_bottom_margin(void* self);
void q_textframeformat_set_left_margin(void* self, double margin);
double q_textframeformat_left_margin(void* self);
void q_textframeformat_set_right_margin(void* self, double margin);
double q_textframeformat_right_margin(void* self);
void q_textframeformat_set_padding(void* self, double padding);
double q_textframeformat_padding(void* self);
void q_textframeformat_set_width(void* self, double width);
void q_textframeformat_set_width_with_length(void* self, void* length);
QTextLength* q_textframeformat_width(void* self);
void q_textframeformat_set_height(void* self, double height);
void q_textframeformat_set_height_with_height(void* self, void* height);
QTextLength* q_textframeformat_height(void* self);
void q_textframeformat_set_page_break_policy(void* self, int64_t flags);
int64_t q_textframeformat_page_break_policy(void* self);
void q_textframeformat_operator_assign(void* self, void* rhs);
void q_textframeformat_swap(void* self, void* other);
void q_textframeformat_merge(void* self, void* other);
bool q_textframeformat_is_empty(void* self);
int32_t q_textframeformat_type(void* self);
int32_t q_textframeformat_object_index(void* self);
void q_textframeformat_set_object_index(void* self, int object);
QVariant* q_textframeformat_property(void* self, int propertyId);
void q_textframeformat_set_property(void* self, int propertyId, void* value);
void q_textframeformat_clear_property(void* self, int propertyId);
bool q_textframeformat_has_property(void* self, int propertyId);
bool q_textframeformat_bool_property(void* self, int propertyId);
int32_t q_textframeformat_int_property(void* self, int propertyId);
double q_textframeformat_double_property(void* self, int propertyId);
const char* q_textframeformat_string_property(void* self, int propertyId);
QColor* q_textframeformat_color_property(void* self, int propertyId);
QPen* q_textframeformat_pen_property(void* self, int propertyId);
QBrush* q_textframeformat_brush_property(void* self, int propertyId);
QTextLength* q_textframeformat_length_property(void* self, int propertyId);
libqt_list /* of QTextLength* */ q_textframeformat_length_vector_property(void* self, int propertyId);
void q_textframeformat_set_property2(void* self, int propertyId, void* lengths[]);
libqt_map /* of int to QVariant* */ q_textframeformat_properties(void* self);
int32_t q_textframeformat_property_count(void* self);
void q_textframeformat_set_object_type(void* self, int typeVal);
int32_t q_textframeformat_object_type(void* self);
bool q_textframeformat_is_char_format(void* self);
bool q_textframeformat_is_block_format(void* self);
bool q_textframeformat_is_list_format(void* self);
bool q_textframeformat_is_frame_format(void* self);
bool q_textframeformat_is_image_format(void* self);
bool q_textframeformat_is_table_format(void* self);
bool q_textframeformat_is_table_cell_format(void* self);
QTextBlockFormat* q_textframeformat_to_block_format(void* self);
QTextCharFormat* q_textframeformat_to_char_format(void* self);
QTextListFormat* q_textframeformat_to_list_format(void* self);
QTextTableFormat* q_textframeformat_to_table_format(void* self);
QTextFrameFormat* q_textframeformat_to_frame_format(void* self);
QTextImageFormat* q_textframeformat_to_image_format(void* self);
QTextTableCellFormat* q_textframeformat_to_table_cell_format(void* self);
bool q_textframeformat_operator_equal(void* self, void* rhs);
bool q_textframeformat_operator_not_equal(void* self, void* rhs);
QVariant* q_textframeformat_to_q_variant(void* self);
void q_textframeformat_set_layout_direction(void* self, int64_t direction);
int64_t q_textframeformat_layout_direction(void* self);
void q_textframeformat_set_background(void* self, void* brush);
QBrush* q_textframeformat_background(void* self);
void q_textframeformat_clear_background(void* self);
void q_textframeformat_set_foreground(void* self, void* brush);
QBrush* q_textframeformat_foreground(void* self);
void q_textframeformat_clear_foreground(void* self);
void q_textframeformat_delete(void* self);

QTextTableFormat* q_texttableformat_new();
bool q_texttableformat_is_valid(void* self);
int32_t q_texttableformat_columns(void* self);
void q_texttableformat_set_columns(void* self, int columns);
void q_texttableformat_set_column_width_constraints(void* self, void* constraints[]);
libqt_list /* of QTextLength* */ q_texttableformat_column_width_constraints(void* self);
void q_texttableformat_clear_column_width_constraints(void* self);
double q_texttableformat_cell_spacing(void* self);
void q_texttableformat_set_cell_spacing(void* self, double spacing);
double q_texttableformat_cell_padding(void* self);
void q_texttableformat_set_cell_padding(void* self, double padding);
void q_texttableformat_set_alignment(void* self, int64_t alignment);
int64_t q_texttableformat_alignment(void* self);
void q_texttableformat_set_header_row_count(void* self, int count);
int32_t q_texttableformat_header_row_count(void* self);
void q_texttableformat_set_border_collapse(void* self, bool borderCollapse);
bool q_texttableformat_border_collapse(void* self);
void q_texttableformat_set_position(void* self, int64_t f);
int64_t q_texttableformat_position(void* self);
void q_texttableformat_set_border(void* self, double border);
double q_texttableformat_border(void* self);
void q_texttableformat_set_border_brush(void* self, void* brush);
QBrush* q_texttableformat_border_brush(void* self);
void q_texttableformat_set_border_style(void* self, int64_t style);
int64_t q_texttableformat_border_style(void* self);
void q_texttableformat_set_margin(void* self, double margin);
double q_texttableformat_margin(void* self);
void q_texttableformat_set_top_margin(void* self, double margin);
double q_texttableformat_top_margin(void* self);
void q_texttableformat_set_bottom_margin(void* self, double margin);
double q_texttableformat_bottom_margin(void* self);
void q_texttableformat_set_left_margin(void* self, double margin);
double q_texttableformat_left_margin(void* self);
void q_texttableformat_set_right_margin(void* self, double margin);
double q_texttableformat_right_margin(void* self);
void q_texttableformat_set_padding(void* self, double padding);
double q_texttableformat_padding(void* self);
void q_texttableformat_set_width(void* self, double width);
void q_texttableformat_set_width_with_length(void* self, void* length);
QTextLength* q_texttableformat_width(void* self);
void q_texttableformat_set_height(void* self, double height);
void q_texttableformat_set_height_with_height(void* self, void* height);
QTextLength* q_texttableformat_height(void* self);
void q_texttableformat_set_page_break_policy(void* self, int64_t flags);
int64_t q_texttableformat_page_break_policy(void* self);
void q_texttableformat_operator_assign(void* self, void* rhs);
void q_texttableformat_swap(void* self, void* other);
void q_texttableformat_merge(void* self, void* other);
bool q_texttableformat_is_empty(void* self);
int32_t q_texttableformat_type(void* self);
int32_t q_texttableformat_object_index(void* self);
void q_texttableformat_set_object_index(void* self, int object);
QVariant* q_texttableformat_property(void* self, int propertyId);
void q_texttableformat_set_property(void* self, int propertyId, void* value);
void q_texttableformat_clear_property(void* self, int propertyId);
bool q_texttableformat_has_property(void* self, int propertyId);
bool q_texttableformat_bool_property(void* self, int propertyId);
int32_t q_texttableformat_int_property(void* self, int propertyId);
double q_texttableformat_double_property(void* self, int propertyId);
const char* q_texttableformat_string_property(void* self, int propertyId);
QColor* q_texttableformat_color_property(void* self, int propertyId);
QPen* q_texttableformat_pen_property(void* self, int propertyId);
QBrush* q_texttableformat_brush_property(void* self, int propertyId);
QTextLength* q_texttableformat_length_property(void* self, int propertyId);
libqt_list /* of QTextLength* */ q_texttableformat_length_vector_property(void* self, int propertyId);
void q_texttableformat_set_property2(void* self, int propertyId, void* lengths[]);
libqt_map /* of int to QVariant* */ q_texttableformat_properties(void* self);
int32_t q_texttableformat_property_count(void* self);
void q_texttableformat_set_object_type(void* self, int typeVal);
int32_t q_texttableformat_object_type(void* self);
bool q_texttableformat_is_char_format(void* self);
bool q_texttableformat_is_block_format(void* self);
bool q_texttableformat_is_list_format(void* self);
bool q_texttableformat_is_frame_format(void* self);
bool q_texttableformat_is_image_format(void* self);
bool q_texttableformat_is_table_format(void* self);
bool q_texttableformat_is_table_cell_format(void* self);
QTextBlockFormat* q_texttableformat_to_block_format(void* self);
QTextCharFormat* q_texttableformat_to_char_format(void* self);
QTextListFormat* q_texttableformat_to_list_format(void* self);
QTextTableFormat* q_texttableformat_to_table_format(void* self);
QTextFrameFormat* q_texttableformat_to_frame_format(void* self);
QTextImageFormat* q_texttableformat_to_image_format(void* self);
QTextTableCellFormat* q_texttableformat_to_table_cell_format(void* self);
bool q_texttableformat_operator_equal(void* self, void* rhs);
bool q_texttableformat_operator_not_equal(void* self, void* rhs);
QVariant* q_texttableformat_to_q_variant(void* self);
void q_texttableformat_set_layout_direction(void* self, int64_t direction);
int64_t q_texttableformat_layout_direction(void* self);
void q_texttableformat_set_background(void* self, void* brush);
QBrush* q_texttableformat_background(void* self);
void q_texttableformat_clear_background(void* self);
void q_texttableformat_set_foreground(void* self, void* brush);
QBrush* q_texttableformat_foreground(void* self);
void q_texttableformat_clear_foreground(void* self);
void q_texttableformat_delete(void* self);

QTextTableCellFormat* q_texttablecellformat_new();
bool q_texttablecellformat_is_valid(void* self);
void q_texttablecellformat_set_top_padding(void* self, double padding);
double q_texttablecellformat_top_padding(void* self);
void q_texttablecellformat_set_bottom_padding(void* self, double padding);
double q_texttablecellformat_bottom_padding(void* self);
void q_texttablecellformat_set_left_padding(void* self, double padding);
double q_texttablecellformat_left_padding(void* self);
void q_texttablecellformat_set_right_padding(void* self, double padding);
double q_texttablecellformat_right_padding(void* self);
void q_texttablecellformat_set_padding(void* self, double padding);
void q_texttablecellformat_set_top_border(void* self, double width);
double q_texttablecellformat_top_border(void* self);
void q_texttablecellformat_set_bottom_border(void* self, double width);
double q_texttablecellformat_bottom_border(void* self);
void q_texttablecellformat_set_left_border(void* self, double width);
double q_texttablecellformat_left_border(void* self);
void q_texttablecellformat_set_right_border(void* self, double width);
double q_texttablecellformat_right_border(void* self);
void q_texttablecellformat_set_border(void* self, double width);
void q_texttablecellformat_set_top_border_style(void* self, int64_t style);
int64_t q_texttablecellformat_top_border_style(void* self);
void q_texttablecellformat_set_bottom_border_style(void* self, int64_t style);
int64_t q_texttablecellformat_bottom_border_style(void* self);
void q_texttablecellformat_set_left_border_style(void* self, int64_t style);
int64_t q_texttablecellformat_left_border_style(void* self);
void q_texttablecellformat_set_right_border_style(void* self, int64_t style);
int64_t q_texttablecellformat_right_border_style(void* self);
void q_texttablecellformat_set_border_style(void* self, int64_t style);
void q_texttablecellformat_set_top_border_brush(void* self, void* brush);
QBrush* q_texttablecellformat_top_border_brush(void* self);
void q_texttablecellformat_set_bottom_border_brush(void* self, void* brush);
QBrush* q_texttablecellformat_bottom_border_brush(void* self);
void q_texttablecellformat_set_left_border_brush(void* self, void* brush);
QBrush* q_texttablecellformat_left_border_brush(void* self);
void q_texttablecellformat_set_right_border_brush(void* self, void* brush);
QBrush* q_texttablecellformat_right_border_brush(void* self);
void q_texttablecellformat_set_border_brush(void* self, void* brush);
void q_texttablecellformat_set_font(void* self, void* font);
QFont* q_texttablecellformat_font(void* self);
void q_texttablecellformat_set_font_family(void* self, const char* family);
const char* q_texttablecellformat_font_family(void* self);
void q_texttablecellformat_set_font_families(void* self, const char* families[]);
QVariant* q_texttablecellformat_font_families(void* self);
void q_texttablecellformat_set_font_style_name(void* self, const char* styleName);
QVariant* q_texttablecellformat_font_style_name(void* self);
void q_texttablecellformat_set_font_point_size(void* self, double size);
double q_texttablecellformat_font_point_size(void* self);
void q_texttablecellformat_set_font_weight(void* self, int weight);
int32_t q_texttablecellformat_font_weight(void* self);
void q_texttablecellformat_set_font_italic(void* self, bool italic);
bool q_texttablecellformat_font_italic(void* self);
void q_texttablecellformat_set_font_capitalization(void* self, int64_t capitalization);
int64_t q_texttablecellformat_font_capitalization(void* self);
void q_texttablecellformat_set_font_letter_spacing_type(void* self, int64_t letterSpacingType);
int64_t q_texttablecellformat_font_letter_spacing_type(void* self);
void q_texttablecellformat_set_font_letter_spacing(void* self, double spacing);
double q_texttablecellformat_font_letter_spacing(void* self);
void q_texttablecellformat_set_font_word_spacing(void* self, double spacing);
double q_texttablecellformat_font_word_spacing(void* self);
void q_texttablecellformat_set_font_underline(void* self, bool underline);
bool q_texttablecellformat_font_underline(void* self);
void q_texttablecellformat_set_font_overline(void* self, bool overline);
bool q_texttablecellformat_font_overline(void* self);
void q_texttablecellformat_set_font_strike_out(void* self, bool strikeOut);
bool q_texttablecellformat_font_strike_out(void* self);
void q_texttablecellformat_set_underline_color(void* self, void* color);
QColor* q_texttablecellformat_underline_color(void* self);
void q_texttablecellformat_set_font_fixed_pitch(void* self, bool fixedPitch);
bool q_texttablecellformat_font_fixed_pitch(void* self);
void q_texttablecellformat_set_font_stretch(void* self, int factor);
int32_t q_texttablecellformat_font_stretch(void* self);
void q_texttablecellformat_set_font_style_hint(void* self, int64_t hint);
void q_texttablecellformat_set_font_style_strategy(void* self, int64_t strategy);
int64_t q_texttablecellformat_font_style_hint(void* self);
int64_t q_texttablecellformat_font_style_strategy(void* self);
void q_texttablecellformat_set_font_hinting_preference(void* self, int64_t hintingPreference);
int64_t q_texttablecellformat_font_hinting_preference(void* self);
void q_texttablecellformat_set_font_kerning(void* self, bool enable);
bool q_texttablecellformat_font_kerning(void* self);
void q_texttablecellformat_set_underline_style(void* self, int64_t style);
int64_t q_texttablecellformat_underline_style(void* self);
void q_texttablecellformat_set_vertical_alignment(void* self, int64_t alignment);
int64_t q_texttablecellformat_vertical_alignment(void* self);
void q_texttablecellformat_set_text_outline(void* self, void* pen);
QPen* q_texttablecellformat_text_outline(void* self);
void q_texttablecellformat_set_tool_tip(void* self, const char* tip);
const char* q_texttablecellformat_tool_tip(void* self);
void q_texttablecellformat_set_super_script_baseline(void* self, double baseline);
double q_texttablecellformat_super_script_baseline(void* self);
void q_texttablecellformat_set_sub_script_baseline(void* self, double baseline);
double q_texttablecellformat_sub_script_baseline(void* self);
void q_texttablecellformat_set_baseline_offset(void* self, double baseline);
double q_texttablecellformat_baseline_offset(void* self);
void q_texttablecellformat_set_anchor(void* self, bool anchor);
bool q_texttablecellformat_is_anchor(void* self);
void q_texttablecellformat_set_anchor_href(void* self, const char* value);
const char* q_texttablecellformat_anchor_href(void* self);
void q_texttablecellformat_set_anchor_names(void* self, const char* names[]);
const char** q_texttablecellformat_anchor_names(void* self);
void q_texttablecellformat_set_table_cell_row_span(void* self, int tableCellRowSpan);
int32_t q_texttablecellformat_table_cell_row_span(void* self);
void q_texttablecellformat_set_table_cell_column_span(void* self, int tableCellColumnSpan);
int32_t q_texttablecellformat_table_cell_column_span(void* self);
void q_texttablecellformat_set_font2(void* self, void* font, int64_t behavior);
void q_texttablecellformat_set_font_style_hint2(void* self, int64_t hint, int64_t strategy);
void q_texttablecellformat_operator_assign(void* self, void* rhs);
void q_texttablecellformat_swap(void* self, void* other);
void q_texttablecellformat_merge(void* self, void* other);
bool q_texttablecellformat_is_empty(void* self);
int32_t q_texttablecellformat_type(void* self);
int32_t q_texttablecellformat_object_index(void* self);
void q_texttablecellformat_set_object_index(void* self, int object);
QVariant* q_texttablecellformat_property(void* self, int propertyId);
void q_texttablecellformat_set_property(void* self, int propertyId, void* value);
void q_texttablecellformat_clear_property(void* self, int propertyId);
bool q_texttablecellformat_has_property(void* self, int propertyId);
bool q_texttablecellformat_bool_property(void* self, int propertyId);
int32_t q_texttablecellformat_int_property(void* self, int propertyId);
double q_texttablecellformat_double_property(void* self, int propertyId);
const char* q_texttablecellformat_string_property(void* self, int propertyId);
QColor* q_texttablecellformat_color_property(void* self, int propertyId);
QPen* q_texttablecellformat_pen_property(void* self, int propertyId);
QBrush* q_texttablecellformat_brush_property(void* self, int propertyId);
QTextLength* q_texttablecellformat_length_property(void* self, int propertyId);
libqt_list /* of QTextLength* */ q_texttablecellformat_length_vector_property(void* self, int propertyId);
void q_texttablecellformat_set_property2(void* self, int propertyId, void* lengths[]);
libqt_map /* of int to QVariant* */ q_texttablecellformat_properties(void* self);
int32_t q_texttablecellformat_property_count(void* self);
void q_texttablecellformat_set_object_type(void* self, int typeVal);
int32_t q_texttablecellformat_object_type(void* self);
bool q_texttablecellformat_is_char_format(void* self);
bool q_texttablecellformat_is_block_format(void* self);
bool q_texttablecellformat_is_list_format(void* self);
bool q_texttablecellformat_is_frame_format(void* self);
bool q_texttablecellformat_is_image_format(void* self);
bool q_texttablecellformat_is_table_format(void* self);
bool q_texttablecellformat_is_table_cell_format(void* self);
QTextBlockFormat* q_texttablecellformat_to_block_format(void* self);
QTextCharFormat* q_texttablecellformat_to_char_format(void* self);
QTextListFormat* q_texttablecellformat_to_list_format(void* self);
QTextTableFormat* q_texttablecellformat_to_table_format(void* self);
QTextFrameFormat* q_texttablecellformat_to_frame_format(void* self);
QTextImageFormat* q_texttablecellformat_to_image_format(void* self);
QTextTableCellFormat* q_texttablecellformat_to_table_cell_format(void* self);
bool q_texttablecellformat_operator_equal(void* self, void* rhs);
bool q_texttablecellformat_operator_not_equal(void* self, void* rhs);
QVariant* q_texttablecellformat_to_q_variant(void* self);
void q_texttablecellformat_set_layout_direction(void* self, int64_t direction);
int64_t q_texttablecellformat_layout_direction(void* self);
void q_texttablecellformat_set_background(void* self, void* brush);
QBrush* q_texttablecellformat_background(void* self);
void q_texttablecellformat_clear_background(void* self);
void q_texttablecellformat_set_foreground(void* self, void* brush);
QBrush* q_texttablecellformat_foreground(void* self);
void q_texttablecellformat_clear_foreground(void* self);
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
