#include "libqjsonvalue.hpp"
#include <string.h>
#include "libqvariant.hpp"
#include "libqjsonobject.hpp"
#include "libqjsonobject.h"

/// https://doc.qt.io/qt-6/qjsonobject.html

/// q_jsonobject_new constructs a new QJsonObject object.
///
///
QJsonObject* q_jsonobject_new() {
    return QJsonObject_new();
}

/// q_jsonobject_new2 constructs a new QJsonObject object.
///
/// ``` QJsonObject* other ```
QJsonObject* q_jsonobject_new2(void* other) {
    return QJsonObject_new2((QJsonObject*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#operator=)
///
/// ``` QJsonObject* self, QJsonObject* other ```
void q_jsonobject_operator_assign(void* self, void* other) {
    QJsonObject_OperatorAssign((QJsonObject*)self, (QJsonObject*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#swap)
///
/// ``` QJsonObject* self, QJsonObject* other ```
void q_jsonobject_swap(void* self, void* other) {
    QJsonObject_Swap((QJsonObject*)self, (QJsonObject*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#fromVariantMap)
///
/// ``` libqt_map /* of const char* to QVariant* */ mapVal ```
QJsonObject* q_jsonobject_from_variant_map(libqt_map /* of const char* to QVariant* */ mapVal) {
    return QJsonObject_FromVariantMap(mapVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#toVariantMap)
///
/// ``` QJsonObject* self ```
libqt_map /* of const char* to QVariant* */ q_jsonobject_to_variant_map(void* self) {
    return QJsonObject_ToVariantMap((QJsonObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#fromVariantHash)
///
/// ``` libqt_map /* of const char* to QVariant* */ mapVal ```
QJsonObject* q_jsonobject_from_variant_hash(libqt_map /* of const char* to QVariant* */ mapVal) {
    return QJsonObject_FromVariantHash(mapVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#toVariantHash)
///
/// ``` QJsonObject* self ```
libqt_map /* of const char* to QVariant* */ q_jsonobject_to_variant_hash(void* self) {
    return QJsonObject_ToVariantHash((QJsonObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#keys)
///
/// ``` QJsonObject* self ```
const char** q_jsonobject_keys(void* self) {
    libqt_list _arr = QJsonObject_Keys((QJsonObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#size)
///
/// ``` QJsonObject* self ```
int64_t q_jsonobject_size(void* self) {
    return QJsonObject_Size((QJsonObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#count)
///
/// ``` QJsonObject* self ```
int64_t q_jsonobject_count(void* self) {
    return QJsonObject_Count((QJsonObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#length)
///
/// ``` QJsonObject* self ```
int64_t q_jsonobject_length(void* self) {
    return QJsonObject_Length((QJsonObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#isEmpty)
///
/// ``` QJsonObject* self ```
bool q_jsonobject_is_empty(void* self) {
    return QJsonObject_IsEmpty((QJsonObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#value)
///
/// ``` QJsonObject* self, const char* key ```
QJsonValue* q_jsonobject_value(void* self, const char* key) {
    return QJsonObject_Value((QJsonObject*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#operator[])
///
/// ``` QJsonObject* self, const char* key ```
QJsonValue* q_jsonobject_operator_subscript(void* self, const char* key) {
    return QJsonObject_OperatorSubscript((QJsonObject*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#operator[])
///
/// ``` QJsonObject* self, const char* key ```
QJsonValueRef* q_jsonobject_operator_subscript_with_key(void* self, const char* key) {
    return QJsonObject_OperatorSubscriptWithKey((QJsonObject*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#remove)
///
/// ``` QJsonObject* self, const char* key ```
void q_jsonobject_remove(void* self, const char* key) {
    QJsonObject_Remove((QJsonObject*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#take)
///
/// ``` QJsonObject* self, const char* key ```
QJsonValue* q_jsonobject_take(void* self, const char* key) {
    return QJsonObject_Take((QJsonObject*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#contains)
///
/// ``` QJsonObject* self, const char* key ```
bool q_jsonobject_contains(void* self, const char* key) {
    return QJsonObject_Contains((QJsonObject*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#operator==)
///
/// ``` QJsonObject* self, QJsonObject* other ```
bool q_jsonobject_operator_equal(void* self, void* other) {
    return QJsonObject_OperatorEqual((QJsonObject*)self, (QJsonObject*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#operator!=)
///
/// ``` QJsonObject* self, QJsonObject* other ```
bool q_jsonobject_operator_not_equal(void* self, void* other) {
    return QJsonObject_OperatorNotEqual((QJsonObject*)self, (QJsonObject*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#begin)
///
/// ``` QJsonObject* self ```
QJsonObject__iterator* q_jsonobject_begin(void* self) {
    return QJsonObject_Begin((QJsonObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#begin)
///
/// ``` QJsonObject* self ```
QJsonObject__const_iterator* q_jsonobject_begin2(void* self) {
    return QJsonObject_Begin2((QJsonObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#constBegin)
///
/// ``` QJsonObject* self ```
QJsonObject__const_iterator* q_jsonobject_const_begin(void* self) {
    return QJsonObject_ConstBegin((QJsonObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#end)
///
/// ``` QJsonObject* self ```
QJsonObject__iterator* q_jsonobject_end(void* self) {
    return QJsonObject_End((QJsonObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#end)
///
/// ``` QJsonObject* self ```
QJsonObject__const_iterator* q_jsonobject_end2(void* self) {
    return QJsonObject_End2((QJsonObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#constEnd)
///
/// ``` QJsonObject* self ```
QJsonObject__const_iterator* q_jsonobject_const_end(void* self) {
    return QJsonObject_ConstEnd((QJsonObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#erase)
///
/// ``` QJsonObject* self, QJsonObject__iterator* it ```
QJsonObject__iterator* q_jsonobject_erase(void* self, void* it) {
    return QJsonObject_Erase((QJsonObject*)self, (QJsonObject__iterator*)it);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#find)
///
/// ``` QJsonObject* self, const char* key ```
QJsonObject__iterator* q_jsonobject_find(void* self, const char* key) {
    return QJsonObject_Find((QJsonObject*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#find)
///
/// ``` QJsonObject* self, const char* key ```
QJsonObject__const_iterator* q_jsonobject_find_with_key(void* self, const char* key) {
    return QJsonObject_FindWithKey((QJsonObject*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#constFind)
///
/// ``` QJsonObject* self, const char* key ```
QJsonObject__const_iterator* q_jsonobject_const_find(void* self, const char* key) {
    return QJsonObject_ConstFind((QJsonObject*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#insert)
///
/// ``` QJsonObject* self, const char* key, QJsonValue* value ```
QJsonObject__iterator* q_jsonobject_insert(void* self, const char* key, void* value) {
    return QJsonObject_Insert((QJsonObject*)self, qstring(key), (QJsonValue*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#empty)
///
/// ``` QJsonObject* self ```
bool q_jsonobject_empty(void* self) {
    return QJsonObject_Empty((QJsonObject*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QJsonObject* self ```
void q_jsonobject_delete(void* self) {
    QJsonObject_Delete((QJsonObject*)(self));
}

/// https://doc.qt.io/qt-6/qjsonobject-iterator.html

/// q_jsonobject__iterator_new constructs a new QJsonObject::iterator object.
///
/// ``` QJsonObject__iterator* other ```
QJsonObject__iterator* q_jsonobject__iterator_new(void* other) {
    return QJsonObject__iterator_new((QJsonObject__iterator*)other);
}

/// q_jsonobject__iterator_new2 constructs a new QJsonObject::iterator object.
///
///
QJsonObject__iterator* q_jsonobject__iterator_new2() {
    return QJsonObject__iterator_new2();
}

/// q_jsonobject__iterator_new3 constructs a new QJsonObject::iterator object.
///
/// ``` QJsonObject* obj, int64_t index ```
QJsonObject__iterator* q_jsonobject__iterator_new3(void* obj, int64_t index) {
    return QJsonObject__iterator_new3((QJsonObject*)obj, index);
}

/// q_jsonobject__iterator_new4 constructs a new QJsonObject::iterator object.
///
/// ``` QJsonObject__iterator* other ```
QJsonObject__iterator* q_jsonobject__iterator_new4(void* other) {
    return QJsonObject__iterator_new4((QJsonObject__iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator=)
///
/// ``` QJsonObject__iterator* self, QJsonObject__iterator* other ```
void q_jsonobject__iterator_operator_assign(void* self, void* other) {
    QJsonObject__iterator_OperatorAssign((QJsonObject__iterator*)self, (QJsonObject__iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#key)
///
/// ``` QJsonObject__iterator* self ```
const char* q_jsonobject__iterator_key(void* self) {
    libqt_string _str = QJsonObject__iterator_Key((QJsonObject__iterator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#value)
///
/// ``` QJsonObject__iterator* self ```
QJsonValueRef* q_jsonobject__iterator_value(void* self) {
    return QJsonObject__iterator_Value((QJsonObject__iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator*)
///
/// ``` QJsonObject__iterator* self ```
QJsonValueRef* q_jsonobject__iterator_operator_multiply(void* self) {
    return QJsonObject__iterator_OperatorMultiply((QJsonObject__iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator->)
///
/// ``` QJsonObject__iterator* self ```
QJsonValueConstRef* q_jsonobject__iterator_operator_minus_greater(void* self) {
    return QJsonObject__iterator_OperatorMinusGreater((QJsonObject__iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator->)
///
/// ``` QJsonObject__iterator* self ```
QJsonValueRef* q_jsonobject__iterator_operator_minus_greater2(void* self) {
    return QJsonObject__iterator_OperatorMinusGreater2((QJsonObject__iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator[])
///
/// ``` QJsonObject__iterator* self, int64_t j ```
QJsonValueRef* q_jsonobject__iterator_operator_subscript(void* self, int64_t j) {
    return QJsonObject__iterator_OperatorSubscript((QJsonObject__iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator==)
///
/// ``` QJsonObject__iterator* self, QJsonObject__iterator* other ```
bool q_jsonobject__iterator_operator_equal(void* self, void* other) {
    return QJsonObject__iterator_OperatorEqual((QJsonObject__iterator*)self, (QJsonObject__iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator!=)
///
/// ``` QJsonObject__iterator* self, QJsonObject__iterator* other ```
bool q_jsonobject__iterator_operator_not_equal(void* self, void* other) {
    return QJsonObject__iterator_OperatorNotEqual((QJsonObject__iterator*)self, (QJsonObject__iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator<)
///
/// ``` QJsonObject__iterator* self, QJsonObject__iterator* other ```
bool q_jsonobject__iterator_operator_lesser(void* self, void* other) {
    return QJsonObject__iterator_OperatorLesser((QJsonObject__iterator*)self, (QJsonObject__iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator<=)
///
/// ``` QJsonObject__iterator* self, QJsonObject__iterator* other ```
bool q_jsonobject__iterator_operator_lesser_or_equal(void* self, void* other) {
    return QJsonObject__iterator_OperatorLesserOrEqual((QJsonObject__iterator*)self, (QJsonObject__iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator>)
///
/// ``` QJsonObject__iterator* self, QJsonObject__iterator* other ```
bool q_jsonobject__iterator_operator_greater(void* self, void* other) {
    return QJsonObject__iterator_OperatorGreater((QJsonObject__iterator*)self, (QJsonObject__iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator>=)
///
/// ``` QJsonObject__iterator* self, QJsonObject__iterator* other ```
bool q_jsonobject__iterator_operator_greater_or_equal(void* self, void* other) {
    return QJsonObject__iterator_OperatorGreaterOrEqual((QJsonObject__iterator*)self, (QJsonObject__iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator++)
///
/// ``` QJsonObject__iterator* self ```
QJsonObject__iterator* q_jsonobject__iterator_operator_plus_plus(void* self) {
    return QJsonObject__iterator_OperatorPlusPlus((QJsonObject__iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator++)
///
/// ``` QJsonObject__iterator* self, int param1 ```
QJsonObject__iterator* q_jsonobject__iterator_operator_plus_plus_with_int(void* self, int param1) {
    return QJsonObject__iterator_OperatorPlusPlusWithInt((QJsonObject__iterator*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator--)
///
/// ``` QJsonObject__iterator* self ```
QJsonObject__iterator* q_jsonobject__iterator_operator_minus_minus(void* self) {
    return QJsonObject__iterator_OperatorMinusMinus((QJsonObject__iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator--)
///
/// ``` QJsonObject__iterator* self, int param1 ```
QJsonObject__iterator* q_jsonobject__iterator_operator_minus_minus_with_int(void* self, int param1) {
    return QJsonObject__iterator_OperatorMinusMinusWithInt((QJsonObject__iterator*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator+)
///
/// ``` QJsonObject__iterator* self, int64_t j ```
QJsonObject__iterator* q_jsonobject__iterator_operator_plus(void* self, int64_t j) {
    return QJsonObject__iterator_OperatorPlus((QJsonObject__iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator-)
///
/// ``` QJsonObject__iterator* self, int64_t j ```
QJsonObject__iterator* q_jsonobject__iterator_operator_minus(void* self, int64_t j) {
    return QJsonObject__iterator_OperatorMinus((QJsonObject__iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator+=)
///
/// ``` QJsonObject__iterator* self, int64_t j ```
QJsonObject__iterator* q_jsonobject__iterator_operator_plus_assign(void* self, int64_t j) {
    return QJsonObject__iterator_OperatorPlusAssign((QJsonObject__iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator-=)
///
/// ``` QJsonObject__iterator* self, int64_t j ```
QJsonObject__iterator* q_jsonobject__iterator_operator_minus_assign(void* self, int64_t j) {
    return QJsonObject__iterator_OperatorMinusAssign((QJsonObject__iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator-)
///
/// ``` QJsonObject__iterator* self, QJsonObject__iterator* j ```
int64_t q_jsonobject__iterator_operator_minus_with_q_json_objectiterator(void* self, void* j) {
    return QJsonObject__iterator_OperatorMinusWithQJsonObjectiterator((QJsonObject__iterator*)self, (QJsonObject__iterator*)j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator==)
///
/// ``` QJsonObject__iterator* self, QJsonObject__const_iterator* other ```
bool q_jsonobject__iterator_operator_equal_with_other(void* self, void* other) {
    return QJsonObject__iterator_OperatorEqualWithOther((QJsonObject__iterator*)self, (QJsonObject__const_iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator!=)
///
/// ``` QJsonObject__iterator* self, QJsonObject__const_iterator* other ```
bool q_jsonobject__iterator_operator_not_equal_with_other(void* self, void* other) {
    return QJsonObject__iterator_OperatorNotEqualWithOther((QJsonObject__iterator*)self, (QJsonObject__const_iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator<)
///
/// ``` QJsonObject__iterator* self, QJsonObject__const_iterator* other ```
bool q_jsonobject__iterator_operator_lesser_with_other(void* self, void* other) {
    return QJsonObject__iterator_OperatorLesserWithOther((QJsonObject__iterator*)self, (QJsonObject__const_iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator<=)
///
/// ``` QJsonObject__iterator* self, QJsonObject__const_iterator* other ```
bool q_jsonobject__iterator_operator_lesser_or_equal_with_other(void* self, void* other) {
    return QJsonObject__iterator_OperatorLesserOrEqualWithOther((QJsonObject__iterator*)self, (QJsonObject__const_iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator>)
///
/// ``` QJsonObject__iterator* self, QJsonObject__const_iterator* other ```
bool q_jsonobject__iterator_operator_greater_with_other(void* self, void* other) {
    return QJsonObject__iterator_OperatorGreaterWithOther((QJsonObject__iterator*)self, (QJsonObject__const_iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator>=)
///
/// ``` QJsonObject__iterator* self, QJsonObject__const_iterator* other ```
bool q_jsonobject__iterator_operator_greater_or_equal_with_other(void* self, void* other) {
    return QJsonObject__iterator_OperatorGreaterOrEqualWithOther((QJsonObject__iterator*)self, (QJsonObject__const_iterator*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QJsonObject__iterator* self ```
void q_jsonobject__iterator_delete(void* self) {
    QJsonObject__iterator_Delete((QJsonObject__iterator*)(self));
}

/// https://doc.qt.io/qt-6/qjsonobject-const_iterator.html

/// q_jsonobject__const_iterator_new constructs a new QJsonObject::const_iterator object.
///
/// ``` QJsonObject__const_iterator* other ```
QJsonObject__const_iterator* q_jsonobject__const_iterator_new(void* other) {
    return QJsonObject__const_iterator_new((QJsonObject__const_iterator*)other);
}

/// q_jsonobject__const_iterator_new2 constructs a new QJsonObject::const_iterator object.
///
///
QJsonObject__const_iterator* q_jsonobject__const_iterator_new2() {
    return QJsonObject__const_iterator_new2();
}

/// q_jsonobject__const_iterator_new3 constructs a new QJsonObject::const_iterator object.
///
/// ``` QJsonObject* obj, int64_t index ```
QJsonObject__const_iterator* q_jsonobject__const_iterator_new3(void* obj, int64_t index) {
    return QJsonObject__const_iterator_new3((QJsonObject*)obj, index);
}

/// q_jsonobject__const_iterator_new4 constructs a new QJsonObject::const_iterator object.
///
/// ``` QJsonObject__iterator* other ```
QJsonObject__const_iterator* q_jsonobject__const_iterator_new4(void* other) {
    return QJsonObject__const_iterator_new4((QJsonObject__iterator*)other);
}

/// q_jsonobject__const_iterator_new5 constructs a new QJsonObject::const_iterator object.
///
/// ``` QJsonObject__const_iterator* other ```
QJsonObject__const_iterator* q_jsonobject__const_iterator_new5(void* other) {
    return QJsonObject__const_iterator_new5((QJsonObject__const_iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator=)
///
/// ``` QJsonObject__const_iterator* self, QJsonObject__const_iterator* other ```
void q_jsonobject__const_iterator_operator_assign(void* self, void* other) {
    QJsonObject__const_iterator_OperatorAssign((QJsonObject__const_iterator*)self, (QJsonObject__const_iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#key)
///
/// ``` QJsonObject__const_iterator* self ```
const char* q_jsonobject__const_iterator_key(void* self) {
    libqt_string _str = QJsonObject__const_iterator_Key((QJsonObject__const_iterator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#value)
///
/// ``` QJsonObject__const_iterator* self ```
QJsonValueConstRef* q_jsonobject__const_iterator_value(void* self) {
    return QJsonObject__const_iterator_Value((QJsonObject__const_iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator*)
///
/// ``` QJsonObject__const_iterator* self ```
QJsonValueConstRef* q_jsonobject__const_iterator_operator_multiply(void* self) {
    return QJsonObject__const_iterator_OperatorMultiply((QJsonObject__const_iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator->)
///
/// ``` QJsonObject__const_iterator* self ```
QJsonValueConstRef* q_jsonobject__const_iterator_operator_minus_greater(void* self) {
    return QJsonObject__const_iterator_OperatorMinusGreater((QJsonObject__const_iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator[])
///
/// ``` QJsonObject__const_iterator* self, int64_t j ```
QJsonValueConstRef* q_jsonobject__const_iterator_operator_subscript(void* self, int64_t j) {
    return QJsonObject__const_iterator_OperatorSubscript((QJsonObject__const_iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator==)
///
/// ``` QJsonObject__const_iterator* self, QJsonObject__const_iterator* other ```
bool q_jsonobject__const_iterator_operator_equal(void* self, void* other) {
    return QJsonObject__const_iterator_OperatorEqual((QJsonObject__const_iterator*)self, (QJsonObject__const_iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator!=)
///
/// ``` QJsonObject__const_iterator* self, QJsonObject__const_iterator* other ```
bool q_jsonobject__const_iterator_operator_not_equal(void* self, void* other) {
    return QJsonObject__const_iterator_OperatorNotEqual((QJsonObject__const_iterator*)self, (QJsonObject__const_iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator<)
///
/// ``` QJsonObject__const_iterator* self, QJsonObject__const_iterator* other ```
bool q_jsonobject__const_iterator_operator_lesser(void* self, void* other) {
    return QJsonObject__const_iterator_OperatorLesser((QJsonObject__const_iterator*)self, (QJsonObject__const_iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator<=)
///
/// ``` QJsonObject__const_iterator* self, QJsonObject__const_iterator* other ```
bool q_jsonobject__const_iterator_operator_lesser_or_equal(void* self, void* other) {
    return QJsonObject__const_iterator_OperatorLesserOrEqual((QJsonObject__const_iterator*)self, (QJsonObject__const_iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator>)
///
/// ``` QJsonObject__const_iterator* self, QJsonObject__const_iterator* other ```
bool q_jsonobject__const_iterator_operator_greater(void* self, void* other) {
    return QJsonObject__const_iterator_OperatorGreater((QJsonObject__const_iterator*)self, (QJsonObject__const_iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator>=)
///
/// ``` QJsonObject__const_iterator* self, QJsonObject__const_iterator* other ```
bool q_jsonobject__const_iterator_operator_greater_or_equal(void* self, void* other) {
    return QJsonObject__const_iterator_OperatorGreaterOrEqual((QJsonObject__const_iterator*)self, (QJsonObject__const_iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator++)
///
/// ``` QJsonObject__const_iterator* self ```
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus_plus(void* self) {
    return QJsonObject__const_iterator_OperatorPlusPlus((QJsonObject__const_iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator++)
///
/// ``` QJsonObject__const_iterator* self, int param1 ```
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus_plus_with_int(void* self, int param1) {
    return QJsonObject__const_iterator_OperatorPlusPlusWithInt((QJsonObject__const_iterator*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator--)
///
/// ``` QJsonObject__const_iterator* self ```
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus_minus(void* self) {
    return QJsonObject__const_iterator_OperatorMinusMinus((QJsonObject__const_iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator--)
///
/// ``` QJsonObject__const_iterator* self, int param1 ```
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus_minus_with_int(void* self, int param1) {
    return QJsonObject__const_iterator_OperatorMinusMinusWithInt((QJsonObject__const_iterator*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator+)
///
/// ``` QJsonObject__const_iterator* self, int64_t j ```
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus(void* self, int64_t j) {
    return QJsonObject__const_iterator_OperatorPlus((QJsonObject__const_iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator-)
///
/// ``` QJsonObject__const_iterator* self, int64_t j ```
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus(void* self, int64_t j) {
    return QJsonObject__const_iterator_OperatorMinus((QJsonObject__const_iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator+=)
///
/// ``` QJsonObject__const_iterator* self, int64_t j ```
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus_assign(void* self, int64_t j) {
    return QJsonObject__const_iterator_OperatorPlusAssign((QJsonObject__const_iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator-=)
///
/// ``` QJsonObject__const_iterator* self, int64_t j ```
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus_assign(void* self, int64_t j) {
    return QJsonObject__const_iterator_OperatorMinusAssign((QJsonObject__const_iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator-)
///
/// ``` QJsonObject__const_iterator* self, QJsonObject__const_iterator* j ```
int64_t q_jsonobject__const_iterator_operator_minus_with_q_json_objectconst_iterator(void* self, void* j) {
    return QJsonObject__const_iterator_OperatorMinusWithQJsonObjectconstIterator((QJsonObject__const_iterator*)self, (QJsonObject__const_iterator*)j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator==)
///
/// ``` QJsonObject__const_iterator* self, QJsonObject__iterator* other ```
bool q_jsonobject__const_iterator_operator_equal_with_other(void* self, void* other) {
    return QJsonObject__const_iterator_OperatorEqualWithOther((QJsonObject__const_iterator*)self, (QJsonObject__iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator!=)
///
/// ``` QJsonObject__const_iterator* self, QJsonObject__iterator* other ```
bool q_jsonobject__const_iterator_operator_not_equal_with_other(void* self, void* other) {
    return QJsonObject__const_iterator_OperatorNotEqualWithOther((QJsonObject__const_iterator*)self, (QJsonObject__iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator<)
///
/// ``` QJsonObject__const_iterator* self, QJsonObject__iterator* other ```
bool q_jsonobject__const_iterator_operator_lesser_with_other(void* self, void* other) {
    return QJsonObject__const_iterator_OperatorLesserWithOther((QJsonObject__const_iterator*)self, (QJsonObject__iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator<=)
///
/// ``` QJsonObject__const_iterator* self, QJsonObject__iterator* other ```
bool q_jsonobject__const_iterator_operator_lesser_or_equal_with_other(void* self, void* other) {
    return QJsonObject__const_iterator_OperatorLesserOrEqualWithOther((QJsonObject__const_iterator*)self, (QJsonObject__iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator>)
///
/// ``` QJsonObject__const_iterator* self, QJsonObject__iterator* other ```
bool q_jsonobject__const_iterator_operator_greater_with_other(void* self, void* other) {
    return QJsonObject__const_iterator_OperatorGreaterWithOther((QJsonObject__const_iterator*)self, (QJsonObject__iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator>=)
///
/// ``` QJsonObject__const_iterator* self, QJsonObject__iterator* other ```
bool q_jsonobject__const_iterator_operator_greater_or_equal_with_other(void* self, void* other) {
    return QJsonObject__const_iterator_OperatorGreaterOrEqualWithOther((QJsonObject__const_iterator*)self, (QJsonObject__iterator*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QJsonObject__const_iterator* self ```
void q_jsonobject__const_iterator_delete(void* self) {
    QJsonObject__const_iterator_Delete((QJsonObject__const_iterator*)(self));
}