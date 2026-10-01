#pragma once
#ifndef LIBQCOLORMAP_H
#define LIBQCOLORMAP_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html)

/// q_colormap_new constructs a new QColormap object.
///
/// @param colormap QColormap*
///
QColormap* q_colormap_new(const void* colormap);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#initialize)
///
void q_colormap_initialize();

/// [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#cleanup)
///
void q_colormap_cleanup();

/// [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#instance)
///
QColormap* q_colormap_instance();

/// [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#operator-eq)
///
/// @param self QColormap*
/// @param colormap QColormap*
///
void q_colormap_operator_assign(void* self, const void* colormap);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#mode)
///
/// @param self const QColormap*
///
/// @return enum QColormap__Mode
///
int32_t q_colormap_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#depth)
///
/// @param self const QColormap*
///
int32_t q_colormap_depth(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#size)
///
/// @param self const QColormap*
///
int32_t q_colormap_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#pixel)
///
/// @param self const QColormap*
/// @param color QColor*
///
uint32_t q_colormap_pixel(const void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#colorAt)
///
/// @param self const QColormap*
/// @param pixel uint32_t
///
const QColor* q_colormap_color_at(const void* self, uint32_t pixel);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#colormap)
///
/// @param self const QColormap*
///
/// @return libqt_list of QColor*
///
libqt_list q_colormap_colormap(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#instance)
///
/// @param screen int
///
QColormap* q_colormap_instance1(int screen);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#dtor.QColormap)
///
/// Delete this object from C++ memory.
///
/// @param self QColormap*
///
void q_colormap_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolormap.html#public-types)

typedef enum {
    QCOLORMAP_MODE_DIRECT = 0,
    QCOLORMAP_MODE_INDEXED = 1,
    QCOLORMAP_MODE_GRAY = 2
} QColormap__Mode;

#endif
