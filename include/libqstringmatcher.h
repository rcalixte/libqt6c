#pragma once
#ifndef LIBQSTRINGMATCHER_H
#define LIBQSTRINGMATCHER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
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
/// @param lenVal intptr_t
///
QStringMatcher* q_stringmatcher_new3(const void* uc, intptr_t lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html)

/// q_stringmatcher_new4 constructs a new QStringMatcher object.
///
/// @param pattern const char*
///
QStringMatcher* q_stringmatcher_new4(const char* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html)

/// q_stringmatcher_new5 constructs a new QStringMatcher object.
///
/// @param other QStringMatcher*
///
QStringMatcher* q_stringmatcher_new5(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html)

/// q_stringmatcher_new6 constructs a new QStringMatcher object.
///
/// @param pattern const char*
/// @param cs enum Qt__CaseSensitivity
///
QStringMatcher* q_stringmatcher_new6(const char* pattern, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html)

/// q_stringmatcher_new7 constructs a new QStringMatcher object.
///
/// @param uc QChar*
/// @param lenVal intptr_t
/// @param cs enum Qt__CaseSensitivity
///
QStringMatcher* q_stringmatcher_new7(const void* uc, intptr_t lenVal, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html)

/// q_stringmatcher_new8 constructs a new QStringMatcher object.
///
/// @param pattern const char*
/// @param cs enum Qt__CaseSensitivity
///
QStringMatcher* q_stringmatcher_new8(const char* pattern, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#operator-eq)
///
/// @param self QStringMatcher*
/// @param other QStringMatcher*
///
void q_stringmatcher_operator_assign(void* self, const void* other);

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
/// @param self const QStringMatcher*
/// @param str const char*
///
intptr_t q_stringmatcher_index_in(const void* self, const char* str);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#indexIn)
///
/// @param self const QStringMatcher*
/// @param str QChar*
/// @param length intptr_t
///
intptr_t q_stringmatcher_index_in2(const void* self, const void* str, intptr_t length);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#indexIn)
///
/// @param self const QStringMatcher*
/// @param str const char*
///
intptr_t q_stringmatcher_index_in3(const void* self, const char* str);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#pattern)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QStringMatcher*
///
const char* q_stringmatcher_pattern(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#patternView)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QStringMatcher*
///
const char* q_stringmatcher_pattern_view(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#caseSensitivity)
///
/// @param self const QStringMatcher*
///
/// @return enum Qt__CaseSensitivity
///
int32_t q_stringmatcher_case_sensitivity(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#indexIn)
///
/// @param self const QStringMatcher*
/// @param str const char*
/// @param from intptr_t
///
intptr_t q_stringmatcher_index_in22(const void* self, const char* str, intptr_t from);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#indexIn)
///
/// @param self const QStringMatcher*
/// @param str QChar*
/// @param length intptr_t
/// @param from intptr_t
///
intptr_t q_stringmatcher_index_in32(const void* self, const void* str, intptr_t length, intptr_t from);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#indexIn)
///
/// @param self const QStringMatcher*
/// @param str const char*
/// @param from intptr_t
///
intptr_t q_stringmatcher_index_in23(const void* self, const char* str, intptr_t from);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringmatcher.html#dtor.QStringMatcher)
///
/// Delete this object from C++ memory.
///
/// @param self QStringMatcher*
///
void q_stringmatcher_delete(void* self);

#endif
