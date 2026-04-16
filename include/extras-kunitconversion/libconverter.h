#pragma once
#ifndef SRC_EXTRAS_KUNITCONVERSION_QT6C_LIBCONVERTER_H
#define SRC_EXTRAS_KUNITCONVERSION_QT6C_LIBCONVERTER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kunitconversion-converter.html)

/// k_unitconversion__converter_new constructs a new KUnitConversion::Converter object.
///
KUnitConversion__Converter* k_unitconversion__converter_new();

/// [Upstream resources](https://api.kde.org/kunitconversion-converter.html)

/// k_unitconversion__converter_new2 constructs a new KUnitConversion::Converter object.
///
/// @param other KUnitConversion__Converter*
///
KUnitConversion__Converter* k_unitconversion__converter_new2(void* other);

/// [Upstream resources](https://api.kde.org/kunitconversion-converter.html#operator-eq)
///
/// @param self KUnitConversion__Converter*
/// @param other KUnitConversion__Converter*
///
void k_unitconversion__converter_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kunitconversion-converter.html#convert)
///
/// @param self KUnitConversion__Converter*
/// @param value KUnitConversion__Value*
///
KUnitConversion__Value* k_unitconversion__converter_convert(void* self, void* value);

/// [Upstream resources](https://api.kde.org/kunitconversion-converter.html#convert)
///
/// @param self KUnitConversion__Converter*
/// @param value KUnitConversion__Value*
/// @param toUnit enum KUnitConversion__UnitId
///
KUnitConversion__Value* k_unitconversion__converter_convert2(void* self, void* value, int32_t toUnit);

/// [Upstream resources](https://api.kde.org/kunitconversion-converter.html#convert)
///
/// @param self KUnitConversion__Converter*
/// @param value KUnitConversion__Value*
/// @param toUnit KUnitConversion__Unit*
///
KUnitConversion__Value* k_unitconversion__converter_convert3(void* self, void* value, void* toUnit);

/// [Upstream resources](https://api.kde.org/kunitconversion-converter.html#categoryForUnit)
///
/// @param self KUnitConversion__Converter*
/// @param unit const char*
///
KUnitConversion__UnitCategory* k_unitconversion__converter_category_for_unit(void* self, const char* unit);

/// [Upstream resources](https://api.kde.org/kunitconversion-converter.html#unit)
///
/// @param self KUnitConversion__Converter*
/// @param unitString const char*
///
KUnitConversion__Unit* k_unitconversion__converter_unit(void* self, const char* unitString);

/// [Upstream resources](https://api.kde.org/kunitconversion-converter.html#unit)
///
/// @param self KUnitConversion__Converter*
/// @param unitId enum KUnitConversion__UnitId
///
KUnitConversion__Unit* k_unitconversion__converter_unit2(void* self, int32_t unitId);

/// [Upstream resources](https://api.kde.org/kunitconversion-converter.html#category)
///
/// @param self KUnitConversion__Converter*
/// @param category const char*
///
KUnitConversion__UnitCategory* k_unitconversion__converter_category(void* self, const char* category);

/// [Upstream resources](https://api.kde.org/kunitconversion-converter.html#category)
///
/// @param self KUnitConversion__Converter*
/// @param categoryId enum KUnitConversion__CategoryId
///
KUnitConversion__UnitCategory* k_unitconversion__converter_category2(void* self, int32_t categoryId);

/// [Upstream resources](https://api.kde.org/kunitconversion-converter.html#categories)
///
/// @param self KUnitConversion__Converter*
///
/// @return libqt_list of KUnitConversion__UnitCategory*
///
libqt_list k_unitconversion__converter_categories(void* self);

/// [Upstream resources](https://api.kde.org/kunitconversion-converter.html#convert)
///
/// @param self KUnitConversion__Converter*
/// @param value KUnitConversion__Value*
/// @param toUnit const char*
///
KUnitConversion__Value* k_unitconversion__converter_convert22(void* self, void* value, const char* toUnit);

/// Delete this object from C++ memory.
///
/// @param self KUnitConversion__Converter*
///
void k_unitconversion__converter_delete(void* self);

#endif
