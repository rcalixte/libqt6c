#pragma once
#ifndef SRC_OPENGL_QT6C_LIBQOPENGLPAINTDEVICE_H
#define SRC_OPENGL_QT6C_LIBQOPENGLPAINTDEVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qopenglpaintdevice.html

/// q_openglpaintdevice_new constructs a new QOpenGLPaintDevice object.
///
QOpenGLPaintDevice* q_openglpaintdevice_new();

/// q_openglpaintdevice_new2 constructs a new QOpenGLPaintDevice object.
///
/// @param size QSize*
QOpenGLPaintDevice* q_openglpaintdevice_new2(void* size);

/// q_openglpaintdevice_new3 constructs a new QOpenGLPaintDevice object.
///
/// @param width int
/// @param height int
QOpenGLPaintDevice* q_openglpaintdevice_new3(int width, int height);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#devType)
///
/// @param self QOpenGLPaintDevice*
int32_t q_openglpaintdevice_dev_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#devType)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLPaintDevice*
/// @param callback int32_t func()
void q_openglpaintdevice_on_dev_type(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#devType)
///
/// Base class method implementation
///
/// @param self QOpenGLPaintDevice*
int32_t q_openglpaintdevice_qbase_dev_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#paintEngine)
///
/// @param self QOpenGLPaintDevice*
QPaintEngine* q_openglpaintdevice_paint_engine(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#paintEngine)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLPaintDevice*
/// @param callback QPaintEngine* func()
void q_openglpaintdevice_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#paintEngine)
///
/// Base class method implementation
///
/// @param self QOpenGLPaintDevice*
QPaintEngine* q_openglpaintdevice_qbase_paint_engine(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#context)
///
/// @param self QOpenGLPaintDevice*
QOpenGLContext* q_openglpaintdevice_context(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#size)
///
/// @param self QOpenGLPaintDevice*
QSize* q_openglpaintdevice_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setSize)
///
/// @param self QOpenGLPaintDevice*
/// @param size QSize*
void q_openglpaintdevice_set_size(void* self, void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setDevicePixelRatio)
///
/// @param self QOpenGLPaintDevice*
/// @param devicePixelRatio double
void q_openglpaintdevice_set_device_pixel_ratio(void* self, double devicePixelRatio);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#dotsPerMeterX)
///
/// @param self QOpenGLPaintDevice*
double q_openglpaintdevice_dots_per_meter_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#dotsPerMeterY)
///
/// @param self QOpenGLPaintDevice*
double q_openglpaintdevice_dots_per_meter_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setDotsPerMeterX)
///
/// @param self QOpenGLPaintDevice*
/// @param dotsPerMeterX double
void q_openglpaintdevice_set_dots_per_meter_x(void* self, double dotsPerMeterX);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setDotsPerMeterY)
///
/// @param self QOpenGLPaintDevice*
/// @param dotsPerMeterY double
void q_openglpaintdevice_set_dots_per_meter_y(void* self, double dotsPerMeterY);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setPaintFlipped)
///
/// @param self QOpenGLPaintDevice*
/// @param flipped bool
void q_openglpaintdevice_set_paint_flipped(void* self, bool flipped);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#paintFlipped)
///
/// @param self QOpenGLPaintDevice*
bool q_openglpaintdevice_paint_flipped(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#ensureActiveTarget)
///
/// @param self QOpenGLPaintDevice*
void q_openglpaintdevice_ensure_active_target(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#ensureActiveTarget)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLPaintDevice*
/// @param callback void func()
void q_openglpaintdevice_on_ensure_active_target(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#ensureActiveTarget)
///
/// Base class method implementation
///
/// @param self QOpenGLPaintDevice*
void q_openglpaintdevice_qbase_ensure_active_target(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#metric)
///
/// @param self QOpenGLPaintDevice*
/// @param metric enum QPaintDevice__PaintDeviceMetric
int32_t q_openglpaintdevice_metric(void* self, int32_t metric);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#metric)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLPaintDevice*
/// @param callback int32_t func(QOpenGLPaintDevice* self, enum QPaintDevice__PaintDeviceMetric metric)
void q_openglpaintdevice_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#metric)
///
/// Base class method implementation
///
/// @param self QOpenGLPaintDevice*
/// @param metric enum QPaintDevice__PaintDeviceMetric
int32_t q_openglpaintdevice_qbase_metric(void* self, int32_t metric);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QOpenGLPaintDevice*
bool q_openglpaintdevice_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// @param self QOpenGLPaintDevice*
int32_t q_openglpaintdevice_width(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// @param self QOpenGLPaintDevice*
int32_t q_openglpaintdevice_height(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QOpenGLPaintDevice*
int32_t q_openglpaintdevice_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QOpenGLPaintDevice*
int32_t q_openglpaintdevice_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QOpenGLPaintDevice*
int32_t q_openglpaintdevice_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QOpenGLPaintDevice*
int32_t q_openglpaintdevice_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QOpenGLPaintDevice*
int32_t q_openglpaintdevice_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QOpenGLPaintDevice*
int32_t q_openglpaintdevice_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QOpenGLPaintDevice*
double q_openglpaintdevice_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QOpenGLPaintDevice*
double q_openglpaintdevice_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QOpenGLPaintDevice*
int32_t q_openglpaintdevice_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QOpenGLPaintDevice*
int32_t q_openglpaintdevice_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_openglpaintdevice_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t q_openglpaintdevice_encode_metric_f(int32_t metric, double value);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLPaintDevice*
/// @param painter QPainter*
void q_openglpaintdevice_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLPaintDevice*
/// @param painter QPainter*
void q_openglpaintdevice_qbase_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLPaintDevice*
/// @param callback void func(QOpenGLPaintDevice* self, QPainter* painter)
void q_openglpaintdevice_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLPaintDevice*
/// @param offset QPoint*
QPaintDevice* q_openglpaintdevice_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLPaintDevice*
/// @param offset QPoint*
QPaintDevice* q_openglpaintdevice_qbase_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLPaintDevice*
/// @param callback QPaintDevice* func(QOpenGLPaintDevice* self, QPoint* offset)
void q_openglpaintdevice_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLPaintDevice*
QPainter* q_openglpaintdevice_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLPaintDevice*
QPainter* q_openglpaintdevice_qbase_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLPaintDevice*
/// @param callback QPainter* func()
void q_openglpaintdevice_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLPaintDevice*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_openglpaintdevice_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLPaintDevice*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_openglpaintdevice_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLPaintDevice*
/// @param callback double func(QOpenGLPaintDevice* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void q_openglpaintdevice_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#dtor.QOpenGLPaintDevice)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLPaintDevice*
void q_openglpaintdevice_delete(void* self);

#endif
