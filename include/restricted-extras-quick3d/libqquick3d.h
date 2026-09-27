#pragma once
#ifndef RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3D_H
#define RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3D_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3d.html)

/// q_quick3d_new constructs a new QQuick3D object.
///
/// @param other QQuick3D*
///
QQuick3D* q_quick3d_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3d.html)

/// q_quick3d_new2 constructs a new QQuick3D object and invalidates the source QQuick3D object.
///
/// @param other QQuick3D*
///
QQuick3D* q_quick3d_new2(void* other);

/// q_quick3d_copy_assign shallow copies `other` into `self`.
///
/// @param self QQuick3D*
/// @param other QQuick3D*
///
void q_quick3d_copy_assign(void* self, void* other);

/// q_quick3d_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QQuick3D*
/// @param other QQuick3D*
///
void q_quick3d_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3d.html#idealSurfaceFormat)
///
QSurfaceFormat* q_quick3d_ideal_surface_format();

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3d.html#idealSurfaceFormat)
///
/// @param samples int
///
QSurfaceFormat* q_quick3d_ideal_surface_format1(int samples);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3d.html#dtor.QQuick3D)
///
/// Delete this object from C++ memory.
///
/// @param self QQuick3D*
///
void q_quick3d_delete(void* self);

#endif
