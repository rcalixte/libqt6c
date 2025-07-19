#pragma once
#ifndef SRCQT6C_LIBQJSONARRAY_H
#define SRCQT6C_LIBQJSONARRAY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qjsonarray.html

/// q_jsonarray_new constructs a new QJsonArray object.
///
///
QJsonArray* q_jsonarray_new();

/// q_jsonarray_new2 constructs a new QJsonArray object.
///
/// ``` QJsonArray* other ```
QJsonArray* q_jsonarray_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator-eq)
///
/// ``` QJsonArray* self, QJsonArray* other ```
void q_jsonarray_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#fromStringList)
///
/// ``` const char* list[] ```
QJsonArray* q_jsonarray_from_string_list(const char* list[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#fromVariantList)
///
/// ``` libqt_list /* of QVariant* */ list ```
QJsonArray* q_jsonarray_from_variant_list(libqt_list list);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#toVariantList)
///
/// ``` QJsonArray* self ```
libqt_list /* of QVariant* */ q_jsonarray_to_variant_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#size)
///
/// ``` QJsonArray* self ```
int64_t q_jsonarray_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#count)
///
/// ``` QJsonArray* self ```
int64_t q_jsonarray_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#isEmpty)
///
/// ``` QJsonArray* self ```
bool q_jsonarray_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#at)
///
/// ``` QJsonArray* self, int64_t i ```
QJsonValue* q_jsonarray_at(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#first)
///
/// ``` QJsonArray* self ```
QJsonValue* q_jsonarray_first(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#last)
///
/// ``` QJsonArray* self ```
QJsonValue* q_jsonarray_last(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#prepend)
///
/// ``` QJsonArray* self, QJsonValue* value ```
void q_jsonarray_prepend(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#append)
///
/// ``` QJsonArray* self, QJsonValue* value ```
void q_jsonarray_append(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#removeAt)
///
/// ``` QJsonArray* self, int64_t i ```
void q_jsonarray_remove_at(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#takeAt)
///
/// ``` QJsonArray* self, int64_t i ```
QJsonValue* q_jsonarray_take_at(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#removeFirst)
///
/// ``` QJsonArray* self ```
void q_jsonarray_remove_first(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#removeLast)
///
/// ``` QJsonArray* self ```
void q_jsonarray_remove_last(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#insert)
///
/// ``` QJsonArray* self, int64_t i, QJsonValue* value ```
void q_jsonarray_insert(void* self, int64_t i, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#replace)
///
/// ``` QJsonArray* self, int64_t i, QJsonValue* value ```
void q_jsonarray_replace(void* self, int64_t i, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#contains)
///
/// ``` QJsonArray* self, QJsonValue* element ```
bool q_jsonarray_contains(void* self, void* element);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator-5b-5d)
///
/// ``` QJsonArray* self, int64_t i ```
QJsonValueRef* q_jsonarray_operator_subscript(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator-5b-5d)
///
/// ``` QJsonArray* self, int64_t i ```
QJsonValue* q_jsonarray_operator_subscript2(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#swap)
///
/// ``` QJsonArray* self, QJsonArray* other ```
void q_jsonarray_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#begin)
///
/// ``` QJsonArray* self ```
QJsonArray__iterator* q_jsonarray_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#begin)
///
/// ``` QJsonArray* self ```
QJsonArray__const_iterator* q_jsonarray_begin2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#constBegin)
///
/// ``` QJsonArray* self ```
QJsonArray__const_iterator* q_jsonarray_const_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#cbegin)
///
/// ``` QJsonArray* self ```
QJsonArray__const_iterator* q_jsonarray_cbegin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#end)
///
/// ``` QJsonArray* self ```
QJsonArray__iterator* q_jsonarray_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#end)
///
/// ``` QJsonArray* self ```
QJsonArray__const_iterator* q_jsonarray_end2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#constEnd)
///
/// ``` QJsonArray* self ```
QJsonArray__const_iterator* q_jsonarray_const_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#cend)
///
/// ``` QJsonArray* self ```
QJsonArray__const_iterator* q_jsonarray_cend(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#insert)
///
/// ``` QJsonArray* self, QJsonArray__iterator* before, QJsonValue* value ```
QJsonArray__iterator* q_jsonarray_insert2(void* self, void* before, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#erase)
///
/// ``` QJsonArray* self, QJsonArray__iterator* it ```
QJsonArray__iterator* q_jsonarray_erase(void* self, void* it);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator-2b)
///
/// ``` QJsonArray* self, QJsonValue* v ```
QJsonArray* q_jsonarray_operator_plus(void* self, void* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator-2b-eq)
///
/// ``` QJsonArray* self, QJsonValue* v ```
QJsonArray* q_jsonarray_operator_plus_assign(void* self, void* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator-lt-lt)
///
/// ``` QJsonArray* self, QJsonValue* v ```
QJsonArray* q_jsonarray_operator_shift_left(void* self, void* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#push_back)
///
/// ``` QJsonArray* self, QJsonValue* t ```
void q_jsonarray_push_back(void* self, void* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#push_front)
///
/// ``` QJsonArray* self, QJsonValue* t ```
void q_jsonarray_push_front(void* self, void* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#pop_front)
///
/// ``` QJsonArray* self ```
void q_jsonarray_pop_front(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#pop_back)
///
/// ``` QJsonArray* self ```
void q_jsonarray_pop_back(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#empty)
///
/// ``` QJsonArray* self ```
bool q_jsonarray_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#dtor.QJsonArray)
///
/// Delete this object from C++ memory.
///
/// ``` QJsonArray* self ```
void q_jsonarray_delete(void* self);

/// https://doc.qt.io/qt-6/qjsonarray-iterator.html

/// q_jsonarray__iterator_new constructs a new QJsonArray::iterator object.
///
/// ``` QJsonArray__iterator* other ```
QJsonArray__iterator* q_jsonarray__iterator_new(void* other);

/// q_jsonarray__iterator_new2 constructs a new QJsonArray::iterator object.
///
///
QJsonArray__iterator* q_jsonarray__iterator_new2();

/// q_jsonarray__iterator_new3 constructs a new QJsonArray::iterator object.
///
/// ``` QJsonArray* array, int64_t index ```
QJsonArray__iterator* q_jsonarray__iterator_new3(void* array, int64_t index);

/// q_jsonarray__iterator_new4 constructs a new QJsonArray::iterator object.
///
/// ``` QJsonArray__iterator* other ```
QJsonArray__iterator* q_jsonarray__iterator_new4(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator-eq)
///
/// ``` QJsonArray__iterator* self, QJsonArray__iterator* other ```
void q_jsonarray__iterator_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator-2a)
///
/// ``` QJsonArray__iterator* self ```
QJsonValueRef* q_jsonarray__iterator_operator_multiply(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator--gt)
///
/// ``` QJsonArray__iterator* self ```
const QJsonValueConstRef* q_jsonarray__iterator_operator_minus_greater(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator--gt)
///
/// ``` QJsonArray__iterator* self ```
QJsonValueRef* q_jsonarray__iterator_operator_minus_greater2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator-5b-5d)
///
/// ``` QJsonArray__iterator* self, int64_t j ```
QJsonValueRef* q_jsonarray__iterator_operator_subscript(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator-2b-2b)
///
/// ``` QJsonArray__iterator* self ```
QJsonArray__iterator* q_jsonarray__iterator_operator_plus_plus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator-2b-2b)
///
/// ``` QJsonArray__iterator* self, int param1 ```
QJsonArray__iterator* q_jsonarray__iterator_operator_plus_plus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator--)
///
/// ``` QJsonArray__iterator* self ```
QJsonArray__iterator* q_jsonarray__iterator_operator_minus_minus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator--)
///
/// ``` QJsonArray__iterator* self, int param1 ```
QJsonArray__iterator* q_jsonarray__iterator_operator_minus_minus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator-2b-eq)
///
/// ``` QJsonArray__iterator* self, int64_t j ```
QJsonArray__iterator* q_jsonarray__iterator_operator_plus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator--eq)
///
/// ``` QJsonArray__iterator* self, int64_t j ```
QJsonArray__iterator* q_jsonarray__iterator_operator_minus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator-2b)
///
/// ``` QJsonArray__iterator* self, int64_t j ```
QJsonArray__iterator* q_jsonarray__iterator_operator_plus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator-)
///
/// ``` QJsonArray__iterator* self, int64_t j ```
QJsonArray__iterator* q_jsonarray__iterator_operator_minus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator-)
///
/// ``` QJsonArray__iterator* self, QJsonArray__iterator* j ```
int64_t q_jsonarray__iterator_operator_minus2(void* self, void* j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray::iterator.html#dtor.QJsonArray::iterator)
///
/// Delete this object from C++ memory.
///
/// ``` QJsonArray__iterator* self ```
void q_jsonarray__iterator_delete(void* self);

/// https://doc.qt.io/qt-6/qjsonarray-const_iterator.html

/// q_jsonarray__const_iterator_new constructs a new QJsonArray::const_iterator object.
///
/// ``` QJsonArray__const_iterator* other ```
QJsonArray__const_iterator* q_jsonarray__const_iterator_new(void* other);

/// q_jsonarray__const_iterator_new2 constructs a new QJsonArray::const_iterator object.
///
///
QJsonArray__const_iterator* q_jsonarray__const_iterator_new2();

/// q_jsonarray__const_iterator_new3 constructs a new QJsonArray::const_iterator object.
///
/// ``` QJsonArray* array, int64_t index ```
QJsonArray__const_iterator* q_jsonarray__const_iterator_new3(void* array, int64_t index);

/// q_jsonarray__const_iterator_new4 constructs a new QJsonArray::const_iterator object.
///
/// ``` QJsonArray__iterator* o ```
QJsonArray__const_iterator* q_jsonarray__const_iterator_new4(void* o);

/// q_jsonarray__const_iterator_new5 constructs a new QJsonArray::const_iterator object.
///
/// ``` QJsonArray__const_iterator* other ```
QJsonArray__const_iterator* q_jsonarray__const_iterator_new5(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator-eq)
///
/// ``` QJsonArray__const_iterator* self, QJsonArray__const_iterator* other ```
void q_jsonarray__const_iterator_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator-2a)
///
/// ``` QJsonArray__const_iterator* self ```
const QJsonValueConstRef* q_jsonarray__const_iterator_operator_multiply(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator--gt)
///
/// ``` QJsonArray__const_iterator* self ```
const QJsonValueConstRef* q_jsonarray__const_iterator_operator_minus_greater(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator-5b-5d)
///
/// ``` QJsonArray__const_iterator* self, int64_t j ```
QJsonValueConstRef* q_jsonarray__const_iterator_operator_subscript(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator-2b-2b)
///
/// ``` QJsonArray__const_iterator* self ```
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_plus_plus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator-2b-2b)
///
/// ``` QJsonArray__const_iterator* self, int param1 ```
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_plus_plus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator--)
///
/// ``` QJsonArray__const_iterator* self ```
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_minus_minus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator--)
///
/// ``` QJsonArray__const_iterator* self, int param1 ```
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_minus_minus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator-2b-eq)
///
/// ``` QJsonArray__const_iterator* self, int64_t j ```
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_plus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator--eq)
///
/// ``` QJsonArray__const_iterator* self, int64_t j ```
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_minus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator-2b)
///
/// ``` QJsonArray__const_iterator* self, int64_t j ```
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_plus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator-)
///
/// ``` QJsonArray__const_iterator* self, int64_t j ```
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_minus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator-)
///
/// ``` QJsonArray__const_iterator* self, QJsonArray__const_iterator* j ```
int64_t q_jsonarray__const_iterator_operator_minus2(void* self, void* j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray::const_iterator.html#dtor.QJsonArray::const_iterator)
///
/// Delete this object from C++ memory.
///
/// ``` QJsonArray__const_iterator* self ```
void q_jsonarray__const_iterator_delete(void* self);

#endif
