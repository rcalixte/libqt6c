#pragma once
#ifndef SRC_QT6C_LIBQANYSTRINGVIEW_H
#define SRC_QT6C_LIBQANYSTRINGVIEW_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#compare)
///
/// @param lhs const char*
/// @param rhs const char*
///
int32_t q_anystringview_compare(const char* lhs, const char* rhs);

/// [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#equal)
///
/// @param lhs const char*
/// @param rhs const char*
///
bool q_anystringview_equal(const char* lhs, const char* rhs);

/// [Upstream resources](https://doc.qt.io/qt-6/qanystringview.html#compare)
///
/// @param lhs const char*
/// @param rhs const char*
/// @param cs enum Qt__CaseSensitivity
///
int32_t q_anystringview_compare3(const char* lhs, const char* rhs, int32_t cs);
#endif
