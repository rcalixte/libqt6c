#pragma once
#ifndef OPENGL_LIBQOPENGLPAINTDEVICE_H
#define OPENGL_LIBQOPENGLPAINTDEVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html)

/// q_openglpaintdevice_new constructs a new QOpenGLPaintDevice object.
///
QOpenGLPaintDevice* q_openglpaintdevice_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html)

/// q_openglpaintdevice_new2 constructs a new QOpenGLPaintDevice object.
///
/// @param size QSize*
///
QOpenGLPaintDevice* q_openglpaintdevice_new2(const void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html)

/// q_openglpaintdevice_new3 constructs a new QOpenGLPaintDevice object.
///
/// @param width int
/// @param height int
///
QOpenGLPaintDevice* q_openglpaintdevice_new3(int width, int height);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#devType)
///
/// @param self const QOpenGLPaintDevice*
///
int32_t q_openglpaintdevice_dev_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#devType)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLPaintDevice*
/// @param callback int32_t func(const QOpenGLPaintDevice* self)
///
void q_openglpaintdevice_on_dev_type(void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#devType)
///
/// Base class method implementation
///
/// @param self const QOpenGLPaintDevice*
///
int32_t q_openglpaintdevice_super_dev_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#paintEngine)
///
/// @param self const QOpenGLPaintDevice*
///
QPaintEngine* q_openglpaintdevice_paint_engine(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#paintEngine)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLPaintDevice*
/// @param callback QPaintEngine* func(const QOpenGLPaintDevice* self)
///
void q_openglpaintdevice_on_paint_engine(void* self, QPaintEngine* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#paintEngine)
///
/// Base class method implementation
///
/// @param self const QOpenGLPaintDevice*
///
QPaintEngine* q_openglpaintdevice_super_paint_engine(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#context)
///
/// @param self const QOpenGLPaintDevice*
///
QOpenGLContext* q_openglpaintdevice_context(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#size)
///
/// @param self const QOpenGLPaintDevice*
///
QSize* q_openglpaintdevice_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setSize)
///
/// @param self QOpenGLPaintDevice*
/// @param size QSize*
///
void q_openglpaintdevice_set_size(void* self, const void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setDevicePixelRatio)
///
/// @param self QOpenGLPaintDevice*
/// @param devicePixelRatio double
///
void q_openglpaintdevice_set_device_pixel_ratio(void* self, double devicePixelRatio);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#dotsPerMeterX)
///
/// @param self const QOpenGLPaintDevice*
///
double q_openglpaintdevice_dots_per_meter_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#dotsPerMeterY)
///
/// @param self const QOpenGLPaintDevice*
///
double q_openglpaintdevice_dots_per_meter_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setDotsPerMeterX)
///
/// @param self QOpenGLPaintDevice*
/// @param dotsPerMeterX double
///
void q_openglpaintdevice_set_dots_per_meter_x(void* self, double dotsPerMeterX);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setDotsPerMeterY)
///
/// @param self QOpenGLPaintDevice*
/// @param dotsPerMeterY double
///
void q_openglpaintdevice_set_dots_per_meter_y(void* self, double dotsPerMeterY);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#setPaintFlipped)
///
/// @param self QOpenGLPaintDevice*
/// @param flipped bool
///
void q_openglpaintdevice_set_paint_flipped(void* self, bool flipped);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#paintFlipped)
///
/// @param self const QOpenGLPaintDevice*
///
bool q_openglpaintdevice_paint_flipped(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#ensureActiveTarget)
///
/// @param self QOpenGLPaintDevice*
///
void q_openglpaintdevice_ensure_active_target(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#ensureActiveTarget)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLPaintDevice*
/// @param callback void func(QOpenGLPaintDevice* self)
///
void q_openglpaintdevice_on_ensure_active_target(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#ensureActiveTarget)
///
/// Base class method implementation
///
/// @param self QOpenGLPaintDevice*
///
void q_openglpaintdevice_super_ensure_active_target(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#metric)
///
/// @param self const QOpenGLPaintDevice*
/// @param metric enum QPaintDevice__PaintDeviceMetric
///
int32_t q_openglpaintdevice_metric(const void* self, int32_t metric);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#metric)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLPaintDevice*
/// @param callback int32_t func(const QOpenGLPaintDevice* self, enum QPaintDevice__PaintDeviceMetric metric)
///
void q_openglpaintdevice_on_metric(void* self, int32_t (*callback)(const void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#metric)
///
/// Base class method implementation
///
/// @param self const QOpenGLPaintDevice*
/// @param metric enum QPaintDevice__PaintDeviceMetric
///
int32_t q_openglpaintdevice_super_metric(const void* self, int32_t metric);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const QOpenGLPaintDevice*
///
bool q_openglpaintdevice_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// @param self const QOpenGLPaintDevice*
///
int32_t q_openglpaintdevice_width(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// @param self const QOpenGLPaintDevice*
///
int32_t q_openglpaintdevice_height(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const QOpenGLPaintDevice*
///
int32_t q_openglpaintdevice_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const QOpenGLPaintDevice*
///
int32_t q_openglpaintdevice_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const QOpenGLPaintDevice*
///
int32_t q_openglpaintdevice_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const QOpenGLPaintDevice*
///
int32_t q_openglpaintdevice_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const QOpenGLPaintDevice*
///
int32_t q_openglpaintdevice_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const QOpenGLPaintDevice*
///
int32_t q_openglpaintdevice_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const QOpenGLPaintDevice*
///
double q_openglpaintdevice_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const QOpenGLPaintDevice*
///
double q_openglpaintdevice_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const QOpenGLPaintDevice*
///
int32_t q_openglpaintdevice_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const QOpenGLPaintDevice*
///
int32_t q_openglpaintdevice_depth(const void* self);

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
///
int32_t q_openglpaintdevice_encode_metric_f(int32_t metric, double value);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QOpenGLPaintDevice*
/// @param painter QPainter*
///
void q_openglpaintdevice_init_painter(const void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QOpenGLPaintDevice*
/// @param painter QPainter*
///
void q_openglpaintdevice_super_init_painter(const void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLPaintDevice*
/// @param callback void func(QOpenGLPaintDevice* self, QPainter* painter)
///
void q_openglpaintdevice_on_init_painter(void* self, void (*callback)(const void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QOpenGLPaintDevice*
/// @param offset QPoint*
///
QPaintDevice* q_openglpaintdevice_redirected(const void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QOpenGLPaintDevice*
/// @param offset QPoint*
///
QPaintDevice* q_openglpaintdevice_super_redirected(const void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLPaintDevice*
/// @param callback QPaintDevice* func(QOpenGLPaintDevice* self, QPoint* offset)
///
void q_openglpaintdevice_on_redirected(void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QOpenGLPaintDevice*
///
QPainter* q_openglpaintdevice_shared_painter(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QOpenGLPaintDevice*
///
QPainter* q_openglpaintdevice_super_shared_painter(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLPaintDevice*
/// @param callback QPainter* func(QOpenGLPaintDevice* self)
///
void q_openglpaintdevice_on_shared_painter(void* self, QPainter* (*callback)(const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QOpenGLPaintDevice*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_openglpaintdevice_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QOpenGLPaintDevice*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_openglpaintdevice_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLPaintDevice*
/// @param callback double func(QOpenGLPaintDevice* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_openglpaintdevice_on_get_decoded_metric_f(void* self, double (*callback)(const void*, int32_t, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglpaintdevice.html#dtor.QOpenGLPaintDevice)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLPaintDevice*
///
void q_openglpaintdevice_delete(void* self);

#endif
