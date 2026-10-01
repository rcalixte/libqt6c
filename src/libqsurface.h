#pragma once
#ifndef LIBQSURFACE_H
#define LIBQSURFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
///
/// @param self const QSurface*
///
/// @return enum QSurface__SurfaceClass
///
int32_t q_surface_surface_class(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#format)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QSurface*
///
QSurfaceFormat* q_surface_format(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#surfaceType)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QSurface*
///
/// @return enum QSurface__SurfaceType
///
int32_t q_surface_surface_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
///
/// @param self const QSurface*
///
bool q_surface_supports_open_g_l(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#size)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QSurface*
///
QSize* q_surface_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#operator-eq)
///
/// @param self QSurface*
/// @param param1 QSurface*
///
void q_surface_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#dtor.QSurface)
///
/// Delete this object from C++ memory.
///
/// @param self QSurface*
///
void q_surface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#public-types)

typedef enum {
    QSURFACE_SURFACECLASS_WINDOW = 0,
    QSURFACE_SURFACECLASS_OFFSCREEN = 1
} QSurface__SurfaceClass;

/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#public-types)

typedef enum {
    QSURFACE_SURFACETYPE_RASTERSURFACE = 0,
    QSURFACE_SURFACETYPE_OPENGLSURFACE = 1,
    QSURFACE_SURFACETYPE_RASTERGLSURFACE = 2,
    QSURFACE_SURFACETYPE_OPENVGSURFACE = 3,
    QSURFACE_SURFACETYPE_VULKANSURFACE = 4,
    QSURFACE_SURFACETYPE_METALSURFACE = 5,
    QSURFACE_SURFACETYPE_DIRECT3DSURFACE = 6
} QSurface__SurfaceType;

#endif
