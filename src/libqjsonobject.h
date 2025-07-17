#pragma once
#ifndef SRCQT6C_LIBQJSONOBJECT_H
#define SRCQT6C_LIBQJSONOBJECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qjsonobject.html

/// q_jsonobject_new constructs a new QJsonObject object.
///
///
QJsonObject* q_jsonobject_new();

/// q_jsonobject_new2 constructs a new QJsonObject object.
///
/// ``` QJsonObject* other ```
QJsonObject* q_jsonobject_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#operator-eq)
///
/// ``` QJsonObject* self, QJsonObject* other ```
void q_jsonobject_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#swap)
///
/// ``` QJsonObject* self, QJsonObject* other ```
void q_jsonobject_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#fromVariantMap)
///
/// ``` libqt_map /* of const char* to QVariant* */ mapVal ```
QJsonObject* q_jsonobject_from_variant_map(libqt_map /* of const char* to QVariant* */ mapVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#toVariantMap)
///
/// ``` QJsonObject* self ```
libqt_map /* of const char* to QVariant* */ q_jsonobject_to_variant_map(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#fromVariantHash)
///
/// ``` libqt_map /* of const char* to QVariant* */ mapVal ```
QJsonObject* q_jsonobject_from_variant_hash(libqt_map /* of const char* to QVariant* */ mapVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#toVariantHash)
///
/// ``` QJsonObject* self ```
libqt_map /* of const char* to QVariant* */ q_jsonobject_to_variant_hash(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#keys)
///
/// ``` QJsonObject* self ```
const char** q_jsonobject_keys(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#size)
///
/// ``` QJsonObject* self ```
int64_t q_jsonobject_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#count)
///
/// ``` QJsonObject* self ```
int64_t q_jsonobject_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#length)
///
/// ``` QJsonObject* self ```
int64_t q_jsonobject_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#isEmpty)
///
/// ``` QJsonObject* self ```
bool q_jsonobject_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#value)
///
/// ``` QJsonObject* self, const char* key ```
QJsonValue* q_jsonobject_value(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#operator-5b-5d)
///
/// ``` QJsonObject* self, const char* key ```
QJsonValue* q_jsonobject_operator_subscript(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#operator-5b-5d)
///
/// ``` QJsonObject* self, const char* key ```
QJsonValueRef* q_jsonobject_operator_subscript2(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#remove)
///
/// ``` QJsonObject* self, const char* key ```
void q_jsonobject_remove(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#take)
///
/// ``` QJsonObject* self, const char* key ```
QJsonValue* q_jsonobject_take(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#contains)
///
/// ``` QJsonObject* self, const char* key ```
bool q_jsonobject_contains(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#begin)
///
/// ``` QJsonObject* self ```
QJsonObject__iterator* q_jsonobject_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#begin)
///
/// ``` QJsonObject* self ```
QJsonObject__const_iterator* q_jsonobject_begin2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#constBegin)
///
/// ``` QJsonObject* self ```
QJsonObject__const_iterator* q_jsonobject_const_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#end)
///
/// ``` QJsonObject* self ```
QJsonObject__iterator* q_jsonobject_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#end)
///
/// ``` QJsonObject* self ```
QJsonObject__const_iterator* q_jsonobject_end2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#constEnd)
///
/// ``` QJsonObject* self ```
QJsonObject__const_iterator* q_jsonobject_const_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#erase)
///
/// ``` QJsonObject* self, QJsonObject__iterator* it ```
QJsonObject__iterator* q_jsonobject_erase(void* self, void* it);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#find)
///
/// ``` QJsonObject* self, const char* key ```
QJsonObject__iterator* q_jsonobject_find(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#find)
///
/// ``` QJsonObject* self, const char* key ```
QJsonObject__const_iterator* q_jsonobject_find2(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#constFind)
///
/// ``` QJsonObject* self, const char* key ```
QJsonObject__const_iterator* q_jsonobject_const_find(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#insert)
///
/// ``` QJsonObject* self, const char* key, QJsonValue* value ```
QJsonObject__iterator* q_jsonobject_insert(void* self, const char* key, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#empty)
///
/// ``` QJsonObject* self ```
bool q_jsonobject_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#dtor.QJsonObject)
///
/// Delete this object from C++ memory.
///
/// ``` QJsonObject* self ```
void q_jsonobject_delete(void* self);

/// https://doc.qt.io/qt-6/qjsonobject-iterator.html

/// q_jsonobject__iterator_new constructs a new QJsonObject::iterator object.
///
/// ``` QJsonObject__iterator* other ```
QJsonObject__iterator* q_jsonobject__iterator_new(void* other);

/// q_jsonobject__iterator_new2 constructs a new QJsonObject::iterator object.
///
///
QJsonObject__iterator* q_jsonobject__iterator_new2();

/// q_jsonobject__iterator_new3 constructs a new QJsonObject::iterator object.
///
/// ``` QJsonObject* obj, int64_t index ```
QJsonObject__iterator* q_jsonobject__iterator_new3(void* obj, int64_t index);

/// q_jsonobject__iterator_new4 constructs a new QJsonObject::iterator object.
///
/// ``` QJsonObject__iterator* other ```
QJsonObject__iterator* q_jsonobject__iterator_new4(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator-eq)
///
/// ``` QJsonObject__iterator* self, QJsonObject__iterator* other ```
void q_jsonobject__iterator_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#key)
///
/// ``` QJsonObject__iterator* self ```
const char* q_jsonobject__iterator_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#value)
///
/// ``` QJsonObject__iterator* self ```
QJsonValueRef* q_jsonobject__iterator_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator-2a)
///
/// ``` QJsonObject__iterator* self ```
QJsonValueRef* q_jsonobject__iterator_operator_multiply(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator--gt)
///
/// ``` QJsonObject__iterator* self ```
const QJsonValueConstRef* q_jsonobject__iterator_operator_minus_greater(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator--gt)
///
/// ``` QJsonObject__iterator* self ```
QJsonValueRef* q_jsonobject__iterator_operator_minus_greater2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator-5b-5d)
///
/// ``` QJsonObject__iterator* self, int64_t j ```
QJsonValueRef* q_jsonobject__iterator_operator_subscript(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator-2b-2b)
///
/// ``` QJsonObject__iterator* self ```
QJsonObject__iterator* q_jsonobject__iterator_operator_plus_plus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator-2b-2b)
///
/// ``` QJsonObject__iterator* self, int param1 ```
QJsonObject__iterator* q_jsonobject__iterator_operator_plus_plus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator--)
///
/// ``` QJsonObject__iterator* self ```
QJsonObject__iterator* q_jsonobject__iterator_operator_minus_minus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator--)
///
/// ``` QJsonObject__iterator* self, int param1 ```
QJsonObject__iterator* q_jsonobject__iterator_operator_minus_minus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator-2b)
///
/// ``` QJsonObject__iterator* self, int64_t j ```
QJsonObject__iterator* q_jsonobject__iterator_operator_plus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator-)
///
/// ``` QJsonObject__iterator* self, int64_t j ```
QJsonObject__iterator* q_jsonobject__iterator_operator_minus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator-2b-eq)
///
/// ``` QJsonObject__iterator* self, int64_t j ```
QJsonObject__iterator* q_jsonobject__iterator_operator_plus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator--eq)
///
/// ``` QJsonObject__iterator* self, int64_t j ```
QJsonObject__iterator* q_jsonobject__iterator_operator_minus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator-)
///
/// ``` QJsonObject__iterator* self, QJsonObject__iterator* j ```
int64_t q_jsonobject__iterator_operator_minus2(void* self, void* j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject::iterator.html#dtor.QJsonObject::iterator)
///
/// Delete this object from C++ memory.
///
/// ``` QJsonObject__iterator* self ```
void q_jsonobject__iterator_delete(void* self);

/// https://doc.qt.io/qt-6/qjsonobject-const_iterator.html

/// q_jsonobject__const_iterator_new constructs a new QJsonObject::const_iterator object.
///
/// ``` QJsonObject__const_iterator* other ```
QJsonObject__const_iterator* q_jsonobject__const_iterator_new(void* other);

/// q_jsonobject__const_iterator_new2 constructs a new QJsonObject::const_iterator object.
///
///
QJsonObject__const_iterator* q_jsonobject__const_iterator_new2();

/// q_jsonobject__const_iterator_new3 constructs a new QJsonObject::const_iterator object.
///
/// ``` QJsonObject* obj, int64_t index ```
QJsonObject__const_iterator* q_jsonobject__const_iterator_new3(void* obj, int64_t index);

/// q_jsonobject__const_iterator_new4 constructs a new QJsonObject::const_iterator object.
///
/// ``` QJsonObject__iterator* other ```
QJsonObject__const_iterator* q_jsonobject__const_iterator_new4(void* other);

/// q_jsonobject__const_iterator_new5 constructs a new QJsonObject::const_iterator object.
///
/// ``` QJsonObject__const_iterator* other ```
QJsonObject__const_iterator* q_jsonobject__const_iterator_new5(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator-eq)
///
/// ``` QJsonObject__const_iterator* self, QJsonObject__const_iterator* other ```
void q_jsonobject__const_iterator_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#key)
///
/// ``` QJsonObject__const_iterator* self ```
const char* q_jsonobject__const_iterator_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#value)
///
/// ``` QJsonObject__const_iterator* self ```
QJsonValueConstRef* q_jsonobject__const_iterator_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator-2a)
///
/// ``` QJsonObject__const_iterator* self ```
const QJsonValueConstRef* q_jsonobject__const_iterator_operator_multiply(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator--gt)
///
/// ``` QJsonObject__const_iterator* self ```
const QJsonValueConstRef* q_jsonobject__const_iterator_operator_minus_greater(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator-5b-5d)
///
/// ``` QJsonObject__const_iterator* self, int64_t j ```
QJsonValueConstRef* q_jsonobject__const_iterator_operator_subscript(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator-2b-2b)
///
/// ``` QJsonObject__const_iterator* self ```
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus_plus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator-2b-2b)
///
/// ``` QJsonObject__const_iterator* self, int param1 ```
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus_plus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator--)
///
/// ``` QJsonObject__const_iterator* self ```
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus_minus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator--)
///
/// ``` QJsonObject__const_iterator* self, int param1 ```
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus_minus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator-2b)
///
/// ``` QJsonObject__const_iterator* self, int64_t j ```
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator-)
///
/// ``` QJsonObject__const_iterator* self, int64_t j ```
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator-2b-eq)
///
/// ``` QJsonObject__const_iterator* self, int64_t j ```
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator--eq)
///
/// ``` QJsonObject__const_iterator* self, int64_t j ```
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator-)
///
/// ``` QJsonObject__const_iterator* self, QJsonObject__const_iterator* j ```
int64_t q_jsonobject__const_iterator_operator_minus2(void* self, void* j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject::const_iterator.html#dtor.QJsonObject::const_iterator)
///
/// Delete this object from C++ memory.
///
/// ``` QJsonObject__const_iterator* self ```
void q_jsonobject__const_iterator_delete(void* self);

#endif
