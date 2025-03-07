#pragma once
#ifndef SRC_CBORQT6C_LIBQCBORMAP_H
#define SRC_CBORQT6C_LIBQCBORMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqcborvalue.h"
#include "../libqjsonobject.h"
#include <string.h>
#include "../libqvariant.h"

QCborMap* q_cbormap_new();
QCborMap* q_cbormap_new2(void* other);
void q_cbormap_operator_assign(void* self, void* other);
void q_cbormap_swap(void* self, void* other);
QCborValue* q_cbormap_to_cbor_value(void* self);
int64_t q_cbormap_size(void* self);
bool q_cbormap_is_empty(void* self);
void q_cbormap_clear(void* self);
libqt_list /* of QCborValue* */ q_cbormap_keys(void* self);
QCborValue* q_cbormap_value(void* self, long long key);
QCborValue* q_cbormap_value2(void* self, const char* key);
QCborValue* q_cbormap_value3(void* self, void* key);
QCborValue* q_cbormap_operator_subscript(void* self, long long key);
QCborValue* q_cbormap_operator_subscript2(void* self, const char* key);
QCborValue* q_cbormap_operator_subscript3(void* self, void* key);
QCborValueRef* q_cbormap_operator_subscript4(void* self, long long key);
QCborValueRef* q_cbormap_operator_subscript6(void* self, const char* key);
QCborValueRef* q_cbormap_operator_subscript7(void* self, void* key);
QCborValue* q_cbormap_take(void* self, long long key);
QCborValue* q_cbormap_take2(void* self, const char* key);
QCborValue* q_cbormap_take3(void* self, void* key);
void q_cbormap_remove(void* self, long long key);
void q_cbormap_remove2(void* self, const char* key);
void q_cbormap_remove3(void* self, void* key);
bool q_cbormap_contains(void* self, long long key);
bool q_cbormap_contains2(void* self, const char* key);
bool q_cbormap_contains3(void* self, void* key);
int32_t q_cbormap_compare(void* self, void* other);
bool q_cbormap_operator_equal(void* self, void* other);
bool q_cbormap_operator_not_equal(void* self, void* other);
bool q_cbormap_operator_lesser(void* self, void* other);
QCborMap__Iterator* q_cbormap_begin(void* self);
QCborMap__ConstIterator* q_cbormap_const_begin(void* self);
QCborMap__ConstIterator* q_cbormap_begin2(void* self);
QCborMap__ConstIterator* q_cbormap_cbegin(void* self);
QCborMap__Iterator* q_cbormap_end(void* self);
QCborMap__ConstIterator* q_cbormap_const_end(void* self);
QCborMap__ConstIterator* q_cbormap_end2(void* self);
QCborMap__ConstIterator* q_cbormap_cend(void* self);
QCborMap__Iterator* q_cbormap_erase(void* self, void* it);
QCborMap__Iterator* q_cbormap_erase_with_it(void* self, void* it);
QCborValue* q_cbormap_extract(void* self, void* it);
QCborValue* q_cbormap_extract_with_it(void* self, void* it);
bool q_cbormap_empty(void* self);
QCborMap__Iterator* q_cbormap_find(void* self, long long key);
QCborMap__Iterator* q_cbormap_find2(void* self, const char* key);
QCborMap__Iterator* q_cbormap_find3(void* self, void* key);
QCborMap__ConstIterator* q_cbormap_const_find(void* self, long long key);
QCborMap__ConstIterator* q_cbormap_const_find2(void* self, const char* key);
QCborMap__ConstIterator* q_cbormap_const_find3(void* self, void* key);
QCborMap__ConstIterator* q_cbormap_find4(void* self, long long key);
QCborMap__ConstIterator* q_cbormap_find6(void* self, const char* key);
QCborMap__ConstIterator* q_cbormap_find7(void* self, void* key);
QCborMap__Iterator* q_cbormap_insert(void* self, long long key, void* value_);
QCborMap__Iterator* q_cbormap_insert3(void* self, const char* key, void* value_);
QCborMap__Iterator* q_cbormap_insert4(void* self, void* key, void* value_);
QCborMap__Iterator* q_cbormap_insert_with_q_cbor_mapvalue_type(void* self, libqt_pair /* tuple of QCborValue* and QCborValue* */ v);
QCborMap* q_cbormap_from_variant_map(libqt_map /* of const char* to QVariant* */ mapVal);
QCborMap* q_cbormap_from_variant_hash(libqt_map /* of const char* to QVariant* */ hash);
QCborMap* q_cbormap_from_json_object(void* o);
libqt_map /* of const char* to QVariant* */ q_cbormap_to_variant_map(void* self);
libqt_map /* of const char* to QVariant* */ q_cbormap_to_variant_hash(void* self);
QJsonObject* q_cbormap_to_json_object(void* self);
void q_cbormap_delete(void* self);

