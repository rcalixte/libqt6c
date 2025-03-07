#include <string.h>
#include "libqchar.hpp"
#include "libqchar.h"

/// https://doc.qt.io/qt-6/qlatin1char.html

/// q_latin1char_new constructs a new QLatin1Char object.
///
/// ``` QLatin1Char* other ```
QLatin1Char* q_latin1char_new(void* other) {
    return QLatin1Char_new((QLatin1Char*)other);
}

/// q_latin1char_new2 constructs a new QLatin1Char object and invalidates the source QLatin1Char object.
///
/// ``` QLatin1Char* other ```
QLatin1Char* q_latin1char_new2(void* other) {
    return QLatin1Char_new2((QLatin1Char*)other);
}

/// q_latin1char_new3 constructs a new QLatin1Char object.
///
/// ``` char c ```
QLatin1Char* q_latin1char_new3(char c) {
    return QLatin1Char_new3(c);
}

/// q_latin1char_new4 constructs a new QLatin1Char object.
///
/// ``` QLatin1Char* param1 ```
QLatin1Char* q_latin1char_new4(void* param1) {
    return QLatin1Char_new4((QLatin1Char*)param1);
}

/// q_latin1char_copy_assign shallow copies `other` into `self`.
///
/// ``` QLatin1Char* self, QLatin1Char* other ```
void q_latin1char_copy_assign(void* self, void* other) {
    QLatin1Char_CopyAssign((QLatin1Char*)self, (QLatin1Char*)other);
}

