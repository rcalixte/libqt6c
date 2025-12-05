#pragma once
#ifndef SRC_QT6C_LIBQSTRINGMATCHER_H
#define SRC_QT6C_LIBQSTRINGMATCHER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html)

/// q_stringmatcher_new constructs a new QStringMatcher object.
///
QStringMatcher* q_stringmatcher_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html)

/// q_stringmatcher_new2 constructs a new QStringMatcher object.
///
/// @param pattern const char*
///
QStringMatcher* q_stringmatcher_new2(const char* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html)

/// q_stringmatcher_new3 constructs a new QStringMatcher object.
///
/// @param uc QChar*
/// @param lenVal int64_t
///
QStringMatcher* q_stringmatcher_new3(void* uc, int64_t lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html)

/// q_stringmatcher_new4 constructs a new QStringMatcher object.
///
/// @param other QStringMatcher*
///
QStringMatcher* q_stringmatcher_new4(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html)

/// q_stringmatcher_new5 constructs a new QStringMatcher object.
///
/// @param pattern const char*
/// @param cs enum Qt__CaseSensitivity
///
QStringMatcher* q_stringmatcher_new5(const char* pattern, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html)

/// q_stringmatcher_new6 constructs a new QStringMatcher object.
///
/// @param uc QChar*
/// @param lenVal int64_t
/// @param cs enum Qt__CaseSensitivity
///
QStringMatcher* q_stringmatcher_new6(void* uc, int64_t lenVal, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#operator-eq)
///
/// @param self QStringMatcher*
/// @param other QStringMatcher*
///
void q_stringmatcher_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#setPattern)
///
/// @param self QStringMatcher*
/// @param pattern const char*
///
void q_stringmatcher_set_pattern(void* self, const char* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#setCaseSensitivity)
///
/// @param self QStringMatcher*
/// @param cs enum Qt__CaseSensitivity
///
void q_stringmatcher_set_case_sensitivity(void* self, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#indexIn)
///
/// @param self QStringMatcher*
/// @param str const char*
///
int64_t q_stringmatcher_index_in(void* self, const char* str);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#indexIn)
///
/// @param self QStringMatcher*
/// @param str QChar*
/// @param length int64_t
///
int64_t q_stringmatcher_index_in2(void* self, void* str, int64_t length);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#pattern)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStringMatcher*
///
const char* q_stringmatcher_pattern(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#caseSensitivity)
///
/// @param self QStringMatcher*
///
/// @return enum Qt__CaseSensitivity
///
int32_t q_stringmatcher_case_sensitivity(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#indexIn)
///
/// @param self QStringMatcher*
/// @param str const char*
/// @param from int64_t
///
int64_t q_stringmatcher_index_in22(void* self, const char* str, int64_t from);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#indexIn)
///
/// @param self QStringMatcher*
/// @param str QChar*
/// @param length int64_t
/// @param from int64_t
///
int64_t q_stringmatcher_index_in32(void* self, void* str, int64_t length, int64_t from);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#dtor.QStringMatcher)
///
/// Delete this object from C++ memory.
///
/// @param self QStringMatcher*
///
void q_stringmatcher_delete(void* self);

#endif
