#pragma once
#ifndef SRCQT6C_LIBQRAWFONT_H
#define SRCQT6C_LIBQRAWFONT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqchar.h"
#include "libqfont.h"
#include "libqimage.h"
#include "libqpainterpath.h"
#include "libqpoint.h"
#include "libqrect.h"
#include <string.h>
#include "libqtransform.h"

QRawFont* q_rawfont_new();
QRawFont* q_rawfont_new2(const char* fileName, double pixelSize);
QRawFont* q_rawfont_new3(const char* fontData, double pixelSize);
QRawFont* q_rawfont_new4(void* other);
QRawFont* q_rawfont_new5(const char* fileName, double pixelSize, int64_t hintingPreference);
QRawFont* q_rawfont_new6(const char* fontData, double pixelSize, int64_t hintingPreference);
void q_rawfont_operator_assign(void* self, void* other);
void q_rawfont_swap(void* self, void* other);
bool q_rawfont_is_valid(void* self);
bool q_rawfont_operator_equal(void* self, void* other);
bool q_rawfont_operator_not_equal(void* self, void* other);
const char* q_rawfont_family_name(void* self);
const char* q_rawfont_style_name(void* self);
int64_t q_rawfont_style(void* self);
int32_t q_rawfont_weight(void* self);
libqt_list /* of uint32_t */ q_rawfont_glyph_indexes_for_string(void* self, const char* text);
libqt_list /* of QPointF* */ q_rawfont_advances_for_glyph_indexes(void* self, unsigned int* glyphIndexes[]);
libqt_list /* of QPointF* */ q_rawfont_advances_for_glyph_indexes2(void* self, unsigned int* glyphIndexes[], int64_t layoutFlags);
bool q_rawfont_glyph_indexes_for_chars(void* self, void* chars, int numChars, uint32_t* glyphIndexes, int* numGlyphs);
bool q_rawfont_advances_for_glyph_indexes3(void* self, uint32_t* glyphIndexes, void* advances, int numGlyphs);
bool q_rawfont_advances_for_glyph_indexes4(void* self, uint32_t* glyphIndexes, void* advances, int numGlyphs, int64_t layoutFlags);
QImage* q_rawfont_alpha_map_for_glyph(void* self, uint32_t glyphIndex);
QPainterPath* q_rawfont_path_for_glyph(void* self, uint32_t glyphIndex);
QRectF* q_rawfont_bounding_rect(void* self, uint32_t glyphIndex);
void q_rawfont_set_pixel_size(void* self, double pixelSize);
double q_rawfont_pixel_size(void* self);
int64_t q_rawfont_hinting_preference(void* self);
double q_rawfont_ascent(void* self);
double q_rawfont_cap_height(void* self);
double q_rawfont_descent(void* self);
double q_rawfont_leading(void* self);
double q_rawfont_x_height(void* self);
double q_rawfont_average_char_width(void* self);
double q_rawfont_max_char_width(void* self);
double q_rawfont_line_thickness(void* self);
double q_rawfont_underline_position(void* self);
double q_rawfont_units_per_em(void* self);
void q_rawfont_load_from_file(void* self, const char* fileName, double pixelSize, int64_t hintingPreference);
void q_rawfont_load_from_data(void* self, const char* fontData, double pixelSize, int64_t hintingPreference);
bool q_rawfont_supports_character(void* self, uint32_t ucs4);
bool q_rawfont_supports_character_with_character(void* self, void* character);
libqt_list /* of int64_t */ q_rawfont_supported_writing_systems(void* self);
char* q_rawfont_font_table(void* self, const char* tagName);
QRawFont* q_rawfont_from_font(void* font);
QImage* q_rawfont_alpha_map_for_glyph2(void* self, uint32_t glyphIndex, int64_t antialiasingType);
QImage* q_rawfont_alpha_map_for_glyph3(void* self, uint32_t glyphIndex, int64_t antialiasingType, void* transform);
QRawFont* q_rawfont_from_font2(void* font, int64_t writingSystem);
void q_rawfont_delete(void* self);

/// https://doc.qt.io/qt-6/qrawfont.html#types

typedef enum {
    QRAWFONT_ANTIALIASINGTYPE_PIXELANTIALIASING = 0,
    QRAWFONT_ANTIALIASINGTYPE_SUBPIXELANTIALIASING = 1
} QRawFont__AntialiasingType;

typedef enum {
    QRAWFONT_LAYOUTFLAG_SEPARATEADVANCES = 0,
    QRAWFONT_LAYOUTFLAG_KERNEDADVANCES = 1,
    QRAWFONT_LAYOUTFLAG_USEDESIGNMETRICS = 2
} QRawFont__LayoutFlag;

#endif
