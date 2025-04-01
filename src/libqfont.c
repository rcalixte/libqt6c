#include "libqpaintdevice.hpp"
#include <string.h>
#include "libqvariant.hpp"
#include "libqfont.hpp"
#include "libqfont.h"

QFont* q_font_new() {
    return QFont_new();
}

QFont* q_font_new2(const char* family) {
    return QFont_new2(qstring(family));
}

QFont* q_font_new3(const char* families[]) {
    size_t families_len = libqt_strv_length(families);
    libqt_string* families_qstr = malloc(families_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < families_len; ++_i) {
        families_qstr[_i] = qstring(families[_i]);
    }
    libqt_list families_list = qstrlist(families_qstr, families_len);

    return QFont_new3(families_list);
}

QFont* q_font_new4(void* font, void* pd) {
    return QFont_new4((QFont*)font, (QPaintDevice*)pd);
}

QFont* q_font_new5(void* font) {
    return QFont_new5((QFont*)font);
}

QFont* q_font_new6(const char* family, int pointSize) {
    return QFont_new6(qstring(family), pointSize);
}

QFont* q_font_new7(const char* family, int pointSize, int weight) {
    return QFont_new7(qstring(family), pointSize, weight);
}

QFont* q_font_new8(const char* family, int pointSize, int weight, bool italic) {
    return QFont_new8(qstring(family), pointSize, weight, italic);
}

QFont* q_font_new9(const char* families[], int pointSize) {
    size_t families_len = libqt_strv_length(families);
    libqt_string* families_qstr = malloc(families_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < families_len; ++_i) {
        families_qstr[_i] = qstring(families[_i]);
    }
    libqt_list families_list = qstrlist(families_qstr, families_len);

    return QFont_new9(families_list, pointSize);
}

QFont* q_font_new10(const char* families[], int pointSize, int weight) {
    size_t families_len = libqt_strv_length(families);
    libqt_string* families_qstr = malloc(families_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < families_len; ++_i) {
        families_qstr[_i] = qstring(families[_i]);
    }
    libqt_list families_list = qstrlist(families_qstr, families_len);

    return QFont_new10(families_list, pointSize, weight);
}

QFont* q_font_new11(const char* families[], int pointSize, int weight, bool italic) {
    size_t families_len = libqt_strv_length(families);
    libqt_string* families_qstr = malloc(families_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < families_len; ++_i) {
        families_qstr[_i] = qstring(families[_i]);
    }
    libqt_list families_list = qstrlist(families_qstr, families_len);

    return QFont_new11(families_list, pointSize, weight, italic);
}

void q_font_swap(void* self, void* other) {
    QFont_Swap((QFont*)self, (QFont*)other);
}

