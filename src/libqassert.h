#pragma once
#ifndef LIBQASSERT_H
#define LIBQASSERT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qassert.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qassert.html#qt_assert)
///
/// @param assertion const char*
/// @param file const char*
/// @param line int
///
void q_qassert_assert(const char* assertion, const char* file, int line);

/// [Upstream resources](https://doc.qt.io/qt-6/qassert.html#qt_assert_x)
///
/// @param where const char*
/// @param what const char*
/// @param file const char*
/// @param line int
///
void q_qassert_assert_x(const char* where, const char* what, const char* file, int line);

/// [Upstream resources](https://doc.qt.io/qt-6/qassert.html#qt_check_pointer)
///
/// @param param1 const char*
/// @param param2 int
///
void q_qassert_check_pointer(const char* param1, int param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qassert.html#qBadAlloc)
///
void q_qassert_q_bad_alloc();

/// [Upstream resources](https://doc.qt.io/qt-6/qassert.html#qt_assume_is_deprecated)
///
/// @param cond bool
///
bool q_qassert_assume_is_deprecated(bool cond);
#endif
