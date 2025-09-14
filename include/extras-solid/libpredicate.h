#pragma once
#ifndef SRC_EXTRAS_SOLIDQT6C_LIBPREDICATE_H
#define SRC_EXTRAS_SOLIDQT6C_LIBPREDICATE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/solid-predicate.html

/// k_solid__predicate_new constructs a new Solid::Predicate object.
///
Solid__Predicate* k_solid__predicate_new();

/// k_solid__predicate_new2 constructs a new Solid::Predicate object.
///
/// @param other Solid__Predicate*
Solid__Predicate* k_solid__predicate_new2(void* other);

/// k_solid__predicate_new3 constructs a new Solid::Predicate object.
///
/// @param ifaceType enum Solid__DeviceInterface__Type*
/// @param property const char*
/// @param value QVariant*
Solid__Predicate* k_solid__predicate_new3(int32_t* ifaceType, const char* property, void* value);

/// k_solid__predicate_new4 constructs a new Solid::Predicate object.
///
/// @param ifaceName const char*
/// @param property const char*
/// @param value QVariant*
Solid__Predicate* k_solid__predicate_new4(const char* ifaceName, const char* property, void* value);

/// k_solid__predicate_new5 constructs a new Solid::Predicate object.
///
/// @param ifaceType enum Solid__DeviceInterface__Type*
Solid__Predicate* k_solid__predicate_new5(int32_t* ifaceType);

/// k_solid__predicate_new6 constructs a new Solid::Predicate object.
///
/// @param ifaceName const char*
Solid__Predicate* k_solid__predicate_new6(const char* ifaceName);

/// k_solid__predicate_new7 constructs a new Solid::Predicate object.
///
/// @param ifaceType enum Solid__DeviceInterface__Type*
/// @param property const char*
/// @param value QVariant*
/// @param compOperator enum Solid__Predicate__ComparisonOperator
Solid__Predicate* k_solid__predicate_new7(int32_t* ifaceType, const char* property, void* value, int32_t compOperator);

/// k_solid__predicate_new8 constructs a new Solid::Predicate object.
///
/// @param ifaceName const char*
/// @param property const char*
/// @param value QVariant*
/// @param compOperator enum Solid__Predicate__ComparisonOperator
Solid__Predicate* k_solid__predicate_new8(const char* ifaceName, const char* property, void* value, int32_t compOperator);

/// [Qt documentation](https://api.kde.org/solid-predicate.html#operator-eq)
///
/// @param self Solid__Predicate*
/// @param other Solid__Predicate*
void k_solid__predicate_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/solid-predicate.html#operator-and)
///
/// @param self Solid__Predicate*
/// @param other Solid__Predicate*
Solid__Predicate* k_solid__predicate_operator_bitwise_and(void* self, void* other);

/// [Qt documentation](https://api.kde.org/solid-predicate.html#operator-and-eq)
///
/// @param self Solid__Predicate*
/// @param other Solid__Predicate*
void k_solid__predicate_operator_bitwise_and_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/solid-predicate.html#operator-7c)
///
/// @param self Solid__Predicate*
/// @param other Solid__Predicate*
Solid__Predicate* k_solid__predicate_operator_bitwise_or(void* self, void* other);

/// [Qt documentation](https://api.kde.org/solid-predicate.html#operator-7c-eq)
///
/// @param self Solid__Predicate*
/// @param other Solid__Predicate*
void k_solid__predicate_operator_bitwise_or_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/solid-predicate.html#isValid)
///
/// @param self Solid__Predicate*
bool k_solid__predicate_is_valid(void* self);

/// [Qt documentation](https://api.kde.org/solid-predicate.html#matches)
///
/// @param self Solid__Predicate*
/// @param device Solid__Device*
bool k_solid__predicate_matches(void* self, void* device);

/// [Qt documentation](https://api.kde.org/solid-predicate.html#usedTypes)
///
/// @param self Solid__Predicate*
libqt_list /* of int32_t */ k_solid__predicate_used_types(void* self);

/// [Qt documentation](https://api.kde.org/solid-predicate.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__Predicate*
const char* k_solid__predicate_to_string(void* self);

/// [Qt documentation](https://api.kde.org/solid-predicate.html#fromString)
///
/// @param predicate const char*
Solid__Predicate* k_solid__predicate_from_string(const char* predicate);

/// [Qt documentation](https://api.kde.org/solid-predicate.html#type)
///
/// @param self Solid__Predicate*
///
/// @return enum Solid__Predicate__Type
int32_t k_solid__predicate_type(void* self);

/// [Qt documentation](https://api.kde.org/solid-predicate.html#interfaceType)
///
/// @param self Solid__Predicate*
///
/// @return enum Solid__DeviceInterface__Type
int32_t k_solid__predicate_interface_type(void* self);

/// [Qt documentation](https://api.kde.org/solid-predicate.html#propertyName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__Predicate*
const char* k_solid__predicate_property_name(void* self);

/// [Qt documentation](https://api.kde.org/solid-predicate.html#matchingValue)
///
/// @param self Solid__Predicate*
QVariant* k_solid__predicate_matching_value(void* self);

/// [Qt documentation](https://api.kde.org/solid-predicate.html#comparisonOperator)
///
/// @param self Solid__Predicate*
///
/// @return enum Solid__Predicate__ComparisonOperator
int32_t k_solid__predicate_comparison_operator(void* self);

/// [Qt documentation](https://api.kde.org/solid-predicate.html#firstOperand)
///
/// @param self Solid__Predicate*
Solid__Predicate* k_solid__predicate_first_operand(void* self);

/// [Qt documentation](https://api.kde.org/solid-predicate.html#secondOperand)
///
/// @param self Solid__Predicate*
Solid__Predicate* k_solid__predicate_second_operand(void* self);

/// Delete this object from C++ memory.
///
/// @param self Solid__Predicate*
void k_solid__predicate_delete(void* self);

/// https://api.kde.org/solid-predicate.html#types

typedef enum {
    SOLID_PREDICATE_COMPARISONOPERATOR_EQUALS = 0,
    SOLID_PREDICATE_COMPARISONOPERATOR_MASK = 1
} Solid__Predicate__ComparisonOperator;

typedef enum {
    SOLID_PREDICATE_TYPE_PROPERTYCHECK = 0,
    SOLID_PREDICATE_TYPE_CONJUNCTION = 1,
    SOLID_PREDICATE_TYPE_DISJUNCTION = 2,
    SOLID_PREDICATE_TYPE_INTERFACECHECK = 3
} Solid__Predicate__Type;

#endif
