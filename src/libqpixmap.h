#pragma once
#ifndef SRCQT6C_LIBQPIXMAP_H
#define SRCQT6C_LIBQPIXMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpixmap.html

/// q_pixmap_new constructs a new QPixmap object.
///
///
QPixmap* q_pixmap_new();

/// q_pixmap_new2 constructs a new QPixmap object.
///
/// ``` int w, int h ```
QPixmap* q_pixmap_new2(int w, int h);

/// q_pixmap_new3 constructs a new QPixmap object.
///
/// ``` QSize* param1 ```
QPixmap* q_pixmap_new3(void* param1);

/// q_pixmap_new4 constructs a new QPixmap object.
///
/// ``` const char* fileName ```
QPixmap* q_pixmap_new4(const char* fileName);

/// q_pixmap_new5 constructs a new QPixmap object.
///
/// ``` QPixmap* param1 ```
QPixmap* q_pixmap_new5(void* param1);

/// q_pixmap_new6 constructs a new QPixmap object.
///
/// ``` const char* fileName, const char* format ```
QPixmap* q_pixmap_new6(const char* fileName, const char* format);

/// q_pixmap_new7 constructs a new QPixmap object.
///
/// ``` const char* fileName, const char* format, int flags ```
QPixmap* q_pixmap_new7(const char* fileName, const char* format, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#operator=)
///
/// ``` QPixmap* self, QPixmap* param1 ```
void q_pixmap_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#swap)
///
/// ``` QPixmap* self, QPixmap* other ```
void q_pixmap_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#operator QVariant)
///
/// ``` QPixmap* self ```
QVariant* q_pixmap_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#isNull)
///
/// ``` QPixmap* self ```
bool q_pixmap_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#devType)
///
/// ``` QPixmap* self ```
int32_t q_pixmap_dev_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#devType)
///
/// Allows for overriding the related default method
///
/// ``` QPixmap* self, int32_t (*slot)() ```
void q_pixmap_on_dev_type(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#devType)
///
/// Base class method implementation
///
/// ``` QPixmap* self ```
int32_t q_pixmap_qbase_dev_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#width)
///
/// ``` QPixmap* self ```
int32_t q_pixmap_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#height)
///
/// ``` QPixmap* self ```
int32_t q_pixmap_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#size)
///
/// ``` QPixmap* self ```
QSize* q_pixmap_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#rect)
///
/// ``` QPixmap* self ```
QRect* q_pixmap_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#depth)
///
/// ``` QPixmap* self ```
int32_t q_pixmap_depth(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#defaultDepth)
///
///
int32_t q_pixmap_default_depth();

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fill)
///
/// ``` QPixmap* self ```
void q_pixmap_fill(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#mask)
///
/// ``` QPixmap* self ```
QBitmap* q_pixmap_mask(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#setMask)
///
/// ``` QPixmap* self, QBitmap* mask ```
void q_pixmap_set_mask(void* self, void* mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#devicePixelRatio)
///
/// ``` QPixmap* self ```
double q_pixmap_device_pixel_ratio(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#setDevicePixelRatio)
///
/// ``` QPixmap* self, double scaleFactor ```
void q_pixmap_set_device_pixel_ratio(void* self, double scaleFactor);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#deviceIndependentSize)
///
/// ``` QPixmap* self ```
QSizeF* q_pixmap_device_independent_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#hasAlpha)
///
/// ``` QPixmap* self ```
bool q_pixmap_has_alpha(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#hasAlphaChannel)
///
/// ``` QPixmap* self ```
bool q_pixmap_has_alpha_channel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
///
/// ``` QPixmap* self ```
QBitmap* q_pixmap_create_heuristic_mask(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
///
/// ``` QPixmap* self, QColor* maskColor ```
QBitmap* q_pixmap_create_mask_from_color(void* self, void* maskColor);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// ``` QPixmap* self, int w, int h ```
QPixmap* q_pixmap_scaled(void* self, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// ``` QPixmap* self, QSize* s ```
QPixmap* q_pixmap_scaled2(void* self, void* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
///
/// ``` QPixmap* self, int w ```
QPixmap* q_pixmap_scaled_to_width(void* self, int w);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
///
/// ``` QPixmap* self, int h ```
QPixmap* q_pixmap_scaled_to_height(void* self, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#transformed)
///
/// ``` QPixmap* self, QTransform* param1 ```
QPixmap* q_pixmap_transformed(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#trueMatrix)
///
/// ``` QTransform* m, int w, int h ```
QTransform* q_pixmap_true_matrix(void* m, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#toImage)
///
/// ``` QPixmap* self ```
QImage* q_pixmap_to_image(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fromImage)
///
/// ``` QImage* image ```
QPixmap* q_pixmap_from_image(void* image);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fromImageReader)
///
/// ``` QImageReader* imageReader ```
QPixmap* q_pixmap_from_image_reader(void* imageReader);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#load)
///
/// ``` QPixmap* self, const char* fileName ```
bool q_pixmap_load(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// ``` QPixmap* self, unsigned char* buf, uint32_t lenVal ```
bool q_pixmap_load_from_data(void* self, unsigned char* buf, uint32_t lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// ``` QPixmap* self, const char* data ```
bool q_pixmap_load_from_data2(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// ``` QPixmap* self, const char* fileName ```
bool q_pixmap_save(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// ``` QPixmap* self, QIODevice* device ```
bool q_pixmap_save2(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
///
/// ``` QPixmap* self, QImage* img ```
bool q_pixmap_convert_from_image(void* self, void* img);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#copy)
///
/// ``` QPixmap* self, int x, int y, int width, int height ```
QPixmap* q_pixmap_copy(void* self, int x, int y, int width, int height);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#copy)
///
/// ``` QPixmap* self ```
QPixmap* q_pixmap_copy2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// ``` QPixmap* self, int dx, int dy, int x, int y, int width, int height ```
void q_pixmap_scroll(void* self, int dx, int dy, int x, int y, int width, int height);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// ``` QPixmap* self, int dx, int dy, QRect* rect ```
void q_pixmap_scroll2(void* self, int dx, int dy, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#cacheKey)
///
/// ``` QPixmap* self ```
long long q_pixmap_cache_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#isDetached)
///
/// ``` QPixmap* self ```
bool q_pixmap_is_detached(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#detach)
///
/// ``` QPixmap* self ```
void q_pixmap_detach(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#isQBitmap)
///
/// ``` QPixmap* self ```
bool q_pixmap_is_q_bitmap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
///
/// ``` QPixmap* self ```
QPaintEngine* q_pixmap_paint_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
///
/// Allows for overriding the related default method
///
/// ``` QPixmap* self, QPaintEngine* (*slot)() ```
void q_pixmap_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
///
/// Base class method implementation
///
/// ``` QPixmap* self ```
QPaintEngine* q_pixmap_qbase_paint_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#operator!)
///
/// ``` QPixmap* self ```
bool q_pixmap_operator_not(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#metric)
///
/// ``` QPixmap* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_pixmap_metric(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#metric)
///
/// Allows for overriding the related default method
///
/// ``` QPixmap* self, int32_t (*slot)(QPixmap*, enum QPaintDevice__PaintDeviceMetric) ```
void q_pixmap_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#metric)
///
/// Base class method implementation
///
/// ``` QPixmap* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_pixmap_qbase_metric(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fill)
///
/// ``` QPixmap* self, QColor* fillColor ```
void q_pixmap_fill1(void* self, void* fillColor);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
///
/// ``` QPixmap* self, bool clipTight ```
QBitmap* q_pixmap_create_heuristic_mask1(void* self, bool clipTight);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
///
/// ``` QPixmap* self, QColor* maskColor, enum Qt__MaskMode mode ```
QBitmap* q_pixmap_create_mask_from_color2(void* self, void* maskColor, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// ``` QPixmap* self, int w, int h, enum Qt__AspectRatioMode aspectMode ```
QPixmap* q_pixmap_scaled3(void* self, int w, int h, int64_t aspectMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// ``` QPixmap* self, int w, int h, enum Qt__AspectRatioMode aspectMode, enum Qt__TransformationMode mode ```
QPixmap* q_pixmap_scaled4(void* self, int w, int h, int64_t aspectMode, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// ``` QPixmap* self, QSize* s, enum Qt__AspectRatioMode aspectMode ```
QPixmap* q_pixmap_scaled22(void* self, void* s, int64_t aspectMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// ``` QPixmap* self, QSize* s, enum Qt__AspectRatioMode aspectMode, enum Qt__TransformationMode mode ```
QPixmap* q_pixmap_scaled32(void* self, void* s, int64_t aspectMode, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
///
/// ``` QPixmap* self, int w, enum Qt__TransformationMode mode ```
QPixmap* q_pixmap_scaled_to_width2(void* self, int w, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
///
/// ``` QPixmap* self, int h, enum Qt__TransformationMode mode ```
QPixmap* q_pixmap_scaled_to_height2(void* self, int h, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#transformed)
///
/// ``` QPixmap* self, QTransform* param1, enum Qt__TransformationMode mode ```
QPixmap* q_pixmap_transformed2(void* self, void* param1, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fromImage)
///
/// ``` QImage* image, int flags ```
QPixmap* q_pixmap_from_image2(void* image, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fromImageReader)
///
/// ``` QImageReader* imageReader, int flags ```
QPixmap* q_pixmap_from_image_reader2(void* imageReader, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#load)
///
/// ``` QPixmap* self, const char* fileName, const char* format ```
bool q_pixmap_load2(void* self, const char* fileName, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#load)
///
/// ``` QPixmap* self, const char* fileName, const char* format, int flags ```
bool q_pixmap_load3(void* self, const char* fileName, const char* format, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// ``` QPixmap* self, unsigned char* buf, uint32_t lenVal, const char* format ```
bool q_pixmap_load_from_data3(void* self, unsigned char* buf, uint32_t lenVal, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// ``` QPixmap* self, unsigned char* buf, uint32_t lenVal, const char* format, int flags ```
bool q_pixmap_load_from_data4(void* self, unsigned char* buf, uint32_t lenVal, const char* format, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// ``` QPixmap* self, const char* data, const char* format ```
bool q_pixmap_load_from_data22(void* self, const char* data, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// ``` QPixmap* self, const char* data, const char* format, int flags ```
bool q_pixmap_load_from_data32(void* self, const char* data, const char* format, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// ``` QPixmap* self, const char* fileName, const char* format ```
bool q_pixmap_save22(void* self, const char* fileName, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// ``` QPixmap* self, const char* fileName, const char* format, int quality ```
bool q_pixmap_save3(void* self, const char* fileName, const char* format, int quality);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// ``` QPixmap* self, QIODevice* device, const char* format ```
bool q_pixmap_save23(void* self, void* device, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// ``` QPixmap* self, QIODevice* device, const char* format, int quality ```
bool q_pixmap_save32(void* self, void* device, const char* format, int quality);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
///
/// ``` QPixmap* self, QImage* img, int flags ```
bool q_pixmap_convert_from_image2(void* self, void* img, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#copy)
///
/// ``` QPixmap* self, QRect* rect ```
QPixmap* q_pixmap_copy1(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// ``` QPixmap* self, int dx, int dy, int x, int y, int width, int height, QRegion* exposed ```
void q_pixmap_scroll7(void* self, int dx, int dy, int x, int y, int width, int height, void* exposed);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// ``` QPixmap* self, int dx, int dy, QRect* rect, QRegion* exposed ```
void q_pixmap_scroll4(void* self, int dx, int dy, void* rect, void* exposed);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QPixmap* self ```
bool q_pixmap_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QPixmap* self ```
int32_t q_pixmap_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QPixmap* self ```
int32_t q_pixmap_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QPixmap* self ```
int32_t q_pixmap_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QPixmap* self ```
int32_t q_pixmap_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QPixmap* self ```
int32_t q_pixmap_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QPixmap* self ```
int32_t q_pixmap_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QPixmap* self ```
double q_pixmap_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QPixmap* self ```
int32_t q_pixmap_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_pixmap_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// ``` enum QPaintDevice__PaintDeviceMetric metric, double value ```
int32_t q_pixmap_encode_metric_f(int64_t metric, double value);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPixmap* self, QPainter* painter ```
void q_pixmap_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPixmap* self, QPainter* painter ```
void q_pixmap_qbase_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPixmap* self, void (*slot)(QPixmap*, QPainter*) ```
void q_pixmap_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPixmap* self, QPoint* offset ```
QPaintDevice* q_pixmap_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPixmap* self, QPoint* offset ```
QPaintDevice* q_pixmap_qbase_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPixmap* self, QPaintDevice* (*slot)(QPixmap*, QPoint*) ```
void q_pixmap_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPixmap* self ```
QPainter* q_pixmap_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPixmap* self ```
QPainter* q_pixmap_qbase_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPixmap* self, QPainter* (*slot)() ```
void q_pixmap_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPixmap* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_pixmap_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPixmap* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_pixmap_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPixmap* self, double (*slot)(QPixmap*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric) ```
void q_pixmap_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#dtor.QPixmap)
///
/// Delete this object from C++ memory.
///
/// ``` QPixmap* self ```
void q_pixmap_delete(void* self);

#endif
