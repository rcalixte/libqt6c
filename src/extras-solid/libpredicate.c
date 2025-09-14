#include "../libqvariant.hpp"
#include "libdevice.hpp"
#include "libpredicate.hpp"
#include "libpredicate.h"

Solid__Predicate* k_solid__predicate_new() {
    return Solid__Predicate_new();
}

Solid__Predicate* k_solid__predicate_new2(void* other) {
    return Solid__Predicate_new2((Solid__Predicate*)other);
}

Solid__Predicate* k_solid__predicate_new3(int32_t* ifaceType, const char* property, void* value) {
    return Solid__Predicate_new3(ifaceType, qstring(property), (QVariant*)value);
}

Solid__Predicate* k_solid__predicate_new4(const char* ifaceName, const char* property, void* value) {
    return Solid__Predicate_new4(qstring(ifaceName), qstring(property), (QVariant*)value);
}

Solid__Predicate* k_solid__predicate_new5(int32_t* ifaceType) {
    return Solid__Predicate_new5(ifaceType);
}

Solid__Predicate* k_solid__predicate_new6(const char* ifaceName) {
    return Solid__Predicate_new6(qstring(ifaceName));
}

Solid__Predicate* k_solid__predicate_new7(int32_t* ifaceType, const char* property, void* value, int32_t compOperator) {
    return Solid__Predicate_new7(ifaceType, qstring(property), (QVariant*)value, compOperator);
}

Solid__Predicate* k_solid__predicate_new8(const char* ifaceName, const char* property, void* value, int32_t compOperator) {
    return Solid__Predicate_new8(qstring(ifaceName), qstring(property), (QVariant*)value, compOperator);
}

void k_solid__predicate_operator_assign(void* self, void* other) {
    Solid__Predicate_OperatorAssign((Solid__Predicate*)self, (Solid__Predicate*)other);
}

Solid__Predicate* k_solid__predicate_operator_bitwise_and(void* self, void* other) {
    return Solid__Predicate_OperatorBitwiseAnd((Solid__Predicate*)self, (Solid__Predicate*)other);
}

void k_solid__predicate_operator_bitwise_and_assign(void* self, void* other) {
    Solid__Predicate_OperatorBitwiseAndAssign((Solid__Predicate*)self, (Solid__Predicate*)other);
}

Solid__Predicate* k_solid__predicate_operator_bitwise_or(void* self, void* other) {
    return Solid__Predicate_OperatorBitwiseOr((Solid__Predicate*)self, (Solid__Predicate*)other);
}

void k_solid__predicate_operator_bitwise_or_assign(void* self, void* other) {
    Solid__Predicate_OperatorBitwiseOrAssign((Solid__Predicate*)self, (Solid__Predicate*)other);
}

bool k_solid__predicate_is_valid(void* self) {
    return Solid__Predicate_IsValid((Solid__Predicate*)self);
}

bool k_solid__predicate_matches(void* self, void* device) {
    return Solid__Predicate_Matches((Solid__Predicate*)self, (Solid__Device*)device);
}

libqt_list /* of int32_t */ k_solid__predicate_used_types(void* self) {
    return Solid__Predicate_UsedTypes((Solid__Predicate*)self);
}

const char* k_solid__predicate_to_string(void* self) {
    libqt_string _str = Solid__Predicate_ToString((Solid__Predicate*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

Solid__Predicate* k_solid__predicate_from_string(const char* predicate) {
    return Solid__Predicate_FromString(qstring(predicate));
}

int32_t k_solid__predicate_type(void* self) {
    return Solid__Predicate_Type((Solid__Predicate*)self);
}

int32_t k_solid__predicate_interface_type(void* self) {
    return Solid__Predicate_InterfaceType((Solid__Predicate*)self);
}

const char* k_solid__predicate_property_name(void* self) {
    libqt_string _str = Solid__Predicate_PropertyName((Solid__Predicate*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVariant* k_solid__predicate_matching_value(void* self) {
    return Solid__Predicate_MatchingValue((Solid__Predicate*)self);
}

int32_t k_solid__predicate_comparison_operator(void* self) {
    return Solid__Predicate_ComparisonOperator((Solid__Predicate*)self);
}

Solid__Predicate* k_solid__predicate_first_operand(void* self) {
    return Solid__Predicate_FirstOperand((Solid__Predicate*)self);
}

Solid__Predicate* k_solid__predicate_second_operand(void* self) {
    return Solid__Predicate_SecondOperand((Solid__Predicate*)self);
}

void k_solid__predicate_delete(void* self) {
    Solid__Predicate_Delete((Solid__Predicate*)(self));
}
