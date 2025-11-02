#pragma once
#ifndef SRCQT6C_LIBQJSONARRAY_H
#define SRCQT6C_LIBQJSONARRAY_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qjsonarray.html

/// q_jsonarray_new constructs a new QJsonArray object.
///
QJsonArray* q_jsonarray_new();

/// q_jsonarray_new2 constructs a new QJsonArray object.
///
/// @param other QJsonArray*
QJsonArray* q_jsonarray_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator-eq)
///
/// @param self QJsonArray*
/// @param other QJsonArray*
void q_jsonarray_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#fromStringList)
///
/// @param list const char**
QJsonArray* q_jsonarray_from_string_list(const char* list[static 1]);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#fromVariantList)
///
/// @param list libqt_list /* of QVariant* */
QJsonArray* q_jsonarray_from_variant_list(libqt_list list);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#toVariantList)
///
/// @param self QJsonArray*
libqt_list /* of QVariant* */ q_jsonarray_to_variant_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#size)
///
/// @param self QJsonArray*
int64_t q_jsonarray_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#count)
///
/// @param self QJsonArray*
int64_t q_jsonarray_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#isEmpty)
///
/// @param self QJsonArray*
bool q_jsonarray_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#at)
///
/// @param self QJsonArray*
/// @param i int64_t
QJsonValue* q_jsonarray_at(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#first)
///
/// @param self QJsonArray*
QJsonValue* q_jsonarray_first(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#last)
///
/// @param self QJsonArray*
QJsonValue* q_jsonarray_last(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#prepend)
///
/// @param self QJsonArray*
/// @param value QJsonValue*
void q_jsonarray_prepend(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#append)
///
/// @param self QJsonArray*
/// @param value QJsonValue*
void q_jsonarray_append(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#removeAt)
///
/// @param self QJsonArray*
/// @param i int64_t
void q_jsonarray_remove_at(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#takeAt)
///
/// @param self QJsonArray*
/// @param i int64_t
QJsonValue* q_jsonarray_take_at(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#removeFirst)
///
/// @param self QJsonArray*
void q_jsonarray_remove_first(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#removeLast)
///
/// @param self QJsonArray*
void q_jsonarray_remove_last(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#insert)
///
/// @param self QJsonArray*
/// @param i int64_t
/// @param value QJsonValue*
void q_jsonarray_insert(void* self, int64_t i, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#replace)
///
/// @param self QJsonArray*
/// @param i int64_t
/// @param value QJsonValue*
void q_jsonarray_replace(void* self, int64_t i, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#contains)
///
/// @param self QJsonArray*
/// @param element QJsonValue*
bool q_jsonarray_contains(void* self, void* element);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator-5b-5d)
///
/// @param self QJsonArray*
/// @param i int64_t
QJsonValueRef* q_jsonarray_operator_subscript(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator-5b-5d)
///
/// @param self QJsonArray*
/// @param i int64_t
QJsonValue* q_jsonarray_operator_subscript2(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#swap)
///
/// @param self QJsonArray*
/// @param other QJsonArray*
void q_jsonarray_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#begin)
///
/// @param self QJsonArray*
QJsonArray__iterator* q_jsonarray_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#begin)
///
/// @param self QJsonArray*
QJsonArray__const_iterator* q_jsonarray_begin2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#constBegin)
///
/// @param self QJsonArray*
QJsonArray__const_iterator* q_jsonarray_const_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#cbegin)
///
/// @param self QJsonArray*
QJsonArray__const_iterator* q_jsonarray_cbegin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#end)
///
/// @param self QJsonArray*
QJsonArray__iterator* q_jsonarray_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#end)
///
/// @param self QJsonArray*
QJsonArray__const_iterator* q_jsonarray_end2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#constEnd)
///
/// @param self QJsonArray*
QJsonArray__const_iterator* q_jsonarray_const_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#cend)
///
/// @param self QJsonArray*
QJsonArray__const_iterator* q_jsonarray_cend(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#insert)
///
/// @param self QJsonArray*
/// @param before QJsonArray__iterator*
/// @param value QJsonValue*
QJsonArray__iterator* q_jsonarray_insert2(void* self, void* before, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#erase)
///
/// @param self QJsonArray*
/// @param it QJsonArray__iterator*
QJsonArray__iterator* q_jsonarray_erase(void* self, void* it);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator-2b)
///
/// @param self QJsonArray*
/// @param v QJsonValue*
QJsonArray* q_jsonarray_operator_plus(void* self, void* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator-2b-eq)
///
/// @param self QJsonArray*
/// @param v QJsonValue*
QJsonArray* q_jsonarray_operator_plus_assign(void* self, void* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator-lt-lt)
///
/// @param self QJsonArray*
/// @param v QJsonValue*
QJsonArray* q_jsonarray_operator_shift_left(void* self, void* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#push_back)
///
/// @param self QJsonArray*
/// @param t QJsonValue*
void q_jsonarray_push_back(void* self, void* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#push_front)
///
/// @param self QJsonArray*
/// @param t QJsonValue*
void q_jsonarray_push_front(void* self, void* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#pop_front)
///
/// @param self QJsonArray*
void q_jsonarray_pop_front(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#pop_back)
///
/// @param self QJsonArray*
void q_jsonarray_pop_back(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#empty)
///
/// @param self QJsonArray*
bool q_jsonarray_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#dtor.QJsonArray)
///
/// Delete this object from C++ memory.
///
/// @param self QJsonArray*
void q_jsonarray_delete(void* self);

/// https://doc.qt.io/qt-6/qjsonarray-iterator.html

/// q_jsonarray__iterator_new constructs a new QJsonArray::iterator object.
///
/// @param other QJsonArray__iterator*
QJsonArray__iterator* q_jsonarray__iterator_new(void* other);

/// q_jsonarray__iterator_new2 constructs a new QJsonArray::iterator object.
///
QJsonArray__iterator* q_jsonarray__iterator_new2();

/// q_jsonarray__iterator_new3 constructs a new QJsonArray::iterator object.
///
/// @param array QJsonArray*
/// @param index int64_t
QJsonArray__iterator* q_jsonarray__iterator_new3(void* array, int64_t index);

/// q_jsonarray__iterator_new4 constructs a new QJsonArray::iterator object.
///
/// @param other QJsonArray__iterator*
QJsonArray__iterator* q_jsonarray__iterator_new4(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-eq)
///
/// @param self QJsonArray__iterator*
/// @param other QJsonArray__iterator*
void q_jsonarray__iterator_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-2a)
///
/// @param self QJsonArray__iterator*
QJsonValueRef* q_jsonarray__iterator_operator_multiply(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator--gt)
///
/// @param self QJsonArray__iterator*
const QJsonValueConstRef* q_jsonarray__iterator_operator_minus_greater(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator--gt)
///
/// @param self QJsonArray__iterator*
QJsonValueRef* q_jsonarray__iterator_operator_minus_greater2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-5b-5d)
///
/// @param self QJsonArray__iterator*
/// @param j int64_t
QJsonValueRef* q_jsonarray__iterator_operator_subscript(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-2b-2b)
///
/// @param self QJsonArray__iterator*
QJsonArray__iterator* q_jsonarray__iterator_operator_plus_plus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-2b-2b)
///
/// @param self QJsonArray__iterator*
/// @param param1 int
QJsonArray__iterator* q_jsonarray__iterator_operator_plus_plus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator--)
///
/// @param self QJsonArray__iterator*
QJsonArray__iterator* q_jsonarray__iterator_operator_minus_minus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator--)
///
/// @param self QJsonArray__iterator*
/// @param param1 int
QJsonArray__iterator* q_jsonarray__iterator_operator_minus_minus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-2b-eq)
///
/// @param self QJsonArray__iterator*
/// @param j int64_t
QJsonArray__iterator* q_jsonarray__iterator_operator_plus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator--eq)
///
/// @param self QJsonArray__iterator*
/// @param j int64_t
QJsonArray__iterator* q_jsonarray__iterator_operator_minus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-2b)
///
/// @param self QJsonArray__iterator*
/// @param j int64_t
QJsonArray__iterator* q_jsonarray__iterator_operator_plus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-)
///
/// @param self QJsonArray__iterator*
/// @param j int64_t
QJsonArray__iterator* q_jsonarray__iterator_operator_minus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-)
///
/// @param self QJsonArray__iterator*
/// @param j QJsonArray__iterator*
int64_t q_jsonarray__iterator_operator_minus2(void* self, void* j);

/// Delete this object from C++ memory.
///
/// @param self QJsonArray__iterator*
void q_jsonarray__iterator_delete(void* self);

/// https://doc.qt.io/qt-6/qjsonarray-const-iterator.html

/// q_jsonarray__const_iterator_new constructs a new QJsonArray::const_iterator object.
///
/// @param other QJsonArray__const_iterator*
QJsonArray__const_iterator* q_jsonarray__const_iterator_new(void* other);

/// q_jsonarray__const_iterator_new2 constructs a new QJsonArray::const_iterator object.
///
QJsonArray__const_iterator* q_jsonarray__const_iterator_new2();

/// q_jsonarray__const_iterator_new3 constructs a new QJsonArray::const_iterator object.
///
/// @param array QJsonArray*
/// @param index int64_t
QJsonArray__const_iterator* q_jsonarray__const_iterator_new3(void* array, int64_t index);

/// q_jsonarray__const_iterator_new4 constructs a new QJsonArray::const_iterator object.
///
/// @param o QJsonArray__iterator*
QJsonArray__const_iterator* q_jsonarray__const_iterator_new4(void* o);

/// q_jsonarray__const_iterator_new5 constructs a new QJsonArray::const_iterator object.
///
/// @param other QJsonArray__const_iterator*
QJsonArray__const_iterator* q_jsonarray__const_iterator_new5(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-eq)
///
/// @param self QJsonArray__const_iterator*
/// @param other QJsonArray__const_iterator*
void q_jsonarray__const_iterator_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-2a)
///
/// @param self QJsonArray__const_iterator*
const QJsonValueConstRef* q_jsonarray__const_iterator_operator_multiply(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator--gt)
///
/// @param self QJsonArray__const_iterator*
const QJsonValueConstRef* q_jsonarray__const_iterator_operator_minus_greater(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-5b-5d)
///
/// @param self QJsonArray__const_iterator*
/// @param j int64_t
QJsonValueConstRef* q_jsonarray__const_iterator_operator_subscript(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-2b-2b)
///
/// @param self QJsonArray__const_iterator*
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_plus_plus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-2b-2b)
///
/// @param self QJsonArray__const_iterator*
/// @param param1 int
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_plus_plus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator--)
///
/// @param self QJsonArray__const_iterator*
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_minus_minus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator--)
///
/// @param self QJsonArray__const_iterator*
/// @param param1 int
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_minus_minus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-2b-eq)
///
/// @param self QJsonArray__const_iterator*
/// @param j int64_t
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_plus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator--eq)
///
/// @param self QJsonArray__const_iterator*
/// @param j int64_t
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_minus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-2b)
///
/// @param self QJsonArray__const_iterator*
/// @param j int64_t
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_plus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-)
///
/// @param self QJsonArray__const_iterator*
/// @param j int64_t
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_minus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-)
///
/// @param self QJsonArray__const_iterator*
/// @param j QJsonArray__const_iterator*
int64_t q_jsonarray__const_iterator_operator_minus2(void* self, void* j);

/// Delete this object from C++ memory.
///
/// @param self QJsonArray__const_iterator*
void q_jsonarray__const_iterator_delete(void* self);

#endif
