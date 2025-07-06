#pragma once
#ifndef SRCQT6C_LIBQPAINTDEVICE_H
#define SRCQT6C_LIBQPAINTDEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpaintdevice.html

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// ``` QPaintDevice* self ```
int32_t q_paintdevice_dev_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QPaintDevice* self ```
bool q_paintdevice_painting_active(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
///
/// ``` QPaintDevice* self ```
QPaintEngine* q_paintdevice_paint_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// ``` QPaintDevice* self ```
int32_t q_paintdevice_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// ``` QPaintDevice* self ```
int32_t q_paintdevice_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QPaintDevice* self ```
int32_t q_paintdevice_width_m_m(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QPaintDevice* self ```
int32_t q_paintdevice_height_m_m(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QPaintDevice* self ```
int32_t q_paintdevice_logical_dpi_x(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QPaintDevice* self ```
int32_t q_paintdevice_logical_dpi_y(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QPaintDevice* self ```
int32_t q_paintdevice_physical_dpi_x(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QPaintDevice* self ```
int32_t q_paintdevice_physical_dpi_y(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QPaintDevice* self ```
double q_paintdevice_device_pixel_ratio(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QPaintDevice* self ```
double q_paintdevice_device_pixel_ratio_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QPaintDevice* self ```
int32_t q_paintdevice_color_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QPaintDevice* self ```
int32_t q_paintdevice_depth(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_paintdevice_device_pixel_ratio_f_scale();

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// ``` enum QPaintDevice__PaintDeviceMetric metric, double value ```
int32_t q_paintdevice_encode_metric_f(int64_t metric, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#dtor.QPaintDevice)
///
/// Delete this object from C++ memory.
///
/// ``` QPaintDevice* self ```
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
