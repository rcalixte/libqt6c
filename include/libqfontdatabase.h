#pragma once
#ifndef SRCQT6C_LIBQFONTDATABASE_H
#define SRCQT6C_LIBQFONTDATABASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqfont.h"
#include "libqfontinfo.h"
#include <string.h>

QFontDatabase* q_fontdatabase_new(void* other);
QFontDatabase* q_fontdatabase_new2(void* other);
QFontDatabase* q_fontdatabase_new3();
void q_fontdatabase_copy_assign(void* self, void* other);
void q_fontdatabase_move_assign(void* self, void* other);
libqt_list /* of int */ q_fontdatabase_standard_sizes();
libqt_list /* of int64_t */ q_fontdatabase_writing_systems();
libqt_list /* of int64_t */ q_fontdatabase_writing_systems_with_family(const char* family);
const char** q_fontdatabase_families();
const char** q_fontdatabase_styles(const char* family);
libqt_list /* of int */ q_fontdatabase_point_sizes(const char* family);
libqt_list /* of int */ q_fontdatabase_smooth_sizes(const char* family, const char* style);
const char* q_fontdatabase_style_string(void* font);
const char* q_fontdatabase_style_string_with_font_info(void* fontInfo);
QFont* q_fontdatabase_font(const char* family, const char* style, int pointSize);
bool q_fontdatabase_is_bitmap_scalable(const char* family);
bool q_fontdatabase_is_smoothly_scalable(const char* family);
bool q_fontdatabase_is_scalable(const char* family);
bool q_fontdatabase_is_fixed_pitch(const char* family);
bool q_fontdatabase_italic(const char* family, const char* style);
bool q_fontdatabase_bold(const char* family, const char* style);
int32_t q_fontdatabase_weight(const char* family, const char* style);
bool q_fontdatabase_has_family(const char* family);
bool q_fontdatabase_is_private_family(const char* family);
const char* q_fontdatabase_writing_system_name(int64_t writingSystem);
const char* q_fontdatabase_writing_system_sample(int64_t writingSystem);
int32_t q_fontdatabase_add_application_font(const char* fileName);
int32_t q_fontdatabase_add_application_font_from_data(const char* fontData);
const char** q_fontdatabase_application_font_families(int id);
bool q_fontdatabase_remove_application_font(int id);
bool q_fontdatabase_remove_all_application_fonts();
QFont* q_fontdatabase_system_font(int64_t typeVal);
const char** q_fontdatabase_families1(int64_t writingSystem);
libqt_list /* of int */ q_fontdatabase_point_sizes2(const char* family, const char* style);
bool q_fontdatabase_is_bitmap_scalable2(const char* family, const char* style);
bool q_fontdatabase_is_smoothly_scalable2(const char* family, const char* style);
bool q_fontdatabase_is_scalable2(const char* family, const char* style);
bool q_fontdatabase_is_fixed_pitch2(const char* family, const char* style);
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
