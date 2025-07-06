#pragma once
#ifndef SRCQT6C_LIBQCOLORMAP_H
#define SRCQT6C_LIBQCOLORMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qcolormap.html

/// q_colormap_new constructs a new QColormap object.
///
/// ``` QColormap* colormap ```
QColormap* q_colormap_new(void* colormap);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#initialize)
///
///
void q_colormap_initialize();

/// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#cleanup)
///
///
void q_colormap_cleanup();

/// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#instance)
///
///
QColormap* q_colormap_instance();

/// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#operator=)
///
/// ``` QColormap* self, QColormap* colormap ```
void q_colormap_operator_assign(void* self, void* colormap);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#mode)
///
/// ``` QColormap* self ```
int64_t q_colormap_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#depth)
///
/// ``` QColormap* self ```
int32_t q_colormap_depth(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#size)
///
/// ``` QColormap* self ```
int32_t q_colormap_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#pixel)
///
/// ``` QColormap* self, QColor* color ```
uint32_t q_colormap_pixel(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#colorAt)
///
/// ``` QColormap* self, uint32_t pixel ```
const QColor* q_colormap_color_at(void* self, uint32_t pixel);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#colormap)
///
/// ``` QColormap* self ```
libqt_list /* of QColor* */ q_colormap_colormap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#instance)
///
/// ``` int screen ```
QColormap* q_colormap_instance1(int screen);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolormap.html#dtor.QColormap)
///
/// Delete this object from C++ memory.
///
/// ``` QColormap* self ```
void q_colormap_delete(void* self);

/// https://doc.qt.io/qt-6/qcolormap.html#types

typedef enum {
    QCOLORMAP_MODE_DIRECT = 0,
    QCOLORMAP_MODE_INDEXED = 1,
    QCOLORMAP_MODE_GRAY = 2
} QColormap__Mode;

#endif
