#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBTRANSLATORUTIL_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBTRANSLATORUTIL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)

/// k_texttranslator__translatorutil_new constructs a new TextTranslator::TranslatorUtil object.
///
/// @param other TextTranslator__TranslatorUtil*
///
TextTranslator__TranslatorUtil* k_texttranslator__translatorutil_new(void* other);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)

/// k_texttranslator__translatorutil_new2 constructs a new TextTranslator::TranslatorUtil object and invalidates the source TextTranslator::TranslatorUtil object.
///
/// @param other TextTranslator__TranslatorUtil*
///
TextTranslator__TranslatorUtil* k_texttranslator__translatorutil_new2(void* other);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)

/// k_texttranslator__translatorutil_new3 constructs a new TextTranslator::TranslatorUtil object.
///
TextTranslator__TranslatorUtil* k_texttranslator__translatorutil_new3();

/// k_texttranslator__translatorutil_copy_assign shallow copies `other` into `self`.
///
/// @param self TextTranslator__TranslatorUtil*
/// @param other TextTranslator__TranslatorUtil*
///
void k_texttranslator__translatorutil_copy_assign(void* self, void* other);

/// k_texttranslator__translatorutil_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self TextTranslator__TranslatorUtil*
/// @param other TextTranslator__TranslatorUtil*
///
void k_texttranslator__translatorutil_move_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
///
/// @param self TextTranslator__TranslatorUtil*
/// @param combo QComboBox*
/// @param languageCode const char*
/// @param translatedStr const char*
///
void k_texttranslator__translatorutil_add_item_to_from_combo_box(void* self, void* combo, const char* languageCode, const char* translatedStr);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of enum TextTranslator__TranslatorUtil__Language to const char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @return libqt_map of enum TextTranslator__TranslatorUtil__Language to const char*
///
libqt_map k_texttranslator__translatorutil_translated_languages();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_texttranslator__translatorutil_load_engine();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
///
/// @param engineName const char*
///
void k_texttranslator__translatorutil_save_engine_settings(const char* engineName);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_texttranslator__translatorutil_group_translate_name();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_texttranslator__translatorutil_engine_translate_name();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_texttranslator__translatorutil_default_engine_name();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param lang enum TextTranslator__TranslatorUtil__Language
///
const char* k_texttranslator__translatorutil_translated_language(int32_t lang);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param lang enum TextTranslator__TranslatorUtil__Language
///
const char* k_texttranslator__translatorutil_language_code(int32_t lang);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param langCode const char*
///
const char* k_texttranslator__translatorutil_search_i18n_from_language(const char* langCode);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
///
/// @param str const char*
///
/// @return enum TextTranslator__TranslatorUtil__Language
///
int32_t k_texttranslator__translatorutil_string_to_language(const char* str);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorUtil.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextTranslator__TranslatorUtil*
///
void k_texttranslator__translatorutil_delete(void* self);

/// k_texttranslator__translatorutil__translatorsettings_new constructs a new TextTranslator::TranslatorUtil::TranslatorSettings object.
///
/// @param param1 TextTranslator__TranslatorUtil__TranslatorSettings*
///
TextTranslator__TranslatorUtil__TranslatorSettings* k_texttranslator__translatorutil__translatorsettings_new(void* param1);

///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorUtil__TranslatorSettings*
///
const char* k_texttranslator__translatorutil__translatorsettings_engine(void* self);

///
/// @param self TextTranslator__TranslatorUtil__TranslatorSettings*
/// @param engine const char*
///
void k_texttranslator__translatorutil__translatorsettings_set_engine(void* self, const char* engine);

///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorUtil__TranslatorSettings*
///
const char* k_texttranslator__translatorutil__translatorsettings_from(void* self);

///
/// @param self TextTranslator__TranslatorUtil__TranslatorSettings*
/// @param from const char*
///
void k_texttranslator__translatorutil__translatorsettings_set_from(void* self, const char* from);

///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorUtil__TranslatorSettings*
///
const char* k_texttranslator__translatorutil__translatorsettings_to(void* self);

///
/// @param self TextTranslator__TranslatorUtil__TranslatorSettings*
/// @param to const char*
///
void k_texttranslator__translatorutil__translatorsettings_set_to(void* self, const char* to);

///
/// @param self TextTranslator__TranslatorUtil__TranslatorSettings*
/// @param param1 TextTranslator__TranslatorUtil__TranslatorSettings*
///
void k_texttranslator__translatorutil__translatorsettings_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self TextTranslator__TranslatorUtil__TranslatorSettings*
///
void k_texttranslator__translatorutil__translatorsettings_delete(void* self);

typedef enum {
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_AUTOMATIC = 0,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_EN = 1,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_BS = 2,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_HMONG = 3,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_ZH = 4,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_ZT = 5,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_NL = 6,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_FR = 7,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_DE = 8,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_EL = 9,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_IT = 10,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_JA = 11,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_KO = 12,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_PT = 13,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_RU = 14,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_ES = 15,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_AF = 16,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_SQ = 17,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_AR = 18,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_HY = 19,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_AZ = 20,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_EU = 21,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_BE = 22,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_BG = 23,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_CA = 24,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_HR = 25,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_CS = 26,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_DA = 27,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_ET = 28,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_TL = 29,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_FI = 30,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_GL = 31,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_KA = 32,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_HT = 33,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_IW = 34,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_HI = 35,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_HU = 36,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_IS = 37,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_ID = 38,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_GA = 39,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_LV = 40,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_LT = 41,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_MK = 42,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_MS = 43,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_MT = 44,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_NO = 45,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_FA = 46,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_PL = 47,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_RO = 48,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_SR = 49,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_SK = 50,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_SL = 51,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_SW = 52,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_SV = 53,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_TH = 54,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_TR = 55,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_UK = 56,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_UR = 57,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_VI = 58,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_CY = 59,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_YI = 60,
    TEXTTRANSLATOR_TRANSLATORUTIL_LANGUAGE_LASTLANGUAGE = 60
} TextTranslator__TranslatorUtil__Language;

#endif
