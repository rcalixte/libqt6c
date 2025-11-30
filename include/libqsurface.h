#pragma once
#ifndef SRC_QT6C_LIBQSURFACE_H
#define SRC_QT6C_LIBQSURFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qsurface.html

/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
///
/// @param self QSurface*
///
/// @return enum QSurface__SurfaceClass
int32_t q_surface_surface_class(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#format)
///
/// @param self QSurface*
QSurfaceFormat* q_surface_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#surfaceType)
///
/// @param self QSurface*
///
/// @return enum QSurface__SurfaceType
int32_t q_surface_surface_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
///
/// @param self QSurface*
bool q_surface_supports_open_g_l(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#size)
///
/// @param self QSurface*
QSize* q_surface_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#dtor.QSurface)
///
/// Delete this object from C++ memory.
///
/// @param self QSurface*
void q_surface_delete(void* self);

/// https://doc.qt.io/qt-6/qsurface.html#types

typedef enum {
    QSURFACE_SURFACECLASS_WINDOW = 0,
    QSURFACE_SURFACECLASS_OFFSCREEN = 1
} QSurface__SurfaceClass;

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
