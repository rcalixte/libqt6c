#pragma once
#ifndef SRCQT6C_LIBQSTRINGMATCHER_H
#define SRCQT6C_LIBQSTRINGMATCHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqchar.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qstringmatcher.html

/// q_stringmatcher_new constructs a new QStringMatcher object.
///
///
QStringMatcher* q_stringmatcher_new();

/// q_stringmatcher_new2 constructs a new QStringMatcher object.
///
/// ``` const char* pattern ```
QStringMatcher* q_stringmatcher_new2(const char* pattern);

/// q_stringmatcher_new3 constructs a new QStringMatcher object.
///
/// ``` QChar* uc, int64_t lenVal ```
QStringMatcher* q_stringmatcher_new3(void* uc, int64_t lenVal);

/// q_stringmatcher_new4 constructs a new QStringMatcher object.
///
/// ``` QStringMatcher* other ```
QStringMatcher* q_stringmatcher_new4(void* other);

/// q_stringmatcher_new5 constructs a new QStringMatcher object.
///
/// ``` const char* pattern, enum Qt__CaseSensitivity cs ```
QStringMatcher* q_stringmatcher_new5(const char* pattern, int64_t cs);

/// q_stringmatcher_new6 constructs a new QStringMatcher object.
///
/// ``` QChar* uc, int64_t lenVal, enum Qt__CaseSensitivity cs ```
QStringMatcher* q_stringmatcher_new6(void* uc, int64_t lenVal, int64_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringmatcher.html#operator=)
///
/// ``` QStringMatcher* self, QStringMatcher* other ```
void q_stringmatcher_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringmatcher.html#setPattern)
///
/// ``` QStringMatcher* self, const char* pattern ```
void q_stringmatcher_set_pattern(void* self, const char* pattern);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringmatcher.html#setCaseSensitivity)
///
/// ``` QStringMatcher* self, enum Qt__CaseSensitivity cs ```
void q_stringmatcher_set_case_sensitivity(void* self, int64_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringmatcher.html#indexIn)
///
/// ``` QStringMatcher* self, const char* str ```
int64_t q_stringmatcher_index_in(void* self, const char* str);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringmatcher.html#indexIn)
///
/// ``` QStringMatcher* self, QChar* str, int64_t length ```
int64_t q_stringmatcher_index_in2(void* self, void* str, int64_t length);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringmatcher.html#pattern)
///
/// ``` QStringMatcher* self ```
const char* q_stringmatcher_pattern(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringmatcher.html#caseSensitivity)
///
/// ``` QStringMatcher* self ```
int64_t q_stringmatcher_case_sensitivity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringmatcher.html#indexIn)
///
/// ``` QStringMatcher* self, const char* str, int64_t from ```
int64_t q_stringmatcher_index_in22(void* self, const char* str, int64_t from);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringmatcher.html#indexIn)
///
/// ``` QStringMatcher* self, QChar* str, int64_t length, int64_t from ```
int64_t q_stringmatcher_index_in3(void* self, void* str, int64_t length, int64_t from);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringmatcher.html#dtor.QStringMatcher)
///
/// Delete this object from C++ memory.
///
/// ``` QStringMatcher* self ```
void q_stringmatcher_delete(void* self);

#endif
