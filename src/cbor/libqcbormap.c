#include "libqcborvalue.hpp"
#include "../libqjsonobject.hpp"
#include <string.h>
#include "../libqvariant.hpp"
#include "libqcbormap.hpp"
#include "libqcbormap.h"

/// https://doc.qt.io/qt-6/qcbormap.html

/// q_cbormap_new constructs a new QCborMap object.
///
///
QCborMap* q_cbormap_new() {
    return QCborMap_new();
}

/// q_cbormap_new2 constructs a new QCborMap object.
///
/// ``` QCborMap* other ```
QCborMap* q_cbormap_new2(void* other) {
    return QCborMap_new2((QCborMap*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator=)
///
/// ``` QCborMap* self, QCborMap* other ```
void q_cbormap_operator_assign(void* self, void* other) {
    QCborMap_OperatorAssign((QCborMap*)self, (QCborMap*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#swap)
///
/// ``` QCborMap* self, QCborMap* other ```
void q_cbormap_swap(void* self, void* other) {
    QCborMap_Swap((QCborMap*)self, (QCborMap*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#toCborValue)
///
/// ``` QCborMap* self ```
QCborValue* q_cbormap_to_cbor_value(void* self) {
    return QCborMap_ToCborValue((QCborMap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#size)
///
/// ``` QCborMap* self ```
int64_t q_cbormap_size(void* self) {
    return QCborMap_Size((QCborMap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#isEmpty)
///
/// ``` QCborMap* self ```
bool q_cbormap_is_empty(void* self) {
    return QCborMap_IsEmpty((QCborMap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#clear)
///
/// ``` QCborMap* self ```
void q_cbormap_clear(void* self) {
    QCborMap_Clear((QCborMap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#keys)
///
/// ``` QCborMap* self ```
libqt_list /* of QCborValue* */ q_cbormap_keys(void* self) {
    libqt_list _arr = QCborMap_Keys((QCborMap*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#value)
///
/// ``` QCborMap* self, long long key ```
QCborValue* q_cbormap_value(void* self, long long key) {
    return QCborMap_Value((QCborMap*)self, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#value)
///
/// ``` QCborMap* self, const char* key ```
QCborValue* q_cbormap_value2(void* self, const char* key) {
    return QCborMap_Value2((QCborMap*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#value)
///
/// ``` QCborMap* self, QCborValue* key ```
QCborValue* q_cbormap_value3(void* self, void* key) {
    return QCborMap_Value3((QCborMap*)self, (QCborValue*)key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator[])
///
/// ``` QCborMap* self, long long key ```
QCborValue* q_cbormap_operator_subscript(void* self, long long key) {
    return QCborMap_OperatorSubscript((QCborMap*)self, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator[])
///
/// ``` QCborMap* self, const char* key ```
QCborValue* q_cbormap_operator_subscript2(void* self, const char* key) {
    return QCborMap_OperatorSubscript2((QCborMap*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator[])
///
/// ``` QCborMap* self, QCborValue* key ```
QCborValue* q_cbormap_operator_subscript3(void* self, void* key) {
    return QCborMap_OperatorSubscript3((QCborMap*)self, (QCborValue*)key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator[])
///
/// ``` QCborMap* self, long long key ```
QCborValueRef* q_cbormap_operator_subscript4(void* self, long long key) {
    return QCborMap_OperatorSubscript4((QCborMap*)self, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator[])
///
/// ``` QCborMap* self, const char* key ```
QCborValueRef* q_cbormap_operator_subscript6(void* self, const char* key) {
    return QCborMap_OperatorSubscript6((QCborMap*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator[])
///
/// ``` QCborMap* self, QCborValue* key ```
QCborValueRef* q_cbormap_operator_subscript7(void* self, void* key) {
    return QCborMap_OperatorSubscript7((QCborMap*)self, (QCborValue*)key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#take)
///
/// ``` QCborMap* self, long long key ```
QCborValue* q_cbormap_take(void* self, long long key) {
    return QCborMap_Take((QCborMap*)self, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#take)
///
/// ``` QCborMap* self, const char* key ```
QCborValue* q_cbormap_take2(void* self, const char* key) {
    return QCborMap_Take2((QCborMap*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#take)
///
/// ``` QCborMap* self, QCborValue* key ```
QCborValue* q_cbormap_take3(void* self, void* key) {
    return QCborMap_Take3((QCborMap*)self, (QCborValue*)key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#remove)
///
/// ``` QCborMap* self, long long key ```
void q_cbormap_remove(void* self, long long key) {
    QCborMap_Remove((QCborMap*)self, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#remove)
///
/// ``` QCborMap* self, const char* key ```
void q_cbormap_remove2(void* self, const char* key) {
    QCborMap_Remove2((QCborMap*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#remove)
///
/// ``` QCborMap* self, QCborValue* key ```
void q_cbormap_remove3(void* self, void* key) {
    QCborMap_Remove3((QCborMap*)self, (QCborValue*)key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#contains)
///
/// ``` QCborMap* self, long long key ```
bool q_cbormap_contains(void* self, long long key) {
    return QCborMap_Contains((QCborMap*)self, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#contains)
///
/// ``` QCborMap* self, const char* key ```
bool q_cbormap_contains2(void* self, const char* key) {
    return QCborMap_Contains2((QCborMap*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#contains)
///
/// ``` QCborMap* self, QCborValue* key ```
bool q_cbormap_contains3(void* self, void* key) {
    return QCborMap_Contains3((QCborMap*)self, (QCborValue*)key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#compare)
///
/// ``` QCborMap* self, QCborMap* other ```
int32_t q_cbormap_compare(void* self, void* other) {
    return QCborMap_Compare((QCborMap*)self, (QCborMap*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator==)
///
/// ``` QCborMap* self, QCborMap* other ```
bool q_cbormap_operator_equal(void* self, void* other) {
    return QCborMap_OperatorEqual((QCborMap*)self, (QCborMap*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator!=)
///
/// ``` QCborMap* self, QCborMap* other ```
bool q_cbormap_operator_not_equal(void* self, void* other) {
    return QCborMap_OperatorNotEqual((QCborMap*)self, (QCborMap*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator<)
///
/// ``` QCborMap* self, QCborMap* other ```
bool q_cbormap_operator_lesser(void* self, void* other) {
    return QCborMap_OperatorLesser((QCborMap*)self, (QCborMap*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#begin)
///
/// ``` QCborMap* self ```
QCborMap__Iterator* q_cbormap_begin(void* self) {
    return QCborMap_Begin((QCborMap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#constBegin)
///
/// ``` QCborMap* self ```
QCborMap__ConstIterator* q_cbormap_const_begin(void* self) {
    return QCborMap_ConstBegin((QCborMap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#begin)
///
/// ``` QCborMap* self ```
QCborMap__ConstIterator* q_cbormap_begin2(void* self) {
    return QCborMap_Begin2((QCborMap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#cbegin)
///
/// ``` QCborMap* self ```
QCborMap__ConstIterator* q_cbormap_cbegin(void* self) {
    return QCborMap_Cbegin((QCborMap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#end)
///
/// ``` QCborMap* self ```
QCborMap__Iterator* q_cbormap_end(void* self) {
    return QCborMap_End((QCborMap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#constEnd)
///
/// ``` QCborMap* self ```
QCborMap__ConstIterator* q_cbormap_const_end(void* self) {
    return QCborMap_ConstEnd((QCborMap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#end)
///
/// ``` QCborMap* self ```
QCborMap__ConstIterator* q_cbormap_end2(void* self) {
    return QCborMap_End2((QCborMap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#cend)
///
/// ``` QCborMap* self ```
QCborMap__ConstIterator* q_cbormap_cend(void* self) {
    return QCborMap_Cend((QCborMap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#erase)
///
/// ``` QCborMap* self, QCborMap__Iterator* it ```
QCborMap__Iterator* q_cbormap_erase(void* self, void* it) {
    return QCborMap_Erase((QCborMap*)self, (QCborMap__Iterator*)it);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#erase)
///
/// ``` QCborMap* self, QCborMap__ConstIterator* it ```
QCborMap__Iterator* q_cbormap_erase_with_it(void* self, void* it) {
    return QCborMap_EraseWithIt((QCborMap*)self, (QCborMap__ConstIterator*)it);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#extract)
///
/// ``` QCborMap* self, QCborMap__Iterator* it ```
QCborValue* q_cbormap_extract(void* self, void* it) {
    return QCborMap_Extract((QCborMap*)self, (QCborMap__Iterator*)it);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#extract)
///
/// ``` QCborMap* self, QCborMap__ConstIterator* it ```
QCborValue* q_cbormap_extract_with_it(void* self, void* it) {
    return QCborMap_ExtractWithIt((QCborMap*)self, (QCborMap__ConstIterator*)it);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#empty)
///
/// ``` QCborMap* self ```
bool q_cbormap_empty(void* self) {
    return QCborMap_Empty((QCborMap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// ``` QCborMap* self, long long key ```
QCborMap__Iterator* q_cbormap_find(void* self, long long key) {
    return QCborMap_Find((QCborMap*)self, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// ``` QCborMap* self, const char* key ```
QCborMap__Iterator* q_cbormap_find2(void* self, const char* key) {
    return QCborMap_Find2((QCborMap*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// ``` QCborMap* self, QCborValue* key ```
QCborMap__Iterator* q_cbormap_find3(void* self, void* key) {
    return QCborMap_Find3((QCborMap*)self, (QCborValue*)key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#constFind)
///
/// ``` QCborMap* self, long long key ```
QCborMap__ConstIterator* q_cbormap_const_find(void* self, long long key) {
    return QCborMap_ConstFind((QCborMap*)self, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#constFind)
///
/// ``` QCborMap* self, const char* key ```
QCborMap__ConstIterator* q_cbormap_const_find2(void* self, const char* key) {
    return QCborMap_ConstFind2((QCborMap*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#constFind)
///
/// ``` QCborMap* self, QCborValue* key ```
QCborMap__ConstIterator* q_cbormap_const_find3(void* self, void* key) {
    return QCborMap_ConstFind3((QCborMap*)self, (QCborValue*)key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// ``` QCborMap* self, long long key ```
QCborMap__ConstIterator* q_cbormap_find4(void* self, long long key) {
    return QCborMap_Find4((QCborMap*)self, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// ``` QCborMap* self, const char* key ```
QCborMap__ConstIterator* q_cbormap_find6(void* self, const char* key) {
    return QCborMap_Find6((QCborMap*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// ``` QCborMap* self, QCborValue* key ```
QCborMap__ConstIterator* q_cbormap_find7(void* self, void* key) {
    return QCborMap_Find7((QCborMap*)self, (QCborValue*)key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#insert)
///
/// ``` QCborMap* self, long long key, QCborValue* value_ ```
QCborMap__Iterator* q_cbormap_insert(void* self, long long key, void* value_) {
    return QCborMap_Insert((QCborMap*)self, key, (QCborValue*)value_);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#insert)
///
/// ``` QCborMap* self, const char* key, QCborValue* value_ ```
QCborMap__Iterator* q_cbormap_insert3(void* self, const char* key, void* value_) {
    return QCborMap_Insert3((QCborMap*)self, qstring(key), (QCborValue*)value_);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#insert)
///
/// ``` QCborMap* self, QCborValue* key, QCborValue* value_ ```
QCborMap__Iterator* q_cbormap_insert4(void* self, void* key, void* value_) {
    return QCborMap_Insert4((QCborMap*)self, (QCborValue*)key, (QCborValue*)value_);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#insert)
///
/// ``` QCborMap* self, libqt_pair /* tuple of QCborValue* and QCborValue* */ v ```
QCborMap__Iterator* q_cbormap_insert_with_q_cbor_mapvalue_type(void* self, libqt_pair /* tuple of QCborValue* and QCborValue* */ v) {
    return QCborMap_InsertWithQCborMapvalueType((QCborMap*)self, v);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#fromVariantMap)
///
/// ``` libqt_map /* of const char* to QVariant* */ mapVal ```
QCborMap* q_cbormap_from_variant_map(libqt_map /* of const char* to QVariant* */ mapVal) {
    return QCborMap_FromVariantMap(mapVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#fromVariantHash)
///
/// ``` libqt_map /* of const char* to QVariant* */ hash ```
QCborMap* q_cbormap_from_variant_hash(libqt_map /* of const char* to QVariant* */ hash) {
    return QCborMap_FromVariantHash(hash);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#fromJsonObject)
///
/// ``` QJsonObject* o ```
QCborMap* q_cbormap_from_json_object(void* o) {
    return QCborMap_FromJsonObject((QJsonObject*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#toVariantMap)
///
/// ``` QCborMap* self ```
libqt_map /* of const char* to QVariant* */ q_cbormap_to_variant_map(void* self) {
    return QCborMap_ToVariantMap((QCborMap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#toVariantHash)
///
/// ``` QCborMap* self ```
libqt_map /* of const char* to QVariant* */ q_cbormap_to_variant_hash(void* self) {
    return QCborMap_ToVariantHash((QCborMap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#toJsonObject)
///
/// ``` QCborMap* self ```
QJsonObject* q_cbormap_to_json_object(void* self) {
    return QCborMap_ToJsonObject((QCborMap*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QCborMap* self ```
void q_cbormap_delete(void* self) {
    QCborMap_Delete((QCborMap*)(self));
}

/// https://doc.qt.io/qt-6/qcbormap-iterator.html

/// q_cbormap__iterator_new constructs a new QCborMap::Iterator object.
///
/// ``` QCborMap__Iterator* other ```
QCborMap__Iterator* q_cbormap__iterator_new(void* other) {
    return QCborMap__Iterator_new((QCborMap__Iterator*)other);
}

/// q_cbormap__iterator_new2 constructs a new QCborMap::Iterator object.
///
///
QCborMap__Iterator* q_cbormap__iterator_new2() {
    return QCborMap__Iterator_new2();
}

/// q_cbormap__iterator_new3 constructs a new QCborMap::Iterator object.
///
/// ``` QCborMap__Iterator* param1 ```
QCborMap__Iterator* q_cbormap__iterator_new3(void* param1) {
    return QCborMap__Iterator_new3((QCborMap__Iterator*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator=)
///
/// ``` QCborMap__Iterator* self, QCborMap__Iterator* other ```
void q_cbormap__iterator_operator_assign(void* self, void* other) {
    QCborMap__Iterator_OperatorAssign((QCborMap__Iterator*)self, (QCborMap__Iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator*)
///
/// ``` QCborMap__Iterator* self ```
libqt_pair /* tuple of QCborValueConstRef* and QCborValueRef* */ q_cbormap__iterator_operator_multiply(void* self) {
    return QCborMap__Iterator_OperatorMultiply((QCborMap__Iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator[])
///
/// ``` QCborMap__Iterator* self, int64_t j ```
libqt_pair /* tuple of QCborValueConstRef* and QCborValueRef* */ q_cbormap__iterator_operator_subscript(void* self, int64_t j) {
    return QCborMap__Iterator_OperatorSubscript((QCborMap__Iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator->)
///
/// ``` QCborMap__Iterator* self ```
QCborValueRef* q_cbormap__iterator_operator_minus_greater(void* self) {
    return QCborMap__Iterator_OperatorMinusGreater((QCborMap__Iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator->)
///
/// ``` QCborMap__Iterator* self ```
QCborValueConstRef* q_cbormap__iterator_operator_minus_greater2(void* self) {
    return QCborMap__Iterator_OperatorMinusGreater2((QCborMap__Iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#key)
///
/// ``` QCborMap__Iterator* self ```
QCborValue* q_cbormap__iterator_key(void* self) {
    return QCborMap__Iterator_Key((QCborMap__Iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#value)
///
/// ``` QCborMap__Iterator* self ```
QCborValueRef* q_cbormap__iterator_value(void* self) {
    return QCborMap__Iterator_Value((QCborMap__Iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator==)
///
/// ``` QCborMap__Iterator* self, QCborMap__Iterator* o ```
bool q_cbormap__iterator_operator_equal(void* self, void* o) {
    return QCborMap__Iterator_OperatorEqual((QCborMap__Iterator*)self, (QCborMap__Iterator*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator!=)
///
/// ``` QCborMap__Iterator* self, QCborMap__Iterator* o ```
bool q_cbormap__iterator_operator_not_equal(void* self, void* o) {
    return QCborMap__Iterator_OperatorNotEqual((QCborMap__Iterator*)self, (QCborMap__Iterator*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator<)
///
/// ``` QCborMap__Iterator* self, QCborMap__Iterator* other ```
bool q_cbormap__iterator_operator_lesser(void* self, void* other) {
    return QCborMap__Iterator_OperatorLesser((QCborMap__Iterator*)self, (QCborMap__Iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator<=)
///
/// ``` QCborMap__Iterator* self, QCborMap__Iterator* other ```
bool q_cbormap__iterator_operator_lesser_or_equal(void* self, void* other) {
    return QCborMap__Iterator_OperatorLesserOrEqual((QCborMap__Iterator*)self, (QCborMap__Iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator>)
///
/// ``` QCborMap__Iterator* self, QCborMap__Iterator* other ```
bool q_cbormap__iterator_operator_greater(void* self, void* other) {
    return QCborMap__Iterator_OperatorGreater((QCborMap__Iterator*)self, (QCborMap__Iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator>=)
///
/// ``` QCborMap__Iterator* self, QCborMap__Iterator* other ```
bool q_cbormap__iterator_operator_greater_or_equal(void* self, void* other) {
    return QCborMap__Iterator_OperatorGreaterOrEqual((QCborMap__Iterator*)self, (QCborMap__Iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator==)
///
/// ``` QCborMap__Iterator* self, QCborMap__ConstIterator* o ```
bool q_cbormap__iterator_operator_equal_with_q_cbor_map_const_iterator(void* self, void* o) {
    return QCborMap__Iterator_OperatorEqualWithQCborMapConstIterator((QCborMap__Iterator*)self, (QCborMap__ConstIterator*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator!=)
///
/// ``` QCborMap__Iterator* self, QCborMap__ConstIterator* o ```
bool q_cbormap__iterator_operator_not_equal_with_q_cbor_map_const_iterator(void* self, void* o) {
    return QCborMap__Iterator_OperatorNotEqualWithQCborMapConstIterator((QCborMap__Iterator*)self, (QCborMap__ConstIterator*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator<)
///
/// ``` QCborMap__Iterator* self, QCborMap__ConstIterator* other ```
bool q_cbormap__iterator_operator_lesser_with_other(void* self, void* other) {
    return QCborMap__Iterator_OperatorLesserWithOther((QCborMap__Iterator*)self, (QCborMap__ConstIterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator<=)
///
/// ``` QCborMap__Iterator* self, QCborMap__ConstIterator* other ```
bool q_cbormap__iterator_operator_lesser_or_equal_with_other(void* self, void* other) {
    return QCborMap__Iterator_OperatorLesserOrEqualWithOther((QCborMap__Iterator*)self, (QCborMap__ConstIterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator>)
///
/// ``` QCborMap__Iterator* self, QCborMap__ConstIterator* other ```
bool q_cbormap__iterator_operator_greater_with_other(void* self, void* other) {
    return QCborMap__Iterator_OperatorGreaterWithOther((QCborMap__Iterator*)self, (QCborMap__ConstIterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator>=)
///
/// ``` QCborMap__Iterator* self, QCborMap__ConstIterator* other ```
bool q_cbormap__iterator_operator_greater_or_equal_with_other(void* self, void* other) {
    return QCborMap__Iterator_OperatorGreaterOrEqualWithOther((QCborMap__Iterator*)self, (QCborMap__ConstIterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator++)
///
/// ``` QCborMap__Iterator* self ```
QCborMap__Iterator* q_cbormap__iterator_operator_plus_plus(void* self) {
    return QCborMap__Iterator_OperatorPlusPlus((QCborMap__Iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator++)
///
/// ``` QCborMap__Iterator* self, int param1 ```
QCborMap__Iterator* q_cbormap__iterator_operator_plus_plus_with_int(void* self, int param1) {
    return QCborMap__Iterator_OperatorPlusPlusWithInt((QCborMap__Iterator*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator--)
///
/// ``` QCborMap__Iterator* self ```
QCborMap__Iterator* q_cbormap__iterator_operator_minus_minus(void* self) {
    return QCborMap__Iterator_OperatorMinusMinus((QCborMap__Iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator--)
///
/// ``` QCborMap__Iterator* self, int param1 ```
QCborMap__Iterator* q_cbormap__iterator_operator_minus_minus_with_int(void* self, int param1) {
    return QCborMap__Iterator_OperatorMinusMinusWithInt((QCborMap__Iterator*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator+=)
///
/// ``` QCborMap__Iterator* self, int64_t j ```
QCborMap__Iterator* q_cbormap__iterator_operator_plus_assign(void* self, int64_t j) {
    return QCborMap__Iterator_OperatorPlusAssign((QCborMap__Iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator-=)
///
/// ``` QCborMap__Iterator* self, int64_t j ```
QCborMap__Iterator* q_cbormap__iterator_operator_minus_assign(void* self, int64_t j) {
    return QCborMap__Iterator_OperatorMinusAssign((QCborMap__Iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator+)
///
/// ``` QCborMap__Iterator* self, int64_t j ```
QCborMap__Iterator* q_cbormap__iterator_operator_plus(void* self, int64_t j) {
    return QCborMap__Iterator_OperatorPlus((QCborMap__Iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator-)
///
/// ``` QCborMap__Iterator* self, int64_t j ```
QCborMap__Iterator* q_cbormap__iterator_operator_minus(void* self, int64_t j) {
    return QCborMap__Iterator_OperatorMinus((QCborMap__Iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator-)
///
/// ``` QCborMap__Iterator* self, QCborMap__Iterator* j ```
int64_t q_cbormap__iterator_operator_minus_with_q_cbor_map_iterator(void* self, void* j) {
    return QCborMap__Iterator_OperatorMinusWithQCborMapIterator((QCborMap__Iterator*)self, (QCborMap__Iterator*)j);
}

/// Delete this object from C++ memory.
///
/// ``` QCborMap__Iterator* self ```
void q_cbormap__iterator_delete(void* self) {
    QCborMap__Iterator_Delete((QCborMap__Iterator*)(self));
}

/// https://doc.qt.io/qt-6/qcbormap-constiterator.html

/// q_cbormap__constiterator_new constructs a new QCborMap::ConstIterator object.
///
/// ``` QCborMap__ConstIterator* other ```
QCborMap__ConstIterator* q_cbormap__constiterator_new(void* other) {
    return QCborMap__ConstIterator_new((QCborMap__ConstIterator*)other);
}

/// q_cbormap__constiterator_new2 constructs a new QCborMap::ConstIterator object.
///
///
QCborMap__ConstIterator* q_cbormap__constiterator_new2() {
    return QCborMap__ConstIterator_new2();
}

/// q_cbormap__constiterator_new3 constructs a new QCborMap::ConstIterator object.
///
/// ``` QCborMap__ConstIterator* param1 ```
QCborMap__ConstIterator* q_cbormap__constiterator_new3(void* param1) {
    return QCborMap__ConstIterator_new3((QCborMap__ConstIterator*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator=)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__ConstIterator* other ```
void q_cbormap__constiterator_operator_assign(void* self, void* other) {
    QCborMap__ConstIterator_OperatorAssign((QCborMap__ConstIterator*)self, (QCborMap__ConstIterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator*)
///
/// ``` QCborMap__ConstIterator* self ```
libqt_pair /* tuple of QCborValueConstRef* and QCborValueConstRef* */ q_cbormap__constiterator_operator_multiply(void* self) {
    return QCborMap__ConstIterator_OperatorMultiply((QCborMap__ConstIterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator[])
///
/// ``` QCborMap__ConstIterator* self, int64_t j ```
libqt_pair /* tuple of QCborValueConstRef* and QCborValueConstRef* */ q_cbormap__constiterator_operator_subscript(void* self, int64_t j) {
    return QCborMap__ConstIterator_OperatorSubscript((QCborMap__ConstIterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator->)
///
/// ``` QCborMap__ConstIterator* self ```
QCborValueConstRef* q_cbormap__constiterator_operator_minus_greater(void* self) {
    return QCborMap__ConstIterator_OperatorMinusGreater((QCborMap__ConstIterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#key)
///
/// ``` QCborMap__ConstIterator* self ```
QCborValue* q_cbormap__constiterator_key(void* self) {
    return QCborMap__ConstIterator_Key((QCborMap__ConstIterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#value)
///
/// ``` QCborMap__ConstIterator* self ```
QCborValueConstRef* q_cbormap__constiterator_value(void* self) {
    return QCborMap__ConstIterator_Value((QCborMap__ConstIterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator==)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__Iterator* o ```
bool q_cbormap__constiterator_operator_equal(void* self, void* o) {
    return QCborMap__ConstIterator_OperatorEqual((QCborMap__ConstIterator*)self, (QCborMap__Iterator*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator!=)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__Iterator* o ```
bool q_cbormap__constiterator_operator_not_equal(void* self, void* o) {
    return QCborMap__ConstIterator_OperatorNotEqual((QCborMap__ConstIterator*)self, (QCborMap__Iterator*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator<)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__Iterator* other ```
bool q_cbormap__constiterator_operator_lesser(void* self, void* other) {
    return QCborMap__ConstIterator_OperatorLesser((QCborMap__ConstIterator*)self, (QCborMap__Iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator<=)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__Iterator* other ```
bool q_cbormap__constiterator_operator_lesser_or_equal(void* self, void* other) {
    return QCborMap__ConstIterator_OperatorLesserOrEqual((QCborMap__ConstIterator*)self, (QCborMap__Iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator>)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__Iterator* other ```
bool q_cbormap__constiterator_operator_greater(void* self, void* other) {
    return QCborMap__ConstIterator_OperatorGreater((QCborMap__ConstIterator*)self, (QCborMap__Iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator>=)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__Iterator* other ```
bool q_cbormap__constiterator_operator_greater_or_equal(void* self, void* other) {
    return QCborMap__ConstIterator_OperatorGreaterOrEqual((QCborMap__ConstIterator*)self, (QCborMap__Iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator==)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__ConstIterator* o ```
bool q_cbormap__constiterator_operator_equal_with_q_cbor_map_const_iterator(void* self, void* o) {
    return QCborMap__ConstIterator_OperatorEqualWithQCborMapConstIterator((QCborMap__ConstIterator*)self, (QCborMap__ConstIterator*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator!=)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__ConstIterator* o ```
bool q_cbormap__constiterator_operator_not_equal_with_q_cbor_map_const_iterator(void* self, void* o) {
    return QCborMap__ConstIterator_OperatorNotEqualWithQCborMapConstIterator((QCborMap__ConstIterator*)self, (QCborMap__ConstIterator*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator<)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__ConstIterator* other ```
bool q_cbormap__constiterator_operator_lesser_with_other(void* self, void* other) {
    return QCborMap__ConstIterator_OperatorLesserWithOther((QCborMap__ConstIterator*)self, (QCborMap__ConstIterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator<=)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__ConstIterator* other ```
bool q_cbormap__constiterator_operator_lesser_or_equal_with_other(void* self, void* other) {
    return QCborMap__ConstIterator_OperatorLesserOrEqualWithOther((QCborMap__ConstIterator*)self, (QCborMap__ConstIterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator>)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__ConstIterator* other ```
bool q_cbormap__constiterator_operator_greater_with_other(void* self, void* other) {
    return QCborMap__ConstIterator_OperatorGreaterWithOther((QCborMap__ConstIterator*)self, (QCborMap__ConstIterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator>=)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__ConstIterator* other ```
bool q_cbormap__constiterator_operator_greater_or_equal_with_other(void* self, void* other) {
    return QCborMap__ConstIterator_OperatorGreaterOrEqualWithOther((QCborMap__ConstIterator*)self, (QCborMap__ConstIterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator++)
///
/// ``` QCborMap__ConstIterator* self ```
QCborMap__ConstIterator* q_cbormap__constiterator_operator_plus_plus(void* self) {
    return QCborMap__ConstIterator_OperatorPlusPlus((QCborMap__ConstIterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator++)
///
/// ``` QCborMap__ConstIterator* self, int param1 ```
QCborMap__ConstIterator* q_cbormap__constiterator_operator_plus_plus_with_int(void* self, int param1) {
    return QCborMap__ConstIterator_OperatorPlusPlusWithInt((QCborMap__ConstIterator*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator--)
///
/// ``` QCborMap__ConstIterator* self ```
QCborMap__ConstIterator* q_cbormap__constiterator_operator_minus_minus(void* self) {
    return QCborMap__ConstIterator_OperatorMinusMinus((QCborMap__ConstIterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator--)
///
/// ``` QCborMap__ConstIterator* self, int param1 ```
QCborMap__ConstIterator* q_cbormap__constiterator_operator_minus_minus_with_int(void* self, int param1) {
    return QCborMap__ConstIterator_OperatorMinusMinusWithInt((QCborMap__ConstIterator*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator+=)
///
/// ``` QCborMap__ConstIterator* self, int64_t j ```
QCborMap__ConstIterator* q_cbormap__constiterator_operator_plus_assign(void* self, int64_t j) {
    return QCborMap__ConstIterator_OperatorPlusAssign((QCborMap__ConstIterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator-=)
///
/// ``` QCborMap__ConstIterator* self, int64_t j ```
QCborMap__ConstIterator* q_cbormap__constiterator_operator_minus_assign(void* self, int64_t j) {
    return QCborMap__ConstIterator_OperatorMinusAssign((QCborMap__ConstIterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator+)
///
/// ``` QCborMap__ConstIterator* self, int64_t j ```
QCborMap__ConstIterator* q_cbormap__constiterator_operator_plus(void* self, int64_t j) {
    return QCborMap__ConstIterator_OperatorPlus((QCborMap__ConstIterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator-)
///
/// ``` QCborMap__ConstIterator* self, int64_t j ```
QCborMap__ConstIterator* q_cbormap__constiterator_operator_minus(void* self, int64_t j) {
    return QCborMap__ConstIterator_OperatorMinus((QCborMap__ConstIterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator-)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__ConstIterator* j ```
int64_t q_cbormap__constiterator_operator_minus_with_q_cbor_map_const_iterator(void* self, void* j) {
    return QCborMap__ConstIterator_OperatorMinusWithQCborMapConstIterator((QCborMap__ConstIterator*)self, (QCborMap__ConstIterator*)j);
}

/// Delete this object from C++ memory.
///
/// ``` QCborMap__ConstIterator* self ```
void q_cbormap__constiterator_delete(void* self) {
    QCborMap__ConstIterator_Delete((QCborMap__ConstIterator*)(self));
}