#pragma once
#ifndef SRCQT6C_LIBQFONTDATABASE_H
#define SRCQT6C_LIBQFONTDATABASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qfontdatabase.html

/// q_fontdatabase_new constructs a new QFontDatabase object.
///
/// ``` QFontDatabase* other ```
QFontDatabase* q_fontdatabase_new(void* other);

/// q_fontdatabase_new2 constructs a new QFontDatabase object and invalidates the source QFontDatabase object.
///
/// ``` QFontDatabase* other ```
QFontDatabase* q_fontdatabase_new2(void* other);

/// q_fontdatabase_new3 constructs a new QFontDatabase object.
///
///
QFontDatabase* q_fontdatabase_new3();

/// q_fontdatabase_copy_assign shallow copies `other` into `self`.
///
/// ``` QFontDatabase* self, QFontDatabase* other ```
void q_fontdatabase_copy_assign(void* self, void* other);

/// q_fontdatabase_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QFontDatabase* self, QFontDatabase* other ```
void q_fontdatabase_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#standardSizes)
///
///
libqt_list /* of int */ q_fontdatabase_standard_sizes();

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#writingSystems)
///
///
libqt_list /* of int64_t */ q_fontdatabase_writing_systems();

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#writingSystems)
///
/// ``` const char* family ```
libqt_list /* of int64_t */ q_fontdatabase_writing_systems2(const char* family);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#families)
///
///
const char** q_fontdatabase_families();

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#styles)
///
/// ``` const char* family ```
const char** q_fontdatabase_styles(const char* family);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#pointSizes)
///
/// ``` const char* family ```
libqt_list /* of int */ q_fontdatabase_point_sizes(const char* family);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#smoothSizes)
///
/// ``` const char* family, const char* style ```
libqt_list /* of int */ q_fontdatabase_smooth_sizes(const char* family, const char* style);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#styleString)
///
/// ``` QFont* font ```
const char* q_fontdatabase_style_string(void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#styleString)
///
/// ``` QFontInfo* fontInfo ```
const char* q_fontdatabase_style_string2(void* fontInfo);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#font)
///
/// ``` const char* family, const char* style, int pointSize ```
QFont* q_fontdatabase_font(const char* family, const char* style, int pointSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isBitmapScalable)
///
/// ``` const char* family ```
bool q_fontdatabase_is_bitmap_scalable(const char* family);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isSmoothlyScalable)
///
/// ``` const char* family ```
bool q_fontdatabase_is_smoothly_scalable(const char* family);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isScalable)
///
/// ``` const char* family ```
bool q_fontdatabase_is_scalable(const char* family);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isFixedPitch)
///
/// ``` const char* family ```
bool q_fontdatabase_is_fixed_pitch(const char* family);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#italic)
///
/// ``` const char* family, const char* style ```
bool q_fontdatabase_italic(const char* family, const char* style);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#bold)
///
/// ``` const char* family, const char* style ```
bool q_fontdatabase_bold(const char* family, const char* style);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#weight)
///
/// ``` const char* family, const char* style ```
int32_t q_fontdatabase_weight(const char* family, const char* style);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#hasFamily)
///
/// ``` const char* family ```
bool q_fontdatabase_has_family(const char* family);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isPrivateFamily)
///
/// ``` const char* family ```
bool q_fontdatabase_is_private_family(const char* family);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#writingSystemName)
///
/// ``` enum QFontDatabase__WritingSystem writingSystem ```
const char* q_fontdatabase_writing_system_name(int64_t writingSystem);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#writingSystemSample)
///
/// ``` enum QFontDatabase__WritingSystem writingSystem ```
const char* q_fontdatabase_writing_system_sample(int64_t writingSystem);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#addApplicationFont)
///
/// ``` const char* fileName ```
int32_t q_fontdatabase_add_application_font(const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#addApplicationFontFromData)
///
/// ``` const char* fontData ```
int32_t q_fontdatabase_add_application_font_from_data(const char* fontData);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#applicationFontFamilies)
///
/// ``` int id ```
const char** q_fontdatabase_application_font_families(int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#removeApplicationFont)
///
/// ``` int id ```
bool q_fontdatabase_remove_application_font(int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#removeAllApplicationFonts)
///
///
bool q_fontdatabase_remove_all_application_fonts();

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#addApplicationFallbackFontFamily)
///
/// ``` enum QChar__Script script, const char* familyName ```
void q_fontdatabase_add_application_fallback_font_family(int64_t script, const char* familyName);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#removeApplicationFallbackFontFamily)
///
/// ``` enum QChar__Script script, const char* familyName ```
bool q_fontdatabase_remove_application_fallback_font_family(int64_t script, const char* familyName);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#setApplicationFallbackFontFamilies)
///
/// ``` enum QChar__Script param1, const char* familyNames[] ```
void q_fontdatabase_set_application_fallback_font_families(int64_t param1, const char* familyNames[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#applicationFallbackFontFamilies)
///
/// ``` enum QChar__Script script ```
const char** q_fontdatabase_application_fallback_font_families(int64_t script);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#systemFont)
///
/// ``` enum QFontDatabase__SystemFont typeVal ```
QFont* q_fontdatabase_system_font(int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#families)
///
/// ``` enum QFontDatabase__WritingSystem writingSystem ```
const char** q_fontdatabase_families1(int64_t writingSystem);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#pointSizes)
///
/// ``` const char* family, const char* style ```
libqt_list /* of int */ q_fontdatabase_point_sizes2(const char* family, const char* style);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isBitmapScalable)
///
/// ``` const char* family, const char* style ```
bool q_fontdatabase_is_bitmap_scalable2(const char* family, const char* style);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isSmoothlyScalable)
///
/// ``` const char* family, const char* style ```
bool q_fontdatabase_is_smoothly_scalable2(const char* family, const char* style);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isScalable)
///
/// ``` const char* family, const char* style ```
bool q_fontdatabase_is_scalable2(const char* family, const char* style);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isFixedPitch)
///
/// ``` const char* family, const char* style ```
bool q_fontdatabase_is_fixed_pitch2(const char* family, const char* style);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#dtor.QFontDatabase)
///
/// Delete this object from C++ memory.
///
/// ``` QFontDatabase* self ```
void q_fontdatabase_delete(void* self);

/// https://doc.qt.io/qt-6/qfontdatabase.html#types

typedef enum {
    QFONTDATABASE_WRITINGSYSTEM_ANY = 0,
    QFONTDATABASE_WRITINGSYSTEM_LATIN = 1,
    QFONTDATABASE_WRITINGSYSTEM_GREEK = 2,
    QFONTDATABASE_WRITINGSYSTEM_CYRILLIC = 3,
    QFONTDATABASE_WRITINGSYSTEM_ARMENIAN = 4,
    QFONTDATABASE_WRITINGSYSTEM_HEBREW = 5,
    QFONTDATABASE_WRITINGSYSTEM_ARABIC = 6,
    QFONTDATABASE_WRITINGSYSTEM_SYRIAC = 7,
    QFONTDATABASE_WRITINGSYSTEM_THAANA = 8,
    QFONTDATABASE_WRITINGSYSTEM_DEVANAGARI = 9,
    QFONTDATABASE_WRITINGSYSTEM_BENGALI = 10,
    QFONTDATABASE_WRITINGSYSTEM_GURMUKHI = 11,
    QFONTDATABASE_WRITINGSYSTEM_GUJARATI = 12,
    QFONTDATABASE_WRITINGSYSTEM_ORIYA = 13,
    QFONTDATABASE_WRITINGSYSTEM_TAMIL = 14,
    QFONTDATABASE_WRITINGSYSTEM_TELUGU = 15,
    QFONTDATABASE_WRITINGSYSTEM_KANNADA = 16,
    QFONTDATABASE_WRITINGSYSTEM_MALAYALAM = 17,
    QFONTDATABASE_WRITINGSYSTEM_SINHALA = 18,
    QFONTDATABASE_WRITINGSYSTEM_THAI = 19,
    QFONTDATABASE_WRITINGSYSTEM_LAO = 20,
    QFONTDATABASE_WRITINGSYSTEM_TIBETAN = 21,
    QFONTDATABASE_WRITINGSYSTEM_MYANMAR = 22,
    QFONTDATABASE_WRITINGSYSTEM_GEORGIAN = 23,
    QFONTDATABASE_WRITINGSYSTEM_KHMER = 24,
    QFONTDATABASE_WRITINGSYSTEM_SIMPLIFIEDCHINESE = 25,
    QFONTDATABASE_WRITINGSYSTEM_TRADITIONALCHINESE = 26,
    QFONTDATABASE_WRITINGSYSTEM_JAPANESE = 27,
    QFONTDATABASE_WRITINGSYSTEM_KOREAN = 28,
    QFONTDATABASE_WRITINGSYSTEM_VIETNAMESE = 29,
    QFONTDATABASE_WRITINGSYSTEM_SYMBOL = 30,
    QFONTDATABASE_WRITINGSYSTEM_OTHER = 30,
    QFONTDATABASE_WRITINGSYSTEM_OGHAM = 31,
    QFONTDATABASE_WRITINGSYSTEM_RUNIC = 32,
    QFONTDATABASE_WRITINGSYSTEM_NKO = 33,
    QFONTDATABASE_WRITINGSYSTEM_WRITINGSYSTEMSCOUNT = 34
} QFontDatabase__WritingSystem;

typedef enum {
    QFONTDATABASE_SYSTEMFONT_GENERALFONT = 0,
    QFONTDATABASE_SYSTEMFONT_FIXEDFONT = 1,
    QFONTDATABASE_SYSTEMFONT_TITLEFONT = 2,
    QFONTDATABASE_SYSTEMFONT_SMALLESTREADABLEFONT = 3
} QFontDatabase__SystemFont;

#endif
