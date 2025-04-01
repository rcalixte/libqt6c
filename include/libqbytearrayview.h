#pragma once
#ifndef SRCQT6C_LIBQBYTEARRAYVIEW_H
#define SRCQT6C_LIBQBYTEARRAYVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qbytearrayview.html

/// q_bytearrayview_new constructs a new QByteArrayView object.
///
/// ``` const char* other ```
QByteArrayView* q_bytearrayview_new(const char* other);

/// q_bytearrayview_new2 constructs a new QByteArrayView object and invalidates the source QByteArrayView object.
///
/// ``` const char* other ```
QByteArrayView* q_bytearrayview_new2(const char* other);

/// q_bytearrayview_new3 constructs a new QByteArrayView object.
///
///
QByteArrayView* q_bytearrayview_new3();

/// q_bytearrayview_new4 constructs a new QByteArrayView object.
///
/// ``` const char* param1 ```
QByteArrayView* q_bytearrayview_new4(const char* param1);

/// q_bytearrayview_copy_assign shallow copies `other` into `self`.
///
/// ``` QByteArrayView* self, QByteArrayView* other ```
void q_bytearrayview_copy_assign(void* self, void* other);

/// q_bytearrayview_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QByteArrayView* self, QByteArrayView* other ```
void q_bytearrayview_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toByteArray)
///
/// ``` QByteArrayView* self ```
char* q_bytearrayview_to_byte_array(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#size)
///
/// ``` QByteArrayView* self ```
int64_t q_bytearrayview_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#data)
///
/// ``` QByteArrayView* self ```
const char* q_bytearrayview_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#constData)
///
/// ``` QByteArrayView* self ```
const char* q_bytearrayview_const_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#operator[])
///
/// ``` QByteArrayView* self, int64_t n ```
char q_bytearrayview_operator_subscript(void* self, int64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#at)
///
/// ``` QByteArrayView* self, int64_t n ```
char q_bytearrayview_at(void* self, int64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#first)
///
/// ``` QByteArrayView* self, int64_t n ```
const char* q_bytearrayview_first(void* self, int64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#last)
///
/// ``` QByteArrayView* self, int64_t n ```
const char* q_bytearrayview_last(void* self, int64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#sliced)
///
/// ``` QByteArrayView* self, int64_t pos ```
const char* q_bytearrayview_sliced(void* self, int64_t pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#sliced)
///
/// ``` QByteArrayView* self, int64_t pos, int64_t n ```
const char* q_bytearrayview_sliced2(void* self, int64_t pos, int64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#chopped)
///
/// ``` QByteArrayView* self, int64_t lenVal ```
const char* q_bytearrayview_chopped(void* self, int64_t lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#truncate)
///
/// ``` QByteArrayView* self, int64_t n ```
void q_bytearrayview_truncate(void* self, int64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#chop)
///
/// ``` QByteArrayView* self, int64_t n ```
void q_bytearrayview_chop(void* self, int64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#trimmed)
///
/// ``` QByteArrayView* self ```
const char* q_bytearrayview_trimmed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toShort)
///
/// ``` QByteArrayView* self ```
short q_bytearrayview_to_short(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toUShort)
///
/// ``` QByteArrayView* self ```
unsigned short q_bytearrayview_to_u_short(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toInt)
///
/// ``` QByteArrayView* self ```
int32_t q_bytearrayview_to_int(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toUInt)
///
/// ``` QByteArrayView* self ```
uint32_t q_bytearrayview_to_u_int(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toLong)
///
/// ``` QByteArrayView* self ```
int64_t q_bytearrayview_to_long(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toULong)
///
/// ``` QByteArrayView* self ```
uint64_t q_bytearrayview_to_u_long(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toLongLong)
///
/// ``` QByteArrayView* self ```
long long q_bytearrayview_to_long_long(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toULongLong)
///
/// ``` QByteArrayView* self ```
uint64_t q_bytearrayview_to_u_long_long(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toFloat)
///
/// ``` QByteArrayView* self ```
float q_bytearrayview_to_float(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toDouble)
///
/// ``` QByteArrayView* self ```
double q_bytearrayview_to_double(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#startsWith)
///
/// ``` QByteArrayView* self, const char* other ```
bool q_bytearrayview_starts_with(void* self, const char* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#startsWith)
///
/// ``` QByteArrayView* self, char c ```
bool q_bytearrayview_starts_with_with_char(void* self, char c);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#endsWith)
///
/// ``` QByteArrayView* self, const char* other ```
bool q_bytearrayview_ends_with(void* self, const char* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#endsWith)
///
/// ``` QByteArrayView* self, char c ```
bool q_bytearrayview_ends_with_with_char(void* self, char c);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#indexOf)
///
/// ``` QByteArrayView* self, const char* a ```
int64_t q_bytearrayview_index_of(void* self, const char* a);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#indexOf)
///
/// ``` QByteArrayView* self, char ch ```
int64_t q_bytearrayview_index_of_with_ch(void* self, char ch);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#contains)
///
/// ``` QByteArrayView* self, const char* a ```
bool q_bytearrayview_contains(void* self, const char* a);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#contains)
///
/// ``` QByteArrayView* self, char c ```
bool q_bytearrayview_contains_with_char(void* self, char c);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#lastIndexOf)
///
/// ``` QByteArrayView* self, const char* a ```
int64_t q_bytearrayview_last_index_of(void* self, const char* a);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#lastIndexOf)
///
/// ``` QByteArrayView* self, const char* a, int64_t from ```
int64_t q_bytearrayview_last_index_of2(void* self, const char* a, int64_t from);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#lastIndexOf)
///
/// ``` QByteArrayView* self, char ch ```
int64_t q_bytearrayview_last_index_of_with_ch(void* self, char ch);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#count)
///
/// ``` QByteArrayView* self, const char* a ```
int64_t q_bytearrayview_count(void* self, const char* a);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#count)
///
/// ``` QByteArrayView* self, char ch ```
int64_t q_bytearrayview_count_with_ch(void* self, char ch);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#compare)
///
/// ``` QByteArrayView* self, const char* a ```
int32_t q_bytearrayview_compare(void* self, const char* a);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#isValidUtf8)
///
/// ``` QByteArrayView* self ```
bool q_bytearrayview_is_valid_utf8(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#begin)
///
/// ``` QByteArrayView* self ```
const char* q_bytearrayview_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#end)
///
/// ``` QByteArrayView* self ```
const char* q_bytearrayview_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#cbegin)
///
/// ``` QByteArrayView* self ```
const char* q_bytearrayview_cbegin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#cend)
///
/// ``` QByteArrayView* self ```
const char* q_bytearrayview_cend(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#empty)
///
/// ``` QByteArrayView* self ```
bool q_bytearrayview_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#front)
///
/// ``` QByteArrayView* self ```
char q_bytearrayview_front(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#back)
///
/// ``` QByteArrayView* self ```
char q_bytearrayview_back(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#isNull)
///
/// ``` QByteArrayView* self ```
bool q_bytearrayview_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#isEmpty)
///
/// ``` QByteArrayView* self ```
bool q_bytearrayview_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#length)
///
/// ``` QByteArrayView* self ```
int64_t q_bytearrayview_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#first)
///
/// ``` QByteArrayView* self ```
char q_bytearrayview_first2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#last)
///
/// ``` QByteArrayView* self ```
char q_bytearrayview_last2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toShort)
///
/// ``` QByteArrayView* self, bool* ok ```
short q_bytearrayview_to_short1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toShort)
///
/// ``` QByteArrayView* self, bool* ok, int base ```
short q_bytearrayview_to_short2(void* self, bool* ok, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toUShort)
///
/// ``` QByteArrayView* self, bool* ok ```
unsigned short q_bytearrayview_to_u_short1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toUShort)
///
/// ``` QByteArrayView* self, bool* ok, int base ```
unsigned short q_bytearrayview_to_u_short2(void* self, bool* ok, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toInt)
///
/// ``` QByteArrayView* self, bool* ok ```
int32_t q_bytearrayview_to_int1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toInt)
///
/// ``` QByteArrayView* self, bool* ok, int base ```
int32_t q_bytearrayview_to_int2(void* self, bool* ok, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toUInt)
///
/// ``` QByteArrayView* self, bool* ok ```
uint32_t q_bytearrayview_to_u_int1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toUInt)
///
/// ``` QByteArrayView* self, bool* ok, int base ```
uint32_t q_bytearrayview_to_u_int2(void* self, bool* ok, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toLong)
///
/// ``` QByteArrayView* self, bool* ok ```
int64_t q_bytearrayview_to_long1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toLong)
///
/// ``` QByteArrayView* self, bool* ok, int base ```
int64_t q_bytearrayview_to_long2(void* self, bool* ok, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toULong)
///
/// ``` QByteArrayView* self, bool* ok ```
uint64_t q_bytearrayview_to_u_long1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toULong)
///
/// ``` QByteArrayView* self, bool* ok, int base ```
uint64_t q_bytearrayview_to_u_long2(void* self, bool* ok, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toLongLong)
///
/// ``` QByteArrayView* self, bool* ok ```
long long q_bytearrayview_to_long_long1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toLongLong)
///
/// ``` QByteArrayView* self, bool* ok, int base ```
long long q_bytearrayview_to_long_long2(void* self, bool* ok, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toULongLong)
///
/// ``` QByteArrayView* self, bool* ok ```
uint64_t q_bytearrayview_to_u_long_long1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toULongLong)
///
/// ``` QByteArrayView* self, bool* ok, int base ```
uint64_t q_bytearrayview_to_u_long_long2(void* self, bool* ok, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toFloat)
///
/// ``` QByteArrayView* self, bool* ok ```
float q_bytearrayview_to_float1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#toDouble)
///
/// ``` QByteArrayView* self, bool* ok ```
double q_bytearrayview_to_double1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#indexOf)
///
/// ``` QByteArrayView* self, const char* a, int64_t from ```
int64_t q_bytearrayview_index_of2(void* self, const char* a, int64_t from);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#indexOf)
///
/// ``` QByteArrayView* self, char ch, int64_t from ```
int64_t q_bytearrayview_index_of22(void* self, char ch, int64_t from);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#lastIndexOf)
///
/// ``` QByteArrayView* self, char ch, int64_t from ```
int64_t q_bytearrayview_last_index_of22(void* self, char ch, int64_t from);

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearrayview.html#compare)
///
/// ``` QByteArrayView* self, const char* a, enum Qt__CaseSensitivity cs ```
int32_t q_bytearrayview_compare2(void* self, const char* a, int64_t cs);

/// Delete this object from C++ memory.
///
/// ``` QByteArrayView* self ```
void q_bytearrayview_delete(void* self);

#endif
