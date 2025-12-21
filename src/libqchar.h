#pragma once
#ifndef SRC_QT6C_LIBQCHAR_H
#define SRC_QT6C_LIBQCHAR_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1char.html)

/// q_latin1char_new constructs a new QLatin1Char object.
///
/// @param other QLatin1Char*
///
QLatin1Char* q_latin1char_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1char.html)

/// q_latin1char_new2 constructs a new QLatin1Char object and invalidates the source QLatin1Char object.
///
/// @param other QLatin1Char*
///
QLatin1Char* q_latin1char_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1char.html)

/// q_latin1char_new3 constructs a new QLatin1Char object.
///
/// @param c char
///
QLatin1Char* q_latin1char_new3(char c);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1char.html)

/// q_latin1char_new4 constructs a new QLatin1Char object.
///
/// @param param1 QLatin1Char*
///
QLatin1Char* q_latin1char_new4(void* param1);

/// q_latin1char_copy_assign shallow copies `other` into `self`.
///
/// @param self QLatin1Char*
/// @param other QLatin1Char*
///
void q_latin1char_copy_assign(void* self, void* other);

/// q_latin1char_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QLatin1Char*
/// @param other QLatin1Char*
///
void q_latin1char_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1char.html#toLatin1)
///
/// @param self QLatin1Char*
///
char q_latin1char_to_latin1(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1char.html#dtor.QLatin1Char)
///
/// Delete this object from C++ memory.
///
/// @param self QLatin1Char*
///
void q_latin1char_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html)

/// q_char_new constructs a new QChar object.
///
/// @param other QChar*
///
QChar* q_char_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html)

/// q_char_new2 constructs a new QChar object and invalidates the source QChar object.
///
/// @param other QChar*
///
QChar* q_char_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html)

/// q_char_new3 constructs a new QChar object.
///
QChar* q_char_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html)

/// q_char_new4 constructs a new QChar object.
///
/// @param rc unsigned short
///
QChar* q_char_new4(unsigned short rc);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html)

/// q_char_new5 constructs a new QChar object.
///
/// @param c unsigned char
/// @param r unsigned char
///
QChar* q_char_new5(unsigned char c, unsigned char r);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html)

/// q_char_new6 constructs a new QChar object.
///
/// @param rc short
///
QChar* q_char_new6(short rc);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html)

/// q_char_new7 constructs a new QChar object.
///
/// @param rc uint32_t
///
QChar* q_char_new7(uint32_t rc);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html)

/// q_char_new8 constructs a new QChar object.
///
/// @param rc int
///
QChar* q_char_new8(int rc);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html)

/// q_char_new9 constructs a new QChar object.
///
/// @param s enum QChar__SpecialCharacter
///
QChar* q_char_new9(int32_t s);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html)

/// q_char_new10 constructs a new QChar object.
///
/// @param ch QLatin1Char*
///
QChar* q_char_new10(void* ch);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html)

/// q_char_new11 constructs a new QChar object.
///
/// @param c char
///
QChar* q_char_new11(char c);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html)

/// q_char_new12 constructs a new QChar object.
///
/// @param c unsigned char
///
QChar* q_char_new12(unsigned char c);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html)

/// q_char_new13 constructs a new QChar object.
///
/// @param param1 QChar*
///
QChar* q_char_new13(void* param1);

/// q_char_copy_assign shallow copies `other` into `self`.
///
/// @param self QChar*
/// @param other QChar*
///
void q_char_copy_assign(void* self, void* other);

