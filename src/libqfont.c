#include "libqpaintdevice.hpp"
#include <string.h>
#include "libqvariant.hpp"
#include "libqfont.hpp"
#include "libqfont.h"

/// https://doc.qt.io/qt-6/qfont.html

/// q_font_new constructs a new QFont object.
///
///
QFont* q_font_new() {
    return QFont_new();
}

/// q_font_new2 constructs a new QFont object.
///
/// ``` const char* family ```
QFont* q_font_new2(const char* family) {
    return QFont_new2(qstring(family));
}

/// q_font_new3 constructs a new QFont object.
///
/// ``` const char* families[] ```
QFont* q_font_new3(const char* families[]) {
    size_t families_len = libqt_strv_length(families);
    libqt_string* families_qstr = malloc(families_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < families_len; ++_i) {
        families_qstr[_i] = qstring(families[_i]);
    }
    libqt_list families_list = qstrlist(families_qstr, families_len);

    return QFont_new3(families_list);
}

/// q_font_new4 constructs a new QFont object.
///
/// ``` QFont* font, QPaintDevice* pd ```
QFont* q_font_new4(void* font, void* pd) {
    return QFont_new4((QFont*)font, (QPaintDevice*)pd);
}

/// q_font_new5 constructs a new QFont object.
///
/// ``` QFont* font ```
QFont* q_font_new5(void* font) {
    return QFont_new5((QFont*)font);
}

/// q_font_new6 constructs a new QFont object.
///
/// ``` const char* family, int pointSize ```
QFont* q_font_new6(const char* family, int pointSize) {
    return QFont_new6(qstring(family), pointSize);
}

/// q_font_new7 constructs a new QFont object.
///
/// ``` const char* family, int pointSize, int weight ```
QFont* q_font_new7(const char* family, int pointSize, int weight) {
    return QFont_new7(qstring(family), pointSize, weight);
}

/// q_font_new8 constructs a new QFont object.
///
/// ``` const char* family, int pointSize, int weight, bool italic ```
QFont* q_font_new8(const char* family, int pointSize, int weight, bool italic) {
    return QFont_new8(qstring(family), pointSize, weight, italic);
}

/// q_font_new9 constructs a new QFont object.
///
/// ``` const char* families[], int pointSize ```
QFont* q_font_new9(const char* families[], int pointSize) {
    size_t families_len = libqt_strv_length(families);
    libqt_string* families_qstr = malloc(families_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < families_len; ++_i) {
        families_qstr[_i] = qstring(families[_i]);
    }
    libqt_list families_list = qstrlist(families_qstr, families_len);

    return QFont_new9(families_list, pointSize);
}

/// q_font_new10 constructs a new QFont object.
///
/// ``` const char* families[], int pointSize, int weight ```
QFont* q_font_new10(const char* families[], int pointSize, int weight) {
    size_t families_len = libqt_strv_length(families);
    libqt_string* families_qstr = malloc(families_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < families_len; ++_i) {
        families_qstr[_i] = qstring(families[_i]);
    }
    libqt_list families_list = qstrlist(families_qstr, families_len);

    return QFont_new10(families_list, pointSize, weight);
}

