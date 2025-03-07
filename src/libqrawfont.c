#include "libqchar.hpp"
#include "libqfont.hpp"
#include "libqimage.hpp"
#include "libqpainterpath.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include <string.h>
#include "libqtransform.hpp"
#include "libqrawfont.hpp"
#include "libqrawfont.h"

/// https://doc.qt.io/qt-6/qrawfont.html

/// q_rawfont_new constructs a new QRawFont object.
///
///
QRawFont* q_rawfont_new() {
    return QRawFont_new();
}

/// q_rawfont_new2 constructs a new QRawFont object.
///
/// ``` const char* fileName, double pixelSize ```
QRawFont* q_rawfont_new2(const char* fileName, double pixelSize) {
    return QRawFont_new2(qstring(fileName), pixelSize);
}

/// q_rawfont_new3 constructs a new QRawFont object.
///
/// ``` const char* fontData, double pixelSize ```
QRawFont* q_rawfont_new3(const char* fontData, double pixelSize) {
    return QRawFont_new3(qstring(fontData), pixelSize);
}

/// q_rawfont_new4 constructs a new QRawFont object.
///
/// ``` QRawFont* other ```
QRawFont* q_rawfont_new4(void* other) {
    return QRawFont_new4((QRawFont*)other);
}

/// q_rawfont_new5 constructs a new QRawFont object.
///
/// ``` const char* fileName, double pixelSize, enum QFont__HintingPreference hintingPreference ```
QRawFont* q_rawfont_new5(const char* fileName, double pixelSize, int64_t hintingPreference) {
    return QRawFont_new5(qstring(fileName), pixelSize, hintingPreference);
}

