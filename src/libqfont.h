#pragma once
#ifndef SRCQT6C_LIBQFONT_H
#define SRCQT6C_LIBQFONT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qfont.html

/// q_font_new constructs a new QFont object.
///
///
QFont* q_font_new();

/// q_font_new2 constructs a new QFont object.
///
/// ``` const char* family ```
QFont* q_font_new2(const char* family);

/// q_font_new3 constructs a new QFont object.
///
/// ``` const char* families[] ```
QFont* q_font_new3(const char* families[]);

/// q_font_new4 constructs a new QFont object.
///
/// ``` QFont* font, QPaintDevice* pd ```
QFont* q_font_new4(void* font, void* pd);

/// q_font_new5 constructs a new QFont object.
///
/// ``` QFont* font ```
QFont* q_font_new5(void* font);

/// q_font_new6 constructs a new QFont object.
///
/// ``` const char* family, int pointSize ```
QFont* q_font_new6(const char* family, int pointSize);

/// q_font_new7 constructs a new QFont object.
///
/// ``` const char* family, int pointSize, int weight ```
QFont* q_font_new7(const char* family, int pointSize, int weight);

/// q_font_new8 constructs a new QFont object.
///
/// ``` const char* family, int pointSize, int weight, bool italic ```
QFont* q_font_new8(const char* family, int pointSize, int weight, bool italic);

/// q_font_new9 constructs a new QFont object.
///
/// ``` const char* families[], int pointSize ```
QFont* q_font_new9(const char* families[], int pointSize);

/// q_font_new10 constructs a new QFont object.
///
/// ``` const char* families[], int pointSize, int weight ```
QFont* q_font_new10(const char* families[], int pointSize, int weight);

