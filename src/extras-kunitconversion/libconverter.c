#include "libunit.hpp"
#include "libunitcategory.hpp"
#include "libvalue.hpp"
#include "libconverter.hpp"
#include "libconverter.h"

KUnitConversion__Converter* k_unitconversion__converter_new() {
    return KUnitConversion__Converter_new();
}

KUnitConversion__Converter* k_unitconversion__converter_new2(void* other) {
    return KUnitConversion__Converter_new2((KUnitConversion__Converter*)other);
}

void k_unitconversion__converter_operator_assign(void* self, void* other) {
    KUnitConversion__Converter_OperatorAssign((KUnitConversion__Converter*)self, (KUnitConversion__Converter*)other);
}

KUnitConversion__Value* k_unitconversion__converter_convert(void* self, void* value) {
    return KUnitConversion__Converter_Convert((KUnitConversion__Converter*)self, (KUnitConversion__Value*)value);
}

KUnitConversion__Value* k_unitconversion__converter_convert2(void* self, void* value, int32_t toUnit) {
    return KUnitConversion__Converter_Convert2((KUnitConversion__Converter*)self, (KUnitConversion__Value*)value, toUnit);
}

KUnitConversion__Value* k_unitconversion__converter_convert3(void* self, void* value, void* toUnit) {
    return KUnitConversion__Converter_Convert3((KUnitConversion__Converter*)self, (KUnitConversion__Value*)value, (KUnitConversion__Unit*)toUnit);
}

KUnitConversion__UnitCategory* k_unitconversion__converter_category_for_unit(void* self, const char* unit) {
    return KUnitConversion__Converter_CategoryForUnit((KUnitConversion__Converter*)self, qstring(unit));
}

KUnitConversion__Unit* k_unitconversion__converter_unit(void* self, const char* unitString) {
    return KUnitConversion__Converter_Unit((KUnitConversion__Converter*)self, qstring(unitString));
}

KUnitConversion__Unit* k_unitconversion__converter_unit2(void* self, int32_t unitId) {
    return KUnitConversion__Converter_Unit2((KUnitConversion__Converter*)self, unitId);
}

KUnitConversion__UnitCategory* k_unitconversion__converter_category(void* self, const char* category) {
    return KUnitConversion__Converter_Category((KUnitConversion__Converter*)self, qstring(category));
}

KUnitConversion__UnitCategory* k_unitconversion__converter_category2(void* self, int32_t categoryId) {
    return KUnitConversion__Converter_Category2((KUnitConversion__Converter*)self, categoryId);
}

libqt_list /* of KUnitConversion__UnitCategory* */ k_unitconversion__converter_categories(void* self) {
    libqt_list _arr = KUnitConversion__Converter_Categories((KUnitConversion__Converter*)self);
    return _arr;
}

KUnitConversion__Value* k_unitconversion__converter_convert22(void* self, void* value, const char* toUnit) {
    return KUnitConversion__Converter_Convert22((KUnitConversion__Converter*)self, (KUnitConversion__Value*)value, qstring(toUnit));
}

void k_unitconversion__converter_delete(void* self) {
    KUnitConversion__Converter_Delete((KUnitConversion__Converter*)(self));
}
