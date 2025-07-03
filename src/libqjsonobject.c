#include "libqjsonvalue.hpp"
#include <string.h>
#include "libqvariant.hpp"
#include "libqjsonobject.hpp"
#include "libqjsonobject.h"

QJsonObject* q_jsonobject_new() {
    return QJsonObject_new();
}

QJsonObject* q_jsonobject_new2(void* other) {
    return QJsonObject_new2((QJsonObject*)other);
}

void q_jsonobject_operator_assign(void* self, void* other) {
    QJsonObject_OperatorAssign((QJsonObject*)self, (QJsonObject*)other);
}

void q_jsonobject_swap(void* self, void* other) {
    QJsonObject_Swap((QJsonObject*)self, (QJsonObject*)other);
}

QJsonObject* q_jsonobject_from_variant_map(libqt_map /* of const char* to QVariant* */ mapVal) {
    return QJsonObject_FromVariantMap(mapVal);
}

libqt_map /* of const char* to QVariant* */ q_jsonobject_to_variant_map(void* self) {
    return QJsonObject_ToVariantMap((QJsonObject*)self);
}

QJsonObject* q_jsonobject_from_variant_hash(libqt_map /* of const char* to QVariant* */ mapVal) {
    return QJsonObject_FromVariantHash(mapVal);
}

libqt_map /* of const char* to QVariant* */ q_jsonobject_to_variant_hash(void* self) {
    return QJsonObject_ToVariantHash((QJsonObject*)self);
}

