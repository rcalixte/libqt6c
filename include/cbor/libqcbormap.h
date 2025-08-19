#pragma once
#ifndef SRC_CBORQT6C_LIBQCBORMAP_H
#define SRC_CBORQT6C_LIBQCBORMAP_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qcbormap.html

/// q_cbormap_new constructs a new QCborMap object.
///
QCborMap* q_cbormap_new();

/// q_cbormap_new2 constructs a new QCborMap object.
///
/// @param other QCborMap*
QCborMap* q_cbormap_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator-eq)
///
/// @param self QCborMap*
/// @param other QCborMap*
void q_cbormap_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#swap)
///
/// @param self QCborMap*
/// @param other QCborMap*
void q_cbormap_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#toCborValue)
///
/// @param self QCborMap*
QCborValue* q_cbormap_to_cbor_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#size)
///
/// @param self QCborMap*
int64_t q_cbormap_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#isEmpty)
///
/// @param self QCborMap*
bool q_cbormap_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#clear)
///
/// @param self QCborMap*
void q_cbormap_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#keys)
///
/// @param self QCborMap*
libqt_list /* of QCborValue* */ q_cbormap_keys(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#value)
///
/// @param self QCborMap*
/// @param key long long
QCborValue* q_cbormap_value(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#value)
///
/// @param self QCborMap*
/// @param key const char*
QCborValue* q_cbormap_value3(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#value)
///
/// @param self QCborMap*
/// @param key QCborValue*
QCborValue* q_cbormap_value4(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
///
/// @param self QCborMap*
/// @param key long long
const QCborValue* q_cbormap_operator_subscript(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
///
/// @param self QCborMap*
/// @param key const char*
const QCborValue* q_cbormap_operator_subscript3(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
///
/// @param self QCborMap*
/// @param key QCborValue*
const QCborValue* q_cbormap_operator_subscript4(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
///
/// @param self QCborMap*
/// @param key long long
QCborValueRef* q_cbormap_operator_subscript5(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
///
/// @param self QCborMap*
/// @param key const char*
QCborValueRef* q_cbormap_operator_subscript7(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
///
/// @param self QCborMap*
/// @param key QCborValue*
QCborValueRef* q_cbormap_operator_subscript8(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#take)
///
/// @param self QCborMap*
/// @param key long long
QCborValue* q_cbormap_take(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#take)
///
/// @param self QCborMap*
/// @param key const char*
QCborValue* q_cbormap_take3(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#take)
///
/// @param self QCborMap*
/// @param key QCborValue*
QCborValue* q_cbormap_take4(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#remove)
///
/// @param self QCborMap*
/// @param key long long
void q_cbormap_remove(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#remove)
///
/// @param self QCborMap*
/// @param key const char*
void q_cbormap_remove3(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#remove)
///
/// @param self QCborMap*
/// @param key QCborValue*
void q_cbormap_remove4(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#contains)
///
/// @param self QCborMap*
/// @param key long long
bool q_cbormap_contains(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#contains)
///
/// @param self QCborMap*
/// @param key const char*
bool q_cbormap_contains3(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#contains)
///
/// @param self QCborMap*
/// @param key QCborValue*
bool q_cbormap_contains4(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#compare)
///
/// @param self QCborMap*
/// @param other QCborMap*
int32_t q_cbormap_compare(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#begin)
///
/// @param self QCborMap*
QCborMap__Iterator* q_cbormap_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#constBegin)
///
/// @param self QCborMap*
QCborMap__ConstIterator* q_cbormap_const_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#begin)
///
/// @param self QCborMap*
QCborMap__ConstIterator* q_cbormap_begin2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#cbegin)
///
/// @param self QCborMap*
QCborMap__ConstIterator* q_cbormap_cbegin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#end)
///
/// @param self QCborMap*
QCborMap__Iterator* q_cbormap_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#constEnd)
///
/// @param self QCborMap*
QCborMap__ConstIterator* q_cbormap_const_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#end)
///
/// @param self QCborMap*
QCborMap__ConstIterator* q_cbormap_end2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#cend)
///
/// @param self QCborMap*
QCborMap__ConstIterator* q_cbormap_cend(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#erase)
///
/// @param self QCborMap*
/// @param it QCborMap__Iterator*
QCborMap__Iterator* q_cbormap_erase(void* self, void* it);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#erase)
///
/// @param self QCborMap*
/// @param it QCborMap__ConstIterator*
QCborMap__Iterator* q_cbormap_erase2(void* self, void* it);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#extract)
///
/// @param self QCborMap*
/// @param it QCborMap__Iterator*
QCborValue* q_cbormap_extract(void* self, void* it);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#extract)
///
/// @param self QCborMap*
/// @param it QCborMap__ConstIterator*
QCborValue* q_cbormap_extract2(void* self, void* it);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#empty)
///
/// @param self QCborMap*
bool q_cbormap_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// @param self QCborMap*
/// @param key long long
QCborMap__Iterator* q_cbormap_find(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// @param self QCborMap*
/// @param key const char*
QCborMap__Iterator* q_cbormap_find3(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// @param self QCborMap*
/// @param key QCborValue*
QCborMap__Iterator* q_cbormap_find4(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#constFind)
///
/// @param self QCborMap*
/// @param key long long
QCborMap__ConstIterator* q_cbormap_const_find(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#constFind)
///
/// @param self QCborMap*
/// @param key const char*
QCborMap__ConstIterator* q_cbormap_const_find3(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#constFind)
///
/// @param self QCborMap*
/// @param key QCborValue*
QCborMap__ConstIterator* q_cbormap_const_find4(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// @param self QCborMap*
/// @param key long long
QCborMap__ConstIterator* q_cbormap_find5(void* self, long long key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// @param self QCborMap*
/// @param key const char*
QCborMap__ConstIterator* q_cbormap_find7(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// @param self QCborMap*
/// @param key QCborValue*
QCborMap__ConstIterator* q_cbormap_find8(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#insert)
///
/// @param self QCborMap*
/// @param key long long
/// @param value_ QCborValue*
QCborMap__Iterator* q_cbormap_insert(void* self, long long key, void* value_);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#insert)
///
/// @param self QCborMap*
/// @param key const char*
/// @param value_ QCborValue*
QCborMap__Iterator* q_cbormap_insert3(void* self, const char* key, void* value_);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#insert)
///
/// @param self QCborMap*
/// @param key QCborValue*
/// @param value_ QCborValue*
QCborMap__Iterator* q_cbormap_insert4(void* self, void* key, void* value_);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#insert)
///
/// @param self QCborMap*
/// @param v libqt_pair /* tuple of QCborValue* and QCborValue* */
QCborMap__Iterator* q_cbormap_insert5(void* self, libqt_pair /* tuple of QCborValue* and QCborValue* */ v);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#fromVariantMap)
///
/// @param mapVal libqt_map /* of const char* to QVariant* */
QCborMap* q_cbormap_from_variant_map(libqt_map /* of const char* to QVariant* */ mapVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#fromVariantHash)
///
/// @param hash libqt_map /* of const char* to QVariant* */
QCborMap* q_cbormap_from_variant_hash(libqt_map /* of const char* to QVariant* */ hash);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#fromJsonObject)
///
/// @param o QJsonObject*
QCborMap* q_cbormap_from_json_object(void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#toVariantMap)
///
/// @param self QCborMap*
libqt_map /* of const char* to QVariant* */ q_cbormap_to_variant_map(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#toVariantHash)
///
/// @param self QCborMap*
libqt_map /* of const char* to QVariant* */ q_cbormap_to_variant_hash(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#toJsonObject)
///
/// @param self QCborMap*
QJsonObject* q_cbormap_to_json_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#dtor.QCborMap)
///
/// Delete this object from C++ memory.
///
/// @param self QCborMap*
void q_cbormap_delete(void* self);

/// https://doc.qt.io/qt-6/qcbormap-iterator.html

/// q_cbormap__iterator_new constructs a new QCborMap::Iterator object.
///
/// @param other QCborMap__Iterator*
QCborMap__Iterator* q_cbormap__iterator_new(void* other);

/// q_cbormap__iterator_new2 constructs a new QCborMap::Iterator object.
///
QCborMap__Iterator* q_cbormap__iterator_new2();

/// q_cbormap__iterator_new3 constructs a new QCborMap::Iterator object.
///
/// @param param1 QCborMap__Iterator*
QCborMap__Iterator* q_cbormap__iterator_new3(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-eq)
///
/// @param self QCborMap__Iterator*
/// @param other QCborMap__Iterator*
void q_cbormap__iterator_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2a)
///
/// @param self QCborMap__Iterator*
libqt_pair /* tuple of QCborValue* and QCborValue* */ q_cbormap__iterator_operator_multiply(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-5b-5d)
///
/// @param self QCborMap__Iterator*
/// @param j int64_t
libqt_pair /* tuple of QCborValue* and QCborValue* */ q_cbormap__iterator_operator_subscript(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--gt)
///
/// @param self QCborMap__Iterator*
QCborValueRef* q_cbormap__iterator_operator_minus_greater(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--gt)
///
/// @param self QCborMap__Iterator*
const QCborValueConstRef* q_cbormap__iterator_operator_minus_greater2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-iterator.html#key)
///
/// @param self QCborMap__Iterator*
QCborValue* q_cbormap__iterator_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-iterator.html#value)
///
/// @param self QCborMap__Iterator*
QCborValueRef* q_cbormap__iterator_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2b-2b)
///
/// @param self QCborMap__Iterator*
QCborMap__Iterator* q_cbormap__iterator_operator_plus_plus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2b-2b)
///
/// @param self QCborMap__Iterator*
/// @param param1 int
QCborMap__Iterator* q_cbormap__iterator_operator_plus_plus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--)
///
/// @param self QCborMap__Iterator*
QCborMap__Iterator* q_cbormap__iterator_operator_minus_minus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--)
///
/// @param self QCborMap__Iterator*
/// @param param1 int
QCborMap__Iterator* q_cbormap__iterator_operator_minus_minus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2b-eq)
///
/// @param self QCborMap__Iterator*
/// @param j int64_t
QCborMap__Iterator* q_cbormap__iterator_operator_plus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--eq)
///
/// @param self QCborMap__Iterator*
/// @param j int64_t
QCborMap__Iterator* q_cbormap__iterator_operator_minus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2b)
///
/// @param self QCborMap__Iterator*
/// @param j int64_t
QCborMap__Iterator* q_cbormap__iterator_operator_plus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-)
///
/// @param self QCborMap__Iterator*
/// @param j int64_t
QCborMap__Iterator* q_cbormap__iterator_operator_minus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-)
///
/// @param self QCborMap__Iterator*
/// @param j QCborMap__Iterator*
int64_t q_cbormap__iterator_operator_minus2(void* self, void* j);

/// Delete this object from C++ memory.
///
/// @param self QCborMap__Iterator*
void q_cbormap__iterator_delete(void* self);

/// https://doc.qt.io/qt-6/qcbormap-constiterator.html

/// q_cbormap__constiterator_new constructs a new QCborMap::ConstIterator object.
///
/// @param other QCborMap__ConstIterator*
QCborMap__ConstIterator* q_cbormap__constiterator_new(void* other);

/// q_cbormap__constiterator_new2 constructs a new QCborMap::ConstIterator object.
///
QCborMap__ConstIterator* q_cbormap__constiterator_new2();

/// q_cbormap__constiterator_new3 constructs a new QCborMap::ConstIterator object.
///
/// @param param1 QCborMap__ConstIterator*
QCborMap__ConstIterator* q_cbormap__constiterator_new3(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-eq)
///
/// @param self QCborMap__ConstIterator*
/// @param other QCborMap__ConstIterator*
void q_cbormap__constiterator_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2a)
///
/// @param self QCborMap__ConstIterator*
libqt_pair /* tuple of QCborValue* and QCborValue* */ q_cbormap__constiterator_operator_multiply(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-5b-5d)
///
/// @param self QCborMap__ConstIterator*
/// @param j int64_t
libqt_pair /* tuple of QCborValue* and QCborValue* */ q_cbormap__constiterator_operator_subscript(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator--gt)
///
/// @param self QCborMap__ConstIterator*
const QCborValueConstRef* q_cbormap__constiterator_operator_minus_greater(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-constiterator.html#key)
///
/// @param self QCborMap__ConstIterator*
QCborValue* q_cbormap__constiterator_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-constiterator.html#value)
///
/// @param self QCborMap__ConstIterator*
QCborValueConstRef* q_cbormap__constiterator_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2b-2b)
///
/// @param self QCborMap__ConstIterator*
QCborMap__ConstIterator* q_cbormap__constiterator_operator_plus_plus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2b-2b)
///
/// @param self QCborMap__ConstIterator*
/// @param param1 int
QCborMap__ConstIterator* q_cbormap__constiterator_operator_plus_plus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator--)
///
/// @param self QCborMap__ConstIterator*
QCborMap__ConstIterator* q_cbormap__constiterator_operator_minus_minus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator--)
///
/// @param self QCborMap__ConstIterator*
/// @param param1 int
QCborMap__ConstIterator* q_cbormap__constiterator_operator_minus_minus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2b-eq)
///
/// @param self QCborMap__ConstIterator*
/// @param j int64_t
QCborMap__ConstIterator* q_cbormap__constiterator_operator_plus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator--eq)
///
/// @param self QCborMap__ConstIterator*
/// @param j int64_t
QCborMap__ConstIterator* q_cbormap__constiterator_operator_minus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2b)
///
/// @param self QCborMap__ConstIterator*
/// @param j int64_t
QCborMap__ConstIterator* q_cbormap__constiterator_operator_plus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-)
///
/// @param self QCborMap__ConstIterator*
/// @param j int64_t
QCborMap__ConstIterator* q_cbormap__constiterator_operator_minus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-)
///
/// @param self QCborMap__ConstIterator*
/// @param j QCborMap__ConstIterator*
int64_t q_cbormap__constiterator_operator_minus2(void* self, void* j);

/// Delete this object from C++ memory.
///
/// @param self QCborMap__ConstIterator*
void q_cbormap__constiterator_delete(void* self);

#endif
