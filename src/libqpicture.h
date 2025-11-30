#pragma once
#ifndef SRC_QT6C_LIBQPICTURE_H
#define SRC_QT6C_LIBQPICTURE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpicture.html

/// q_picture_new constructs a new QPicture object.
///
QPicture* q_picture_new();

/// q_picture_new2 constructs a new QPicture object.
///
/// @param param1 QPicture*
QPicture* q_picture_new2(void* param1);

/// q_picture_new3 constructs a new QPicture object.
///
/// @param formatVersion int
QPicture* q_picture_new3(int formatVersion);

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#isNull)
///
/// @param self QPicture*
bool q_picture_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#devType)
///
/// @param self QPicture*
int32_t q_picture_dev_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#devType)
///
/// Allows for overriding the related default method
///
/// @param self QPicture*
/// @param callback int32_t func()
void q_picture_on_dev_type(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#devType)
///
/// Base class method implementation
///
/// @param self QPicture*
int32_t q_picture_qbase_dev_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#size)
///
/// @param self QPicture*
uint32_t q_picture_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#data)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPicture*
const char* q_picture_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#setData)
///
/// @param self QPicture*
/// @param data const char*
/// @param size uint32_t
void q_picture_set_data(void* self, const char* data, uint32_t size);

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#setData)
///
/// Allows for overriding the related default method
///
/// @param self QPicture*
/// @param callback void func(QPicture* self, const char* data, uint32_t size)
void q_picture_on_set_data(void* self, void (*callback)(void*, const char*, uint32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#setData)
///
/// Base class method implementation
///
/// @param self QPicture*
/// @param data const char*
/// @param size uint32_t
void q_picture_qbase_set_data(void* self, const char* data, uint32_t size);

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#play)
///
/// @param self QPicture*
/// @param p QPainter*
bool q_picture_play(void* self, void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#load)
///
/// @param self QPicture*
/// @param dev QIODevice*
bool q_picture_load(void* self, void* dev);

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#load)
///
/// @param self QPicture*
/// @param fileName const char*
bool q_picture_load2(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#save)
///
/// @param self QPicture*
/// @param dev QIODevice*
bool q_picture_save(void* self, void* dev);

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#save)
///
/// @param self QPicture*
/// @param fileName const char*
bool q_picture_save2(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#boundingRect)
///
/// @param self QPicture*
QRect* q_picture_bounding_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#setBoundingRect)
///
/// @param self QPicture*
/// @param r QRect*
void q_picture_set_bounding_rect(void* self, void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#operator-eq)
///
/// @param self QPicture*
/// @param p QPicture*
void q_picture_operator_assign(void* self, void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#swap)
///
/// @param self QPicture*
/// @param other QPicture*
void q_picture_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#detach)
///
/// @param self QPicture*
void q_picture_detach(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#isDetached)
///
/// @param self QPicture*
bool q_picture_is_detached(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#paintEngine)
///
/// @param self QPicture*
QPaintEngine* q_picture_paint_engine(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#paintEngine)
///
/// Allows for overriding the related default method
///
/// @param self QPicture*
/// @param callback QPaintEngine* func()
void q_picture_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#paintEngine)
///
/// Base class method implementation
///
/// @param self QPicture*
QPaintEngine* q_picture_qbase_paint_engine(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#metric)
///
/// @param self QPicture*
/// @param m enum QPaintDevice__PaintDeviceMetric
int32_t q_picture_metric(void* self, int32_t m);

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#metric)
///
/// Allows for overriding the related default method
///
/// @param self QPicture*
/// @param callback int32_t func(QPicture* self, enum QPaintDevice__PaintDeviceMetric m)
void q_picture_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#metric)
///
/// Base class method implementation
///
/// @param self QPicture*
/// @param m enum QPaintDevice__PaintDeviceMetric
int32_t q_picture_qbase_metric(void* self, int32_t m);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QPicture*
bool q_picture_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// @param self QPicture*
int32_t q_picture_width(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// @param self QPicture*
int32_t q_picture_height(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QPicture*
int32_t q_picture_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QPicture*
int32_t q_picture_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QPicture*
int32_t q_picture_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QPicture*
int32_t q_picture_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QPicture*
int32_t q_picture_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QPicture*
int32_t q_picture_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QPicture*
double q_picture_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QPicture*
double q_picture_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QPicture*
int32_t q_picture_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QPicture*
int32_t q_picture_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_picture_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t q_picture_encode_metric_f(int32_t metric, double value);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPicture*
/// @param painter QPainter*
void q_picture_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPicture*
/// @param painter QPainter*
void q_picture_qbase_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPicture*
/// @param callback void func(QPicture* self, QPainter* painter)
void q_picture_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPicture*
/// @param offset QPoint*
QPaintDevice* q_picture_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPicture*
/// @param offset QPoint*
QPaintDevice* q_picture_qbase_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPicture*
/// @param callback QPaintDevice* func(QPicture* self, QPoint* offset)
void q_picture_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPicture*
QPainter* q_picture_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPicture*
QPainter* q_picture_qbase_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPicture*
/// @param callback QPainter* func()
void q_picture_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPicture*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_picture_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPicture*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_picture_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPicture*
/// @param callback double func(QPicture* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void q_picture_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qpicture.html#dtor.QPicture)
///
/// Delete this object from C++ memory.
///
/// @param self QPicture*
void q_picture_delete(void* self);

#endif
