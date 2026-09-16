#pragma once
#ifndef QUICK_LIBQQUICKGRAPHICSDEVICE_H
#define QUICK_LIBQQUICKGRAPHICSDEVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsdevice.html)

/// q_quickgraphicsdevice_new constructs a new QQuickGraphicsDevice object.
///
QQuickGraphicsDevice* q_quickgraphicsdevice_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsdevice.html)

/// q_quickgraphicsdevice_new2 constructs a new QQuickGraphicsDevice object.
///
/// @param other QQuickGraphicsDevice*
///
QQuickGraphicsDevice* q_quickgraphicsdevice_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsdevice.html#operator-eq)
///
/// @param self QQuickGraphicsDevice*
/// @param other QQuickGraphicsDevice*
///
void q_quickgraphicsdevice_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsdevice.html#isNull)
///
/// @param self QQuickGraphicsDevice*
///
bool q_quickgraphicsdevice_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsdevice.html#fromOpenGLContext)
///
/// @param context QOpenGLContext*
///
QQuickGraphicsDevice* q_quickgraphicsdevice_from_open_g_l_context(void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsdevice.html#dtor.QQuickGraphicsDevice)
///
/// Delete this object from C++ memory.
///
/// @param self QQuickGraphicsDevice*
///
void q_quickgraphicsdevice_delete(void* self);

#endif
