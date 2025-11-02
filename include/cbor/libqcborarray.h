#pragma once
#ifndef SRC_CBORQT6C_LIBQCBORARRAY_H
#define SRC_CBORQT6C_LIBQCBORARRAY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qcborarray.html

/// q_cborarray_new constructs a new QCborArray object.
///
QCborArray* q_cborarray_new();

/// q_cborarray_new2 constructs a new QCborArray object.
///
/// @param other QCborArray*
QCborArray* q_cborarray_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator-eq)
///
/// @param self QCborArray*
/// @param other QCborArray*
void q_cborarray_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#swap)
///
/// @param self QCborArray*
/// @param other QCborArray*
void q_cborarray_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#toCborValue)
///
/// @param self QCborArray*
QCborValue* q_cborarray_to_cbor_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#size)
///
/// @param self QCborArray*
int64_t q_cborarray_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#isEmpty)
///
/// @param self QCborArray*
bool q_cborarray_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#clear)
///
/// @param self QCborArray*
void q_cborarray_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#at)
///
/// @param self QCborArray*
/// @param i int64_t
QCborValue* q_cborarray_at(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#first)
///
/// @param self QCborArray*
QCborValue* q_cborarray_first(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#last)
///
/// @param self QCborArray*
QCborValue* q_cborarray_last(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator-5b-5d)
///
/// @param self QCborArray*
/// @param i int64_t
const QCborValue* q_cborarray_operator_subscript(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#first)
///
/// @param self QCborArray*
QCborValueRef* q_cborarray_first2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#last)
///
/// @param self QCborArray*
QCborValueRef* q_cborarray_last2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator-5b-5d)
///
/// @param self QCborArray*
/// @param i int64_t
QCborValueRef* q_cborarray_operator_subscript2(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#insert)
///
/// @param self QCborArray*
/// @param i int64_t
/// @param value QCborValue*
void q_cborarray_insert(void* self, int64_t i, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#prepend)
///
/// @param self QCborArray*
/// @param value QCborValue*
void q_cborarray_prepend(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#append)
///
/// @param self QCborArray*
/// @param value QCborValue*
void q_cborarray_append(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#extract)
///
/// @param self QCborArray*
/// @param it QCborArray__ConstIterator*
QCborValue* q_cborarray_extract(void* self, void* it);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#extract)
///
/// @param self QCborArray*
/// @param it QCborArray__Iterator*
QCborValue* q_cborarray_extract2(void* self, void* it);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#removeAt)
///
/// @param self QCborArray*
/// @param i int64_t
void q_cborarray_remove_at(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#takeAt)
///
/// @param self QCborArray*
/// @param i int64_t
QCborValue* q_cborarray_take_at(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#removeFirst)
///
/// @param self QCborArray*
void q_cborarray_remove_first(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#removeLast)
///
/// @param self QCborArray*
void q_cborarray_remove_last(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#takeFirst)
///
/// @param self QCborArray*
QCborValue* q_cborarray_take_first(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#takeLast)
///
/// @param self QCborArray*
QCborValue* q_cborarray_take_last(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#contains)
///
/// @param self QCborArray*
/// @param value QCborValue*
bool q_cborarray_contains(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#compare)
///
/// @param self QCborArray*
/// @param other QCborArray*
int32_t q_cborarray_compare(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#begin)
///
/// @param self QCborArray*
QCborArray__Iterator* q_cborarray_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#constBegin)
///
/// @param self QCborArray*
QCborArray__ConstIterator* q_cborarray_const_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#begin)
///
/// @param self QCborArray*
QCborArray__ConstIterator* q_cborarray_begin2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#cbegin)
///
/// @param self QCborArray*
QCborArray__ConstIterator* q_cborarray_cbegin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#end)
///
/// @param self QCborArray*
QCborArray__Iterator* q_cborarray_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#constEnd)
///
/// @param self QCborArray*
QCborArray__ConstIterator* q_cborarray_const_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#end)
///
/// @param self QCborArray*
QCborArray__ConstIterator* q_cborarray_end2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#cend)
///
/// @param self QCborArray*
QCborArray__ConstIterator* q_cborarray_cend(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#insert)
///
/// @param self QCborArray*
/// @param before QCborArray__Iterator*
/// @param value QCborValue*
QCborArray__Iterator* q_cborarray_insert2(void* self, void* before, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#insert)
///
/// @param self QCborArray*
/// @param before QCborArray__ConstIterator*
/// @param value QCborValue*
QCborArray__Iterator* q_cborarray_insert3(void* self, void* before, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#erase)
///
/// @param self QCborArray*
/// @param it QCborArray__Iterator*
QCborArray__Iterator* q_cborarray_erase(void* self, void* it);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#erase)
///
/// @param self QCborArray*
/// @param it QCborArray__ConstIterator*
QCborArray__Iterator* q_cborarray_erase2(void* self, void* it);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#push_back)
///
/// @param self QCborArray*
/// @param t QCborValue*
void q_cborarray_push_back(void* self, void* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#push_front)
///
/// @param self QCborArray*
/// @param t QCborValue*
void q_cborarray_push_front(void* self, void* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#pop_front)
///
/// @param self QCborArray*
void q_cborarray_pop_front(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#pop_back)
///
/// @param self QCborArray*
void q_cborarray_pop_back(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#empty)
///
/// @param self QCborArray*
bool q_cborarray_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator-2b)
///
/// @param self QCborArray*
/// @param v QCborValue*
QCborArray* q_cborarray_operator_plus(void* self, void* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator-2b-eq)
///
/// @param self QCborArray*
/// @param v QCborValue*
QCborArray* q_cborarray_operator_plus_assign(void* self, void* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator-lt-lt)
///
/// @param self QCborArray*
/// @param v QCborValue*
QCborArray* q_cborarray_operator_shift_left(void* self, void* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#fromStringList)
///
/// @param list const char**
QCborArray* q_cborarray_from_string_list(const char* list[static 1]);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#fromVariantList)
///
/// @param list libqt_list /* of QVariant* */
QCborArray* q_cborarray_from_variant_list(libqt_list list);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#fromJsonArray)
///
/// @param array QJsonArray*
QCborArray* q_cborarray_from_json_array(void* array);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#toVariantList)
///
/// @param self QCborArray*
libqt_list /* of QVariant* */ q_cborarray_to_variant_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#toJsonArray)
///
/// @param self QCborArray*
QJsonArray* q_cborarray_to_json_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#dtor.QCborArray)
///
/// Delete this object from C++ memory.
///
/// @param self QCborArray*
void q_cborarray_delete(void* self);

/// https://doc.qt.io/qt-6/qcborarray-iterator.html

/// q_cborarray__iterator_new constructs a new QCborArray::Iterator object.
///
/// @param other QCborArray__Iterator*
QCborArray__Iterator* q_cborarray__iterator_new(void* other);

/// q_cborarray__iterator_new2 constructs a new QCborArray::Iterator object.
///
QCborArray__Iterator* q_cborarray__iterator_new2();

/// q_cborarray__iterator_new3 constructs a new QCborArray::Iterator object.
///
/// @param param1 QCborArray__Iterator*
QCborArray__Iterator* q_cborarray__iterator_new3(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-eq)
///
/// @param self QCborArray__Iterator*
/// @param other QCborArray__Iterator*
void q_cborarray__iterator_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-2a)
///
/// @param self QCborArray__Iterator*
QCborValueRef* q_cborarray__iterator_operator_multiply(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator--gt)
///
/// @param self QCborArray__Iterator*
QCborValueRef* q_cborarray__iterator_operator_minus_greater(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator--gt)
///
/// @param self QCborArray__Iterator*
const QCborValueConstRef* q_cborarray__iterator_operator_minus_greater2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-5b-5d)
///
/// @param self QCborArray__Iterator*
/// @param j int64_t
QCborValueRef* q_cborarray__iterator_operator_subscript(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-2b-2b)
///
/// @param self QCborArray__Iterator*
QCborArray__Iterator* q_cborarray__iterator_operator_plus_plus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-2b-2b)
///
/// @param self QCborArray__Iterator*
/// @param param1 int
QCborArray__Iterator* q_cborarray__iterator_operator_plus_plus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator--)
///
/// @param self QCborArray__Iterator*
QCborArray__Iterator* q_cborarray__iterator_operator_minus_minus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator--)
///
/// @param self QCborArray__Iterator*
/// @param param1 int
QCborArray__Iterator* q_cborarray__iterator_operator_minus_minus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-2b-eq)
///
/// @param self QCborArray__Iterator*
/// @param j int64_t
QCborArray__Iterator* q_cborarray__iterator_operator_plus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator--eq)
///
/// @param self QCborArray__Iterator*
/// @param j int64_t
QCborArray__Iterator* q_cborarray__iterator_operator_minus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-2b)
///
/// @param self QCborArray__Iterator*
/// @param j int64_t
QCborArray__Iterator* q_cborarray__iterator_operator_plus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-)
///
/// @param self QCborArray__Iterator*
/// @param j int64_t
QCborArray__Iterator* q_cborarray__iterator_operator_minus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-)
///
/// @param self QCborArray__Iterator*
/// @param j QCborArray__Iterator*
int64_t q_cborarray__iterator_operator_minus2(void* self, void* j);

/// Delete this object from C++ memory.
///
/// @param self QCborArray__Iterator*
void q_cborarray__iterator_delete(void* self);

/// https://doc.qt.io/qt-6/qcborarray-constiterator.html

/// q_cborarray__constiterator_new constructs a new QCborArray::ConstIterator object.
///
/// @param other QCborArray__ConstIterator*
QCborArray__ConstIterator* q_cborarray__constiterator_new(void* other);

/// q_cborarray__constiterator_new2 constructs a new QCborArray::ConstIterator object.
///
QCborArray__ConstIterator* q_cborarray__constiterator_new2();

/// q_cborarray__constiterator_new3 constructs a new QCborArray::ConstIterator object.
///
/// @param param1 QCborArray__ConstIterator*
QCborArray__ConstIterator* q_cborarray__constiterator_new3(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-eq)
///
/// @param self QCborArray__ConstIterator*
/// @param other QCborArray__ConstIterator*
void q_cborarray__constiterator_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-2a)
///
/// @param self QCborArray__ConstIterator*
QCborValueConstRef* q_cborarray__constiterator_operator_multiply(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator--gt)
///
/// @param self QCborArray__ConstIterator*
const QCborValueConstRef* q_cborarray__constiterator_operator_minus_greater(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-5b-5d)
///
/// @param self QCborArray__ConstIterator*
/// @param j int64_t
QCborValueConstRef* q_cborarray__constiterator_operator_subscript(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-2b-2b)
///
/// @param self QCborArray__ConstIterator*
QCborArray__ConstIterator* q_cborarray__constiterator_operator_plus_plus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-2b-2b)
///
/// @param self QCborArray__ConstIterator*
/// @param param1 int
QCborArray__ConstIterator* q_cborarray__constiterator_operator_plus_plus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator--)
///
/// @param self QCborArray__ConstIterator*
QCborArray__ConstIterator* q_cborarray__constiterator_operator_minus_minus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator--)
///
/// @param self QCborArray__ConstIterator*
/// @param param1 int
QCborArray__ConstIterator* q_cborarray__constiterator_operator_minus_minus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-2b-eq)
///
/// @param self QCborArray__ConstIterator*
/// @param j int64_t
QCborArray__ConstIterator* q_cborarray__constiterator_operator_plus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator--eq)
///
/// @param self QCborArray__ConstIterator*
/// @param j int64_t
QCborArray__ConstIterator* q_cborarray__constiterator_operator_minus_assign(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-2b)
///
/// @param self QCborArray__ConstIterator*
/// @param j int64_t
QCborArray__ConstIterator* q_cborarray__constiterator_operator_plus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-)
///
/// @param self QCborArray__ConstIterator*
/// @param j int64_t
QCborArray__ConstIterator* q_cborarray__constiterator_operator_minus(void* self, int64_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-)
///
/// @param self QCborArray__ConstIterator*
/// @param j QCborArray__ConstIterator*
int64_t q_cborarray__constiterator_operator_minus2(void* self, void* j);

/// Delete this object from C++ memory.
///
/// @param self QCborArray__ConstIterator*
void q_cborarray__constiterator_delete(void* self);

#endif
