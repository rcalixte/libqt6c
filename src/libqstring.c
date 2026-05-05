#include "libqbytearrayview.hpp"
#include "libqchar.hpp"
#include "libqregularexpression.hpp"
#include "libqstring.hpp"
#include "libqstring.h"

intptr_t q_string_max_size() {
    return QString_MaxSize();
}

const char* q_string_from_latin1(char* ba) {
    libqt_string _str = QString_FromLatin1(qstring(ba));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_string_from_latin12(const char* str, intptr_t size) {
    libqt_string _str = QString_FromLatin12(str, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_string_from_utf8(char* utf8) {
    libqt_string _str = QString_FromUtf8(qstring(utf8));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_string_from_utf82(const char* utf8, intptr_t size) {
    libqt_string _str = QString_FromUtf82(utf8, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_string_from_local8_bit(char* ba) {
    libqt_string _str = QString_FromLocal8Bit(qstring(ba));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_string_from_local8_bit2(const char* str, intptr_t size) {
    libqt_string _str = QString_FromLocal8Bit2(str, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_string_from_raw_data(void* param1, intptr_t size) {
    libqt_string _str = QString_FromRawData((QChar*)param1, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_string_from_utf162(uint16_t* str) {
    libqt_string _str = QString_FromUtf162(str);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_string_from_ucs42(uint32_t* str) {
    libqt_string _str = QString_FromUcs42(str);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_string_compare5(const char* s1, const char* s2) {
    return QString_Compare5(qstring(s1), qstring(s2));
}

int32_t q_string_compare6(const char* s1, const char* s2) {
    return QString_Compare6(qstring(s1), qstring(s2));
}

int32_t q_string_compare7(const char* s1, const char* s2) {
    return QString_Compare7(qstring(s1), qstring(s2));
}

int32_t q_string_locale_aware_compare3(const char* s1, const char* s2) {
    return QString_LocaleAwareCompare3(qstring(s1), qstring(s2));
}

const char* q_string_number(int param1) {
    libqt_string _str = QString_Number(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_string_number2(uint32_t param1) {
    libqt_string _str = QString_Number2(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_string_number3(long param1) {
    libqt_string _str = QString_Number3(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_string_number4(uintptr_t param1) {
    libqt_string _str = QString_Number4(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_string_number5(long long param1) {
    libqt_string _str = QString_Number5(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_string_number6(uintptr_t param1) {
    libqt_string _str = QString_Number6(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_string_number7(double param1) {
    libqt_string _str = QString_Number7(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_string_from_utf1623(uint16_t* str, intptr_t size) {
    libqt_string _str = QString_FromUtf1623(str, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_string_from_ucs423(uint32_t* str, intptr_t size) {
    libqt_string _str = QString_FromUcs423(str, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_string_compare32(const char* s1, const char* s2, int32_t cs) {
    return QString_Compare32(qstring(s1), qstring(s2), cs);
}

int32_t q_string_compare33(const char* s1, const char* s2, int32_t cs) {
    return QString_Compare33(qstring(s1), qstring(s2), cs);
}

int32_t q_string_compare34(const char* s1, const char* s2, int32_t cs) {
    return QString_Compare34(qstring(s1), qstring(s2), cs);
}

const char* q_string_number22(int param1, int base) {
    libqt_string _str = QString_Number22(param1, base);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_string_number23(uint32_t param1, int base) {
    libqt_string _str = QString_Number23(param1, base);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_string_number24(long param1, int base) {
    libqt_string _str = QString_Number24(param1, base);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_string_number25(uintptr_t param1, int base) {
    libqt_string _str = QString_Number25(param1, base);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_string_number26(long long param1, int base) {
    libqt_string _str = QString_Number26(param1, base);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_string_number27(uintptr_t param1, int base) {
    libqt_string _str = QString_Number27(param1, base);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_string_number28(double param1, char format) {
    libqt_string _str = QString_Number28(param1, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_string_number32(double param1, char format, int precision) {
    libqt_string _str = QString_Number32(param1, format, precision);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}
