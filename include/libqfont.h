#pragma once
#ifndef SRC_QT6C_LIBQFONT_H
#define SRC_QT6C_LIBQFONT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qfont.html

/// q_font_new constructs a new QFont object.
///
QFont* q_font_new();

/// q_font_new2 constructs a new QFont object.
///
/// @param family const char*
QFont* q_font_new2(const char* family);

/// q_font_new3 constructs a new QFont object.
///
/// @param families const char**
QFont* q_font_new3(const char* families[static 1]);

/// q_font_new4 constructs a new QFont object.
///
/// @param font QFont*
/// @param pd QPaintDevice*
QFont* q_font_new4(void* font, void* pd);

/// q_font_new5 constructs a new QFont object.
///
/// @param font QFont*
QFont* q_font_new5(void* font);

/// q_font_new6 constructs a new QFont object.
///
/// @param family const char*
/// @param pointSize int
QFont* q_font_new6(const char* family, int pointSize);

/// q_font_new7 constructs a new QFont object.
///
/// @param family const char*
/// @param pointSize int
/// @param weight int
QFont* q_font_new7(const char* family, int pointSize, int weight);

/// q_font_new8 constructs a new QFont object.
///
/// @param family const char*
/// @param pointSize int
/// @param weight int
/// @param italic bool
QFont* q_font_new8(const char* family, int pointSize, int weight, bool italic);

/// q_font_new9 constructs a new QFont object.
///
/// @param families const char**
/// @param pointSize int
QFont* q_font_new9(const char* families[static 1], int pointSize);

/// q_font_new10 constructs a new QFont object.
///
/// @param families const char**
/// @param pointSize int
/// @param weight int
QFont* q_font_new10(const char* families[static 1], int pointSize, int weight);

