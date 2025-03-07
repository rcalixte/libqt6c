#pragma once
#ifndef SRCQT6C_LIBQSTRINGVIEW_H
#define SRCQT6C_LIBQSTRINGVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqchar.h"
#include "libqregularexpression.h"
#include <string.h>

QStringView* q_stringview_new();
void q_stringview_copy_assign(void* self, void* other);
void q_stringview_move_assign(void* self, void* other);
const char* q_stringview_to_string(void* self);
int64_t q_stringview_size(void* self);
QChar* q_stringview_data(void* self);
QChar* q_stringview_const_data(void* self);
QChar* q_stringview_operator_subscript(void* self, int64_t n);
char* q_stringview_to_latin1(void* self);
char* q_stringview_to_utf8(void* self);
char* q_stringview_to_local8_bit(void* self);
libqt_list /* of uint32_t */ q_stringview_to_ucs4(void* self);
QChar* q_stringview_at(void* self, int64_t n);
void q_stringview_truncate(void* self, int64_t n);
void q_stringview_chop(void* self, int64_t n);
int32_t q_stringview_compare_with_q_char(void* self, void* c);
int32_t q_stringview_compare2(void* self, void* c, int64_t cs);
bool q_stringview_starts_with_with_q_char(void* self, void* c);
bool q_stringview_starts_with2(void* self, void* c, int64_t cs);
bool q_stringview_ends_with_with_q_char(void* self, void* c);
bool q_stringview_ends_with2(void* self, void* c, int64_t cs);
int64_t q_stringview_index_of(void* self, void* c);
bool q_stringview_contains(void* self, void* c);
int64_t q_stringview_count(void* self, void* c);
int64_t q_stringview_last_index_of(void* self, void* c);
int64_t q_stringview_last_index_of2(void* self, void* c, int64_t from);
int64_t q_stringview_index_of_with_re(void* self, void* re);
int64_t q_stringview_last_index_of5(void* self, void* re, int64_t from);
bool q_stringview_contains_with_re(void* self, void* re);
int64_t q_stringview_count_with_re(void* self, void* re);
bool q_stringview_is_right_to_left(void* self);
bool q_stringview_is_valid_utf16(void* self);
short q_stringview_to_short(void* self);
unsigned short q_stringview_to_u_short(void* self);
int32_t q_stringview_to_int(void* self);
uint32_t q_stringview_to_u_int(void* self);
int64_t q_stringview_to_long(void* self);
uint64_t q_stringview_to_u_long(void* self);
long long q_stringview_to_long_long(void* self);
uint64_t q_stringview_to_u_long_long(void* self);
float q_stringview_to_float(void* self);
double q_stringview_to_double(void* self);
QChar* q_stringview_begin(void* self);
QChar* q_stringview_end(void* self);
QChar* q_stringview_cbegin(void* self);
QChar* q_stringview_cend(void* self);
bool q_stringview_empty(void* self);
QChar* q_stringview_front(void* self);
QChar* q_stringview_back(void* self);
QChar* q_stringview_const_begin(void* self);
QChar* q_stringview_const_end(void* self);
bool q_stringview_is_null(void* self);
bool q_stringview_is_empty(void* self);
int64_t q_stringview_length(void* self);
QChar* q_stringview_first2(void* self);
QChar* q_stringview_last2(void* self);
int64_t q_stringview_index_of2(void* self, void* c, int64_t from);
int64_t q_stringview_index_of3(void* self, void* c, int64_t from, int64_t cs);
bool q_stringview_contains2(void* self, void* c, int64_t cs);
int64_t q_stringview_count2(void* self, void* c, int64_t cs);
int64_t q_stringview_last_index_of22(void* self, void* c, int64_t cs);
int64_t q_stringview_last_index_of32(void* self, void* c, int64_t from, int64_t cs);
int64_t q_stringview_index_of24(void* self, void* re, int64_t from);
int64_t q_stringview_index_of34(void* self, void* re, int64_t from, void* rmatch);
int64_t q_stringview_last_index_of35(void* self, void* re, int64_t from, void* rmatch);
bool q_stringview_contains24(void* self, void* re, void* rmatch);
short q_stringview_to_short1(void* self, bool* ok);
short q_stringview_to_short2(void* self, bool* ok, int base);
unsigned short q_stringview_to_u_short1(void* self, bool* ok);
unsigned short q_stringview_to_u_short2(void* self, bool* ok, int base);
int32_t q_stringview_to_int1(void* self, bool* ok);
int32_t q_stringview_to_int2(void* self, bool* ok, int base);
uint32_t q_stringview_to_u_int1(void* self, bool* ok);
uint32_t q_stringview_to_u_int2(void* self, bool* ok, int base);
int64_t q_stringview_to_long1(void* self, bool* ok);
int64_t q_stringview_to_long2(void* self, bool* ok, int base);
uint64_t q_stringview_to_u_long1(void* self, bool* ok);
uint64_t q_stringview_to_u_long2(void* self, bool* ok, int base);
long long q_stringview_to_long_long1(void* self, bool* ok);
long long q_stringview_to_long_long2(void* self, bool* ok, int base);
uint64_t q_stringview_to_u_long_long1(void* self, bool* ok);
uint64_t q_stringview_to_u_long_long2(void* self, bool* ok, int base);
float q_stringview_to_float1(void* self, bool* ok);
double q_stringview_to_double1(void* self, bool* ok);
void q_stringview_delete(void* self);

#endif
