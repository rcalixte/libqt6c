#pragma once
#ifndef SRC_QT6C_LIBQSTRINGVIEW_H
#define SRC_QT6C_LIBQSTRINGVIEW_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qstringview.html

/// q_stringview_new constructs a new QStringView object.
///
QStringView* q_stringview_new();

/// q_stringview_copy_assign shallow copies `other` into `self`.
///
/// @param self QStringView*
/// @param other QStringView*
void q_stringview_copy_assign(void* self, void* other);

/// q_stringview_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QStringView*
/// @param other QStringView*
void q_stringview_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStringView*
const char* q_stringview_to_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#size)
///
/// @param self QStringView*
int64_t q_stringview_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#data)
///
/// @param self QStringView*
const QChar* q_stringview_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#constData)
///
/// @param self QStringView*
const QChar* q_stringview_const_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#operator-5b-5d)
///
/// @param self QStringView*
/// @param n int64_t
QChar* q_stringview_operator_subscript(void* self, int64_t n);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toLatin1)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStringView*
char* q_stringview_to_latin1(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toUtf8)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStringView*
char* q_stringview_to_utf8(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toLocal8Bit)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStringView*
char* q_stringview_to_local8_bit(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toUcs4)
///
/// @param self QStringView*
libqt_list /* of uint32_t */ q_stringview_to_ucs4(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#at)
///
/// @param self QStringView*
/// @param n int64_t
QChar* q_stringview_at(void* self, int64_t n);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#truncate)
///
/// @param self QStringView*
/// @param n int64_t
void q_stringview_truncate(void* self, int64_t n);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#chop)
///
/// @param self QStringView*
/// @param n int64_t
void q_stringview_chop(void* self, int64_t n);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#compare)
///
/// @param self QStringView*
/// @param c QChar*
int32_t q_stringview_compare4(void* self, void* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#compare)
///
/// @param self QStringView*
/// @param c QChar*
/// @param cs enum Qt__CaseSensitivity
int32_t q_stringview_compare5(void* self, void* c, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#startsWith)
///
/// @param self QStringView*
/// @param c QChar*
bool q_stringview_starts_with3(void* self, void* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#startsWith)
///
/// @param self QStringView*
/// @param c QChar*
/// @param cs enum Qt__CaseSensitivity
bool q_stringview_starts_with4(void* self, void* c, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#endsWith)
///
/// @param self QStringView*
/// @param c QChar*
bool q_stringview_ends_with3(void* self, void* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#endsWith)
///
/// @param self QStringView*
/// @param c QChar*
/// @param cs enum Qt__CaseSensitivity
bool q_stringview_ends_with4(void* self, void* c, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#indexOf)
///
/// @param self QStringView*
/// @param c QChar*
int64_t q_stringview_index_of(void* self, void* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#contains)
///
/// @param self QStringView*
/// @param c QChar*
bool q_stringview_contains(void* self, void* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#count)
///
/// @param self QStringView*
/// @param c QChar*
int64_t q_stringview_count(void* self, void* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#lastIndexOf)
///
/// @param self QStringView*
/// @param c QChar*
int64_t q_stringview_last_index_of(void* self, void* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#lastIndexOf)
///
/// @param self QStringView*
/// @param c QChar*
/// @param from int64_t
int64_t q_stringview_last_index_of2(void* self, void* c, int64_t from);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#indexOf)
///
/// @param self QStringView*
/// @param re QRegularExpression*
int64_t q_stringview_index_of4(void* self, void* re);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#lastIndexOf)
///
/// @param self QStringView*
/// @param re QRegularExpression*
/// @param from int64_t
int64_t q_stringview_last_index_of7(void* self, void* re, int64_t from);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#contains)
///
/// @param self QStringView*
/// @param re QRegularExpression*
bool q_stringview_contains4(void* self, void* re);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#count)
///
/// @param self QStringView*
/// @param re QRegularExpression*
int64_t q_stringview_count4(void* self, void* re);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#isRightToLeft)
///
/// @param self QStringView*
bool q_stringview_is_right_to_left(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#isValidUtf16)
///
/// @param self QStringView*
bool q_stringview_is_valid_utf16(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#isUpper)
///
/// @param self QStringView*
bool q_stringview_is_upper(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#isLower)
///
/// @param self QStringView*
bool q_stringview_is_lower(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toShort)
///
/// @param self QStringView*
short q_stringview_to_short(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toUShort)
///
/// @param self QStringView*
unsigned short q_stringview_to_u_short(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toInt)
///
/// @param self QStringView*
int32_t q_stringview_to_int(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toUInt)
///
/// @param self QStringView*
uint32_t q_stringview_to_u_int(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toLong)
///
/// @param self QStringView*
int64_t q_stringview_to_long(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toULong)
///
/// @param self QStringView*
uint64_t q_stringview_to_u_long(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toLongLong)
///
/// @param self QStringView*
long long q_stringview_to_long_long(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toULongLong)
///
/// @param self QStringView*
uint64_t q_stringview_to_u_long_long(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toFloat)
///
/// @param self QStringView*
float q_stringview_to_float(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toDouble)
///
/// @param self QStringView*
double q_stringview_to_double(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#begin)
///
/// @param self QStringView*
const QChar* q_stringview_begin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#end)
///
/// @param self QStringView*
const QChar* q_stringview_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#cbegin)
///
/// @param self QStringView*
const QChar* q_stringview_cbegin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#cend)
///
/// @param self QStringView*
const QChar* q_stringview_cend(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#empty)
///
/// @param self QStringView*
bool q_stringview_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#front)
///
/// @param self QStringView*
QChar* q_stringview_front(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#back)
///
/// @param self QStringView*
QChar* q_stringview_back(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#max_size)
///
/// @param self QStringView*
int64_t q_stringview_max_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#constBegin)
///
/// @param self QStringView*
const QChar* q_stringview_const_begin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#constEnd)
///
/// @param self QStringView*
const QChar* q_stringview_const_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#isNull)
///
/// @param self QStringView*
bool q_stringview_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#isEmpty)
///
/// @param self QStringView*
bool q_stringview_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#length)
///
/// @param self QStringView*
int64_t q_stringview_length(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#first)
///
/// @param self QStringView*
QChar* q_stringview_first2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#last)
///
/// @param self QStringView*
QChar* q_stringview_last2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#maxSize)
///
int64_t q_stringview_max_size2();

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#indexOf)
///
/// @param self QStringView*
/// @param c QChar*
/// @param from int64_t
int64_t q_stringview_index_of22(void* self, void* c, int64_t from);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#indexOf)
///
/// @param self QStringView*
/// @param c QChar*
/// @param from int64_t
/// @param cs enum Qt__CaseSensitivity
int64_t q_stringview_index_of32(void* self, void* c, int64_t from, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#contains)
///
/// @param self QStringView*
/// @param c QChar*
/// @param cs enum Qt__CaseSensitivity
bool q_stringview_contains22(void* self, void* c, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#count)
///
/// @param self QStringView*
/// @param c QChar*
/// @param cs enum Qt__CaseSensitivity
int64_t q_stringview_count22(void* self, void* c, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#lastIndexOf)
///
/// @param self QStringView*
/// @param c QChar*
/// @param cs enum Qt__CaseSensitivity
int64_t q_stringview_last_index_of22(void* self, void* c, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#lastIndexOf)
///
/// @param self QStringView*
/// @param c QChar*
/// @param from int64_t
/// @param cs enum Qt__CaseSensitivity
int64_t q_stringview_last_index_of32(void* self, void* c, int64_t from, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#indexOf)
///
/// @param self QStringView*
/// @param re QRegularExpression*
/// @param from int64_t
int64_t q_stringview_index_of25(void* self, void* re, int64_t from);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#indexOf)
///
/// @param self QStringView*
/// @param re QRegularExpression*
/// @param from int64_t
/// @param rmatch QRegularExpressionMatch*
int64_t q_stringview_index_of35(void* self, void* re, int64_t from, void* rmatch);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#lastIndexOf)
///
/// @param self QStringView*
/// @param re QRegularExpression*
/// @param from int64_t
/// @param rmatch QRegularExpressionMatch*
int64_t q_stringview_last_index_of35(void* self, void* re, int64_t from, void* rmatch);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#contains)
///
/// @param self QStringView*
/// @param re QRegularExpression*
/// @param rmatch QRegularExpressionMatch*
bool q_stringview_contains25(void* self, void* re, void* rmatch);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toShort)
///
/// @param self QStringView*
/// @param ok bool*
short q_stringview_to_short1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toShort)
///
/// @param self QStringView*
/// @param ok bool*
/// @param base int
short q_stringview_to_short2(void* self, bool* ok, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toUShort)
///
/// @param self QStringView*
/// @param ok bool*
unsigned short q_stringview_to_u_short1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toUShort)
///
/// @param self QStringView*
/// @param ok bool*
/// @param base int
unsigned short q_stringview_to_u_short2(void* self, bool* ok, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toInt)
///
/// @param self QStringView*
/// @param ok bool*
int32_t q_stringview_to_int1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toInt)
///
/// @param self QStringView*
/// @param ok bool*
/// @param base int
int32_t q_stringview_to_int2(void* self, bool* ok, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toUInt)
///
/// @param self QStringView*
/// @param ok bool*
uint32_t q_stringview_to_u_int1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toUInt)
///
/// @param self QStringView*
/// @param ok bool*
/// @param base int
uint32_t q_stringview_to_u_int2(void* self, bool* ok, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toLong)
///
/// @param self QStringView*
/// @param ok bool*
int64_t q_stringview_to_long1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toLong)
///
/// @param self QStringView*
/// @param ok bool*
/// @param base int
int64_t q_stringview_to_long2(void* self, bool* ok, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toULong)
///
/// @param self QStringView*
/// @param ok bool*
uint64_t q_stringview_to_u_long1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toULong)
///
/// @param self QStringView*
/// @param ok bool*
/// @param base int
uint64_t q_stringview_to_u_long2(void* self, bool* ok, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toLongLong)
///
/// @param self QStringView*
/// @param ok bool*
long long q_stringview_to_long_long1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toLongLong)
///
/// @param self QStringView*
/// @param ok bool*
/// @param base int
long long q_stringview_to_long_long2(void* self, bool* ok, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toULongLong)
///
/// @param self QStringView*
/// @param ok bool*
uint64_t q_stringview_to_u_long_long1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toULongLong)
///
/// @param self QStringView*
/// @param ok bool*
/// @param base int
uint64_t q_stringview_to_u_long_long2(void* self, bool* ok, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toFloat)
///
/// @param self QStringView*
/// @param ok bool*
float q_stringview_to_float1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#toDouble)
///
/// @param self QStringView*
/// @param ok bool*
double q_stringview_to_double1(void* self, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringview.html#dtor.QStringView)
///
/// Delete this object from C++ memory.
///
/// @param self QStringView*
void q_stringview_delete(void* self);

#endif
