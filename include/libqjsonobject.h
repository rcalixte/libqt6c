#pragma once
#ifndef SRCQT6C_LIBQJSONOBJECT_H
#define SRCQT6C_LIBQJSONOBJECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqjsonvalue.h"
#include <string.h>
#include "libqvariant.h"

QJsonObject* q_jsonobject_new();
QJsonObject* q_jsonobject_new2(void* other);
void q_jsonobject_operator_assign(void* self, void* other);
void q_jsonobject_swap(void* self, void* other);
QJsonObject* q_jsonobject_from_variant_map(libqt_map /* of const char* to QVariant* */ mapVal);
libqt_map /* of const char* to QVariant* */ q_jsonobject_to_variant_map(void* self);
QJsonObject* q_jsonobject_from_variant_hash(libqt_map /* of const char* to QVariant* */ mapVal);
libqt_map /* of const char* to QVariant* */ q_jsonobject_to_variant_hash(void* self);
const char** q_jsonobject_keys(void* self);
int64_t q_jsonobject_size(void* self);
int64_t q_jsonobject_count(void* self);
int64_t q_jsonobject_length(void* self);
bool q_jsonobject_is_empty(void* self);
QJsonValue* q_jsonobject_value(void* self, const char* key);
QJsonValue* q_jsonobject_operator_subscript(void* self, const char* key);
QJsonValueRef* q_jsonobject_operator_subscript_with_key(void* self, const char* key);
void q_jsonobject_remove(void* self, const char* key);
QJsonValue* q_jsonobject_take(void* self, const char* key);
bool q_jsonobject_contains(void* self, const char* key);
bool q_jsonobject_operator_equal(void* self, void* other);
bool q_jsonobject_operator_not_equal(void* self, void* other);
QJsonObject__iterator* q_jsonobject_begin(void* self);
QJsonObject__const_iterator* q_jsonobject_begin2(void* self);
QJsonObject__const_iterator* q_jsonobject_const_begin(void* self);
QJsonObject__iterator* q_jsonobject_end(void* self);
QJsonObject__const_iterator* q_jsonobject_end2(void* self);
QJsonObject__const_iterator* q_jsonobject_const_end(void* self);
QJsonObject__iterator* q_jsonobject_erase(void* self, void* it);
QJsonObject__iterator* q_jsonobject_find(void* self, const char* key);
QJsonObject__const_iterator* q_jsonobject_find_with_key(void* self, const char* key);
QJsonObject__const_iterator* q_jsonobject_const_find(void* self, const char* key);
QJsonObject__iterator* q_jsonobject_insert(void* self, const char* key, void* value);
bool q_jsonobject_empty(void* self);
void q_jsonobject_delete(void* self);

