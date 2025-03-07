#pragma once
#ifndef SRCQT6C_LIBQJSONARRAY_H
#define SRCQT6C_LIBQJSONARRAY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqjsonvalue.h"
#include <string.h>

QJsonArray* q_jsonarray_new();
QJsonArray* q_jsonarray_new2(void* other);
void q_jsonarray_operator_assign(void* self, void* other);
QJsonArray* q_jsonarray_from_string_list(const char* list[]);
int64_t q_jsonarray_size(void* self);
int64_t q_jsonarray_count(void* self);
bool q_jsonarray_is_empty(void* self);
QJsonValue* q_jsonarray_at(void* self, int64_t i);
QJsonValue* q_jsonarray_first(void* self);
QJsonValue* q_jsonarray_last(void* self);
void q_jsonarray_prepend(void* self, void* value);
void q_jsonarray_append(void* self, void* value);
void q_jsonarray_remove_at(void* self, int64_t i);
QJsonValue* q_jsonarray_take_at(void* self, int64_t i);
void q_jsonarray_remove_first(void* self);
void q_jsonarray_remove_last(void* self);
void q_jsonarray_insert(void* self, int64_t i, void* value);
void q_jsonarray_replace(void* self, int64_t i, void* value);
bool q_jsonarray_contains(void* self, void* element);
QJsonValueRef* q_jsonarray_operator_subscript(void* self, int64_t i);
QJsonValue* q_jsonarray_operator_subscript_with_qsizetype(void* self, int64_t i);
bool q_jsonarray_operator_equal(void* self, void* other);
bool q_jsonarray_operator_not_equal(void* self, void* other);
void q_jsonarray_swap(void* self, void* other);
QJsonArray__iterator* q_jsonarray_begin(void* self);
QJsonArray__const_iterator* q_jsonarray_begin2(void* self);
QJsonArray__const_iterator* q_jsonarray_const_begin(void* self);
QJsonArray__const_iterator* q_jsonarray_cbegin(void* self);
QJsonArray__iterator* q_jsonarray_end(void* self);
QJsonArray__const_iterator* q_jsonarray_end2(void* self);
QJsonArray__const_iterator* q_jsonarray_const_end(void* self);
QJsonArray__const_iterator* q_jsonarray_cend(void* self);
QJsonArray__iterator* q_jsonarray_insert2(void* self, void* before, void* value);
QJsonArray__iterator* q_jsonarray_erase(void* self, void* it);
QJsonArray* q_jsonarray_operator_plus(void* self, void* v);
QJsonArray* q_jsonarray_operator_plus_assign(void* self, void* v);
QJsonArray* q_jsonarray_operator_shift_left(void* self, void* v);
void q_jsonarray_push_back(void* self, void* t);
void q_jsonarray_push_front(void* self, void* t);
void q_jsonarray_pop_front(void* self);
void q_jsonarray_pop_back(void* self);
bool q_jsonarray_empty(void* self);
void q_jsonarray_delete(void* self);

QJsonArray__iterator* q_jsonarray__iterator_new(void* other);
QJsonArray__iterator* q_jsonarray__iterator_new2();
QJsonArray__iterator* q_jsonarray__iterator_new3(void* array, int64_t index);
QJsonArray__iterator* q_jsonarray__iterator_new4(void* other);
void q_jsonarray__iterator_operator_assign(void* self, void* other);
QJsonValueRef* q_jsonarray__iterator_operator_multiply(void* self);
QJsonValueConstRef* q_jsonarray__iterator_operator_minus_greater(void* self);
QJsonValueRef* q_jsonarray__iterator_operator_minus_greater2(void* self);
QJsonValueRef* q_jsonarray__iterator_operator_subscript(void* self, int64_t j);
bool q_jsonarray__iterator_operator_equal(void* self, void* o);
bool q_jsonarray__iterator_operator_not_equal(void* self, void* o);
bool q_jsonarray__iterator_operator_lesser(void* self, void* other);
bool q_jsonarray__iterator_operator_lesser_or_equal(void* self, void* other);
bool q_jsonarray__iterator_operator_greater(void* self, void* other);
bool q_jsonarray__iterator_operator_greater_or_equal(void* self, void* other);
bool q_jsonarray__iterator_operator_equal_with_q_json_arrayconst_iterator(void* self, void* o);
bool q_jsonarray__iterator_operator_not_equal_with_q_json_arrayconst_iterator(void* self, void* o);
bool q_jsonarray__iterator_operator_lesser_with_other(void* self, void* other);
bool q_jsonarray__iterator_operator_lesser_or_equal_with_other(void* self, void* other);
bool q_jsonarray__iterator_operator_greater_with_other(void* self, void* other);
bool q_jsonarray__iterator_operator_greater_or_equal_with_other(void* self, void* other);
QJsonArray__iterator* q_jsonarray__iterator_operator_plus_plus(void* self);
QJsonArray__iterator* q_jsonarray__iterator_operator_plus_plus_with_int(void* self, int param1);
QJsonArray__iterator* q_jsonarray__iterator_operator_minus_minus(void* self);
QJsonArray__iterator* q_jsonarray__iterator_operator_minus_minus_with_int(void* self, int param1);
QJsonArray__iterator* q_jsonarray__iterator_operator_plus_assign(void* self, int64_t j);
QJsonArray__iterator* q_jsonarray__iterator_operator_minus_assign(void* self, int64_t j);
QJsonArray__iterator* q_jsonarray__iterator_operator_plus(void* self, int64_t j);
QJsonArray__iterator* q_jsonarray__iterator_operator_minus(void* self, int64_t j);
int64_t q_jsonarray__iterator_operator_minus_with_q_json_arrayiterator(void* self, void* j);
void q_jsonarray__iterator_delete(void* self);

QJsonArray__const_iterator* q_jsonarray__const_iterator_new(void* other);
QJsonArray__const_iterator* q_jsonarray__const_iterator_new2();
QJsonArray__const_iterator* q_jsonarray__const_iterator_new3(void* array, int64_t index);
QJsonArray__const_iterator* q_jsonarray__const_iterator_new4(void* o);
QJsonArray__const_iterator* q_jsonarray__const_iterator_new5(void* other);
void q_jsonarray__const_iterator_operator_assign(void* self, void* other);
QJsonValueConstRef* q_jsonarray__const_iterator_operator_multiply(void* self);
QJsonValueConstRef* q_jsonarray__const_iterator_operator_minus_greater(void* self);
QJsonValueConstRef* q_jsonarray__const_iterator_operator_subscript(void* self, int64_t j);
bool q_jsonarray__const_iterator_operator_equal(void* self, void* o);
bool q_jsonarray__const_iterator_operator_not_equal(void* self, void* o);
bool q_jsonarray__const_iterator_operator_lesser(void* self, void* other);
bool q_jsonarray__const_iterator_operator_lesser_or_equal(void* self, void* other);
bool q_jsonarray__const_iterator_operator_greater(void* self, void* other);
bool q_jsonarray__const_iterator_operator_greater_or_equal(void* self, void* other);
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_plus_plus(void* self);
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_plus_plus_with_int(void* self, int param1);
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_minus_minus(void* self);
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_minus_minus_with_int(void* self, int param1);
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_plus_assign(void* self, int64_t j);
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_minus_assign(void* self, int64_t j);
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_plus(void* self, int64_t j);
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_minus(void* self, int64_t j);
int64_t q_jsonarray__const_iterator_operator_minus_with_q_json_arrayconst_iterator(void* self, void* j);
void q_jsonarray__const_iterator_delete(void* self);

#endif
