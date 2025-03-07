#pragma once
#ifndef SRCQT6C_LIBQBYTEARRAYVIEW_H
#define SRCQT6C_LIBQBYTEARRAYVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

QByteArrayView* q_bytearrayview_new(const char* other);
QByteArrayView* q_bytearrayview_new2(const char* other);
QByteArrayView* q_bytearrayview_new3();
QByteArrayView* q_bytearrayview_new4(const char* param1);
void q_bytearrayview_copy_assign(void* self, void* other);
void q_bytearrayview_move_assign(void* self, void* other);
char* q_bytearrayview_to_byte_array(void* self);
int64_t q_bytearrayview_size(void* self);
const char* q_bytearrayview_data(void* self);
const char* q_bytearrayview_const_data(void* self);
char q_bytearrayview_operator_subscript(void* self, int64_t n);
char q_bytearrayview_at(void* self, int64_t n);
const char* q_bytearrayview_first(void* self, int64_t n);
const char* q_bytearrayview_last(void* self, int64_t n);
const char* q_bytearrayview_sliced(void* self, int64_t pos);
const char* q_bytearrayview_sliced2(void* self, int64_t pos, int64_t n);
const char* q_bytearrayview_chopped(void* self, int64_t lenVal);
void q_bytearrayview_truncate(void* self, int64_t n);
void q_bytearrayview_chop(void* self, int64_t n);
const char* q_bytearrayview_trimmed(void* self);
short q_bytearrayview_to_short(void* self);
unsigned short q_bytearrayview_to_u_short(void* self);
int32_t q_bytearrayview_to_int(void* self);
uint32_t q_bytearrayview_to_u_int(void* self);
int64_t q_bytearrayview_to_long(void* self);
uint64_t q_bytearrayview_to_u_long(void* self);
long long q_bytearrayview_to_long_long(void* self);
uint64_t q_bytearrayview_to_u_long_long(void* self);
float q_bytearrayview_to_float(void* self);
double q_bytearrayview_to_double(void* self);
bool q_bytearrayview_starts_with(void* self, const char* other);
bool q_bytearrayview_starts_with_with_char(void* self, char c);
bool q_bytearrayview_ends_with(void* self, const char* other);
bool q_bytearrayview_ends_with_with_char(void* self, char c);
int64_t q_bytearrayview_index_of(void* self, const char* a);
int64_t q_bytearrayview_index_of_with_ch(void* self, char ch);
bool q_bytearrayview_contains(void* self, const char* a);
bool q_bytearrayview_contains_with_char(void* self, char c);
int64_t q_bytearrayview_last_index_of(void* self, const char* a);
int64_t q_bytearrayview_last_index_of2(void* self, const char* a, int64_t from);
int64_t q_bytearrayview_last_index_of_with_ch(void* self, char ch);
int64_t q_bytearrayview_count(void* self, const char* a);
int64_t q_bytearrayview_count_with_ch(void* self, char ch);
int32_t q_bytearrayview_compare(void* self, const char* a);
bool q_bytearrayview_is_valid_utf8(void* self);
const char* q_bytearrayview_begin(void* self);
const char* q_bytearrayview_end(void* self);
const char* q_bytearrayview_cbegin(void* self);
const char* q_bytearrayview_cend(void* self);
bool q_bytearrayview_empty(void* self);
char q_bytearrayview_front(void* self);
char q_bytearrayview_back(void* self);
bool q_bytearrayview_is_null(void* self);
bool q_bytearrayview_is_empty(void* self);
int64_t q_bytearrayview_length(void* self);
char q_bytearrayview_first2(void* self);
char q_bytearrayview_last2(void* self);
short q_bytearrayview_to_short1(void* self, bool* ok);
short q_bytearrayview_to_short2(void* self, bool* ok, int base);
unsigned short q_bytearrayview_to_u_short1(void* self, bool* ok);
unsigned short q_bytearrayview_to_u_short2(void* self, bool* ok, int base);
int32_t q_bytearrayview_to_int1(void* self, bool* ok);
int32_t q_bytearrayview_to_int2(void* self, bool* ok, int base);
uint32_t q_bytearrayview_to_u_int1(void* self, bool* ok);
uint32_t q_bytearrayview_to_u_int2(void* self, bool* ok, int base);
int64_t q_bytearrayview_to_long1(void* self, bool* ok);
int64_t q_bytearrayview_to_long2(void* self, bool* ok, int base);
uint64_t q_bytearrayview_to_u_long1(void* self, bool* ok);
uint64_t q_bytearrayview_to_u_long2(void* self, bool* ok, int base);
long long q_bytearrayview_to_long_long1(void* self, bool* ok);
long long q_bytearrayview_to_long_long2(void* self, bool* ok, int base);
uint64_t q_bytearrayview_to_u_long_long1(void* self, bool* ok);
uint64_t q_bytearrayview_to_u_long_long2(void* self, bool* ok, int base);
float q_bytearrayview_to_float1(void* self, bool* ok);
double q_bytearrayview_to_double1(void* self, bool* ok);
int64_t q_bytearrayview_index_of2(void* self, const char* a, int64_t from);
int64_t q_bytearrayview_index_of22(void* self, char ch, int64_t from);
int64_t q_bytearrayview_last_index_of22(void* self, char ch, int64_t from);
int32_t q_bytearrayview_compare2(void* self, const char* a, int64_t cs);
void q_bytearrayview_delete(void* self);

#endif
