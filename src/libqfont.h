#pragma once
#ifndef SRCQT6C_LIBQFONT_H
#define SRCQT6C_LIBQFONT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqpaintdevice.h"
#include <string.h>
#include "libqvariant.h"

QFont* q_font_new();
QFont* q_font_new2(const char* family);
QFont* q_font_new3(const char* families[]);
QFont* q_font_new4(void* font, void* pd);
QFont* q_font_new5(void* font);
QFont* q_font_new6(const char* family, int pointSize);
QFont* q_font_new7(const char* family, int pointSize, int weight);
QFont* q_font_new8(const char* family, int pointSize, int weight, bool italic);
QFont* q_font_new9(const char* families[], int pointSize);
QFont* q_font_new10(const char* families[], int pointSize, int weight);
QFont* q_font_new11(const char* families[], int pointSize, int weight, bool italic);
void q_font_swap(void* self, void* other);
const char* q_font_family(void* self);
void q_font_set_family(void* self, const char* family);
const char** q_font_families(void* self);
void q_font_set_families(void* self, const char* families[]);
const char* q_font_style_name(void* self);
void q_font_set_style_name(void* self, const char* styleName);
int32_t q_font_point_size(void* self);
void q_font_set_point_size(void* self, int pointSize);
double q_font_point_size_f(void* self);
void q_font_set_point_size_f(void* self, double pointSizeF);
int32_t q_font_pixel_size(void* self);
void q_font_set_pixel_size(void* self, int pixelSize);
int64_t q_font_weight(void* self);
void q_font_set_weight(void* self, int64_t weight);
bool q_font_bold(void* self);
void q_font_set_bold(void* self, bool bold);
void q_font_set_style(void* self, int64_t style);
int64_t q_font_style(void* self);
bool q_font_italic(void* self);
void q_font_set_italic(void* self, bool b);
bool q_font_underline(void* self);
void q_font_set_underline(void* self, bool underline);
bool q_font_overline(void* self);
void q_font_set_overline(void* self, bool overline);
bool q_font_strike_out(void* self);
void q_font_set_strike_out(void* self, bool strikeOut);
bool q_font_fixed_pitch(void* self);
void q_font_set_fixed_pitch(void* self, bool fixedPitch);
bool q_font_kerning(void* self);
void q_font_set_kerning(void* self, bool kerning);
int64_t q_font_style_hint(void* self);
int64_t q_font_style_strategy(void* self);
void q_font_set_style_hint(void* self, int64_t param1);
void q_font_set_style_strategy(void* self, int64_t s);
int32_t q_font_stretch(void* self);
void q_font_set_stretch(void* self, int stretch);
double q_font_letter_spacing(void* self);
int64_t q_font_letter_spacing_type(void* self);
void q_font_set_letter_spacing(void* self, int64_t typeVal, double spacing);
double q_font_word_spacing(void* self);
void q_font_set_word_spacing(void* self, double spacing);
void q_font_set_capitalization(void* self, int64_t capitalization);
int64_t q_font_capitalization(void* self);
void q_font_set_hinting_preference(void* self, int64_t hintingPreference);
int64_t q_font_hinting_preference(void* self);
bool q_font_exact_match(void* self);
void q_font_operator_assign(void* self, void* param1);
bool q_font_operator_equal(void* self, void* param1);
bool q_font_operator_not_equal(void* self, void* param1);
bool q_font_operator_lesser(void* self, void* param1);
QVariant* q_font_to_q_variant(void* self);
bool q_font_is_copy_of(void* self, void* param1);
const char* q_font_key(void* self);
const char* q_font_to_string(void* self);
bool q_font_from_string(void* self, const char* param1);
const char* q_font_substitute(const char* param1);
const char** q_font_substitutes(const char* param1);
const char** q_font_substitutions();
void q_font_insert_substitution(const char* param1, const char* param2);
void q_font_insert_substitutions(const char* param1, const char* param2[]);
void q_font_remove_substitutions(const char* param1);
void q_font_initialize();
void q_font_cleanup();
void q_font_cache_statistics();
const char* q_font_default_family(void* self);
QFont* q_font_resolve(void* self, void* param1);
uint32_t q_font_resolve_mask(void* self);
void q_font_set_resolve_mask(void* self, uint32_t mask);
void q_font_set_legacy_weight(void* self, int legacyWeight);
int32_t q_font_legacy_weight(void* self);
void q_font_set_style_hint2(void* self, int64_t param1, int64_t param2);
void q_font_delete(void* self);

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
    QFONT_RESOLVEPROPERTIES_ALLPROPERTIESRESOLVED = 262143
} QFont__ResolveProperties;

#endif
