#pragma once
#ifndef CBOR_LIBQCBORMAP_H
#define CBOR_LIBQCBORMAP_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

struct pair_qcborvalue_qcborvalue;

typedef struct pair_qcborvalue_qcborvalue pair_qcborvalue_qcborvalue;

#ifndef PAIR_QCBORVALUE_QCBORVALUE
#define PAIR_QCBORVALUE_QCBORVALUE
struct pair_qcborvalue_qcborvalue {
    QCborValue* first;
    QCborValue* second;
};
#endif

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html)

/// q_cbormap_new constructs a new QCborMap object.
///
QCborMap* q_cbormap_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html)

/// q_cbormap_new2 constructs a new QCborMap object.
///
/// @param other QCborMap*
///
QCborMap* q_cbormap_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-eq)
///
/// @param self QCborMap*
/// @param other QCborMap*
///
void q_cbormap_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#swap)
///
/// @param self QCborMap*
/// @param other QCborMap*
///
void q_cbormap_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#toCborValue)
///
/// @param self const QCborMap*
///
QCborValue* q_cbormap_to_cbor_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#size)
///
/// @param self const QCborMap*
///
intptr_t q_cbormap_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#isEmpty)
///
/// @param self const QCborMap*
///
bool q_cbormap_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#clear)
///
/// @param self QCborMap*
///
void q_cbormap_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#keys)
///
/// @param self const QCborMap*
///
/// @return libqt_list of QCborValue*
///
libqt_list q_cbormap_keys(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#value)
///
/// @param self const QCborMap*
/// @param key int64_t
///
QCborValue* q_cbormap_value(const void* self, int64_t key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#value)
///
/// @param self const QCborMap*
/// @param key char*
///
QCborValue* q_cbormap_value2(const void* self, char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#value)
///
/// @param self const QCborMap*
/// @param key const char*
///
QCborValue* q_cbormap_value3(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#value)
///
/// @param self const QCborMap*
/// @param key QCborValue*
///
QCborValue* q_cbormap_value4(const void* self, const void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
///
/// @param self const QCborMap*
/// @param key int64_t
///
const QCborValue* q_cbormap_operator_subscript(const void* self, int64_t key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
///
/// @param self const QCborMap*
/// @param key char*
///
const QCborValue* q_cbormap_operator_subscript2(const void* self, char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
///
/// @param self const QCborMap*
/// @param key const char*
///
const QCborValue* q_cbormap_operator_subscript3(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
///
/// @param self const QCborMap*
/// @param key QCborValue*
///
const QCborValue* q_cbormap_operator_subscript4(const void* self, const void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
///
/// @param self QCborMap*
/// @param key int64_t
///
QCborValueRef* q_cbormap_operator_subscript5(void* self, int64_t key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
///
/// @param self QCborMap*
/// @param key char*
///
QCborValueRef* q_cbormap_operator_subscript6(void* self, char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
///
/// @param self QCborMap*
/// @param key const char*
///
QCborValueRef* q_cbormap_operator_subscript7(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
///
/// @param self QCborMap*
/// @param key QCborValue*
///
QCborValueRef* q_cbormap_operator_subscript8(void* self, const void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#take)
///
/// @param self QCborMap*
/// @param key int64_t
///
QCborValue* q_cbormap_take(void* self, int64_t key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#take)
///
/// @param self QCborMap*
/// @param key char*
///
QCborValue* q_cbormap_take2(void* self, char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#take)
///
/// @param self QCborMap*
/// @param key const char*
///
QCborValue* q_cbormap_take3(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#take)
///
/// @param self QCborMap*
/// @param key QCborValue*
///
QCborValue* q_cbormap_take4(void* self, const void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#remove)
///
/// @param self QCborMap*
/// @param key int64_t
///
void q_cbormap_remove(void* self, int64_t key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#remove)
///
/// @param self QCborMap*
/// @param key char*
///
void q_cbormap_remove2(void* self, char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#remove)
///
/// @param self QCborMap*
/// @param key const char*
///
void q_cbormap_remove3(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#remove)
///
/// @param self QCborMap*
/// @param key QCborValue*
///
void q_cbormap_remove4(void* self, const void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#contains)
///
/// @param self const QCborMap*
/// @param key int64_t
///
bool q_cbormap_contains(const void* self, int64_t key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#contains)
///
/// @param self const QCborMap*
/// @param key char*
///
bool q_cbormap_contains2(const void* self, char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#contains)
///
/// @param self const QCborMap*
/// @param key const char*
///
bool q_cbormap_contains3(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#contains)
///
/// @param self const QCborMap*
/// @param key QCborValue*
///
bool q_cbormap_contains4(const void* self, const void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#compare)
///
/// @param self const QCborMap*
/// @param other QCborMap*
///
int32_t q_cbormap_compare(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#begin)
///
/// @param self QCborMap*
///
QCborMap__Iterator* q_cbormap_begin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#constBegin)
///
/// @param self const QCborMap*
///
QCborMap__ConstIterator* q_cbormap_const_begin(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#begin)
///
/// @param self const QCborMap*
///
QCborMap__ConstIterator* q_cbormap_begin2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#cbegin)
///
/// @param self const QCborMap*
///
QCborMap__ConstIterator* q_cbormap_cbegin(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#end)
///
/// @param self QCborMap*
///
QCborMap__Iterator* q_cbormap_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#constEnd)
///
/// @param self const QCborMap*
///
QCborMap__ConstIterator* q_cbormap_const_end(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#end)
///
/// @param self const QCborMap*
///
QCborMap__ConstIterator* q_cbormap_end2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#cend)
///
/// @param self const QCborMap*
///
QCborMap__ConstIterator* q_cbormap_cend(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#erase)
///
/// @param self QCborMap*
/// @param it QCborMap__Iterator*
///
QCborMap__Iterator* q_cbormap_erase(void* self, void* it);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#erase)
///
/// @param self QCborMap*
/// @param it QCborMap__ConstIterator*
///
QCborMap__Iterator* q_cbormap_erase2(void* self, void* it);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#extract)
///
/// @param self QCborMap*
/// @param it QCborMap__Iterator*
///
QCborValue* q_cbormap_extract(void* self, void* it);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#extract)
///
/// @param self QCborMap*
/// @param it QCborMap__ConstIterator*
///
QCborValue* q_cbormap_extract2(void* self, void* it);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#empty)
///
/// @param self const QCborMap*
///
bool q_cbormap_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// @param self QCborMap*
/// @param key int64_t
///
QCborMap__Iterator* q_cbormap_find(void* self, int64_t key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// @param self QCborMap*
/// @param key char*
///
QCborMap__Iterator* q_cbormap_find2(void* self, char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// @param self QCborMap*
/// @param key const char*
///
QCborMap__Iterator* q_cbormap_find3(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// @param self QCborMap*
/// @param key QCborValue*
///
QCborMap__Iterator* q_cbormap_find4(void* self, const void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#constFind)
///
/// @param self const QCborMap*
/// @param key int64_t
///
QCborMap__ConstIterator* q_cbormap_const_find(const void* self, int64_t key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#constFind)
///
/// @param self const QCborMap*
/// @param key char*
///
QCborMap__ConstIterator* q_cbormap_const_find2(const void* self, char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#constFind)
///
/// @param self const QCborMap*
/// @param key const char*
///
QCborMap__ConstIterator* q_cbormap_const_find3(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#constFind)
///
/// @param self const QCborMap*
/// @param key QCborValue*
///
QCborMap__ConstIterator* q_cbormap_const_find4(const void* self, const void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// @param self const QCborMap*
/// @param key int64_t
///
QCborMap__ConstIterator* q_cbormap_find5(const void* self, int64_t key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// @param self const QCborMap*
/// @param key char*
///
QCborMap__ConstIterator* q_cbormap_find6(const void* self, char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// @param self const QCborMap*
/// @param key const char*
///
QCborMap__ConstIterator* q_cbormap_find7(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
///
/// @param self const QCborMap*
/// @param key QCborValue*
///
QCborMap__ConstIterator* q_cbormap_find8(const void* self, const void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#insert)
///
/// @param self QCborMap*
/// @param key int64_t
/// @param value_ QCborValue*
///
QCborMap__Iterator* q_cbormap_insert(void* self, int64_t key, const void* value_);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#insert)
///
/// @param self QCborMap*
/// @param key char*
/// @param value_ QCborValue*
///
QCborMap__Iterator* q_cbormap_insert2(void* self, char* key, const void* value_);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#insert)
///
/// @param self QCborMap*
/// @param key const char*
/// @param value_ QCborValue*
///
QCborMap__Iterator* q_cbormap_insert3(void* self, const char* key, const void* value_);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#insert)
///
/// @param self QCborMap*
/// @param key QCborValue*
/// @param value_ QCborValue*
///
QCborMap__Iterator* q_cbormap_insert4(void* self, const void* key, const void* value_);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#insert)
///
/// @param self QCborMap*
/// @param v pair_qcborvalue_qcborvalue tuple of QCborValue* and QCborValue*
///
QCborMap__Iterator* q_cbormap_insert5(void* self, pair_qcborvalue_qcborvalue v);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#fromVariantMap)
///
/// @param map libqt_map of const char* to QVariant*
///
QCborMap* q_cbormap_from_variant_map(libqt_map map);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#fromVariantHash)
///
/// @param hash libqt_map of const char* to QVariant*
///
QCborMap* q_cbormap_from_variant_hash(libqt_map hash);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#fromJsonObject)
///
/// @param o QJsonObject*
///
QCborMap* q_cbormap_from_json_object(const void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#toVariantMap)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of const char* to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self const QCborMap*
///
/// @return libqt_map of const char* to QVariant*
///
libqt_map q_cbormap_to_variant_map(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#toVariantHash)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of const char* to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self const QCborMap*
///
/// @return libqt_map of const char* to QVariant*
///
libqt_map q_cbormap_to_variant_hash(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#toJsonObject)
///
/// @param self const QCborMap*
///
QJsonObject* q_cbormap_to_json_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#dtor.QCborMap)
///
/// Delete this object from C++ memory.
///
/// @param self QCborMap*
///
void q_cbormap_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#qHash)
///
/// @param map QCborMap*
/// @param seed size_t
///
size_t q_qcbormap_q_hash(const void* map, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html)

/// q_cbormap__iterator_new constructs a new QCborMap::Iterator object.
///
/// @param other QCborMap__Iterator*
///
QCborMap__Iterator* q_cbormap__iterator_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html)

/// q_cbormap__iterator_new2 constructs a new QCborMap::Iterator object.
///
QCborMap__Iterator* q_cbormap__iterator_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html)

/// q_cbormap__iterator_new3 constructs a new QCborMap::Iterator object.
///
/// @param param1 QCborMap__Iterator*
///
QCborMap__Iterator* q_cbormap__iterator_new3(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-eq)
///
/// @param self QCborMap__Iterator*
/// @param other QCborMap__Iterator*
///
void q_cbormap__iterator_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2a)
///
/// @param self const QCborMap__Iterator*
///
/// @return pair_qcborvalue_qcborvalue tuple of QCborValue* and QCborValue*
///
pair_qcborvalue_qcborvalue q_cbormap__iterator_operator_multiply(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-5b-5d)
///
/// @param self const QCborMap__Iterator*
/// @param j intptr_t
///
/// @return pair_qcborvalue_qcborvalue tuple of QCborValue* and QCborValue*
///
pair_qcborvalue_qcborvalue q_cbormap__iterator_operator_subscript(const void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--gt)
///
/// @param self QCborMap__Iterator*
///
QCborValueRef* q_cbormap__iterator_operator_minus_greater(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--gt)
///
/// @param self const QCborMap__Iterator*
///
const QCborValueConstRef* q_cbormap__iterator_operator_minus_greater2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#key)
///
/// @param self const QCborMap__Iterator*
///
QCborValue* q_cbormap__iterator_key(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#value)
///
/// @param self const QCborMap__Iterator*
///
QCborValueRef* q_cbormap__iterator_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2b-2b)
///
/// @param self QCborMap__Iterator*
///
QCborMap__Iterator* q_cbormap__iterator_operator_plus_plus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2b-2b)
///
/// @param self QCborMap__Iterator*
/// @param param1 int
///
QCborMap__Iterator* q_cbormap__iterator_operator_plus_plus2(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--)
///
/// @param self QCborMap__Iterator*
///
QCborMap__Iterator* q_cbormap__iterator_operator_minus_minus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--)
///
/// @param self QCborMap__Iterator*
/// @param param1 int
///
QCborMap__Iterator* q_cbormap__iterator_operator_minus_minus2(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2b-eq)
///
/// @param self QCborMap__Iterator*
/// @param j intptr_t
///
QCborMap__Iterator* q_cbormap__iterator_operator_plus_assign(void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--eq)
///
/// @param self QCborMap__Iterator*
/// @param j intptr_t
///
QCborMap__Iterator* q_cbormap__iterator_operator_minus_assign(void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2b)
///
/// @param self const QCborMap__Iterator*
/// @param j intptr_t
///
QCborMap__Iterator* q_cbormap__iterator_operator_plus(const void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-)
///
/// @param self const QCborMap__Iterator*
/// @param j intptr_t
///
QCborMap__Iterator* q_cbormap__iterator_operator_minus(const void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-)
///
/// @param self const QCborMap__Iterator*
/// @param j QCborMap__Iterator*
///
intptr_t q_cbormap__iterator_operator_minus2(const void* self, void* j);

/// Delete this object from C++ memory.
///
/// @param self QCborMap__Iterator*
///
void q_cbormap__iterator_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html)

/// q_cbormap__constiterator_new constructs a new QCborMap::ConstIterator object.
///
/// @param other QCborMap__ConstIterator*
///
QCborMap__ConstIterator* q_cbormap__constiterator_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html)

/// q_cbormap__constiterator_new2 constructs a new QCborMap::ConstIterator object.
///
QCborMap__ConstIterator* q_cbormap__constiterator_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html)

/// q_cbormap__constiterator_new3 constructs a new QCborMap::ConstIterator object.
///
/// @param param1 QCborMap__ConstIterator*
///
QCborMap__ConstIterator* q_cbormap__constiterator_new3(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-eq)
///
/// @param self QCborMap__ConstIterator*
/// @param other QCborMap__ConstIterator*
///
void q_cbormap__constiterator_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2a)
///
/// @param self const QCborMap__ConstIterator*
///
/// @return pair_qcborvalue_qcborvalue tuple of QCborValue* and QCborValue*
///
pair_qcborvalue_qcborvalue q_cbormap__constiterator_operator_multiply(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-5b-5d)
///
/// @param self const QCborMap__ConstIterator*
/// @param j intptr_t
///
/// @return pair_qcborvalue_qcborvalue tuple of QCborValue* and QCborValue*
///
pair_qcborvalue_qcborvalue q_cbormap__constiterator_operator_subscript(const void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator--gt)
///
/// @param self const QCborMap__ConstIterator*
///
const QCborValueConstRef* q_cbormap__constiterator_operator_minus_greater(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#key)
///
/// @param self const QCborMap__ConstIterator*
///
QCborValue* q_cbormap__constiterator_key(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#value)
///
/// @param self const QCborMap__ConstIterator*
///
QCborValueConstRef* q_cbormap__constiterator_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2b-2b)
///
/// @param self QCborMap__ConstIterator*
///
QCborMap__ConstIterator* q_cbormap__constiterator_operator_plus_plus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2b-2b)
///
/// @param self QCborMap__ConstIterator*
/// @param param1 int
///
QCborMap__ConstIterator* q_cbormap__constiterator_operator_plus_plus2(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator--)
///
/// @param self QCborMap__ConstIterator*
///
QCborMap__ConstIterator* q_cbormap__constiterator_operator_minus_minus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator--)
///
/// @param self QCborMap__ConstIterator*
/// @param param1 int
///
QCborMap__ConstIterator* q_cbormap__constiterator_operator_minus_minus2(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2b-eq)
///
/// @param self QCborMap__ConstIterator*
/// @param j intptr_t
///
QCborMap__ConstIterator* q_cbormap__constiterator_operator_plus_assign(void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator--eq)
///
/// @param self QCborMap__ConstIterator*
/// @param j intptr_t
///
QCborMap__ConstIterator* q_cbormap__constiterator_operator_minus_assign(void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2b)
///
/// @param self const QCborMap__ConstIterator*
/// @param j intptr_t
///
QCborMap__ConstIterator* q_cbormap__constiterator_operator_plus(const void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-)
///
/// @param self const QCborMap__ConstIterator*
/// @param j intptr_t
///
QCborMap__ConstIterator* q_cbormap__constiterator_operator_minus(const void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-)
///
/// @param self const QCborMap__ConstIterator*
/// @param j QCborMap__ConstIterator*
///
intptr_t q_cbormap__constiterator_operator_minus2(const void* self, void* j);

/// Delete this object from C++ memory.
///
/// @param self QCborMap__ConstIterator*
///
void q_cbormap__constiterator_delete(void* self);

#endif
