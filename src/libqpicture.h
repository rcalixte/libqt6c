#pragma once
#ifndef SRCQT6C_LIBQPICTURE_H
#define SRCQT6C_LIBQPICTURE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpicture.html

/// q_picture_new constructs a new QPicture object.
///
///
QPicture* q_picture_new();

/// q_picture_new2 constructs a new QPicture object.
///
/// ``` QPicture* param1 ```
QPicture* q_picture_new2(void* param1);

/// q_picture_new3 constructs a new QPicture object.
///
/// ``` int formatVersion ```
QPicture* q_picture_new3(int formatVersion);

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#isNull)
///
/// ``` QPicture* self ```
bool q_picture_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#devType)
///
/// ``` QPicture* self ```
int32_t q_picture_dev_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#devType)
///
/// Allows for overriding the related default method
///
/// ``` QPicture* self, int32_t (*slot)() ```
void q_picture_on_dev_type(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#devType)
///
/// Base class method implementation
///
/// ``` QPicture* self ```
int32_t q_picture_qbase_dev_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#size)
///
/// ``` QPicture* self ```
uint32_t q_picture_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#data)
///
/// ``` QPicture* self ```
const char* q_picture_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#setData)
///
/// ``` QPicture* self, const char* data, uint32_t size ```
void q_picture_set_data(void* self, const char* data, uint32_t size);

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#setData)
///
/// Allows for overriding the related default method
///
/// ``` QPicture* self, void (*slot)(QPicture*, const char*, uint32_t) ```
void q_picture_on_set_data(void* self, void (*slot)(void*, const char*, uint32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#setData)
///
/// Base class method implementation
///
/// ``` QPicture* self, const char* data, uint32_t size ```
void q_picture_qbase_set_data(void* self, const char* data, uint32_t size);

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#play)
///
/// ``` QPicture* self, QPainter* p ```
bool q_picture_play(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#load)
///
/// ``` QPicture* self, QIODevice* dev ```
bool q_picture_load(void* self, void* dev);

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#load)
///
/// ``` QPicture* self, const char* fileName ```
bool q_picture_load_with_file_name(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#save)
///
/// ``` QPicture* self, QIODevice* dev ```
bool q_picture_save(void* self, void* dev);

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#save)
///
/// ``` QPicture* self, const char* fileName ```
bool q_picture_save_with_file_name(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#boundingRect)
///
/// ``` QPicture* self ```
QRect* q_picture_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#setBoundingRect)
///
/// ``` QPicture* self, QRect* r ```
void q_picture_set_bounding_rect(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#operator=)
///
/// ``` QPicture* self, QPicture* p ```
void q_picture_operator_assign(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#swap)
///
/// ``` QPicture* self, QPicture* other ```
void q_picture_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#detach)
///
/// ``` QPicture* self ```
void q_picture_detach(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#isDetached)
///
/// ``` QPicture* self ```
bool q_picture_is_detached(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#paintEngine)
///
/// ``` QPicture* self ```
QPaintEngine* q_picture_paint_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#paintEngine)
///
/// Allows for overriding the related default method
///
/// ``` QPicture* self, QPaintEngine* (*slot)() ```
void q_picture_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#paintEngine)
///
/// Base class method implementation
///
/// ``` QPicture* self ```
QPaintEngine* q_picture_qbase_paint_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#metric)
///
/// ``` QPicture* self, enum QPaintDevice__PaintDeviceMetric m ```
int32_t q_picture_metric(void* self, int64_t m);

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#metric)
///
/// Allows for overriding the related default method
///
/// ``` QPicture* self, int32_t (*slot)(QPicture*, enum QPaintDevice__PaintDeviceMetric) ```
void q_picture_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#metric)
///
/// Base class method implementation
///
/// ``` QPicture* self, enum QPaintDevice__PaintDeviceMetric m ```
int32_t q_picture_qbase_metric(void* self, int64_t m);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QPicture* self ```
bool q_picture_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// ``` QPicture* self ```
int32_t q_picture_width(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// ``` QPicture* self ```
int32_t q_picture_height(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QPicture* self ```
int32_t q_picture_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QPicture* self ```
int32_t q_picture_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QPicture* self ```
int32_t q_picture_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QPicture* self ```
int32_t q_picture_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QPicture* self ```
int32_t q_picture_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QPicture* self ```
int32_t q_picture_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QPicture* self ```
double q_picture_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QPicture* self ```
double q_picture_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QPicture* self ```
int32_t q_picture_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QPicture* self ```
int32_t q_picture_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_picture_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// ``` enum QPaintDevice__PaintDeviceMetric metric, double value ```
int32_t q_picture_encode_metric_f(int64_t metric, double value);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPicture* self, QPainter* painter ```
void q_picture_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPicture* self, QPainter* painter ```
void q_picture_qbase_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPicture* self, void (*slot)(QPicture*, QPainter*) ```
void q_picture_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPicture* self, QPoint* offset ```
QPaintDevice* q_picture_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPicture* self, QPoint* offset ```
QPaintDevice* q_picture_qbase_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPicture* self, QPaintDevice* (*slot)(QPicture*, QPoint*) ```
void q_picture_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPicture* self ```
QPainter* q_picture_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPicture* self ```
QPainter* q_picture_qbase_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPicture* self, QPainter* (*slot)() ```
void q_picture_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPicture* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_picture_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPicture* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_picture_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPicture* self, double (*slot)(QPicture*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric) ```
void q_picture_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qpicture.html#dtor.QPicture)
///
/// Delete this object from C++ memory.
///
/// ``` QPicture* self ```
void q_picture_delete(void* self);

#endif
