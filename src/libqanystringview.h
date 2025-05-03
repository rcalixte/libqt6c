#pragma once
#ifndef SRCQT6C_LIBQANYSTRINGVIEW_H
#define SRCQT6C_LIBQANYSTRINGVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqchar.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qanystringview.html

/// q_anystringview_new constructs a new QAnyStringView object.
///
/// ``` const char* other ```
QAnyStringView* q_anystringview_new(const char* other);

/// q_anystringview_new2 constructs a new QAnyStringView object and invalidates the source QAnyStringView object.
///
/// ``` char* other ```
QAnyStringView* q_anystringview_new2(char* other);

/// q_anystringview_new3 constructs a new QAnyStringView object.
///
///
QAnyStringView* q_anystringview_new3();

/// q_anystringview_new4 constructs a new QAnyStringView object.
///
/// ``` const char* str ```
QAnyStringView* q_anystringview_new4(const char* str);

/// q_anystringview_new5 constructs a new QAnyStringView object.
///
/// ``` const char* str ```
QAnyStringView* q_anystringview_new5(const char* str);

/// q_anystringview_new6 constructs a new QAnyStringView object.
///
/// ``` QChar* c ```
QAnyStringView* q_anystringview_new6(void* c);

/// q_anystringview_new7 constructs a new QAnyStringView object.
///
/// ``` const char* param1 ```
QAnyStringView* q_anystringview_new7(const char* param1);

/// q_anystringview_copy_assign shallow copies `other` into `self`.
///
/// ``` QAnyStringView* self, QAnyStringView* other ```
void q_anystringview_copy_assign(void* self, void* other);

/// q_anystringview_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QAnyStringView* self, QAnyStringView* other ```
void q_anystringview_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#toString)
///
/// ``` QAnyStringView* self ```
const char* q_anystringview_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#size)
///
/// ``` QAnyStringView* self ```
int64_t q_anystringview_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#data)
///
/// ``` QAnyStringView* self ```
void* q_anystringview_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#compare)
///
/// ``` char* lhs, char* rhs ```
int32_t q_anystringview_compare(char* lhs, char* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#equal)
///
/// ``` char* lhs, char* rhs ```
bool q_anystringview_equal(char* lhs, char* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#front)
///
/// ``` QAnyStringView* self ```
QChar* q_anystringview_front(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#back)
///
/// ``` QAnyStringView* self ```
QChar* q_anystringview_back(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#empty)
///
/// ``` QAnyStringView* self ```
bool q_anystringview_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#size_bytes)
///
/// ``` QAnyStringView* self ```
int64_t q_anystringview_size_bytes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#isNull)
///
/// ``` QAnyStringView* self ```
bool q_anystringview_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#isEmpty)
///
/// ``` QAnyStringView* self ```
bool q_anystringview_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#length)
///
/// ``` QAnyStringView* self ```
int64_t q_anystringview_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#compare)
///
/// ``` char* lhs, char* rhs, enum Qt__CaseSensitivity cs ```
int32_t q_anystringview_compare3(char* lhs, char* rhs, int64_t cs);

/// Delete this object from C++ memory.
///
/// ``` QAnyStringView* self ```
void q_anystringview_delete(void* self);

#endif