QJsonObject__iterator* q_jsonobject__iterator_new(void* other);
QJsonObject__iterator* q_jsonobject__iterator_new2();
QJsonObject__iterator* q_jsonobject__iterator_new3(void* obj, int64_t index);
QJsonObject__iterator* q_jsonobject__iterator_new4(void* other);
void q_jsonobject__iterator_operator_assign(void* self, void* other);
const char* q_jsonobject__iterator_key(void* self);
QJsonValueRef* q_jsonobject__iterator_value(void* self);
QJsonValueRef* q_jsonobject__iterator_operator_multiply(void* self);
QJsonValueConstRef* q_jsonobject__iterator_operator_minus_greater(void* self);
QJsonValueRef* q_jsonobject__iterator_operator_minus_greater2(void* self);
QJsonValueRef* q_jsonobject__iterator_operator_subscript(void* self, int64_t j);
bool q_jsonobject__iterator_operator_equal(void* self, void* other);
bool q_jsonobject__iterator_operator_not_equal(void* self, void* other);
bool q_jsonobject__iterator_operator_lesser(void* self, void* other);
bool q_jsonobject__iterator_operator_lesser_or_equal(void* self, void* other);
bool q_jsonobject__iterator_operator_greater(void* self, void* other);
bool q_jsonobject__iterator_operator_greater_or_equal(void* self, void* other);
QJsonObject__iterator* q_jsonobject__iterator_operator_plus_plus(void* self);
QJsonObject__iterator* q_jsonobject__iterator_operator_plus_plus_with_int(void* self, int param1);
QJsonObject__iterator* q_jsonobject__iterator_operator_minus_minus(void* self);
QJsonObject__iterator* q_jsonobject__iterator_operator_minus_minus_with_int(void* self, int param1);
QJsonObject__iterator* q_jsonobject__iterator_operator_plus(void* self, int64_t j);
QJsonObject__iterator* q_jsonobject__iterator_operator_minus(void* self, int64_t j);
QJsonObject__iterator* q_jsonobject__iterator_operator_plus_assign(void* self, int64_t j);
QJsonObject__iterator* q_jsonobject__iterator_operator_minus_assign(void* self, int64_t j);
int64_t q_jsonobject__iterator_operator_minus_with_q_json_objectiterator(void* self, void* j);
bool q_jsonobject__iterator_operator_equal_with_other(void* self, void* other);
bool q_jsonobject__iterator_operator_not_equal_with_other(void* self, void* other);
bool q_jsonobject__iterator_operator_lesser_with_other(void* self, void* other);
bool q_jsonobject__iterator_operator_lesser_or_equal_with_other(void* self, void* other);
bool q_jsonobject__iterator_operator_greater_with_other(void* self, void* other);
bool q_jsonobject__iterator_operator_greater_or_equal_with_other(void* self, void* other);
void q_jsonobject__iterator_delete(void* self);

QJsonObject__const_iterator* q_jsonobject__const_iterator_new(void* other);
QJsonObject__const_iterator* q_jsonobject__const_iterator_new2();
QJsonObject__const_iterator* q_jsonobject__const_iterator_new3(void* obj, int64_t index);
QJsonObject__const_iterator* q_jsonobject__const_iterator_new4(void* other);
QJsonObject__const_iterator* q_jsonobject__const_iterator_new5(void* other);
void q_jsonobject__const_iterator_operator_assign(void* self, void* other);
const char* q_jsonobject__const_iterator_key(void* self);
QJsonValueConstRef* q_jsonobject__const_iterator_value(void* self);
QJsonValueConstRef* q_jsonobject__const_iterator_operator_multiply(void* self);
QJsonValueConstRef* q_jsonobject__const_iterator_operator_minus_greater(void* self);
QJsonValueConstRef* q_jsonobject__const_iterator_operator_subscript(void* self, int64_t j);
bool q_jsonobject__const_iterator_operator_equal(void* self, void* other);
bool q_jsonobject__const_iterator_operator_not_equal(void* self, void* other);
bool q_jsonobject__const_iterator_operator_lesser(void* self, void* other);
bool q_jsonobject__const_iterator_operator_lesser_or_equal(void* self, void* other);
bool q_jsonobject__const_iterator_operator_greater(void* self, void* other);
bool q_jsonobject__const_iterator_operator_greater_or_equal(void* self, void* other);
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus_plus(void* self);
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus_plus_with_int(void* self, int param1);
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus_minus(void* self);
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus_minus_with_int(void* self, int param1);
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus(void* self, int64_t j);
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus(void* self, int64_t j);
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_plus_assign(void* self, int64_t j);
QJsonObject__const_iterator* q_jsonobject__const_iterator_operator_minus_assign(void* self, int64_t j);
int64_t q_jsonobject__const_iterator_operator_minus_with_q_json_objectconst_iterator(void* self, void* j);
bool q_jsonobject__const_iterator_operator_equal_with_other(void* self, void* other);
bool q_jsonobject__const_iterator_operator_not_equal_with_other(void* self, void* other);
bool q_jsonobject__const_iterator_operator_lesser_with_other(void* self, void* other);
bool q_jsonobject__const_iterator_operator_lesser_or_equal_with_other(void* self, void* other);
bool q_jsonobject__const_iterator_operator_greater_with_other(void* self, void* other);
bool q_jsonobject__const_iterator_operator_greater_or_equal_with_other(void* self, void* other);
void q_jsonobject__const_iterator_delete(void* self);

#endif
