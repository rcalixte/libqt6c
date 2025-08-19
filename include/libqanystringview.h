#pragma once
#ifndef SRCQT6C_LIBQANYSTRINGVIEW_H
#define SRCQT6C_LIBQANYSTRINGVIEW_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qanystringview.html

/// q_anystringview_new constructs a new QAnyStringView object.
///
/// @param other const char*
QAnyStringView* q_anystringview_new(const char* other);

/// q_anystringview_new2 constructs a new QAnyStringView object and invalidates the source QAnyStringView object.
///
/// @param other char*
QAnyStringView* q_anystringview_new2(char* other);

/// q_anystringview_new3 constructs a new QAnyStringView object.
///
QAnyStringView* q_anystringview_new3();

/// q_anystringview_new4 constructs a new QAnyStringView object.
///
/// @param str const char*
QAnyStringView* q_anystringview_new4(const char* str);

/// q_anystringview_new5 constructs a new QAnyStringView object.
///
/// @param str const char*
QAnyStringView* q_anystringview_new5(const char* str);

/// q_anystringview_new6 constructs a new QAnyStringView object.
///
/// @param param1 const char*
QAnyStringView* q_anystringview_new6(const char* param1);

/// q_anystringview_copy_assign shallow copies `other` into `self`.
///
/// @param self QAnyStringView*
/// @param other QAnyStringView*
void q_anystringview_copy_assign(void* self, void* other);

/// q_anystringview_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QAnyStringView*
/// @param other QAnyStringView*
void q_anystringview_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#mid)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAnyStringView*
/// @param pos int64_t
char* q_anystringview_mid(void* self, int64_t pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#left)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAnyStringView*
/// @param n int64_t
char* q_anystringview_left(void* self, int64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#right)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAnyStringView*
/// @param n int64_t
char* q_anystringview_right(void* self, int64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#sliced)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAnyStringView*
/// @param pos int64_t
char* q_anystringview_sliced(void* self, int64_t pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#sliced)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAnyStringView*
/// @param pos int64_t
/// @param n int64_t
char* q_anystringview_sliced2(void* self, int64_t pos, int64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#first)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAnyStringView*
/// @param n int64_t
char* q_anystringview_first(void* self, int64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#last)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAnyStringView*
/// @param n int64_t
char* q_anystringview_last(void* self, int64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#chopped)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAnyStringView*
/// @param n int64_t
char* q_anystringview_chopped(void* self, int64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#slice)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAnyStringView*
/// @param pos int64_t
char* q_anystringview_slice(void* self, int64_t pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#slice)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAnyStringView*
/// @param pos int64_t
/// @param n int64_t
char* q_anystringview_slice2(void* self, int64_t pos, int64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#truncate)
///
/// @param self QAnyStringView*
/// @param n int64_t
void q_anystringview_truncate(void* self, int64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#chop)
///
/// @param self QAnyStringView*
/// @param n int64_t
void q_anystringview_chop(void* self, int64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAnyStringView*
const char* q_anystringview_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#size)
///
/// @param self QAnyStringView*
int64_t q_anystringview_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#data)
///
/// @param self QAnyStringView*
const void* q_anystringview_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#compare)
///
/// @param lhs char*
/// @param rhs char*
int32_t q_anystringview_compare(char* lhs, char* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#equal)
///
/// @param lhs char*
/// @param rhs char*
bool q_anystringview_equal(char* lhs, char* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#front)
///
/// @param self QAnyStringView*
QChar* q_anystringview_front(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#back)
///
/// @param self QAnyStringView*
QChar* q_anystringview_back(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#empty)
///
/// @param self QAnyStringView*
bool q_anystringview_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#size_bytes)
///
/// @param self QAnyStringView*
int64_t q_anystringview_size_bytes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#max_size)
///
/// @param self QAnyStringView*
int64_t q_anystringview_max_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#isNull)
///
/// @param self QAnyStringView*
bool q_anystringview_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#isEmpty)
///
/// @param self QAnyStringView*
bool q_anystringview_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#length)
///
/// @param self QAnyStringView*
int64_t q_anystringview_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#mid)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAnyStringView*
/// @param pos int64_t
/// @param n int64_t
char* q_anystringview_mid2(void* self, int64_t pos, int64_t n);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#compare)
///
/// @param lhs char*
/// @param rhs char*
/// @param cs enum Qt__CaseSensitivity
int32_t q_anystringview_compare3(char* lhs, char* rhs, int32_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#dtor.QAnyStringView)
///
/// Delete this object from C++ memory.
///
/// @param self QAnyStringView*
void q_anystringview_delete(void* self);

#endif
