#pragma once
#ifndef SRCQT6C_LIBQRAWFONT_H
#define SRCQT6C_LIBQRAWFONT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qrawfont.html

/// q_rawfont_new constructs a new QRawFont object.
///
///
QRawFont* q_rawfont_new();

/// q_rawfont_new2 constructs a new QRawFont object.
///
/// ``` const char* fileName, double pixelSize ```
QRawFont* q_rawfont_new2(const char* fileName, double pixelSize);

/// q_rawfont_new3 constructs a new QRawFont object.
///
/// ``` const char* fontData, double pixelSize ```
QRawFont* q_rawfont_new3(const char* fontData, double pixelSize);

/// q_rawfont_new4 constructs a new QRawFont object.
///
/// ``` QRawFont* other ```
QRawFont* q_rawfont_new4(void* other);

/// q_rawfont_new5 constructs a new QRawFont object.
///
/// ``` const char* fileName, double pixelSize, enum QFont__HintingPreference hintingPreference ```
QRawFont* q_rawfont_new5(const char* fileName, double pixelSize, int64_t hintingPreference);

/// q_rawfont_new6 constructs a new QRawFont object.
///
/// ``` const char* fontData, double pixelSize, enum QFont__HintingPreference hintingPreference ```
QRawFont* q_rawfont_new6(const char* fontData, double pixelSize, int64_t hintingPreference);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#operator=)
///
/// ``` QRawFont* self, QRawFont* other ```
void q_rawfont_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#swap)
///
/// ``` QRawFont* self, QRawFont* other ```
void q_rawfont_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#isValid)
///
/// ``` QRawFont* self ```
bool q_rawfont_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#operator==)
///
/// ``` QRawFont* self, QRawFont* other ```
bool q_rawfont_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#operator!=)
///
/// ``` QRawFont* self, QRawFont* other ```
bool q_rawfont_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#familyName)
///
/// ``` QRawFont* self ```
const char* q_rawfont_family_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#styleName)
///
/// ``` QRawFont* self ```
const char* q_rawfont_style_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#style)
///
/// ``` QRawFont* self ```
int64_t q_rawfont_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#weight)
///
/// ``` QRawFont* self ```
int32_t q_rawfont_weight(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#glyphIndexesForString)
///
/// ``` QRawFont* self, const char* text ```
libqt_list /* of uint32_t */ q_rawfont_glyph_indexes_for_string(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#advancesForGlyphIndexes)
///
/// ``` QRawFont* self, libqt_list /* of uint32_t */ glyphIndexes ```
libqt_list /* of QPointF* */ q_rawfont_advances_for_glyph_indexes(void* self, libqt_list glyphIndexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#advancesForGlyphIndexes)
///
/// ``` QRawFont* self, libqt_list /* of uint32_t */ glyphIndexes, int layoutFlags ```
libqt_list /* of QPointF* */ q_rawfont_advances_for_glyph_indexes2(void* self, libqt_list glyphIndexes, int64_t layoutFlags);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#glyphIndexesForChars)
///
/// ``` QRawFont* self, QChar* chars, int numChars, uint32_t* glyphIndexes, int* numGlyphs ```
bool q_rawfont_glyph_indexes_for_chars(void* self, void* chars, int numChars, uint32_t* glyphIndexes, int* numGlyphs);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#advancesForGlyphIndexes)
///
/// ``` QRawFont* self, uint32_t* glyphIndexes, QPointF* advances, int numGlyphs ```
bool q_rawfont_advances_for_glyph_indexes3(void* self, uint32_t* glyphIndexes, void* advances, int numGlyphs);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#advancesForGlyphIndexes)
///
/// ``` QRawFont* self, uint32_t* glyphIndexes, QPointF* advances, int numGlyphs, int layoutFlags ```
bool q_rawfont_advances_for_glyph_indexes4(void* self, uint32_t* glyphIndexes, void* advances, int numGlyphs, int64_t layoutFlags);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#alphaMapForGlyph)
///
/// ``` QRawFont* self, uint32_t glyphIndex ```
QImage* q_rawfont_alpha_map_for_glyph(void* self, uint32_t glyphIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#pathForGlyph)
///
/// ``` QRawFont* self, uint32_t glyphIndex ```
QPainterPath* q_rawfont_path_for_glyph(void* self, uint32_t glyphIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#boundingRect)
///
/// ``` QRawFont* self, uint32_t glyphIndex ```
QRectF* q_rawfont_bounding_rect(void* self, uint32_t glyphIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#setPixelSize)
///
/// ``` QRawFont* self, double pixelSize ```
void q_rawfont_set_pixel_size(void* self, double pixelSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#pixelSize)
///
/// ``` QRawFont* self ```
double q_rawfont_pixel_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#hintingPreference)
///
/// ``` QRawFont* self ```
int64_t q_rawfont_hinting_preference(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#ascent)
///
/// ``` QRawFont* self ```
double q_rawfont_ascent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#capHeight)
///
/// ``` QRawFont* self ```
double q_rawfont_cap_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#descent)
///
/// ``` QRawFont* self ```
double q_rawfont_descent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#leading)
///
/// ``` QRawFont* self ```
double q_rawfont_leading(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#xHeight)
///
/// ``` QRawFont* self ```
double q_rawfont_x_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#averageCharWidth)
///
/// ``` QRawFont* self ```
double q_rawfont_average_char_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#maxCharWidth)
///
/// ``` QRawFont* self ```
double q_rawfont_max_char_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#lineThickness)
///
/// ``` QRawFont* self ```
double q_rawfont_line_thickness(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#underlinePosition)
///
/// ``` QRawFont* self ```
double q_rawfont_underline_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#unitsPerEm)
///
/// ``` QRawFont* self ```
double q_rawfont_units_per_em(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#loadFromFile)
///
/// ``` QRawFont* self, const char* fileName, double pixelSize, enum QFont__HintingPreference hintingPreference ```
void q_rawfont_load_from_file(void* self, const char* fileName, double pixelSize, int64_t hintingPreference);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#loadFromData)
///
/// ``` QRawFont* self, const char* fontData, double pixelSize, enum QFont__HintingPreference hintingPreference ```
void q_rawfont_load_from_data(void* self, const char* fontData, double pixelSize, int64_t hintingPreference);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#supportsCharacter)
///
/// ``` QRawFont* self, uint32_t ucs4 ```
bool q_rawfont_supports_character(void* self, uint32_t ucs4);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#supportsCharacter)
///
/// ``` QRawFont* self, QChar* character ```
bool q_rawfont_supports_character_with_character(void* self, void* character);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#supportedWritingSystems)
///
/// ``` QRawFont* self ```
libqt_list /* of int64_t */ q_rawfont_supported_writing_systems(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#fontTable)
///
/// ``` QRawFont* self, const char* tagName ```
char* q_rawfont_font_table(void* self, const char* tagName);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#fontTable)
///
/// ``` QRawFont* self, QFont__Tag* tag ```
char* q_rawfont_font_table_with_tag(void* self, void* tag);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#fromFont)
///
/// ``` QFont* font ```
QRawFont* q_rawfont_from_font(void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#alphaMapForGlyph)
///
/// ``` QRawFont* self, uint32_t glyphIndex, enum QRawFont__AntialiasingType antialiasingType ```
QImage* q_rawfont_alpha_map_for_glyph2(void* self, uint32_t glyphIndex, int64_t antialiasingType);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#alphaMapForGlyph)
///
/// ``` QRawFont* self, uint32_t glyphIndex, enum QRawFont__AntialiasingType antialiasingType, QTransform* transform ```
QImage* q_rawfont_alpha_map_for_glyph3(void* self, uint32_t glyphIndex, int64_t antialiasingType, void* transform);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#fromFont)
///
/// ``` QFont* font, enum QFontDatabase__WritingSystem writingSystem ```
QRawFont* q_rawfont_from_font2(void* font, int64_t writingSystem);

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#dtor.QRawFont)
///
/// Delete this object from C++ memory.
///
/// ``` QRawFont* self ```
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