const char** q_jsonobject_keys(void* self) {
    libqt_list _arr = QJsonObject_Keys((QJsonObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

int64_t q_jsonobject_size(void* self) {
    return QJsonObject_Size((QJsonObject*)self);
}

int64_t q_jsonobject_count(void* self) {
    return QJsonObject_Count((QJsonObject*)self);
}

int64_t q_jsonobject_length(void* self) {
    return QJsonObject_Length((QJsonObject*)self);
}

bool q_jsonobject_is_empty(void* self) {
    return QJsonObject_IsEmpty((QJsonObject*)self);
}

QJsonValue* q_jsonobject_value(void* self, const char* key) {
    return QJsonObject_Value((QJsonObject*)self, qstring(key));
}

QJsonValue* q_jsonobject_operator_subscript(void* self, const char* key) {
    return QJsonObject_OperatorSubscript((QJsonObject*)self, qstring(key));
}

QJsonValueRef* q_jsonobject_operator_subscript_with_key(void* self, const char* key) {
    return QJsonObject_OperatorSubscriptWithKey((QJsonObject*)self, qstring(key));
}

void q_jsonobject_remove(void* self, const char* key) {
    QJsonObject_Remove((QJsonObject*)self, qstring(key));
}

QJsonValue* q_jsonobject_take(void* self, const char* key) {
    return QJsonObject_Take((QJsonObject*)self, qstring(key));
}

bool q_jsonobject_contains(void* self, const char* key) {
    return QJsonObject_Contains((QJsonObject*)self, qstring(key));
}

bool q_jsonobject_operator_equal(void* self, void* other) {
    return QJsonObject_OperatorEqual((QJsonObject*)self, (QJsonObject*)other);
}

bool q_jsonobject_operator_not_equal(void* self, void* other) {
    return QJsonObject_OperatorNotEqual((QJsonObject*)self, (QJsonObject*)other);
}

QJsonObject__iterator* q_jsonobject_begin(void* self) {
    return QJsonObject_Begin((QJsonObject*)self);
}

QJsonObject__const_iterator* q_jsonobject_begin2(void* self) {
    return QJsonObject_Begin2((QJsonObject*)self);
}

QJsonObject__const_iterator* q_jsonobject_const_begin(void* self) {
    return QJsonObject_ConstBegin((QJsonObject*)self);
}

QJsonObject__iterator* q_jsonobject_end(void* self) {
    return QJsonObject_End((QJsonObject*)self);
}

QJsonObject__const_iterator* q_jsonobject_end2(void* self) {
    return QJsonObject_End2((QJsonObject*)self);
}

QJsonObject__const_iterator* q_jsonobject_const_end(void* self) {
    return QJsonObject_ConstEnd((QJsonObject*)self);
}

QJsonObject__iterator* q_jsonobject_erase(void* self, void* it) {
    return QJsonObject_Erase((QJsonObject*)self, (QJsonObject__iterator*)it);
}

QJsonObject__iterator* q_jsonobject_find(void* self, const char* key) {
    return QJsonObject_Find((QJsonObject*)self, qstring(key));
}

QJsonObject__const_iterator* q_jsonobject_find_with_key(void* self, const char* key) {
    return QJsonObject_FindWithKey((QJsonObject*)self, qstring(key));
}

QJsonObject__const_iterator* q_jsonobject_const_find(void* self, const char* key) {
    return QJsonObject_ConstFind((QJsonObject*)self, qstring(key));
}

QJsonObject__iterator* q_jsonobject_insert(void* self, const char* key, void* value) {
    return QJsonObject_Insert((QJsonObject*)self, qstring(key), (QJsonValue*)value);
}

bool q_jsonobject_empty(void* self) {
    return QJsonObject_Empty((QJsonObject*)self);
}

void q_jsonobject_delete(void* self) {
    QJsonObject_Delete((QJsonObject*)(self));
}

QJsonObject__iterator* q_jsonobject__iterator_new(void* other) {
    return QJsonObject__iterator_new((QJsonObject__iterator*)other);
}

QJsonObject__iterator* q_jsonobject__iterator_new2() {
    return QJsonObject__iterator_new2();
}

QJsonObject__iterator* q_jsonobject__iterator_new3(void* obj, int64_t index) {
    return QJsonObject__iterator_new3((QJsonObject*)obj, index);
}

QJsonObject__iterator* q_jsonobject__iterator_new4(void* other) {
    return QJsonObject__iterator_new4((QJsonObject__iterator*)other);
}

void q_jsonobject__iterator_operator_assign(void* self, void* other) {
    QJsonObject__iterator_OperatorAssign((QJsonObject__iterator*)self, (QJsonObject__iterator*)other);
}

const char* q_jsonobject__iterator_key(void* self) {
    libqt_string _str = QJsonObject__iterator_Key((QJsonObject__iterator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QJsonValueRef* q_jsonobject__iterator_value(void* self) {
    return QJsonObject__iterator_Value((QJsonObject__iterator*)self);
}

QJsonValueRef* q_jsonobject__iterator_operator_multiply(void* self) {
    return QJsonObject__iterator_OperatorMultiply((QJsonObject__iterator*)self);
}

const QJsonValueConstRef* q_jsonobject__iterator_operator_minus_greater(void* self) {
    return QJsonObject__iterator_OperatorMinusGreater((QJsonObject__iterator*)self);
}

QJsonValueRef* q_jsonobject__iterator_operator_minus_greater2(void* self) {
    return QJsonObject__iterator_OperatorMinusGreater2((QJsonObject__iterator*)self);
}

QJsonValueRef* q_jsonobject__iterator_operator_subscript(void* self, int64_t j) {
    return QJsonObject__iterator_OperatorSubscript((QJsonObject__iterator*)self, j);
}

bool q_jsonobject__iterator_operator_equal(void* self, void* other) {
    return QJsonObject__iterator_OperatorEqual((QJsonObject__iterator*)self, (QJsonObject__iterator*)other);
}

bool q_jsonobject__iterator_operator_not_equal(void* self, void* other) {
    return QJsonObject__iterator_OperatorNotEqual((QJsonObject__iterator*)self, (QJsonObject__iterator*)other);
}

bool q_jsonobject__iterator_operator_lesser(void* self, void* other) {
    return QJsonObject__iterator_OperatorLesser((QJsonObject__iterator*)self, (QJsonObject__iterator*)other);
}

bool q_jsonobject__iterator_operator_lesser_or_equal(void* self, void* other) {
    return QJsonObject__iterator_OperatorLesserOrEqual((QJsonObject__iterator*)self, (QJsonObject__iterator*)other);
}

bool q_jsonobject__iterator_operator_greater(void* self, void* other) {
    return QJsonObject__iterator_OperatorGreater((QJsonObject__iterator*)self, (QJsonObject__iterator*)other);
}

bool q_jsonobject__iterator_operator_greater_or_equal(void* self, void* other) {
    return QJsonObject__iterator_OperatorGreaterOrEqual((QJsonObject__iterator*)self, (QJsonObject__iterator*)other);
}

QJsonObject__iterator* q_jsonobject__iterator_operator_plus_plus(void* self) {
    return QJsonObject__iterator_OperatorPlusPlus((QJsonObject__iterator*)self);
}

QJsonObject__iterator* q_jsonobject__iterator_operator_plus_plus_with_int(void* self, int param1) {
    return QJsonObject__iterator_OperatorPlusPlusWithInt((QJsonObject__iterator*)self, param1);
}

QJsonObject__iterator* q_jsonobject__iterator_operator_minus_minus(void* self) {
    return QJsonObject__iterator_OperatorMinusMinus((QJsonObject__iterator*)self);
}

QJsonObject__iterator* q_jsonobject__iterator_operator_minus_minus_with_int(void* self, int param1) {
    return QJsonObject__iterator_OperatorMinusMinusWithInt((QJsonObject__iterator*)self, param1);
}

QJsonObject__iterator* q_jsonobject__iterator_operator_plus(void* self, int64_t j) {
    return QJsonObject__iterator_OperatorPlus((QJsonObject__iterator*)self, j);
}

QJsonObject__iterator* q_jsonobject__iterator_operator_minus(void* self, int64_t j) {
    return QJsonObject__iterator_OperatorMinus((QJsonObject__iterator*)self, j);
}

QJsonObject__iterator* q_jsonobject__iterator_operator_plus_assign(void* self, int64_t j) {
    return QJsonObject__iterator_OperatorPlusAssign((QJsonObject__iterator*)self, j);
}

QJsonObject__iterator* q_jsonobject__iterator_operator_minus_assign(void* self, int64_t j) {
    return QJsonObject__iterator_OperatorMinusAssign((QJsonObject__iterator*)self, j);
}

int64_t q_jsonobject__iterator_operator_minus_with_q_json_objectiterator(void* self, void* j) {
    return QJsonObject__iterator_OperatorMinusWithQJsonObjectiterator((QJsonObject__iterator*)self, (QJsonObject__iterator*)j);
}

bool q_jsonobject__iterator_operator_equal_with_other(void* self, void* other) {
    return QJsonObject__iterator_OperatorEqualWithOther((QJsonObject__iterator*)self, (QJsonObject__const_iterator*)other);
}

bool q_jsonobject__iterator_operator_not_equal_with_other(void* self, void* other) {
    return QJsonObject__iterator_OperatorNotEqualWithOther((QJsonObject__iterator*)self, (QJsonObject__const_iterator*)other);
}

bool q_jsonobject__iterator_operator_lesser_with_other(void* self, void* other) {
    return QJsonObject__iterator_OperatorLesserWithOther((QJsonObject__iterator*)self, (QJsonObject__const_iterator*)other);
}

bool q_jsonobject__iterator_operator_lesser_or_equal_with_other(void* self, void* other) {
    return QJsonObject__iterator_OperatorLesserOrEqualWithOther((QJsonObject__iterator*)self, (QJsonObject__const_iterator*)other);
}

bool q_jsonobject__iterator_operator_greater_with_other(void* self, void* other) {
    return QJsonObject__iterator_OperatorGreaterWithOther((QJsonObject__iterator*)self, (QJsonObject__const_iterator*)other);
}

bool q_jsonobject__iterator_operator_greater_or_equal_with_other(void* self, void* other) {
    return QJsonObject__iterator_OperatorGreaterOrEqualWithOther((QJsonObject__iterator*)self, (QJsonObject__const_iterator*)other);
}

void q_jsonobject__iterator_delete(void* self) {
    QJsonObject__iterator_Delete((QJsonObject__iterator*)(self));
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_new(void* other) {
    return QJsonObject__const_iterator_new((QJsonObject__const_iterator*)other);
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_new2() {
    return QJsonObject__const_iterator_new2();
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_new3(void* obj, int64_t index) {
    return QJsonObject__const_iterator_new3((QJsonObject*)obj, index);
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_new4(void* other) {
    return QJsonObject__const_iterator_new4((QJsonObject__iterator*)other);
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_new5(void* other) {
    return QJsonObject__const_iterator_new5((QJsonObject__const_iterator*)other);
}

void q_jsonobject__const_iterator_operator_assign(void* self, void* other) {
    QJsonObject__const_iterator_OperatorAssign((QJsonObject__const_iterator*)self, (QJsonObject__const_iterator*)other);
}

const char* q_jsonobject__const_iterator_key(void* self) {
    libqt_string _str = QJsonObject__const_iterator_Key((QJsonObject__const_iterator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QJsonValueConstRef* q_jsonobject__const_iterator_value(void* self) {
    return QJsonObject__const_iterator_Value((QJsonObject__const_iterator*)self);
}

const QJsonValueConstRef* q_jsonobject__const_iterator_operator_multiply(void* self) {
    return QJsonObject__const_iterator_OperatorMultiply((QJsonObject__const_iterator*)self);
}

const QJsonValueConstRef* q_jsonobject__const_iterator_operator_minus_greater(void* self) {
    return QJsonObject__const_iterator_OperatorMinusGreater((QJsonObject__const_iterator*)self);
}

QJsonValueConstRef* q_jsonobject__const_iterator_operator_subscript(void* self, int64_t j) {
    return QJsonObject__const_iterator_OperatorSubscript((QJsonObject__const_iterator*)self, j);
}

bool q_jsonobject__const_iterator_operator_equal(void* self, void* other) {
    return QJsonObject__const_iterator_OperatorEqual((QJsonObject__const_iterator*)self, (QJsonObject__const_iterator*)other);
}

bool q_jsonobject__const_iterator_operator_not_equal(void* self, void* other) {
    return QJsonObject__const_iterator_OperatorNotEqual((QJsonObject__const_iterator*)self, (QJsonObject__const_iterator*)other);
}

bool q_jsonobject__const_iterator_operator_lesser(void* self, void* other) {
    return QJsonObject__const_iterator_OperatorLesser((QJsonObject__const_iterator*)self, (QJsonObject__const_iterator*)other);
}

bool q_jsonobject__const_iterator_operator_lesser_or_equal(void* self, void* other) {
    return QJsonObject__const_iterator_OperatorLesserOrEqual((QJsonObject__const_iterator*)self, (QJsonObject__const_iterator*)other);
}

bool q_jsonobject__const_iterator_operator_greater(void* self, void* other) {
    return QJsonObject__const_iterator_OperatorGreater((QJsonObject__const_iterator*)self, (QJsonObject__const_iterator*)other);
}

bool q_jsonobject__const_iterator_operator_greater_or_equal(void* self, void* other) {
    return QJsonObject__const_iterator_OperatorGreaterOrEqual((QJsonObject__const_iterator*)self, (QJsonObject__const_iterator*)other);
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus_plus(void* self) {
    return QJsonObject__const_iterator_OperatorPlusPlus((QJsonObject__const_iterator*)self);
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus_plus_with_int(void* self, int param1) {
    return QJsonObject__const_iterator_OperatorPlusPlusWithInt((QJsonObject__const_iterator*)self, param1);
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus_minus(void* self) {
    return QJsonObject__const_iterator_OperatorMinusMinus((QJsonObject__const_iterator*)self);
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus_minus_with_int(void* self, int param1) {
    return QJsonObject__const_iterator_OperatorMinusMinusWithInt((QJsonObject__const_iterator*)self, param1);
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus(void* self, int64_t j) {
    return QJsonObject__const_iterator_OperatorPlus((QJsonObject__const_iterator*)self, j);
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus(void* self, int64_t j) {
    return QJsonObject__const_iterator_OperatorMinus((QJsonObject__const_iterator*)self, j);
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus_assign(void* self, int64_t j) {
    return QJsonObject__const_iterator_OperatorPlusAssign((QJsonObject__const_iterator*)self, j);
}

QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus_assign(void* self, int64_t j) {
    return QJsonObject__const_iterator_OperatorMinusAssign((QJsonObject__const_iterator*)self, j);
}

int64_t q_jsonobject__const_iterator_operator_minus_with_q_json_objectconst_iterator(void* self, void* j) {
    return QJsonObject__const_iterator_OperatorMinusWithQJsonObjectconstIterator((QJsonObject__const_iterator*)self, (QJsonObject__const_iterator*)j);
}

bool q_jsonobject__const_iterator_operator_equal_with_other(void* self, void* other) {
    return QJsonObject__const_iterator_OperatorEqualWithOther((QJsonObject__const_iterator*)self, (QJsonObject__iterator*)other);
}

bool q_jsonobject__const_iterator_operator_not_equal_with_other(void* self, void* other) {
    return QJsonObject__const_iterator_OperatorNotEqualWithOther((QJsonObject__const_iterator*)self, (QJsonObject__iterator*)other);
}

bool q_jsonobject__const_iterator_operator_lesser_with_other(void* self, void* other) {
    return QJsonObject__const_iterator_OperatorLesserWithOther((QJsonObject__const_iterator*)self, (QJsonObject__iterator*)other);
}

bool q_jsonobject__const_iterator_operator_lesser_or_equal_with_other(void* self, void* other) {
    return QJsonObject__const_iterator_OperatorLesserOrEqualWithOther((QJsonObject__const_iterator*)self, (QJsonObject__iterator*)other);
}

bool q_jsonobject__const_iterator_operator_greater_with_other(void* self, void* other) {
    return QJsonObject__const_iterator_OperatorGreaterWithOther((QJsonObject__const_iterator*)self, (QJsonObject__iterator*)other);
}

bool q_jsonobject__const_iterator_operator_greater_or_equal_with_other(void* self, void* other) {
    return QJsonObject__const_iterator_OperatorGreaterOrEqualWithOther((QJsonObject__const_iterator*)self, (QJsonObject__iterator*)other);
}

void q_jsonobject__const_iterator_delete(void* self) {
    QJsonObject__const_iterator_Delete((QJsonObject__const_iterator*)(self));
}
