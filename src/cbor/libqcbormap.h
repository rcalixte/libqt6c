#pragma once
#ifndef SRC_CBORQT6C_LIBQCBORMAP_H
#define SRC_CBORQT6C_LIBQCBORMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqcborvalue.h"
#include "../libqjsonobject.h"
#include <string.h>
#include "../libqvariant.h"

/// https://doc.qt.io/qt-6/qcbormap.html

/// q_cbormap_new constructs a new QCborMap object.
///
///
QCborMap* q_cbormap_new();

/// q_cbormap_new2 constructs a new QCborMap object.
///
/// ``` QCborMap* other ```
QCborMap* q_cbormap_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator=)
///
/// ``` QCborMap* self, QCborMap* other ```
void q_cbormap_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#swap)
///
/// ``` QCborMap* self, QCborMap* other ```
void q_cbormap_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#toCborValue)
///
/// ``` QCborMap* self ```
QCborValue* q_cbormap_to_cbor_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#size)
///
/// ``` QCborMap* self ```
int64_t q_cbormap_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#isEmpty)
///
/// ``` QCborMap* self ```
bool q_cbormap_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#clear)
///
/// ``` QCborMap* self ```
void q_cbormap_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#keys)
///
/// ``` QCborMap* self ```
libqt_list /* of QCborValue* */ q_cbormap_keys(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#value)
///
/// ``` QCborMap* self, long long key ```
QCborValue* q_cbormap_value(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#value)
///
/// ``` QCborMap* self, const char* key ```
QCborValue* q_cbormap_value2(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#value)
///
/// ``` QCborMap* self, QCborValue* key ```
QCborValue* q_cbormap_value3(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator[])
///
/// ``` QCborMap* self, long long key ```
QCborValue* q_cbormap_operator_subscript(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator[])
///
/// ``` QCborMap* self, const char* key ```
QCborValue* q_cbormap_operator_subscript2(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator[])
///
/// ``` QCborMap* self, QCborValue* key ```
QCborValue* q_cbormap_operator_subscript3(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator[])
///
/// ``` QCborMap* self, long long key ```
QCborValueRef* q_cbormap_operator_subscript4(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator[])
///
/// ``` QCborMap* self, const char* key ```
QCborValueRef* q_cbormap_operator_subscript6(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator[])
///
/// ``` QCborMap* self, QCborValue* key ```
QCborValueRef* q_cbormap_operator_subscript7(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#take)
///
/// ``` QCborMap* self, long long key ```
QCborValue* q_cbormap_take(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#take)
///
/// ``` QCborMap* self, const char* key ```
QCborValue* q_cbormap_take2(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#take)
///
/// ``` QCborMap* self, QCborValue* key ```
QCborValue* q_cbormap_take3(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#remove)
///
/// ``` QCborMap* self, long long key ```
void q_cbormap_remove(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#remove)
///
/// ``` QCborMap* self, const char* key ```
void q_cbormap_remove2(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#remove)
///
/// ``` QCborMap* self, QCborValue* key ```
void q_cbormap_remove3(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#contains)
///
/// ``` QCborMap* self, long long key ```
bool q_cbormap_contains(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#contains)
///
/// ``` QCborMap* self, const char* key ```
bool q_cbormap_contains2(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#contains)
///
/// ``` QCborMap* self, QCborValue* key ```
bool q_cbormap_contains3(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#compare)
///
/// ``` QCborMap* self, QCborMap* other ```
int32_t q_cbormap_compare(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator==)
///
/// ``` QCborMap* self, QCborMap* other ```
bool q_cbormap_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator!=)
///
/// ``` QCborMap* self, QCborMap* other ```
bool q_cbormap_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator<)
///
/// ``` QCborMap* self, QCborMap* other ```
bool q_cbormap_operator_lesser(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#begin)
///
/// ``` QCborMap* self ```
QCborMap__Iterator* q_cbormap_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#constBegin)
///
/// ``` QCborMap* self ```
QCborMap__ConstIterator* q_cbormap_const_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#begin)
///
/// ``` QCborMap* self ```
QCborMap__ConstIterator* q_cbormap_begin2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#cbegin)
///
/// ``` QCborMap* self ```
QCborMap__ConstIterator* q_cbormap_cbegin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#end)
///
/// ``` QCborMap* self ```
QCborMap__Iterator* q_cbormap_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#constEnd)
///
/// ``` QCborMap* self ```
QCborMap__ConstIterator* q_cbormap_const_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#end)
///
/// ``` QCborMap* self ```
QCborMap__ConstIterator* q_cbormap_end2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#cend)
///
/// ``` QCborMap* self ```
QCborMap__ConstIterator* q_cbormap_cend(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#erase)
///
/// ``` QCborMap* self, QCborMap__Iterator* it ```
QCborMap__Iterator* q_cbormap_erase(void* self, void* it);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#erase)
///
/// ``` QCborMap* self, QCborMap__ConstIterator* it ```
QCborMap__Iterator* q_cbormap_erase_with_it(void* self, void* it);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#extract)
///
/// ``` QCborMap* self, QCborMap__Iterator* it ```
QCborValue* q_cbormap_extract(void* self, void* it);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#extract)
///
/// ``` QCborMap* self, QCborMap__ConstIterator* it ```
QCborValue* q_cbormap_extract_with_it(void* self, void* it);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#empty)
///
/// ``` QCborMap* self ```
bool q_cbormap_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// ``` QCborMap* self, long long key ```
QCborMap__Iterator* q_cbormap_find(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// ``` QCborMap* self, const char* key ```
QCborMap__Iterator* q_cbormap_find2(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// ``` QCborMap* self, QCborValue* key ```
QCborMap__Iterator* q_cbormap_find3(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#constFind)
///
/// ``` QCborMap* self, long long key ```
QCborMap__ConstIterator* q_cbormap_const_find(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#constFind)
///
/// ``` QCborMap* self, const char* key ```
QCborMap__ConstIterator* q_cbormap_const_find2(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#constFind)
///
/// ``` QCborMap* self, QCborValue* key ```
QCborMap__ConstIterator* q_cbormap_const_find3(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// ``` QCborMap* self, long long key ```
QCborMap__ConstIterator* q_cbormap_find4(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// ``` QCborMap* self, const char* key ```
QCborMap__ConstIterator* q_cbormap_find6(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// ``` QCborMap* self, QCborValue* key ```
QCborMap__ConstIterator* q_cbormap_find7(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#insert)
///
/// ``` QCborMap* self, long long key, QCborValue* value_ ```
QCborMap__Iterator* q_cbormap_insert(void* self, long long key, void* value_);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#insert)
///
/// ``` QCborMap* self, const char* key, QCborValue* value_ ```
QCborMap__Iterator* q_cbormap_insert3(void* self, const char* key, void* value_);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#insert)
///
/// ``` QCborMap* self, QCborValue* key, QCborValue* value_ ```
QCborMap__Iterator* q_cbormap_insert4(void* self, void* key, void* value_);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#insert)
///
/// ``` QCborMap* self, libqt_pair /* tuple of QCborValue* and QCborValue* */ v ```
QCborMap__Iterator* q_cbormap_insert_with_q_cbor_mapvalue_type(void* self, libqt_pair /* tuple of QCborValue* and QCborValue* */ v);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#fromVariantMap)
///
/// ``` libqt_map /* of const char* to QVariant* */ mapVal ```
QCborMap* q_cbormap_from_variant_map(libqt_map /* of const char* to QVariant* */ mapVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#fromVariantHash)
///
/// ``` libqt_map /* of const char* to QVariant* */ hash ```
QCborMap* q_cbormap_from_variant_hash(libqt_map /* of const char* to QVariant* */ hash);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#fromJsonObject)
///
/// ``` QJsonObject* o ```
QCborMap* q_cbormap_from_json_object(void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#toVariantMap)
///
/// ``` QCborMap* self ```
libqt_map /* of const char* to QVariant* */ q_cbormap_to_variant_map(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#toVariantHash)
///
/// ``` QCborMap* self ```
libqt_map /* of const char* to QVariant* */ q_cbormap_to_variant_hash(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#toJsonObject)
///
/// ``` QCborMap* self ```
QJsonObject* q_cbormap_to_json_object(void* self);

/// Delete this object from C++ memory.
///
/// ``` QCborMap* self ```
void q_cbormap_delete(void* self);

/// https://doc.qt.io/qt-6/qcbormap-iterator.html

/// q_cbormap__iterator_new constructs a new QCborMap::Iterator object.
///
/// ``` QCborMap__Iterator* other ```
QCborMap__Iterator* q_cbormap__iterator_new(void* other);

/// q_cbormap__iterator_new2 constructs a new QCborMap::Iterator object.
///
///
QCborMap__Iterator* q_cbormap__iterator_new2();

/// q_cbormap__iterator_new3 constructs a new QCborMap::Iterator object.
///
/// ``` QCborMap__Iterator* param1 ```
QCborMap__Iterator* q_cbormap__iterator_new3(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator=)
///
/// ``` QCborMap__Iterator* self, QCborMap__Iterator* other ```
void q_cbormap__iterator_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator*)
///
/// ``` QCborMap__Iterator* self ```
libqt_pair /* tuple of QCborValueConstRef* and QCborValueRef* */ q_cbormap__iterator_operator_multiply(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator[])
///
/// ``` QCborMap__Iterator* self, int64_t j ```
libqt_pair /* tuple of QCborValueConstRef* and QCborValueRef* */ q_cbormap__iterator_operator_subscript(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator->)
///
/// ``` QCborMap__Iterator* self ```
QCborValueRef* q_cbormap__iterator_operator_minus_greater(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator->)
///
/// ``` QCborMap__Iterator* self ```
QCborValueConstRef* q_cbormap__iterator_operator_minus_greater2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#key)
///
/// ``` QCborMap__Iterator* self ```
QCborValue* q_cbormap__iterator_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#value)
///
/// ``` QCborMap__Iterator* self ```
QCborValueRef* q_cbormap__iterator_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator==)
///
/// ``` QCborMap__Iterator* self, QCborMap__Iterator* o ```
bool q_cbormap__iterator_operator_equal(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator!=)
///
/// ``` QCborMap__Iterator* self, QCborMap__Iterator* o ```
bool q_cbormap__iterator_operator_not_equal(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator<)
///
/// ``` QCborMap__Iterator* self, QCborMap__Iterator* other ```
bool q_cbormap__iterator_operator_lesser(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator<=)
///
/// ``` QCborMap__Iterator* self, QCborMap__Iterator* other ```
bool q_cbormap__iterator_operator_lesser_or_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator>)
///
/// ``` QCborMap__Iterator* self, QCborMap__Iterator* other ```
bool q_cbormap__iterator_operator_greater(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator>=)
///
/// ``` QCborMap__Iterator* self, QCborMap__Iterator* other ```
bool q_cbormap__iterator_operator_greater_or_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator==)
///
/// ``` QCborMap__Iterator* self, QCborMap__ConstIterator* o ```
bool q_cbormap__iterator_operator_equal_with_q_cbor_map_const_iterator(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator!=)
///
/// ``` QCborMap__Iterator* self, QCborMap__ConstIterator* o ```
bool q_cbormap__iterator_operator_not_equal_with_q_cbor_map_const_iterator(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator<)
///
/// ``` QCborMap__Iterator* self, QCborMap__ConstIterator* other ```
bool q_cbormap__iterator_operator_lesser_with_other(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator<=)
///
/// ``` QCborMap__Iterator* self, QCborMap__ConstIterator* other ```
bool q_cbormap__iterator_operator_lesser_or_equal_with_other(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator>)
///
/// ``` QCborMap__Iterator* self, QCborMap__ConstIterator* other ```
bool q_cbormap__iterator_operator_greater_with_other(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator>=)
///
/// ``` QCborMap__Iterator* self, QCborMap__ConstIterator* other ```
bool q_cbormap__iterator_operator_greater_or_equal_with_other(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator++)
///
/// ``` QCborMap__Iterator* self ```
QCborMap__Iterator* q_cbormap__iterator_operator_plus_plus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator++)
///
/// ``` QCborMap__Iterator* self, int param1 ```
QCborMap__Iterator* q_cbormap__iterator_operator_plus_plus_with_int(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator--)
///
/// ``` QCborMap__Iterator* self ```
QCborMap__Iterator* q_cbormap__iterator_operator_minus_minus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator--)
///
/// ``` QCborMap__Iterator* self, int param1 ```
QCborMap__Iterator* q_cbormap__iterator_operator_minus_minus_with_int(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator+=)
///
/// ``` QCborMap__Iterator* self, int64_t j ```
QCborMap__Iterator* q_cbormap__iterator_operator_plus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator-=)
///
/// ``` QCborMap__Iterator* self, int64_t j ```
QCborMap__Iterator* q_cbormap__iterator_operator_minus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator+)
///
/// ``` QCborMap__Iterator* self, int64_t j ```
QCborMap__Iterator* q_cbormap__iterator_operator_plus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator-)
///
/// ``` QCborMap__Iterator* self, int64_t j ```
QCborMap__Iterator* q_cbormap__iterator_operator_minus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator-)
///
/// ``` QCborMap__Iterator* self, QCborMap__Iterator* j ```
int64_t q_cbormap__iterator_operator_minus_with_q_cbor_map_iterator(void* self, void* j);

/// Delete this object from C++ memory.
///
/// ``` QCborMap__Iterator* self ```
void q_cbormap__iterator_delete(void* self);

/// https://doc.qt.io/qt-6/qcbormap-constiterator.html

/// q_cbormap__constiterator_new constructs a new QCborMap::ConstIterator object.
///
/// ``` QCborMap__ConstIterator* other ```
QCborMap__ConstIterator* q_cbormap__constiterator_new(void* other);

/// q_cbormap__constiterator_new2 constructs a new QCborMap::ConstIterator object.
///
///
QCborMap__ConstIterator* q_cbormap__constiterator_new2();

/// q_cbormap__constiterator_new3 constructs a new QCborMap::ConstIterator object.
///
/// ``` QCborMap__ConstIterator* param1 ```
QCborMap__ConstIterator* q_cbormap__constiterator_new3(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator=)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__ConstIterator* other ```
void q_cbormap__constiterator_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator*)
///
/// ``` QCborMap__ConstIterator* self ```
libqt_pair /* tuple of QCborValueConstRef* and QCborValueConstRef* */ q_cbormap__constiterator_operator_multiply(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator[])
///
/// ``` QCborMap__ConstIterator* self, int64_t j ```
libqt_pair /* tuple of QCborValueConstRef* and QCborValueConstRef* */ q_cbormap__constiterator_operator_subscript(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator->)
///
/// ``` QCborMap__ConstIterator* self ```
QCborValueConstRef* q_cbormap__constiterator_operator_minus_greater(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#key)
///
/// ``` QCborMap__ConstIterator* self ```
QCborValue* q_cbormap__constiterator_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#value)
///
/// ``` QCborMap__ConstIterator* self ```
QCborValueConstRef* q_cbormap__constiterator_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator==)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__Iterator* o ```
bool q_cbormap__constiterator_operator_equal(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator!=)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__Iterator* o ```
bool q_cbormap__constiterator_operator_not_equal(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator<)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__Iterator* other ```
bool q_cbormap__constiterator_operator_lesser(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator<=)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__Iterator* other ```
bool q_cbormap__constiterator_operator_lesser_or_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator>)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__Iterator* other ```
bool q_cbormap__constiterator_operator_greater(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator>=)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__Iterator* other ```
bool q_cbormap__constiterator_operator_greater_or_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator==)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__ConstIterator* o ```
bool q_cbormap__constiterator_operator_equal_with_q_cbor_map_const_iterator(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator!=)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__ConstIterator* o ```
bool q_cbormap__constiterator_operator_not_equal_with_q_cbor_map_const_iterator(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator<)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__ConstIterator* other ```
bool q_cbormap__constiterator_operator_lesser_with_other(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator<=)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__ConstIterator* other ```
bool q_cbormap__constiterator_operator_lesser_or_equal_with_other(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator>)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__ConstIterator* other ```
bool q_cbormap__constiterator_operator_greater_with_other(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator>=)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__ConstIterator* other ```
bool q_cbormap__constiterator_operator_greater_or_equal_with_other(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator++)
///
/// ``` QCborMap__ConstIterator* self ```
QCborMap__ConstIterator* q_cbormap__constiterator_operator_plus_plus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator++)
///
/// ``` QCborMap__ConstIterator* self, int param1 ```
QCborMap__ConstIterator* q_cbormap__constiterator_operator_plus_plus_with_int(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator--)
///
/// ``` QCborMap__ConstIterator* self ```
QCborMap__ConstIterator* q_cbormap__constiterator_operator_minus_minus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator--)
///
/// ``` QCborMap__ConstIterator* self, int param1 ```
QCborMap__ConstIterator* q_cbormap__constiterator_operator_minus_minus_with_int(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator+=)
///
/// ``` QCborMap__ConstIterator* self, int64_t j ```
QCborMap__ConstIterator* q_cbormap__constiterator_operator_plus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator-=)
///
/// ``` QCborMap__ConstIterator* self, int64_t j ```
QCborMap__ConstIterator* q_cbormap__constiterator_operator_minus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator+)
///
/// ``` QCborMap__ConstIterator* self, int64_t j ```
QCborMap__ConstIterator* q_cbormap__constiterator_operator_plus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator-)
///
/// ``` QCborMap__ConstIterator* self, int64_t j ```
QCborMap__ConstIterator* q_cbormap__constiterator_operator_minus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator-)
///
/// ``` QCborMap__ConstIterator* self, QCborMap__ConstIterator* j ```
int64_t q_cbormap__constiterator_operator_minus_with_q_cbor_map_const_iterator(void* self, void* j);

/// Delete this object from C++ memory.
///
/// ``` QCborMap__ConstIterator* self ```
void q_cbormap__constiterator_delete(void* self);

#endif