const char* q_font_family(void* self) {
    libqt_string _str = QFont_Family((QFont*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_font_set_family(void* self, const char* family) {
    QFont_SetFamily((QFont*)self, qstring(family));
}

const char** q_font_families(void* self) {
    libqt_list _arr = QFont_Families((QFont*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

void q_font_set_families(void* self, const char* families[]) {
    size_t families_len = libqt_strv_length(families);
    libqt_string* families_qstr = malloc(families_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < families_len; ++_i) {
        families_qstr[_i] = qstring(families[_i]);
    }
    libqt_list families_list = qstrlist(families_qstr, families_len);
    QFont_SetFamilies((QFont*)self, families_list);
}

const char* q_font_style_name(void* self) {
    libqt_string _str = QFont_StyleName((QFont*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_font_set_style_name(void* self, const char* styleName) {
    QFont_SetStyleName((QFont*)self, qstring(styleName));
}

int32_t q_font_point_size(void* self) {
    return QFont_PointSize((QFont*)self);
}

void q_font_set_point_size(void* self, int pointSize) {
    QFont_SetPointSize((QFont*)self, pointSize);
}

double q_font_point_size_f(void* self) {
    return QFont_PointSizeF((QFont*)self);
}

void q_font_set_point_size_f(void* self, double pointSizeF) {
    QFont_SetPointSizeF((QFont*)self, pointSizeF);
}

int32_t q_font_pixel_size(void* self) {
    return QFont_PixelSize((QFont*)self);
}

void q_font_set_pixel_size(void* self, int pixelSize) {
    QFont_SetPixelSize((QFont*)self, pixelSize);
}

int64_t q_font_weight(void* self) {
    return QFont_Weight((QFont*)self);
}

void q_font_set_weight(void* self, int64_t weight) {
    QFont_SetWeight((QFont*)self, weight);
}

bool q_font_bold(void* self) {
    return QFont_Bold((QFont*)self);
}

void q_font_set_bold(void* self, bool bold) {
    QFont_SetBold((QFont*)self, bold);
}

void q_font_set_style(void* self, int64_t style) {
    QFont_SetStyle((QFont*)self, style);
}

int64_t q_font_style(void* self) {
    return QFont_Style((QFont*)self);
}

bool q_font_italic(void* self) {
    return QFont_Italic((QFont*)self);
}

void q_font_set_italic(void* self, bool b) {
    QFont_SetItalic((QFont*)self, b);
}

bool q_font_underline(void* self) {
    return QFont_Underline((QFont*)self);
}

void q_font_set_underline(void* self, bool underline) {
    QFont_SetUnderline((QFont*)self, underline);
}

bool q_font_overline(void* self) {
    return QFont_Overline((QFont*)self);
}

void q_font_set_overline(void* self, bool overline) {
    QFont_SetOverline((QFont*)self, overline);
}

bool q_font_strike_out(void* self) {
    return QFont_StrikeOut((QFont*)self);
}

void q_font_set_strike_out(void* self, bool strikeOut) {
    QFont_SetStrikeOut((QFont*)self, strikeOut);
}

bool q_font_fixed_pitch(void* self) {
    return QFont_FixedPitch((QFont*)self);
}

void q_font_set_fixed_pitch(void* self, bool fixedPitch) {
    QFont_SetFixedPitch((QFont*)self, fixedPitch);
}

bool q_font_kerning(void* self) {
    return QFont_Kerning((QFont*)self);
}

void q_font_set_kerning(void* self, bool kerning) {
    QFont_SetKerning((QFont*)self, kerning);
}

int64_t q_font_style_hint(void* self) {
    return QFont_StyleHint((QFont*)self);
}

int64_t q_font_style_strategy(void* self) {
    return QFont_StyleStrategy((QFont*)self);
}

void q_font_set_style_hint(void* self, int64_t param1) {
    QFont_SetStyleHint((QFont*)self, param1);
}

void q_font_set_style_strategy(void* self, int64_t s) {
    QFont_SetStyleStrategy((QFont*)self, s);
}

int32_t q_font_stretch(void* self) {
    return QFont_Stretch((QFont*)self);
}

void q_font_set_stretch(void* self, int stretch) {
    QFont_SetStretch((QFont*)self, stretch);
}

double q_font_letter_spacing(void* self) {
    return QFont_LetterSpacing((QFont*)self);
}

int64_t q_font_letter_spacing_type(void* self) {
    return QFont_LetterSpacingType((QFont*)self);
}

void q_font_set_letter_spacing(void* self, int64_t typeVal, double spacing) {
    QFont_SetLetterSpacing((QFont*)self, typeVal, spacing);
}

double q_font_word_spacing(void* self) {
    return QFont_WordSpacing((QFont*)self);
}

void q_font_set_word_spacing(void* self, double spacing) {
    QFont_SetWordSpacing((QFont*)self, spacing);
}

void q_font_set_capitalization(void* self, int64_t capitalization) {
    QFont_SetCapitalization((QFont*)self, capitalization);
}

int64_t q_font_capitalization(void* self) {
    return QFont_Capitalization((QFont*)self);
}

void q_font_set_hinting_preference(void* self, int64_t hintingPreference) {
    QFont_SetHintingPreference((QFont*)self, hintingPreference);
}

int64_t q_font_hinting_preference(void* self) {
    return QFont_HintingPreference((QFont*)self);
}

bool q_font_exact_match(void* self) {
    return QFont_ExactMatch((QFont*)self);
}

void q_font_operator_assign(void* self, void* param1) {
    QFont_OperatorAssign((QFont*)self, (QFont*)param1);
}

bool q_font_operator_equal(void* self, void* param1) {
    return QFont_OperatorEqual((QFont*)self, (QFont*)param1);
}

bool q_font_operator_not_equal(void* self, void* param1) {
    return QFont_OperatorNotEqual((QFont*)self, (QFont*)param1);
}

bool q_font_operator_lesser(void* self, void* param1) {
    return QFont_OperatorLesser((QFont*)self, (QFont*)param1);
}

QVariant* q_font_to_q_variant(void* self) {
    return QFont_ToQVariant((QFont*)self);
}

bool q_font_is_copy_of(void* self, void* param1) {
    return QFont_IsCopyOf((QFont*)self, (QFont*)param1);
}

const char* q_font_key(void* self) {
    libqt_string _str = QFont_Key((QFont*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_font_to_string(void* self) {
    libqt_string _str = QFont_ToString((QFont*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_font_from_string(void* self, const char* param1) {
    return QFont_FromString((QFont*)self, qstring(param1));
}

const char* q_font_substitute(const char* param1) {
    libqt_string _str = QFont_Substitute(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_font_substitutes(const char* param1) {
    libqt_list _arr = QFont_Substitutes(qstring(param1));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

const char** q_font_substitutions() {
    libqt_list _arr = QFont_Substitutions();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

void q_font_insert_substitution(const char* param1, const char* param2) {
    QFont_InsertSubstitution(qstring(param1), qstring(param2));
}

void q_font_insert_substitutions(const char* param1, const char* param2[]) {
    size_t param2_len = libqt_strv_length(param2);
    libqt_string* param2_qstr = malloc(param2_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < param2_len; ++_i) {
        param2_qstr[_i] = qstring(param2[_i]);
    }
    libqt_list param2_list = qstrlist(param2_qstr, param2_len);
    QFont_InsertSubstitutions(qstring(param1), param2_list);
}

void q_font_remove_substitutions(const char* param1) {
    QFont_RemoveSubstitutions(qstring(param1));
}

void q_font_initialize() {
    QFont_Initialize();
}

void q_font_cleanup() {
    QFont_Cleanup();
}

void q_font_cache_statistics() {
    QFont_CacheStatistics();
}

const char* q_font_default_family(void* self) {
    libqt_string _str = QFont_DefaultFamily((QFont*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QFont* q_font_resolve(void* self, void* param1) {
    return QFont_Resolve((QFont*)self, (QFont*)param1);
}

uint32_t q_font_resolve_mask(void* self) {
    return QFont_ResolveMask((QFont*)self);
}

void q_font_set_resolve_mask(void* self, uint32_t mask) {
    QFont_SetResolveMask((QFont*)self, mask);
}

void q_font_set_legacy_weight(void* self, int legacyWeight) {
    QFont_SetLegacyWeight((QFont*)self, legacyWeight);
}

int32_t q_font_legacy_weight(void* self) {
    return QFont_LegacyWeight((QFont*)self);
}

void q_font_set_style_hint2(void* self, int64_t param1, int64_t param2) {
    QFont_SetStyleHint2((QFont*)self, param1, param2);
}

void q_font_delete(void* self) {
    QFont_Delete((QFont*)(self));
}