QCborMap__Iterator* q_cbormap__iterator_new(void* other);
QCborMap__Iterator* q_cbormap__iterator_new2();
QCborMap__Iterator* q_cbormap__iterator_new3(void* param1);
void q_cbormap__iterator_operator_assign(void* self, void* other);
libqt_pair /* tuple of QCborValueConstRef* and QCborValueRef* */ q_cbormap__iterator_operator_multiply(void* self);
libqt_pair /* tuple of QCborValueConstRef* and QCborValueRef* */ q_cbormap__iterator_operator_subscript(void* self, int64_t j);
QCborValueRef* q_cbormap__iterator_operator_minus_greater(void* self);
QCborValueConstRef* q_cbormap__iterator_operator_minus_greater2(void* self);
QCborValue* q_cbormap__iterator_key(void* self);
QCborValueRef* q_cbormap__iterator_value(void* self);
bool q_cbormap__iterator_operator_equal(void* self, void* o);
bool q_cbormap__iterator_operator_not_equal(void* self, void* o);
bool q_cbormap__iterator_operator_lesser(void* self, void* other);
bool q_cbormap__iterator_operator_lesser_or_equal(void* self, void* other);
bool q_cbormap__iterator_operator_greater(void* self, void* other);
bool q_cbormap__iterator_operator_greater_or_equal(void* self, void* other);
bool q_cbormap__iterator_operator_equal_with_q_cbor_map_const_iterator(void* self, void* o);
bool q_cbormap__iterator_operator_not_equal_with_q_cbor_map_const_iterator(void* self, void* o);
bool q_cbormap__iterator_operator_lesser_with_other(void* self, void* other);
bool q_cbormap__iterator_operator_lesser_or_equal_with_other(void* self, void* other);
bool q_cbormap__iterator_operator_greater_with_other(void* self, void* other);
bool q_cbormap__iterator_operator_greater_or_equal_with_other(void* self, void* other);
QCborMap__Iterator* q_cbormap__iterator_operator_plus_plus(void* self);
QCborMap__Iterator* q_cbormap__iterator_operator_plus_plus_with_int(void* self, int param1);
QCborMap__Iterator* q_cbormap__iterator_operator_minus_minus(void* self);
QCborMap__Iterator* q_cbormap__iterator_operator_minus_minus_with_int(void* self, int param1);
QCborMap__Iterator* q_cbormap__iterator_operator_plus_assign(void* self, int64_t j);
QCborMap__Iterator* q_cbormap__iterator_operator_minus_assign(void* self, int64_t j);
QCborMap__Iterator* q_cbormap__iterator_operator_plus(void* self, int64_t j);
QCborMap__Iterator* q_cbormap__iterator_operator_minus(void* self, int64_t j);
int64_t q_cbormap__iterator_operator_minus_with_q_cbor_map_iterator(void* self, void* j);
void q_cbormap__iterator_delete(void* self);

QCborMap__ConstIterator* q_cbormap__constiterator_new(void* other);
QCborMap__ConstIterator* q_cbormap__constiterator_new2();
QCborMap__ConstIterator* q_cbormap__constiterator_new3(void* param1);
void q_cbormap__constiterator_operator_assign(void* self, void* other);
libqt_pair /* tuple of QCborValueConstRef* and QCborValueConstRef* */ q_cbormap__constiterator_operator_multiply(void* self);
libqt_pair /* tuple of QCborValueConstRef* and QCborValueConstRef* */ q_cbormap__constiterator_operator_subscript(void* self, int64_t j);
QCborValueConstRef* q_cbormap__constiterator_operator_minus_greater(void* self);
QCborValue* q_cbormap__constiterator_key(void* self);
QCborValueConstRef* q_cbormap__constiterator_value(void* self);
bool q_cbormap__constiterator_operator_equal(void* self, void* o);
bool q_cbormap__constiterator_operator_not_equal(void* self, void* o);
bool q_cbormap__constiterator_operator_lesser(void* self, void* other);
bool q_cbormap__constiterator_operator_lesser_or_equal(void* self, void* other);
bool q_cbormap__constiterator_operator_greater(void* self, void* other);
bool q_cbormap__constiterator_operator_greater_or_equal(void* self, void* other);
bool q_cbormap__constiterator_operator_equal_with_q_cbor_map_const_iterator(void* self, void* o);
bool q_cbormap__constiterator_operator_not_equal_with_q_cbor_map_const_iterator(void* self, void* o);
bool q_cbormap__constiterator_operator_lesser_with_other(void* self, void* other);
bool q_cbormap__constiterator_operator_lesser_or_equal_with_other(void* self, void* other);
bool q_cbormap__constiterator_operator_greater_with_other(void* self, void* other);
bool q_cbormap__constiterator_operator_greater_or_equal_with_other(void* self, void* other);
QCborMap__ConstIterator* q_cbormap__constiterator_operator_plus_plus(void* self);
QCborMap__ConstIterator* q_cbormap__constiterator_operator_plus_plus_with_int(void* self, int param1);
QCborMap__ConstIterator* q_cbormap__constiterator_operator_minus_minus(void* self);
QCborMap__ConstIterator* q_cbormap__constiterator_operator_minus_minus_with_int(void* self, int param1);
QCborMap__ConstIterator* q_cbormap__constiterator_operator_plus_assign(void* self, int64_t j);
QCborMap__ConstIterator* q_cbormap__constiterator_operator_minus_assign(void* self, int64_t j);
QCborMap__ConstIterator* q_cbormap__constiterator_operator_plus(void* self, int64_t j);
QCborMap__ConstIterator* q_cbormap__constiterator_operator_minus(void* self, int64_t j);
int64_t q_cbormap__constiterator_operator_minus_with_q_cbor_map_const_iterator(void* self, void* j);
void q_cbormap__constiterator_delete(void* self);

#endif
