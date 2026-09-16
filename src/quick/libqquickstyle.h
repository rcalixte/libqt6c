#pragma once
#ifndef QUICK_LIBQQUICKSTYLE_H
#define QUICK_LIBQQUICKSTYLE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qquickstyle.html)

/// q_quickstyle_new constructs a new QQuickStyle object.
///
/// @param other QQuickStyle*
///
QQuickStyle* q_quickstyle_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickstyle.html)

/// q_quickstyle_new2 constructs a new QQuickStyle object and invalidates the source QQuickStyle object.
///
/// @param other QQuickStyle*
///
QQuickStyle* q_quickstyle_new2(void* other);

/// q_quickstyle_copy_assign shallow copies `other` into `self`.
///
/// @param self QQuickStyle*
/// @param other QQuickStyle*
///
void q_quickstyle_copy_assign(void* self, void* other);

/// q_quickstyle_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QQuickStyle*
/// @param other QQuickStyle*
///
void q_quickstyle_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickstyle.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_quickstyle_name();

/// [Upstream resources](https://doc.qt.io/qt-6/qquickstyle.html#setStyle)
///
/// @param style const char*
///
void q_quickstyle_set_style(const char* style);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickstyle.html#setFallbackStyle)
///
/// @param style const char*
///
void q_quickstyle_set_fallback_style(const char* style);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickstyle.html#dtor.QQuickStyle)
///
/// Delete this object from C++ memory.
///
/// @param self QQuickStyle*
///
void q_quickstyle_delete(void* self);

#endif
