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

/// https://doc.qt.io/qt-6/qstringview.html

/// q_stringview_new constructs a new QStringView object.
///
///
QStringView* q_stringview_new();

/// q_stringview_copy_assign shallow copies `other` into `self`.
///
/// ``` QStringView* self, QStringView* other ```
void q_stringview_copy_assign(void* self, void* other);

/// q_stringview_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QStringView* self, QStringView* other ```
void q_stringview_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toString)
///
/// ``` QStringView* self ```
const char* q_stringview_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#size)
///
/// ``` QStringView* self ```
int64_t q_stringview_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#data)
///
/// ``` QStringView* self ```
QChar* q_stringview_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#constData)
///
/// ``` QStringView* self ```
QChar* q_stringview_const_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#operator[])
///
/// ``` QStringView* self, int64_t n ```
QChar* q_stringview_operator_subscript(void* self, int64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toLatin1)
///
/// ``` QStringView* self ```
char* q_stringview_to_latin1(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toUtf8)
///
/// ``` QStringView* self ```
char* q_stringview_to_utf8(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toLocal8Bit)
///
/// ``` QStringView* self ```
char* q_stringview_to_local8_bit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toUcs4)
///
/// ``` QStringView* self ```
libqt_list /* of uint32_t */ q_stringview_to_ucs4(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#at)
///
/// ``` QStringView* self, int64_t n ```
QChar* q_stringview_at(void* self, int64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#truncate)
///
/// ``` QStringView* self, int64_t n ```
void q_stringview_truncate(void* self, int64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#chop)
///
/// ``` QStringView* self, int64_t n ```
void q_stringview_chop(void* self, int64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#compare)
///
/// ``` QStringView* self, QChar* c ```
int32_t q_stringview_compare_with_q_char(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#compare)
///
/// ``` QStringView* self, QChar* c, enum Qt__CaseSensitivity cs ```
int32_t q_stringview_compare2(void* self, void* c, int64_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#startsWith)
///
/// ``` QStringView* self, QChar* c ```
bool q_stringview_starts_with_with_q_char(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#startsWith)
///
/// ``` QStringView* self, QChar* c, enum Qt__CaseSensitivity cs ```
bool q_stringview_starts_with2(void* self, void* c, int64_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#endsWith)
///
/// ``` QStringView* self, QChar* c ```
bool q_stringview_ends_with_with_q_char(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#endsWith)
///
/// ``` QStringView* self, QChar* c, enum Qt__CaseSensitivity cs ```
bool q_stringview_ends_with2(void* self, void* c, int64_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#indexOf)
///
/// ``` QStringView* self, QChar* c ```
int64_t q_stringview_index_of(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#contains)
///
/// ``` QStringView* self, QChar* c ```
bool q_stringview_contains(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#count)
///
/// ``` QStringView* self, QChar* c ```
int64_t q_stringview_count(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#lastIndexOf)
///
/// ``` QStringView* self, QChar* c ```
int64_t q_stringview_last_index_of(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#lastIndexOf)
///
/// ``` QStringView* self, QChar* c, int64_t from ```
int64_t q_stringview_last_index_of2(void* self, void* c, int64_t from);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#indexOf)
///
/// ``` QStringView* self, QRegularExpression* re ```
int64_t q_stringview_index_of_with_re(void* self, void* re);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#lastIndexOf)
///
/// ``` QStringView* self, QRegularExpression* re, int64_t from ```
int64_t q_stringview_last_index_of5(void* self, void* re, int64_t from);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#contains)
///
/// ``` QStringView* self, QRegularExpression* re ```
bool q_stringview_contains_with_re(void* self, void* re);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#count)
///
/// ``` QStringView* self, QRegularExpression* re ```
int64_t q_stringview_count_with_re(void* self, void* re);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#isRightToLeft)
///
/// ``` QStringView* self ```
bool q_stringview_is_right_to_left(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#isValidUtf16)
///
/// ``` QStringView* self ```
bool q_stringview_is_valid_utf16(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toShort)
///
/// ``` QStringView* self ```
short q_stringview_to_short(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toUShort)
///
/// ``` QStringView* self ```
unsigned short q_stringview_to_u_short(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toInt)
///
/// ``` QStringView* self ```
int32_t q_stringview_to_int(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toUInt)
///
/// ``` QStringView* self ```
uint32_t q_stringview_to_u_int(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toLong)
///
/// ``` QStringView* self ```
int64_t q_stringview_to_long(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toULong)
///
/// ``` QStringView* self ```
uint64_t q_stringview_to_u_long(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toLongLong)
///
/// ``` QStringView* self ```
long long q_stringview_to_long_long(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toULongLong)
///
/// ``` QStringView* self ```
uint64_t q_stringview_to_u_long_long(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toFloat)
///
/// ``` QStringView* self ```
float q_stringview_to_float(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toDouble)
///
/// ``` QStringView* self ```
double q_stringview_to_double(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#begin)
///
/// ``` QStringView* self ```
QChar* q_stringview_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#end)
///
/// ``` QStringView* self ```
QChar* q_stringview_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#cbegin)
///
/// ``` QStringView* self ```
QChar* q_stringview_cbegin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#cend)
///
/// ``` QStringView* self ```
QChar* q_stringview_cend(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#empty)
///
/// ``` QStringView* self ```
bool q_stringview_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#front)
///
/// ``` QStringView* self ```
QChar* q_stringview_front(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#back)
///
/// ``` QStringView* self ```
QChar* q_stringview_back(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#constBegin)
///
/// ``` QStringView* self ```
QChar* q_stringview_const_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#constEnd)
///
/// ``` QStringView* self ```
QChar* q_stringview_const_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#isNull)
///
/// ``` QStringView* self ```
bool q_stringview_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#isEmpty)
///
/// ``` QStringView* self ```
bool q_stringview_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#length)
///
/// ``` QStringView* self ```
int64_t q_stringview_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#first)
///
/// ``` QStringView* self ```
QChar* q_stringview_first2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#last)
///
/// ``` QStringView* self ```
QChar* q_stringview_last2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#indexOf)
///
/// ``` QStringView* self, QChar* c, int64_t from ```
int64_t q_stringview_index_of2(void* self, void* c, int64_t from);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#indexOf)
///
/// ``` QStringView* self, QChar* c, int64_t from, enum Qt__CaseSensitivity cs ```
int64_t q_stringview_index_of3(void* self, void* c, int64_t from, int64_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#contains)
///
/// ``` QStringView* self, QChar* c, enum Qt__CaseSensitivity cs ```
bool q_stringview_contains2(void* self, void* c, int64_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#count)
///
/// ``` QStringView* self, QChar* c, enum Qt__CaseSensitivity cs ```
int64_t q_stringview_count2(void* self, void* c, int64_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#lastIndexOf)
///
/// ``` QStringView* self, QChar* c, enum Qt__CaseSensitivity cs ```
int64_t q_stringview_last_index_of22(void* self, void* c, int64_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#lastIndexOf)
///
/// ``` QStringView* self, QChar* c, int64_t from, enum Qt__CaseSensitivity cs ```
int64_t q_stringview_last_index_of32(void* self, void* c, int64_t from, int64_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#indexOf)
///
/// ``` QStringView* self, QRegularExpression* re, int64_t from ```
int64_t q_stringview_index_of24(void* self, void* re, int64_t from);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#indexOf)
///
/// ``` QStringView* self, QRegularExpression* re, int64_t from, QRegularExpressionMatch* rmatch ```
int64_t q_stringview_index_of34(void* self, void* re, int64_t from, void* rmatch);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#lastIndexOf)
///
/// ``` QStringView* self, QRegularExpression* re, int64_t from, QRegularExpressionMatch* rmatch ```
int64_t q_stringview_last_index_of35(void* self, void* re, int64_t from, void* rmatch);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#contains)
///
/// ``` QStringView* self, QRegularExpression* re, QRegularExpressionMatch* rmatch ```
bool q_stringview_contains24(void* self, void* re, void* rmatch);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toShort)
///
/// ``` QStringView* self, bool* ok ```
short q_stringview_to_short1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toShort)
///
/// ``` QStringView* self, bool* ok, int base ```
short q_stringview_to_short2(void* self, bool* ok, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toUShort)
///
/// ``` QStringView* self, bool* ok ```
unsigned short q_stringview_to_u_short1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toUShort)
///
/// ``` QStringView* self, bool* ok, int base ```
unsigned short q_stringview_to_u_short2(void* self, bool* ok, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toInt)
///
/// ``` QStringView* self, bool* ok ```
int32_t q_stringview_to_int1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toInt)
///
/// ``` QStringView* self, bool* ok, int base ```
int32_t q_stringview_to_int2(void* self, bool* ok, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toUInt)
///
/// ``` QStringView* self, bool* ok ```
uint32_t q_stringview_to_u_int1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toUInt)
///
/// ``` QStringView* self, bool* ok, int base ```
uint32_t q_stringview_to_u_int2(void* self, bool* ok, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toLong)
///
/// ``` QStringView* self, bool* ok ```
int64_t q_stringview_to_long1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toLong)
///
/// ``` QStringView* self, bool* ok, int base ```
int64_t q_stringview_to_long2(void* self, bool* ok, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toULong)
///
/// ``` QStringView* self, bool* ok ```
uint64_t q_stringview_to_u_long1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toULong)
///
/// ``` QStringView* self, bool* ok, int base ```
uint64_t q_stringview_to_u_long2(void* self, bool* ok, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toLongLong)
///
/// ``` QStringView* self, bool* ok ```
long long q_stringview_to_long_long1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toLongLong)
///
/// ``` QStringView* self, bool* ok, int base ```
long long q_stringview_to_long_long2(void* self, bool* ok, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toULongLong)
///
/// ``` QStringView* self, bool* ok ```
uint64_t q_stringview_to_u_long_long1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toULongLong)
///
/// ``` QStringView* self, bool* ok, int base ```
uint64_t q_stringview_to_u_long_long2(void* self, bool* ok, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toFloat)
///
/// ``` QStringView* self, bool* ok ```
float q_stringview_to_float1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringview.html#toDouble)
///
/// ``` QStringView* self, bool* ok ```
double q_stringview_to_double1(void* self, bool* ok);

/// Delete this object from C++ memory.
///
/// ``` QStringView* self ```
void q_stringview_delete(void* self);

#endif
