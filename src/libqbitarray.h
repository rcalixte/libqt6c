#pragma once
#ifndef SRCQT6C_LIBQBITARRAY_H
#define SRCQT6C_LIBQBITARRAY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

QBitArray* q_bitarray_new();
QBitArray* q_bitarray_new2(int64_t size);
QBitArray* q_bitarray_new3(void* other);
QBitArray* q_bitarray_new4(int64_t size, bool val);
void q_bitarray_operator_assign(void* self, void* other);
void q_bitarray_swap(void* self, void* other);
int64_t q_bitarray_size(void* self);
int64_t q_bitarray_count(void* self);
int64_t q_bitarray_count_with_on(void* self, bool on);
bool q_bitarray_is_empty(void* self);
bool q_bitarray_is_null(void* self);
void q_bitarray_resize(void* self, int64_t size);
void q_bitarray_detach(void* self);
bool q_bitarray_is_detached(void* self);
void q_bitarray_clear(void* self);
bool q_bitarray_test_bit(void* self, int64_t i);
void q_bitarray_set_bit(void* self, int64_t i);
void q_bitarray_set_bit2(void* self, int64_t i, bool val);
void q_bitarray_clear_bit(void* self, int64_t i);
bool q_bitarray_toggle_bit(void* self, int64_t i);
bool q_bitarray_at(void* self, int64_t i);
QBitRef* q_bitarray_operator_subscript(void* self, int64_t i);
bool q_bitarray_operator_subscript_with_qsizetype(void* self, int64_t i);
void q_bitarray_operator_bitwise_and_assign(void* self, void* param1);
void q_bitarray_operator_bitwise_or_assign(void* self, void* param1);
void q_bitarray_operator_bitwise_not_assign(void* self, void* param1);
bool q_bitarray_operator_equal(void* self, void* other);
bool q_bitarray_operator_not_equal(void* self, void* other);
bool q_bitarray_fill(void* self, bool val);
void q_bitarray_fill2(void* self, bool val, int64_t first, int64_t last);
void q_bitarray_truncate(void* self, int64_t pos);
const char* q_bitarray_bits(void* self);
QBitArray* q_bitarray_from_bits(const char* data, int64_t lenVal);
uint32_t q_bitarray_to_u_int32(void* self, int64_t endianness);
bool q_bitarray_fill22(void* self, bool val, int64_t size);
uint32_t q_bitarray_to_u_int322(void* self, int64_t endianness, bool* ok);
void q_bitarray_delete(void* self);

QBitRef* q_bitref_new(void* other);
QBitRef* q_bitref_new2(void* param1);
bool q_bitref_to_bool(void* self);
bool q_bitref_operator_not(void* self);
void q_bitref_operator_assign(void* self, void* val);
void q_bitref_operator_assign_with_val(void* self, bool val);
void q_bitref_delete(void* self);

#endif
