#pragma once
#ifndef LIBQJSONOBJECT_H
#define LIBQJSONOBJECT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html)

/// q_jsonobject_new constructs a new QJsonObject object.
///
QJsonObject* q_jsonobject_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html)

/// q_jsonobject_new2 constructs a new QJsonObject object.
///
/// @param other QJsonObject*
///
QJsonObject* q_jsonobject_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#operator-eq)
///
/// @param self QJsonObject*
/// @param other QJsonObject*
///
void q_jsonobject_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#swap)
///
/// @param self QJsonObject*
/// @param other QJsonObject*
///
void q_jsonobject_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#fromVariantMap)
///
/// @param map libqt_map of const char* to QVariant*
///
QJsonObject* q_jsonobject_from_variant_map(libqt_map map);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#toVariantMap)
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
/// @param self const QJsonObject*
///
/// @return libqt_map of const char* to QVariant*
///
libqt_map q_jsonobject_to_variant_map(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#fromVariantHash)
///
/// @param map libqt_map of const char* to QVariant*
///
QJsonObject* q_jsonobject_from_variant_hash(libqt_map map);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#toVariantHash)
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
/// @param self const QJsonObject*
///
/// @return libqt_map of const char* to QVariant*
///
libqt_map q_jsonobject_to_variant_hash(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#keys)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QJsonObject*
///
const char** q_jsonobject_keys(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#size)
///
/// @param self const QJsonObject*
///
intptr_t q_jsonobject_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#count)
///
/// @param self const QJsonObject*
///
intptr_t q_jsonobject_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#length)
///
/// @param self const QJsonObject*
///
intptr_t q_jsonobject_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#isEmpty)
///
/// @param self const QJsonObject*
///
bool q_jsonobject_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#value)
///
/// @param self const QJsonObject*
/// @param key const char*
///
QJsonValue* q_jsonobject_value(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#operator-5b-5d)
///
/// @param self const QJsonObject*
/// @param key const char*
///
QJsonValue* q_jsonobject_operator_subscript(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#operator-5b-5d)
///
/// @param self QJsonObject*
/// @param key const char*
///
QJsonValueRef* q_jsonobject_operator_subscript2(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#value)
///
/// @param self const QJsonObject*
/// @param key const char*
///
QJsonValue* q_jsonobject_value2(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#value)
///
/// @param self const QJsonObject*
/// @param key const char*
///
QJsonValue* q_jsonobject_value3(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#operator-5b-5d)
///
/// @param self const QJsonObject*
/// @param key const char*
///
QJsonValue* q_jsonobject_operator_subscript3(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#operator-5b-5d)
///
/// @param self const QJsonObject*
/// @param key const char*
///
QJsonValue* q_jsonobject_operator_subscript4(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#operator-5b-5d)
///
/// @param self QJsonObject*
/// @param key const char*
///
QJsonValueRef* q_jsonobject_operator_subscript5(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#operator-5b-5d)
///
/// @param self QJsonObject*
/// @param key const char*
///
QJsonValueRef* q_jsonobject_operator_subscript6(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#remove)
///
/// @param self QJsonObject*
/// @param key const char*
///
void q_jsonobject_remove(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#take)
///
/// @param self QJsonObject*
/// @param key const char*
///
QJsonValue* q_jsonobject_take(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#contains)
///
/// @param self const QJsonObject*
/// @param key const char*
///
bool q_jsonobject_contains(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#remove)
///
/// @param self QJsonObject*
/// @param key const char*
///
void q_jsonobject_remove2(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#remove)
///
/// @param self QJsonObject*
/// @param key const char*
///
void q_jsonobject_remove3(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#take)
///
/// @param self QJsonObject*
/// @param key const char*
///
QJsonValue* q_jsonobject_take2(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#take)
///
/// @param self QJsonObject*
/// @param key const char*
///
QJsonValue* q_jsonobject_take3(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#contains)
///
/// @param self const QJsonObject*
/// @param key const char*
///
bool q_jsonobject_contains2(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#contains)
///
/// @param self const QJsonObject*
/// @param key const char*
///
bool q_jsonobject_contains3(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#begin)
///
/// @param self QJsonObject*
///
QJsonObject__iterator* q_jsonobject_begin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#begin)
///
/// @param self const QJsonObject*
///
QJsonObject__const_iterator* q_jsonobject_begin2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#constBegin)
///
/// @param self const QJsonObject*
///
QJsonObject__const_iterator* q_jsonobject_const_begin(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#end)
///
/// @param self QJsonObject*
///
QJsonObject__iterator* q_jsonobject_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#end)
///
/// @param self const QJsonObject*
///
QJsonObject__const_iterator* q_jsonobject_end2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#constEnd)
///
/// @param self const QJsonObject*
///
QJsonObject__const_iterator* q_jsonobject_const_end(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#erase)
///
/// @param self QJsonObject*
/// @param it QJsonObject__iterator*
///
QJsonObject__iterator* q_jsonobject_erase(void* self, void* it);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#find)
///
/// @param self QJsonObject*
/// @param key const char*
///
QJsonObject__iterator* q_jsonobject_find(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#find)
///
/// @param self const QJsonObject*
/// @param key const char*
///
QJsonObject__const_iterator* q_jsonobject_find2(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#constFind)
///
/// @param self const QJsonObject*
/// @param key const char*
///
QJsonObject__const_iterator* q_jsonobject_const_find(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#insert)
///
/// @param self QJsonObject*
/// @param key const char*
/// @param value QJsonValue*
///
QJsonObject__iterator* q_jsonobject_insert(void* self, const char* key, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#find)
///
/// @param self QJsonObject*
/// @param key const char*
///
QJsonObject__iterator* q_jsonobject_find3(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#find)
///
/// @param self QJsonObject*
/// @param key const char*
///
QJsonObject__iterator* q_jsonobject_find4(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#find)
///
/// @param self const QJsonObject*
/// @param key const char*
///
QJsonObject__const_iterator* q_jsonobject_find5(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#find)
///
/// @param self const QJsonObject*
/// @param key const char*
///
QJsonObject__const_iterator* q_jsonobject_find6(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#constFind)
///
/// @param self const QJsonObject*
/// @param key const char*
///
QJsonObject__const_iterator* q_jsonobject_const_find2(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#constFind)
///
/// @param self const QJsonObject*
/// @param key const char*
///
QJsonObject__const_iterator* q_jsonobject_const_find3(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#insert)
///
/// @param self QJsonObject*
/// @param key const char*
/// @param value QJsonValue*
///
QJsonObject__iterator* q_jsonobject_insert2(void* self, const char* key, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#insert)
///
/// @param self QJsonObject*
/// @param key const char*
/// @param value QJsonValue*
///
QJsonObject__iterator* q_jsonobject_insert3(void* self, const char* key, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#empty)
///
/// @param self const QJsonObject*
///
bool q_jsonobject_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#dtor.QJsonObject)
///
/// Delete this object from C++ memory.
///
/// @param self QJsonObject*
///
void q_jsonobject_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#qHash)
///
/// @param object QJsonObject*
/// @param seed size_t
///
size_t q_qjsonobject_q_hash(const void* object, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html)

/// q_jsonobject__iterator_new constructs a new QJsonObject::iterator object.
///
/// @param other QJsonObject__iterator*
///
QJsonObject__iterator* q_jsonobject__iterator_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html)

/// q_jsonobject__iterator_new2 constructs a new QJsonObject::iterator object.
///
QJsonObject__iterator* q_jsonobject__iterator_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html)

/// q_jsonobject__iterator_new3 constructs a new QJsonObject::iterator object.
///
/// @param obj QJsonObject*
/// @param index intptr_t
///
QJsonObject__iterator* q_jsonobject__iterator_new3(void* obj, intptr_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html)

/// q_jsonobject__iterator_new4 constructs a new QJsonObject::iterator object.
///
/// @param other QJsonObject__iterator*
///
QJsonObject__iterator* q_jsonobject__iterator_new4(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-eq)
///
/// @param self QJsonObject__iterator*
/// @param other QJsonObject__iterator*
///
void q_jsonobject__iterator_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#key)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QJsonObject__iterator*
///
const char* q_jsonobject__iterator_key(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#value)
///
/// @param self const QJsonObject__iterator*
///
QJsonValueRef* q_jsonobject__iterator_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-2a)
///
/// @param self const QJsonObject__iterator*
///
QJsonValueRef* q_jsonobject__iterator_operator_multiply(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator--gt)
///
/// @param self const QJsonObject__iterator*
///
const QJsonValueConstRef* q_jsonobject__iterator_operator_minus_greater(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator--gt)
///
/// @param self QJsonObject__iterator*
///
QJsonValueRef* q_jsonobject__iterator_operator_minus_greater2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-5b-5d)
///
/// @param self const QJsonObject__iterator*
/// @param j intptr_t
///
QJsonValueRef* q_jsonobject__iterator_operator_subscript(const void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-2b-2b)
///
/// @param self QJsonObject__iterator*
///
QJsonObject__iterator* q_jsonobject__iterator_operator_plus_plus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-2b-2b)
///
/// @param self QJsonObject__iterator*
/// @param param1 int
///
QJsonObject__iterator* q_jsonobject__iterator_operator_plus_plus2(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator--)
///
/// @param self QJsonObject__iterator*
///
QJsonObject__iterator* q_jsonobject__iterator_operator_minus_minus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator--)
///
/// @param self QJsonObject__iterator*
/// @param param1 int
///
QJsonObject__iterator* q_jsonobject__iterator_operator_minus_minus2(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-2b)
///
/// @param self const QJsonObject__iterator*
/// @param j intptr_t
///
QJsonObject__iterator* q_jsonobject__iterator_operator_plus(const void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-)
///
/// @param self const QJsonObject__iterator*
/// @param j intptr_t
///
QJsonObject__iterator* q_jsonobject__iterator_operator_minus(const void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-2b-eq)
///
/// @param self QJsonObject__iterator*
/// @param j intptr_t
///
QJsonObject__iterator* q_jsonobject__iterator_operator_plus_assign(void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator--eq)
///
/// @param self QJsonObject__iterator*
/// @param j intptr_t
///
QJsonObject__iterator* q_jsonobject__iterator_operator_minus_assign(void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-)
///
/// @param self const QJsonObject__iterator*
/// @param j QJsonObject__iterator*
///
intptr_t q_jsonobject__iterator_operator_minus2(const void* self, void* j);

/// Delete this object from C++ memory.
///
/// @param self QJsonObject__iterator*
///
void q_jsonobject__iterator_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html)

/// q_jsonobject__const_iterator_new constructs a new QJsonObject::const_iterator object.
///
/// @param other QJsonObject__const_iterator*
///
QJsonObject__const_iterator* q_jsonobject__const_iterator_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html)

/// q_jsonobject__const_iterator_new2 constructs a new QJsonObject::const_iterator object.
///
QJsonObject__const_iterator* q_jsonobject__const_iterator_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html)

/// q_jsonobject__const_iterator_new3 constructs a new QJsonObject::const_iterator object.
///
/// @param obj QJsonObject*
/// @param index intptr_t
///
QJsonObject__const_iterator* q_jsonobject__const_iterator_new3(const void* obj, intptr_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html)

/// q_jsonobject__const_iterator_new4 constructs a new QJsonObject::const_iterator object.
///
/// @param other QJsonObject__iterator*
///
QJsonObject__const_iterator* q_jsonobject__const_iterator_new4(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html)

/// q_jsonobject__const_iterator_new5 constructs a new QJsonObject::const_iterator object.
///
/// @param other QJsonObject__const_iterator*
///
QJsonObject__const_iterator* q_jsonobject__const_iterator_new5(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-eq)
///
/// @param self QJsonObject__const_iterator*
/// @param other QJsonObject__const_iterator*
///
void q_jsonobject__const_iterator_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#key)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QJsonObject__const_iterator*
///
const char* q_jsonobject__const_iterator_key(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#value)
///
/// @param self const QJsonObject__const_iterator*
///
QJsonValueConstRef* q_jsonobject__const_iterator_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-2a)
///
/// @param self const QJsonObject__const_iterator*
///
const QJsonValueConstRef* q_jsonobject__const_iterator_operator_multiply(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator--gt)
///
/// @param self const QJsonObject__const_iterator*
///
const QJsonValueConstRef* q_jsonobject__const_iterator_operator_minus_greater(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-5b-5d)
///
/// @param self const QJsonObject__const_iterator*
/// @param j intptr_t
///
QJsonValueConstRef* q_jsonobject__const_iterator_operator_subscript(const void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-2b-2b)
///
/// @param self QJsonObject__const_iterator*
///
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus_plus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-2b-2b)
///
/// @param self QJsonObject__const_iterator*
/// @param param1 int
///
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus_plus2(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator--)
///
/// @param self QJsonObject__const_iterator*
///
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus_minus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator--)
///
/// @param self QJsonObject__const_iterator*
/// @param param1 int
///
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus_minus2(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-2b)
///
/// @param self const QJsonObject__const_iterator*
/// @param j intptr_t
///
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus(const void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-)
///
/// @param self const QJsonObject__const_iterator*
/// @param j intptr_t
///
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus(const void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-2b-eq)
///
/// @param self QJsonObject__const_iterator*
/// @param j intptr_t
///
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus_assign(void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator--eq)
///
/// @param self QJsonObject__const_iterator*
/// @param j intptr_t
///
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus_assign(void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-)
///
/// @param self const QJsonObject__const_iterator*
/// @param j QJsonObject__const_iterator*
///
intptr_t q_jsonobject__const_iterator_operator_minus2(const void* self, void* j);

/// Delete this object from C++ memory.
///
/// @param self QJsonObject__const_iterator*
///
void q_jsonobject__const_iterator_delete(void* self);

#endif
