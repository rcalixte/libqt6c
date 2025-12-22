#pragma once
#ifndef SRC_QT6C_LIBQJSONOBJECT_H
#define SRC_QT6C_LIBQJSONOBJECT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QJsonObject* q_jsonobject_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#operator-eq)
///
/// @param self QJsonObject*
/// @param other QJsonObject*
///
void q_jsonobject_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#swap)
///
/// @param self QJsonObject*
/// @param other QJsonObject*
///
void q_jsonobject_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#fromVariantMap)
///
/// @param mapVal libqt_map /* of const char* to QVariant* */
///
QJsonObject* q_jsonobject_from_variant_map(libqt_map /* of const char* to QVariant* */ mapVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#toVariantMap)
///
/// @param self QJsonObject*
///
libqt_map /* of const char* to QVariant* */ q_jsonobject_to_variant_map(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#fromVariantHash)
///
/// @param mapVal libqt_map /* of const char* to QVariant* */
///
QJsonObject* q_jsonobject_from_variant_hash(libqt_map /* of const char* to QVariant* */ mapVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#toVariantHash)
///
/// @param self QJsonObject*
///
libqt_map /* of const char* to QVariant* */ q_jsonobject_to_variant_hash(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#keys)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QJsonObject*
///
const char** q_jsonobject_keys(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#size)
///
/// @param self QJsonObject*
///
int64_t q_jsonobject_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#count)
///
/// @param self QJsonObject*
///
int64_t q_jsonobject_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#length)
///
/// @param self QJsonObject*
///
int64_t q_jsonobject_length(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#isEmpty)
///
/// @param self QJsonObject*
///
bool q_jsonobject_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#value)
///
/// @param self QJsonObject*
/// @param key const char*
///
QJsonValue* q_jsonobject_value(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#operator-5b-5d)
///
/// @param self QJsonObject*
/// @param key const char*
///
QJsonValue* q_jsonobject_operator_subscript(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#operator-5b-5d)
///
/// @param self QJsonObject*
/// @param key const char*
///
QJsonValueRef* q_jsonobject_operator_subscript2(void* self, const char* key);

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
/// @param self QJsonObject*
/// @param key const char*
///
bool q_jsonobject_contains(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#begin)
///
/// @param self QJsonObject*
///
QJsonObject__iterator* q_jsonobject_begin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#begin)
///
/// @param self QJsonObject*
///
QJsonObject__const_iterator* q_jsonobject_begin2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#constBegin)
///
/// @param self QJsonObject*
///
QJsonObject__const_iterator* q_jsonobject_const_begin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#end)
///
/// @param self QJsonObject*
///
QJsonObject__iterator* q_jsonobject_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#end)
///
/// @param self QJsonObject*
///
QJsonObject__const_iterator* q_jsonobject_end2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#constEnd)
///
/// @param self QJsonObject*
///
QJsonObject__const_iterator* q_jsonobject_const_end(void* self);

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
/// @param self QJsonObject*
/// @param key const char*
///
QJsonObject__const_iterator* q_jsonobject_find2(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#constFind)
///
/// @param self QJsonObject*
/// @param key const char*
///
QJsonObject__const_iterator* q_jsonobject_const_find(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#insert)
///
/// @param self QJsonObject*
/// @param key const char*
/// @param value QJsonValue*
///
QJsonObject__iterator* q_jsonobject_insert(void* self, const char* key, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#empty)
///
/// @param self QJsonObject*
///
bool q_jsonobject_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#dtor.QJsonObject)
///
/// Delete this object from C++ memory.
///
/// @param self QJsonObject*
///
void q_jsonobject_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html)

/// q_jsonobject__iterator_new constructs a new QJsonObject::iterator object.
///
/// @param other QJsonObject__iterator*
///
QJsonObject__iterator* q_jsonobject__iterator_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html)

/// q_jsonobject__iterator_new2 constructs a new QJsonObject::iterator object.
///
QJsonObject__iterator* q_jsonobject__iterator_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html)

/// q_jsonobject__iterator_new3 constructs a new QJsonObject::iterator object.
///
/// @param obj QJsonObject*
/// @param index int64_t
///
QJsonObject__iterator* q_jsonobject__iterator_new3(void* obj, int64_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html)

/// q_jsonobject__iterator_new4 constructs a new QJsonObject::iterator object.
///
/// @param other QJsonObject__iterator*
///
QJsonObject__iterator* q_jsonobject__iterator_new4(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-eq)
///
/// @param self QJsonObject__iterator*
/// @param other QJsonObject__iterator*
///
void q_jsonobject__iterator_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#key)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QJsonObject__iterator*
///
const char* q_jsonobject__iterator_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#value)
///
/// @param self QJsonObject__iterator*
///
QJsonValueRef* q_jsonobject__iterator_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-2a)
///
/// @param self QJsonObject__iterator*
///
QJsonValueRef* q_jsonobject__iterator_operator_multiply(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator--gt)
///
/// @param self QJsonObject__iterator*
///
const QJsonValueConstRef* q_jsonobject__iterator_operator_minus_greater(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator--gt)
///
/// @param self QJsonObject__iterator*
///
QJsonValueRef* q_jsonobject__iterator_operator_minus_greater2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-5b-5d)
///
/// @param self QJsonObject__iterator*
/// @param j int64_t
///
QJsonValueRef* q_jsonobject__iterator_operator_subscript(void* self, int64_t j);

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
/// @param self QJsonObject__iterator*
/// @param j int64_t
///
QJsonObject__iterator* q_jsonobject__iterator_operator_plus(void* self, int64_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-)
///
/// @param self QJsonObject__iterator*
/// @param j int64_t
///
QJsonObject__iterator* q_jsonobject__iterator_operator_minus(void* self, int64_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-2b-eq)
///
/// @param self QJsonObject__iterator*
/// @param j int64_t
///
QJsonObject__iterator* q_jsonobject__iterator_operator_plus_assign(void* self, int64_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator--eq)
///
/// @param self QJsonObject__iterator*
/// @param j int64_t
///
QJsonObject__iterator* q_jsonobject__iterator_operator_minus_assign(void* self, int64_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-)
///
/// @param self QJsonObject__iterator*
/// @param j QJsonObject__iterator*
///
int64_t q_jsonobject__iterator_operator_minus2(void* self, void* j);

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
QJsonObject__const_iterator* q_jsonobject__const_iterator_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html)

/// q_jsonobject__const_iterator_new2 constructs a new QJsonObject::const_iterator object.
///
QJsonObject__const_iterator* q_jsonobject__const_iterator_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html)

/// q_jsonobject__const_iterator_new3 constructs a new QJsonObject::const_iterator object.
///
/// @param obj QJsonObject*
/// @param index int64_t
///
QJsonObject__const_iterator* q_jsonobject__const_iterator_new3(void* obj, int64_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html)

/// q_jsonobject__const_iterator_new4 constructs a new QJsonObject::const_iterator object.
///
/// @param other QJsonObject__iterator*
///
QJsonObject__const_iterator* q_jsonobject__const_iterator_new4(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html)

/// q_jsonobject__const_iterator_new5 constructs a new QJsonObject::const_iterator object.
///
/// @param other QJsonObject__const_iterator*
///
QJsonObject__const_iterator* q_jsonobject__const_iterator_new5(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-eq)
///
/// @param self QJsonObject__const_iterator*
/// @param other QJsonObject__const_iterator*
///
void q_jsonobject__const_iterator_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#key)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QJsonObject__const_iterator*
///
const char* q_jsonobject__const_iterator_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#value)
///
/// @param self QJsonObject__const_iterator*
///
QJsonValueConstRef* q_jsonobject__const_iterator_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-2a)
///
/// @param self QJsonObject__const_iterator*
///
const QJsonValueConstRef* q_jsonobject__const_iterator_operator_multiply(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator--gt)
///
/// @param self QJsonObject__const_iterator*
///
const QJsonValueConstRef* q_jsonobject__const_iterator_operator_minus_greater(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-5b-5d)
///
/// @param self QJsonObject__const_iterator*
/// @param j int64_t
///
QJsonValueConstRef* q_jsonobject__const_iterator_operator_subscript(void* self, int64_t j);

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
/// @param self QJsonObject__const_iterator*
/// @param j int64_t
///
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus(void* self, int64_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-)
///
/// @param self QJsonObject__const_iterator*
/// @param j int64_t
///
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus(void* self, int64_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-2b-eq)
///
/// @param self QJsonObject__const_iterator*
/// @param j int64_t
///
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus_assign(void* self, int64_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator--eq)
///
/// @param self QJsonObject__const_iterator*
/// @param j int64_t
///
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus_assign(void* self, int64_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-)
///
/// @param self QJsonObject__const_iterator*
/// @param j QJsonObject__const_iterator*
///
int64_t q_jsonobject__const_iterator_operator_minus2(void* self, void* j);

/// Delete this object from C++ memory.
///
/// @param self QJsonObject__const_iterator*
///
void q_jsonobject__const_iterator_delete(void* self);

#endif
