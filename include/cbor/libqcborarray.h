#pragma once
#ifndef SRC_CBORQT6C_LIBQCBORARRAY_H
#define SRC_CBORQT6C_LIBQCBORARRAY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqcborvalue.h"
#include "../libqjsonarray.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qcborarray.html

/// q_cborarray_new constructs a new QCborArray object.
///
///
QCborArray* q_cborarray_new();

/// q_cborarray_new2 constructs a new QCborArray object.
///
/// ``` QCborArray* other ```
QCborArray* q_cborarray_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator=)
///
/// ``` QCborArray* self, QCborArray* other ```
void q_cborarray_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#swap)
///
/// ``` QCborArray* self, QCborArray* other ```
void q_cborarray_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#toCborValue)
///
/// ``` QCborArray* self ```
QCborValue* q_cborarray_to_cbor_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#size)
///
/// ``` QCborArray* self ```
int64_t q_cborarray_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#isEmpty)
///
/// ``` QCborArray* self ```
bool q_cborarray_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#clear)
///
/// ``` QCborArray* self ```
void q_cborarray_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#at)
///
/// ``` QCborArray* self, int64_t i ```
QCborValue* q_cborarray_at(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#first)
///
/// ``` QCborArray* self ```
QCborValue* q_cborarray_first(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#last)
///
/// ``` QCborArray* self ```
QCborValue* q_cborarray_last(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator[])
///
/// ``` QCborArray* self, int64_t i ```
QCborValue* q_cborarray_operator_subscript(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#first)
///
/// ``` QCborArray* self ```
QCborValueRef* q_cborarray_first2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#last)
///
/// ``` QCborArray* self ```
QCborValueRef* q_cborarray_last2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator[])
///
/// ``` QCborArray* self, int64_t i ```
QCborValueRef* q_cborarray_operator_subscript_with_qsizetype(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#insert)
///
/// ``` QCborArray* self, int64_t i, QCborValue* value ```
void q_cborarray_insert(void* self, int64_t i, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#prepend)
///
/// ``` QCborArray* self, QCborValue* value ```
void q_cborarray_prepend(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#append)
///
/// ``` QCborArray* self, QCborValue* value ```
void q_cborarray_append(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#extract)
///
/// ``` QCborArray* self, QCborArray__ConstIterator* it ```
QCborValue* q_cborarray_extract(void* self, void* it);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#extract)
///
/// ``` QCborArray* self, QCborArray__Iterator* it ```
QCborValue* q_cborarray_extract_with_it(void* self, void* it);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#removeAt)
///
/// ``` QCborArray* self, int64_t i ```
void q_cborarray_remove_at(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#takeAt)
///
/// ``` QCborArray* self, int64_t i ```
QCborValue* q_cborarray_take_at(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#removeFirst)
///
/// ``` QCborArray* self ```
void q_cborarray_remove_first(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#removeLast)
///
/// ``` QCborArray* self ```
void q_cborarray_remove_last(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#takeFirst)
///
/// ``` QCborArray* self ```
QCborValue* q_cborarray_take_first(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#takeLast)
///
/// ``` QCborArray* self ```
QCborValue* q_cborarray_take_last(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#contains)
///
/// ``` QCborArray* self, QCborValue* value ```
bool q_cborarray_contains(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#compare)
///
/// ``` QCborArray* self, QCborArray* other ```
int32_t q_cborarray_compare(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator==)
///
/// ``` QCborArray* self, QCborArray* other ```
bool q_cborarray_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator!=)
///
/// ``` QCborArray* self, QCborArray* other ```
bool q_cborarray_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator<)
///
/// ``` QCborArray* self, QCborArray* other ```
bool q_cborarray_operator_lesser(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#begin)
///
/// ``` QCborArray* self ```
QCborArray__Iterator* q_cborarray_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#constBegin)
///
/// ``` QCborArray* self ```
QCborArray__ConstIterator* q_cborarray_const_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#begin)
///
/// ``` QCborArray* self ```
QCborArray__ConstIterator* q_cborarray_begin2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#cbegin)
///
/// ``` QCborArray* self ```
QCborArray__ConstIterator* q_cborarray_cbegin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#end)
///
/// ``` QCborArray* self ```
QCborArray__Iterator* q_cborarray_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#constEnd)
///
/// ``` QCborArray* self ```
QCborArray__ConstIterator* q_cborarray_const_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#end)
///
/// ``` QCborArray* self ```
QCborArray__ConstIterator* q_cborarray_end2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#cend)
///
/// ``` QCborArray* self ```
QCborArray__ConstIterator* q_cborarray_cend(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#insert)
///
/// ``` QCborArray* self, QCborArray__Iterator* before, QCborValue* value ```
QCborArray__Iterator* q_cborarray_insert2(void* self, void* before, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#insert)
///
/// ``` QCborArray* self, QCborArray__ConstIterator* before, QCborValue* value ```
QCborArray__Iterator* q_cborarray_insert3(void* self, void* before, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#erase)
///
/// ``` QCborArray* self, QCborArray__Iterator* it ```
QCborArray__Iterator* q_cborarray_erase(void* self, void* it);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#erase)
///
/// ``` QCborArray* self, QCborArray__ConstIterator* it ```
QCborArray__Iterator* q_cborarray_erase_with_it(void* self, void* it);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#push_back)
///
/// ``` QCborArray* self, QCborValue* t ```
void q_cborarray_push_back(void* self, void* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#push_front)
///
/// ``` QCborArray* self, QCborValue* t ```
void q_cborarray_push_front(void* self, void* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#pop_front)
///
/// ``` QCborArray* self ```
void q_cborarray_pop_front(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#pop_back)
///
/// ``` QCborArray* self ```
void q_cborarray_pop_back(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#empty)
///
/// ``` QCborArray* self ```
bool q_cborarray_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator+)
///
/// ``` QCborArray* self, QCborValue* v ```
QCborArray* q_cborarray_operator_plus(void* self, void* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator+=)
///
/// ``` QCborArray* self, QCborValue* v ```
QCborArray* q_cborarray_operator_plus_assign(void* self, void* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator<<)
///
/// ``` QCborArray* self, QCborValue* v ```
QCborArray* q_cborarray_operator_shift_left(void* self, void* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#fromStringList)
///
/// ``` const char* list[] ```
QCborArray* q_cborarray_from_string_list(const char* list[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#fromJsonArray)
///
/// ``` QJsonArray* array ```
QCborArray* q_cborarray_from_json_array(void* array);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#toJsonArray)
///
/// ``` QCborArray* self ```
QJsonArray* q_cborarray_to_json_array(void* self);

/// Delete this object from C++ memory.
///
/// ``` QCborArray* self ```
void q_cborarray_delete(void* self);

/// https://doc.qt.io/qt-6/qcborarray-iterator.html

/// q_cborarray__iterator_new constructs a new QCborArray::Iterator object.
///
/// ``` QCborArray__Iterator* other ```
QCborArray__Iterator* q_cborarray__iterator_new(void* other);

/// q_cborarray__iterator_new2 constructs a new QCborArray::Iterator object.
///
///
QCborArray__Iterator* q_cborarray__iterator_new2();

/// q_cborarray__iterator_new3 constructs a new QCborArray::Iterator object.
///
/// ``` QCborArray__Iterator* param1 ```
QCborArray__Iterator* q_cborarray__iterator_new3(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator=)
///
/// ``` QCborArray__Iterator* self, QCborArray__Iterator* other ```
void q_cborarray__iterator_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator*)
///
/// ``` QCborArray__Iterator* self ```
QCborValueRef* q_cborarray__iterator_operator_multiply(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator->)
///
/// ``` QCborArray__Iterator* self ```
QCborValueRef* q_cborarray__iterator_operator_minus_greater(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator->)
///
/// ``` QCborArray__Iterator* self ```
QCborValueConstRef* q_cborarray__iterator_operator_minus_greater2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator[])
///
/// ``` QCborArray__Iterator* self, int64_t j ```
QCborValueRef* q_cborarray__iterator_operator_subscript(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator==)
///
/// ``` QCborArray__Iterator* self, QCborArray__Iterator* o ```
bool q_cborarray__iterator_operator_equal(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator!=)
///
/// ``` QCborArray__Iterator* self, QCborArray__Iterator* o ```
bool q_cborarray__iterator_operator_not_equal(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator<)
///
/// ``` QCborArray__Iterator* self, QCborArray__Iterator* other ```
bool q_cborarray__iterator_operator_lesser(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator<=)
///
/// ``` QCborArray__Iterator* self, QCborArray__Iterator* other ```
bool q_cborarray__iterator_operator_lesser_or_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator>)
///
/// ``` QCborArray__Iterator* self, QCborArray__Iterator* other ```
bool q_cborarray__iterator_operator_greater(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator>=)
///
/// ``` QCborArray__Iterator* self, QCborArray__Iterator* other ```
bool q_cborarray__iterator_operator_greater_or_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator==)
///
/// ``` QCborArray__Iterator* self, QCborArray__ConstIterator* o ```
bool q_cborarray__iterator_operator_equal_with_q_cbor_array_const_iterator(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator!=)
///
/// ``` QCborArray__Iterator* self, QCborArray__ConstIterator* o ```
bool q_cborarray__iterator_operator_not_equal_with_q_cbor_array_const_iterator(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator<)
///
/// ``` QCborArray__Iterator* self, QCborArray__ConstIterator* other ```
bool q_cborarray__iterator_operator_lesser_with_other(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator<=)
///
/// ``` QCborArray__Iterator* self, QCborArray__ConstIterator* other ```
bool q_cborarray__iterator_operator_lesser_or_equal_with_other(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator>)
///
/// ``` QCborArray__Iterator* self, QCborArray__ConstIterator* other ```
bool q_cborarray__iterator_operator_greater_with_other(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator>=)
///
/// ``` QCborArray__Iterator* self, QCborArray__ConstIterator* other ```
bool q_cborarray__iterator_operator_greater_or_equal_with_other(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator++)
///
/// ``` QCborArray__Iterator* self ```
QCborArray__Iterator* q_cborarray__iterator_operator_plus_plus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator++)
///
/// ``` QCborArray__Iterator* self, int param1 ```
QCborArray__Iterator* q_cborarray__iterator_operator_plus_plus_with_int(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator--)
///
/// ``` QCborArray__Iterator* self ```
QCborArray__Iterator* q_cborarray__iterator_operator_minus_minus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator--)
///
/// ``` QCborArray__Iterator* self, int param1 ```
QCborArray__Iterator* q_cborarray__iterator_operator_minus_minus_with_int(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator+=)
///
/// ``` QCborArray__Iterator* self, int64_t j ```
QCborArray__Iterator* q_cborarray__iterator_operator_plus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator-=)
///
/// ``` QCborArray__Iterator* self, int64_t j ```
QCborArray__Iterator* q_cborarray__iterator_operator_minus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator+)
///
/// ``` QCborArray__Iterator* self, int64_t j ```
QCborArray__Iterator* q_cborarray__iterator_operator_plus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator-)
///
/// ``` QCborArray__Iterator* self, int64_t j ```
QCborArray__Iterator* q_cborarray__iterator_operator_minus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator-)
///
/// ``` QCborArray__Iterator* self, QCborArray__Iterator* j ```
int64_t q_cborarray__iterator_operator_minus_with_q_cbor_array_iterator(void* self, void* j);

/// Delete this object from C++ memory.
///
/// ``` QCborArray__Iterator* self ```
void q_cborarray__iterator_delete(void* self);

/// https://doc.qt.io/qt-6/qcborarray-constiterator.html

/// q_cborarray__constiterator_new constructs a new QCborArray::ConstIterator object.
///
/// ``` QCborArray__ConstIterator* other ```
QCborArray__ConstIterator* q_cborarray__constiterator_new(void* other);

/// q_cborarray__constiterator_new2 constructs a new QCborArray::ConstIterator object.
///
///
QCborArray__ConstIterator* q_cborarray__constiterator_new2();

/// q_cborarray__constiterator_new3 constructs a new QCborArray::ConstIterator object.
///
/// ``` QCborArray__ConstIterator* param1 ```
QCborArray__ConstIterator* q_cborarray__constiterator_new3(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator=)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__ConstIterator* other ```
void q_cborarray__constiterator_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator*)
///
/// ``` QCborArray__ConstIterator* self ```
QCborValueConstRef* q_cborarray__constiterator_operator_multiply(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator->)
///
/// ``` QCborArray__ConstIterator* self ```
QCborValueConstRef* q_cborarray__constiterator_operator_minus_greater(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator[])
///
/// ``` QCborArray__ConstIterator* self, int64_t j ```
QCborValueConstRef* q_cborarray__constiterator_operator_subscript(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator==)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__Iterator* o ```
bool q_cborarray__constiterator_operator_equal(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator!=)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__Iterator* o ```
bool q_cborarray__constiterator_operator_not_equal(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator<)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__Iterator* other ```
bool q_cborarray__constiterator_operator_lesser(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator<=)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__Iterator* other ```
bool q_cborarray__constiterator_operator_lesser_or_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator>)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__Iterator* other ```
bool q_cborarray__constiterator_operator_greater(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator>=)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__Iterator* other ```
bool q_cborarray__constiterator_operator_greater_or_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator==)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__ConstIterator* o ```
bool q_cborarray__constiterator_operator_equal_with_q_cbor_array_const_iterator(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator!=)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__ConstIterator* o ```
bool q_cborarray__constiterator_operator_not_equal_with_q_cbor_array_const_iterator(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator<)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__ConstIterator* other ```
bool q_cborarray__constiterator_operator_lesser_with_other(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator<=)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__ConstIterator* other ```
bool q_cborarray__constiterator_operator_lesser_or_equal_with_other(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator>)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__ConstIterator* other ```
bool q_cborarray__constiterator_operator_greater_with_other(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator>=)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__ConstIterator* other ```
bool q_cborarray__constiterator_operator_greater_or_equal_with_other(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator++)
///
/// ``` QCborArray__ConstIterator* self ```
QCborArray__ConstIterator* q_cborarray__constiterator_operator_plus_plus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator++)
///
/// ``` QCborArray__ConstIterator* self, int param1 ```
QCborArray__ConstIterator* q_cborarray__constiterator_operator_plus_plus_with_int(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator--)
///
/// ``` QCborArray__ConstIterator* self ```
QCborArray__ConstIterator* q_cborarray__constiterator_operator_minus_minus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator--)
///
/// ``` QCborArray__ConstIterator* self, int param1 ```
QCborArray__ConstIterator* q_cborarray__constiterator_operator_minus_minus_with_int(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator+=)
///
/// ``` QCborArray__ConstIterator* self, int64_t j ```
QCborArray__ConstIterator* q_cborarray__constiterator_operator_plus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator-=)
///
/// ``` QCborArray__ConstIterator* self, int64_t j ```
QCborArray__ConstIterator* q_cborarray__constiterator_operator_minus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator+)
///
/// ``` QCborArray__ConstIterator* self, int64_t j ```
QCborArray__ConstIterator* q_cborarray__constiterator_operator_plus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator-)
///
/// ``` QCborArray__ConstIterator* self, int64_t j ```
QCborArray__ConstIterator* q_cborarray__constiterator_operator_minus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator-)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__ConstIterator* j ```
int64_t q_cborarray__constiterator_operator_minus_with_q_cbor_array_const_iterator(void* self, void* j);

/// Delete this object from C++ memory.
///
/// ``` QCborArray__ConstIterator* self ```
void q_cborarray__constiterator_delete(void* self);

#endif
