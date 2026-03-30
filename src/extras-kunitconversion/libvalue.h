#pragma once
#ifndef SRC_EXTRAS_KUNITCONVERSION_QT6C_LIBVALUE_H
#define SRC_EXTRAS_KUNITCONVERSION_QT6C_LIBVALUE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html)

/// k_unitconversion__value_new constructs a new KUnitConversion::Value object.
///
KUnitConversion__Value* k_unitconversion__value_new();

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html)

/// k_unitconversion__value_new2 constructs a new KUnitConversion::Value object.
///
/// @param number double
/// @param unit KUnitConversion__Unit*
///
KUnitConversion__Value* k_unitconversion__value_new2(double number, void* unit);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html)

/// k_unitconversion__value_new3 constructs a new KUnitConversion::Value object.
///
/// @param number double
/// @param unitString const char*
///
KUnitConversion__Value* k_unitconversion__value_new3(double number, const char* unitString);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html)

/// k_unitconversion__value_new4 constructs a new KUnitConversion::Value object.
///
/// @param number double
/// @param unitId enum KUnitConversion__UnitId
///
KUnitConversion__Value* k_unitconversion__value_new4(double number, int32_t unitId);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html)

/// k_unitconversion__value_new5 constructs a new KUnitConversion::Value object.
///
/// @param number QVariant*
/// @param unitString const char*
///
KUnitConversion__Value* k_unitconversion__value_new5(void* number, const char* unitString);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html)

/// k_unitconversion__value_new6 constructs a new KUnitConversion::Value object.
///
/// @param other KUnitConversion__Value*
///
KUnitConversion__Value* k_unitconversion__value_new6(void* other);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html#operator-eq)
///
/// @param self KUnitConversion__Value*
/// @param other KUnitConversion__Value*
///
void k_unitconversion__value_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html#swap)
///
/// @param self KUnitConversion__Value*
/// @param other KUnitConversion__Value*
///
void k_unitconversion__value_swap(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html#operator-eq-eq)
///
/// @param self KUnitConversion__Value*
/// @param other KUnitConversion__Value*
///
bool k_unitconversion__value_operator_equal(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html#operator-not-eq)
///
/// @param self KUnitConversion__Value*
/// @param other KUnitConversion__Value*
///
bool k_unitconversion__value_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html#isNull)
///
/// @param self KUnitConversion__Value*
///
bool k_unitconversion__value_is_null(void* self);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html#isValid)
///
/// @param self KUnitConversion__Value*
///
bool k_unitconversion__value_is_valid(void* self);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html#number)
///
/// @param self KUnitConversion__Value*
///
double k_unitconversion__value_number(void* self);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html#unit)
///
/// @param self KUnitConversion__Value*
///
KUnitConversion__Unit* k_unitconversion__value_unit(void* self);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUnitConversion__Value*
///
const char* k_unitconversion__value_to_string(void* self);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html#toSymbolString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUnitConversion__Value*
///
const char* k_unitconversion__value_to_symbol_string(void* self);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html#round)
///
/// @param self KUnitConversion__Value*
/// @param decimals uint32_t
///
KUnitConversion__Value* k_unitconversion__value_round(void* self, uint32_t decimals);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html#convertTo)
///
/// @param self KUnitConversion__Value*
/// @param unit KUnitConversion__Unit*
///
KUnitConversion__Value* k_unitconversion__value_convert_to(void* self, void* unit);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html#convertTo)
///
/// @param self KUnitConversion__Value*
/// @param unit enum KUnitConversion__UnitId
///
KUnitConversion__Value* k_unitconversion__value_convert_to2(void* self, int32_t unit);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html#convertTo)
///
/// @param self KUnitConversion__Value*
/// @param unit const char*
///
KUnitConversion__Value* k_unitconversion__value_convert_to3(void* self, const char* unit);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUnitConversion__Value*
/// @param fieldWidth int
///
const char* k_unitconversion__value_to_string1(void* self, int fieldWidth);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUnitConversion__Value*
/// @param fieldWidth int
/// @param format char
///
const char* k_unitconversion__value_to_string2(void* self, int fieldWidth, char format);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUnitConversion__Value*
/// @param fieldWidth int
/// @param format char
/// @param precision int
///
const char* k_unitconversion__value_to_string3(void* self, int fieldWidth, char format, int precision);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUnitConversion__Value*
/// @param fieldWidth int
/// @param format char
/// @param precision int
/// @param fillChar QChar*
///
const char* k_unitconversion__value_to_string4(void* self, int fieldWidth, char format, int precision, void* fillChar);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html#toSymbolString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUnitConversion__Value*
/// @param fieldWidth int
///
const char* k_unitconversion__value_to_symbol_string1(void* self, int fieldWidth);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html#toSymbolString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUnitConversion__Value*
/// @param fieldWidth int
/// @param format char
///
const char* k_unitconversion__value_to_symbol_string2(void* self, int fieldWidth, char format);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html#toSymbolString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUnitConversion__Value*
/// @param fieldWidth int
/// @param format char
/// @param precision int
///
const char* k_unitconversion__value_to_symbol_string3(void* self, int fieldWidth, char format, int precision);

/// [Upstream resources](https://api.kde.org/kunitconversion-value.html#toSymbolString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUnitConversion__Value*
/// @param fieldWidth int
/// @param format char
/// @param precision int
/// @param fillChar QChar*
///
const char* k_unitconversion__value_to_symbol_string4(void* self, int fieldWidth, char format, int precision, void* fillChar);

/// Delete this object from C++ memory.
///
/// @param self KUnitConversion__Value*
///
void k_unitconversion__value_delete(void* self);

#endif
