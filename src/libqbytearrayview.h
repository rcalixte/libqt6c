#pragma once
#ifndef SRC_QT6C_LIBQBYTEARRAYVIEW_H
#define SRC_QT6C_LIBQBYTEARRAYVIEW_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qbytearrayview.html

/// q_bytearrayview_new constructs a new QByteArrayView object.
///
/// @param other const char*
QByteArrayView* q_bytearrayview_new(const char* other);

/// q_bytearrayview_new2 constructs a new QByteArrayView object and invalidates the source QByteArrayView object.
///
/// @param other const char*
QByteArrayView* q_bytearrayview_new2(const char* other);

/// q_bytearrayview_new3 constructs a new QByteArrayView object.
///
QByteArrayView* q_bytearrayview_new3();

/// q_bytearrayview_new4 constructs a new QByteArrayView object.
///
/// @param param1 const char*
QByteArrayView* q_bytearrayview_new4(const char* param1);

/// q_bytearrayview_copy_assign shallow copies `other` into `self`.
///
/// @param self QByteArrayView*
/// @param other QByteArrayView*
void q_bytearrayview_copy_assign(void* self, void* other);

/// q_bytearrayview_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QByteArrayView*
/// @param other QByteArrayView*
void q_bytearrayview_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toByteArray)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QByteArrayView*
char* q_bytearrayview_to_byte_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#size)
///
/// @param self QByteArrayView*
int64_t q_bytearrayview_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#data)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QByteArrayView*
const char* q_bytearrayview_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#constData)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QByteArrayView*
const char* q_bytearrayview_const_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#operator-5b-5d)
///
/// @param self QByteArrayView*
/// @param n int64_t
char q_bytearrayview_operator_subscript(void* self, int64_t n);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#at)
///
/// @param self QByteArrayView*
/// @param n int64_t
char q_bytearrayview_at(void* self, int64_t n);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#first)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QByteArrayView*
/// @param n int64_t
const char* q_bytearrayview_first(void* self, int64_t n);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#last)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QByteArrayView*
/// @param n int64_t
const char* q_bytearrayview_last(void* self, int64_t n);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#sliced)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QByteArrayView*
/// @param pos int64_t
const char* q_bytearrayview_sliced(void* self, int64_t pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#sliced)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QByteArrayView*
/// @param pos int64_t
/// @param n int64_t
const char* q_bytearrayview_sliced2(void* self, int64_t pos, int64_t n);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#slice)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QByteArrayView*
/// @param pos int64_t
const char* q_bytearrayview_slice(void* self, int64_t pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#slice)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QByteArrayView*
/// @param pos int64_t
/// @param n int64_t
const char* q_bytearrayview_slice2(void* self, int64_t pos, int64_t n);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#chopped)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QByteArrayView*
/// @param lenVal int64_t
const char* q_bytearrayview_chopped(void* self, int64_t lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#left)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QByteArrayView*
/// @param n int64_t
const char* q_bytearrayview_left(void* self, int64_t n);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#right)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QByteArrayView*
/// @param n int64_t
const char* q_bytearrayview_right(void* self, int64_t n);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#mid)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QByteArrayView*
/// @param pos int64_t
const char* q_bytearrayview_mid(void* self, int64_t pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#truncate)
///
/// @param self QByteArrayView*
/// @param n int64_t
void q_bytearrayview_truncate(void* self, int64_t n);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#chop)
///
/// @param self QByteArrayView*
/// @param n int64_t
void q_bytearrayview_chop(void* self, int64_t n);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#trimmed)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QByteArrayView*
const char* q_bytearrayview_trimmed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toShort)
///
/// @param self QByteArrayView*
short q_bytearrayview_to_short(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toUShort)
///
/// @param self QByteArrayView*
unsigned short q_bytearrayview_to_u_short(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toInt)
///
/// @param self QByteArrayView*
int32_t q_bytearrayview_to_int(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toUInt)
///
/// @param self QByteArrayView*
uint32_t q_bytearrayview_to_u_int(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toLong)
///
/// @param self QByteArrayView*
int64_t q_bytearrayview_to_long(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toULong)
///
/// @param self QByteArrayView*
uint64_t q_bytearrayview_to_u_long(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toLongLong)
///
/// @param self QByteArrayView*
long long q_bytearrayview_to_long_long(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toULongLong)
///
/// @param self QByteArrayView*
uint64_t q_bytearrayview_to_u_long_long(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toFloat)
///
/// @param self QByteArrayView*
float q_bytearrayview_to_float(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toDouble)
///
/// @param self QByteArrayView*
double q_bytearrayview_to_double(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#startsWith)
///
/// @param self QByteArrayView*
/// @param other const char*
bool q_bytearrayview_starts_with(void* self, const char* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#startsWith)
///
/// @param self QByteArrayView*
/// @param c char
bool q_bytearrayview_starts_with2(void* self, char c);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#endsWith)
///
/// @param self QByteArrayView*
/// @param other const char*
bool q_bytearrayview_ends_with(void* self, const char* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#endsWith)
///
/// @param self QByteArrayView*
/// @param c char
bool q_bytearrayview_ends_with2(void* self, char c);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#indexOf)
///
/// @param self QByteArrayView*
/// @param a const char*
int64_t q_bytearrayview_index_of(void* self, const char* a);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#indexOf)
///
/// @param self QByteArrayView*
/// @param ch char
int64_t q_bytearrayview_index_of2(void* self, char ch);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#contains)
///
/// @param self QByteArrayView*
/// @param a const char*
bool q_bytearrayview_contains(void* self, const char* a);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#contains)
///
/// @param self QByteArrayView*
/// @param c char
bool q_bytearrayview_contains2(void* self, char c);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#lastIndexOf)
///
/// @param self QByteArrayView*
/// @param a const char*
int64_t q_bytearrayview_last_index_of(void* self, const char* a);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#lastIndexOf)
///
/// @param self QByteArrayView*
/// @param a const char*
/// @param from int64_t
int64_t q_bytearrayview_last_index_of2(void* self, const char* a, int64_t from);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#lastIndexOf)
///
/// @param self QByteArrayView*
/// @param ch char
int64_t q_bytearrayview_last_index_of3(void* self, char ch);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#count)
///
/// @param self QByteArrayView*
/// @param a const char*
int64_t q_bytearrayview_count(void* self, const char* a);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#count)
///
/// @param self QByteArrayView*
/// @param ch char
int64_t q_bytearrayview_count2(void* self, char ch);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#compare)
///
/// @param self QByteArrayView*
/// @param a const char*
int32_t q_bytearrayview_compare(void* self, const char* a);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#isValidUtf8)
///
/// @param self QByteArrayView*
bool q_bytearrayview_is_valid_utf8(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#begin)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QByteArrayView*
const char* q_bytearrayview_begin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#end)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QByteArrayView*
const char* q_bytearrayview_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#cbegin)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QByteArrayView*
const char* q_bytearrayview_cbegin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#cend)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QByteArrayView*
const char* q_bytearrayview_cend(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#empty)
///
/// @param self QByteArrayView*
bool q_bytearrayview_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#front)
///
/// @param self QByteArrayView*
char q_bytearrayview_front(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#back)
///
/// @param self QByteArrayView*
char q_bytearrayview_back(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#max_size)
///
/// @param self QByteArrayView*
int64_t q_bytearrayview_max_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#isNull)
///
/// @param self QByteArrayView*
bool q_bytearrayview_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#isEmpty)
///
/// @param self QByteArrayView*
bool q_bytearrayview_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#length)
///
/// @param self QByteArrayView*
int64_t q_bytearrayview_length(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#first)
///
/// @param self QByteArrayView*
char q_bytearrayview_first2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#last)
///
/// @param self QByteArrayView*
char q_bytearrayview_last2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#maxSize)
///
int64_t q_bytearrayview_max_size2();

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#mid)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QByteArrayView*
/// @param pos int64_t
/// @param n int64_t
const char* q_bytearrayview_mid2(void* self, int64_t pos, int64_t n);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toShort)
///
/// @param self QByteArrayView*
/// @param ok bool*
short q_bytearrayview_to_short1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toShort)
///
/// @param self QByteArrayView*
/// @param ok bool*
/// @param base int
short q_bytearrayview_to_short2(void* self, bool* ok, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toUShort)
///
/// @param self QByteArrayView*
/// @param ok bool*
unsigned short q_bytearrayview_to_u_short1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toUShort)
///
/// @param self QByteArrayView*
/// @param ok bool*
/// @param base int
unsigned short q_bytearrayview_to_u_short2(void* self, bool* ok, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toInt)
///
/// @param self QByteArrayView*
/// @param ok bool*
int32_t q_bytearrayview_to_int1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toInt)
///
/// @param self QByteArrayView*
/// @param ok bool*
/// @param base int
int32_t q_bytearrayview_to_int2(void* self, bool* ok, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toUInt)
///
/// @param self QByteArrayView*
/// @param ok bool*
uint32_t q_bytearrayview_to_u_int1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toUInt)
///
/// @param self QByteArrayView*
/// @param ok bool*
/// @param base int
uint32_t q_bytearrayview_to_u_int2(void* self, bool* ok, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toLong)
///
/// @param self QByteArrayView*
/// @param ok bool*
int64_t q_bytearrayview_to_long1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toLong)
///
/// @param self QByteArrayView*
/// @param ok bool*
/// @param base int
int64_t q_bytearrayview_to_long2(void* self, bool* ok, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toULong)
///
/// @param self QByteArrayView*
/// @param ok bool*
uint64_t q_bytearrayview_to_u_long1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toULong)
///
/// @param self QByteArrayView*
/// @param ok bool*
/// @param base int
uint64_t q_bytearrayview_to_u_long2(void* self, bool* ok, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toLongLong)
///
/// @param self QByteArrayView*
/// @param ok bool*
long long q_bytearrayview_to_long_long1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toLongLong)
///
/// @param self QByteArrayView*
/// @param ok bool*
/// @param base int
long long q_bytearrayview_to_long_long2(void* self, bool* ok, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toULongLong)
///
/// @param self QByteArrayView*
/// @param ok bool*
uint64_t q_bytearrayview_to_u_long_long1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toULongLong)
///
/// @param self QByteArrayView*
/// @param ok bool*
/// @param base int
uint64_t q_bytearrayview_to_u_long_long2(void* self, bool* ok, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toFloat)
///
/// @param self QByteArrayView*
/// @param ok bool*
float q_bytearrayview_to_float1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#toDouble)
///
/// @param self QByteArrayView*
/// @param ok bool*
double q_bytearrayview_to_double1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#indexOf)
///
/// @param self QByteArrayView*
/// @param a const char*
/// @param from int64_t
int64_t q_bytearrayview_index_of22(void* self, const char* a, int64_t from);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#indexOf)
///
/// @param self QByteArrayView*
/// @param ch char
/// @param from int64_t
int64_t q_bytearrayview_index_of23(void* self, char ch, int64_t from);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#lastIndexOf)
///
/// @param self QByteArrayView*
/// @param ch char
/// @param from int64_t
int64_t q_bytearrayview_last_index_of22(void* self, char ch, int64_t from);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#compare)
///
/// @param self QByteArrayView*
/// @param a const char*
/// @param cs enum Qt__CaseSensitivity
int32_t q_bytearrayview_compare2(void* self, const char* a, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayview.html#dtor.QByteArrayView)
///
/// Delete this object from C++ memory.
///
/// @param self QByteArrayView*
void q_bytearrayview_delete(void* self);

#endif