/// q_rawfont_new6 constructs a new QRawFont object.
///
/// ``` const char* fontData, double pixelSize, enum QFont__HintingPreference hintingPreference ```
QRawFont* q_rawfont_new6(const char* fontData, double pixelSize, int64_t hintingPreference) {
    return QRawFont_new6(qstring(fontData), pixelSize, hintingPreference);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#operator=)
///
/// ``` QRawFont* self, QRawFont* other ```
void q_rawfont_operator_assign(void* self, void* other) {
    QRawFont_OperatorAssign((QRawFont*)self, (QRawFont*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#swap)
///
/// ``` QRawFont* self, QRawFont* other ```
void q_rawfont_swap(void* self, void* other) {
    QRawFont_Swap((QRawFont*)self, (QRawFont*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#isValid)
///
/// ``` QRawFont* self ```
bool q_rawfont_is_valid(void* self) {
    return QRawFont_IsValid((QRawFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#operator==)
///
/// ``` QRawFont* self, QRawFont* other ```
bool q_rawfont_operator_equal(void* self, void* other) {
    return QRawFont_OperatorEqual((QRawFont*)self, (QRawFont*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#operator!=)
///
/// ``` QRawFont* self, QRawFont* other ```
bool q_rawfont_operator_not_equal(void* self, void* other) {
    return QRawFont_OperatorNotEqual((QRawFont*)self, (QRawFont*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#familyName)
///
/// ``` QRawFont* self ```
const char* q_rawfont_family_name(void* self) {
    libqt_string _str = QRawFont_FamilyName((QRawFont*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#styleName)
///
/// ``` QRawFont* self ```
const char* q_rawfont_style_name(void* self) {
    libqt_string _str = QRawFont_StyleName((QRawFont*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#style)
///
/// ``` QRawFont* self ```
int64_t q_rawfont_style(void* self) {
    return QRawFont_Style((QRawFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#weight)
///
/// ``` QRawFont* self ```
int32_t q_rawfont_weight(void* self) {
    return QRawFont_Weight((QRawFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#glyphIndexesForString)
///
/// ``` QRawFont* self, const char* text ```
libqt_list /* of uint32_t */ q_rawfont_glyph_indexes_for_string(void* self, const char* text) {
    libqt_list _arr = QRawFont_GlyphIndexesForString((QRawFont*)self, qstring(text));
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#advancesForGlyphIndexes)
///
/// ``` QRawFont* self, unsigned int* glyphIndexes[] ```
libqt_list /* of QPointF* */ q_rawfont_advances_for_glyph_indexes(void* self, unsigned int* glyphIndexes[]) {
    size_t glyphIndexes_len = 0;
    while (glyphIndexes[glyphIndexes_len] != NULL) {
        glyphIndexes_len++;
    }
    libqt_list glyphIndexes_list = {
        .len = glyphIndexes_len,
        .data = {(unsigned int*)glyphIndexes},
    };
    libqt_list _arr = QRawFont_AdvancesForGlyphIndexes((QRawFont*)self, glyphIndexes_list);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#advancesForGlyphIndexes)
///
/// ``` QRawFont* self, unsigned int* glyphIndexes[], int layoutFlags ```
libqt_list /* of QPointF* */ q_rawfont_advances_for_glyph_indexes2(void* self, unsigned int* glyphIndexes[], int64_t layoutFlags) {
    size_t glyphIndexes_len = 0;
    while (glyphIndexes[glyphIndexes_len] != NULL) {
        glyphIndexes_len++;
    }
    libqt_list glyphIndexes_list = {
        .len = glyphIndexes_len,
        .data = {(unsigned int*)glyphIndexes},
    };
    libqt_list _arr = QRawFont_AdvancesForGlyphIndexes2((QRawFont*)self, glyphIndexes_list, layoutFlags);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#glyphIndexesForChars)
///
/// ``` QRawFont* self, QChar* chars, int numChars, uint32_t* glyphIndexes, int* numGlyphs ```
bool q_rawfont_glyph_indexes_for_chars(void* self, void* chars, int numChars, uint32_t* glyphIndexes, int* numGlyphs) {
    return QRawFont_GlyphIndexesForChars((QRawFont*)self, (QChar*)chars, numChars, glyphIndexes, numGlyphs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#advancesForGlyphIndexes)
///
/// ``` QRawFont* self, uint32_t* glyphIndexes, QPointF* advances, int numGlyphs ```
bool q_rawfont_advances_for_glyph_indexes3(void* self, uint32_t* glyphIndexes, void* advances, int numGlyphs) {
    return QRawFont_AdvancesForGlyphIndexes3((QRawFont*)self, glyphIndexes, (QPointF*)advances, numGlyphs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#advancesForGlyphIndexes)
///
/// ``` QRawFont* self, uint32_t* glyphIndexes, QPointF* advances, int numGlyphs, int layoutFlags ```
bool q_rawfont_advances_for_glyph_indexes4(void* self, uint32_t* glyphIndexes, void* advances, int numGlyphs, int64_t layoutFlags) {
    return QRawFont_AdvancesForGlyphIndexes4((QRawFont*)self, glyphIndexes, (QPointF*)advances, numGlyphs, layoutFlags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#alphaMapForGlyph)
///
/// ``` QRawFont* self, uint32_t glyphIndex ```
QImage* q_rawfont_alpha_map_for_glyph(void* self, uint32_t glyphIndex) {
    return QRawFont_AlphaMapForGlyph((QRawFont*)self, glyphIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#pathForGlyph)
///
/// ``` QRawFont* self, uint32_t glyphIndex ```
QPainterPath* q_rawfont_path_for_glyph(void* self, uint32_t glyphIndex) {
    return QRawFont_PathForGlyph((QRawFont*)self, glyphIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#boundingRect)
///
/// ``` QRawFont* self, uint32_t glyphIndex ```
QRectF* q_rawfont_bounding_rect(void* self, uint32_t glyphIndex) {
    return QRawFont_BoundingRect((QRawFont*)self, glyphIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#setPixelSize)
///
/// ``` QRawFont* self, double pixelSize ```
void q_rawfont_set_pixel_size(void* self, double pixelSize) {
    QRawFont_SetPixelSize((QRawFont*)self, pixelSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#pixelSize)
///
/// ``` QRawFont* self ```
double q_rawfont_pixel_size(void* self) {
    return QRawFont_PixelSize((QRawFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#hintingPreference)
///
/// ``` QRawFont* self ```
int64_t q_rawfont_hinting_preference(void* self) {
    return QRawFont_HintingPreference((QRawFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#ascent)
///
/// ``` QRawFont* self ```
double q_rawfont_ascent(void* self) {
    return QRawFont_Ascent((QRawFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#capHeight)
///
/// ``` QRawFont* self ```
double q_rawfont_cap_height(void* self) {
    return QRawFont_CapHeight((QRawFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#descent)
///
/// ``` QRawFont* self ```
double q_rawfont_descent(void* self) {
    return QRawFont_Descent((QRawFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#leading)
///
/// ``` QRawFont* self ```
double q_rawfont_leading(void* self) {
    return QRawFont_Leading((QRawFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#xHeight)
///
/// ``` QRawFont* self ```
double q_rawfont_x_height(void* self) {
    return QRawFont_XHeight((QRawFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#averageCharWidth)
///
/// ``` QRawFont* self ```
double q_rawfont_average_char_width(void* self) {
    return QRawFont_AverageCharWidth((QRawFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#maxCharWidth)
///
/// ``` QRawFont* self ```
double q_rawfont_max_char_width(void* self) {
    return QRawFont_MaxCharWidth((QRawFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#lineThickness)
///
/// ``` QRawFont* self ```
double q_rawfont_line_thickness(void* self) {
    return QRawFont_LineThickness((QRawFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#underlinePosition)
///
/// ``` QRawFont* self ```
double q_rawfont_underline_position(void* self) {
    return QRawFont_UnderlinePosition((QRawFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#unitsPerEm)
///
/// ``` QRawFont* self ```
double q_rawfont_units_per_em(void* self) {
    return QRawFont_UnitsPerEm((QRawFont*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#loadFromFile)
///
/// ``` QRawFont* self, const char* fileName, double pixelSize, enum QFont__HintingPreference hintingPreference ```
void q_rawfont_load_from_file(void* self, const char* fileName, double pixelSize, int64_t hintingPreference) {
    QRawFont_LoadFromFile((QRawFont*)self, qstring(fileName), pixelSize, hintingPreference);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#loadFromData)
///
/// ``` QRawFont* self, const char* fontData, double pixelSize, enum QFont__HintingPreference hintingPreference ```
void q_rawfont_load_from_data(void* self, const char* fontData, double pixelSize, int64_t hintingPreference) {
    QRawFont_LoadFromData((QRawFont*)self, qstring(fontData), pixelSize, hintingPreference);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#supportsCharacter)
///
/// ``` QRawFont* self, uint32_t ucs4 ```
bool q_rawfont_supports_character(void* self, uint32_t ucs4) {
    return QRawFont_SupportsCharacter((QRawFont*)self, ucs4);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#supportsCharacter)
///
/// ``` QRawFont* self, QChar* character ```
bool q_rawfont_supports_character_with_character(void* self, void* character) {
    return QRawFont_SupportsCharacterWithCharacter((QRawFont*)self, (QChar*)character);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#supportedWritingSystems)
///
/// ``` QRawFont* self ```
libqt_list /* of int64_t */ q_rawfont_supported_writing_systems(void* self) {
    libqt_list _arr = QRawFont_SupportedWritingSystems((QRawFont*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#fontTable)
///
/// ``` QRawFont* self, const char* tagName ```
char* q_rawfont_font_table(void* self, const char* tagName) {
    libqt_string _str = QRawFont_FontTable((QRawFont*)self, tagName);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#fromFont)
///
/// ``` QFont* font ```
QRawFont* q_rawfont_from_font(void* font) {
    return QRawFont_FromFont((QFont*)font);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#alphaMapForGlyph)
///
/// ``` QRawFont* self, uint32_t glyphIndex, enum QRawFont__AntialiasingType antialiasingType ```
QImage* q_rawfont_alpha_map_for_glyph2(void* self, uint32_t glyphIndex, int64_t antialiasingType) {
    return QRawFont_AlphaMapForGlyph2((QRawFont*)self, glyphIndex, antialiasingType);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#alphaMapForGlyph)
///
/// ``` QRawFont* self, uint32_t glyphIndex, enum QRawFont__AntialiasingType antialiasingType, QTransform* transform ```
QImage* q_rawfont_alpha_map_for_glyph3(void* self, uint32_t glyphIndex, int64_t antialiasingType, void* transform) {
    return QRawFont_AlphaMapForGlyph3((QRawFont*)self, glyphIndex, antialiasingType, (QTransform*)transform);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrawfont.html#fromFont)
///
/// ``` QFont* font, enum QFontDatabase__WritingSystem writingSystem ```
QRawFont* q_rawfont_from_font2(void* font, int64_t writingSystem) {
    return QRawFont_FromFont2((QFont*)font, writingSystem);
}

/// Delete this object from C++ memory.
///
/// ``` QRawFont* self ```
void q_rawfont_delete(void* self) {
    QRawFont_Delete((QRawFont*)(self));
}