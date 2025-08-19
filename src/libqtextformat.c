#include "libqbrush.hpp"
#include "libqcolor.hpp"
#include "libqfont.hpp"
#include "libqpen.hpp"
#include "libqvariant.hpp"
#include "libqtextformat.hpp"
#include "libqtextformat.h"

QTextLength* q_textlength_new(void* other) {
    return QTextLength_new((QTextLength*)other);
}

QTextLength* q_textlength_new2(void* other) {
    return QTextLength_new2((QTextLength*)other);
}

QTextLength* q_textlength_new3() {
    return QTextLength_new3();
}

QTextLength* q_textlength_new4(int32_t typeVal, double value) {
    return QTextLength_new4(typeVal, value);
}

QTextLength* q_textlength_new5(void* param1) {
    return QTextLength_new5((QTextLength*)param1);
}

void q_textlength_copy_assign(void* self, void* other) {
    QTextLength_CopyAssign((QTextLength*)self, (QTextLength*)other);
}

void q_textlength_move_assign(void* self, void* other) {
    QTextLength_MoveAssign((QTextLength*)self, (QTextLength*)other);
}

int32_t q_textlength_type(void* self) {
    return QTextLength_Type((QTextLength*)self);
}

double q_textlength_value(void* self, double maximumLength) {
    return QTextLength_Value((QTextLength*)self, maximumLength);
}

double q_textlength_raw_value(void* self) {
    return QTextLength_RawValue((QTextLength*)self);
}

bool q_textlength_operator_equal(void* self, void* other) {
    return QTextLength_OperatorEqual((QTextLength*)self, (QTextLength*)other);
}

bool q_textlength_operator_not_equal(void* self, void* other) {
    return QTextLength_OperatorNotEqual((QTextLength*)self, (QTextLength*)other);
}

QVariant* q_textlength_to_q_variant(void* self) {
    return QTextLength_ToQVariant((QTextLength*)self);
}

void q_textlength_delete(void* self) {
    QTextLength_Delete((QTextLength*)(self));
}

QTextFormat* q_textformat_new() {
    return QTextFormat_new();
}

QTextFormat* q_textformat_new2(int typeVal) {
    return QTextFormat_new2(typeVal);
}

QTextFormat* q_textformat_new3(void* rhs) {
    return QTextFormat_new3((QTextFormat*)rhs);
}

void q_textformat_operator_assign(void* self, void* rhs) {
    QTextFormat_OperatorAssign((QTextFormat*)self, (QTextFormat*)rhs);
}

void q_textformat_swap(void* self, void* other) {
    QTextFormat_Swap((QTextFormat*)self, (QTextFormat*)other);
}

void q_textformat_merge(void* self, void* other) {
    QTextFormat_Merge((QTextFormat*)self, (QTextFormat*)other);
}

bool q_textformat_is_valid(void* self) {
    return QTextFormat_IsValid((QTextFormat*)self);
}

bool q_textformat_is_empty(void* self) {
    return QTextFormat_IsEmpty((QTextFormat*)self);
}

int32_t q_textformat_type(void* self) {
    return QTextFormat_Type((QTextFormat*)self);
}

int32_t q_textformat_object_index(void* self) {
    return QTextFormat_ObjectIndex((QTextFormat*)self);
}

void q_textformat_set_object_index(void* self, int object) {
    QTextFormat_SetObjectIndex((QTextFormat*)self, object);
}

QVariant* q_textformat_property(void* self, int propertyId) {
    return QTextFormat_Property((QTextFormat*)self, propertyId);
}

void q_textformat_set_property(void* self, int propertyId, void* value) {
    QTextFormat_SetProperty((QTextFormat*)self, propertyId, (QVariant*)value);
}

void q_textformat_clear_property(void* self, int propertyId) {
    QTextFormat_ClearProperty((QTextFormat*)self, propertyId);
}

bool q_textformat_has_property(void* self, int propertyId) {
    return QTextFormat_HasProperty((QTextFormat*)self, propertyId);
}

bool q_textformat_bool_property(void* self, int propertyId) {
    return QTextFormat_BoolProperty((QTextFormat*)self, propertyId);
}

int32_t q_textformat_int_property(void* self, int propertyId) {
    return QTextFormat_IntProperty((QTextFormat*)self, propertyId);
}

double q_textformat_double_property(void* self, int propertyId) {
    return QTextFormat_DoubleProperty((QTextFormat*)self, propertyId);
}

