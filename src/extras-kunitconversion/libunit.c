#include "libunitcategory.hpp"
#include "../libqchar.hpp"
#include "libunit.hpp"
#include "libunit.h"

KUnitConversion__Unit* k_unitconversion__unit_new() {
    return KUnitConversion__Unit_new();
}

KUnitConversion__Unit* k_unitconversion__unit_new2(void* other) {
    return KUnitConversion__Unit_new2((KUnitConversion__Unit*)other);
}

void k_unitconversion__unit_operator_assign(void* self, void* other) {
    KUnitConversion__Unit_OperatorAssign((KUnitConversion__Unit*)self, (KUnitConversion__Unit*)other);
}

bool k_unitconversion__unit_operator_equal(void* self, void* other) {
    return KUnitConversion__Unit_OperatorEqual((KUnitConversion__Unit*)self, (KUnitConversion__Unit*)other);
}

bool k_unitconversion__unit_operator_not_equal(void* self, void* other) {
    return KUnitConversion__Unit_OperatorNotEqual((KUnitConversion__Unit*)self, (KUnitConversion__Unit*)other);
}

bool k_unitconversion__unit_is_null(void* self) {
    return KUnitConversion__Unit_IsNull((KUnitConversion__Unit*)self);
}

bool k_unitconversion__unit_is_valid(void* self) {
    return KUnitConversion__Unit_IsValid((KUnitConversion__Unit*)self);
}

int32_t k_unitconversion__unit_id(void* self) {
    return KUnitConversion__Unit_Id((KUnitConversion__Unit*)self);
}

int32_t k_unitconversion__unit_category_id(void* self) {
    return KUnitConversion__Unit_CategoryId((KUnitConversion__Unit*)self);
}

KUnitConversion__UnitCategory* k_unitconversion__unit_category(void* self) {
    return KUnitConversion__Unit_Category((KUnitConversion__Unit*)self);
}

const char* k_unitconversion__unit_description(void* self) {
    libqt_string _str = KUnitConversion__Unit_Description((KUnitConversion__Unit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_unitconversion__unit_symbol(void* self) {
    libqt_string _str = KUnitConversion__Unit_Symbol((KUnitConversion__Unit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_unitconversion__unit_to_string(void* self, double value) {
    libqt_string _str = KUnitConversion__Unit_ToString((KUnitConversion__Unit*)self, value);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_unitconversion__unit_to_symbol_string(void* self, double value) {
    libqt_string _str = KUnitConversion__Unit_ToSymbolString((KUnitConversion__Unit*)self, value);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_unitconversion__unit_to_string2(void* self, double value, int fieldWidth) {
    libqt_string _str = KUnitConversion__Unit_ToString2((KUnitConversion__Unit*)self, value, fieldWidth);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_unitconversion__unit_to_string3(void* self, double value, int fieldWidth, char format) {
    libqt_string _str = KUnitConversion__Unit_ToString3((KUnitConversion__Unit*)self, value, fieldWidth, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_unitconversion__unit_to_string4(void* self, double value, int fieldWidth, char format, int precision) {
    libqt_string _str = KUnitConversion__Unit_ToString4((KUnitConversion__Unit*)self, value, fieldWidth, format, precision);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_unitconversion__unit_to_string5(void* self, double value, int fieldWidth, char format, int precision, void* fillChar) {
    libqt_string _str = KUnitConversion__Unit_ToString5((KUnitConversion__Unit*)self, value, fieldWidth, format, precision, (QChar*)fillChar);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_unitconversion__unit_to_symbol_string2(void* self, double value, int fieldWidth) {
    libqt_string _str = KUnitConversion__Unit_ToSymbolString2((KUnitConversion__Unit*)self, value, fieldWidth);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_unitconversion__unit_to_symbol_string3(void* self, double value, int fieldWidth, char format) {
    libqt_string _str = KUnitConversion__Unit_ToSymbolString3((KUnitConversion__Unit*)self, value, fieldWidth, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_unitconversion__unit_to_symbol_string4(void* self, double value, int fieldWidth, char format, int precision) {
    libqt_string _str = KUnitConversion__Unit_ToSymbolString4((KUnitConversion__Unit*)self, value, fieldWidth, format, precision);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_unitconversion__unit_to_symbol_string5(void* self, double value, int fieldWidth, char format, int precision, void* fillChar) {
    libqt_string _str = KUnitConversion__Unit_ToSymbolString5((KUnitConversion__Unit*)self, value, fieldWidth, format, precision, (QChar*)fillChar);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_unitconversion__unit_delete(void* self) {
    KUnitConversion__Unit_Delete((KUnitConversion__Unit*)(self));
}
