#include <string.h>
#include "libqchar.hpp"
#include "libqchar.h"

QLatin1Char* q_latin1char_new(void* other) {
    return QLatin1Char_new((QLatin1Char*)other);
}

QLatin1Char* q_latin1char_new2(void* other) {
    return QLatin1Char_new2((QLatin1Char*)other);
}

QLatin1Char* q_latin1char_new3(char c) {
    return QLatin1Char_new3(c);
}

QLatin1Char* q_latin1char_new4(void* param1) {
    return QLatin1Char_new4((QLatin1Char*)param1);
}

void q_latin1char_copy_assign(void* self, void* other) {
    QLatin1Char_CopyAssign((QLatin1Char*)self, (QLatin1Char*)other);
}

void q_latin1char_move_assign(void* self, void* other) {
    QLatin1Char_MoveAssign((QLatin1Char*)self, (QLatin1Char*)other);
}

char q_latin1char_to_latin1(void* self) {
    return QLatin1Char_ToLatin1((QLatin1Char*)self);
}

void q_latin1char_delete(void* self) {
    QLatin1Char_Delete((QLatin1Char*)(self));
}

QChar* q_char_new(void* other) {
    return QChar_new((QChar*)other);
}

QChar* q_char_new2(void* other) {
    return QChar_new2((QChar*)other);
}

QChar* q_char_new3() {
    return QChar_new3();
}

QChar* q_char_new4(unsigned short rc) {
    return QChar_new4(rc);
}

QChar* q_char_new5(unsigned char c, unsigned char r) {
    return QChar_new5(c, r);
}

QChar* q_char_new6(short rc) {
    return QChar_new6(rc);
}

QChar* q_char_new7(uint32_t rc) {
    return QChar_new7(rc);
}

QChar* q_char_new8(int rc) {
    return QChar_new8(rc);
}

QChar* q_char_new9(int64_t s) {
    return QChar_new9(s);
}

QChar* q_char_new10(void* ch) {
    return QChar_new10((QLatin1Char*)ch);
}

QChar* q_char_new11(char c) {
    return QChar_new11(c);
}

QChar* q_char_new12(unsigned char c) {
    return QChar_new12(c);
}

QChar* q_char_new13(void* param1) {
    return QChar_new13((QChar*)param1);
}

void q_char_copy_assign(void* self, void* other) {
    QChar_CopyAssign((QChar*)self, (QChar*)other);
}

void q_char_move_assign(void* self, void* other) {
    QChar_MoveAssign((QChar*)self, (QChar*)other);
}

int64_t q_char_category(void* self) {
    return QChar_Category((QChar*)self);
}

int64_t q_char_direction(void* self) {
    return QChar_Direction((QChar*)self);
}

int64_t q_char_joining_type(void* self) {
    return QChar_JoiningType((QChar*)self);
}

unsigned char q_char_combining_class(void* self) {
    return QChar_CombiningClass((QChar*)self);
}

QChar* q_char_mirrored_char(void* self) {
    return QChar_MirroredChar((QChar*)self);
}

bool q_char_has_mirrored(void* self) {
    return QChar_HasMirrored((QChar*)self);
}

const char* q_char_decomposition(void* self) {
    libqt_string _str = QChar_Decomposition((QChar*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_char_decomposition_tag(void* self) {
    return QChar_DecompositionTag((QChar*)self);
}

int32_t q_char_digit_value(void* self) {
    return QChar_DigitValue((QChar*)self);
}

QChar* q_char_to_lower(void* self) {
    return QChar_ToLower((QChar*)self);
}

QChar* q_char_to_upper(void* self) {
    return QChar_ToUpper((QChar*)self);
}

QChar* q_char_to_title_case(void* self) {
    return QChar_ToTitleCase((QChar*)self);
}

QChar* q_char_to_case_folded(void* self) {
    return QChar_ToCaseFolded((QChar*)self);
}

int64_t q_char_script(void* self) {
    return QChar_Script((QChar*)self);
}

int64_t q_char_unicode_version(void* self) {
    return QChar_UnicodeVersion((QChar*)self);
}

char q_char_to_latin1(void* self) {
    return QChar_ToLatin1((QChar*)self);
}

QChar* q_char_from_latin1(char c) {
    return QChar_FromLatin1(c);
}

bool q_char_is_null(void* self) {
    return QChar_IsNull((QChar*)self);
}

bool q_char_is_print(void* self) {
    return QChar_IsPrint((QChar*)self);
}

bool q_char_is_space(void* self) {
    return QChar_IsSpace((QChar*)self);
}

bool q_char_is_mark(void* self) {
    return QChar_IsMark((QChar*)self);
}

bool q_char_is_punct(void* self) {
    return QChar_IsPunct((QChar*)self);
}

bool q_char_is_symbol(void* self) {
    return QChar_IsSymbol((QChar*)self);
}

bool q_char_is_letter(void* self) {
    return QChar_IsLetter((QChar*)self);
}

bool q_char_is_number(void* self) {
    return QChar_IsNumber((QChar*)self);
}

bool q_char_is_letter_or_number(void* self) {
    return QChar_IsLetterOrNumber((QChar*)self);
}

bool q_char_is_digit(void* self) {
    return QChar_IsDigit((QChar*)self);
}

bool q_char_is_lower(void* self) {
    return QChar_IsLower((QChar*)self);
}

bool q_char_is_upper(void* self) {
    return QChar_IsUpper((QChar*)self);
}

bool q_char_is_title_case(void* self) {
    return QChar_IsTitleCase((QChar*)self);
}

bool q_char_is_non_character(void* self) {
    return QChar_IsNonCharacter((QChar*)self);
}

bool q_char_is_high_surrogate(void* self) {
    return QChar_IsHighSurrogate((QChar*)self);
}

bool q_char_is_low_surrogate(void* self) {
    return QChar_IsLowSurrogate((QChar*)self);
}

bool q_char_is_surrogate(void* self) {
    return QChar_IsSurrogate((QChar*)self);
}

unsigned char q_char_cell(void* self) {
    return QChar_Cell((QChar*)self);
}

unsigned char q_char_row(void* self) {
    return QChar_Row((QChar*)self);
}

void q_char_set_cell(void* self, unsigned char acell) {
    QChar_SetCell((QChar*)self, acell);
}

void q_char_set_row(void* self, unsigned char arow) {
    QChar_SetRow((QChar*)self, arow);
}

int64_t q_char_current_unicode_version() {
    return QChar_CurrentUnicodeVersion();
}

void q_char_delete(void* self) {
    QChar_Delete((QChar*)(self));
}