/// q_font_new11 constructs a new QFont object.
///
/// @param families const char**
/// @param pointSize int
/// @param weight int
/// @param italic bool
QFont* q_font_new11(const char* families[static 1], int pointSize, int weight, bool italic);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#swap)
///
/// @param self QFont*
/// @param other QFont*
void q_font_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#family)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFont*
const char* q_font_family(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setFamily)
///
/// @param self QFont*
/// @param family const char*
void q_font_set_family(void* self, const char* family);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#families)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFont*
const char** q_font_families(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setFamilies)
///
/// @param self QFont*
/// @param families const char**
void q_font_set_families(void* self, const char* families[static 1]);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#styleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFont*
const char* q_font_style_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStyleName)
///
/// @param self QFont*
/// @param styleName const char*
void q_font_set_style_name(void* self, const char* styleName);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#pointSize)
///
/// @param self QFont*
int32_t q_font_point_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setPointSize)
///
/// @param self QFont*
/// @param pointSize int
void q_font_set_point_size(void* self, int pointSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#pointSizeF)
///
/// @param self QFont*
double q_font_point_size_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setPointSizeF)
///
/// @param self QFont*
/// @param pointSizeF double
void q_font_set_point_size_f(void* self, double pointSizeF);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#pixelSize)
///
/// @param self QFont*
int32_t q_font_pixel_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setPixelSize)
///
/// @param self QFont*
/// @param pixelSize int
void q_font_set_pixel_size(void* self, int pixelSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#weight)
///
/// @param self QFont*
///
/// @return enum QFont__Weight
int32_t q_font_weight(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setWeight)
///
/// @param self QFont*
/// @param weight enum QFont__Weight
void q_font_set_weight(void* self, int32_t weight);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#bold)
///
/// @param self QFont*
bool q_font_bold(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setBold)
///
/// @param self QFont*
/// @param bold bool
void q_font_set_bold(void* self, bool bold);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStyle)
///
/// @param self QFont*
/// @param style enum QFont__Style
void q_font_set_style(void* self, int32_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#style)
///
/// @param self QFont*
///
/// @return enum QFont__Style
int32_t q_font_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#italic)
///
/// @param self QFont*
bool q_font_italic(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setItalic)
///
/// @param self QFont*
/// @param b bool
void q_font_set_italic(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#underline)
///
/// @param self QFont*
bool q_font_underline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setUnderline)
///
/// @param self QFont*
/// @param underline bool
void q_font_set_underline(void* self, bool underline);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#overline)
///
/// @param self QFont*
bool q_font_overline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setOverline)
///
/// @param self QFont*
/// @param overline bool
void q_font_set_overline(void* self, bool overline);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#strikeOut)
///
/// @param self QFont*
bool q_font_strike_out(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStrikeOut)
///
/// @param self QFont*
/// @param strikeOut bool
void q_font_set_strike_out(void* self, bool strikeOut);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#fixedPitch)
///
/// @param self QFont*
bool q_font_fixed_pitch(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setFixedPitch)
///
/// @param self QFont*
/// @param fixedPitch bool
void q_font_set_fixed_pitch(void* self, bool fixedPitch);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#kerning)
///
/// @param self QFont*
bool q_font_kerning(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setKerning)
///
/// @param self QFont*
/// @param kerning bool
void q_font_set_kerning(void* self, bool kerning);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#styleHint)
///
/// @param self QFont*
///
/// @return enum QFont__StyleHint
int32_t q_font_style_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#styleStrategy)
///
/// @param self QFont*
///
/// @return enum QFont__StyleStrategy
int32_t q_font_style_strategy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStyleHint)
///
/// @param self QFont*
/// @param param1 enum QFont__StyleHint
void q_font_set_style_hint(void* self, int32_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStyleStrategy)
///
/// @param self QFont*
/// @param s enum QFont__StyleStrategy
void q_font_set_style_strategy(void* self, int32_t s);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#stretch)
///
/// @param self QFont*
int32_t q_font_stretch(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStretch)
///
/// @param self QFont*
/// @param stretch int
void q_font_set_stretch(void* self, int stretch);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#letterSpacing)
///
/// @param self QFont*
double q_font_letter_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#letterSpacingType)
///
/// @param self QFont*
///
/// @return enum QFont__SpacingType
int32_t q_font_letter_spacing_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setLetterSpacing)
///
/// @param self QFont*
/// @param type enum QFont__SpacingType
/// @param spacing double
void q_font_set_letter_spacing(void* self, int32_t type, double spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#wordSpacing)
///
/// @param self QFont*
double q_font_word_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setWordSpacing)
///
/// @param self QFont*
/// @param spacing double
void q_font_set_word_spacing(void* self, double spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setCapitalization)
///
/// @param self QFont*
/// @param capitalization enum QFont__Capitalization
void q_font_set_capitalization(void* self, int32_t capitalization);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#capitalization)
///
/// @param self QFont*
///
/// @return enum QFont__Capitalization
int32_t q_font_capitalization(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setHintingPreference)
///
/// @param self QFont*
/// @param hintingPreference enum QFont__HintingPreference
void q_font_set_hinting_preference(void* self, int32_t hintingPreference);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#hintingPreference)
///
/// @param self QFont*
///
/// @return enum QFont__HintingPreference
int32_t q_font_hinting_preference(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setFeature)
///
/// @param self QFont*
/// @param tag QFont__Tag*
/// @param value uint32_t
void q_font_set_feature(void* self, void* tag, uint32_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#unsetFeature)
///
/// @param self QFont*
/// @param tag QFont__Tag*
void q_font_unset_feature(void* self, void* tag);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#featureValue)
///
/// @param self QFont*
/// @param tag QFont__Tag*
uint32_t q_font_feature_value(void* self, void* tag);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#isFeatureSet)
///
/// @param self QFont*
/// @param tag QFont__Tag*
bool q_font_is_feature_set(void* self, void* tag);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#featureTags)
///
/// @param self QFont*
libqt_list /* of QFont__Tag* */ q_font_feature_tags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#clearFeatures)
///
/// @param self QFont*
void q_font_clear_features(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setVariableAxis)
///
/// @param self QFont*
/// @param tag QFont__Tag*
/// @param value float
void q_font_set_variable_axis(void* self, void* tag, float value);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#unsetVariableAxis)
///
/// @param self QFont*
/// @param tag QFont__Tag*
void q_font_unset_variable_axis(void* self, void* tag);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#isVariableAxisSet)
///
/// @param self QFont*
/// @param tag QFont__Tag*
bool q_font_is_variable_axis_set(void* self, void* tag);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#variableAxisValue)
///
/// @param self QFont*
/// @param tag QFont__Tag*
float q_font_variable_axis_value(void* self, void* tag);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#clearVariableAxes)
///
/// @param self QFont*
void q_font_clear_variable_axes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#variableAxisTags)
///
/// @param self QFont*
libqt_list /* of QFont__Tag* */ q_font_variable_axis_tags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#exactMatch)
///
/// @param self QFont*
bool q_font_exact_match(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#operator-eq)
///
/// @param self QFont*
/// @param param1 QFont*
void q_font_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#operator-eq-eq)
///
/// @param self QFont*
/// @param param1 QFont*
bool q_font_operator_equal(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#operator-not-eq)
///
/// @param self QFont*
/// @param param1 QFont*
bool q_font_operator_not_equal(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#operator-lt)
///
/// @param self QFont*
/// @param param1 QFont*
bool q_font_operator_lesser(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#operator)
///
/// @param self QFont*
QVariant* q_font_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#isCopyOf)
///
/// @param self QFont*
/// @param param1 QFont*
bool q_font_is_copy_of(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#key)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFont*
const char* q_font_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFont*
const char* q_font_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#fromString)
///
/// @param self QFont*
/// @param param1 const char*
bool q_font_from_string(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#substitute)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
const char* q_font_substitute(const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#substitutes)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
const char** q_font_substitutes(const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#substitutions)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_font_substitutions();

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#insertSubstitution)
///
/// @param param1 const char*
/// @param param2 const char*
void q_font_insert_substitution(const char* param1, const char* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#insertSubstitutions)
///
/// @param param1 const char*
/// @param param2 const char**
void q_font_insert_substitutions(const char* param1, const char* param2[static 1]);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#removeSubstitutions)
///
/// @param param1 const char*
void q_font_remove_substitutions(const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#initialize)
///
void q_font_initialize();

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#cleanup)
///
void q_font_cleanup();

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#cacheStatistics)
///
void q_font_cache_statistics();

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#defaultFamily)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFont*
const char* q_font_default_family(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#resolve)
///
/// @param self QFont*
/// @param param1 QFont*
QFont* q_font_resolve(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#resolveMask)
///
/// @param self QFont*
uint32_t q_font_resolve_mask(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setResolveMask)
///
/// @param self QFont*
/// @param mask uint32_t
void q_font_set_resolve_mask(void* self, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setLegacyWeight)
///
/// @param self QFont*
/// @param legacyWeight int
void q_font_set_legacy_weight(void* self, int legacyWeight);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#legacyWeight)
///
/// @param self QFont*
int32_t q_font_legacy_weight(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStyleHint)
///
/// @param self QFont*
/// @param param1 enum QFont__StyleHint
/// @param param2 enum QFont__StyleStrategy
void q_font_set_style_hint2(void* self, int32_t param1, int32_t param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#dtor.QFont)
///
/// Delete this object from C++ memory.
///
/// @param self QFont*
void q_font_delete(void* self);

/// https://doc.qt.io/qt-6/qfont-tag.html

/// q_font__tag_new constructs a new QFont::Tag object.
///
/// @param other QFont__Tag*
QFont__Tag* q_font__tag_new(void* other);

/// q_font__tag_new2 constructs a new QFont::Tag object and invalidates the source QFont::Tag object.
///
/// @param other QFont__Tag*
QFont__Tag* q_font__tag_new2(void* other);

/// q_font__tag_new3 constructs a new QFont::Tag object.
///
QFont__Tag* q_font__tag_new3();

/// q_font__tag_new4 constructs a new QFont::Tag object.
///
/// @param param1 QFont__Tag*
QFont__Tag* q_font__tag_new4(void* param1);

/// q_font__tag_copy_assign shallow copies `other` into `self`.
///
/// @param self QFont__Tag*
/// @param other QFont__Tag*
void q_font__tag_copy_assign(void* self, void* other);

/// q_font__tag_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QFont__Tag*
/// @param other QFont__Tag*
void q_font__tag_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont-tag.html#isValid)
///
/// @param self QFont__Tag*
bool q_font__tag_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont-tag.html#value)
///
/// @param self QFont__Tag*
uint32_t q_font__tag_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont-tag.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFont__Tag*
char* q_font__tag_to_string(void* self);

/// Delete this object from C++ memory.
///
/// @param self QFont__Tag*
void q_font__tag_delete(void* self);

/// https://doc.qt.io/qt-6/qfont.html#types

typedef enum {
    QFONT_STYLEHINT_HELVETICA = 0,
    QFONT_STYLEHINT_SANSSERIF = 0,
    QFONT_STYLEHINT_TIMES = 1,
    QFONT_STYLEHINT_SERIF = 1,
    QFONT_STYLEHINT_COURIER = 2,
    QFONT_STYLEHINT_TYPEWRITER = 2,
    QFONT_STYLEHINT_OLDENGLISH = 3,
    QFONT_STYLEHINT_DECORATIVE = 3,
    QFONT_STYLEHINT_SYSTEM = 4,
    QFONT_STYLEHINT_ANYSTYLE = 5,
    QFONT_STYLEHINT_CURSIVE = 6,
    QFONT_STYLEHINT_MONOSPACE = 7,
    QFONT_STYLEHINT_FANTASY = 8
} QFont__StyleHint;

typedef enum {
    QFONT_STYLESTRATEGY_PREFERDEFAULT = 1,
    QFONT_STYLESTRATEGY_PREFERBITMAP = 2,
    QFONT_STYLESTRATEGY_PREFERDEVICE = 4,
    QFONT_STYLESTRATEGY_PREFEROUTLINE = 8,
    QFONT_STYLESTRATEGY_FORCEOUTLINE = 16,
    QFONT_STYLESTRATEGY_PREFERMATCH = 32,
    QFONT_STYLESTRATEGY_PREFERQUALITY = 64,
    QFONT_STYLESTRATEGY_PREFERANTIALIAS = 128,
    QFONT_STYLESTRATEGY_NOANTIALIAS = 256,
    QFONT_STYLESTRATEGY_NOSUBPIXELANTIALIAS = 2048,
    QFONT_STYLESTRATEGY_PREFERNOSHAPING = 4096,
    QFONT_STYLESTRATEGY_CONTEXTFONTMERGING = 8192,
    QFONT_STYLESTRATEGY_PREFERTYPOLINEMETRICS = 16384,
    QFONT_STYLESTRATEGY_NOFONTMERGING = 32768
} QFont__StyleStrategy;

typedef enum {
    QFONT_HINTINGPREFERENCE_PREFERDEFAULTHINTING = 0,
    QFONT_HINTINGPREFERENCE_PREFERNOHINTING = 1,
    QFONT_HINTINGPREFERENCE_PREFERVERTICALHINTING = 2,
    QFONT_HINTINGPREFERENCE_PREFERFULLHINTING = 3
} QFont__HintingPreference;

typedef enum {
    QFONT_WEIGHT_THIN = 100,
    QFONT_WEIGHT_EXTRALIGHT = 200,
    QFONT_WEIGHT_LIGHT = 300,
    QFONT_WEIGHT_NORMAL = 400,
    QFONT_WEIGHT_MEDIUM = 500,
    QFONT_WEIGHT_DEMIBOLD = 600,
    QFONT_WEIGHT_BOLD = 700,
    QFONT_WEIGHT_EXTRABOLD = 800,
    QFONT_WEIGHT_BLACK = 900
} QFont__Weight;

typedef enum {
    QFONT_STYLE_STYLENORMAL = 0,
    QFONT_STYLE_STYLEITALIC = 1,
    QFONT_STYLE_STYLEOBLIQUE = 2
} QFont__Style;

typedef enum {
    QFONT_STRETCH_ANYSTRETCH = 0,
    QFONT_STRETCH_ULTRACONDENSED = 50,
    QFONT_STRETCH_EXTRACONDENSED = 62,
    QFONT_STRETCH_CONDENSED = 75,
    QFONT_STRETCH_SEMICONDENSED = 87,
    QFONT_STRETCH_UNSTRETCHED = 100,
    QFONT_STRETCH_SEMIEXPANDED = 112,
    QFONT_STRETCH_EXPANDED = 125,
    QFONT_STRETCH_EXTRAEXPANDED = 150,
    QFONT_STRETCH_ULTRAEXPANDED = 200
} QFont__Stretch;

typedef enum {
    QFONT_CAPITALIZATION_MIXEDCASE = 0,
    QFONT_CAPITALIZATION_ALLUPPERCASE = 1,
    QFONT_CAPITALIZATION_ALLLOWERCASE = 2,
    QFONT_CAPITALIZATION_SMALLCAPS = 3,
    QFONT_CAPITALIZATION_CAPITALIZE = 4
} QFont__Capitalization;

typedef enum {
    QFONT_SPACINGTYPE_PERCENTAGESPACING = 0,
    QFONT_SPACINGTYPE_ABSOLUTESPACING = 1
} QFont__SpacingType;

typedef enum {
    QFONT_RESOLVEPROPERTIES_NOPROPERTIESRESOLVED = 0,
    QFONT_RESOLVEPROPERTIES_FAMILYRESOLVED = 1,
    QFONT_RESOLVEPROPERTIES_SIZERESOLVED = 2,
    QFONT_RESOLVEPROPERTIES_STYLEHINTRESOLVED = 4,
    QFONT_RESOLVEPROPERTIES_STYLESTRATEGYRESOLVED = 8,
    QFONT_RESOLVEPROPERTIES_WEIGHTRESOLVED = 16,
    QFONT_RESOLVEPROPERTIES_STYLERESOLVED = 32,
    QFONT_RESOLVEPROPERTIES_UNDERLINERESOLVED = 64,
    QFONT_RESOLVEPROPERTIES_OVERLINERESOLVED = 128,
    QFONT_RESOLVEPROPERTIES_STRIKEOUTRESOLVED = 256,
    QFONT_RESOLVEPROPERTIES_FIXEDPITCHRESOLVED = 512,
    QFONT_RESOLVEPROPERTIES_STRETCHRESOLVED = 1024,
    QFONT_RESOLVEPROPERTIES_KERNINGRESOLVED = 2048,
    QFONT_RESOLVEPROPERTIES_CAPITALIZATIONRESOLVED = 4096,
    QFONT_RESOLVEPROPERTIES_LETTERSPACINGRESOLVED = 8192,
    QFONT_RESOLVEPROPERTIES_WORDSPACINGRESOLVED = 16384,
    QFONT_RESOLVEPROPERTIES_HINTINGPREFERENCERESOLVED = 32768,
    QFONT_RESOLVEPROPERTIES_STYLENAMERESOLVED = 65536,
    QFONT_RESOLVEPROPERTIES_FAMILIESRESOLVED = 131072,
    QFONT_RESOLVEPROPERTIES_FEATURESRESOLVED = 262144,
    QFONT_RESOLVEPROPERTIES_VARIABLEAXESRESOLVED = 524288,
    QFONT_RESOLVEPROPERTIES_ALLPROPERTIESRESOLVED = 1048575
} QFont__ResolveProperties;

#endif
