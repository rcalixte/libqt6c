#pragma once
#ifndef SRCQT6C_LIBQLATIN1STRINGVIEW_H
#define SRCQT6C_LIBQLATIN1STRINGVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qlatin1string.html

/// q_latin1string_new constructs a new QLatin1String object.
///
///
QLatin1String* q_latin1string_new();

/// q_latin1string_new2 constructs a new QLatin1String object.
///
/// ``` const char* s ```
QLatin1String* q_latin1string_new2(const char* s);

/// q_latin1string_new3 constructs a new QLatin1String object.
///
/// ``` const char* f, const char* l ```
QLatin1String* q_latin1string_new3(const char* f, const char* l);

/// q_latin1string_new4 constructs a new QLatin1String object.
///
/// ``` const char* s, int64_t sz ```
QLatin1String* q_latin1string_new4(const char* s, int64_t sz);

/// q_latin1string_new5 constructs a new QLatin1String object.
///
/// ``` const char* s ```
QLatin1String* q_latin1string_new5(const char* s);

/// q_latin1string_new6 constructs a new QLatin1String object.
///
/// ``` const char* s ```
QLatin1String* q_latin1string_new6(const char* s);

/// q_latin1string_copy_assign shallow copies `other` into `self`.
///
/// ``` QLatin1String* self, QLatin1String* other ```
void q_latin1string_copy_assign(void* self, void* other);

