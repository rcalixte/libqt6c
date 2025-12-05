#pragma once
#ifndef SRC_QT6C_LIBQLATIN1STRINGVIEW_H
#define SRC_QT6C_LIBQLATIN1STRINGVIEW_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html)

/// q_latin1string_new constructs a new QLatin1String object.
///
QLatin1String* q_latin1string_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html)

/// q_latin1string_new2 constructs a new QLatin1String object.
///
/// @param s const char*
///
QLatin1String* q_latin1string_new2(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html)

/// q_latin1string_new3 constructs a new QLatin1String object.
///
/// @param f const char*
/// @param l const char*
///
QLatin1String* q_latin1string_new3(const char* f, const char* l);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html)

/// q_latin1string_new4 constructs a new QLatin1String object.
///
/// @param s const char*
/// @param sz int64_t
///
QLatin1String* q_latin1string_new4(const char* s, int64_t sz);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html)

/// q_latin1string_new5 constructs a new QLatin1String object.
///
/// @param s const char*
///
QLatin1String* q_latin1string_new5(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html)

/// q_latin1string_new6 constructs a new QLatin1String object.
///
/// @param s const char*
///
QLatin1String* q_latin1string_new6(const char* s);

/// q_latin1string_copy_assign shallow copies `other` into `self`.
///
/// @param self QLatin1String*
/// @param other QLatin1String*
///
void q_latin1string_copy_assign(void* self, void* other);

