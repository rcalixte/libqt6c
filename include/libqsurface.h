#pragma once
#ifndef SRCQT6C_LIBQSURFACE_H
#define SRCQT6C_LIBQSURFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqsize.h"
#include "libqsurfaceformat.h"

/// https://doc.qt.io/qt-6/qsurface.html

/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
///
/// ``` QSurface* self ```
int64_t q_surface_surface_class(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#format)
///
/// ``` QSurface* self ```
QSurfaceFormat* q_surface_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#surfaceType)
///
/// ``` QSurface* self ```
int64_t q_surface_surface_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
///
/// ``` QSurface* self ```
bool q_surface_supports_open_g_l(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurface.html#size)
///
/// ``` QSurface* self ```
QSize* q_surface_size(void* self);

/// Delete this object from C++ memory.
///
/// ``` QSurface* self ```
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
