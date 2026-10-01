#pragma once
#ifndef SVG_LIBQSVGGENERATOR_H
#define SVG_LIBQSVGGENERATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html)

/// q_svggenerator_new constructs a new QSvgGenerator object.
///
QSvgGenerator* q_svggenerator_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html)

/// q_svggenerator_new2 constructs a new QSvgGenerator object.
///
/// @param version enum QSvgGenerator__SvgVersion
///
QSvgGenerator* q_svggenerator_new2(int32_t version);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSvgGenerator*
///
const char* q_svggenerator_title(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setTitle)
///
/// @param self QSvgGenerator*
/// @param title const char*
///
void q_svggenerator_set_title(void* self, const char* title);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#description)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSvgGenerator*
///
const char* q_svggenerator_description(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setDescription)
///
/// @param self QSvgGenerator*
/// @param description const char*
///
void q_svggenerator_set_description(void* self, const char* description);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#size)
///
/// @param self const QSvgGenerator*
///
QSize* q_svggenerator_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setSize)
///
/// @param self QSvgGenerator*
/// @param size QSize*
///
void q_svggenerator_set_size(void* self, const void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#viewBox)
///
/// @param self const QSvgGenerator*
///
QRect* q_svggenerator_view_box(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#viewBoxF)
///
/// @param self const QSvgGenerator*
///
QRectF* q_svggenerator_view_box_f(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setViewBox)
///
/// @param self QSvgGenerator*
/// @param viewBox QRect*
///
void q_svggenerator_set_view_box(void* self, const void* viewBox);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setViewBox)
///
/// @param self QSvgGenerator*
/// @param viewBox QRectF*
///
void q_svggenerator_set_view_box2(void* self, const void* viewBox);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#fileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSvgGenerator*
///
const char* q_svggenerator_file_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setFileName)
///
/// @param self QSvgGenerator*
/// @param fileName const char*
///
void q_svggenerator_set_file_name(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#outputDevice)
///
/// @param self const QSvgGenerator*
///
QIODevice* q_svggenerator_output_device(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setOutputDevice)
///
/// @param self QSvgGenerator*
/// @param outputDevice QIODevice*
///
void q_svggenerator_set_output_device(void* self, void* outputDevice);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#setResolution)
///
/// @param self QSvgGenerator*
/// @param dpi int
///
void q_svggenerator_set_resolution(void* self, int dpi);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#resolution)
///
/// @param self const QSvgGenerator*
///
int32_t q_svggenerator_resolution(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#svgVersion)
///
/// @param self const QSvgGenerator*
///
/// @return enum QSvgGenerator__SvgVersion
///
int32_t q_svggenerator_svg_version(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#paintEngine)
///
/// @param self const QSvgGenerator*
///
QPaintEngine* q_svggenerator_paint_engine(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#paintEngine)
///
/// Allows for overriding the related default method
///
/// @param self QSvgGenerator*
/// @param callback QPaintEngine* func(const QSvgGenerator* self)
///
void q_svggenerator_on_paint_engine(void* self, QPaintEngine* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#paintEngine)
///
/// Base class method implementation
///
/// @param self const QSvgGenerator*
///
QPaintEngine* q_svggenerator_super_paint_engine(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#metric)
///
/// @param self const QSvgGenerator*
/// @param metric enum QPaintDevice__PaintDeviceMetric
///
int32_t q_svggenerator_metric(const void* self, int32_t metric);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#metric)
///
/// Allows for overriding the related default method
///
/// @param self QSvgGenerator*
/// @param callback int32_t func(const QSvgGenerator* self, enum QPaintDevice__PaintDeviceMetric metric)
///
void q_svggenerator_on_metric(void* self, int32_t (*callback)(const void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#metric)
///
/// Base class method implementation
///
/// @param self const QSvgGenerator*
/// @param metric enum QPaintDevice__PaintDeviceMetric
///
int32_t q_svggenerator_super_metric(const void* self, int32_t metric);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const QSvgGenerator*
///
bool q_svggenerator_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// @param self const QSvgGenerator*
///
int32_t q_svggenerator_width(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// @param self const QSvgGenerator*
///
int32_t q_svggenerator_height(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const QSvgGenerator*
///
int32_t q_svggenerator_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const QSvgGenerator*
///
int32_t q_svggenerator_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const QSvgGenerator*
///
int32_t q_svggenerator_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const QSvgGenerator*
///
int32_t q_svggenerator_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const QSvgGenerator*
///
int32_t q_svggenerator_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const QSvgGenerator*
///
int32_t q_svggenerator_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const QSvgGenerator*
///
double q_svggenerator_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const QSvgGenerator*
///
double q_svggenerator_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const QSvgGenerator*
///
int32_t q_svggenerator_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const QSvgGenerator*
///
int32_t q_svggenerator_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_svggenerator_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_svggenerator_encode_metric_f(int32_t metric, double value);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSvgGenerator*
///
int32_t q_svggenerator_dev_type(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSvgGenerator*
///
int32_t q_svggenerator_super_dev_type(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSvgGenerator*
/// @param callback int32_t func(QSvgGenerator* self)
///
void q_svggenerator_on_dev_type(void* self, int32_t (*callback)(const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSvgGenerator*
/// @param painter QPainter*
///
void q_svggenerator_init_painter(const void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSvgGenerator*
/// @param painter QPainter*
///
void q_svggenerator_super_init_painter(const void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSvgGenerator*
/// @param callback void func(QSvgGenerator* self, QPainter* painter)
///
void q_svggenerator_on_init_painter(void* self, void (*callback)(const void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSvgGenerator*
/// @param offset QPoint*
///
QPaintDevice* q_svggenerator_redirected(const void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSvgGenerator*
/// @param offset QPoint*
///
QPaintDevice* q_svggenerator_super_redirected(const void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSvgGenerator*
/// @param callback QPaintDevice* func(QSvgGenerator* self, QPoint* offset)
///
void q_svggenerator_on_redirected(void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSvgGenerator*
///
QPainter* q_svggenerator_shared_painter(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSvgGenerator*
///
QPainter* q_svggenerator_super_shared_painter(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSvgGenerator*
/// @param callback QPainter* func(QSvgGenerator* self)
///
void q_svggenerator_on_shared_painter(void* self, QPainter* (*callback)(const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSvgGenerator*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_svggenerator_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSvgGenerator*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_svggenerator_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSvgGenerator*
/// @param callback double func(QSvgGenerator* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_svggenerator_on_get_decoded_metric_f(void* self, double (*callback)(const void*, int32_t, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#dtor.QSvgGenerator)
///
/// Delete this object from C++ memory.
///
/// @param self QSvgGenerator*
///
void q_svggenerator_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsvggenerator.html#public-types)

typedef enum {
    QSVGGENERATOR_SVGVERSION_SVGTINY12 = 0,
    QSVGGENERATOR_SVGVERSION_SVG11 = 1
} QSvgGenerator__SvgVersion;

#endif