/// q_latin1char_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QLatin1Char* self, QLatin1Char* other ```
void q_latin1char_move_assign(void* self, void* other) {
    QLatin1Char_MoveAssign((QLatin1Char*)self, (QLatin1Char*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1char.html#toLatin1)
///
/// ``` QLatin1Char* self ```
char q_latin1char_to_latin1(void* self) {
    return QLatin1Char_ToLatin1((QLatin1Char*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QLatin1Char* self ```
void q_latin1char_delete(void* self) {
    QLatin1Char_Delete((QLatin1Char*)(self));
}

/// https://doc.qt.io/qt-6/qchar.html

/// q_char_new constructs a new QChar object.
///
/// ``` QChar* other ```
QChar* q_char_new(void* other) {
    return QChar_new((QChar*)other);
}

/// q_char_new2 constructs a new QChar object and invalidates the source QChar object.
///
/// ``` QChar* other ```
QChar* q_char_new2(void* other) {
    return QChar_new2((QChar*)other);
}

/// q_char_new3 constructs a new QChar object.
///
///
QChar* q_char_new3() {
    return QChar_new3();
}

/// q_char_new4 constructs a new QChar object.
///
/// ``` unsigned short rc ```
QChar* q_char_new4(unsigned short rc) {
    return QChar_new4(rc);
}

/// q_char_new5 constructs a new QChar object.
///
/// ``` unsigned char c, unsigned char r ```
QChar* q_char_new5(unsigned char c, unsigned char r) {
    return QChar_new5(c, r);
}

/// q_char_new6 constructs a new QChar object.
///
/// ``` short rc ```
QChar* q_char_new6(short rc) {
    return QChar_new6(rc);
}

/// q_char_new7 constructs a new QChar object.
///
/// ``` uint32_t rc ```
QChar* q_char_new7(uint32_t rc) {
    return QChar_new7(rc);
}

/// q_char_new8 constructs a new QChar object.
///
/// ``` int rc ```
QChar* q_char_new8(int rc) {
    return QChar_new8(rc);
}

/// q_char_new9 constructs a new QChar object.
///
/// ``` enum QChar__SpecialCharacter s ```
QChar* q_char_new9(int64_t s) {
    return QChar_new9(s);
}

/// q_char_new10 constructs a new QChar object.
///
/// ``` QLatin1Char* ch ```
QChar* q_char_new10(void* ch) {
    return QChar_new10((QLatin1Char*)ch);
}

/// q_char_new11 constructs a new QChar object.
///
/// ``` char c ```
QChar* q_char_new11(char c) {
    return QChar_new11(c);
}

/// q_char_new12 constructs a new QChar object.
///
/// ``` unsigned char c ```
QChar* q_char_new12(unsigned char c) {
    return QChar_new12(c);
}

/// q_char_new13 constructs a new QChar object.
///
/// ``` QChar* param1 ```
QChar* q_char_new13(void* param1) {
    return QChar_new13((QChar*)param1);
}

/// q_char_copy_assign shallow copies `other` into `self`.
///
/// ``` QChar* self, QChar* other ```
void q_char_copy_assign(void* self, void* other) {
    QChar_CopyAssign((QChar*)self, (QChar*)other);
}

/// q_char_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QChar* self, QChar* other ```
void q_char_move_assign(void* self, void* other) {
    QChar_MoveAssign((QChar*)self, (QChar*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#category)
///
/// ``` QChar* self ```
int64_t q_char_category(void* self) {
    return QChar_Category((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#direction)
///
/// ``` QChar* self ```
int64_t q_char_direction(void* self) {
    return QChar_Direction((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#joiningType)
///
/// ``` QChar* self ```
int64_t q_char_joining_type(void* self) {
    return QChar_JoiningType((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#combiningClass)
///
/// ``` QChar* self ```
unsigned char q_char_combining_class(void* self) {
    return QChar_CombiningClass((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#mirroredChar)
///
/// ``` QChar* self ```
QChar* q_char_mirrored_char(void* self) {
    return QChar_MirroredChar((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#hasMirrored)
///
/// ``` QChar* self ```
bool q_char_has_mirrored(void* self) {
    return QChar_HasMirrored((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#decomposition)
///
/// ``` QChar* self ```
const char* q_char_decomposition(void* self) {
    libqt_string _str = QChar_Decomposition((QChar*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#decompositionTag)
///
/// ``` QChar* self ```
int64_t q_char_decomposition_tag(void* self) {
    return QChar_DecompositionTag((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#digitValue)
///
/// ``` QChar* self ```
int32_t q_char_digit_value(void* self) {
    return QChar_DigitValue((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#toLower)
///
/// ``` QChar* self ```
QChar* q_char_to_lower(void* self) {
    return QChar_ToLower((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#toUpper)
///
/// ``` QChar* self ```
QChar* q_char_to_upper(void* self) {
    return QChar_ToUpper((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#toTitleCase)
///
/// ``` QChar* self ```
QChar* q_char_to_title_case(void* self) {
    return QChar_ToTitleCase((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#toCaseFolded)
///
/// ``` QChar* self ```
QChar* q_char_to_case_folded(void* self) {
    return QChar_ToCaseFolded((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#script)
///
/// ``` QChar* self ```
int64_t q_char_script(void* self) {
    return QChar_Script((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#unicodeVersion)
///
/// ``` QChar* self ```
int64_t q_char_unicode_version(void* self) {
    return QChar_UnicodeVersion((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#toLatin1)
///
/// ``` QChar* self ```
char q_char_to_latin1(void* self) {
    return QChar_ToLatin1((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#fromLatin1)
///
/// ``` char c ```
QChar* q_char_from_latin1(char c) {
    return QChar_FromLatin1(c);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#isNull)
///
/// ``` QChar* self ```
bool q_char_is_null(void* self) {
    return QChar_IsNull((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#isPrint)
///
/// ``` QChar* self ```
bool q_char_is_print(void* self) {
    return QChar_IsPrint((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#isSpace)
///
/// ``` QChar* self ```
bool q_char_is_space(void* self) {
    return QChar_IsSpace((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#isMark)
///
/// ``` QChar* self ```
bool q_char_is_mark(void* self) {
    return QChar_IsMark((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#isPunct)
///
/// ``` QChar* self ```
bool q_char_is_punct(void* self) {
    return QChar_IsPunct((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#isSymbol)
///
/// ``` QChar* self ```
bool q_char_is_symbol(void* self) {
    return QChar_IsSymbol((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#isLetter)
///
/// ``` QChar* self ```
bool q_char_is_letter(void* self) {
    return QChar_IsLetter((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#isNumber)
///
/// ``` QChar* self ```
bool q_char_is_number(void* self) {
    return QChar_IsNumber((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#isLetterOrNumber)
///
/// ``` QChar* self ```
bool q_char_is_letter_or_number(void* self) {
    return QChar_IsLetterOrNumber((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#isDigit)
///
/// ``` QChar* self ```
bool q_char_is_digit(void* self) {
    return QChar_IsDigit((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#isLower)
///
/// ``` QChar* self ```
bool q_char_is_lower(void* self) {
    return QChar_IsLower((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#isUpper)
///
/// ``` QChar* self ```
bool q_char_is_upper(void* self) {
    return QChar_IsUpper((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#isTitleCase)
///
/// ``` QChar* self ```
bool q_char_is_title_case(void* self) {
    return QChar_IsTitleCase((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#isNonCharacter)
///
/// ``` QChar* self ```
bool q_char_is_non_character(void* self) {
    return QChar_IsNonCharacter((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#isHighSurrogate)
///
/// ``` QChar* self ```
bool q_char_is_high_surrogate(void* self) {
    return QChar_IsHighSurrogate((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#isLowSurrogate)
///
/// ``` QChar* self ```
bool q_char_is_low_surrogate(void* self) {
    return QChar_IsLowSurrogate((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#isSurrogate)
///
/// ``` QChar* self ```
bool q_char_is_surrogate(void* self) {
    return QChar_IsSurrogate((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#cell)
///
/// ``` QChar* self ```
unsigned char q_char_cell(void* self) {
    return QChar_Cell((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#row)
///
/// ``` QChar* self ```
unsigned char q_char_row(void* self) {
    return QChar_Row((QChar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#setCell)
///
/// ``` QChar* self, unsigned char acell ```
void q_char_set_cell(void* self, unsigned char acell) {
    QChar_SetCell((QChar*)self, acell);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#setRow)
///
/// ``` QChar* self, unsigned char arow ```
void q_char_set_row(void* self, unsigned char arow) {
    QChar_SetRow((QChar*)self, arow);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchar.html#currentUnicodeVersion)
///
///
int64_t q_char_current_unicode_version() {
    return QChar_CurrentUnicodeVersion();
}

/// Delete this object from C++ memory.
///
/// ``` QChar* self ```
void q_char_delete(void* self) {
    QChar_Delete((QChar*)(self));
}