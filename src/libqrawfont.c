#include "libqchar.hpp"
#include "libqfont.hpp"
#include "libqimage.hpp"
#include "libqpainterpath.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqtransform.hpp"
#include "libqrawfont.hpp"
#include "libqrawfont.h"

QRawFont* q_rawfont_new() {
    return QRawFont_new();
}

QRawFont* q_rawfont_new2(const char* fileName, double pixelSize) {
    return QRawFont_new2(qstring(fileName), pixelSize);
}

QRawFont* q_rawfont_new3(const char* fontData, double pixelSize) {
    return QRawFont_new3(qstring(fontData), pixelSize);
}

QRawFont* q_rawfont_new4(void* other) {
    return QRawFont_new4((QRawFont*)other);
}

QRawFont* q_rawfont_new5(const char* fileName, double pixelSize, int32_t hintingPreference) {
    return QRawFont_new5(qstring(fileName), pixelSize, hintingPreference);
}

QRawFont* q_rawfont_new6(const char* fontData, double pixelSize, int32_t hintingPreference) {
    return QRawFont_new6(qstring(fontData), pixelSize, hintingPreference);
}

void q_rawfont_operator_assign(void* self, void* other) {
    QRawFont_OperatorAssign((QRawFont*)self, (QRawFont*)other);
}

void q_rawfont_swap(void* self, void* other) {
    QRawFont_Swap((QRawFont*)self, (QRawFont*)other);
}

bool q_rawfont_is_valid(void* self) {
    return QRawFont_IsValid((QRawFont*)self);
}

bool q_rawfont_operator_equal(void* self, void* other) {
    return QRawFont_OperatorEqual((QRawFont*)self, (QRawFont*)other);
}

bool q_rawfont_operator_not_equal(void* self, void* other) {
    return QRawFont_OperatorNotEqual((QRawFont*)self, (QRawFont*)other);
}

