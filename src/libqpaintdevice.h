#pragma once
#ifndef LIBQPAINTDEVICE_H
#define LIBQPAINTDEVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// @param self const QPaintDevice*
///
int32_t q_paintdevice_dev_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const QPaintDevice*
///
bool q_paintdevice_painting_active(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QPaintDevice*
///
QPaintEngine* q_paintdevice_paint_engine(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// @param self const QPaintDevice*
///
int32_t q_paintdevice_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// @param self const QPaintDevice*
///
int32_t q_paintdevice_height(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const QPaintDevice*
///
int32_t q_paintdevice_width_m_m(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const QPaintDevice*
///
int32_t q_paintdevice_height_m_m(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const QPaintDevice*
///
int32_t q_paintdevice_logical_dpi_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const QPaintDevice*
///
int32_t q_paintdevice_logical_dpi_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const QPaintDevice*
///
int32_t q_paintdevice_physical_dpi_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const QPaintDevice*
///
int32_t q_paintdevice_physical_dpi_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const QPaintDevice*
///
double q_paintdevice_device_pixel_ratio(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const QPaintDevice*
///
double q_paintdevice_device_pixel_ratio_f(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const QPaintDevice*
///
int32_t q_paintdevice_color_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const QPaintDevice*
///
int32_t q_paintdevice_depth(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_paintdevice_device_pixel_ratio_f_scale();

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_paintdevice_encode_metric_f(int32_t metric, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#dtor.QPaintDevice)
///
/// Delete this object from C++ memory.
///
/// @param self QPaintDevice*
///
void q_paintdevice_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#public-types)

typedef enum {
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMWIDTH = 1,
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMHEIGHT = 2,
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMWIDTHMM = 3,
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMHEIGHTMM = 4,
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMNUMCOLORS = 5,
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMDEPTH = 6,
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMDPIX = 7,
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMDPIY = 8,
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMPHYSICALDPIX = 9,
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMPHYSICALDPIY = 10,
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMDEVICEPIXELRATIO = 11,
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMDEVICEPIXELRATIOSCALED = 12,
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMDEVICEPIXELRATIOF_ENCODEDA = 13,
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMDEVICEPIXELRATIOF_ENCODEDB = 14
} QPaintDevice__PaintDeviceMetric;

#endif
