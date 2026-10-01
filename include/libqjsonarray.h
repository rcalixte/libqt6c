#pragma once
#ifndef LIBQJSONARRAY_H
#define LIBQJSONARRAY_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html)

/// q_jsonarray_new constructs a new QJsonArray object.
///
QJsonArray* q_jsonarray_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html)

/// q_jsonarray_new2 constructs a new QJsonArray object.
///
/// @param other QJsonArray*
///
QJsonArray* q_jsonarray_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#operator-eq)
///
/// @param self QJsonArray*
/// @param other QJsonArray*
///
void q_jsonarray_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#fromStringList)
///
/// @param list const char**
///
QJsonArray* q_jsonarray_from_string_list(const char* list[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#fromVariantList)
///
/// @param list libqt_list of QVariant*
///
QJsonArray* q_jsonarray_from_variant_list(libqt_list list);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#toVariantList)
///
/// @param self const QJsonArray*
///
/// @return libqt_list of QVariant*
///
libqt_list q_jsonarray_to_variant_list(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#size)
///
/// @param self const QJsonArray*
///
intptr_t q_jsonarray_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#count)
///
/// @param self const QJsonArray*
///
intptr_t q_jsonarray_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#isEmpty)
///
/// @param self const QJsonArray*
///
bool q_jsonarray_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#at)
///
/// @param self const QJsonArray*
/// @param i intptr_t
///
QJsonValue* q_jsonarray_at(const void* self, intptr_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#first)
///
/// @param self const QJsonArray*
///
QJsonValue* q_jsonarray_first(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#last)
///
/// @param self const QJsonArray*
///
QJsonValue* q_jsonarray_last(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#prepend)
///
/// @param self QJsonArray*
/// @param value QJsonValue*
///
void q_jsonarray_prepend(void* self, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#append)
///
/// @param self QJsonArray*
/// @param value QJsonValue*
///
void q_jsonarray_append(void* self, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#removeAt)
///
/// @param self QJsonArray*
/// @param i intptr_t
///
void q_jsonarray_remove_at(void* self, intptr_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#takeAt)
///
/// @param self QJsonArray*
/// @param i intptr_t
///
QJsonValue* q_jsonarray_take_at(void* self, intptr_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#removeFirst)
///
/// @param self QJsonArray*
///
void q_jsonarray_remove_first(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#removeLast)
///
/// @param self QJsonArray*
///
void q_jsonarray_remove_last(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#insert)
///
/// @param self QJsonArray*
/// @param i intptr_t
/// @param value QJsonValue*
///
void q_jsonarray_insert(void* self, intptr_t i, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#replace)
///
/// @param self QJsonArray*
/// @param i intptr_t
/// @param value QJsonValue*
///
void q_jsonarray_replace(void* self, intptr_t i, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#contains)
///
/// @param self const QJsonArray*
/// @param element QJsonValue*
///
bool q_jsonarray_contains(const void* self, const void* element);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#operator-5b-5d)
///
/// @param self QJsonArray*
/// @param i intptr_t
///
QJsonValueRef* q_jsonarray_operator_subscript(void* self, intptr_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#operator-5b-5d)
///
/// @param self const QJsonArray*
/// @param i intptr_t
///
QJsonValue* q_jsonarray_operator_subscript2(const void* self, intptr_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#swap)
///
/// @param self QJsonArray*
/// @param other QJsonArray*
///
void q_jsonarray_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#begin)
///
/// @param self QJsonArray*
///
QJsonArray__iterator* q_jsonarray_begin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#begin)
///
/// @param self const QJsonArray*
///
QJsonArray__const_iterator* q_jsonarray_begin2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#constBegin)
///
/// @param self const QJsonArray*
///
QJsonArray__const_iterator* q_jsonarray_const_begin(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#cbegin)
///
/// @param self const QJsonArray*
///
QJsonArray__const_iterator* q_jsonarray_cbegin(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#end)
///
/// @param self QJsonArray*
///
QJsonArray__iterator* q_jsonarray_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#end)
///
/// @param self const QJsonArray*
///
QJsonArray__const_iterator* q_jsonarray_end2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#constEnd)
///
/// @param self const QJsonArray*
///
QJsonArray__const_iterator* q_jsonarray_const_end(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#cend)
///
/// @param self const QJsonArray*
///
QJsonArray__const_iterator* q_jsonarray_cend(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#insert)
///
/// @param self QJsonArray*
/// @param before QJsonArray__iterator*
/// @param value QJsonValue*
///
QJsonArray__iterator* q_jsonarray_insert2(void* self, void* before, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#erase)
///
/// @param self QJsonArray*
/// @param it QJsonArray__iterator*
///
QJsonArray__iterator* q_jsonarray_erase(void* self, void* it);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#operator-2b)
///
/// @param self const QJsonArray*
/// @param v QJsonValue*
///
QJsonArray* q_jsonarray_operator_plus(const void* self, const void* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#operator-2b-eq)
///
/// @param self QJsonArray*
/// @param v QJsonValue*
///
QJsonArray* q_jsonarray_operator_plus_assign(void* self, const void* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#operator-lt-lt)
///
/// @param self QJsonArray*
/// @param v QJsonValue*
///
QJsonArray* q_jsonarray_operator_shift_left(void* self, const void* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#push_back)
///
/// @param self QJsonArray*
/// @param t QJsonValue*
///
void q_jsonarray_push_back(void* self, const void* t);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#push_front)
///
/// @param self QJsonArray*
/// @param t QJsonValue*
///
void q_jsonarray_push_front(void* self, const void* t);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#pop_front)
///
/// @param self QJsonArray*
///
void q_jsonarray_pop_front(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#pop_back)
///
/// @param self QJsonArray*
///
void q_jsonarray_pop_back(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#empty)
///
/// @param self const QJsonArray*
///
bool q_jsonarray_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#dtor.QJsonArray)
///
/// Delete this object from C++ memory.
///
/// @param self QJsonArray*
///
void q_jsonarray_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#qHash)
///
/// @param array QJsonArray*
/// @param seed size_t
///
size_t q_qjsonarray_q_hash(const void* array, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html)

/// q_jsonarray__iterator_new constructs a new QJsonArray::iterator object.
///
/// @param other QJsonArray__iterator*
///
QJsonArray__iterator* q_jsonarray__iterator_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html)

/// q_jsonarray__iterator_new2 constructs a new QJsonArray::iterator object.
///
QJsonArray__iterator* q_jsonarray__iterator_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html)

/// q_jsonarray__iterator_new3 constructs a new QJsonArray::iterator object.
///
/// @param array QJsonArray*
/// @param index intptr_t
///
QJsonArray__iterator* q_jsonarray__iterator_new3(void* array, intptr_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html)

/// q_jsonarray__iterator_new4 constructs a new QJsonArray::iterator object.
///
/// @param other QJsonArray__iterator*
///
QJsonArray__iterator* q_jsonarray__iterator_new4(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-eq)
///
/// @param self QJsonArray__iterator*
/// @param other QJsonArray__iterator*
///
void q_jsonarray__iterator_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-2a)
///
/// @param self const QJsonArray__iterator*
///
QJsonValueRef* q_jsonarray__iterator_operator_multiply(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator--gt)
///
/// @param self const QJsonArray__iterator*
///
const QJsonValueConstRef* q_jsonarray__iterator_operator_minus_greater(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator--gt)
///
/// @param self QJsonArray__iterator*
///
QJsonValueRef* q_jsonarray__iterator_operator_minus_greater2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-5b-5d)
///
/// @param self const QJsonArray__iterator*
/// @param j intptr_t
///
QJsonValueRef* q_jsonarray__iterator_operator_subscript(const void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-2b-2b)
///
/// @param self QJsonArray__iterator*
///
QJsonArray__iterator* q_jsonarray__iterator_operator_plus_plus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-2b-2b)
///
/// @param self QJsonArray__iterator*
/// @param param1 int
///
QJsonArray__iterator* q_jsonarray__iterator_operator_plus_plus2(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator--)
///
/// @param self QJsonArray__iterator*
///
QJsonArray__iterator* q_jsonarray__iterator_operator_minus_minus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator--)
///
/// @param self QJsonArray__iterator*
/// @param param1 int
///
QJsonArray__iterator* q_jsonarray__iterator_operator_minus_minus2(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-2b-eq)
///
/// @param self QJsonArray__iterator*
/// @param j intptr_t
///
QJsonArray__iterator* q_jsonarray__iterator_operator_plus_assign(void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator--eq)
///
/// @param self QJsonArray__iterator*
/// @param j intptr_t
///
QJsonArray__iterator* q_jsonarray__iterator_operator_minus_assign(void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-2b)
///
/// @param self const QJsonArray__iterator*
/// @param j intptr_t
///
QJsonArray__iterator* q_jsonarray__iterator_operator_plus(const void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-)
///
/// @param self const QJsonArray__iterator*
/// @param j intptr_t
///
QJsonArray__iterator* q_jsonarray__iterator_operator_minus(const void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-)
///
/// @param self const QJsonArray__iterator*
/// @param j QJsonArray__iterator*
///
intptr_t q_jsonarray__iterator_operator_minus2(const void* self, void* j);

/// Delete this object from C++ memory.
///
/// @param self QJsonArray__iterator*
///
void q_jsonarray__iterator_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html)

/// q_jsonarray__const_iterator_new constructs a new QJsonArray::const_iterator object.
///
/// @param other QJsonArray__const_iterator*
///
QJsonArray__const_iterator* q_jsonarray__const_iterator_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html)

/// q_jsonarray__const_iterator_new2 constructs a new QJsonArray::const_iterator object.
///
QJsonArray__const_iterator* q_jsonarray__const_iterator_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html)

/// q_jsonarray__const_iterator_new3 constructs a new QJsonArray::const_iterator object.
///
/// @param array QJsonArray*
/// @param index intptr_t
///
QJsonArray__const_iterator* q_jsonarray__const_iterator_new3(const void* array, intptr_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html)

/// q_jsonarray__const_iterator_new4 constructs a new QJsonArray::const_iterator object.
///
/// @param o QJsonArray__iterator*
///
QJsonArray__const_iterator* q_jsonarray__const_iterator_new4(const void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html)

/// q_jsonarray__const_iterator_new5 constructs a new QJsonArray::const_iterator object.
///
/// @param other QJsonArray__const_iterator*
///
QJsonArray__const_iterator* q_jsonarray__const_iterator_new5(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-eq)
///
/// @param self QJsonArray__const_iterator*
/// @param other QJsonArray__const_iterator*
///
void q_jsonarray__const_iterator_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-2a)
///
/// @param self const QJsonArray__const_iterator*
///
const QJsonValueConstRef* q_jsonarray__const_iterator_operator_multiply(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator--gt)
///
/// @param self const QJsonArray__const_iterator*
///
const QJsonValueConstRef* q_jsonarray__const_iterator_operator_minus_greater(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-5b-5d)
///
/// @param self const QJsonArray__const_iterator*
/// @param j intptr_t
///
QJsonValueConstRef* q_jsonarray__const_iterator_operator_subscript(const void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-2b-2b)
///
/// @param self QJsonArray__const_iterator*
///
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_plus_plus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-2b-2b)
///
/// @param self QJsonArray__const_iterator*
/// @param param1 int
///
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_plus_plus2(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator--)
///
/// @param self QJsonArray__const_iterator*
///
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_minus_minus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator--)
///
/// @param self QJsonArray__const_iterator*
/// @param param1 int
///
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_minus_minus2(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-2b-eq)
///
/// @param self QJsonArray__const_iterator*
/// @param j intptr_t
///
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_plus_assign(void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator--eq)
///
/// @param self QJsonArray__const_iterator*
/// @param j intptr_t
///
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_minus_assign(void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-2b)
///
/// @param self const QJsonArray__const_iterator*
/// @param j intptr_t
///
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_plus(const void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-)
///
/// @param self const QJsonArray__const_iterator*
/// @param j intptr_t
///
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_minus(const void* self, intptr_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-)
///
/// @param self const QJsonArray__const_iterator*
/// @param j QJsonArray__const_iterator*
///
intptr_t q_jsonarray__const_iterator_operator_minus2(const void* self, void* j);

/// Delete this object from C++ memory.
///
/// @param self QJsonArray__const_iterator*
///
void q_jsonarray__const_iterator_delete(void* self);

#endif