/// q_latin1string_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QLatin1String*
/// @param other QLatin1String*
///
void q_latin1string_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLatin1String*
///
const char* q_latin1string_to_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#latin1)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLatin1String*
///
const char* q_latin1string_latin1(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#size)
///
/// @param self QLatin1String*
///
int64_t q_latin1string_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#data)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLatin1String*
///
const char* q_latin1string_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#constData)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLatin1String*
///
const char* q_latin1string_const_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#constBegin)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLatin1String*
///
const char* q_latin1string_const_begin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#constEnd)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLatin1String*
///
const char* q_latin1string_const_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#first)
///
/// @param self QLatin1String*
///
QLatin1Char* q_latin1string_first(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#last)
///
/// @param self QLatin1String*
///
QLatin1Char* q_latin1string_last(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#length)
///
/// @param self QLatin1String*
///
int64_t q_latin1string_length(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#isNull)
///
/// @param self QLatin1String*
///
bool q_latin1string_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#isEmpty)
///
/// @param self QLatin1String*
///
bool q_latin1string_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#empty)
///
/// @param self QLatin1String*
///
bool q_latin1string_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#at)
///
/// @param self QLatin1String*
/// @param i int64_t
///
QLatin1Char* q_latin1string_at(void* self, int64_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#operator-5b-5d)
///
/// @param self QLatin1String*
/// @param i int64_t
///
QLatin1Char* q_latin1string_operator_subscript(void* self, int64_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#front)
///
/// @param self QLatin1String*
///
QLatin1Char* q_latin1string_front(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#back)
///
/// @param self QLatin1String*
///
QLatin1Char* q_latin1string_back(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#compare)
///
/// @param self QLatin1String*
/// @param c QChar*
///
int32_t q_latin1string_compare4(void* self, void* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#compare)
///
/// @param self QLatin1String*
/// @param c QChar*
/// @param cs enum Qt__CaseSensitivity
///
int32_t q_latin1string_compare5(void* self, void* c, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#startsWith)
///
/// @param self QLatin1String*
/// @param c QChar*
///
bool q_latin1string_starts_with3(void* self, void* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#startsWith)
///
/// @param self QLatin1String*
/// @param c QChar*
/// @param cs enum Qt__CaseSensitivity
///
bool q_latin1string_starts_with4(void* self, void* c, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#endsWith)
///
/// @param self QLatin1String*
/// @param c QChar*
///
bool q_latin1string_ends_with3(void* self, void* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#endsWith)
///
/// @param self QLatin1String*
/// @param c QChar*
/// @param cs enum Qt__CaseSensitivity
///
bool q_latin1string_ends_with4(void* self, void* c, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#indexOf)
///
/// @param self QLatin1String*
/// @param c QChar*
///
int64_t q_latin1string_index_of3(void* self, void* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#contains)
///
/// @param self QLatin1String*
/// @param c QChar*
///
bool q_latin1string_contains3(void* self, void* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#lastIndexOf)
///
/// @param self QLatin1String*
/// @param c QChar*
///
int64_t q_latin1string_last_index_of5(void* self, void* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#lastIndexOf)
///
/// @param self QLatin1String*
/// @param c QChar*
/// @param from int64_t
///
int64_t q_latin1string_last_index_of6(void* self, void* c, int64_t from);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#count)
///
/// @param self QLatin1String*
/// @param ch QChar*
///
int64_t q_latin1string_count3(void* self, void* ch);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toShort)
///
/// @param self QLatin1String*
///
short q_latin1string_to_short(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toUShort)
///
/// @param self QLatin1String*
///
unsigned short q_latin1string_to_u_short(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toInt)
///
/// @param self QLatin1String*
///
int32_t q_latin1string_to_int(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toUInt)
///
/// @param self QLatin1String*
///
uint32_t q_latin1string_to_u_int(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toLong)
///
/// @param self QLatin1String*
///
int64_t q_latin1string_to_long(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toULong)
///
/// @param self QLatin1String*
///
uint64_t q_latin1string_to_u_long(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toLongLong)
///
/// @param self QLatin1String*
///
long long q_latin1string_to_long_long(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toULongLong)
///
/// @param self QLatin1String*
///
uint64_t q_latin1string_to_u_long_long(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toFloat)
///
/// @param self QLatin1String*
///
float q_latin1string_to_float(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toDouble)
///
/// @param self QLatin1String*
///
double q_latin1string_to_double(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#begin)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLatin1String*
///
const char* q_latin1string_begin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#cbegin)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLatin1String*
///
const char* q_latin1string_cbegin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#end)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLatin1String*
///
const char* q_latin1string_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#cend)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLatin1String*
///
const char* q_latin1string_cend(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#max_size)
///
/// @param self QLatin1String*
///
int64_t q_latin1string_max_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#maxSize)
///
int64_t q_latin1string_max_size2();

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#chop)
///
/// @param self QLatin1String*
/// @param n int64_t
///
void q_latin1string_chop(void* self, int64_t n);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#truncate)
///
/// @param self QLatin1String*
/// @param n int64_t
///
void q_latin1string_truncate(void* self, int64_t n);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#indexOf)
///
/// @param self QLatin1String*
/// @param c QChar*
/// @param from int64_t
///
int64_t q_latin1string_index_of24(void* self, void* c, int64_t from);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#indexOf)
///
/// @param self QLatin1String*
/// @param c QChar*
/// @param from int64_t
/// @param cs enum Qt__CaseSensitivity
///
int64_t q_latin1string_index_of34(void* self, void* c, int64_t from, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#contains)
///
/// @param self QLatin1String*
/// @param c QChar*
/// @param cs enum Qt__CaseSensitivity
///
bool q_latin1string_contains24(void* self, void* c, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#lastIndexOf)
///
/// @param self QLatin1String*
/// @param c QChar*
/// @param cs enum Qt__CaseSensitivity
///
int64_t q_latin1string_last_index_of24(void* self, void* c, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#lastIndexOf)
///
/// @param self QLatin1String*
/// @param c QChar*
/// @param from int64_t
/// @param cs enum Qt__CaseSensitivity
///
int64_t q_latin1string_last_index_of34(void* self, void* c, int64_t from, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#count)
///
/// @param self QLatin1String*
/// @param ch QChar*
/// @param cs enum Qt__CaseSensitivity
///
int64_t q_latin1string_count24(void* self, void* ch, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toShort)
///
/// @param self QLatin1String*
/// @param ok bool*
///
short q_latin1string_to_short1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toShort)
///
/// @param self QLatin1String*
/// @param ok bool*
/// @param base int
///
short q_latin1string_to_short2(void* self, bool* ok, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toUShort)
///
/// @param self QLatin1String*
/// @param ok bool*
///
unsigned short q_latin1string_to_u_short1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toUShort)
///
/// @param self QLatin1String*
/// @param ok bool*
/// @param base int
///
unsigned short q_latin1string_to_u_short2(void* self, bool* ok, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toInt)
///
/// @param self QLatin1String*
/// @param ok bool*
///
int32_t q_latin1string_to_int1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toInt)
///
/// @param self QLatin1String*
/// @param ok bool*
/// @param base int
///
int32_t q_latin1string_to_int2(void* self, bool* ok, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toUInt)
///
/// @param self QLatin1String*
/// @param ok bool*
///
uint32_t q_latin1string_to_u_int1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toUInt)
///
/// @param self QLatin1String*
/// @param ok bool*
/// @param base int
///
uint32_t q_latin1string_to_u_int2(void* self, bool* ok, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toLong)
///
/// @param self QLatin1String*
/// @param ok bool*
///
int64_t q_latin1string_to_long1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toLong)
///
/// @param self QLatin1String*
/// @param ok bool*
/// @param base int
///
int64_t q_latin1string_to_long2(void* self, bool* ok, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toULong)
///
/// @param self QLatin1String*
/// @param ok bool*
///
uint64_t q_latin1string_to_u_long1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toULong)
///
/// @param self QLatin1String*
/// @param ok bool*
/// @param base int
///
uint64_t q_latin1string_to_u_long2(void* self, bool* ok, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toLongLong)
///
/// @param self QLatin1String*
/// @param ok bool*
///
long long q_latin1string_to_long_long1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toLongLong)
///
/// @param self QLatin1String*
/// @param ok bool*
/// @param base int
///
long long q_latin1string_to_long_long2(void* self, bool* ok, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toULongLong)
///
/// @param self QLatin1String*
/// @param ok bool*
///
uint64_t q_latin1string_to_u_long_long1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toULongLong)
///
/// @param self QLatin1String*
/// @param ok bool*
/// @param base int
///
uint64_t q_latin1string_to_u_long_long2(void* self, bool* ok, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toFloat)
///
/// @param self QLatin1String*
/// @param ok bool*
///
float q_latin1string_to_float1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#toDouble)
///
/// @param self QLatin1String*
/// @param ok bool*
///
double q_latin1string_to_double1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1string.html#dtor.QLatin1String)
///
/// Delete this object from C++ memory.
///
/// @param self QLatin1String*
///
void q_latin1string_delete(void* self);

#endif
