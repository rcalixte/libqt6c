#pragma once
#ifndef SRC_QT6C_LIBQLATIN1STRINGMATCHER_H
#define SRC_QT6C_LIBQLATIN1STRINGMATCHER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html)

/// q_latin1stringmatcher_new constructs a new QLatin1StringMatcher object.
///
QLatin1StringMatcher* q_latin1stringmatcher_new();

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

/// [Upstream resources](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#dtor.QLatin1StringMatcher)
///
/// Delete this object from C++ memory.
///
/// @param self QLatin1StringMatcher*
///
void q_latin1stringmatcher_delete(void* self);

#endif