/// q_char_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QChar*
/// @param other QChar*
///
void q_char_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#category)
///
/// @param self QChar*
///
/// @return enum QChar__Category
///
int32_t q_char_category(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#direction)
///
/// @param self QChar*
///
/// @return enum QChar__Direction
///
int32_t q_char_direction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#joiningType)
///
/// @param self QChar*
///
/// @return enum QChar__JoiningType
///
int32_t q_char_joining_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#combiningClass)
///
/// @param self QChar*
///
unsigned char q_char_combining_class(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#mirroredChar)
///
/// @param self QChar*
///
QChar* q_char_mirrored_char(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#hasMirrored)
///
/// @param self QChar*
///
bool q_char_has_mirrored(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#decomposition)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QChar*
///
const char* q_char_decomposition(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#decompositionTag)
///
/// @param self QChar*
///
/// @return enum QChar__Decomposition
///
int32_t q_char_decomposition_tag(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#digitValue)
///
/// @param self QChar*
///
int32_t q_char_digit_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#toLower)
///
/// @param self QChar*
///
QChar* q_char_to_lower(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#toUpper)
///
/// @param self QChar*
///
QChar* q_char_to_upper(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#toTitleCase)
///
/// @param self QChar*
///
QChar* q_char_to_title_case(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#toCaseFolded)
///
/// @param self QChar*
///
QChar* q_char_to_case_folded(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#script)
///
/// @param self QChar*
///
/// @return enum QChar__Script
///
int32_t q_char_script(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#unicodeVersion)
///
/// @param self QChar*
///
/// @return enum QChar__UnicodeVersion
///
int32_t q_char_unicode_version(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#toLatin1)
///
/// @param self QChar*
///
char q_char_to_latin1(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#fromLatin1)
///
/// @param c char
///
QChar* q_char_from_latin1(char c);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isNull)
///
/// @param self QChar*
///
bool q_char_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isPrint)
///
/// @param self QChar*
///
bool q_char_is_print(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isSpace)
///
/// @param self QChar*
///
bool q_char_is_space(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isMark)
///
/// @param self QChar*
///
bool q_char_is_mark(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isPunct)
///
/// @param self QChar*
///
bool q_char_is_punct(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isSymbol)
///
/// @param self QChar*
///
bool q_char_is_symbol(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isLetter)
///
/// @param self QChar*
///
bool q_char_is_letter(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isNumber)
///
/// @param self QChar*
///
bool q_char_is_number(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isLetterOrNumber)
///
/// @param self QChar*
///
bool q_char_is_letter_or_number(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isDigit)
///
/// @param self QChar*
///
bool q_char_is_digit(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isLower)
///
/// @param self QChar*
///
bool q_char_is_lower(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isUpper)
///
/// @param self QChar*
///
bool q_char_is_upper(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isTitleCase)
///
/// @param self QChar*
///
bool q_char_is_title_case(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isNonCharacter)
///
/// @param self QChar*
///
bool q_char_is_non_character(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isHighSurrogate)
///
/// @param self QChar*
///
bool q_char_is_high_surrogate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isLowSurrogate)
///
/// @param self QChar*
///
bool q_char_is_low_surrogate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#isSurrogate)
///
/// @param self QChar*
///
bool q_char_is_surrogate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#cell)
///
/// @param self QChar*
///
unsigned char q_char_cell(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#row)
///
/// @param self QChar*
///
unsigned char q_char_row(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#setCell)
///
/// @param self QChar*
/// @param acell unsigned char
///
void q_char_set_cell(void* self, unsigned char acell);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#setRow)
///
/// @param self QChar*
/// @param arow unsigned char
///
void q_char_set_row(void* self, unsigned char arow);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#currentUnicodeVersion)
///
/// @return enum QChar__UnicodeVersion
///
int32_t q_char_current_unicode_version();

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#dtor.QChar)
///
/// Delete this object from C++ memory.
///
/// @param self QChar*
///
void q_char_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#public-types)

typedef enum {
    QCHAR_SPECIALCHARACTER_NULL = 0,
    QCHAR_SPECIALCHARACTER_TABULATION = 9,
    QCHAR_SPECIALCHARACTER_LINEFEED = 10,
    QCHAR_SPECIALCHARACTER_FORMFEED = 12,
    QCHAR_SPECIALCHARACTER_CARRIAGERETURN = 13,
    QCHAR_SPECIALCHARACTER_SPACE = 32,
    QCHAR_SPECIALCHARACTER_NBSP = 160,
    QCHAR_SPECIALCHARACTER_SOFTHYPHEN = 173,
    QCHAR_SPECIALCHARACTER_REPLACEMENTCHARACTER = 65533,
    QCHAR_SPECIALCHARACTER_OBJECTREPLACEMENTCHARACTER = 65532,
    QCHAR_SPECIALCHARACTER_BYTEORDERMARK = 65279,
    QCHAR_SPECIALCHARACTER_BYTEORDERSWAPPED = 65534,
    QCHAR_SPECIALCHARACTER_PARAGRAPHSEPARATOR = 8233,
    QCHAR_SPECIALCHARACTER_LINESEPARATOR = 8232,
    QCHAR_SPECIALCHARACTER_VISUALTABCHARACTER = 8594,
    QCHAR_SPECIALCHARACTER_LASTVALIDCODEPOINT = 1114111
} QChar__SpecialCharacter;

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#public-types)

typedef enum {
    QCHAR_CATEGORY_MARK_NONSPACING = 0,
    QCHAR_CATEGORY_MARK_SPACINGCOMBINING = 1,
    QCHAR_CATEGORY_MARK_ENCLOSING = 2,
    QCHAR_CATEGORY_NUMBER_DECIMALDIGIT = 3,
    QCHAR_CATEGORY_NUMBER_LETTER = 4,
    QCHAR_CATEGORY_NUMBER_OTHER = 5,
    QCHAR_CATEGORY_SEPARATOR_SPACE = 6,
    QCHAR_CATEGORY_SEPARATOR_LINE = 7,
    QCHAR_CATEGORY_SEPARATOR_PARAGRAPH = 8,
    QCHAR_CATEGORY_OTHER_CONTROL = 9,
    QCHAR_CATEGORY_OTHER_FORMAT = 10,
    QCHAR_CATEGORY_OTHER_SURROGATE = 11,
    QCHAR_CATEGORY_OTHER_PRIVATEUSE = 12,
    QCHAR_CATEGORY_OTHER_NOTASSIGNED = 13,
    QCHAR_CATEGORY_LETTER_UPPERCASE = 14,
    QCHAR_CATEGORY_LETTER_LOWERCASE = 15,
    QCHAR_CATEGORY_LETTER_TITLECASE = 16,
    QCHAR_CATEGORY_LETTER_MODIFIER = 17,
    QCHAR_CATEGORY_LETTER_OTHER = 18,
    QCHAR_CATEGORY_PUNCTUATION_CONNECTOR = 19,
    QCHAR_CATEGORY_PUNCTUATION_DASH = 20,
    QCHAR_CATEGORY_PUNCTUATION_OPEN = 21,
    QCHAR_CATEGORY_PUNCTUATION_CLOSE = 22,
    QCHAR_CATEGORY_PUNCTUATION_INITIALQUOTE = 23,
    QCHAR_CATEGORY_PUNCTUATION_FINALQUOTE = 24,
    QCHAR_CATEGORY_PUNCTUATION_OTHER = 25,
    QCHAR_CATEGORY_SYMBOL_MATH = 26,
    QCHAR_CATEGORY_SYMBOL_CURRENCY = 27,
    QCHAR_CATEGORY_SYMBOL_MODIFIER = 28,
    QCHAR_CATEGORY_SYMBOL_OTHER = 29
} QChar__Category;

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#public-types)

typedef enum {
    QCHAR_SCRIPT_SCRIPT_UNKNOWN = 0,
    QCHAR_SCRIPT_SCRIPT_INHERITED = 1,
    QCHAR_SCRIPT_SCRIPT_COMMON = 2,
    QCHAR_SCRIPT_SCRIPT_LATIN = 3,
    QCHAR_SCRIPT_SCRIPT_GREEK = 4,
    QCHAR_SCRIPT_SCRIPT_CYRILLIC = 5,
    QCHAR_SCRIPT_SCRIPT_ARMENIAN = 6,
    QCHAR_SCRIPT_SCRIPT_HEBREW = 7,
    QCHAR_SCRIPT_SCRIPT_ARABIC = 8,
    QCHAR_SCRIPT_SCRIPT_SYRIAC = 9,
    QCHAR_SCRIPT_SCRIPT_THAANA = 10,
    QCHAR_SCRIPT_SCRIPT_DEVANAGARI = 11,
    QCHAR_SCRIPT_SCRIPT_BENGALI = 12,
    QCHAR_SCRIPT_SCRIPT_GURMUKHI = 13,
    QCHAR_SCRIPT_SCRIPT_GUJARATI = 14,
    QCHAR_SCRIPT_SCRIPT_ORIYA = 15,
    QCHAR_SCRIPT_SCRIPT_TAMIL = 16,
    QCHAR_SCRIPT_SCRIPT_TELUGU = 17,
    QCHAR_SCRIPT_SCRIPT_KANNADA = 18,
    QCHAR_SCRIPT_SCRIPT_MALAYALAM = 19,
    QCHAR_SCRIPT_SCRIPT_SINHALA = 20,
    QCHAR_SCRIPT_SCRIPT_THAI = 21,
    QCHAR_SCRIPT_SCRIPT_LAO = 22,
    QCHAR_SCRIPT_SCRIPT_TIBETAN = 23,
    QCHAR_SCRIPT_SCRIPT_MYANMAR = 24,
    QCHAR_SCRIPT_SCRIPT_GEORGIAN = 25,
    QCHAR_SCRIPT_SCRIPT_HANGUL = 26,
    QCHAR_SCRIPT_SCRIPT_ETHIOPIC = 27,
    QCHAR_SCRIPT_SCRIPT_CHEROKEE = 28,
    QCHAR_SCRIPT_SCRIPT_CANADIANABORIGINAL = 29,
    QCHAR_SCRIPT_SCRIPT_OGHAM = 30,
    QCHAR_SCRIPT_SCRIPT_RUNIC = 31,
    QCHAR_SCRIPT_SCRIPT_KHMER = 32,
    QCHAR_SCRIPT_SCRIPT_MONGOLIAN = 33,
    QCHAR_SCRIPT_SCRIPT_HIRAGANA = 34,
    QCHAR_SCRIPT_SCRIPT_KATAKANA = 35,
    QCHAR_SCRIPT_SCRIPT_BOPOMOFO = 36,
    QCHAR_SCRIPT_SCRIPT_HAN = 37,
    QCHAR_SCRIPT_SCRIPT_YI = 38,
    QCHAR_SCRIPT_SCRIPT_OLDITALIC = 39,
    QCHAR_SCRIPT_SCRIPT_GOTHIC = 40,
    QCHAR_SCRIPT_SCRIPT_DESERET = 41,
    QCHAR_SCRIPT_SCRIPT_TAGALOG = 42,
    QCHAR_SCRIPT_SCRIPT_HANUNOO = 43,
    QCHAR_SCRIPT_SCRIPT_BUHID = 44,
    QCHAR_SCRIPT_SCRIPT_TAGBANWA = 45,
    QCHAR_SCRIPT_SCRIPT_COPTIC = 46,
    QCHAR_SCRIPT_SCRIPT_LIMBU = 47,
    QCHAR_SCRIPT_SCRIPT_TAILE = 48,
    QCHAR_SCRIPT_SCRIPT_LINEARB = 49,
    QCHAR_SCRIPT_SCRIPT_UGARITIC = 50,
    QCHAR_SCRIPT_SCRIPT_SHAVIAN = 51,
    QCHAR_SCRIPT_SCRIPT_OSMANYA = 52,
    QCHAR_SCRIPT_SCRIPT_CYPRIOT = 53,
    QCHAR_SCRIPT_SCRIPT_BRAILLE = 54,
    QCHAR_SCRIPT_SCRIPT_BUGINESE = 55,
    QCHAR_SCRIPT_SCRIPT_NEWTAILUE = 56,
    QCHAR_SCRIPT_SCRIPT_GLAGOLITIC = 57,
    QCHAR_SCRIPT_SCRIPT_TIFINAGH = 58,
    QCHAR_SCRIPT_SCRIPT_SYLOTINAGRI = 59,
    QCHAR_SCRIPT_SCRIPT_OLDPERSIAN = 60,
    QCHAR_SCRIPT_SCRIPT_KHAROSHTHI = 61,
    QCHAR_SCRIPT_SCRIPT_BALINESE = 62,
    QCHAR_SCRIPT_SCRIPT_CUNEIFORM = 63,
    QCHAR_SCRIPT_SCRIPT_PHOENICIAN = 64,
    QCHAR_SCRIPT_SCRIPT_PHAGSPA = 65,
    QCHAR_SCRIPT_SCRIPT_NKO = 66,
    QCHAR_SCRIPT_SCRIPT_SUNDANESE = 67,
    QCHAR_SCRIPT_SCRIPT_LEPCHA = 68,
    QCHAR_SCRIPT_SCRIPT_OLCHIKI = 69,
    QCHAR_SCRIPT_SCRIPT_VAI = 70,
    QCHAR_SCRIPT_SCRIPT_SAURASHTRA = 71,
    QCHAR_SCRIPT_SCRIPT_KAYAHLI = 72,
    QCHAR_SCRIPT_SCRIPT_REJANG = 73,
    QCHAR_SCRIPT_SCRIPT_LYCIAN = 74,
    QCHAR_SCRIPT_SCRIPT_CARIAN = 75,
    QCHAR_SCRIPT_SCRIPT_LYDIAN = 76,
    QCHAR_SCRIPT_SCRIPT_CHAM = 77,
    QCHAR_SCRIPT_SCRIPT_TAITHAM = 78,
    QCHAR_SCRIPT_SCRIPT_TAIVIET = 79,
    QCHAR_SCRIPT_SCRIPT_AVESTAN = 80,
    QCHAR_SCRIPT_SCRIPT_EGYPTIANHIEROGLYPHS = 81,
    QCHAR_SCRIPT_SCRIPT_SAMARITAN = 82,
    QCHAR_SCRIPT_SCRIPT_LISU = 83,
    QCHAR_SCRIPT_SCRIPT_BAMUM = 84,
    QCHAR_SCRIPT_SCRIPT_JAVANESE = 85,
    QCHAR_SCRIPT_SCRIPT_MEETEIMAYEK = 86,
    QCHAR_SCRIPT_SCRIPT_IMPERIALARAMAIC = 87,
    QCHAR_SCRIPT_SCRIPT_OLDSOUTHARABIAN = 88,
    QCHAR_SCRIPT_SCRIPT_INSCRIPTIONALPARTHIAN = 89,
    QCHAR_SCRIPT_SCRIPT_INSCRIPTIONALPAHLAVI = 90,
    QCHAR_SCRIPT_SCRIPT_OLDTURKIC = 91,
    QCHAR_SCRIPT_SCRIPT_KAITHI = 92,
    QCHAR_SCRIPT_SCRIPT_BATAK = 93,
    QCHAR_SCRIPT_SCRIPT_BRAHMI = 94,
    QCHAR_SCRIPT_SCRIPT_MANDAIC = 95,
    QCHAR_SCRIPT_SCRIPT_CHAKMA = 96,
    QCHAR_SCRIPT_SCRIPT_MEROITICCURSIVE = 97,
    QCHAR_SCRIPT_SCRIPT_MEROITICHIEROGLYPHS = 98,
    QCHAR_SCRIPT_SCRIPT_MIAO = 99,
    QCHAR_SCRIPT_SCRIPT_SHARADA = 100,
    QCHAR_SCRIPT_SCRIPT_SORASOMPENG = 101,
    QCHAR_SCRIPT_SCRIPT_TAKRI = 102,
    QCHAR_SCRIPT_SCRIPT_CAUCASIANALBANIAN = 103,
    QCHAR_SCRIPT_SCRIPT_BASSAVAH = 104,
    QCHAR_SCRIPT_SCRIPT_DUPLOYAN = 105,
    QCHAR_SCRIPT_SCRIPT_ELBASAN = 106,
    QCHAR_SCRIPT_SCRIPT_GRANTHA = 107,
    QCHAR_SCRIPT_SCRIPT_PAHAWHHMONG = 108,
    QCHAR_SCRIPT_SCRIPT_KHOJKI = 109,
    QCHAR_SCRIPT_SCRIPT_LINEARA = 110,
    QCHAR_SCRIPT_SCRIPT_MAHAJANI = 111,
    QCHAR_SCRIPT_SCRIPT_MANICHAEAN = 112,
    QCHAR_SCRIPT_SCRIPT_MENDEKIKAKUI = 113,
    QCHAR_SCRIPT_SCRIPT_MODI = 114,
    QCHAR_SCRIPT_SCRIPT_MRO = 115,
    QCHAR_SCRIPT_SCRIPT_OLDNORTHARABIAN = 116,
    QCHAR_SCRIPT_SCRIPT_NABATAEAN = 117,
    QCHAR_SCRIPT_SCRIPT_PALMYRENE = 118,
    QCHAR_SCRIPT_SCRIPT_PAUCINHAU = 119,
    QCHAR_SCRIPT_SCRIPT_OLDPERMIC = 120,
    QCHAR_SCRIPT_SCRIPT_PSALTERPAHLAVI = 121,
    QCHAR_SCRIPT_SCRIPT_SIDDHAM = 122,
    QCHAR_SCRIPT_SCRIPT_KHUDAWADI = 123,
    QCHAR_SCRIPT_SCRIPT_TIRHUTA = 124,
    QCHAR_SCRIPT_SCRIPT_WARANGCITI = 125,
    QCHAR_SCRIPT_SCRIPT_AHOM = 126,
    QCHAR_SCRIPT_SCRIPT_ANATOLIANHIEROGLYPHS = 127,
    QCHAR_SCRIPT_SCRIPT_HATRAN = 128,
    QCHAR_SCRIPT_SCRIPT_MULTANI = 129,
    QCHAR_SCRIPT_SCRIPT_OLDHUNGARIAN = 130,
    QCHAR_SCRIPT_SCRIPT_SIGNWRITING = 131,
    QCHAR_SCRIPT_SCRIPT_ADLAM = 132,
    QCHAR_SCRIPT_SCRIPT_BHAIKSUKI = 133,
    QCHAR_SCRIPT_SCRIPT_MARCHEN = 134,
    QCHAR_SCRIPT_SCRIPT_NEWA = 135,
    QCHAR_SCRIPT_SCRIPT_OSAGE = 136,
    QCHAR_SCRIPT_SCRIPT_TANGUT = 137,
    QCHAR_SCRIPT_SCRIPT_MASARAMGONDI = 138,
    QCHAR_SCRIPT_SCRIPT_NUSHU = 139,
    QCHAR_SCRIPT_SCRIPT_SOYOMBO = 140,
    QCHAR_SCRIPT_SCRIPT_ZANABAZARSQUARE = 141,
    QCHAR_SCRIPT_SCRIPT_DOGRA = 142,
    QCHAR_SCRIPT_SCRIPT_GUNJALAGONDI = 143,
    QCHAR_SCRIPT_SCRIPT_HANIFIROHINGYA = 144,
    QCHAR_SCRIPT_SCRIPT_MAKASAR = 145,
    QCHAR_SCRIPT_SCRIPT_MEDEFAIDRIN = 146,
    QCHAR_SCRIPT_SCRIPT_OLDSOGDIAN = 147,
    QCHAR_SCRIPT_SCRIPT_SOGDIAN = 148,
    QCHAR_SCRIPT_SCRIPT_ELYMAIC = 149,
    QCHAR_SCRIPT_SCRIPT_NANDINAGARI = 150,
    QCHAR_SCRIPT_SCRIPT_NYIAKENGPUACHUEHMONG = 151,
    QCHAR_SCRIPT_SCRIPT_WANCHO = 152,
    QCHAR_SCRIPT_SCRIPT_CHORASMIAN = 153,
    QCHAR_SCRIPT_SCRIPT_DIVESAKURU = 154,
    QCHAR_SCRIPT_SCRIPT_KHITANSMALLSCRIPT = 155,
    QCHAR_SCRIPT_SCRIPT_YEZIDI = 156,
    QCHAR_SCRIPT_SCRIPT_CYPROMINOAN = 157,
    QCHAR_SCRIPT_SCRIPT_OLDUYGHUR = 158,
    QCHAR_SCRIPT_SCRIPT_TANGSA = 159,
    QCHAR_SCRIPT_SCRIPT_TOTO = 160,
    QCHAR_SCRIPT_SCRIPT_VITHKUQI = 161,
    QCHAR_SCRIPT_SCRIPT_KAWI = 162,
    QCHAR_SCRIPT_SCRIPT_NAGMUNDARI = 163,
    QCHAR_SCRIPT_SCRIPTCOUNT = 164
} QChar__Script;

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#public-types)

typedef enum {
    QCHAR_DIRECTION_DIRL = 0,
    QCHAR_DIRECTION_DIRR = 1,
    QCHAR_DIRECTION_DIREN = 2,
    QCHAR_DIRECTION_DIRES = 3,
    QCHAR_DIRECTION_DIRET = 4,
    QCHAR_DIRECTION_DIRAN = 5,
    QCHAR_DIRECTION_DIRCS = 6,
    QCHAR_DIRECTION_DIRB = 7,
    QCHAR_DIRECTION_DIRS = 8,
    QCHAR_DIRECTION_DIRWS = 9,
    QCHAR_DIRECTION_DIRON = 10,
    QCHAR_DIRECTION_DIRLRE = 11,
    QCHAR_DIRECTION_DIRLRO = 12,
    QCHAR_DIRECTION_DIRAL = 13,
    QCHAR_DIRECTION_DIRRLE = 14,
    QCHAR_DIRECTION_DIRRLO = 15,
    QCHAR_DIRECTION_DIRPDF = 16,
    QCHAR_DIRECTION_DIRNSM = 17,
    QCHAR_DIRECTION_DIRBN = 18,
    QCHAR_DIRECTION_DIRLRI = 19,
    QCHAR_DIRECTION_DIRRLI = 20,
    QCHAR_DIRECTION_DIRFSI = 21,
    QCHAR_DIRECTION_DIRPDI = 22
} QChar__Direction;

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#public-types)

typedef enum {
    QCHAR_DECOMPOSITION_NODECOMPOSITION = 0,
    QCHAR_DECOMPOSITION_CANONICAL = 1,
    QCHAR_DECOMPOSITION_FONT = 2,
    QCHAR_DECOMPOSITION_NOBREAK = 3,
    QCHAR_DECOMPOSITION_INITIAL = 4,
    QCHAR_DECOMPOSITION_MEDIAL = 5,
    QCHAR_DECOMPOSITION_FINAL = 6,
    QCHAR_DECOMPOSITION_ISOLATED = 7,
    QCHAR_DECOMPOSITION_CIRCLE = 8,
    QCHAR_DECOMPOSITION_SUPER = 9,
    QCHAR_DECOMPOSITION_SUB = 10,
    QCHAR_DECOMPOSITION_VERTICAL = 11,
    QCHAR_DECOMPOSITION_WIDE = 12,
    QCHAR_DECOMPOSITION_NARROW = 13,
    QCHAR_DECOMPOSITION_SMALL = 14,
    QCHAR_DECOMPOSITION_SQUARE = 15,
    QCHAR_DECOMPOSITION_COMPAT = 16,
    QCHAR_DECOMPOSITION_FRACTION = 17
} QChar__Decomposition;

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#public-types)

typedef enum {
    QCHAR_JOININGTYPE_JOINING_NONE = 0,
    QCHAR_JOININGTYPE_JOINING_CAUSING = 1,
    QCHAR_JOININGTYPE_JOINING_DUAL = 2,
    QCHAR_JOININGTYPE_JOINING_RIGHT = 3,
    QCHAR_JOININGTYPE_JOINING_LEFT = 4,
    QCHAR_JOININGTYPE_JOINING_TRANSPARENT = 5
} QChar__JoiningType;

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#public-types)

typedef enum {
    QCHAR_COMBININGCLASS_COMBINING_BELOWLEFTATTACHED = 200,
    QCHAR_COMBININGCLASS_COMBINING_BELOWATTACHED = 202,
    QCHAR_COMBININGCLASS_COMBINING_BELOWRIGHTATTACHED = 204,
    QCHAR_COMBININGCLASS_COMBINING_LEFTATTACHED = 208,
    QCHAR_COMBININGCLASS_COMBINING_RIGHTATTACHED = 210,
    QCHAR_COMBININGCLASS_COMBINING_ABOVELEFTATTACHED = 212,
    QCHAR_COMBININGCLASS_COMBINING_ABOVEATTACHED = 214,
    QCHAR_COMBININGCLASS_COMBINING_ABOVERIGHTATTACHED = 216,
    QCHAR_COMBININGCLASS_COMBINING_BELOWLEFT = 218,
    QCHAR_COMBININGCLASS_COMBINING_BELOW = 220,
    QCHAR_COMBININGCLASS_COMBINING_BELOWRIGHT = 222,
    QCHAR_COMBININGCLASS_COMBINING_LEFT = 224,
    QCHAR_COMBININGCLASS_COMBINING_RIGHT = 226,
    QCHAR_COMBININGCLASS_COMBINING_ABOVELEFT = 228,
    QCHAR_COMBININGCLASS_COMBINING_ABOVE = 230,
    QCHAR_COMBININGCLASS_COMBINING_ABOVERIGHT = 232,
    QCHAR_COMBININGCLASS_COMBINING_DOUBLEBELOW = 233,
    QCHAR_COMBININGCLASS_COMBINING_DOUBLEABOVE = 234,
    QCHAR_COMBININGCLASS_COMBINING_IOTASUBSCRIPT = 240
} QChar__CombiningClass;

/// [Upstream resources](https://doc.qt.io/qt-6/qchar.html#public-types)

typedef enum {
    QCHAR_UNICODEVERSION_UNICODE_UNASSIGNED = 0,
    QCHAR_UNICODEVERSION_UNICODE_1_1 = 1,
    QCHAR_UNICODEVERSION_UNICODE_2_0 = 2,
    QCHAR_UNICODEVERSION_UNICODE_2_1_2 = 3,
    QCHAR_UNICODEVERSION_UNICODE_3_0 = 4,
    QCHAR_UNICODEVERSION_UNICODE_3_1 = 5,
    QCHAR_UNICODEVERSION_UNICODE_3_2 = 6,
    QCHAR_UNICODEVERSION_UNICODE_4_0 = 7,
    QCHAR_UNICODEVERSION_UNICODE_4_1 = 8,
    QCHAR_UNICODEVERSION_UNICODE_5_0 = 9,
    QCHAR_UNICODEVERSION_UNICODE_5_1 = 10,
    QCHAR_UNICODEVERSION_UNICODE_5_2 = 11,
    QCHAR_UNICODEVERSION_UNICODE_6_0 = 12,
    QCHAR_UNICODEVERSION_UNICODE_6_1 = 13,
    QCHAR_UNICODEVERSION_UNICODE_6_2 = 14,
    QCHAR_UNICODEVERSION_UNICODE_6_3 = 15,
    QCHAR_UNICODEVERSION_UNICODE_7_0 = 16,
    QCHAR_UNICODEVERSION_UNICODE_8_0 = 17,
    QCHAR_UNICODEVERSION_UNICODE_9_0 = 18,
    QCHAR_UNICODEVERSION_UNICODE_10_0 = 19,
    QCHAR_UNICODEVERSION_UNICODE_11_0 = 20,
    QCHAR_UNICODEVERSION_UNICODE_12_0 = 21,
    QCHAR_UNICODEVERSION_UNICODE_12_1 = 22,
    QCHAR_UNICODEVERSION_UNICODE_13_0 = 23,
    QCHAR_UNICODEVERSION_UNICODE_14_0 = 24,
    QCHAR_UNICODEVERSION_UNICODE_15_0 = 25,
    QCHAR_UNICODEVERSION_UNICODE_15_1 = 26
} QChar__UnicodeVersion;

#endif
