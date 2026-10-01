#pragma once
#ifndef LIBQRAWFONT_H
#define LIBQRAWFONT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html)

/// q_rawfont_new constructs a new QRawFont object.
///
QRawFont* q_rawfont_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html)

/// q_rawfont_new2 constructs a new QRawFont object.
///
/// @param fileName const char*
/// @param pixelSize double
///
QRawFont* q_rawfont_new2(const char* fileName, double pixelSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html)

/// q_rawfont_new3 constructs a new QRawFont object.
///
/// @param fontData char*
/// @param pixelSize double
///
QRawFont* q_rawfont_new3(char* fontData, double pixelSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html)

/// q_rawfont_new4 constructs a new QRawFont object.
///
/// @param other QRawFont*
///
QRawFont* q_rawfont_new4(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html)

/// q_rawfont_new5 constructs a new QRawFont object.
///
/// @param fileName const char*
/// @param pixelSize double
/// @param hintingPreference enum QFont__HintingPreference
///
QRawFont* q_rawfont_new5(const char* fileName, double pixelSize, int32_t hintingPreference);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html)

/// q_rawfont_new6 constructs a new QRawFont object.
///
/// @param fontData char*
/// @param pixelSize double
/// @param hintingPreference enum QFont__HintingPreference
///
QRawFont* q_rawfont_new6(char* fontData, double pixelSize, int32_t hintingPreference);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#operator-eq)
///
/// @param self QRawFont*
/// @param other QRawFont*
///
void q_rawfont_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#swap)
///
/// @param self QRawFont*
/// @param other QRawFont*
///
void q_rawfont_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#isValid)
///
/// @param self const QRawFont*
///
bool q_rawfont_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#operator-eq-eq)
///
/// @param self const QRawFont*
/// @param other QRawFont*
///
bool q_rawfont_operator_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#operator-not-eq)
///
/// @param self const QRawFont*
/// @param other QRawFont*
///
bool q_rawfont_operator_not_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#familyName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QRawFont*
///
const char* q_rawfont_family_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#styleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QRawFont*
///
const char* q_rawfont_style_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#style)
///
/// @param self const QRawFont*
///
/// @return enum QFont__Style
///
int32_t q_rawfont_style(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#weight)
///
/// @param self const QRawFont*
///
int32_t q_rawfont_weight(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#glyphIndexesForString)
///
/// @param self const QRawFont*
/// @param text const char*
///
/// @return libqt_list of uint32_t
///
libqt_list q_rawfont_glyph_indexes_for_string(const void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#advancesForGlyphIndexes)
///
/// @param self const QRawFont*
/// @param glyphIndexes libqt_list of uint32_t
///
/// @return libqt_list of QPointF*
///
libqt_list q_rawfont_advances_for_glyph_indexes(const void* self, libqt_list glyphIndexes);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#advancesForGlyphIndexes)
///
/// @param self const QRawFont*
/// @param glyphIndexes libqt_list of uint32_t
/// @param layoutFlags flag of enum QRawFont__LayoutFlag
///
/// @return libqt_list of QPointF*
///
libqt_list q_rawfont_advances_for_glyph_indexes2(const void* self, libqt_list glyphIndexes, int32_t layoutFlags);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#glyphIndexesForChars)
///
/// @param self const QRawFont*
/// @param chars QChar*
/// @param numChars int
/// @param glyphIndexes uint32_t*
/// @param numGlyphs int*
///
bool q_rawfont_glyph_indexes_for_chars(const void* self, const void* chars, int numChars, uint32_t* glyphIndexes, int* numGlyphs);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#advancesForGlyphIndexes)
///
/// @param self const QRawFont*
/// @param glyphIndexes uint32_t*
/// @param advances QPointF*
/// @param numGlyphs int
///
bool q_rawfont_advances_for_glyph_indexes3(const void* self, uint32_t* glyphIndexes, void* advances, int numGlyphs);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#advancesForGlyphIndexes)
///
/// @param self const QRawFont*
/// @param glyphIndexes uint32_t*
/// @param advances QPointF*
/// @param numGlyphs int
/// @param layoutFlags flag of enum QRawFont__LayoutFlag
///
bool q_rawfont_advances_for_glyph_indexes4(const void* self, uint32_t* glyphIndexes, void* advances, int numGlyphs, int32_t layoutFlags);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#alphaMapForGlyph)
///
/// @param self const QRawFont*
/// @param glyphIndex uint32_t
///
QImage* q_rawfont_alpha_map_for_glyph(const void* self, uint32_t glyphIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#pathForGlyph)
///
/// @param self const QRawFont*
/// @param glyphIndex uint32_t
///
QPainterPath* q_rawfont_path_for_glyph(const void* self, uint32_t glyphIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#boundingRect)
///
/// @param self const QRawFont*
/// @param glyphIndex uint32_t
///
QRectF* q_rawfont_bounding_rect(const void* self, uint32_t glyphIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#setPixelSize)
///
/// @param self QRawFont*
/// @param pixelSize double
///
void q_rawfont_set_pixel_size(void* self, double pixelSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#pixelSize)
///
/// @param self const QRawFont*
///
double q_rawfont_pixel_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#hintingPreference)
///
/// @param self const QRawFont*
///
/// @return enum QFont__HintingPreference
///
int32_t q_rawfont_hinting_preference(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#ascent)
///
/// @param self const QRawFont*
///
double q_rawfont_ascent(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#capHeight)
///
/// @param self const QRawFont*
///
double q_rawfont_cap_height(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#descent)
///
/// @param self const QRawFont*
///
double q_rawfont_descent(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#leading)
///
/// @param self const QRawFont*
///
double q_rawfont_leading(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#xHeight)
///
/// @param self const QRawFont*
///
double q_rawfont_x_height(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#averageCharWidth)
///
/// @param self const QRawFont*
///
double q_rawfont_average_char_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#maxCharWidth)
///
/// @param self const QRawFont*
///
double q_rawfont_max_char_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#lineThickness)
///
/// @param self const QRawFont*
///
double q_rawfont_line_thickness(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#underlinePosition)
///
/// @param self const QRawFont*
///
double q_rawfont_underline_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#unitsPerEm)
///
/// @param self const QRawFont*
///
double q_rawfont_units_per_em(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#loadFromFile)
///
/// @param self QRawFont*
/// @param fileName const char*
/// @param pixelSize double
/// @param hintingPreference enum QFont__HintingPreference
///
void q_rawfont_load_from_file(void* self, const char* fileName, double pixelSize, int32_t hintingPreference);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#loadFromData)
///
/// @param self QRawFont*
/// @param fontData char*
/// @param pixelSize double
/// @param hintingPreference enum QFont__HintingPreference
///
void q_rawfont_load_from_data(void* self, char* fontData, double pixelSize, int32_t hintingPreference);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#supportsCharacter)
///
/// @param self const QRawFont*
/// @param ucs4 uint32_t
///
bool q_rawfont_supports_character(const void* self, uint32_t ucs4);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#supportsCharacter)
///
/// @param self const QRawFont*
/// @param character QChar*
///
bool q_rawfont_supports_character2(const void* self, void* character);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#supportedWritingSystems)
///
/// @param self const QRawFont*
///
/// @return libqt_list of enum QFontDatabase__WritingSystem
///
libqt_list q_rawfont_supported_writing_systems(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#fontTable)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QRawFont*
/// @param tagName const char*
///
char* q_rawfont_font_table(const void* self, const char* tagName);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#fontTable)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QRawFont*
/// @param tag QFont__Tag*
///
char* q_rawfont_font_table2(const void* self, void* tag);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#fromFont)
///
/// @param font QFont*
///
QRawFont* q_rawfont_from_font(const void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#alphaMapForGlyph)
///
/// @param self const QRawFont*
/// @param glyphIndex uint32_t
/// @param antialiasingType enum QRawFont__AntialiasingType
///
QImage* q_rawfont_alpha_map_for_glyph2(const void* self, uint32_t glyphIndex, int32_t antialiasingType);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#alphaMapForGlyph)
///
/// @param self const QRawFont*
/// @param glyphIndex uint32_t
/// @param antialiasingType enum QRawFont__AntialiasingType
/// @param transform QTransform*
///
QImage* q_rawfont_alpha_map_for_glyph3(const void* self, uint32_t glyphIndex, int32_t antialiasingType, const void* transform);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#fromFont)
///
/// @param font QFont*
/// @param writingSystem enum QFontDatabase__WritingSystem
///
QRawFont* q_rawfont_from_font2(const void* font, int32_t writingSystem);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#dtor.QRawFont)
///
/// Delete this object from C++ memory.
///
/// @param self QRawFont*
///
void q_rawfont_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont-h.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont-h.html#qHash)
///
/// @param font QRawFont*
/// @param seed size_t
///
size_t q_qrawfont_h_q_hash(const void* font, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#public-types)

typedef enum {
    QRAWFONT_ANTIALIASINGTYPE_PIXELANTIALIASING = 0,
    QRAWFONT_ANTIALIASINGTYPE_SUBPIXELANTIALIASING = 1
} QRawFont__AntialiasingType;

/// [Upstream resources](https://doc.qt.io/qt-6/qrawfont.html#public-types)

typedef enum {
    QRAWFONT_LAYOUTFLAG_SEPARATEADVANCES = 0,
    QRAWFONT_LAYOUTFLAG_KERNEDADVANCES = 1,
    QRAWFONT_LAYOUTFLAG_USEDESIGNMETRICS = 2
} QRawFont__LayoutFlag;

#endif