const char* q_textformat_string_property(void* self, int propertyId) {
    libqt_string _str = QTextFormat_StringProperty((QTextFormat*)self, propertyId);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* q_textformat_color_property(void* self, int propertyId) {
    return QTextFormat_ColorProperty((QTextFormat*)self, propertyId);
}

QPen* q_textformat_pen_property(void* self, int propertyId) {
    return QTextFormat_PenProperty((QTextFormat*)self, propertyId);
}

QBrush* q_textformat_brush_property(void* self, int propertyId) {
    return QTextFormat_BrushProperty((QTextFormat*)self, propertyId);
}

QTextLength* q_textformat_length_property(void* self, int propertyId) {
    return QTextFormat_LengthProperty((QTextFormat*)self, propertyId);
}

libqt_list /* of QTextLength* */ q_textformat_length_vector_property(void* self, int propertyId) {
    libqt_list _arr = QTextFormat_LengthVectorProperty((QTextFormat*)self, propertyId);
    return _arr;
}

void q_textformat_set_property2(void* self, int propertyId, libqt_list lengths) {
    QTextFormat_SetProperty2((QTextFormat*)self, propertyId, lengths);
}

libqt_map /* of int to QVariant* */ q_textformat_properties(void* self) {
    return QTextFormat_Properties((QTextFormat*)self);
}

int32_t q_textformat_property_count(void* self) {
    return QTextFormat_PropertyCount((QTextFormat*)self);
}

void q_textformat_set_object_type(void* self, int typeVal) {
    QTextFormat_SetObjectType((QTextFormat*)self, typeVal);
}

int32_t q_textformat_object_type(void* self) {
    return QTextFormat_ObjectType((QTextFormat*)self);
}

bool q_textformat_is_char_format(void* self) {
    return QTextFormat_IsCharFormat((QTextFormat*)self);
}

bool q_textformat_is_block_format(void* self) {
    return QTextFormat_IsBlockFormat((QTextFormat*)self);
}

bool q_textformat_is_list_format(void* self) {
    return QTextFormat_IsListFormat((QTextFormat*)self);
}

bool q_textformat_is_frame_format(void* self) {
    return QTextFormat_IsFrameFormat((QTextFormat*)self);
}

bool q_textformat_is_image_format(void* self) {
    return QTextFormat_IsImageFormat((QTextFormat*)self);
}

bool q_textformat_is_table_format(void* self) {
    return QTextFormat_IsTableFormat((QTextFormat*)self);
}

bool q_textformat_is_table_cell_format(void* self) {
    return QTextFormat_IsTableCellFormat((QTextFormat*)self);
}

QTextBlockFormat* q_textformat_to_block_format(void* self) {
    return QTextFormat_ToBlockFormat((QTextFormat*)self);
}

QTextCharFormat* q_textformat_to_char_format(void* self) {
    return QTextFormat_ToCharFormat((QTextFormat*)self);
}

QTextListFormat* q_textformat_to_list_format(void* self) {
    return QTextFormat_ToListFormat((QTextFormat*)self);
}

QTextTableFormat* q_textformat_to_table_format(void* self) {
    return QTextFormat_ToTableFormat((QTextFormat*)self);
}

QTextFrameFormat* q_textformat_to_frame_format(void* self) {
    return QTextFormat_ToFrameFormat((QTextFormat*)self);
}

QTextImageFormat* q_textformat_to_image_format(void* self) {
    return QTextFormat_ToImageFormat((QTextFormat*)self);
}

QTextTableCellFormat* q_textformat_to_table_cell_format(void* self) {
    return QTextFormat_ToTableCellFormat((QTextFormat*)self);
}

bool q_textformat_operator_equal(void* self, void* rhs) {
    return QTextFormat_OperatorEqual((QTextFormat*)self, (QTextFormat*)rhs);
}

bool q_textformat_operator_not_equal(void* self, void* rhs) {
    return QTextFormat_OperatorNotEqual((QTextFormat*)self, (QTextFormat*)rhs);
}

QVariant* q_textformat_to_q_variant(void* self) {
    return QTextFormat_ToQVariant((QTextFormat*)self);
}

void q_textformat_set_layout_direction(void* self, int32_t direction) {
    QTextFormat_SetLayoutDirection((QTextFormat*)self, direction);
}

int32_t q_textformat_layout_direction(void* self) {
    return QTextFormat_LayoutDirection((QTextFormat*)self);
}

void q_textformat_set_background(void* self, void* brush) {
    QTextFormat_SetBackground((QTextFormat*)self, (QBrush*)brush);
}

QBrush* q_textformat_background(void* self) {
    return QTextFormat_Background((QTextFormat*)self);
}

void q_textformat_clear_background(void* self) {
    QTextFormat_ClearBackground((QTextFormat*)self);
}

void q_textformat_set_foreground(void* self, void* brush) {
    QTextFormat_SetForeground((QTextFormat*)self, (QBrush*)brush);
}

QBrush* q_textformat_foreground(void* self) {
    return QTextFormat_Foreground((QTextFormat*)self);
}

void q_textformat_clear_foreground(void* self) {
    QTextFormat_ClearForeground((QTextFormat*)self);
}

void q_textformat_delete(void* self) {
    QTextFormat_Delete((QTextFormat*)(self));
}

QTextCharFormat* q_textcharformat_new() {
    return QTextCharFormat_new();
}

bool q_textcharformat_is_valid(void* self) {
    return QTextCharFormat_IsValid((QTextCharFormat*)self);
}

void q_textcharformat_set_font(void* self, void* font) {
    QTextCharFormat_SetFont((QTextCharFormat*)self, (QFont*)font);
}

QFont* q_textcharformat_font(void* self) {
    return QTextCharFormat_Font((QTextCharFormat*)self);
}

void q_textcharformat_set_font_family(void* self, const char* family) {
    QTextCharFormat_SetFontFamily((QTextCharFormat*)self, qstring(family));
}

const char* q_textcharformat_font_family(void* self) {
    libqt_string _str = QTextCharFormat_FontFamily((QTextCharFormat*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textcharformat_set_font_families(void* self, const char* families[]) {
    size_t families_len = libqt_strv_length(families);
    libqt_string* families_qstr = (libqt_string*)malloc(families_len * sizeof(libqt_string));
    if (families_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_textcharformat_set_font_families");
        abort();
    }
    for (size_t i = 0; i < families_len; ++i) {
        families_qstr[i] = qstring(families[i]);
    }
    libqt_list families_list = qlist(families_qstr, families_len);
    QTextCharFormat_SetFontFamilies((QTextCharFormat*)self, families_list);
    free(families_qstr);
}

QVariant* q_textcharformat_font_families(void* self) {
    return QTextCharFormat_FontFamilies((QTextCharFormat*)self);
}

void q_textcharformat_set_font_style_name(void* self, const char* styleName) {
    QTextCharFormat_SetFontStyleName((QTextCharFormat*)self, qstring(styleName));
}

QVariant* q_textcharformat_font_style_name(void* self) {
    return QTextCharFormat_FontStyleName((QTextCharFormat*)self);
}

void q_textcharformat_set_font_point_size(void* self, double size) {
    QTextCharFormat_SetFontPointSize((QTextCharFormat*)self, size);
}

double q_textcharformat_font_point_size(void* self) {
    return QTextCharFormat_FontPointSize((QTextCharFormat*)self);
}

void q_textcharformat_set_font_weight(void* self, int weight) {
    QTextCharFormat_SetFontWeight((QTextCharFormat*)self, weight);
}

int32_t q_textcharformat_font_weight(void* self) {
    return QTextCharFormat_FontWeight((QTextCharFormat*)self);
}

void q_textcharformat_set_font_italic(void* self, bool italic) {
    QTextCharFormat_SetFontItalic((QTextCharFormat*)self, italic);
}

bool q_textcharformat_font_italic(void* self) {
    return QTextCharFormat_FontItalic((QTextCharFormat*)self);
}

void q_textcharformat_set_font_capitalization(void* self, int32_t capitalization) {
    QTextCharFormat_SetFontCapitalization((QTextCharFormat*)self, capitalization);
}

int32_t q_textcharformat_font_capitalization(void* self) {
    return QTextCharFormat_FontCapitalization((QTextCharFormat*)self);
}

void q_textcharformat_set_font_letter_spacing_type(void* self, int32_t letterSpacingType) {
    QTextCharFormat_SetFontLetterSpacingType((QTextCharFormat*)self, letterSpacingType);
}

int32_t q_textcharformat_font_letter_spacing_type(void* self) {
    return QTextCharFormat_FontLetterSpacingType((QTextCharFormat*)self);
}

void q_textcharformat_set_font_letter_spacing(void* self, double spacing) {
    QTextCharFormat_SetFontLetterSpacing((QTextCharFormat*)self, spacing);
}

double q_textcharformat_font_letter_spacing(void* self) {
    return QTextCharFormat_FontLetterSpacing((QTextCharFormat*)self);
}

void q_textcharformat_set_font_word_spacing(void* self, double spacing) {
    QTextCharFormat_SetFontWordSpacing((QTextCharFormat*)self, spacing);
}

double q_textcharformat_font_word_spacing(void* self) {
    return QTextCharFormat_FontWordSpacing((QTextCharFormat*)self);
}

void q_textcharformat_set_font_underline(void* self, bool underline) {
    QTextCharFormat_SetFontUnderline((QTextCharFormat*)self, underline);
}

bool q_textcharformat_font_underline(void* self) {
    return QTextCharFormat_FontUnderline((QTextCharFormat*)self);
}

void q_textcharformat_set_font_overline(void* self, bool overline) {
    QTextCharFormat_SetFontOverline((QTextCharFormat*)self, overline);
}

bool q_textcharformat_font_overline(void* self) {
    return QTextCharFormat_FontOverline((QTextCharFormat*)self);
}

void q_textcharformat_set_font_strike_out(void* self, bool strikeOut) {
    QTextCharFormat_SetFontStrikeOut((QTextCharFormat*)self, strikeOut);
}

bool q_textcharformat_font_strike_out(void* self) {
    return QTextCharFormat_FontStrikeOut((QTextCharFormat*)self);
}

void q_textcharformat_set_underline_color(void* self, void* color) {
    QTextCharFormat_SetUnderlineColor((QTextCharFormat*)self, (QColor*)color);
}

QColor* q_textcharformat_underline_color(void* self) {
    return QTextCharFormat_UnderlineColor((QTextCharFormat*)self);
}

void q_textcharformat_set_font_fixed_pitch(void* self, bool fixedPitch) {
    QTextCharFormat_SetFontFixedPitch((QTextCharFormat*)self, fixedPitch);
}

bool q_textcharformat_font_fixed_pitch(void* self) {
    return QTextCharFormat_FontFixedPitch((QTextCharFormat*)self);
}

void q_textcharformat_set_font_stretch(void* self, int factor) {
    QTextCharFormat_SetFontStretch((QTextCharFormat*)self, factor);
}

int32_t q_textcharformat_font_stretch(void* self) {
    return QTextCharFormat_FontStretch((QTextCharFormat*)self);
}

void q_textcharformat_set_font_style_hint(void* self, int32_t hint) {
    QTextCharFormat_SetFontStyleHint((QTextCharFormat*)self, hint);
}

void q_textcharformat_set_font_style_strategy(void* self, int32_t strategy) {
    QTextCharFormat_SetFontStyleStrategy((QTextCharFormat*)self, strategy);
}

int32_t q_textcharformat_font_style_hint(void* self) {
    return QTextCharFormat_FontStyleHint((QTextCharFormat*)self);
}

int32_t q_textcharformat_font_style_strategy(void* self) {
    return QTextCharFormat_FontStyleStrategy((QTextCharFormat*)self);
}

void q_textcharformat_set_font_hinting_preference(void* self, int32_t hintingPreference) {
    QTextCharFormat_SetFontHintingPreference((QTextCharFormat*)self, hintingPreference);
}

int32_t q_textcharformat_font_hinting_preference(void* self) {
    return QTextCharFormat_FontHintingPreference((QTextCharFormat*)self);
}

void q_textcharformat_set_font_kerning(void* self, bool enable) {
    QTextCharFormat_SetFontKerning((QTextCharFormat*)self, enable);
}

bool q_textcharformat_font_kerning(void* self) {
    return QTextCharFormat_FontKerning((QTextCharFormat*)self);
}

void q_textcharformat_set_underline_style(void* self, int32_t style) {
    QTextCharFormat_SetUnderlineStyle((QTextCharFormat*)self, style);
}

int32_t q_textcharformat_underline_style(void* self) {
    return QTextCharFormat_UnderlineStyle((QTextCharFormat*)self);
}

void q_textcharformat_set_vertical_alignment(void* self, int32_t alignment) {
    QTextCharFormat_SetVerticalAlignment((QTextCharFormat*)self, alignment);
}

int32_t q_textcharformat_vertical_alignment(void* self) {
    return QTextCharFormat_VerticalAlignment((QTextCharFormat*)self);
}

void q_textcharformat_set_text_outline(void* self, void* pen) {
    QTextCharFormat_SetTextOutline((QTextCharFormat*)self, (QPen*)pen);
}

QPen* q_textcharformat_text_outline(void* self) {
    return QTextCharFormat_TextOutline((QTextCharFormat*)self);
}

void q_textcharformat_set_tool_tip(void* self, const char* tip) {
    QTextCharFormat_SetToolTip((QTextCharFormat*)self, qstring(tip));
}

const char* q_textcharformat_tool_tip(void* self) {
    libqt_string _str = QTextCharFormat_ToolTip((QTextCharFormat*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textcharformat_set_super_script_baseline(void* self, double baseline) {
    QTextCharFormat_SetSuperScriptBaseline((QTextCharFormat*)self, baseline);
}

double q_textcharformat_super_script_baseline(void* self) {
    return QTextCharFormat_SuperScriptBaseline((QTextCharFormat*)self);
}

void q_textcharformat_set_sub_script_baseline(void* self, double baseline) {
    QTextCharFormat_SetSubScriptBaseline((QTextCharFormat*)self, baseline);
}

double q_textcharformat_sub_script_baseline(void* self) {
    return QTextCharFormat_SubScriptBaseline((QTextCharFormat*)self);
}

void q_textcharformat_set_baseline_offset(void* self, double baseline) {
    QTextCharFormat_SetBaselineOffset((QTextCharFormat*)self, baseline);
}

double q_textcharformat_baseline_offset(void* self) {
    return QTextCharFormat_BaselineOffset((QTextCharFormat*)self);
}

void q_textcharformat_set_anchor(void* self, bool anchor) {
    QTextCharFormat_SetAnchor((QTextCharFormat*)self, anchor);
}

bool q_textcharformat_is_anchor(void* self) {
    return QTextCharFormat_IsAnchor((QTextCharFormat*)self);
}

void q_textcharformat_set_anchor_href(void* self, const char* value) {
    QTextCharFormat_SetAnchorHref((QTextCharFormat*)self, qstring(value));
}

const char* q_textcharformat_anchor_href(void* self) {
    libqt_string _str = QTextCharFormat_AnchorHref((QTextCharFormat*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textcharformat_set_anchor_names(void* self, const char* names[]) {
    size_t names_len = libqt_strv_length(names);
    libqt_string* names_qstr = (libqt_string*)malloc(names_len * sizeof(libqt_string));
    if (names_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_textcharformat_set_anchor_names");
        abort();
    }
    for (size_t i = 0; i < names_len; ++i) {
        names_qstr[i] = qstring(names[i]);
    }
    libqt_list names_list = qlist(names_qstr, names_len);
    QTextCharFormat_SetAnchorNames((QTextCharFormat*)self, names_list);
    free(names_qstr);
}

const char** q_textcharformat_anchor_names(void* self) {
    libqt_list _arr = QTextCharFormat_AnchorNames((QTextCharFormat*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_textcharformat_anchor_names");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_textcharformat_set_table_cell_row_span(void* self, int tableCellRowSpan) {
    QTextCharFormat_SetTableCellRowSpan((QTextCharFormat*)self, tableCellRowSpan);
}

int32_t q_textcharformat_table_cell_row_span(void* self) {
    return QTextCharFormat_TableCellRowSpan((QTextCharFormat*)self);
}

void q_textcharformat_set_table_cell_column_span(void* self, int tableCellColumnSpan) {
    QTextCharFormat_SetTableCellColumnSpan((QTextCharFormat*)self, tableCellColumnSpan);
}

int32_t q_textcharformat_table_cell_column_span(void* self) {
    return QTextCharFormat_TableCellColumnSpan((QTextCharFormat*)self);
}

void q_textcharformat_set_font2(void* self, void* font, int32_t behavior) {
    QTextCharFormat_SetFont2((QTextCharFormat*)self, (QFont*)font, behavior);
}

void q_textcharformat_set_font_style_hint2(void* self, int32_t hint, int32_t strategy) {
    QTextCharFormat_SetFontStyleHint2((QTextCharFormat*)self, hint, strategy);
}

void q_textcharformat_operator_assign(void* self, void* rhs) {
    QTextFormat_OperatorAssign((QTextFormat*)self, (QTextFormat*)rhs);
}

void q_textcharformat_swap(void* self, void* other) {
    QTextFormat_Swap((QTextFormat*)self, (QTextFormat*)other);
}

void q_textcharformat_merge(void* self, void* other) {
    QTextFormat_Merge((QTextFormat*)self, (QTextFormat*)other);
}

bool q_textcharformat_is_empty(void* self) {
    return QTextFormat_IsEmpty((QTextFormat*)self);
}

int32_t q_textcharformat_type(void* self) {
    return QTextFormat_Type((QTextFormat*)self);
}

int32_t q_textcharformat_object_index(void* self) {
    return QTextFormat_ObjectIndex((QTextFormat*)self);
}

void q_textcharformat_set_object_index(void* self, int object) {
    QTextFormat_SetObjectIndex((QTextFormat*)self, object);
}

QVariant* q_textcharformat_property(void* self, int propertyId) {
    return QTextFormat_Property((QTextFormat*)self, propertyId);
}

void q_textcharformat_set_property(void* self, int propertyId, void* value) {
    QTextFormat_SetProperty((QTextFormat*)self, propertyId, (QVariant*)value);
}

void q_textcharformat_clear_property(void* self, int propertyId) {
    QTextFormat_ClearProperty((QTextFormat*)self, propertyId);
}

bool q_textcharformat_has_property(void* self, int propertyId) {
    return QTextFormat_HasProperty((QTextFormat*)self, propertyId);
}

bool q_textcharformat_bool_property(void* self, int propertyId) {
    return QTextFormat_BoolProperty((QTextFormat*)self, propertyId);
}

int32_t q_textcharformat_int_property(void* self, int propertyId) {
    return QTextFormat_IntProperty((QTextFormat*)self, propertyId);
}

double q_textcharformat_double_property(void* self, int propertyId) {
    return QTextFormat_DoubleProperty((QTextFormat*)self, propertyId);
}

const char* q_textcharformat_string_property(void* self, int propertyId) {
    libqt_string _str = QTextFormat_StringProperty((QTextFormat*)self, propertyId);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* q_textcharformat_color_property(void* self, int propertyId) {
    return QTextFormat_ColorProperty((QTextFormat*)self, propertyId);
}

QPen* q_textcharformat_pen_property(void* self, int propertyId) {
    return QTextFormat_PenProperty((QTextFormat*)self, propertyId);
}

QBrush* q_textcharformat_brush_property(void* self, int propertyId) {
    return QTextFormat_BrushProperty((QTextFormat*)self, propertyId);
}

QTextLength* q_textcharformat_length_property(void* self, int propertyId) {
    return QTextFormat_LengthProperty((QTextFormat*)self, propertyId);
}

libqt_list /* of QTextLength* */ q_textcharformat_length_vector_property(void* self, int propertyId) {
    libqt_list _arr = QTextFormat_LengthVectorProperty((QTextFormat*)self, propertyId);
    return _arr;
}

void q_textcharformat_set_property2(void* self, int propertyId, libqt_list lengths) {
    QTextFormat_SetProperty2((QTextFormat*)self, propertyId, lengths);
}

libqt_map /* of int to QVariant* */ q_textcharformat_properties(void* self) {
    return QTextFormat_Properties((QTextFormat*)self);
}

int32_t q_textcharformat_property_count(void* self) {
    return QTextFormat_PropertyCount((QTextFormat*)self);
}

void q_textcharformat_set_object_type(void* self, int typeVal) {
    QTextFormat_SetObjectType((QTextFormat*)self, typeVal);
}

int32_t q_textcharformat_object_type(void* self) {
    return QTextFormat_ObjectType((QTextFormat*)self);
}

bool q_textcharformat_is_char_format(void* self) {
    return QTextFormat_IsCharFormat((QTextFormat*)self);
}

bool q_textcharformat_is_block_format(void* self) {
    return QTextFormat_IsBlockFormat((QTextFormat*)self);
}

bool q_textcharformat_is_list_format(void* self) {
    return QTextFormat_IsListFormat((QTextFormat*)self);
}

bool q_textcharformat_is_frame_format(void* self) {
    return QTextFormat_IsFrameFormat((QTextFormat*)self);
}

bool q_textcharformat_is_image_format(void* self) {
    return QTextFormat_IsImageFormat((QTextFormat*)self);
}

bool q_textcharformat_is_table_format(void* self) {
    return QTextFormat_IsTableFormat((QTextFormat*)self);
}

bool q_textcharformat_is_table_cell_format(void* self) {
    return QTextFormat_IsTableCellFormat((QTextFormat*)self);
}

QTextBlockFormat* q_textcharformat_to_block_format(void* self) {
    return QTextFormat_ToBlockFormat((QTextFormat*)self);
}

QTextCharFormat* q_textcharformat_to_char_format(void* self) {
    return QTextFormat_ToCharFormat((QTextFormat*)self);
}

QTextListFormat* q_textcharformat_to_list_format(void* self) {
    return QTextFormat_ToListFormat((QTextFormat*)self);
}

QTextTableFormat* q_textcharformat_to_table_format(void* self) {
    return QTextFormat_ToTableFormat((QTextFormat*)self);
}

QTextFrameFormat* q_textcharformat_to_frame_format(void* self) {
    return QTextFormat_ToFrameFormat((QTextFormat*)self);
}

QTextImageFormat* q_textcharformat_to_image_format(void* self) {
    return QTextFormat_ToImageFormat((QTextFormat*)self);
}

QTextTableCellFormat* q_textcharformat_to_table_cell_format(void* self) {
    return QTextFormat_ToTableCellFormat((QTextFormat*)self);
}

bool q_textcharformat_operator_equal(void* self, void* rhs) {
    return QTextFormat_OperatorEqual((QTextFormat*)self, (QTextFormat*)rhs);
}

bool q_textcharformat_operator_not_equal(void* self, void* rhs) {
    return QTextFormat_OperatorNotEqual((QTextFormat*)self, (QTextFormat*)rhs);
}

QVariant* q_textcharformat_to_q_variant(void* self) {
    return QTextFormat_ToQVariant((QTextFormat*)self);
}

void q_textcharformat_set_layout_direction(void* self, int32_t direction) {
    QTextFormat_SetLayoutDirection((QTextFormat*)self, direction);
}

int32_t q_textcharformat_layout_direction(void* self) {
    return QTextFormat_LayoutDirection((QTextFormat*)self);
}

void q_textcharformat_set_background(void* self, void* brush) {
    QTextFormat_SetBackground((QTextFormat*)self, (QBrush*)brush);
}

QBrush* q_textcharformat_background(void* self) {
    return QTextFormat_Background((QTextFormat*)self);
}

void q_textcharformat_clear_background(void* self) {
    QTextFormat_ClearBackground((QTextFormat*)self);
}

void q_textcharformat_set_foreground(void* self, void* brush) {
    QTextFormat_SetForeground((QTextFormat*)self, (QBrush*)brush);
}

QBrush* q_textcharformat_foreground(void* self) {
    return QTextFormat_Foreground((QTextFormat*)self);
}

void q_textcharformat_clear_foreground(void* self) {
    QTextFormat_ClearForeground((QTextFormat*)self);
}

void q_textcharformat_delete(void* self) {
    QTextCharFormat_Delete((QTextCharFormat*)(self));
}

QTextBlockFormat* q_textblockformat_new() {
    return QTextBlockFormat_new();
}

bool q_textblockformat_is_valid(void* self) {
    return QTextBlockFormat_IsValid((QTextBlockFormat*)self);
}

void q_textblockformat_set_alignment(void* self, int64_t alignment) {
    QTextBlockFormat_SetAlignment((QTextBlockFormat*)self, alignment);
}

int64_t q_textblockformat_alignment(void* self) {
    return QTextBlockFormat_Alignment((QTextBlockFormat*)self);
}

void q_textblockformat_set_top_margin(void* self, double margin) {
    QTextBlockFormat_SetTopMargin((QTextBlockFormat*)self, margin);
}

double q_textblockformat_top_margin(void* self) {
    return QTextBlockFormat_TopMargin((QTextBlockFormat*)self);
}

void q_textblockformat_set_bottom_margin(void* self, double margin) {
    QTextBlockFormat_SetBottomMargin((QTextBlockFormat*)self, margin);
}

double q_textblockformat_bottom_margin(void* self) {
    return QTextBlockFormat_BottomMargin((QTextBlockFormat*)self);
}

void q_textblockformat_set_left_margin(void* self, double margin) {
    QTextBlockFormat_SetLeftMargin((QTextBlockFormat*)self, margin);
}

double q_textblockformat_left_margin(void* self) {
    return QTextBlockFormat_LeftMargin((QTextBlockFormat*)self);
}

void q_textblockformat_set_right_margin(void* self, double margin) {
    QTextBlockFormat_SetRightMargin((QTextBlockFormat*)self, margin);
}

double q_textblockformat_right_margin(void* self) {
    return QTextBlockFormat_RightMargin((QTextBlockFormat*)self);
}

void q_textblockformat_set_text_indent(void* self, double aindent) {
    QTextBlockFormat_SetTextIndent((QTextBlockFormat*)self, aindent);
}

double q_textblockformat_text_indent(void* self) {
    return QTextBlockFormat_TextIndent((QTextBlockFormat*)self);
}

void q_textblockformat_set_indent(void* self, int indent) {
    QTextBlockFormat_SetIndent((QTextBlockFormat*)self, indent);
}

int32_t q_textblockformat_indent(void* self) {
    return QTextBlockFormat_Indent((QTextBlockFormat*)self);
}

void q_textblockformat_set_heading_level(void* self, int alevel) {
    QTextBlockFormat_SetHeadingLevel((QTextBlockFormat*)self, alevel);
}

int32_t q_textblockformat_heading_level(void* self) {
    return QTextBlockFormat_HeadingLevel((QTextBlockFormat*)self);
}

void q_textblockformat_set_line_height(void* self, double height, int heightType) {
    QTextBlockFormat_SetLineHeight((QTextBlockFormat*)self, height, heightType);
}

double q_textblockformat_line_height(void* self, double scriptLineHeight, double scaling) {
    return QTextBlockFormat_LineHeight((QTextBlockFormat*)self, scriptLineHeight, scaling);
}

double q_textblockformat_line_height2(void* self) {
    return QTextBlockFormat_LineHeight2((QTextBlockFormat*)self);
}

int32_t q_textblockformat_line_height_type(void* self) {
    return QTextBlockFormat_LineHeightType((QTextBlockFormat*)self);
}

void q_textblockformat_set_non_breakable_lines(void* self, bool b) {
    QTextBlockFormat_SetNonBreakableLines((QTextBlockFormat*)self, b);
}

bool q_textblockformat_non_breakable_lines(void* self) {
    return QTextBlockFormat_NonBreakableLines((QTextBlockFormat*)self);
}

void q_textblockformat_set_page_break_policy(void* self, int64_t flags) {
    QTextBlockFormat_SetPageBreakPolicy((QTextBlockFormat*)self, flags);
}

int64_t q_textblockformat_page_break_policy(void* self) {
    return QTextBlockFormat_PageBreakPolicy((QTextBlockFormat*)self);
}

void q_textblockformat_set_tab_positions(void* self, libqt_list tabs) {
    QTextBlockFormat_SetTabPositions((QTextBlockFormat*)self, tabs);
}

libqt_list /* of QTextOption__Tab* */ q_textblockformat_tab_positions(void* self) {
    libqt_list _arr = QTextBlockFormat_TabPositions((QTextBlockFormat*)self);
    return _arr;
}

void q_textblockformat_set_marker(void* self, int32_t marker) {
    QTextBlockFormat_SetMarker((QTextBlockFormat*)self, marker);
}

int32_t q_textblockformat_marker(void* self) {
    return QTextBlockFormat_Marker((QTextBlockFormat*)self);
}

void q_textblockformat_operator_assign(void* self, void* rhs) {
    QTextFormat_OperatorAssign((QTextFormat*)self, (QTextFormat*)rhs);
}

void q_textblockformat_swap(void* self, void* other) {
    QTextFormat_Swap((QTextFormat*)self, (QTextFormat*)other);
}

void q_textblockformat_merge(void* self, void* other) {
    QTextFormat_Merge((QTextFormat*)self, (QTextFormat*)other);
}

bool q_textblockformat_is_empty(void* self) {
    return QTextFormat_IsEmpty((QTextFormat*)self);
}

int32_t q_textblockformat_type(void* self) {
    return QTextFormat_Type((QTextFormat*)self);
}

int32_t q_textblockformat_object_index(void* self) {
    return QTextFormat_ObjectIndex((QTextFormat*)self);
}

void q_textblockformat_set_object_index(void* self, int object) {
    QTextFormat_SetObjectIndex((QTextFormat*)self, object);
}

QVariant* q_textblockformat_property(void* self, int propertyId) {
    return QTextFormat_Property((QTextFormat*)self, propertyId);
}

void q_textblockformat_set_property(void* self, int propertyId, void* value) {
    QTextFormat_SetProperty((QTextFormat*)self, propertyId, (QVariant*)value);
}

void q_textblockformat_clear_property(void* self, int propertyId) {
    QTextFormat_ClearProperty((QTextFormat*)self, propertyId);
}

bool q_textblockformat_has_property(void* self, int propertyId) {
    return QTextFormat_HasProperty((QTextFormat*)self, propertyId);
}

bool q_textblockformat_bool_property(void* self, int propertyId) {
    return QTextFormat_BoolProperty((QTextFormat*)self, propertyId);
}

int32_t q_textblockformat_int_property(void* self, int propertyId) {
    return QTextFormat_IntProperty((QTextFormat*)self, propertyId);
}

double q_textblockformat_double_property(void* self, int propertyId) {
    return QTextFormat_DoubleProperty((QTextFormat*)self, propertyId);
}

const char* q_textblockformat_string_property(void* self, int propertyId) {
    libqt_string _str = QTextFormat_StringProperty((QTextFormat*)self, propertyId);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* q_textblockformat_color_property(void* self, int propertyId) {
    return QTextFormat_ColorProperty((QTextFormat*)self, propertyId);
}

QPen* q_textblockformat_pen_property(void* self, int propertyId) {
    return QTextFormat_PenProperty((QTextFormat*)self, propertyId);
}

QBrush* q_textblockformat_brush_property(void* self, int propertyId) {
    return QTextFormat_BrushProperty((QTextFormat*)self, propertyId);
}

QTextLength* q_textblockformat_length_property(void* self, int propertyId) {
    return QTextFormat_LengthProperty((QTextFormat*)self, propertyId);
}

libqt_list /* of QTextLength* */ q_textblockformat_length_vector_property(void* self, int propertyId) {
    libqt_list _arr = QTextFormat_LengthVectorProperty((QTextFormat*)self, propertyId);
    return _arr;
}

void q_textblockformat_set_property2(void* self, int propertyId, libqt_list lengths) {
    QTextFormat_SetProperty2((QTextFormat*)self, propertyId, lengths);
}

libqt_map /* of int to QVariant* */ q_textblockformat_properties(void* self) {
    return QTextFormat_Properties((QTextFormat*)self);
}

int32_t q_textblockformat_property_count(void* self) {
    return QTextFormat_PropertyCount((QTextFormat*)self);
}

void q_textblockformat_set_object_type(void* self, int typeVal) {
    QTextFormat_SetObjectType((QTextFormat*)self, typeVal);
}

int32_t q_textblockformat_object_type(void* self) {
    return QTextFormat_ObjectType((QTextFormat*)self);
}

bool q_textblockformat_is_char_format(void* self) {
    return QTextFormat_IsCharFormat((QTextFormat*)self);
}

bool q_textblockformat_is_block_format(void* self) {
    return QTextFormat_IsBlockFormat((QTextFormat*)self);
}

bool q_textblockformat_is_list_format(void* self) {
    return QTextFormat_IsListFormat((QTextFormat*)self);
}

bool q_textblockformat_is_frame_format(void* self) {
    return QTextFormat_IsFrameFormat((QTextFormat*)self);
}

bool q_textblockformat_is_image_format(void* self) {
    return QTextFormat_IsImageFormat((QTextFormat*)self);
}

bool q_textblockformat_is_table_format(void* self) {
    return QTextFormat_IsTableFormat((QTextFormat*)self);
}

bool q_textblockformat_is_table_cell_format(void* self) {
    return QTextFormat_IsTableCellFormat((QTextFormat*)self);
}

QTextBlockFormat* q_textblockformat_to_block_format(void* self) {
    return QTextFormat_ToBlockFormat((QTextFormat*)self);
}

QTextCharFormat* q_textblockformat_to_char_format(void* self) {
    return QTextFormat_ToCharFormat((QTextFormat*)self);
}

QTextListFormat* q_textblockformat_to_list_format(void* self) {
    return QTextFormat_ToListFormat((QTextFormat*)self);
}

QTextTableFormat* q_textblockformat_to_table_format(void* self) {
    return QTextFormat_ToTableFormat((QTextFormat*)self);
}

QTextFrameFormat* q_textblockformat_to_frame_format(void* self) {
    return QTextFormat_ToFrameFormat((QTextFormat*)self);
}

QTextImageFormat* q_textblockformat_to_image_format(void* self) {
    return QTextFormat_ToImageFormat((QTextFormat*)self);
}

QTextTableCellFormat* q_textblockformat_to_table_cell_format(void* self) {
    return QTextFormat_ToTableCellFormat((QTextFormat*)self);
}

bool q_textblockformat_operator_equal(void* self, void* rhs) {
    return QTextFormat_OperatorEqual((QTextFormat*)self, (QTextFormat*)rhs);
}

bool q_textblockformat_operator_not_equal(void* self, void* rhs) {
    return QTextFormat_OperatorNotEqual((QTextFormat*)self, (QTextFormat*)rhs);
}

QVariant* q_textblockformat_to_q_variant(void* self) {
    return QTextFormat_ToQVariant((QTextFormat*)self);
}

void q_textblockformat_set_layout_direction(void* self, int32_t direction) {
    QTextFormat_SetLayoutDirection((QTextFormat*)self, direction);
}

int32_t q_textblockformat_layout_direction(void* self) {
    return QTextFormat_LayoutDirection((QTextFormat*)self);
}

void q_textblockformat_set_background(void* self, void* brush) {
    QTextFormat_SetBackground((QTextFormat*)self, (QBrush*)brush);
}

QBrush* q_textblockformat_background(void* self) {
    return QTextFormat_Background((QTextFormat*)self);
}

void q_textblockformat_clear_background(void* self) {
    QTextFormat_ClearBackground((QTextFormat*)self);
}

void q_textblockformat_set_foreground(void* self, void* brush) {
    QTextFormat_SetForeground((QTextFormat*)self, (QBrush*)brush);
}

QBrush* q_textblockformat_foreground(void* self) {
    return QTextFormat_Foreground((QTextFormat*)self);
}

void q_textblockformat_clear_foreground(void* self) {
    QTextFormat_ClearForeground((QTextFormat*)self);
}

void q_textblockformat_delete(void* self) {
    QTextBlockFormat_Delete((QTextBlockFormat*)(self));
}

QTextListFormat* q_textlistformat_new() {
    return QTextListFormat_new();
}

bool q_textlistformat_is_valid(void* self) {
    return QTextListFormat_IsValid((QTextListFormat*)self);
}

void q_textlistformat_set_style(void* self, int32_t style) {
    QTextListFormat_SetStyle((QTextListFormat*)self, style);
}

int32_t q_textlistformat_style(void* self) {
    return QTextListFormat_Style((QTextListFormat*)self);
}

void q_textlistformat_set_indent(void* self, int indent) {
    QTextListFormat_SetIndent((QTextListFormat*)self, indent);
}

int32_t q_textlistformat_indent(void* self) {
    return QTextListFormat_Indent((QTextListFormat*)self);
}

void q_textlistformat_set_number_prefix(void* self, const char* numberPrefix) {
    QTextListFormat_SetNumberPrefix((QTextListFormat*)self, qstring(numberPrefix));
}

const char* q_textlistformat_number_prefix(void* self) {
    libqt_string _str = QTextListFormat_NumberPrefix((QTextListFormat*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textlistformat_set_number_suffix(void* self, const char* numberSuffix) {
    QTextListFormat_SetNumberSuffix((QTextListFormat*)self, qstring(numberSuffix));
}

const char* q_textlistformat_number_suffix(void* self) {
    libqt_string _str = QTextListFormat_NumberSuffix((QTextListFormat*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textlistformat_set_start(void* self, int indent) {
    QTextListFormat_SetStart((QTextListFormat*)self, indent);
}

int32_t q_textlistformat_start(void* self) {
    return QTextListFormat_Start((QTextListFormat*)self);
}

void q_textlistformat_operator_assign(void* self, void* rhs) {
    QTextFormat_OperatorAssign((QTextFormat*)self, (QTextFormat*)rhs);
}

void q_textlistformat_swap(void* self, void* other) {
    QTextFormat_Swap((QTextFormat*)self, (QTextFormat*)other);
}

void q_textlistformat_merge(void* self, void* other) {
    QTextFormat_Merge((QTextFormat*)self, (QTextFormat*)other);
}

bool q_textlistformat_is_empty(void* self) {
    return QTextFormat_IsEmpty((QTextFormat*)self);
}

int32_t q_textlistformat_type(void* self) {
    return QTextFormat_Type((QTextFormat*)self);
}

int32_t q_textlistformat_object_index(void* self) {
    return QTextFormat_ObjectIndex((QTextFormat*)self);
}

void q_textlistformat_set_object_index(void* self, int object) {
    QTextFormat_SetObjectIndex((QTextFormat*)self, object);
}

QVariant* q_textlistformat_property(void* self, int propertyId) {
    return QTextFormat_Property((QTextFormat*)self, propertyId);
}

void q_textlistformat_set_property(void* self, int propertyId, void* value) {
    QTextFormat_SetProperty((QTextFormat*)self, propertyId, (QVariant*)value);
}

void q_textlistformat_clear_property(void* self, int propertyId) {
    QTextFormat_ClearProperty((QTextFormat*)self, propertyId);
}

bool q_textlistformat_has_property(void* self, int propertyId) {
    return QTextFormat_HasProperty((QTextFormat*)self, propertyId);
}

bool q_textlistformat_bool_property(void* self, int propertyId) {
    return QTextFormat_BoolProperty((QTextFormat*)self, propertyId);
}

int32_t q_textlistformat_int_property(void* self, int propertyId) {
    return QTextFormat_IntProperty((QTextFormat*)self, propertyId);
}

double q_textlistformat_double_property(void* self, int propertyId) {
    return QTextFormat_DoubleProperty((QTextFormat*)self, propertyId);
}

const char* q_textlistformat_string_property(void* self, int propertyId) {
    libqt_string _str = QTextFormat_StringProperty((QTextFormat*)self, propertyId);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* q_textlistformat_color_property(void* self, int propertyId) {
    return QTextFormat_ColorProperty((QTextFormat*)self, propertyId);
}

QPen* q_textlistformat_pen_property(void* self, int propertyId) {
    return QTextFormat_PenProperty((QTextFormat*)self, propertyId);
}

QBrush* q_textlistformat_brush_property(void* self, int propertyId) {
    return QTextFormat_BrushProperty((QTextFormat*)self, propertyId);
}

QTextLength* q_textlistformat_length_property(void* self, int propertyId) {
    return QTextFormat_LengthProperty((QTextFormat*)self, propertyId);
}

libqt_list /* of QTextLength* */ q_textlistformat_length_vector_property(void* self, int propertyId) {
    libqt_list _arr = QTextFormat_LengthVectorProperty((QTextFormat*)self, propertyId);
    return _arr;
}

void q_textlistformat_set_property2(void* self, int propertyId, libqt_list lengths) {
    QTextFormat_SetProperty2((QTextFormat*)self, propertyId, lengths);
}

libqt_map /* of int to QVariant* */ q_textlistformat_properties(void* self) {
    return QTextFormat_Properties((QTextFormat*)self);
}

int32_t q_textlistformat_property_count(void* self) {
    return QTextFormat_PropertyCount((QTextFormat*)self);
}

void q_textlistformat_set_object_type(void* self, int typeVal) {
    QTextFormat_SetObjectType((QTextFormat*)self, typeVal);
}

int32_t q_textlistformat_object_type(void* self) {
    return QTextFormat_ObjectType((QTextFormat*)self);
}

bool q_textlistformat_is_char_format(void* self) {
    return QTextFormat_IsCharFormat((QTextFormat*)self);
}

bool q_textlistformat_is_block_format(void* self) {
    return QTextFormat_IsBlockFormat((QTextFormat*)self);
}

bool q_textlistformat_is_list_format(void* self) {
    return QTextFormat_IsListFormat((QTextFormat*)self);
}

bool q_textlistformat_is_frame_format(void* self) {
    return QTextFormat_IsFrameFormat((QTextFormat*)self);
}

bool q_textlistformat_is_image_format(void* self) {
    return QTextFormat_IsImageFormat((QTextFormat*)self);
}

bool q_textlistformat_is_table_format(void* self) {
    return QTextFormat_IsTableFormat((QTextFormat*)self);
}

bool q_textlistformat_is_table_cell_format(void* self) {
    return QTextFormat_IsTableCellFormat((QTextFormat*)self);
}

QTextBlockFormat* q_textlistformat_to_block_format(void* self) {
    return QTextFormat_ToBlockFormat((QTextFormat*)self);
}

QTextCharFormat* q_textlistformat_to_char_format(void* self) {
    return QTextFormat_ToCharFormat((QTextFormat*)self);
}

QTextListFormat* q_textlistformat_to_list_format(void* self) {
    return QTextFormat_ToListFormat((QTextFormat*)self);
}

QTextTableFormat* q_textlistformat_to_table_format(void* self) {
    return QTextFormat_ToTableFormat((QTextFormat*)self);
}

QTextFrameFormat* q_textlistformat_to_frame_format(void* self) {
    return QTextFormat_ToFrameFormat((QTextFormat*)self);
}

QTextImageFormat* q_textlistformat_to_image_format(void* self) {
    return QTextFormat_ToImageFormat((QTextFormat*)self);
}

QTextTableCellFormat* q_textlistformat_to_table_cell_format(void* self) {
    return QTextFormat_ToTableCellFormat((QTextFormat*)self);
}

bool q_textlistformat_operator_equal(void* self, void* rhs) {
    return QTextFormat_OperatorEqual((QTextFormat*)self, (QTextFormat*)rhs);
}

bool q_textlistformat_operator_not_equal(void* self, void* rhs) {
    return QTextFormat_OperatorNotEqual((QTextFormat*)self, (QTextFormat*)rhs);
}

QVariant* q_textlistformat_to_q_variant(void* self) {
    return QTextFormat_ToQVariant((QTextFormat*)self);
}

void q_textlistformat_set_layout_direction(void* self, int32_t direction) {
    QTextFormat_SetLayoutDirection((QTextFormat*)self, direction);
}

int32_t q_textlistformat_layout_direction(void* self) {
    return QTextFormat_LayoutDirection((QTextFormat*)self);
}

void q_textlistformat_set_background(void* self, void* brush) {
    QTextFormat_SetBackground((QTextFormat*)self, (QBrush*)brush);
}

QBrush* q_textlistformat_background(void* self) {
    return QTextFormat_Background((QTextFormat*)self);
}

void q_textlistformat_clear_background(void* self) {
    QTextFormat_ClearBackground((QTextFormat*)self);
}

void q_textlistformat_set_foreground(void* self, void* brush) {
    QTextFormat_SetForeground((QTextFormat*)self, (QBrush*)brush);
}

QBrush* q_textlistformat_foreground(void* self) {
    return QTextFormat_Foreground((QTextFormat*)self);
}

void q_textlistformat_clear_foreground(void* self) {
    QTextFormat_ClearForeground((QTextFormat*)self);
}

void q_textlistformat_delete(void* self) {
    QTextListFormat_Delete((QTextListFormat*)(self));
}

QTextImageFormat* q_textimageformat_new() {
    return QTextImageFormat_new();
}

bool q_textimageformat_is_valid(void* self) {
    return QTextImageFormat_IsValid((QTextImageFormat*)self);
}

void q_textimageformat_set_name(void* self, const char* name) {
    QTextImageFormat_SetName((QTextImageFormat*)self, qstring(name));
}

const char* q_textimageformat_name(void* self) {
    libqt_string _str = QTextImageFormat_Name((QTextImageFormat*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textimageformat_set_width(void* self, double width) {
    QTextImageFormat_SetWidth((QTextImageFormat*)self, width);
}

double q_textimageformat_width(void* self) {
    return QTextImageFormat_Width((QTextImageFormat*)self);
}

void q_textimageformat_set_maximum_width(void* self, void* maxWidth) {
    QTextImageFormat_SetMaximumWidth((QTextImageFormat*)self, (QTextLength*)maxWidth);
}

QTextLength* q_textimageformat_maximum_width(void* self) {
    return QTextImageFormat_MaximumWidth((QTextImageFormat*)self);
}

void q_textimageformat_set_height(void* self, double height) {
    QTextImageFormat_SetHeight((QTextImageFormat*)self, height);
}

double q_textimageformat_height(void* self) {
    return QTextImageFormat_Height((QTextImageFormat*)self);
}

void q_textimageformat_set_quality(void* self, int quality) {
    QTextImageFormat_SetQuality((QTextImageFormat*)self, quality);
}

void q_textimageformat_set_quality2(void* self) {
    QTextImageFormat_SetQuality2((QTextImageFormat*)self);
}

int32_t q_textimageformat_quality(void* self) {
    return QTextImageFormat_Quality((QTextImageFormat*)self);
}

void q_textimageformat_set_font(void* self, void* font) {
    QTextCharFormat_SetFont((QTextCharFormat*)self, (QFont*)font);
}

QFont* q_textimageformat_font(void* self) {
    return QTextCharFormat_Font((QTextCharFormat*)self);
}

void q_textimageformat_set_font_family(void* self, const char* family) {
    QTextCharFormat_SetFontFamily((QTextCharFormat*)self, qstring(family));
}

const char* q_textimageformat_font_family(void* self) {
    libqt_string _str = QTextCharFormat_FontFamily((QTextCharFormat*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textimageformat_set_font_families(void* self, const char* families[]) {
    size_t families_len = libqt_strv_length(families);
    libqt_string* families_qstr = (libqt_string*)malloc(families_len * sizeof(libqt_string));
    if (families_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_textimageformat_set_font_families");
        abort();
    }
    for (size_t i = 0; i < families_len; ++i) {
        families_qstr[i] = qstring(families[i]);
    }
    libqt_list families_list = qlist(families_qstr, families_len);
    QTextCharFormat_SetFontFamilies((QTextCharFormat*)self, families_list);
    free(families_qstr);
}

QVariant* q_textimageformat_font_families(void* self) {
    return QTextCharFormat_FontFamilies((QTextCharFormat*)self);
}

void q_textimageformat_set_font_style_name(void* self, const char* styleName) {
    QTextCharFormat_SetFontStyleName((QTextCharFormat*)self, qstring(styleName));
}

QVariant* q_textimageformat_font_style_name(void* self) {
    return QTextCharFormat_FontStyleName((QTextCharFormat*)self);
}

void q_textimageformat_set_font_point_size(void* self, double size) {
    QTextCharFormat_SetFontPointSize((QTextCharFormat*)self, size);
}

double q_textimageformat_font_point_size(void* self) {
    return QTextCharFormat_FontPointSize((QTextCharFormat*)self);
}

void q_textimageformat_set_font_weight(void* self, int weight) {
    QTextCharFormat_SetFontWeight((QTextCharFormat*)self, weight);
}

int32_t q_textimageformat_font_weight(void* self) {
    return QTextCharFormat_FontWeight((QTextCharFormat*)self);
}

void q_textimageformat_set_font_italic(void* self, bool italic) {
    QTextCharFormat_SetFontItalic((QTextCharFormat*)self, italic);
}

bool q_textimageformat_font_italic(void* self) {
    return QTextCharFormat_FontItalic((QTextCharFormat*)self);
}

void q_textimageformat_set_font_capitalization(void* self, int32_t capitalization) {
    QTextCharFormat_SetFontCapitalization((QTextCharFormat*)self, capitalization);
}

int32_t q_textimageformat_font_capitalization(void* self) {
    return QTextCharFormat_FontCapitalization((QTextCharFormat*)self);
}

void q_textimageformat_set_font_letter_spacing_type(void* self, int32_t letterSpacingType) {
    QTextCharFormat_SetFontLetterSpacingType((QTextCharFormat*)self, letterSpacingType);
}

int32_t q_textimageformat_font_letter_spacing_type(void* self) {
    return QTextCharFormat_FontLetterSpacingType((QTextCharFormat*)self);
}

void q_textimageformat_set_font_letter_spacing(void* self, double spacing) {
    QTextCharFormat_SetFontLetterSpacing((QTextCharFormat*)self, spacing);
}

double q_textimageformat_font_letter_spacing(void* self) {
    return QTextCharFormat_FontLetterSpacing((QTextCharFormat*)self);
}

void q_textimageformat_set_font_word_spacing(void* self, double spacing) {
    QTextCharFormat_SetFontWordSpacing((QTextCharFormat*)self, spacing);
}

double q_textimageformat_font_word_spacing(void* self) {
    return QTextCharFormat_FontWordSpacing((QTextCharFormat*)self);
}

void q_textimageformat_set_font_underline(void* self, bool underline) {
    QTextCharFormat_SetFontUnderline((QTextCharFormat*)self, underline);
}

bool q_textimageformat_font_underline(void* self) {
    return QTextCharFormat_FontUnderline((QTextCharFormat*)self);
}

void q_textimageformat_set_font_overline(void* self, bool overline) {
    QTextCharFormat_SetFontOverline((QTextCharFormat*)self, overline);
}

bool q_textimageformat_font_overline(void* self) {
    return QTextCharFormat_FontOverline((QTextCharFormat*)self);
}

void q_textimageformat_set_font_strike_out(void* self, bool strikeOut) {
    QTextCharFormat_SetFontStrikeOut((QTextCharFormat*)self, strikeOut);
}

bool q_textimageformat_font_strike_out(void* self) {
    return QTextCharFormat_FontStrikeOut((QTextCharFormat*)self);
}

void q_textimageformat_set_underline_color(void* self, void* color) {
    QTextCharFormat_SetUnderlineColor((QTextCharFormat*)self, (QColor*)color);
}

QColor* q_textimageformat_underline_color(void* self) {
    return QTextCharFormat_UnderlineColor((QTextCharFormat*)self);
}

void q_textimageformat_set_font_fixed_pitch(void* self, bool fixedPitch) {
    QTextCharFormat_SetFontFixedPitch((QTextCharFormat*)self, fixedPitch);
}

bool q_textimageformat_font_fixed_pitch(void* self) {
    return QTextCharFormat_FontFixedPitch((QTextCharFormat*)self);
}

void q_textimageformat_set_font_stretch(void* self, int factor) {
    QTextCharFormat_SetFontStretch((QTextCharFormat*)self, factor);
}

int32_t q_textimageformat_font_stretch(void* self) {
    return QTextCharFormat_FontStretch((QTextCharFormat*)self);
}

void q_textimageformat_set_font_style_hint(void* self, int32_t hint) {
    QTextCharFormat_SetFontStyleHint((QTextCharFormat*)self, hint);
}

void q_textimageformat_set_font_style_strategy(void* self, int32_t strategy) {
    QTextCharFormat_SetFontStyleStrategy((QTextCharFormat*)self, strategy);
}

int32_t q_textimageformat_font_style_hint(void* self) {
    return QTextCharFormat_FontStyleHint((QTextCharFormat*)self);
}

int32_t q_textimageformat_font_style_strategy(void* self) {
    return QTextCharFormat_FontStyleStrategy((QTextCharFormat*)self);
}

void q_textimageformat_set_font_hinting_preference(void* self, int32_t hintingPreference) {
    QTextCharFormat_SetFontHintingPreference((QTextCharFormat*)self, hintingPreference);
}

int32_t q_textimageformat_font_hinting_preference(void* self) {
    return QTextCharFormat_FontHintingPreference((QTextCharFormat*)self);
}

void q_textimageformat_set_font_kerning(void* self, bool enable) {
    QTextCharFormat_SetFontKerning((QTextCharFormat*)self, enable);
}

bool q_textimageformat_font_kerning(void* self) {
    return QTextCharFormat_FontKerning((QTextCharFormat*)self);
}

void q_textimageformat_set_underline_style(void* self, int32_t style) {
    QTextCharFormat_SetUnderlineStyle((QTextCharFormat*)self, style);
}

int32_t q_textimageformat_underline_style(void* self) {
    return QTextCharFormat_UnderlineStyle((QTextCharFormat*)self);
}

void q_textimageformat_set_vertical_alignment(void* self, int32_t alignment) {
    QTextCharFormat_SetVerticalAlignment((QTextCharFormat*)self, alignment);
}

int32_t q_textimageformat_vertical_alignment(void* self) {
    return QTextCharFormat_VerticalAlignment((QTextCharFormat*)self);
}

void q_textimageformat_set_text_outline(void* self, void* pen) {
    QTextCharFormat_SetTextOutline((QTextCharFormat*)self, (QPen*)pen);
}

QPen* q_textimageformat_text_outline(void* self) {
    return QTextCharFormat_TextOutline((QTextCharFormat*)self);
}

void q_textimageformat_set_tool_tip(void* self, const char* tip) {
    QTextCharFormat_SetToolTip((QTextCharFormat*)self, qstring(tip));
}

const char* q_textimageformat_tool_tip(void* self) {
    libqt_string _str = QTextCharFormat_ToolTip((QTextCharFormat*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textimageformat_set_super_script_baseline(void* self, double baseline) {
    QTextCharFormat_SetSuperScriptBaseline((QTextCharFormat*)self, baseline);
}

double q_textimageformat_super_script_baseline(void* self) {
    return QTextCharFormat_SuperScriptBaseline((QTextCharFormat*)self);
}

void q_textimageformat_set_sub_script_baseline(void* self, double baseline) {
    QTextCharFormat_SetSubScriptBaseline((QTextCharFormat*)self, baseline);
}

double q_textimageformat_sub_script_baseline(void* self) {
    return QTextCharFormat_SubScriptBaseline((QTextCharFormat*)self);
}

void q_textimageformat_set_baseline_offset(void* self, double baseline) {
    QTextCharFormat_SetBaselineOffset((QTextCharFormat*)self, baseline);
}

double q_textimageformat_baseline_offset(void* self) {
    return QTextCharFormat_BaselineOffset((QTextCharFormat*)self);
}

void q_textimageformat_set_anchor(void* self, bool anchor) {
    QTextCharFormat_SetAnchor((QTextCharFormat*)self, anchor);
}

bool q_textimageformat_is_anchor(void* self) {
    return QTextCharFormat_IsAnchor((QTextCharFormat*)self);
}

void q_textimageformat_set_anchor_href(void* self, const char* value) {
    QTextCharFormat_SetAnchorHref((QTextCharFormat*)self, qstring(value));
}

const char* q_textimageformat_anchor_href(void* self) {
    libqt_string _str = QTextCharFormat_AnchorHref((QTextCharFormat*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textimageformat_set_anchor_names(void* self, const char* names[]) {
    size_t names_len = libqt_strv_length(names);
    libqt_string* names_qstr = (libqt_string*)malloc(names_len * sizeof(libqt_string));
    if (names_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_textimageformat_set_anchor_names");
        abort();
    }
    for (size_t i = 0; i < names_len; ++i) {
        names_qstr[i] = qstring(names[i]);
    }
    libqt_list names_list = qlist(names_qstr, names_len);
    QTextCharFormat_SetAnchorNames((QTextCharFormat*)self, names_list);
    free(names_qstr);
}

const char** q_textimageformat_anchor_names(void* self) {
    libqt_list _arr = QTextCharFormat_AnchorNames((QTextCharFormat*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_textimageformat_anchor_names");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_textimageformat_set_table_cell_row_span(void* self, int tableCellRowSpan) {
    QTextCharFormat_SetTableCellRowSpan((QTextCharFormat*)self, tableCellRowSpan);
}

int32_t q_textimageformat_table_cell_row_span(void* self) {
    return QTextCharFormat_TableCellRowSpan((QTextCharFormat*)self);
}

void q_textimageformat_set_table_cell_column_span(void* self, int tableCellColumnSpan) {
    QTextCharFormat_SetTableCellColumnSpan((QTextCharFormat*)self, tableCellColumnSpan);
}

int32_t q_textimageformat_table_cell_column_span(void* self) {
    return QTextCharFormat_TableCellColumnSpan((QTextCharFormat*)self);
}

void q_textimageformat_set_font2(void* self, void* font, int32_t behavior) {
    QTextCharFormat_SetFont2((QTextCharFormat*)self, (QFont*)font, behavior);
}

void q_textimageformat_set_font_style_hint2(void* self, int32_t hint, int32_t strategy) {
    QTextCharFormat_SetFontStyleHint2((QTextCharFormat*)self, hint, strategy);
}

void q_textimageformat_operator_assign(void* self, void* rhs) {
    QTextFormat_OperatorAssign((QTextFormat*)self, (QTextFormat*)rhs);
}

void q_textimageformat_swap(void* self, void* other) {
    QTextFormat_Swap((QTextFormat*)self, (QTextFormat*)other);
}

void q_textimageformat_merge(void* self, void* other) {
    QTextFormat_Merge((QTextFormat*)self, (QTextFormat*)other);
}

bool q_textimageformat_is_empty(void* self) {
    return QTextFormat_IsEmpty((QTextFormat*)self);
}

int32_t q_textimageformat_type(void* self) {
    return QTextFormat_Type((QTextFormat*)self);
}

int32_t q_textimageformat_object_index(void* self) {
    return QTextFormat_ObjectIndex((QTextFormat*)self);
}

void q_textimageformat_set_object_index(void* self, int object) {
    QTextFormat_SetObjectIndex((QTextFormat*)self, object);
}

QVariant* q_textimageformat_property(void* self, int propertyId) {
    return QTextFormat_Property((QTextFormat*)self, propertyId);
}

void q_textimageformat_set_property(void* self, int propertyId, void* value) {
    QTextFormat_SetProperty((QTextFormat*)self, propertyId, (QVariant*)value);
}

void q_textimageformat_clear_property(void* self, int propertyId) {
    QTextFormat_ClearProperty((QTextFormat*)self, propertyId);
}

bool q_textimageformat_has_property(void* self, int propertyId) {
    return QTextFormat_HasProperty((QTextFormat*)self, propertyId);
}

bool q_textimageformat_bool_property(void* self, int propertyId) {
    return QTextFormat_BoolProperty((QTextFormat*)self, propertyId);
}

int32_t q_textimageformat_int_property(void* self, int propertyId) {
    return QTextFormat_IntProperty((QTextFormat*)self, propertyId);
}

double q_textimageformat_double_property(void* self, int propertyId) {
    return QTextFormat_DoubleProperty((QTextFormat*)self, propertyId);
}

const char* q_textimageformat_string_property(void* self, int propertyId) {
    libqt_string _str = QTextFormat_StringProperty((QTextFormat*)self, propertyId);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* q_textimageformat_color_property(void* self, int propertyId) {
    return QTextFormat_ColorProperty((QTextFormat*)self, propertyId);
}

QPen* q_textimageformat_pen_property(void* self, int propertyId) {
    return QTextFormat_PenProperty((QTextFormat*)self, propertyId);
}

QBrush* q_textimageformat_brush_property(void* self, int propertyId) {
    return QTextFormat_BrushProperty((QTextFormat*)self, propertyId);
}

QTextLength* q_textimageformat_length_property(void* self, int propertyId) {
    return QTextFormat_LengthProperty((QTextFormat*)self, propertyId);
}

libqt_list /* of QTextLength* */ q_textimageformat_length_vector_property(void* self, int propertyId) {
    libqt_list _arr = QTextFormat_LengthVectorProperty((QTextFormat*)self, propertyId);
    return _arr;
}

void q_textimageformat_set_property2(void* self, int propertyId, libqt_list lengths) {
    QTextFormat_SetProperty2((QTextFormat*)self, propertyId, lengths);
}

libqt_map /* of int to QVariant* */ q_textimageformat_properties(void* self) {
    return QTextFormat_Properties((QTextFormat*)self);
}

int32_t q_textimageformat_property_count(void* self) {
    return QTextFormat_PropertyCount((QTextFormat*)self);
}

void q_textimageformat_set_object_type(void* self, int typeVal) {
    QTextFormat_SetObjectType((QTextFormat*)self, typeVal);
}

int32_t q_textimageformat_object_type(void* self) {
    return QTextFormat_ObjectType((QTextFormat*)self);
}

bool q_textimageformat_is_char_format(void* self) {
    return QTextFormat_IsCharFormat((QTextFormat*)self);
}

bool q_textimageformat_is_block_format(void* self) {
    return QTextFormat_IsBlockFormat((QTextFormat*)self);
}

bool q_textimageformat_is_list_format(void* self) {
    return QTextFormat_IsListFormat((QTextFormat*)self);
}

bool q_textimageformat_is_frame_format(void* self) {
    return QTextFormat_IsFrameFormat((QTextFormat*)self);
}

bool q_textimageformat_is_image_format(void* self) {
    return QTextFormat_IsImageFormat((QTextFormat*)self);
}

bool q_textimageformat_is_table_format(void* self) {
    return QTextFormat_IsTableFormat((QTextFormat*)self);
}

bool q_textimageformat_is_table_cell_format(void* self) {
    return QTextFormat_IsTableCellFormat((QTextFormat*)self);
}

QTextBlockFormat* q_textimageformat_to_block_format(void* self) {
    return QTextFormat_ToBlockFormat((QTextFormat*)self);
}

QTextCharFormat* q_textimageformat_to_char_format(void* self) {
    return QTextFormat_ToCharFormat((QTextFormat*)self);
}

QTextListFormat* q_textimageformat_to_list_format(void* self) {
    return QTextFormat_ToListFormat((QTextFormat*)self);
}

QTextTableFormat* q_textimageformat_to_table_format(void* self) {
    return QTextFormat_ToTableFormat((QTextFormat*)self);
}

QTextFrameFormat* q_textimageformat_to_frame_format(void* self) {
    return QTextFormat_ToFrameFormat((QTextFormat*)self);
}

QTextImageFormat* q_textimageformat_to_image_format(void* self) {
    return QTextFormat_ToImageFormat((QTextFormat*)self);
}

QTextTableCellFormat* q_textimageformat_to_table_cell_format(void* self) {
    return QTextFormat_ToTableCellFormat((QTextFormat*)self);
}

bool q_textimageformat_operator_equal(void* self, void* rhs) {
    return QTextFormat_OperatorEqual((QTextFormat*)self, (QTextFormat*)rhs);
}

bool q_textimageformat_operator_not_equal(void* self, void* rhs) {
    return QTextFormat_OperatorNotEqual((QTextFormat*)self, (QTextFormat*)rhs);
}

QVariant* q_textimageformat_to_q_variant(void* self) {
    return QTextFormat_ToQVariant((QTextFormat*)self);
}

void q_textimageformat_set_layout_direction(void* self, int32_t direction) {
    QTextFormat_SetLayoutDirection((QTextFormat*)self, direction);
}

int32_t q_textimageformat_layout_direction(void* self) {
    return QTextFormat_LayoutDirection((QTextFormat*)self);
}

void q_textimageformat_set_background(void* self, void* brush) {
    QTextFormat_SetBackground((QTextFormat*)self, (QBrush*)brush);
}

QBrush* q_textimageformat_background(void* self) {
    return QTextFormat_Background((QTextFormat*)self);
}

void q_textimageformat_clear_background(void* self) {
    QTextFormat_ClearBackground((QTextFormat*)self);
}

void q_textimageformat_set_foreground(void* self, void* brush) {
    QTextFormat_SetForeground((QTextFormat*)self, (QBrush*)brush);
}

QBrush* q_textimageformat_foreground(void* self) {
    return QTextFormat_Foreground((QTextFormat*)self);
}

void q_textimageformat_clear_foreground(void* self) {
    QTextFormat_ClearForeground((QTextFormat*)self);
}

void q_textimageformat_delete(void* self) {
    QTextImageFormat_Delete((QTextImageFormat*)(self));
}

QTextFrameFormat* q_textframeformat_new() {
    return QTextFrameFormat_new();
}

bool q_textframeformat_is_valid(void* self) {
    return QTextFrameFormat_IsValid((QTextFrameFormat*)self);
}

void q_textframeformat_set_position(void* self, int32_t f) {
    QTextFrameFormat_SetPosition((QTextFrameFormat*)self, f);
}

int32_t q_textframeformat_position(void* self) {
    return QTextFrameFormat_Position((QTextFrameFormat*)self);
}

void q_textframeformat_set_border(void* self, double border) {
    QTextFrameFormat_SetBorder((QTextFrameFormat*)self, border);
}

double q_textframeformat_border(void* self) {
    return QTextFrameFormat_Border((QTextFrameFormat*)self);
}

void q_textframeformat_set_border_brush(void* self, void* brush) {
    QTextFrameFormat_SetBorderBrush((QTextFrameFormat*)self, (QBrush*)brush);
}

QBrush* q_textframeformat_border_brush(void* self) {
    return QTextFrameFormat_BorderBrush((QTextFrameFormat*)self);
}

void q_textframeformat_set_border_style(void* self, int32_t style) {
    QTextFrameFormat_SetBorderStyle((QTextFrameFormat*)self, style);
}

int32_t q_textframeformat_border_style(void* self) {
    return QTextFrameFormat_BorderStyle((QTextFrameFormat*)self);
}

void q_textframeformat_set_margin(void* self, double margin) {
    QTextFrameFormat_SetMargin((QTextFrameFormat*)self, margin);
}

double q_textframeformat_margin(void* self) {
    return QTextFrameFormat_Margin((QTextFrameFormat*)self);
}

void q_textframeformat_set_top_margin(void* self, double margin) {
    QTextFrameFormat_SetTopMargin((QTextFrameFormat*)self, margin);
}

double q_textframeformat_top_margin(void* self) {
    return QTextFrameFormat_TopMargin((QTextFrameFormat*)self);
}

void q_textframeformat_set_bottom_margin(void* self, double margin) {
    QTextFrameFormat_SetBottomMargin((QTextFrameFormat*)self, margin);
}

double q_textframeformat_bottom_margin(void* self) {
    return QTextFrameFormat_BottomMargin((QTextFrameFormat*)self);
}

void q_textframeformat_set_left_margin(void* self, double margin) {
    QTextFrameFormat_SetLeftMargin((QTextFrameFormat*)self, margin);
}

double q_textframeformat_left_margin(void* self) {
    return QTextFrameFormat_LeftMargin((QTextFrameFormat*)self);
}

void q_textframeformat_set_right_margin(void* self, double margin) {
    QTextFrameFormat_SetRightMargin((QTextFrameFormat*)self, margin);
}

double q_textframeformat_right_margin(void* self) {
    return QTextFrameFormat_RightMargin((QTextFrameFormat*)self);
}

void q_textframeformat_set_padding(void* self, double padding) {
    QTextFrameFormat_SetPadding((QTextFrameFormat*)self, padding);
}

double q_textframeformat_padding(void* self) {
    return QTextFrameFormat_Padding((QTextFrameFormat*)self);
}

void q_textframeformat_set_width(void* self, double width) {
    QTextFrameFormat_SetWidth((QTextFrameFormat*)self, width);
}

void q_textframeformat_set_width2(void* self, void* length) {
    QTextFrameFormat_SetWidth2((QTextFrameFormat*)self, (QTextLength*)length);
}

QTextLength* q_textframeformat_width(void* self) {
    return QTextFrameFormat_Width((QTextFrameFormat*)self);
}

void q_textframeformat_set_height(void* self, double height) {
    QTextFrameFormat_SetHeight((QTextFrameFormat*)self, height);
}

void q_textframeformat_set_height2(void* self, void* height) {
    QTextFrameFormat_SetHeight2((QTextFrameFormat*)self, (QTextLength*)height);
}

QTextLength* q_textframeformat_height(void* self) {
    return QTextFrameFormat_Height((QTextFrameFormat*)self);
}

void q_textframeformat_set_page_break_policy(void* self, int64_t flags) {
    QTextFrameFormat_SetPageBreakPolicy((QTextFrameFormat*)self, flags);
}

int64_t q_textframeformat_page_break_policy(void* self) {
    return QTextFrameFormat_PageBreakPolicy((QTextFrameFormat*)self);
}

void q_textframeformat_operator_assign(void* self, void* rhs) {
    QTextFormat_OperatorAssign((QTextFormat*)self, (QTextFormat*)rhs);
}

void q_textframeformat_swap(void* self, void* other) {
    QTextFormat_Swap((QTextFormat*)self, (QTextFormat*)other);
}

void q_textframeformat_merge(void* self, void* other) {
    QTextFormat_Merge((QTextFormat*)self, (QTextFormat*)other);
}

bool q_textframeformat_is_empty(void* self) {
    return QTextFormat_IsEmpty((QTextFormat*)self);
}

int32_t q_textframeformat_type(void* self) {
    return QTextFormat_Type((QTextFormat*)self);
}

int32_t q_textframeformat_object_index(void* self) {
    return QTextFormat_ObjectIndex((QTextFormat*)self);
}

void q_textframeformat_set_object_index(void* self, int object) {
    QTextFormat_SetObjectIndex((QTextFormat*)self, object);
}

QVariant* q_textframeformat_property(void* self, int propertyId) {
    return QTextFormat_Property((QTextFormat*)self, propertyId);
}

void q_textframeformat_set_property(void* self, int propertyId, void* value) {
    QTextFormat_SetProperty((QTextFormat*)self, propertyId, (QVariant*)value);
}

void q_textframeformat_clear_property(void* self, int propertyId) {
    QTextFormat_ClearProperty((QTextFormat*)self, propertyId);
}

bool q_textframeformat_has_property(void* self, int propertyId) {
    return QTextFormat_HasProperty((QTextFormat*)self, propertyId);
}

bool q_textframeformat_bool_property(void* self, int propertyId) {
    return QTextFormat_BoolProperty((QTextFormat*)self, propertyId);
}

int32_t q_textframeformat_int_property(void* self, int propertyId) {
    return QTextFormat_IntProperty((QTextFormat*)self, propertyId);
}

double q_textframeformat_double_property(void* self, int propertyId) {
    return QTextFormat_DoubleProperty((QTextFormat*)self, propertyId);
}

const char* q_textframeformat_string_property(void* self, int propertyId) {
    libqt_string _str = QTextFormat_StringProperty((QTextFormat*)self, propertyId);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* q_textframeformat_color_property(void* self, int propertyId) {
    return QTextFormat_ColorProperty((QTextFormat*)self, propertyId);
}

QPen* q_textframeformat_pen_property(void* self, int propertyId) {
    return QTextFormat_PenProperty((QTextFormat*)self, propertyId);
}

QBrush* q_textframeformat_brush_property(void* self, int propertyId) {
    return QTextFormat_BrushProperty((QTextFormat*)self, propertyId);
}

QTextLength* q_textframeformat_length_property(void* self, int propertyId) {
    return QTextFormat_LengthProperty((QTextFormat*)self, propertyId);
}

libqt_list /* of QTextLength* */ q_textframeformat_length_vector_property(void* self, int propertyId) {
    libqt_list _arr = QTextFormat_LengthVectorProperty((QTextFormat*)self, propertyId);
    return _arr;
}

void q_textframeformat_set_property2(void* self, int propertyId, libqt_list lengths) {
    QTextFormat_SetProperty2((QTextFormat*)self, propertyId, lengths);
}

libqt_map /* of int to QVariant* */ q_textframeformat_properties(void* self) {
    return QTextFormat_Properties((QTextFormat*)self);
}

int32_t q_textframeformat_property_count(void* self) {
    return QTextFormat_PropertyCount((QTextFormat*)self);
}

void q_textframeformat_set_object_type(void* self, int typeVal) {
    QTextFormat_SetObjectType((QTextFormat*)self, typeVal);
}

int32_t q_textframeformat_object_type(void* self) {
    return QTextFormat_ObjectType((QTextFormat*)self);
}

bool q_textframeformat_is_char_format(void* self) {
    return QTextFormat_IsCharFormat((QTextFormat*)self);
}

bool q_textframeformat_is_block_format(void* self) {
    return QTextFormat_IsBlockFormat((QTextFormat*)self);
}

bool q_textframeformat_is_list_format(void* self) {
    return QTextFormat_IsListFormat((QTextFormat*)self);
}

bool q_textframeformat_is_frame_format(void* self) {
    return QTextFormat_IsFrameFormat((QTextFormat*)self);
}

bool q_textframeformat_is_image_format(void* self) {
    return QTextFormat_IsImageFormat((QTextFormat*)self);
}

bool q_textframeformat_is_table_format(void* self) {
    return QTextFormat_IsTableFormat((QTextFormat*)self);
}

bool q_textframeformat_is_table_cell_format(void* self) {
    return QTextFormat_IsTableCellFormat((QTextFormat*)self);
}

QTextBlockFormat* q_textframeformat_to_block_format(void* self) {
    return QTextFormat_ToBlockFormat((QTextFormat*)self);
}

QTextCharFormat* q_textframeformat_to_char_format(void* self) {
    return QTextFormat_ToCharFormat((QTextFormat*)self);
}

QTextListFormat* q_textframeformat_to_list_format(void* self) {
    return QTextFormat_ToListFormat((QTextFormat*)self);
}

QTextTableFormat* q_textframeformat_to_table_format(void* self) {
    return QTextFormat_ToTableFormat((QTextFormat*)self);
}

QTextFrameFormat* q_textframeformat_to_frame_format(void* self) {
    return QTextFormat_ToFrameFormat((QTextFormat*)self);
}

QTextImageFormat* q_textframeformat_to_image_format(void* self) {
    return QTextFormat_ToImageFormat((QTextFormat*)self);
}

QTextTableCellFormat* q_textframeformat_to_table_cell_format(void* self) {
    return QTextFormat_ToTableCellFormat((QTextFormat*)self);
}

bool q_textframeformat_operator_equal(void* self, void* rhs) {
    return QTextFormat_OperatorEqual((QTextFormat*)self, (QTextFormat*)rhs);
}

bool q_textframeformat_operator_not_equal(void* self, void* rhs) {
    return QTextFormat_OperatorNotEqual((QTextFormat*)self, (QTextFormat*)rhs);
}

QVariant* q_textframeformat_to_q_variant(void* self) {
    return QTextFormat_ToQVariant((QTextFormat*)self);
}

void q_textframeformat_set_layout_direction(void* self, int32_t direction) {
    QTextFormat_SetLayoutDirection((QTextFormat*)self, direction);
}

int32_t q_textframeformat_layout_direction(void* self) {
    return QTextFormat_LayoutDirection((QTextFormat*)self);
}

void q_textframeformat_set_background(void* self, void* brush) {
    QTextFormat_SetBackground((QTextFormat*)self, (QBrush*)brush);
}

QBrush* q_textframeformat_background(void* self) {
    return QTextFormat_Background((QTextFormat*)self);
}

void q_textframeformat_clear_background(void* self) {
    QTextFormat_ClearBackground((QTextFormat*)self);
}

void q_textframeformat_set_foreground(void* self, void* brush) {
    QTextFormat_SetForeground((QTextFormat*)self, (QBrush*)brush);
}

QBrush* q_textframeformat_foreground(void* self) {
    return QTextFormat_Foreground((QTextFormat*)self);
}

void q_textframeformat_clear_foreground(void* self) {
    QTextFormat_ClearForeground((QTextFormat*)self);
}

void q_textframeformat_delete(void* self) {
    QTextFrameFormat_Delete((QTextFrameFormat*)(self));
}

QTextTableFormat* q_texttableformat_new() {
    return QTextTableFormat_new();
}

bool q_texttableformat_is_valid(void* self) {
    return QTextTableFormat_IsValid((QTextTableFormat*)self);
}

int32_t q_texttableformat_columns(void* self) {
    return QTextTableFormat_Columns((QTextTableFormat*)self);
}

void q_texttableformat_set_columns(void* self, int columns) {
    QTextTableFormat_SetColumns((QTextTableFormat*)self, columns);
}

void q_texttableformat_set_column_width_constraints(void* self, libqt_list constraints) {
    QTextTableFormat_SetColumnWidthConstraints((QTextTableFormat*)self, constraints);
}

libqt_list /* of QTextLength* */ q_texttableformat_column_width_constraints(void* self) {
    libqt_list _arr = QTextTableFormat_ColumnWidthConstraints((QTextTableFormat*)self);
    return _arr;
}

void q_texttableformat_clear_column_width_constraints(void* self) {
    QTextTableFormat_ClearColumnWidthConstraints((QTextTableFormat*)self);
}

double q_texttableformat_cell_spacing(void* self) {
    return QTextTableFormat_CellSpacing((QTextTableFormat*)self);
}

void q_texttableformat_set_cell_spacing(void* self, double spacing) {
    QTextTableFormat_SetCellSpacing((QTextTableFormat*)self, spacing);
}

double q_texttableformat_cell_padding(void* self) {
    return QTextTableFormat_CellPadding((QTextTableFormat*)self);
}

void q_texttableformat_set_cell_padding(void* self, double padding) {
    QTextTableFormat_SetCellPadding((QTextTableFormat*)self, padding);
}

void q_texttableformat_set_alignment(void* self, int64_t alignment) {
    QTextTableFormat_SetAlignment((QTextTableFormat*)self, alignment);
}

int64_t q_texttableformat_alignment(void* self) {
    return QTextTableFormat_Alignment((QTextTableFormat*)self);
}

void q_texttableformat_set_header_row_count(void* self, int count) {
    QTextTableFormat_SetHeaderRowCount((QTextTableFormat*)self, count);
}

int32_t q_texttableformat_header_row_count(void* self) {
    return QTextTableFormat_HeaderRowCount((QTextTableFormat*)self);
}

void q_texttableformat_set_border_collapse(void* self, bool borderCollapse) {
    QTextTableFormat_SetBorderCollapse((QTextTableFormat*)self, borderCollapse);
}

bool q_texttableformat_border_collapse(void* self) {
    return QTextTableFormat_BorderCollapse((QTextTableFormat*)self);
}

void q_texttableformat_set_position(void* self, int32_t f) {
    QTextFrameFormat_SetPosition((QTextFrameFormat*)self, f);
}

int32_t q_texttableformat_position(void* self) {
    return QTextFrameFormat_Position((QTextFrameFormat*)self);
}

void q_texttableformat_set_border(void* self, double border) {
    QTextFrameFormat_SetBorder((QTextFrameFormat*)self, border);
}

double q_texttableformat_border(void* self) {
    return QTextFrameFormat_Border((QTextFrameFormat*)self);
}

void q_texttableformat_set_border_brush(void* self, void* brush) {
    QTextFrameFormat_SetBorderBrush((QTextFrameFormat*)self, (QBrush*)brush);
}

QBrush* q_texttableformat_border_brush(void* self) {
    return QTextFrameFormat_BorderBrush((QTextFrameFormat*)self);
}

void q_texttableformat_set_border_style(void* self, int32_t style) {
    QTextFrameFormat_SetBorderStyle((QTextFrameFormat*)self, style);
}

int32_t q_texttableformat_border_style(void* self) {
    return QTextFrameFormat_BorderStyle((QTextFrameFormat*)self);
}

void q_texttableformat_set_margin(void* self, double margin) {
    QTextFrameFormat_SetMargin((QTextFrameFormat*)self, margin);
}

double q_texttableformat_margin(void* self) {
    return QTextFrameFormat_Margin((QTextFrameFormat*)self);
}

void q_texttableformat_set_top_margin(void* self, double margin) {
    QTextFrameFormat_SetTopMargin((QTextFrameFormat*)self, margin);
}

double q_texttableformat_top_margin(void* self) {
    return QTextFrameFormat_TopMargin((QTextFrameFormat*)self);
}

void q_texttableformat_set_bottom_margin(void* self, double margin) {
    QTextFrameFormat_SetBottomMargin((QTextFrameFormat*)self, margin);
}

double q_texttableformat_bottom_margin(void* self) {
    return QTextFrameFormat_BottomMargin((QTextFrameFormat*)self);
}

void q_texttableformat_set_left_margin(void* self, double margin) {
    QTextFrameFormat_SetLeftMargin((QTextFrameFormat*)self, margin);
}

double q_texttableformat_left_margin(void* self) {
    return QTextFrameFormat_LeftMargin((QTextFrameFormat*)self);
}

void q_texttableformat_set_right_margin(void* self, double margin) {
    QTextFrameFormat_SetRightMargin((QTextFrameFormat*)self, margin);
}

double q_texttableformat_right_margin(void* self) {
    return QTextFrameFormat_RightMargin((QTextFrameFormat*)self);
}

void q_texttableformat_set_padding(void* self, double padding) {
    QTextFrameFormat_SetPadding((QTextFrameFormat*)self, padding);
}

double q_texttableformat_padding(void* self) {
    return QTextFrameFormat_Padding((QTextFrameFormat*)self);
}

void q_texttableformat_set_width(void* self, double width) {
    QTextFrameFormat_SetWidth((QTextFrameFormat*)self, width);
}

void q_texttableformat_set_width2(void* self, void* length) {
    QTextFrameFormat_SetWidth2((QTextFrameFormat*)self, (QTextLength*)length);
}

QTextLength* q_texttableformat_width(void* self) {
    return QTextFrameFormat_Width((QTextFrameFormat*)self);
}

void q_texttableformat_set_height(void* self, double height) {
    QTextFrameFormat_SetHeight((QTextFrameFormat*)self, height);
}

void q_texttableformat_set_height2(void* self, void* height) {
    QTextFrameFormat_SetHeight2((QTextFrameFormat*)self, (QTextLength*)height);
}

QTextLength* q_texttableformat_height(void* self) {
    return QTextFrameFormat_Height((QTextFrameFormat*)self);
}

void q_texttableformat_set_page_break_policy(void* self, int64_t flags) {
    QTextFrameFormat_SetPageBreakPolicy((QTextFrameFormat*)self, flags);
}

int64_t q_texttableformat_page_break_policy(void* self) {
    return QTextFrameFormat_PageBreakPolicy((QTextFrameFormat*)self);
}

void q_texttableformat_operator_assign(void* self, void* rhs) {
    QTextFormat_OperatorAssign((QTextFormat*)self, (QTextFormat*)rhs);
}

void q_texttableformat_swap(void* self, void* other) {
    QTextFormat_Swap((QTextFormat*)self, (QTextFormat*)other);
}

void q_texttableformat_merge(void* self, void* other) {
    QTextFormat_Merge((QTextFormat*)self, (QTextFormat*)other);
}

bool q_texttableformat_is_empty(void* self) {
    return QTextFormat_IsEmpty((QTextFormat*)self);
}

int32_t q_texttableformat_type(void* self) {
    return QTextFormat_Type((QTextFormat*)self);
}

int32_t q_texttableformat_object_index(void* self) {
    return QTextFormat_ObjectIndex((QTextFormat*)self);
}

void q_texttableformat_set_object_index(void* self, int object) {
    QTextFormat_SetObjectIndex((QTextFormat*)self, object);
}

QVariant* q_texttableformat_property(void* self, int propertyId) {
    return QTextFormat_Property((QTextFormat*)self, propertyId);
}

void q_texttableformat_set_property(void* self, int propertyId, void* value) {
    QTextFormat_SetProperty((QTextFormat*)self, propertyId, (QVariant*)value);
}

void q_texttableformat_clear_property(void* self, int propertyId) {
    QTextFormat_ClearProperty((QTextFormat*)self, propertyId);
}

bool q_texttableformat_has_property(void* self, int propertyId) {
    return QTextFormat_HasProperty((QTextFormat*)self, propertyId);
}

bool q_texttableformat_bool_property(void* self, int propertyId) {
    return QTextFormat_BoolProperty((QTextFormat*)self, propertyId);
}

int32_t q_texttableformat_int_property(void* self, int propertyId) {
    return QTextFormat_IntProperty((QTextFormat*)self, propertyId);
}

double q_texttableformat_double_property(void* self, int propertyId) {
    return QTextFormat_DoubleProperty((QTextFormat*)self, propertyId);
}

const char* q_texttableformat_string_property(void* self, int propertyId) {
    libqt_string _str = QTextFormat_StringProperty((QTextFormat*)self, propertyId);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* q_texttableformat_color_property(void* self, int propertyId) {
    return QTextFormat_ColorProperty((QTextFormat*)self, propertyId);
}

QPen* q_texttableformat_pen_property(void* self, int propertyId) {
    return QTextFormat_PenProperty((QTextFormat*)self, propertyId);
}

QBrush* q_texttableformat_brush_property(void* self, int propertyId) {
    return QTextFormat_BrushProperty((QTextFormat*)self, propertyId);
}

QTextLength* q_texttableformat_length_property(void* self, int propertyId) {
    return QTextFormat_LengthProperty((QTextFormat*)self, propertyId);
}

libqt_list /* of QTextLength* */ q_texttableformat_length_vector_property(void* self, int propertyId) {
    libqt_list _arr = QTextFormat_LengthVectorProperty((QTextFormat*)self, propertyId);
    return _arr;
}

void q_texttableformat_set_property2(void* self, int propertyId, libqt_list lengths) {
    QTextFormat_SetProperty2((QTextFormat*)self, propertyId, lengths);
}

libqt_map /* of int to QVariant* */ q_texttableformat_properties(void* self) {
    return QTextFormat_Properties((QTextFormat*)self);
}

int32_t q_texttableformat_property_count(void* self) {
    return QTextFormat_PropertyCount((QTextFormat*)self);
}

void q_texttableformat_set_object_type(void* self, int typeVal) {
    QTextFormat_SetObjectType((QTextFormat*)self, typeVal);
}

int32_t q_texttableformat_object_type(void* self) {
    return QTextFormat_ObjectType((QTextFormat*)self);
}

bool q_texttableformat_is_char_format(void* self) {
    return QTextFormat_IsCharFormat((QTextFormat*)self);
}

bool q_texttableformat_is_block_format(void* self) {
    return QTextFormat_IsBlockFormat((QTextFormat*)self);
}

bool q_texttableformat_is_list_format(void* self) {
    return QTextFormat_IsListFormat((QTextFormat*)self);
}

bool q_texttableformat_is_frame_format(void* self) {
    return QTextFormat_IsFrameFormat((QTextFormat*)self);
}

bool q_texttableformat_is_image_format(void* self) {
    return QTextFormat_IsImageFormat((QTextFormat*)self);
}

bool q_texttableformat_is_table_format(void* self) {
    return QTextFormat_IsTableFormat((QTextFormat*)self);
}

bool q_texttableformat_is_table_cell_format(void* self) {
    return QTextFormat_IsTableCellFormat((QTextFormat*)self);
}

QTextBlockFormat* q_texttableformat_to_block_format(void* self) {
    return QTextFormat_ToBlockFormat((QTextFormat*)self);
}

QTextCharFormat* q_texttableformat_to_char_format(void* self) {
    return QTextFormat_ToCharFormat((QTextFormat*)self);
}

QTextListFormat* q_texttableformat_to_list_format(void* self) {
    return QTextFormat_ToListFormat((QTextFormat*)self);
}

QTextTableFormat* q_texttableformat_to_table_format(void* self) {
    return QTextFormat_ToTableFormat((QTextFormat*)self);
}

QTextFrameFormat* q_texttableformat_to_frame_format(void* self) {
    return QTextFormat_ToFrameFormat((QTextFormat*)self);
}

QTextImageFormat* q_texttableformat_to_image_format(void* self) {
    return QTextFormat_ToImageFormat((QTextFormat*)self);
}

QTextTableCellFormat* q_texttableformat_to_table_cell_format(void* self) {
    return QTextFormat_ToTableCellFormat((QTextFormat*)self);
}

bool q_texttableformat_operator_equal(void* self, void* rhs) {
    return QTextFormat_OperatorEqual((QTextFormat*)self, (QTextFormat*)rhs);
}

bool q_texttableformat_operator_not_equal(void* self, void* rhs) {
    return QTextFormat_OperatorNotEqual((QTextFormat*)self, (QTextFormat*)rhs);
}

QVariant* q_texttableformat_to_q_variant(void* self) {
    return QTextFormat_ToQVariant((QTextFormat*)self);
}

void q_texttableformat_set_layout_direction(void* self, int32_t direction) {
    QTextFormat_SetLayoutDirection((QTextFormat*)self, direction);
}

int32_t q_texttableformat_layout_direction(void* self) {
    return QTextFormat_LayoutDirection((QTextFormat*)self);
}

void q_texttableformat_set_background(void* self, void* brush) {
    QTextFormat_SetBackground((QTextFormat*)self, (QBrush*)brush);
}

QBrush* q_texttableformat_background(void* self) {
    return QTextFormat_Background((QTextFormat*)self);
}

void q_texttableformat_clear_background(void* self) {
    QTextFormat_ClearBackground((QTextFormat*)self);
}

void q_texttableformat_set_foreground(void* self, void* brush) {
    QTextFormat_SetForeground((QTextFormat*)self, (QBrush*)brush);
}

QBrush* q_texttableformat_foreground(void* self) {
    return QTextFormat_Foreground((QTextFormat*)self);
}

void q_texttableformat_clear_foreground(void* self) {
    QTextFormat_ClearForeground((QTextFormat*)self);
}

void q_texttableformat_delete(void* self) {
    QTextTableFormat_Delete((QTextTableFormat*)(self));
}

QTextTableCellFormat* q_texttablecellformat_new() {
    return QTextTableCellFormat_new();
}

bool q_texttablecellformat_is_valid(void* self) {
    return QTextTableCellFormat_IsValid((QTextTableCellFormat*)self);
}

void q_texttablecellformat_set_top_padding(void* self, double padding) {
    QTextTableCellFormat_SetTopPadding((QTextTableCellFormat*)self, padding);
}

double q_texttablecellformat_top_padding(void* self) {
    return QTextTableCellFormat_TopPadding((QTextTableCellFormat*)self);
}

void q_texttablecellformat_set_bottom_padding(void* self, double padding) {
    QTextTableCellFormat_SetBottomPadding((QTextTableCellFormat*)self, padding);
}

double q_texttablecellformat_bottom_padding(void* self) {
    return QTextTableCellFormat_BottomPadding((QTextTableCellFormat*)self);
}

void q_texttablecellformat_set_left_padding(void* self, double padding) {
    QTextTableCellFormat_SetLeftPadding((QTextTableCellFormat*)self, padding);
}

double q_texttablecellformat_left_padding(void* self) {
    return QTextTableCellFormat_LeftPadding((QTextTableCellFormat*)self);
}

void q_texttablecellformat_set_right_padding(void* self, double padding) {
    QTextTableCellFormat_SetRightPadding((QTextTableCellFormat*)self, padding);
}

double q_texttablecellformat_right_padding(void* self) {
    return QTextTableCellFormat_RightPadding((QTextTableCellFormat*)self);
}

void q_texttablecellformat_set_padding(void* self, double padding) {
    QTextTableCellFormat_SetPadding((QTextTableCellFormat*)self, padding);
}

void q_texttablecellformat_set_top_border(void* self, double width) {
    QTextTableCellFormat_SetTopBorder((QTextTableCellFormat*)self, width);
}

double q_texttablecellformat_top_border(void* self) {
    return QTextTableCellFormat_TopBorder((QTextTableCellFormat*)self);
}

void q_texttablecellformat_set_bottom_border(void* self, double width) {
    QTextTableCellFormat_SetBottomBorder((QTextTableCellFormat*)self, width);
}

double q_texttablecellformat_bottom_border(void* self) {
    return QTextTableCellFormat_BottomBorder((QTextTableCellFormat*)self);
}

void q_texttablecellformat_set_left_border(void* self, double width) {
    QTextTableCellFormat_SetLeftBorder((QTextTableCellFormat*)self, width);
}

double q_texttablecellformat_left_border(void* self) {
    return QTextTableCellFormat_LeftBorder((QTextTableCellFormat*)self);
}

void q_texttablecellformat_set_right_border(void* self, double width) {
    QTextTableCellFormat_SetRightBorder((QTextTableCellFormat*)self, width);
}

double q_texttablecellformat_right_border(void* self) {
    return QTextTableCellFormat_RightBorder((QTextTableCellFormat*)self);
}

void q_texttablecellformat_set_border(void* self, double width) {
    QTextTableCellFormat_SetBorder((QTextTableCellFormat*)self, width);
}

void q_texttablecellformat_set_top_border_style(void* self, int32_t style) {
    QTextTableCellFormat_SetTopBorderStyle((QTextTableCellFormat*)self, style);
}

int32_t q_texttablecellformat_top_border_style(void* self) {
    return QTextTableCellFormat_TopBorderStyle((QTextTableCellFormat*)self);
}

void q_texttablecellformat_set_bottom_border_style(void* self, int32_t style) {
    QTextTableCellFormat_SetBottomBorderStyle((QTextTableCellFormat*)self, style);
}

int32_t q_texttablecellformat_bottom_border_style(void* self) {
    return QTextTableCellFormat_BottomBorderStyle((QTextTableCellFormat*)self);
}

void q_texttablecellformat_set_left_border_style(void* self, int32_t style) {
    QTextTableCellFormat_SetLeftBorderStyle((QTextTableCellFormat*)self, style);
}

int32_t q_texttablecellformat_left_border_style(void* self) {
    return QTextTableCellFormat_LeftBorderStyle((QTextTableCellFormat*)self);
}

void q_texttablecellformat_set_right_border_style(void* self, int32_t style) {
    QTextTableCellFormat_SetRightBorderStyle((QTextTableCellFormat*)self, style);
}

int32_t q_texttablecellformat_right_border_style(void* self) {
    return QTextTableCellFormat_RightBorderStyle((QTextTableCellFormat*)self);
}

void q_texttablecellformat_set_border_style(void* self, int32_t style) {
    QTextTableCellFormat_SetBorderStyle((QTextTableCellFormat*)self, style);
}

void q_texttablecellformat_set_top_border_brush(void* self, void* brush) {
    QTextTableCellFormat_SetTopBorderBrush((QTextTableCellFormat*)self, (QBrush*)brush);
}

QBrush* q_texttablecellformat_top_border_brush(void* self) {
    return QTextTableCellFormat_TopBorderBrush((QTextTableCellFormat*)self);
}

void q_texttablecellformat_set_bottom_border_brush(void* self, void* brush) {
    QTextTableCellFormat_SetBottomBorderBrush((QTextTableCellFormat*)self, (QBrush*)brush);
}

QBrush* q_texttablecellformat_bottom_border_brush(void* self) {
    return QTextTableCellFormat_BottomBorderBrush((QTextTableCellFormat*)self);
}

void q_texttablecellformat_set_left_border_brush(void* self, void* brush) {
    QTextTableCellFormat_SetLeftBorderBrush((QTextTableCellFormat*)self, (QBrush*)brush);
}

QBrush* q_texttablecellformat_left_border_brush(void* self) {
    return QTextTableCellFormat_LeftBorderBrush((QTextTableCellFormat*)self);
}

void q_texttablecellformat_set_right_border_brush(void* self, void* brush) {
    QTextTableCellFormat_SetRightBorderBrush((QTextTableCellFormat*)self, (QBrush*)brush);
}

QBrush* q_texttablecellformat_right_border_brush(void* self) {
    return QTextTableCellFormat_RightBorderBrush((QTextTableCellFormat*)self);
}

void q_texttablecellformat_set_border_brush(void* self, void* brush) {
    QTextTableCellFormat_SetBorderBrush((QTextTableCellFormat*)self, (QBrush*)brush);
}

void q_texttablecellformat_set_font(void* self, void* font) {
    QTextCharFormat_SetFont((QTextCharFormat*)self, (QFont*)font);
}

QFont* q_texttablecellformat_font(void* self) {
    return QTextCharFormat_Font((QTextCharFormat*)self);
}

void q_texttablecellformat_set_font_family(void* self, const char* family) {
    QTextCharFormat_SetFontFamily((QTextCharFormat*)self, qstring(family));
}

const char* q_texttablecellformat_font_family(void* self) {
    libqt_string _str = QTextCharFormat_FontFamily((QTextCharFormat*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_texttablecellformat_set_font_families(void* self, const char* families[]) {
    size_t families_len = libqt_strv_length(families);
    libqt_string* families_qstr = (libqt_string*)malloc(families_len * sizeof(libqt_string));
    if (families_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_texttablecellformat_set_font_families");
        abort();
    }
    for (size_t i = 0; i < families_len; ++i) {
        families_qstr[i] = qstring(families[i]);
    }
    libqt_list families_list = qlist(families_qstr, families_len);
    QTextCharFormat_SetFontFamilies((QTextCharFormat*)self, families_list);
    free(families_qstr);
}

QVariant* q_texttablecellformat_font_families(void* self) {
    return QTextCharFormat_FontFamilies((QTextCharFormat*)self);
}

void q_texttablecellformat_set_font_style_name(void* self, const char* styleName) {
    QTextCharFormat_SetFontStyleName((QTextCharFormat*)self, qstring(styleName));
}

QVariant* q_texttablecellformat_font_style_name(void* self) {
    return QTextCharFormat_FontStyleName((QTextCharFormat*)self);
}

void q_texttablecellformat_set_font_point_size(void* self, double size) {
    QTextCharFormat_SetFontPointSize((QTextCharFormat*)self, size);
}

double q_texttablecellformat_font_point_size(void* self) {
    return QTextCharFormat_FontPointSize((QTextCharFormat*)self);
}

void q_texttablecellformat_set_font_weight(void* self, int weight) {
    QTextCharFormat_SetFontWeight((QTextCharFormat*)self, weight);
}

int32_t q_texttablecellformat_font_weight(void* self) {
    return QTextCharFormat_FontWeight((QTextCharFormat*)self);
}

void q_texttablecellformat_set_font_italic(void* self, bool italic) {
    QTextCharFormat_SetFontItalic((QTextCharFormat*)self, italic);
}

bool q_texttablecellformat_font_italic(void* self) {
    return QTextCharFormat_FontItalic((QTextCharFormat*)self);
}

void q_texttablecellformat_set_font_capitalization(void* self, int32_t capitalization) {
    QTextCharFormat_SetFontCapitalization((QTextCharFormat*)self, capitalization);
}

int32_t q_texttablecellformat_font_capitalization(void* self) {
    return QTextCharFormat_FontCapitalization((QTextCharFormat*)self);
}

void q_texttablecellformat_set_font_letter_spacing_type(void* self, int32_t letterSpacingType) {
    QTextCharFormat_SetFontLetterSpacingType((QTextCharFormat*)self, letterSpacingType);
}

int32_t q_texttablecellformat_font_letter_spacing_type(void* self) {
    return QTextCharFormat_FontLetterSpacingType((QTextCharFormat*)self);
}

void q_texttablecellformat_set_font_letter_spacing(void* self, double spacing) {
    QTextCharFormat_SetFontLetterSpacing((QTextCharFormat*)self, spacing);
}

double q_texttablecellformat_font_letter_spacing(void* self) {
    return QTextCharFormat_FontLetterSpacing((QTextCharFormat*)self);
}

void q_texttablecellformat_set_font_word_spacing(void* self, double spacing) {
    QTextCharFormat_SetFontWordSpacing((QTextCharFormat*)self, spacing);
}

double q_texttablecellformat_font_word_spacing(void* self) {
    return QTextCharFormat_FontWordSpacing((QTextCharFormat*)self);
}

void q_texttablecellformat_set_font_underline(void* self, bool underline) {
    QTextCharFormat_SetFontUnderline((QTextCharFormat*)self, underline);
}

bool q_texttablecellformat_font_underline(void* self) {
    return QTextCharFormat_FontUnderline((QTextCharFormat*)self);
}

void q_texttablecellformat_set_font_overline(void* self, bool overline) {
    QTextCharFormat_SetFontOverline((QTextCharFormat*)self, overline);
}

bool q_texttablecellformat_font_overline(void* self) {
    return QTextCharFormat_FontOverline((QTextCharFormat*)self);
}

void q_texttablecellformat_set_font_strike_out(void* self, bool strikeOut) {
    QTextCharFormat_SetFontStrikeOut((QTextCharFormat*)self, strikeOut);
}

bool q_texttablecellformat_font_strike_out(void* self) {
    return QTextCharFormat_FontStrikeOut((QTextCharFormat*)self);
}

void q_texttablecellformat_set_underline_color(void* self, void* color) {
    QTextCharFormat_SetUnderlineColor((QTextCharFormat*)self, (QColor*)color);
}

QColor* q_texttablecellformat_underline_color(void* self) {
    return QTextCharFormat_UnderlineColor((QTextCharFormat*)self);
}

void q_texttablecellformat_set_font_fixed_pitch(void* self, bool fixedPitch) {
    QTextCharFormat_SetFontFixedPitch((QTextCharFormat*)self, fixedPitch);
}

bool q_texttablecellformat_font_fixed_pitch(void* self) {
    return QTextCharFormat_FontFixedPitch((QTextCharFormat*)self);
}

void q_texttablecellformat_set_font_stretch(void* self, int factor) {
    QTextCharFormat_SetFontStretch((QTextCharFormat*)self, factor);
}

int32_t q_texttablecellformat_font_stretch(void* self) {
    return QTextCharFormat_FontStretch((QTextCharFormat*)self);
}

void q_texttablecellformat_set_font_style_hint(void* self, int32_t hint) {
    QTextCharFormat_SetFontStyleHint((QTextCharFormat*)self, hint);
}

void q_texttablecellformat_set_font_style_strategy(void* self, int32_t strategy) {
    QTextCharFormat_SetFontStyleStrategy((QTextCharFormat*)self, strategy);
}

int32_t q_texttablecellformat_font_style_hint(void* self) {
    return QTextCharFormat_FontStyleHint((QTextCharFormat*)self);
}

int32_t q_texttablecellformat_font_style_strategy(void* self) {
    return QTextCharFormat_FontStyleStrategy((QTextCharFormat*)self);
}

void q_texttablecellformat_set_font_hinting_preference(void* self, int32_t hintingPreference) {
    QTextCharFormat_SetFontHintingPreference((QTextCharFormat*)self, hintingPreference);
}

int32_t q_texttablecellformat_font_hinting_preference(void* self) {
    return QTextCharFormat_FontHintingPreference((QTextCharFormat*)self);
}

void q_texttablecellformat_set_font_kerning(void* self, bool enable) {
    QTextCharFormat_SetFontKerning((QTextCharFormat*)self, enable);
}

bool q_texttablecellformat_font_kerning(void* self) {
    return QTextCharFormat_FontKerning((QTextCharFormat*)self);
}

void q_texttablecellformat_set_underline_style(void* self, int32_t style) {
    QTextCharFormat_SetUnderlineStyle((QTextCharFormat*)self, style);
}

int32_t q_texttablecellformat_underline_style(void* self) {
    return QTextCharFormat_UnderlineStyle((QTextCharFormat*)self);
}

void q_texttablecellformat_set_vertical_alignment(void* self, int32_t alignment) {
    QTextCharFormat_SetVerticalAlignment((QTextCharFormat*)self, alignment);
}

int32_t q_texttablecellformat_vertical_alignment(void* self) {
    return QTextCharFormat_VerticalAlignment((QTextCharFormat*)self);
}

void q_texttablecellformat_set_text_outline(void* self, void* pen) {
    QTextCharFormat_SetTextOutline((QTextCharFormat*)self, (QPen*)pen);
}

QPen* q_texttablecellformat_text_outline(void* self) {
    return QTextCharFormat_TextOutline((QTextCharFormat*)self);
}

void q_texttablecellformat_set_tool_tip(void* self, const char* tip) {
    QTextCharFormat_SetToolTip((QTextCharFormat*)self, qstring(tip));
}

const char* q_texttablecellformat_tool_tip(void* self) {
    libqt_string _str = QTextCharFormat_ToolTip((QTextCharFormat*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_texttablecellformat_set_super_script_baseline(void* self, double baseline) {
    QTextCharFormat_SetSuperScriptBaseline((QTextCharFormat*)self, baseline);
}

double q_texttablecellformat_super_script_baseline(void* self) {
    return QTextCharFormat_SuperScriptBaseline((QTextCharFormat*)self);
}

void q_texttablecellformat_set_sub_script_baseline(void* self, double baseline) {
    QTextCharFormat_SetSubScriptBaseline((QTextCharFormat*)self, baseline);
}

double q_texttablecellformat_sub_script_baseline(void* self) {
    return QTextCharFormat_SubScriptBaseline((QTextCharFormat*)self);
}

void q_texttablecellformat_set_baseline_offset(void* self, double baseline) {
    QTextCharFormat_SetBaselineOffset((QTextCharFormat*)self, baseline);
}

double q_texttablecellformat_baseline_offset(void* self) {
    return QTextCharFormat_BaselineOffset((QTextCharFormat*)self);
}

void q_texttablecellformat_set_anchor(void* self, bool anchor) {
    QTextCharFormat_SetAnchor((QTextCharFormat*)self, anchor);
}

bool q_texttablecellformat_is_anchor(void* self) {
    return QTextCharFormat_IsAnchor((QTextCharFormat*)self);
}

void q_texttablecellformat_set_anchor_href(void* self, const char* value) {
    QTextCharFormat_SetAnchorHref((QTextCharFormat*)self, qstring(value));
}

const char* q_texttablecellformat_anchor_href(void* self) {
    libqt_string _str = QTextCharFormat_AnchorHref((QTextCharFormat*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_texttablecellformat_set_anchor_names(void* self, const char* names[]) {
    size_t names_len = libqt_strv_length(names);
    libqt_string* names_qstr = (libqt_string*)malloc(names_len * sizeof(libqt_string));
    if (names_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_texttablecellformat_set_anchor_names");
        abort();
    }
    for (size_t i = 0; i < names_len; ++i) {
        names_qstr[i] = qstring(names[i]);
    }
    libqt_list names_list = qlist(names_qstr, names_len);
    QTextCharFormat_SetAnchorNames((QTextCharFormat*)self, names_list);
    free(names_qstr);
}

const char** q_texttablecellformat_anchor_names(void* self) {
    libqt_list _arr = QTextCharFormat_AnchorNames((QTextCharFormat*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_texttablecellformat_anchor_names");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_texttablecellformat_set_table_cell_row_span(void* self, int tableCellRowSpan) {
    QTextCharFormat_SetTableCellRowSpan((QTextCharFormat*)self, tableCellRowSpan);
}

int32_t q_texttablecellformat_table_cell_row_span(void* self) {
    return QTextCharFormat_TableCellRowSpan((QTextCharFormat*)self);
}

void q_texttablecellformat_set_table_cell_column_span(void* self, int tableCellColumnSpan) {
    QTextCharFormat_SetTableCellColumnSpan((QTextCharFormat*)self, tableCellColumnSpan);
}

int32_t q_texttablecellformat_table_cell_column_span(void* self) {
    return QTextCharFormat_TableCellColumnSpan((QTextCharFormat*)self);
}

void q_texttablecellformat_set_font2(void* self, void* font, int32_t behavior) {
    QTextCharFormat_SetFont2((QTextCharFormat*)self, (QFont*)font, behavior);
}

void q_texttablecellformat_set_font_style_hint2(void* self, int32_t hint, int32_t strategy) {
    QTextCharFormat_SetFontStyleHint2((QTextCharFormat*)self, hint, strategy);
}

void q_texttablecellformat_operator_assign(void* self, void* rhs) {
    QTextFormat_OperatorAssign((QTextFormat*)self, (QTextFormat*)rhs);
}

void q_texttablecellformat_swap(void* self, void* other) {
    QTextFormat_Swap((QTextFormat*)self, (QTextFormat*)other);
}

void q_texttablecellformat_merge(void* self, void* other) {
    QTextFormat_Merge((QTextFormat*)self, (QTextFormat*)other);
}

bool q_texttablecellformat_is_empty(void* self) {
    return QTextFormat_IsEmpty((QTextFormat*)self);
}

int32_t q_texttablecellformat_type(void* self) {
    return QTextFormat_Type((QTextFormat*)self);
}

int32_t q_texttablecellformat_object_index(void* self) {
    return QTextFormat_ObjectIndex((QTextFormat*)self);
}

void q_texttablecellformat_set_object_index(void* self, int object) {
    QTextFormat_SetObjectIndex((QTextFormat*)self, object);
}

QVariant* q_texttablecellformat_property(void* self, int propertyId) {
    return QTextFormat_Property((QTextFormat*)self, propertyId);
}

void q_texttablecellformat_set_property(void* self, int propertyId, void* value) {
    QTextFormat_SetProperty((QTextFormat*)self, propertyId, (QVariant*)value);
}

void q_texttablecellformat_clear_property(void* self, int propertyId) {
    QTextFormat_ClearProperty((QTextFormat*)self, propertyId);
}

bool q_texttablecellformat_has_property(void* self, int propertyId) {
    return QTextFormat_HasProperty((QTextFormat*)self, propertyId);
}

bool q_texttablecellformat_bool_property(void* self, int propertyId) {
    return QTextFormat_BoolProperty((QTextFormat*)self, propertyId);
}

int32_t q_texttablecellformat_int_property(void* self, int propertyId) {
    return QTextFormat_IntProperty((QTextFormat*)self, propertyId);
}

double q_texttablecellformat_double_property(void* self, int propertyId) {
    return QTextFormat_DoubleProperty((QTextFormat*)self, propertyId);
}

const char* q_texttablecellformat_string_property(void* self, int propertyId) {
    libqt_string _str = QTextFormat_StringProperty((QTextFormat*)self, propertyId);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* q_texttablecellformat_color_property(void* self, int propertyId) {
    return QTextFormat_ColorProperty((QTextFormat*)self, propertyId);
}

QPen* q_texttablecellformat_pen_property(void* self, int propertyId) {
    return QTextFormat_PenProperty((QTextFormat*)self, propertyId);
}

QBrush* q_texttablecellformat_brush_property(void* self, int propertyId) {
    return QTextFormat_BrushProperty((QTextFormat*)self, propertyId);
}

QTextLength* q_texttablecellformat_length_property(void* self, int propertyId) {
    return QTextFormat_LengthProperty((QTextFormat*)self, propertyId);
}

libqt_list /* of QTextLength* */ q_texttablecellformat_length_vector_property(void* self, int propertyId) {
    libqt_list _arr = QTextFormat_LengthVectorProperty((QTextFormat*)self, propertyId);
    return _arr;
}

void q_texttablecellformat_set_property2(void* self, int propertyId, libqt_list lengths) {
    QTextFormat_SetProperty2((QTextFormat*)self, propertyId, lengths);
}

libqt_map /* of int to QVariant* */ q_texttablecellformat_properties(void* self) {
    return QTextFormat_Properties((QTextFormat*)self);
}

int32_t q_texttablecellformat_property_count(void* self) {
    return QTextFormat_PropertyCount((QTextFormat*)self);
}

void q_texttablecellformat_set_object_type(void* self, int typeVal) {
    QTextFormat_SetObjectType((QTextFormat*)self, typeVal);
}

int32_t q_texttablecellformat_object_type(void* self) {
    return QTextFormat_ObjectType((QTextFormat*)self);
}

bool q_texttablecellformat_is_char_format(void* self) {
    return QTextFormat_IsCharFormat((QTextFormat*)self);
}

bool q_texttablecellformat_is_block_format(void* self) {
    return QTextFormat_IsBlockFormat((QTextFormat*)self);
}

bool q_texttablecellformat_is_list_format(void* self) {
    return QTextFormat_IsListFormat((QTextFormat*)self);
}

bool q_texttablecellformat_is_frame_format(void* self) {
    return QTextFormat_IsFrameFormat((QTextFormat*)self);
}

bool q_texttablecellformat_is_image_format(void* self) {
    return QTextFormat_IsImageFormat((QTextFormat*)self);
}

bool q_texttablecellformat_is_table_format(void* self) {
    return QTextFormat_IsTableFormat((QTextFormat*)self);
}

bool q_texttablecellformat_is_table_cell_format(void* self) {
    return QTextFormat_IsTableCellFormat((QTextFormat*)self);
}

QTextBlockFormat* q_texttablecellformat_to_block_format(void* self) {
    return QTextFormat_ToBlockFormat((QTextFormat*)self);
}

QTextCharFormat* q_texttablecellformat_to_char_format(void* self) {
    return QTextFormat_ToCharFormat((QTextFormat*)self);
}

QTextListFormat* q_texttablecellformat_to_list_format(void* self) {
    return QTextFormat_ToListFormat((QTextFormat*)self);
}

QTextTableFormat* q_texttablecellformat_to_table_format(void* self) {
    return QTextFormat_ToTableFormat((QTextFormat*)self);
}

QTextFrameFormat* q_texttablecellformat_to_frame_format(void* self) {
    return QTextFormat_ToFrameFormat((QTextFormat*)self);
}

QTextImageFormat* q_texttablecellformat_to_image_format(void* self) {
    return QTextFormat_ToImageFormat((QTextFormat*)self);
}

QTextTableCellFormat* q_texttablecellformat_to_table_cell_format(void* self) {
    return QTextFormat_ToTableCellFormat((QTextFormat*)self);
}

bool q_texttablecellformat_operator_equal(void* self, void* rhs) {
    return QTextFormat_OperatorEqual((QTextFormat*)self, (QTextFormat*)rhs);
}

bool q_texttablecellformat_operator_not_equal(void* self, void* rhs) {
    return QTextFormat_OperatorNotEqual((QTextFormat*)self, (QTextFormat*)rhs);
}

QVariant* q_texttablecellformat_to_q_variant(void* self) {
    return QTextFormat_ToQVariant((QTextFormat*)self);
}

void q_texttablecellformat_set_layout_direction(void* self, int32_t direction) {
    QTextFormat_SetLayoutDirection((QTextFormat*)self, direction);
}

int32_t q_texttablecellformat_layout_direction(void* self) {
    return QTextFormat_LayoutDirection((QTextFormat*)self);
}

void q_texttablecellformat_set_background(void* self, void* brush) {
    QTextFormat_SetBackground((QTextFormat*)self, (QBrush*)brush);
}

QBrush* q_texttablecellformat_background(void* self) {
    return QTextFormat_Background((QTextFormat*)self);
}

void q_texttablecellformat_clear_background(void* self) {
    QTextFormat_ClearBackground((QTextFormat*)self);
}

void q_texttablecellformat_set_foreground(void* self, void* brush) {
    QTextFormat_SetForeground((QTextFormat*)self, (QBrush*)brush);
}

QBrush* q_texttablecellformat_foreground(void* self) {
    return QTextFormat_Foreground((QTextFormat*)self);
}

void q_texttablecellformat_clear_foreground(void* self) {
    QTextFormat_ClearForeground((QTextFormat*)self);
}

void q_texttablecellformat_delete(void* self) {
    QTextTableCellFormat_Delete((QTextTableCellFormat*)(self));
}
