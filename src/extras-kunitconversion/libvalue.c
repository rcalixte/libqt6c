#include "libunit.hpp"
#include "../libqchar.hpp"
#include "../libqvariant.hpp"
#include "libvalue.hpp"
#include "libvalue.h"

KUnitConversion__Value* k_unitconversion__value_new() {
    return KUnitConversion__Value_new();
}

KUnitConversion__Value* k_unitconversion__value_new2(double number, void* unit) {
    return KUnitConversion__Value_new2(number, (KUnitConversion__Unit*)unit);
}

KUnitConversion__Value* k_unitconversion__value_new3(double number, const char* unitString) {
    return KUnitConversion__Value_new3(number, qstring(unitString));
}

KUnitConversion__Value* k_unitconversion__value_new4(double number, int32_t unitId) {
    return KUnitConversion__Value_new4(number, unitId);
}

KUnitConversion__Value* k_unitconversion__value_new5(void* number, const char* unitString) {
    return KUnitConversion__Value_new5((QVariant*)number, qstring(unitString));
}

KUnitConversion__Value* k_unitconversion__value_new6(void* other) {
    return KUnitConversion__Value_new6((KUnitConversion__Value*)other);
}

void k_unitconversion__value_operator_assign(void* self, void* other) {
    KUnitConversion__Value_OperatorAssign((KUnitConversion__Value*)self, (KUnitConversion__Value*)other);
}

void k_unitconversion__value_swap(void* self, void* other) {
    KUnitConversion__Value_Swap((KUnitConversion__Value*)self, (KUnitConversion__Value*)other);
}

bool k_unitconversion__value_operator_equal(void* self, void* other) {
    return KUnitConversion__Value_OperatorEqual((KUnitConversion__Value*)self, (KUnitConversion__Value*)other);
}

bool k_unitconversion__value_operator_not_equal(void* self, void* other) {
    return KUnitConversion__Value_OperatorNotEqual((KUnitConversion__Value*)self, (KUnitConversion__Value*)other);
}

bool k_unitconversion__value_is_null(void* self) {
    return KUnitConversion__Value_IsNull((KUnitConversion__Value*)self);
}

bool k_unitconversion__value_is_valid(void* self) {
    return KUnitConversion__Value_IsValid((KUnitConversion__Value*)self);
}

double k_unitconversion__value_number(void* self) {
    return KUnitConversion__Value_Number((KUnitConversion__Value*)self);
}

KUnitConversion__Unit* k_unitconversion__value_unit(void* self) {
    return KUnitConversion__Value_Unit((KUnitConversion__Value*)self);
}

const char* k_unitconversion__value_to_string(void* self) {
    libqt_string _str = KUnitConversion__Value_ToString((KUnitConversion__Value*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_unitconversion__value_to_symbol_string(void* self) {
    libqt_string _str = KUnitConversion__Value_ToSymbolString((KUnitConversion__Value*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KUnitConversion__Value* k_unitconversion__value_round(void* self, uint32_t decimals) {
    return KUnitConversion__Value_Round((KUnitConversion__Value*)self, decimals);
}

KUnitConversion__Value* k_unitconversion__value_convert_to(void* self, void* unit) {
    return KUnitConversion__Value_ConvertTo((KUnitConversion__Value*)self, (KUnitConversion__Unit*)unit);
}

KUnitConversion__Value* k_unitconversion__value_convert_to2(void* self, int32_t unit) {
    return KUnitConversion__Value_ConvertTo2((KUnitConversion__Value*)self, unit);
}

KUnitConversion__Value* k_unitconversion__value_convert_to3(void* self, const char* unit) {
    return KUnitConversion__Value_ConvertTo3((KUnitConversion__Value*)self, qstring(unit));
}

const char* k_unitconversion__value_to_string1(void* self, int fieldWidth) {
    libqt_string _str = KUnitConversion__Value_ToString1((KUnitConversion__Value*)self, fieldWidth);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_unitconversion__value_to_string2(void* self, int fieldWidth, char format) {
    libqt_string _str = KUnitConversion__Value_ToString2((KUnitConversion__Value*)self, fieldWidth, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_unitconversion__value_to_string3(void* self, int fieldWidth, char format, int precision) {
    libqt_string _str = KUnitConversion__Value_ToString3((KUnitConversion__Value*)self, fieldWidth, format, precision);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_unitconversion__value_to_string4(void* self, int fieldWidth, char format, int precision, void* fillChar) {
    libqt_string _str = KUnitConversion__Value_ToString4((KUnitConversion__Value*)self, fieldWidth, format, precision, (QChar*)fillChar);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_unitconversion__value_to_symbol_string1(void* self, int fieldWidth) {
    libqt_string _str = KUnitConversion__Value_ToSymbolString1((KUnitConversion__Value*)self, fieldWidth);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_unitconversion__value_to_symbol_string2(void* self, int fieldWidth, char format) {
    libqt_string _str = KUnitConversion__Value_ToSymbolString2((KUnitConversion__Value*)self, fieldWidth, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_unitconversion__value_to_symbol_string3(void* self, int fieldWidth, char format, int precision) {
    libqt_string _str = KUnitConversion__Value_ToSymbolString3((KUnitConversion__Value*)self, fieldWidth, format, precision);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_unitconversion__value_to_symbol_string4(void* self, int fieldWidth, char format, int precision, void* fillChar) {
    libqt_string _str = KUnitConversion__Value_ToSymbolString4((KUnitConversion__Value*)self, fieldWidth, format, precision, (QChar*)fillChar);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_unitconversion__value_delete(void* self) {
    KUnitConversion__Value_Delete((KUnitConversion__Value*)(self));
}
