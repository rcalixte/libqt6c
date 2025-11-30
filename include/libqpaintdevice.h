#pragma once
#ifndef SRC_QT6C_LIBQPAINTDEVICE_H
#define SRC_QT6C_LIBQPAINTDEVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpaintdevice.html

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// @param self QPaintDevice*
int32_t q_paintdevice_dev_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QPaintDevice*
bool q_paintdevice_painting_active(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
///
/// @param self QPaintDevice*
QPaintEngine* q_paintdevice_paint_engine(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// @param self QPaintDevice*
int32_t q_paintdevice_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// @param self QPaintDevice*
int32_t q_paintdevice_height(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QPaintDevice*
int32_t q_paintdevice_width_m_m(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QPaintDevice*
int32_t q_paintdevice_height_m_m(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QPaintDevice*
int32_t q_paintdevice_logical_dpi_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QPaintDevice*
int32_t q_paintdevice_logical_dpi_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QPaintDevice*
int32_t q_paintdevice_physical_dpi_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QPaintDevice*
int32_t q_paintdevice_physical_dpi_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QPaintDevice*
double q_paintdevice_device_pixel_ratio(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QPaintDevice*
double q_paintdevice_device_pixel_ratio_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QPaintDevice*
int32_t q_paintdevice_color_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QPaintDevice*
int32_t q_paintdevice_depth(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_paintdevice_device_pixel_ratio_f_scale();

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t q_paintdevice_encode_metric_f(int32_t metric, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#dtor.QPaintDevice)
///
/// Delete this object from C++ memory.
///
/// @param self QPaintDevice*
void q_paintdevice_delete(void* self);

/// https://doc.qt.io/qt-6/qpaintdevice.html#types

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
