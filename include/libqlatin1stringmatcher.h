#pragma once
#ifndef SRC_QT6C_LIBQLATIN1STRINGMATCHER_H
#define SRC_QT6C_LIBQLATIN1STRINGMATCHER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html)

/// q_latin1stringmatcher_new constructs a new QLatin1StringMatcher object.
///
QLatin1StringMatcher* q_latin1stringmatcher_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html)

/// q_latin1stringmatcher_new2 constructs a new QLatin1StringMatcher object.
///
/// @param pattern const char*
///
QLatin1StringMatcher* q_latin1stringmatcher_new2(const char* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html)

/// q_latin1stringmatcher_new3 constructs a new QLatin1StringMatcher object.
///
/// @param pattern const char*
/// @param cs enum Qt__CaseSensitivity
///
QLatin1StringMatcher* q_latin1stringmatcher_new3(const char* pattern, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#setPattern)
///
/// @param self QLatin1StringMatcher*
/// @param pattern const char*
///
void q_latin1stringmatcher_set_pattern(void* self, const char* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#pattern)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QLatin1StringMatcher*
///
const char* q_latin1stringmatcher_pattern(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#setCaseSensitivity)
///
/// @param self QLatin1StringMatcher*
/// @param cs enum Qt__CaseSensitivity
///
void q_latin1stringmatcher_set_case_sensitivity(void* self, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#caseSensitivity)
///
/// @param self QLatin1StringMatcher*
///
/// @return enum Qt__CaseSensitivity
///
int32_t q_latin1stringmatcher_case_sensitivity(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#indexIn)
///
/// @param self QLatin1StringMatcher*
/// @param haystack const char*
///
intptr_t q_latin1stringmatcher_index_in(void* self, const char* haystack);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#indexIn)
///
/// @param self QLatin1StringMatcher*
/// @param haystack const char*
/// @param from intptr_t
///
intptr_t q_latin1stringmatcher_index_in22(void* self, const char* haystack, intptr_t from);

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#dtor.QLatin1StringMatcher)
///
/// Delete this object from C++ memory.
///
/// @param self QLatin1StringMatcher*
///
void q_latin1stringmatcher_delete(void* self);

#endif
