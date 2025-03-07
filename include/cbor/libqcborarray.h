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

QCborArray* q_cborarray_new();
QCborArray* q_cborarray_new2(void* other);
void q_cborarray_operator_assign(void* self, void* other);
void q_cborarray_swap(void* self, void* other);
QCborValue* q_cborarray_to_cbor_value(void* self);
int64_t q_cborarray_size(void* self);
bool q_cborarray_is_empty(void* self);
void q_cborarray_clear(void* self);
QCborValue* q_cborarray_at(void* self, int64_t i);
QCborValue* q_cborarray_first(void* self);
QCborValue* q_cborarray_last(void* self);
QCborValue* q_cborarray_operator_subscript(void* self, int64_t i);
QCborValueRef* q_cborarray_first2(void* self);
QCborValueRef* q_cborarray_last2(void* self);
QCborValueRef* q_cborarray_operator_subscript_with_qsizetype(void* self, int64_t i);
void q_cborarray_insert(void* self, int64_t i, void* value);
void q_cborarray_prepend(void* self, void* value);
void q_cborarray_append(void* self, void* value);
QCborValue* q_cborarray_extract(void* self, void* it);
QCborValue* q_cborarray_extract_with_it(void* self, void* it);
void q_cborarray_remove_at(void* self, int64_t i);
QCborValue* q_cborarray_take_at(void* self, int64_t i);
void q_cborarray_remove_first(void* self);
void q_cborarray_remove_last(void* self);
QCborValue* q_cborarray_take_first(void* self);
QCborValue* q_cborarray_take_last(void* self);
bool q_cborarray_contains(void* self, void* value);
int32_t q_cborarray_compare(void* self, void* other);
bool q_cborarray_operator_equal(void* self, void* other);
bool q_cborarray_operator_not_equal(void* self, void* other);
bool q_cborarray_operator_lesser(void* self, void* other);
QCborArray__Iterator* q_cborarray_begin(void* self);
QCborArray__ConstIterator* q_cborarray_const_begin(void* self);
QCborArray__ConstIterator* q_cborarray_begin2(void* self);
QCborArray__ConstIterator* q_cborarray_cbegin(void* self);
QCborArray__Iterator* q_cborarray_end(void* self);
QCborArray__ConstIterator* q_cborarray_const_end(void* self);
QCborArray__ConstIterator* q_cborarray_end2(void* self);
QCborArray__ConstIterator* q_cborarray_cend(void* self);
QCborArray__Iterator* q_cborarray_insert2(void* self, void* before, void* value);
QCborArray__Iterator* q_cborarray_insert3(void* self, void* before, void* value);
QCborArray__Iterator* q_cborarray_erase(void* self, void* it);
QCborArray__Iterator* q_cborarray_erase_with_it(void* self, void* it);
void q_cborarray_push_back(void* self, void* t);
void q_cborarray_push_front(void* self, void* t);
void q_cborarray_pop_front(void* self);
void q_cborarray_pop_back(void* self);
bool q_cborarray_empty(void* self);
QCborArray* q_cborarray_operator_plus(void* self, void* v);
QCborArray* q_cborarray_operator_plus_assign(void* self, void* v);
QCborArray* q_cborarray_operator_shift_left(void* self, void* v);
QCborArray* q_cborarray_from_string_list(const char* list[]);
QCborArray* q_cborarray_from_json_array(void* array);
QJsonArray* q_cborarray_to_json_array(void* self);
void q_cborarray_delete(void* self);