/// q_latin1string_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QLatin1String* self, QLatin1String* other ```
void q_latin1string_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toString)
///
/// ``` QLatin1String* self ```
const char* q_latin1string_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#latin1)
///
/// ``` QLatin1String* self ```
const char* q_latin1string_latin1(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#size)
///
/// ``` QLatin1String* self ```
int64_t q_latin1string_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#data)
///
/// ``` QLatin1String* self ```
const char* q_latin1string_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#constData)
///
/// ``` QLatin1String* self ```
const char* q_latin1string_const_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#constBegin)
///
/// ``` QLatin1String* self ```
const char* q_latin1string_const_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#constEnd)
///
/// ``` QLatin1String* self ```
const char* q_latin1string_const_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#first)
///
/// ``` QLatin1String* self ```
QLatin1Char* q_latin1string_first(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#last)
///
/// ``` QLatin1String* self ```
QLatin1Char* q_latin1string_last(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#length)
///
/// ``` QLatin1String* self ```
int64_t q_latin1string_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#isNull)
///
/// ``` QLatin1String* self ```
bool q_latin1string_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#isEmpty)
///
/// ``` QLatin1String* self ```
bool q_latin1string_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#empty)
///
/// ``` QLatin1String* self ```
bool q_latin1string_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#at)
///
/// ``` QLatin1String* self, int64_t i ```
QLatin1Char* q_latin1string_at(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#operator-5b-5d)
///
/// ``` QLatin1String* self, int64_t i ```
QLatin1Char* q_latin1string_operator_subscript(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#front)
///
/// ``` QLatin1String* self ```
QLatin1Char* q_latin1string_front(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#back)
///
/// ``` QLatin1String* self ```
QLatin1Char* q_latin1string_back(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#compare)
///
/// ``` QLatin1String* self, QChar* c ```
int32_t q_latin1string_compare4(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#compare)
///
/// ``` QLatin1String* self, QChar* c, enum Qt__CaseSensitivity cs ```
int32_t q_latin1string_compare5(void* self, void* c, int64_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#startsWith)
///
/// ``` QLatin1String* self, QChar* c ```
bool q_latin1string_starts_with3(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#startsWith)
///
/// ``` QLatin1String* self, QChar* c, enum Qt__CaseSensitivity cs ```
bool q_latin1string_starts_with4(void* self, void* c, int64_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#endsWith)
///
/// ``` QLatin1String* self, QChar* c ```
bool q_latin1string_ends_with3(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#endsWith)
///
/// ``` QLatin1String* self, QChar* c, enum Qt__CaseSensitivity cs ```
bool q_latin1string_ends_with4(void* self, void* c, int64_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#indexOf)
///
/// ``` QLatin1String* self, QChar* c ```
int64_t q_latin1string_index_of3(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#contains)
///
/// ``` QLatin1String* self, QChar* c ```
bool q_latin1string_contains3(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#lastIndexOf)
///
/// ``` QLatin1String* self, QChar* c ```
int64_t q_latin1string_last_index_of5(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#lastIndexOf)
///
/// ``` QLatin1String* self, QChar* c, int64_t from ```
int64_t q_latin1string_last_index_of6(void* self, void* c, int64_t from);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#count)
///
/// ``` QLatin1String* self, QChar* ch ```
int64_t q_latin1string_count3(void* self, void* ch);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toShort)
///
/// ``` QLatin1String* self ```
short q_latin1string_to_short(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toUShort)
///
/// ``` QLatin1String* self ```
unsigned short q_latin1string_to_u_short(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toInt)
///
/// ``` QLatin1String* self ```
int32_t q_latin1string_to_int(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toUInt)
///
/// ``` QLatin1String* self ```
uint32_t q_latin1string_to_u_int(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toLong)
///
/// ``` QLatin1String* self ```
int64_t q_latin1string_to_long(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toULong)
///
/// ``` QLatin1String* self ```
uint64_t q_latin1string_to_u_long(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toLongLong)
///
/// ``` QLatin1String* self ```
long long q_latin1string_to_long_long(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toULongLong)
///
/// ``` QLatin1String* self ```
uint64_t q_latin1string_to_u_long_long(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toFloat)
///
/// ``` QLatin1String* self ```
float q_latin1string_to_float(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toDouble)
///
/// ``` QLatin1String* self ```
double q_latin1string_to_double(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#begin)
///
/// ``` QLatin1String* self ```
const char* q_latin1string_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#cbegin)
///
/// ``` QLatin1String* self ```
const char* q_latin1string_cbegin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#end)
///
/// ``` QLatin1String* self ```
const char* q_latin1string_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#cend)
///
/// ``` QLatin1String* self ```
const char* q_latin1string_cend(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#max_size)
///
/// ``` QLatin1String* self ```
int64_t q_latin1string_max_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#maxSize)
///
///
int64_t q_latin1string_max_size2();

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#chop)
///
/// ``` QLatin1String* self, int64_t n ```
void q_latin1string_chop(void* self, int64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#truncate)
///
/// ``` QLatin1String* self, int64_t n ```
void q_latin1string_truncate(void* self, int64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#indexOf)
///
/// ``` QLatin1String* self, QChar* c, int64_t from ```
int64_t q_latin1string_index_of24(void* self, void* c, int64_t from);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#indexOf)
///
/// ``` QLatin1String* self, QChar* c, int64_t from, enum Qt__CaseSensitivity cs ```
int64_t q_latin1string_index_of34(void* self, void* c, int64_t from, int64_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#contains)
///
/// ``` QLatin1String* self, QChar* c, enum Qt__CaseSensitivity cs ```
bool q_latin1string_contains24(void* self, void* c, int64_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#lastIndexOf)
///
/// ``` QLatin1String* self, QChar* c, enum Qt__CaseSensitivity cs ```
int64_t q_latin1string_last_index_of24(void* self, void* c, int64_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#lastIndexOf)
///
/// ``` QLatin1String* self, QChar* c, int64_t from, enum Qt__CaseSensitivity cs ```
int64_t q_latin1string_last_index_of34(void* self, void* c, int64_t from, int64_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#count)
///
/// ``` QLatin1String* self, QChar* ch, enum Qt__CaseSensitivity cs ```
int64_t q_latin1string_count24(void* self, void* ch, int64_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toShort)
///
/// ``` QLatin1String* self, bool* ok ```
short q_latin1string_to_short1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toShort)
///
/// ``` QLatin1String* self, bool* ok, int base ```
short q_latin1string_to_short2(void* self, bool* ok, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toUShort)
///
/// ``` QLatin1String* self, bool* ok ```
unsigned short q_latin1string_to_u_short1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toUShort)
///
/// ``` QLatin1String* self, bool* ok, int base ```
unsigned short q_latin1string_to_u_short2(void* self, bool* ok, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toInt)
///
/// ``` QLatin1String* self, bool* ok ```
int32_t q_latin1string_to_int1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toInt)
///
/// ``` QLatin1String* self, bool* ok, int base ```
int32_t q_latin1string_to_int2(void* self, bool* ok, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toUInt)
///
/// ``` QLatin1String* self, bool* ok ```
uint32_t q_latin1string_to_u_int1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toUInt)
///
/// ``` QLatin1String* self, bool* ok, int base ```
uint32_t q_latin1string_to_u_int2(void* self, bool* ok, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toLong)
///
/// ``` QLatin1String* self, bool* ok ```
int64_t q_latin1string_to_long1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toLong)
///
/// ``` QLatin1String* self, bool* ok, int base ```
int64_t q_latin1string_to_long2(void* self, bool* ok, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toULong)
///
/// ``` QLatin1String* self, bool* ok ```
uint64_t q_latin1string_to_u_long1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toULong)
///
/// ``` QLatin1String* self, bool* ok, int base ```
uint64_t q_latin1string_to_u_long2(void* self, bool* ok, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toLongLong)
///
/// ``` QLatin1String* self, bool* ok ```
long long q_latin1string_to_long_long1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toLongLong)
///
/// ``` QLatin1String* self, bool* ok, int base ```
long long q_latin1string_to_long_long2(void* self, bool* ok, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toULongLong)
///
/// ``` QLatin1String* self, bool* ok ```
uint64_t q_latin1string_to_u_long_long1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toULongLong)
///
/// ``` QLatin1String* self, bool* ok, int base ```
uint64_t q_latin1string_to_u_long_long2(void* self, bool* ok, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toFloat)
///
/// ``` QLatin1String* self, bool* ok ```
float q_latin1string_to_float1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#toDouble)
///
/// ``` QLatin1String* self, bool* ok ```
double q_latin1string_to_double1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1string.html#dtor.QLatin1String)
///
/// Delete this object from C++ memory.
///
/// ``` QLatin1String* self ```
void q_latin1string_delete(void* self);

#endif
