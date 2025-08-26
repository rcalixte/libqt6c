#include "../libqdatetime.hpp"
#include "../libqlocale.hpp"
#include "libkformat.hpp"
#include "libkformat.h"

KFormat* k_format_new() {
    return KFormat_new();
}

KFormat* k_format_new2(void* other) {
    return KFormat_new2((KFormat*)other);
}

KFormat* k_format_new3(void* locale) {
    return KFormat_new3((QLocale*)locale);
}

void k_format_operator_assign(void* self, void* other) {
    KFormat_OperatorAssign((KFormat*)self, (KFormat*)other);
}

const char* k_format_format_byte_size(void* self, double size) {
    libqt_string _str = KFormat_FormatByteSize((KFormat*)self, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_format_format_duration(void* self, uint64_t msecs) {
    libqt_string _str = KFormat_FormatDuration((KFormat*)self, msecs);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_format_format_decimal_duration(void* self, uint64_t msecs) {
    libqt_string _str = KFormat_FormatDecimalDuration((KFormat*)self, msecs);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_format_format_spellout_duration(void* self, uint64_t msecs) {
    libqt_string _str = KFormat_FormatSpelloutDuration((KFormat*)self, msecs);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_format_format_relative_date(void* self, void* date, int32_t format) {
    libqt_string _str = KFormat_FormatRelativeDate((KFormat*)self, (QDate*)date, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_format_format_relative_date_time(void* self, void* dateTime, int32_t format) {
    libqt_string _str = KFormat_FormatRelativeDateTime((KFormat*)self, (QDateTime*)dateTime, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_format_format_value(void* self, double value, int32_t unit) {
    libqt_string _str = KFormat_FormatValue((KFormat*)self, value, unit);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_format_format_value2(void* self, double value, const char* unit) {
    libqt_string _str = KFormat_FormatValue2((KFormat*)self, value, qstring(unit));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_format_format_value3(void* self, double value, const char* unit, int precision, int32_t prefix, int32_t dialect) {
    libqt_string _str = KFormat_FormatValue3((KFormat*)self, value, qstring(unit), precision, prefix, dialect);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_format_format_distance(void* self, double distance) {
    libqt_string _str = KFormat_FormatDistance((KFormat*)self, distance);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_format_format_byte_size2(void* self, double size, int precision) {
    libqt_string _str = KFormat_FormatByteSize2((KFormat*)self, size, precision);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_format_format_byte_size3(void* self, double size, int precision, int32_t dialect) {
    libqt_string _str = KFormat_FormatByteSize3((KFormat*)self, size, precision, dialect);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_format_format_byte_size4(void* self, double size, int precision, int32_t dialect, int32_t units) {
    libqt_string _str = KFormat_FormatByteSize4((KFormat*)self, size, precision, dialect, units);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_format_format_duration2(void* self, uint64_t msecs, int64_t options) {
    libqt_string _str = KFormat_FormatDuration2((KFormat*)self, msecs, options);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_format_format_decimal_duration2(void* self, uint64_t msecs, int decimalPlaces) {
    libqt_string _str = KFormat_FormatDecimalDuration2((KFormat*)self, msecs, decimalPlaces);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_format_format_value32(void* self, double value, int32_t unit, int precision) {
    libqt_string _str = KFormat_FormatValue32((KFormat*)self, value, unit, precision);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_format_format_value4(void* self, double value, int32_t unit, int precision, int32_t prefix) {
    libqt_string _str = KFormat_FormatValue4((KFormat*)self, value, unit, precision, prefix);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_format_format_value5(void* self, double value, int32_t unit, int precision, int32_t prefix, int32_t dialect) {
    libqt_string _str = KFormat_FormatValue5((KFormat*)self, value, unit, precision, prefix, dialect);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_format_format_value33(void* self, double value, const char* unit, int precision) {
    libqt_string _str = KFormat_FormatValue33((KFormat*)self, value, qstring(unit), precision);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_format_format_value42(void* self, double value, const char* unit, int precision, int32_t prefix) {
    libqt_string _str = KFormat_FormatValue42((KFormat*)self, value, qstring(unit), precision, prefix);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_format_format_distance2(void* self, double distance, int64_t param2) {
    libqt_string _str = KFormat_FormatDistance2((KFormat*)self, distance, param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_format_delete(void* self) {
    KFormat_Delete((KFormat*)(self));
}