const char* q_rawfont_family_name(void* self) {
    libqt_string _str = QRawFont_FamilyName((QRawFont*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_rawfont_style_name(void* self) {
    libqt_string _str = QRawFont_StyleName((QRawFont*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_rawfont_style(void* self) {
    return QRawFont_Style((QRawFont*)self);
}

int32_t q_rawfont_weight(void* self) {
    return QRawFont_Weight((QRawFont*)self);
}

libqt_list /* of uint32_t */ q_rawfont_glyph_indexes_for_string(void* self, const char* text) {
    libqt_list _arr = QRawFont_GlyphIndexesForString((QRawFont*)self, qstring(text));
    return _arr;
}

libqt_list /* of QPointF* */ q_rawfont_advances_for_glyph_indexes(void* self, libqt_list glyphIndexes) {
    libqt_list _arr = QRawFont_AdvancesForGlyphIndexes((QRawFont*)self, glyphIndexes);
    return _arr;
}

libqt_list /* of QPointF* */ q_rawfont_advances_for_glyph_indexes2(void* self, libqt_list glyphIndexes, int64_t layoutFlags) {
    libqt_list _arr = QRawFont_AdvancesForGlyphIndexes2((QRawFont*)self, glyphIndexes, layoutFlags);
    return _arr;
}

bool q_rawfont_glyph_indexes_for_chars(void* self, void* chars, int numChars, uint32_t* glyphIndexes, int* numGlyphs) {
    return QRawFont_GlyphIndexesForChars((QRawFont*)self, (QChar*)chars, numChars, glyphIndexes, numGlyphs);
}

bool q_rawfont_advances_for_glyph_indexes3(void* self, uint32_t* glyphIndexes, void* advances, int numGlyphs) {
    return QRawFont_AdvancesForGlyphIndexes3((QRawFont*)self, glyphIndexes, (QPointF*)advances, numGlyphs);
}

bool q_rawfont_advances_for_glyph_indexes4(void* self, uint32_t* glyphIndexes, void* advances, int numGlyphs, int64_t layoutFlags) {
    return QRawFont_AdvancesForGlyphIndexes4((QRawFont*)self, glyphIndexes, (QPointF*)advances, numGlyphs, layoutFlags);
}

QImage* q_rawfont_alpha_map_for_glyph(void* self, uint32_t glyphIndex) {
    return QRawFont_AlphaMapForGlyph((QRawFont*)self, glyphIndex);
}

QPainterPath* q_rawfont_path_for_glyph(void* self, uint32_t glyphIndex) {
    return QRawFont_PathForGlyph((QRawFont*)self, glyphIndex);
}

QRectF* q_rawfont_bounding_rect(void* self, uint32_t glyphIndex) {
    return QRawFont_BoundingRect((QRawFont*)self, glyphIndex);
}

void q_rawfont_set_pixel_size(void* self, double pixelSize) {
    QRawFont_SetPixelSize((QRawFont*)self, pixelSize);
}

double q_rawfont_pixel_size(void* self) {
    return QRawFont_PixelSize((QRawFont*)self);
}

int32_t q_rawfont_hinting_preference(void* self) {
    return QRawFont_HintingPreference((QRawFont*)self);
}

double q_rawfont_ascent(void* self) {
    return QRawFont_Ascent((QRawFont*)self);
}

double q_rawfont_cap_height(void* self) {
    return QRawFont_CapHeight((QRawFont*)self);
}

double q_rawfont_descent(void* self) {
    return QRawFont_Descent((QRawFont*)self);
}

double q_rawfont_leading(void* self) {
    return QRawFont_Leading((QRawFont*)self);
}

double q_rawfont_x_height(void* self) {
    return QRawFont_XHeight((QRawFont*)self);
}

double q_rawfont_average_char_width(void* self) {
    return QRawFont_AverageCharWidth((QRawFont*)self);
}

double q_rawfont_max_char_width(void* self) {
    return QRawFont_MaxCharWidth((QRawFont*)self);
}

double q_rawfont_line_thickness(void* self) {
    return QRawFont_LineThickness((QRawFont*)self);
}

double q_rawfont_underline_position(void* self) {
    return QRawFont_UnderlinePosition((QRawFont*)self);
}

double q_rawfont_units_per_em(void* self) {
    return QRawFont_UnitsPerEm((QRawFont*)self);
}

void q_rawfont_load_from_file(void* self, const char* fileName, double pixelSize, int32_t hintingPreference) {
    QRawFont_LoadFromFile((QRawFont*)self, qstring(fileName), pixelSize, hintingPreference);
}

void q_rawfont_load_from_data(void* self, const char* fontData, double pixelSize, int32_t hintingPreference) {
    QRawFont_LoadFromData((QRawFont*)self, qstring(fontData), pixelSize, hintingPreference);
}

bool q_rawfont_supports_character(void* self, uint32_t ucs4) {
    return QRawFont_SupportsCharacter((QRawFont*)self, ucs4);
}

bool q_rawfont_supports_character2(void* self, void* character) {
    return QRawFont_SupportsCharacter2((QRawFont*)self, (QChar*)character);
}

libqt_list /* of int32_t */ q_rawfont_supported_writing_systems(void* self) {
    libqt_list _arr = QRawFont_SupportedWritingSystems((QRawFont*)self);
    return _arr;
}

char* q_rawfont_font_table(void* self, const char* tagName) {
    libqt_string _str = QRawFont_FontTable((QRawFont*)self, tagName);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_rawfont_font_table2(void* self, void* tag) {
    libqt_string _str = QRawFont_FontTable2((QRawFont*)self, (QFont__Tag*)tag);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QRawFont* q_rawfont_from_font(void* font) {
    return QRawFont_FromFont((QFont*)font);
}

QImage* q_rawfont_alpha_map_for_glyph2(void* self, uint32_t glyphIndex, int32_t antialiasingType) {
    return QRawFont_AlphaMapForGlyph2((QRawFont*)self, glyphIndex, antialiasingType);
}

QImage* q_rawfont_alpha_map_for_glyph3(void* self, uint32_t glyphIndex, int32_t antialiasingType, void* transform) {
    return QRawFont_AlphaMapForGlyph3((QRawFont*)self, glyphIndex, antialiasingType, (QTransform*)transform);
}

QRawFont* q_rawfont_from_font2(void* font, int32_t writingSystem) {
    return QRawFont_FromFont2((QFont*)font, writingSystem);
}

void q_rawfont_delete(void* self) {
    QRawFont_Delete((QRawFont*)(self));
}