/// q_font_new11 constructs a new QFont object.
///
/// ``` const char* families[], int pointSize, int weight, bool italic ```
QFont* q_font_new11(const char* families[], int pointSize, int weight, bool italic);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#swap)
///
/// ``` QFont* self, QFont* other ```
void q_font_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#family)
///
/// ``` QFont* self ```
const char* q_font_family(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setFamily)
///
/// ``` QFont* self, const char* family ```
void q_font_set_family(void* self, const char* family);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#families)
///
/// ``` QFont* self ```
const char** q_font_families(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setFamilies)
///
/// ``` QFont* self, const char* families[] ```
void q_font_set_families(void* self, const char* families[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#styleName)
///
/// ``` QFont* self ```
const char* q_font_style_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStyleName)
///
/// ``` QFont* self, const char* styleName ```
void q_font_set_style_name(void* self, const char* styleName);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#pointSize)
///
/// ``` QFont* self ```
int32_t q_font_point_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setPointSize)
///
/// ``` QFont* self, int pointSize ```
void q_font_set_point_size(void* self, int pointSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#pointSizeF)
///
/// ``` QFont* self ```
double q_font_point_size_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setPointSizeF)
///
/// ``` QFont* self, double pointSizeF ```
void q_font_set_point_size_f(void* self, double pointSizeF);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#pixelSize)
///
/// ``` QFont* self ```
int32_t q_font_pixel_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setPixelSize)
///
/// ``` QFont* self, int pixelSize ```
void q_font_set_pixel_size(void* self, int pixelSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#weight)
///
/// ``` QFont* self ```
int64_t q_font_weight(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setWeight)
///
/// ``` QFont* self, enum QFont__Weight weight ```
void q_font_set_weight(void* self, int64_t weight);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#bold)
///
/// ``` QFont* self ```
bool q_font_bold(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setBold)
///
/// ``` QFont* self, bool bold ```
void q_font_set_bold(void* self, bool bold);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStyle)
///
/// ``` QFont* self, enum QFont__Style style ```
void q_font_set_style(void* self, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#style)
///
/// ``` QFont* self ```
int64_t q_font_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#italic)
///
/// ``` QFont* self ```
bool q_font_italic(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setItalic)
///
/// ``` QFont* self, bool b ```
void q_font_set_italic(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#underline)
///
/// ``` QFont* self ```
bool q_font_underline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setUnderline)
///
/// ``` QFont* self, bool underline ```
void q_font_set_underline(void* self, bool underline);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#overline)
///
/// ``` QFont* self ```
bool q_font_overline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setOverline)
///
/// ``` QFont* self, bool overline ```
void q_font_set_overline(void* self, bool overline);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#strikeOut)
///
/// ``` QFont* self ```
bool q_font_strike_out(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStrikeOut)
///
/// ``` QFont* self, bool strikeOut ```
void q_font_set_strike_out(void* self, bool strikeOut);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#fixedPitch)
///
/// ``` QFont* self ```
bool q_font_fixed_pitch(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setFixedPitch)
///
/// ``` QFont* self, bool fixedPitch ```
void q_font_set_fixed_pitch(void* self, bool fixedPitch);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#kerning)
///
/// ``` QFont* self ```
bool q_font_kerning(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setKerning)
///
/// ``` QFont* self, bool kerning ```
void q_font_set_kerning(void* self, bool kerning);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#styleHint)
///
/// ``` QFont* self ```
int64_t q_font_style_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#styleStrategy)
///
/// ``` QFont* self ```
int64_t q_font_style_strategy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStyleHint)
///
/// ``` QFont* self, enum QFont__StyleHint param1 ```
void q_font_set_style_hint(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStyleStrategy)
///
/// ``` QFont* self, enum QFont__StyleStrategy s ```
void q_font_set_style_strategy(void* self, int64_t s);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#stretch)
///
/// ``` QFont* self ```
int32_t q_font_stretch(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStretch)
///
/// ``` QFont* self, int stretch ```
void q_font_set_stretch(void* self, int stretch);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#letterSpacing)
///
/// ``` QFont* self ```
double q_font_letter_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#letterSpacingType)
///
/// ``` QFont* self ```
int64_t q_font_letter_spacing_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setLetterSpacing)
///
/// ``` QFont* self, enum QFont__SpacingType typeVal, double spacing ```
void q_font_set_letter_spacing(void* self, int64_t typeVal, double spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#wordSpacing)
///
/// ``` QFont* self ```
double q_font_word_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setWordSpacing)
///
/// ``` QFont* self, double spacing ```
void q_font_set_word_spacing(void* self, double spacing);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setCapitalization)
///
/// ``` QFont* self, enum QFont__Capitalization capitalization ```
void q_font_set_capitalization(void* self, int64_t capitalization);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#capitalization)
///
/// ``` QFont* self ```
int64_t q_font_capitalization(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setHintingPreference)
///
/// ``` QFont* self, enum QFont__HintingPreference hintingPreference ```
void q_font_set_hinting_preference(void* self, int64_t hintingPreference);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#hintingPreference)
///
/// ``` QFont* self ```
int64_t q_font_hinting_preference(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setFeature)
///
/// ``` QFont* self, QFont__Tag* tag, uint32_t value ```
void q_font_set_feature(void* self, void* tag, uint32_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#unsetFeature)
///
/// ``` QFont* self, QFont__Tag* tag ```
void q_font_unset_feature(void* self, void* tag);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#featureValue)
///
/// ``` QFont* self, QFont__Tag* tag ```
uint32_t q_font_feature_value(void* self, void* tag);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#isFeatureSet)
///
/// ``` QFont* self, QFont__Tag* tag ```
bool q_font_is_feature_set(void* self, void* tag);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#featureTags)
///
/// ``` QFont* self ```
libqt_list /* of QFont__Tag* */ q_font_feature_tags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#clearFeatures)
///
/// ``` QFont* self ```
void q_font_clear_features(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setVariableAxis)
///
/// ``` QFont* self, QFont__Tag* tag, float value ```
void q_font_set_variable_axis(void* self, void* tag, float value);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#unsetVariableAxis)
///
/// ``` QFont* self, QFont__Tag* tag ```
void q_font_unset_variable_axis(void* self, void* tag);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#isVariableAxisSet)
///
/// ``` QFont* self, QFont__Tag* tag ```
bool q_font_is_variable_axis_set(void* self, void* tag);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#variableAxisValue)
///
/// ``` QFont* self, QFont__Tag* tag ```
float q_font_variable_axis_value(void* self, void* tag);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#clearVariableAxes)
///
/// ``` QFont* self ```
void q_font_clear_variable_axes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#variableAxisTags)
///
/// ``` QFont* self ```
libqt_list /* of QFont__Tag* */ q_font_variable_axis_tags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#exactMatch)
///
/// ``` QFont* self ```
bool q_font_exact_match(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#operator-eq)
///
/// ``` QFont* self, QFont* param1 ```
void q_font_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#operator-eq-eq)
///
/// ``` QFont* self, QFont* param1 ```
bool q_font_operator_equal(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#operator-not-eq)
///
/// ``` QFont* self, QFont* param1 ```
bool q_font_operator_not_equal(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#operator-lt)
///
/// ``` QFont* self, QFont* param1 ```
bool q_font_operator_lesser(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#operator)
///
/// ``` QFont* self ```
QVariant* q_font_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#isCopyOf)
///
/// ``` QFont* self, QFont* param1 ```
bool q_font_is_copy_of(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#key)
///
/// ``` QFont* self ```
const char* q_font_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#toString)
///
/// ``` QFont* self ```
const char* q_font_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#fromString)
///
/// ``` QFont* self, const char* param1 ```
bool q_font_from_string(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#substitute)
///
/// ``` const char* param1 ```
const char* q_font_substitute(const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#substitutes)
///
/// ``` const char* param1 ```
const char** q_font_substitutes(const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#substitutions)
///
///
const char** q_font_substitutions();

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#insertSubstitution)
///
/// ``` const char* param1, const char* param2 ```
void q_font_insert_substitution(const char* param1, const char* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#insertSubstitutions)
///
/// ``` const char* param1, const char* param2[] ```
void q_font_insert_substitutions(const char* param1, const char* param2[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#removeSubstitutions)
///
/// ``` const char* param1 ```
void q_font_remove_substitutions(const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#initialize)
///
///
void q_font_initialize();

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#cleanup)
///
///
void q_font_cleanup();

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#cacheStatistics)
///
///
void q_font_cache_statistics();

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#defaultFamily)
///
/// ``` QFont* self ```
const char* q_font_default_family(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#resolve)
///
/// ``` QFont* self, QFont* param1 ```
QFont* q_font_resolve(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#resolveMask)
///
/// ``` QFont* self ```
uint32_t q_font_resolve_mask(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setResolveMask)
///
/// ``` QFont* self, uint32_t mask ```
void q_font_set_resolve_mask(void* self, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setLegacyWeight)
///
/// ``` QFont* self, int legacyWeight ```
void q_font_set_legacy_weight(void* self, int legacyWeight);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#legacyWeight)
///
/// ``` QFont* self ```
int32_t q_font_legacy_weight(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#setStyleHint)
///
/// ``` QFont* self, enum QFont__StyleHint param1, enum QFont__StyleStrategy param2 ```
void q_font_set_style_hint2(void* self, int64_t param1, int64_t param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont.html#dtor.QFont)
///
/// Delete this object from C++ memory.
///
/// ``` QFont* self ```
void q_font_delete(void* self);

/// https://doc.qt.io/qt-6/qfont-tag.html

/// q_font__tag_new constructs a new QFont::Tag object.
///
/// ``` QFont__Tag* other ```
QFont__Tag* q_font__tag_new(void* other);

/// q_font__tag_new2 constructs a new QFont::Tag object and invalidates the source QFont::Tag object.
///
/// ``` QFont__Tag* other ```
QFont__Tag* q_font__tag_new2(void* other);

/// q_font__tag_new3 constructs a new QFont::Tag object.
///
///
QFont__Tag* q_font__tag_new3();

/// q_font__tag_new4 constructs a new QFont::Tag object.
///
/// ``` QFont__Tag* param1 ```
QFont__Tag* q_font__tag_new4(void* param1);

/// q_font__tag_copy_assign shallow copies `other` into `self`.
///
/// ``` QFont__Tag* self, QFont__Tag* other ```
void q_font__tag_copy_assign(void* self, void* other);

/// q_font__tag_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QFont__Tag* self, QFont__Tag* other ```
void q_font__tag_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont__tag.html#isValid)
///
/// ``` QFont__Tag* self ```
bool q_font__tag_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont__tag.html#value)
///
/// ``` QFont__Tag* self ```
uint32_t q_font__tag_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont__tag.html#toString)
///
/// ``` QFont__Tag* self ```
char* q_font__tag_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfont::tag.html#dtor.QFont::Tag)
///
/// Delete this object from C++ memory.
///
/// ``` QFont__Tag* self ```
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
