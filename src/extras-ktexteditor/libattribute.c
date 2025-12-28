#include "../libqbrush.hpp"
#include "../libqshareddata.hpp"
#include "../libqtextformat.hpp"
#include "libattribute.hpp"
#include "libattribute.h"

KTextEditor__Attribute* k_texteditor__attribute_new() {
    return KTextEditor__Attribute_new();
}

KTextEditor__Attribute* k_texteditor__attribute_new2(const char* name, int32_t style) {
    return KTextEditor__Attribute_new2(qstring(name), style);
}

KTextEditor__Attribute* k_texteditor__attribute_new3(void* a) {
    return KTextEditor__Attribute_new3((KTextEditor__Attribute*)a);
}

const char* k_texteditor__attribute_name(void* self) {
    libqt_string _str = KTextEditor__Attribute_Name((KTextEditor__Attribute*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__attribute_set_name(void* self, const char* name) {
    KTextEditor__Attribute_SetName((KTextEditor__Attribute*)self, qstring(name));
}

int32_t k_texteditor__attribute_default_style(void* self) {
    return KTextEditor__Attribute_DefaultStyle((KTextEditor__Attribute*)self);
}

void k_texteditor__attribute_set_default_style(void* self, int32_t style) {
    KTextEditor__Attribute_SetDefaultStyle((KTextEditor__Attribute*)self, style);
}

bool k_texteditor__attribute_skip_spell_checking(void* self) {
    return KTextEditor__Attribute_SkipSpellChecking((KTextEditor__Attribute*)self);
}

void k_texteditor__attribute_set_skip_spell_checking(void* self, bool skipspellchecking) {
    KTextEditor__Attribute_SetSkipSpellChecking((KTextEditor__Attribute*)self, skipspellchecking);
}

bool k_texteditor__attribute_font_bold(void* self) {
    return KTextEditor__Attribute_FontBold((KTextEditor__Attribute*)self);
}

void k_texteditor__attribute_set_font_bold(void* self) {
    KTextEditor__Attribute_SetFontBold((KTextEditor__Attribute*)self);
}

QBrush* k_texteditor__attribute_outline(void* self) {
    return KTextEditor__Attribute_Outline((KTextEditor__Attribute*)self);
}

void k_texteditor__attribute_set_outline(void* self, void* brush) {
    KTextEditor__Attribute_SetOutline((KTextEditor__Attribute*)self, (QBrush*)brush);
}

QBrush* k_texteditor__attribute_selected_foreground(void* self) {
    return KTextEditor__Attribute_SelectedForeground((KTextEditor__Attribute*)self);
}

void k_texteditor__attribute_set_selected_foreground(void* self, void* foreground) {
    KTextEditor__Attribute_SetSelectedForeground((KTextEditor__Attribute*)self, (QBrush*)foreground);
}

QBrush* k_texteditor__attribute_selected_background(void* self) {
    return KTextEditor__Attribute_SelectedBackground((KTextEditor__Attribute*)self);
}

void k_texteditor__attribute_set_selected_background(void* self, void* brush) {
    KTextEditor__Attribute_SetSelectedBackground((KTextEditor__Attribute*)self, (QBrush*)brush);
}

bool k_texteditor__attribute_background_fill_whitespace(void* self) {
    return KTextEditor__Attribute_BackgroundFillWhitespace((KTextEditor__Attribute*)self);
}

void k_texteditor__attribute_set_background_fill_whitespace(void* self, bool fillWhitespace) {
    KTextEditor__Attribute_SetBackgroundFillWhitespace((KTextEditor__Attribute*)self, fillWhitespace);
}

void k_texteditor__attribute_clear(void* self) {
    KTextEditor__Attribute_Clear((KTextEditor__Attribute*)self);
}

bool k_texteditor__attribute_has_any_property(void* self) {
    return KTextEditor__Attribute_HasAnyProperty((KTextEditor__Attribute*)self);
}

KTextEditor__Attribute* k_texteditor__attribute_operator_plus_assign(void* self, void* a) {
    return KTextEditor__Attribute_OperatorPlusAssign((KTextEditor__Attribute*)self, (KTextEditor__Attribute*)a);
}

void k_texteditor__attribute_operator_assign(void* self, void* a) {
    KTextEditor__Attribute_OperatorAssign((KTextEditor__Attribute*)self, (KTextEditor__Attribute*)a);
}

void k_texteditor__attribute_set_font_bold1(void* self, bool bold) {
    KTextEditor__Attribute_SetFontBold1((KTextEditor__Attribute*)self, bold);
}

bool k_texteditor__attribute_is_valid(void* self) {
    return QTextCharFormat_IsValid((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_font(void* self, void* font) {
    QTextCharFormat_SetFont((QTextCharFormat*)self, (QFont*)font);
}

QFont* k_texteditor__attribute_font(void* self) {
    return QTextCharFormat_Font((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_font_family(void* self, const char* family) {
    QTextCharFormat_SetFontFamily((QTextCharFormat*)self, qstring(family));
}

const char* k_texteditor__attribute_font_family(void* self) {
    libqt_string _str = QTextCharFormat_FontFamily((QTextCharFormat*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__attribute_set_font_families(void* self, const char* families[static 1]) {
    size_t families_len = libqt_strv_length(families);
    libqt_string* families_qstr = (libqt_string*)malloc(families_len * sizeof(libqt_string));
    if (families_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_texteditor__attribute_set_font_families");
        abort();
    }
    for (size_t i = 0; i < families_len; ++i) {
        families_qstr[i] = qstring(families[i]);
    }
    libqt_list families_list = qlist(families_qstr, families_len);
    QTextCharFormat_SetFontFamilies((QTextCharFormat*)self, families_list);
    free(families_qstr);
}

QVariant* k_texteditor__attribute_font_families(void* self) {
    return QTextCharFormat_FontFamilies((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_font_style_name(void* self, const char* styleName) {
    QTextCharFormat_SetFontStyleName((QTextCharFormat*)self, qstring(styleName));
}

QVariant* k_texteditor__attribute_font_style_name(void* self) {
    return QTextCharFormat_FontStyleName((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_font_point_size(void* self, double size) {
    QTextCharFormat_SetFontPointSize((QTextCharFormat*)self, size);
}

double k_texteditor__attribute_font_point_size(void* self) {
    return QTextCharFormat_FontPointSize((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_font_weight(void* self, int weight) {
    QTextCharFormat_SetFontWeight((QTextCharFormat*)self, weight);
}

int32_t k_texteditor__attribute_font_weight(void* self) {
    return QTextCharFormat_FontWeight((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_font_italic(void* self, bool italic) {
    QTextCharFormat_SetFontItalic((QTextCharFormat*)self, italic);
}

bool k_texteditor__attribute_font_italic(void* self) {
    return QTextCharFormat_FontItalic((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_font_capitalization(void* self, int32_t capitalization) {
    QTextCharFormat_SetFontCapitalization((QTextCharFormat*)self, capitalization);
}

int32_t k_texteditor__attribute_font_capitalization(void* self) {
    return QTextCharFormat_FontCapitalization((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_font_letter_spacing_type(void* self, int32_t letterSpacingType) {
    QTextCharFormat_SetFontLetterSpacingType((QTextCharFormat*)self, letterSpacingType);
}

int32_t k_texteditor__attribute_font_letter_spacing_type(void* self) {
    return QTextCharFormat_FontLetterSpacingType((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_font_letter_spacing(void* self, double spacing) {
    QTextCharFormat_SetFontLetterSpacing((QTextCharFormat*)self, spacing);
}

double k_texteditor__attribute_font_letter_spacing(void* self) {
    return QTextCharFormat_FontLetterSpacing((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_font_word_spacing(void* self, double spacing) {
    QTextCharFormat_SetFontWordSpacing((QTextCharFormat*)self, spacing);
}

double k_texteditor__attribute_font_word_spacing(void* self) {
    return QTextCharFormat_FontWordSpacing((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_font_underline(void* self, bool underline) {
    QTextCharFormat_SetFontUnderline((QTextCharFormat*)self, underline);
}

bool k_texteditor__attribute_font_underline(void* self) {
    return QTextCharFormat_FontUnderline((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_font_overline(void* self, bool overline) {
    QTextCharFormat_SetFontOverline((QTextCharFormat*)self, overline);
}

bool k_texteditor__attribute_font_overline(void* self) {
    return QTextCharFormat_FontOverline((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_font_strike_out(void* self, bool strikeOut) {
    QTextCharFormat_SetFontStrikeOut((QTextCharFormat*)self, strikeOut);
}

bool k_texteditor__attribute_font_strike_out(void* self) {
    return QTextCharFormat_FontStrikeOut((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_underline_color(void* self, void* color) {
    QTextCharFormat_SetUnderlineColor((QTextCharFormat*)self, (QColor*)color);
}

QColor* k_texteditor__attribute_underline_color(void* self) {
    return QTextCharFormat_UnderlineColor((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_font_fixed_pitch(void* self, bool fixedPitch) {
    QTextCharFormat_SetFontFixedPitch((QTextCharFormat*)self, fixedPitch);
}

bool k_texteditor__attribute_font_fixed_pitch(void* self) {
    return QTextCharFormat_FontFixedPitch((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_font_stretch(void* self, int factor) {
    QTextCharFormat_SetFontStretch((QTextCharFormat*)self, factor);
}

int32_t k_texteditor__attribute_font_stretch(void* self) {
    return QTextCharFormat_FontStretch((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_font_style_hint(void* self, int32_t hint) {
    QTextCharFormat_SetFontStyleHint((QTextCharFormat*)self, hint);
}

void k_texteditor__attribute_set_font_style_strategy(void* self, int32_t strategy) {
    QTextCharFormat_SetFontStyleStrategy((QTextCharFormat*)self, strategy);
}

int32_t k_texteditor__attribute_font_style_hint(void* self) {
    return QTextCharFormat_FontStyleHint((QTextCharFormat*)self);
}

int32_t k_texteditor__attribute_font_style_strategy(void* self) {
    return QTextCharFormat_FontStyleStrategy((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_font_hinting_preference(void* self, int32_t hintingPreference) {
    QTextCharFormat_SetFontHintingPreference((QTextCharFormat*)self, hintingPreference);
}

int32_t k_texteditor__attribute_font_hinting_preference(void* self) {
    return QTextCharFormat_FontHintingPreference((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_font_kerning(void* self, bool enable) {
    QTextCharFormat_SetFontKerning((QTextCharFormat*)self, enable);
}

bool k_texteditor__attribute_font_kerning(void* self) {
    return QTextCharFormat_FontKerning((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_underline_style(void* self, int32_t style) {
    QTextCharFormat_SetUnderlineStyle((QTextCharFormat*)self, style);
}

int32_t k_texteditor__attribute_underline_style(void* self) {
    return QTextCharFormat_UnderlineStyle((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_vertical_alignment(void* self, int32_t alignment) {
    QTextCharFormat_SetVerticalAlignment((QTextCharFormat*)self, alignment);
}

int32_t k_texteditor__attribute_vertical_alignment(void* self) {
    return QTextCharFormat_VerticalAlignment((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_text_outline(void* self, void* pen) {
    QTextCharFormat_SetTextOutline((QTextCharFormat*)self, (QPen*)pen);
}

QPen* k_texteditor__attribute_text_outline(void* self) {
    return QTextCharFormat_TextOutline((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_tool_tip(void* self, const char* tip) {
    QTextCharFormat_SetToolTip((QTextCharFormat*)self, qstring(tip));
}

const char* k_texteditor__attribute_tool_tip(void* self) {
    libqt_string _str = QTextCharFormat_ToolTip((QTextCharFormat*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__attribute_set_super_script_baseline(void* self, double baseline) {
    QTextCharFormat_SetSuperScriptBaseline((QTextCharFormat*)self, baseline);
}

double k_texteditor__attribute_super_script_baseline(void* self) {
    return QTextCharFormat_SuperScriptBaseline((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_sub_script_baseline(void* self, double baseline) {
    QTextCharFormat_SetSubScriptBaseline((QTextCharFormat*)self, baseline);
}

double k_texteditor__attribute_sub_script_baseline(void* self) {
    return QTextCharFormat_SubScriptBaseline((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_baseline_offset(void* self, double baseline) {
    QTextCharFormat_SetBaselineOffset((QTextCharFormat*)self, baseline);
}

double k_texteditor__attribute_baseline_offset(void* self) {
    return QTextCharFormat_BaselineOffset((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_anchor(void* self, bool anchor) {
    QTextCharFormat_SetAnchor((QTextCharFormat*)self, anchor);
}

bool k_texteditor__attribute_is_anchor(void* self) {
    return QTextCharFormat_IsAnchor((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_anchor_href(void* self, const char* value) {
    QTextCharFormat_SetAnchorHref((QTextCharFormat*)self, qstring(value));
}

const char* k_texteditor__attribute_anchor_href(void* self) {
    libqt_string _str = QTextCharFormat_AnchorHref((QTextCharFormat*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__attribute_set_anchor_names(void* self, const char* names[static 1]) {
    size_t names_len = libqt_strv_length(names);
    libqt_string* names_qstr = (libqt_string*)malloc(names_len * sizeof(libqt_string));
    if (names_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_texteditor__attribute_set_anchor_names");
        abort();
    }
    for (size_t i = 0; i < names_len; ++i) {
        names_qstr[i] = qstring(names[i]);
    }
    libqt_list names_list = qlist(names_qstr, names_len);
    QTextCharFormat_SetAnchorNames((QTextCharFormat*)self, names_list);
    free(names_qstr);
}

const char** k_texteditor__attribute_anchor_names(void* self) {
    libqt_list _arr = QTextCharFormat_AnchorNames((QTextCharFormat*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_texteditor__attribute_anchor_names");
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

void k_texteditor__attribute_set_table_cell_row_span(void* self, int tableCellRowSpan) {
    QTextCharFormat_SetTableCellRowSpan((QTextCharFormat*)self, tableCellRowSpan);
}

int32_t k_texteditor__attribute_table_cell_row_span(void* self) {
    return QTextCharFormat_TableCellRowSpan((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_table_cell_column_span(void* self, int tableCellColumnSpan) {
    QTextCharFormat_SetTableCellColumnSpan((QTextCharFormat*)self, tableCellColumnSpan);
}

int32_t k_texteditor__attribute_table_cell_column_span(void* self) {
    return QTextCharFormat_TableCellColumnSpan((QTextCharFormat*)self);
}

void k_texteditor__attribute_set_font2(void* self, void* font, int32_t behavior) {
    QTextCharFormat_SetFont2((QTextCharFormat*)self, (QFont*)font, behavior);
}

void k_texteditor__attribute_set_font_style_hint2(void* self, int32_t hint, int32_t strategy) {
    QTextCharFormat_SetFontStyleHint2((QTextCharFormat*)self, hint, strategy);
}

void k_texteditor__attribute_swap(void* self, void* other) {
    QTextFormat_Swap((QTextFormat*)self, (QTextFormat*)other);
}

void k_texteditor__attribute_merge(void* self, void* other) {
    QTextFormat_Merge((QTextFormat*)self, (QTextFormat*)other);
}

bool k_texteditor__attribute_is_empty(void* self) {
    return QTextFormat_IsEmpty((QTextFormat*)self);
}

int32_t k_texteditor__attribute_type(void* self) {
    return QTextFormat_Type((QTextFormat*)self);
}

int32_t k_texteditor__attribute_object_index(void* self) {
    return QTextFormat_ObjectIndex((QTextFormat*)self);
}

void k_texteditor__attribute_set_object_index(void* self, int object) {
    QTextFormat_SetObjectIndex((QTextFormat*)self, object);
}

QVariant* k_texteditor__attribute_property(void* self, int propertyId) {
    return QTextFormat_Property((QTextFormat*)self, propertyId);
}

void k_texteditor__attribute_set_property(void* self, int propertyId, void* value) {
    QTextFormat_SetProperty((QTextFormat*)self, propertyId, (QVariant*)value);
}

void k_texteditor__attribute_clear_property(void* self, int propertyId) {
    QTextFormat_ClearProperty((QTextFormat*)self, propertyId);
}

bool k_texteditor__attribute_has_property(void* self, int propertyId) {
    return QTextFormat_HasProperty((QTextFormat*)self, propertyId);
}

bool k_texteditor__attribute_bool_property(void* self, int propertyId) {
    return QTextFormat_BoolProperty((QTextFormat*)self, propertyId);
}

int32_t k_texteditor__attribute_int_property(void* self, int propertyId) {
    return QTextFormat_IntProperty((QTextFormat*)self, propertyId);
}

double k_texteditor__attribute_double_property(void* self, int propertyId) {
    return QTextFormat_DoubleProperty((QTextFormat*)self, propertyId);
}

const char* k_texteditor__attribute_string_property(void* self, int propertyId) {
    libqt_string _str = QTextFormat_StringProperty((QTextFormat*)self, propertyId);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* k_texteditor__attribute_color_property(void* self, int propertyId) {
    return QTextFormat_ColorProperty((QTextFormat*)self, propertyId);
}

QPen* k_texteditor__attribute_pen_property(void* self, int propertyId) {
    return QTextFormat_PenProperty((QTextFormat*)self, propertyId);
}

QBrush* k_texteditor__attribute_brush_property(void* self, int propertyId) {
    return QTextFormat_BrushProperty((QTextFormat*)self, propertyId);
}

QTextLength* k_texteditor__attribute_length_property(void* self, int propertyId) {
    return QTextFormat_LengthProperty((QTextFormat*)self, propertyId);
}

libqt_list /* of QTextLength* */ k_texteditor__attribute_length_vector_property(void* self, int propertyId) {
    libqt_list _arr = QTextFormat_LengthVectorProperty((QTextFormat*)self, propertyId);
    return _arr;
}

void k_texteditor__attribute_set_property2(void* self, int propertyId, libqt_list lengths) {
    QTextFormat_SetProperty2((QTextFormat*)self, propertyId, lengths);
}

libqt_map /* of int to QVariant* */ k_texteditor__attribute_properties(void* self) {
    // Convert QMap<int,QVariant> to libqt_map
    libqt_map _out = QTextFormat_Properties((QTextFormat*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

int32_t k_texteditor__attribute_property_count(void* self) {
    return QTextFormat_PropertyCount((QTextFormat*)self);
}

void k_texteditor__attribute_set_object_type(void* self, int type) {
    QTextFormat_SetObjectType((QTextFormat*)self, type);
}

int32_t k_texteditor__attribute_object_type(void* self) {
    return QTextFormat_ObjectType((QTextFormat*)self);
}

bool k_texteditor__attribute_is_char_format(void* self) {
    return QTextFormat_IsCharFormat((QTextFormat*)self);
}

bool k_texteditor__attribute_is_block_format(void* self) {
    return QTextFormat_IsBlockFormat((QTextFormat*)self);
}

bool k_texteditor__attribute_is_list_format(void* self) {
    return QTextFormat_IsListFormat((QTextFormat*)self);
}

bool k_texteditor__attribute_is_frame_format(void* self) {
    return QTextFormat_IsFrameFormat((QTextFormat*)self);
}

bool k_texteditor__attribute_is_image_format(void* self) {
    return QTextFormat_IsImageFormat((QTextFormat*)self);
}

bool k_texteditor__attribute_is_table_format(void* self) {
    return QTextFormat_IsTableFormat((QTextFormat*)self);
}

bool k_texteditor__attribute_is_table_cell_format(void* self) {
    return QTextFormat_IsTableCellFormat((QTextFormat*)self);
}

QTextBlockFormat* k_texteditor__attribute_to_block_format(void* self) {
    return QTextFormat_ToBlockFormat((QTextFormat*)self);
}

QTextCharFormat* k_texteditor__attribute_to_char_format(void* self) {
    return QTextFormat_ToCharFormat((QTextFormat*)self);
}

QTextListFormat* k_texteditor__attribute_to_list_format(void* self) {
    return QTextFormat_ToListFormat((QTextFormat*)self);
}

QTextTableFormat* k_texteditor__attribute_to_table_format(void* self) {
    return QTextFormat_ToTableFormat((QTextFormat*)self);
}

QTextFrameFormat* k_texteditor__attribute_to_frame_format(void* self) {
    return QTextFormat_ToFrameFormat((QTextFormat*)self);
}

QTextImageFormat* k_texteditor__attribute_to_image_format(void* self) {
    return QTextFormat_ToImageFormat((QTextFormat*)self);
}

QTextTableCellFormat* k_texteditor__attribute_to_table_cell_format(void* self) {
    return QTextFormat_ToTableCellFormat((QTextFormat*)self);
}

bool k_texteditor__attribute_operator_equal(void* self, void* rhs) {
    return QTextFormat_OperatorEqual((QTextFormat*)self, (QTextFormat*)rhs);
}

bool k_texteditor__attribute_operator_not_equal(void* self, void* rhs) {
    return QTextFormat_OperatorNotEqual((QTextFormat*)self, (QTextFormat*)rhs);
}

QVariant* k_texteditor__attribute_to_q_variant(void* self) {
    return QTextFormat_ToQVariant((QTextFormat*)self);
}

void k_texteditor__attribute_set_layout_direction(void* self, int32_t direction) {
    QTextFormat_SetLayoutDirection((QTextFormat*)self, direction);
}

int32_t k_texteditor__attribute_layout_direction(void* self) {
    return QTextFormat_LayoutDirection((QTextFormat*)self);
}

void k_texteditor__attribute_set_background(void* self, void* brush) {
    QTextFormat_SetBackground((QTextFormat*)self, (QBrush*)brush);
}

QBrush* k_texteditor__attribute_background(void* self) {
    return QTextFormat_Background((QTextFormat*)self);
}

void k_texteditor__attribute_clear_background(void* self) {
    QTextFormat_ClearBackground((QTextFormat*)self);
}

void k_texteditor__attribute_set_foreground(void* self, void* brush) {
    QTextFormat_SetForeground((QTextFormat*)self, (QBrush*)brush);
}

QBrush* k_texteditor__attribute_foreground(void* self) {
    return QTextFormat_Foreground((QTextFormat*)self);
}

void k_texteditor__attribute_clear_foreground(void* self) {
    QTextFormat_ClearForeground((QTextFormat*)self);
}

void k_texteditor__attribute_delete(void* self) {
    KTextEditor__Attribute_Delete((KTextEditor__Attribute*)(self));
}

KTextEditor__AttributeBlock* k_texteditor__attributeblock_new(void* param1) {
    return KTextEditor__AttributeBlock_new((KTextEditor__AttributeBlock*)param1);
}

int32_t k_texteditor__attributeblock_start(void* self) {
    return KTextEditor__AttributeBlock_Start((KTextEditor__AttributeBlock*)self);
}

void k_texteditor__attributeblock_set_start(void* self, int start) {
    KTextEditor__AttributeBlock_SetStart((KTextEditor__AttributeBlock*)self, start);
}

int32_t k_texteditor__attributeblock_length(void* self) {
    return KTextEditor__AttributeBlock_Length((KTextEditor__AttributeBlock*)self);
}

void k_texteditor__attributeblock_set_length(void* self, int length) {
    KTextEditor__AttributeBlock_SetLength((KTextEditor__AttributeBlock*)self, length);
}

void k_texteditor__attributeblock_operator_assign(void* self, void* param1) {
    KTextEditor__AttributeBlock_OperatorAssign((KTextEditor__AttributeBlock*)self, (KTextEditor__AttributeBlock*)param1);
}

void k_texteditor__attributeblock_delete(void* self) {
    KTextEditor__AttributeBlock_Delete((KTextEditor__AttributeBlock*)(self));
}
