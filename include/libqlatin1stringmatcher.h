#pragma once
#ifndef SRCQT6C_LIBQLATIN1STRINGMATCHER_H
#define SRCQT6C_LIBQLATIN1STRINGMATCHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qlatin1stringmatcher.html

/// q_latin1stringmatcher_new constructs a new QLatin1StringMatcher object.
///
///
QLatin1StringMatcher* q_latin1stringmatcher_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#setCaseSensitivity)
///
/// ``` QLatin1StringMatcher* self, enum Qt__CaseSensitivity cs ```
void q_latin1stringmatcher_set_case_sensitivity(void* self, int64_t cs);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#caseSensitivity)
///
/// ``` QLatin1StringMatcher* self ```
int64_t q_latin1stringmatcher_case_sensitivity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlatin1stringmatcher.html#dtor.QLatin1StringMatcher)
///
/// Delete this object from C++ memory.
///
/// ``` QLatin1StringMatcher* self ```
void q_latin1stringmatcher_delete(void* self);

#endif