QCborArray__Iterator* q_cborarray__iterator_new(void* other);
QCborArray__Iterator* q_cborarray__iterator_new2();
QCborArray__Iterator* q_cborarray__iterator_new3(void* param1);
void q_cborarray__iterator_operator_assign(void* self, void* other);
QCborValueRef* q_cborarray__iterator_operator_multiply(void* self);
QCborValueRef* q_cborarray__iterator_operator_minus_greater(void* self);
QCborValueConstRef* q_cborarray__iterator_operator_minus_greater2(void* self);
QCborValueRef* q_cborarray__iterator_operator_subscript(void* self, int64_t j);
bool q_cborarray__iterator_operator_equal(void* self, void* o);
bool q_cborarray__iterator_operator_not_equal(void* self, void* o);
bool q_cborarray__iterator_operator_lesser(void* self, void* other);
bool q_cborarray__iterator_operator_lesser_or_equal(void* self, void* other);
bool q_cborarray__iterator_operator_greater(void* self, void* other);
bool q_cborarray__iterator_operator_greater_or_equal(void* self, void* other);
bool q_cborarray__iterator_operator_equal_with_q_cbor_array_const_iterator(void* self, void* o);
bool q_cborarray__iterator_operator_not_equal_with_q_cbor_array_const_iterator(void* self, void* o);
bool q_cborarray__iterator_operator_lesser_with_other(void* self, void* other);
bool q_cborarray__iterator_operator_lesser_or_equal_with_other(void* self, void* other);
bool q_cborarray__iterator_operator_greater_with_other(void* self, void* other);
bool q_cborarray__iterator_operator_greater_or_equal_with_other(void* self, void* other);
QCborArray__Iterator* q_cborarray__iterator_operator_plus_plus(void* self);
QCborArray__Iterator* q_cborarray__iterator_operator_plus_plus_with_int(void* self, int param1);
QCborArray__Iterator* q_cborarray__iterator_operator_minus_minus(void* self);
QCborArray__Iterator* q_cborarray__iterator_operator_minus_minus_with_int(void* self, int param1);
QCborArray__Iterator* q_cborarray__iterator_operator_plus_assign(void* self, int64_t j);
QCborArray__Iterator* q_cborarray__iterator_operator_minus_assign(void* self, int64_t j);
QCborArray__Iterator* q_cborarray__iterator_operator_plus(void* self, int64_t j);
QCborArray__Iterator* q_cborarray__iterator_operator_minus(void* self, int64_t j);
int64_t q_cborarray__iterator_operator_minus_with_q_cbor_array_iterator(void* self, void* j);
void q_cborarray__iterator_delete(void* self);

QCborArray__ConstIterator* q_cborarray__constiterator_new(void* other);
QCborArray__ConstIterator* q_cborarray__constiterator_new2();
QCborArray__ConstIterator* q_cborarray__constiterator_new3(void* param1);
void q_cborarray__constiterator_operator_assign(void* self, void* other);
QCborValueConstRef* q_cborarray__constiterator_operator_multiply(void* self);
QCborValueConstRef* q_cborarray__constiterator_operator_minus_greater(void* self);
QCborValueConstRef* q_cborarray__constiterator_operator_subscript(void* self, int64_t j);
bool q_cborarray__constiterator_operator_equal(void* self, void* o);
bool q_cborarray__constiterator_operator_not_equal(void* self, void* o);
bool q_cborarray__constiterator_operator_lesser(void* self, void* other);
bool q_cborarray__constiterator_operator_lesser_or_equal(void* self, void* other);
bool q_cborarray__constiterator_operator_greater(void* self, void* other);
bool q_cborarray__constiterator_operator_greater_or_equal(void* self, void* other);
bool q_cborarray__constiterator_operator_equal_with_q_cbor_array_const_iterator(void* self, void* o);
bool q_cborarray__constiterator_operator_not_equal_with_q_cbor_array_const_iterator(void* self, void* o);
bool q_cborarray__constiterator_operator_lesser_with_other(void* self, void* other);
bool q_cborarray__constiterator_operator_lesser_or_equal_with_other(void* self, void* other);
bool q_cborarray__constiterator_operator_greater_with_other(void* self, void* other);
bool q_cborarray__constiterator_operator_greater_or_equal_with_other(void* self, void* other);
QCborArray__ConstIterator* q_cborarray__constiterator_operator_plus_plus(void* self);
QCborArray__ConstIterator* q_cborarray__constiterator_operator_plus_plus_with_int(void* self, int param1);
QCborArray__ConstIterator* q_cborarray__constiterator_operator_minus_minus(void* self);
QCborArray__ConstIterator* q_cborarray__constiterator_operator_minus_minus_with_int(void* self, int param1);
QCborArray__ConstIterator* q_cborarray__constiterator_operator_plus_assign(void* self, int64_t j);
QCborArray__ConstIterator* q_cborarray__constiterator_operator_minus_assign(void* self, int64_t j);
QCborArray__ConstIterator* q_cborarray__constiterator_operator_plus(void* self, int64_t j);
QCborArray__ConstIterator* q_cborarray__constiterator_operator_minus(void* self, int64_t j);
int64_t q_cborarray__constiterator_operator_minus_with_q_cbor_array_const_iterator(void* self, void* j);
void q_cborarray__constiterator_delete(void* self);

#endif