/// q_font_new11 constructs a new QFont object.
///
/// ``` const char* families[], int pointSize, int weight, bool italic ```
QFont* q_font_new11(const char* families[], int pointSize, int weight, bool italic) {
    size_t families_len = libqt_strv_length(families);
    libqt_string* families_qstr = malloc(families_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < families_len; ++_i) {
        families_qstr[_i] = qstring(families[_i]);
    }
    libqt_list families_list = qstrlist(families_qstr, families_len);

    return QFont_new11(families_list, pointSize, weight, italic);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#swap)
///
/// ``` QFont* self, QFont* other ```
void q_font_swap(void* self, void* other) {
    QFont_Swap((QFont*)self, (QFont*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#family)
///
/// ``` QFont* self ```
const char* q_font_family(void* self) {
    libqt_string _str = QFont_Family((QFont*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setFamily)
///
/// ``` QFont* self, const char* family ```
void q_font_set_family(void* self, const char* family) {
    QFont_SetFamily((QFont*)self, qstring(family));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#families)
///
/// ``` QFont* self ```
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

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setFamilies)
///
/// ``` QFont* self, const char* families[] ```
void q_font_set_families(void* self, const char* families[]) {
    size_t families_len = libqt_strv_length(families);
    libqt_string* families_qstr = malloc(families_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < families_len; ++_i) {
        families_qstr[_i] = qstring(families[_i]);
    }
    libqt_list families_list = qstrlist(families_qstr, families_len);
    QFont_SetFamilies((QFont*)self, families_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#styleName)
///
/// ``` QFont* self ```
const char* q_font_style_name(void* self) {
    libqt_string _str = QFont_StyleName((QFont*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStyleName)
///
/// ``` QFont* self, const char* styleName ```
void q_font_set_style_name(void* self, const char* styleName) {
    QFont_SetStyleName((QFont*)self, qstring(styleName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#pointSize)
///
/// ``` QFont* self ```
int32_t q_font_point_size(void* self) {
    return QFont_PointSize((QFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setPointSize)
///
/// ``` QFont* self, int pointSize ```
void q_font_set_point_size(void* self, int pointSize) {
    QFont_SetPointSize((QFont*)self, pointSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#pointSizeF)
///
/// ``` QFont* self ```
double q_font_point_size_f(void* self) {
    return QFont_PointSizeF((QFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setPointSizeF)
///
/// ``` QFont* self, double pointSizeF ```
void q_font_set_point_size_f(void* self, double pointSizeF) {
    QFont_SetPointSizeF((QFont*)self, pointSizeF);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#pixelSize)
///
/// ``` QFont* self ```
int32_t q_font_pixel_size(void* self) {
    return QFont_PixelSize((QFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setPixelSize)
///
/// ``` QFont* self, int pixelSize ```
void q_font_set_pixel_size(void* self, int pixelSize) {
    QFont_SetPixelSize((QFont*)self, pixelSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#weight)
///
/// ``` QFont* self ```
int64_t q_font_weight(void* self) {
    return QFont_Weight((QFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setWeight)
///
/// ``` QFont* self, enum QFont__Weight weight ```
void q_font_set_weight(void* self, int64_t weight) {
    QFont_SetWeight((QFont*)self, weight);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#bold)
///
/// ``` QFont* self ```
bool q_font_bold(void* self) {
    return QFont_Bold((QFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setBold)
///
/// ``` QFont* self, bool bold ```
void q_font_set_bold(void* self, bool bold) {
    QFont_SetBold((QFont*)self, bold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStyle)
///
/// ``` QFont* self, enum QFont__Style style ```
void q_font_set_style(void* self, int64_t style) {
    QFont_SetStyle((QFont*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#style)
///
/// ``` QFont* self ```
int64_t q_font_style(void* self) {
    return QFont_Style((QFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#italic)
///
/// ``` QFont* self ```
bool q_font_italic(void* self) {
    return QFont_Italic((QFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setItalic)
///
/// ``` QFont* self, bool b ```
void q_font_set_italic(void* self, bool b) {
    QFont_SetItalic((QFont*)self, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#underline)
///
/// ``` QFont* self ```
bool q_font_underline(void* self) {
    return QFont_Underline((QFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setUnderline)
///
/// ``` QFont* self, bool underline ```
void q_font_set_underline(void* self, bool underline) {
    QFont_SetUnderline((QFont*)self, underline);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#overline)
///
/// ``` QFont* self ```
bool q_font_overline(void* self) {
    return QFont_Overline((QFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setOverline)
///
/// ``` QFont* self, bool overline ```
void q_font_set_overline(void* self, bool overline) {
    QFont_SetOverline((QFont*)self, overline);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#strikeOut)
///
/// ``` QFont* self ```
bool q_font_strike_out(void* self) {
    return QFont_StrikeOut((QFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStrikeOut)
///
/// ``` QFont* self, bool strikeOut ```
void q_font_set_strike_out(void* self, bool strikeOut) {
    QFont_SetStrikeOut((QFont*)self, strikeOut);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#fixedPitch)
///
/// ``` QFont* self ```
bool q_font_fixed_pitch(void* self) {
    return QFont_FixedPitch((QFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setFixedPitch)
///
/// ``` QFont* self, bool fixedPitch ```
void q_font_set_fixed_pitch(void* self, bool fixedPitch) {
    QFont_SetFixedPitch((QFont*)self, fixedPitch);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#kerning)
///
/// ``` QFont* self ```
bool q_font_kerning(void* self) {
    return QFont_Kerning((QFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setKerning)
///
/// ``` QFont* self, bool kerning ```
void q_font_set_kerning(void* self, bool kerning) {
    QFont_SetKerning((QFont*)self, kerning);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#styleHint)
///
/// ``` QFont* self ```
int64_t q_font_style_hint(void* self) {
    return QFont_StyleHint((QFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#styleStrategy)
///
/// ``` QFont* self ```
int64_t q_font_style_strategy(void* self) {
    return QFont_StyleStrategy((QFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStyleHint)
///
/// ``` QFont* self, enum QFont__StyleHint param1 ```
void q_font_set_style_hint(void* self, int64_t param1) {
    QFont_SetStyleHint((QFont*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStyleStrategy)
///
/// ``` QFont* self, enum QFont__StyleStrategy s ```
void q_font_set_style_strategy(void* self, int64_t s) {
    QFont_SetStyleStrategy((QFont*)self, s);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#stretch)
///
/// ``` QFont* self ```
int32_t q_font_stretch(void* self) {
    return QFont_Stretch((QFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStretch)
///
/// ``` QFont* self, int stretch ```
void q_font_set_stretch(void* self, int stretch) {
    QFont_SetStretch((QFont*)self, stretch);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#letterSpacing)
///
/// ``` QFont* self ```
double q_font_letter_spacing(void* self) {
    return QFont_LetterSpacing((QFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#letterSpacingType)
///
/// ``` QFont* self ```
int64_t q_font_letter_spacing_type(void* self) {
    return QFont_LetterSpacingType((QFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setLetterSpacing)
///
/// ``` QFont* self, enum QFont__SpacingType typeVal, double spacing ```
void q_font_set_letter_spacing(void* self, int64_t typeVal, double spacing) {
    QFont_SetLetterSpacing((QFont*)self, typeVal, spacing);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#wordSpacing)
///
/// ``` QFont* self ```
double q_font_word_spacing(void* self) {
    return QFont_WordSpacing((QFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setWordSpacing)
///
/// ``` QFont* self, double spacing ```
void q_font_set_word_spacing(void* self, double spacing) {
    QFont_SetWordSpacing((QFont*)self, spacing);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setCapitalization)
///
/// ``` QFont* self, enum QFont__Capitalization capitalization ```
void q_font_set_capitalization(void* self, int64_t capitalization) {
    QFont_SetCapitalization((QFont*)self, capitalization);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#capitalization)
///
/// ``` QFont* self ```
int64_t q_font_capitalization(void* self) {
    return QFont_Capitalization((QFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setHintingPreference)
///
/// ``` QFont* self, enum QFont__HintingPreference hintingPreference ```
void q_font_set_hinting_preference(void* self, int64_t hintingPreference) {
    QFont_SetHintingPreference((QFont*)self, hintingPreference);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#hintingPreference)
///
/// ``` QFont* self ```
int64_t q_font_hinting_preference(void* self) {
    return QFont_HintingPreference((QFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#exactMatch)
///
/// ``` QFont* self ```
bool q_font_exact_match(void* self) {
    return QFont_ExactMatch((QFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#operator=)
///
/// ``` QFont* self, QFont* param1 ```
void q_font_operator_assign(void* self, void* param1) {
    QFont_OperatorAssign((QFont*)self, (QFont*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#operator==)
///
/// ``` QFont* self, QFont* param1 ```
bool q_font_operator_equal(void* self, void* param1) {
    return QFont_OperatorEqual((QFont*)self, (QFont*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#operator!=)
///
/// ``` QFont* self, QFont* param1 ```
bool q_font_operator_not_equal(void* self, void* param1) {
    return QFont_OperatorNotEqual((QFont*)self, (QFont*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#operator<)
///
/// ``` QFont* self, QFont* param1 ```
bool q_font_operator_lesser(void* self, void* param1) {
    return QFont_OperatorLesser((QFont*)self, (QFont*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#operator QVariant)
///
/// ``` QFont* self ```
QVariant* q_font_to_q_variant(void* self) {
    return QFont_ToQVariant((QFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#isCopyOf)
///
/// ``` QFont* self, QFont* param1 ```
bool q_font_is_copy_of(void* self, void* param1) {
    return QFont_IsCopyOf((QFont*)self, (QFont*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#key)
///
/// ``` QFont* self ```
const char* q_font_key(void* self) {
    libqt_string _str = QFont_Key((QFont*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#toString)
///
/// ``` QFont* self ```
const char* q_font_to_string(void* self) {
    libqt_string _str = QFont_ToString((QFont*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#fromString)
///
/// ``` QFont* self, const char* param1 ```
bool q_font_from_string(void* self, const char* param1) {
    return QFont_FromString((QFont*)self, qstring(param1));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#substitute)
///
/// ``` const char* param1 ```
const char* q_font_substitute(const char* param1) {
    libqt_string _str = QFont_Substitute(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#substitutes)
///
/// ``` const char* param1 ```
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

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#substitutions)
///
///
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

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#insertSubstitution)
///
/// ``` const char* param1, const char* param2 ```
void q_font_insert_substitution(const char* param1, const char* param2) {
    QFont_InsertSubstitution(qstring(param1), qstring(param2));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#insertSubstitutions)
///
/// ``` const char* param1, const char* param2[] ```
void q_font_insert_substitutions(const char* param1, const char* param2[]) {
    size_t param2_len = libqt_strv_length(param2);
    libqt_string* param2_qstr = malloc(param2_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < param2_len; ++_i) {
        param2_qstr[_i] = qstring(param2[_i]);
    }
    libqt_list param2_list = qstrlist(param2_qstr, param2_len);
    QFont_InsertSubstitutions(qstring(param1), param2_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#removeSubstitutions)
///
/// ``` const char* param1 ```
void q_font_remove_substitutions(const char* param1) {
    QFont_RemoveSubstitutions(qstring(param1));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#initialize)
///
///
void q_font_initialize() {
    QFont_Initialize();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#cleanup)
///
///
void q_font_cleanup() {
    QFont_Cleanup();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#cacheStatistics)
///
///
void q_font_cache_statistics() {
    QFont_CacheStatistics();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#defaultFamily)
///
/// ``` QFont* self ```
const char* q_font_default_family(void* self) {
    libqt_string _str = QFont_DefaultFamily((QFont*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#resolve)
///
/// ``` QFont* self, QFont* param1 ```
QFont* q_font_resolve(void* self, void* param1) {
    return QFont_Resolve((QFont*)self, (QFont*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#resolveMask)
///
/// ``` QFont* self ```
uint32_t q_font_resolve_mask(void* self) {
    return QFont_ResolveMask((QFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setResolveMask)
///
/// ``` QFont* self, uint32_t mask ```
void q_font_set_resolve_mask(void* self, uint32_t mask) {
    QFont_SetResolveMask((QFont*)self, mask);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setLegacyWeight)
///
/// ``` QFont* self, int legacyWeight ```
void q_font_set_legacy_weight(void* self, int legacyWeight) {
    QFont_SetLegacyWeight((QFont*)self, legacyWeight);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#legacyWeight)
///
/// ``` QFont* self ```
int32_t q_font_legacy_weight(void* self) {
    return QFont_LegacyWeight((QFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStyleHint)
///
/// ``` QFont* self, enum QFont__StyleHint param1, enum QFont__StyleStrategy param2 ```
void q_font_set_style_hint2(void* self, int64_t param1, int64_t param2) {
    QFont_SetStyleHint2((QFont*)self, param1, param2);
}

/// Delete this object from C++ memory.
///
/// ``` QFont* self ```
void q_font_delete(void* self) {
    QFont_Delete((QFont*)(self));
}