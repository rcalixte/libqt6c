#pragma once
#ifndef SRCQT6C_LIBQBITMAP_H
#define SRCQT6C_LIBQBITMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qbitmap.html

/// q_bitmap_new constructs a new QBitmap object.
///
///
QBitmap* q_bitmap_new();

/// q_bitmap_new2 constructs a new QBitmap object.
///
/// ``` QPixmap* param1 ```
QBitmap* q_bitmap_new2(void* param1);

/// q_bitmap_new3 constructs a new QBitmap object.
///
/// ``` int w, int h ```
QBitmap* q_bitmap_new3(int w, int h);

/// q_bitmap_new4 constructs a new QBitmap object.
///
/// ``` QSize* param1 ```
QBitmap* q_bitmap_new4(void* param1);

/// q_bitmap_new5 constructs a new QBitmap object.
///
/// ``` const char* fileName ```
QBitmap* q_bitmap_new5(const char* fileName);

/// q_bitmap_new6 constructs a new QBitmap object.
///
/// ``` const char* fileName, const char* format ```
QBitmap* q_bitmap_new6(const char* fileName, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#operator-eq)
///
/// ``` QBitmap* self, QPixmap* param1 ```
void q_bitmap_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#swap)
///
/// ``` QBitmap* self, QBitmap* other ```
void q_bitmap_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#operator)
///
/// ``` QBitmap* self ```
QVariant* q_bitmap_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#clear)
///
/// ``` QBitmap* self ```
void q_bitmap_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#fromImage)
///
/// ``` QImage* image ```
QBitmap* q_bitmap_from_image(void* image);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#fromData)
///
/// ``` QSize* size, unsigned char* bits ```
QBitmap* q_bitmap_from_data(void* size, unsigned char* bits);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#fromPixmap)
///
/// ``` QPixmap* pixmap ```
QBitmap* q_bitmap_from_pixmap(void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#transformed)
///
/// ``` QBitmap* self, QTransform* matrix ```
QBitmap* q_bitmap_transformed(void* self, void* matrix);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#operator-eq)
///
/// ``` QBitmap* self, QBitmap* param1 ```
void q_bitmap_operator_assign2(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#fromImage)
///
/// ``` QImage* image, int flags ```
QBitmap* q_bitmap_from_image2(void* image, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#fromData)
///
/// ``` QSize* size, unsigned char* bits, enum QImage__Format monoFormat ```
QBitmap* q_bitmap_from_data3(void* size, unsigned char* bits, int64_t monoFormat);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#isNull)
///
/// ``` QBitmap* self ```
bool q_bitmap_is_null(void* self);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#width)
///
/// ``` QBitmap* self ```
int32_t q_bitmap_width(void* self);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#height)
///
/// ``` QBitmap* self ```
int32_t q_bitmap_height(void* self);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#size)
///
/// ``` QBitmap* self ```
QSize* q_bitmap_size(void* self);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#rect)
///
/// ``` QBitmap* self ```
QRect* q_bitmap_rect(void* self);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#depth)
///
/// ``` QBitmap* self ```
int32_t q_bitmap_depth(void* self);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#defaultDepth)
///
///
int32_t q_bitmap_default_depth();

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fill)
///
/// ``` QBitmap* self ```
void q_bitmap_fill(void* self);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#mask)
///
/// ``` QBitmap* self ```
QBitmap* q_bitmap_mask(void* self);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#setMask)
///
/// ``` QBitmap* self, QBitmap* mask ```
void q_bitmap_set_mask(void* self, void* mask);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#devicePixelRatio)
///
/// ``` QBitmap* self ```
double q_bitmap_device_pixel_ratio(void* self);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#setDevicePixelRatio)
///
/// ``` QBitmap* self, double scaleFactor ```
void q_bitmap_set_device_pixel_ratio(void* self, double scaleFactor);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#deviceIndependentSize)
///
/// ``` QBitmap* self ```
QSizeF* q_bitmap_device_independent_size(void* self);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#hasAlpha)
///
/// ``` QBitmap* self ```
bool q_bitmap_has_alpha(void* self);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#hasAlphaChannel)
///
/// ``` QBitmap* self ```
bool q_bitmap_has_alpha_channel(void* self);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
///
/// ``` QBitmap* self ```
QBitmap* q_bitmap_create_heuristic_mask(void* self);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
///
/// ``` QBitmap* self, QColor* maskColor ```
QBitmap* q_bitmap_create_mask_from_color(void* self, void* maskColor);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// ``` QBitmap* self, int w, int h ```
QPixmap* q_bitmap_scaled(void* self, int w, int h);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// ``` QBitmap* self, QSize* s ```
QPixmap* q_bitmap_scaled2(void* self, void* s);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
///
/// ``` QBitmap* self, int w ```
QPixmap* q_bitmap_scaled_to_width(void* self, int w);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
///
/// ``` QBitmap* self, int h ```
QPixmap* q_bitmap_scaled_to_height(void* self, int h);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#trueMatrix)
///
/// ``` QTransform* m, int w, int h ```
QTransform* q_bitmap_true_matrix(void* m, int w, int h);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#toImage)
///
/// ``` QBitmap* self ```
QImage* q_bitmap_to_image(void* self);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fromImageReader)
///
/// ``` QImageReader* imageReader ```
QPixmap* q_bitmap_from_image_reader(void* imageReader);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#load)
///
/// ``` QBitmap* self, const char* fileName ```
bool q_bitmap_load(void* self, const char* fileName);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// ``` QBitmap* self, unsigned char* buf, uint32_t lenVal ```
bool q_bitmap_load_from_data(void* self, unsigned char* buf, uint32_t lenVal);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// ``` QBitmap* self, const char* data ```
bool q_bitmap_load_from_data2(void* self, const char* data);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// ``` QBitmap* self, const char* fileName ```
bool q_bitmap_save(void* self, const char* fileName);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// ``` QBitmap* self, QIODevice* device ```
bool q_bitmap_save2(void* self, void* device);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
///
/// ``` QBitmap* self, QImage* img ```
bool q_bitmap_convert_from_image(void* self, void* img);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#copy)
///
/// ``` QBitmap* self, int x, int y, int width, int height ```
QPixmap* q_bitmap_copy(void* self, int x, int y, int width, int height);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#copy)
///
/// ``` QBitmap* self ```
QPixmap* q_bitmap_copy2(void* self);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// ``` QBitmap* self, int dx, int dy, int x, int y, int width, int height ```
void q_bitmap_scroll(void* self, int dx, int dy, int x, int y, int width, int height);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// ``` QBitmap* self, int dx, int dy, QRect* rect ```
void q_bitmap_scroll2(void* self, int dx, int dy, void* rect);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#cacheKey)
///
/// ``` QBitmap* self ```
long long q_bitmap_cache_key(void* self);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#isDetached)
///
/// ``` QBitmap* self ```
bool q_bitmap_is_detached(void* self);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#detach)
///
/// ``` QBitmap* self ```
void q_bitmap_detach(void* self);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#isQBitmap)
///
/// ``` QBitmap* self ```
bool q_bitmap_is_q_bitmap(void* self);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#operator-not)
///
/// ``` QBitmap* self ```
bool q_bitmap_operator_not(void* self);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fill)
///
/// ``` QBitmap* self, QColor* fillColor ```
void q_bitmap_fill1(void* self, void* fillColor);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
///
/// ``` QBitmap* self, bool clipTight ```
QBitmap* q_bitmap_create_heuristic_mask1(void* self, bool clipTight);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
///
/// ``` QBitmap* self, QColor* maskColor, enum Qt__MaskMode mode ```
QBitmap* q_bitmap_create_mask_from_color2(void* self, void* maskColor, int64_t mode);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// ``` QBitmap* self, int w, int h, enum Qt__AspectRatioMode aspectMode ```
QPixmap* q_bitmap_scaled3(void* self, int w, int h, int64_t aspectMode);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// ``` QBitmap* self, int w, int h, enum Qt__AspectRatioMode aspectMode, enum Qt__TransformationMode mode ```
QPixmap* q_bitmap_scaled4(void* self, int w, int h, int64_t aspectMode, int64_t mode);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// ``` QBitmap* self, QSize* s, enum Qt__AspectRatioMode aspectMode ```
QPixmap* q_bitmap_scaled22(void* self, void* s, int64_t aspectMode);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// ``` QBitmap* self, QSize* s, enum Qt__AspectRatioMode aspectMode, enum Qt__TransformationMode mode ```
QPixmap* q_bitmap_scaled32(void* self, void* s, int64_t aspectMode, int64_t mode);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
///
/// ``` QBitmap* self, int w, enum Qt__TransformationMode mode ```
QPixmap* q_bitmap_scaled_to_width2(void* self, int w, int64_t mode);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
///
/// ``` QBitmap* self, int h, enum Qt__TransformationMode mode ```
QPixmap* q_bitmap_scaled_to_height2(void* self, int h, int64_t mode);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#transformed)
///
/// ``` QBitmap* self, QTransform* param1, enum Qt__TransformationMode mode ```
QPixmap* q_bitmap_transformed2(void* self, void* param1, int64_t mode);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fromImageReader)
///
/// ``` QImageReader* imageReader, int flags ```
QPixmap* q_bitmap_from_image_reader2(void* imageReader, int64_t flags);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#load)
///
/// ``` QBitmap* self, const char* fileName, const char* format ```
bool q_bitmap_load2(void* self, const char* fileName, const char* format);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#load)
///
/// ``` QBitmap* self, const char* fileName, const char* format, int flags ```
bool q_bitmap_load3(void* self, const char* fileName, const char* format, int64_t flags);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// ``` QBitmap* self, unsigned char* buf, uint32_t lenVal, const char* format ```
bool q_bitmap_load_from_data3(void* self, unsigned char* buf, uint32_t lenVal, const char* format);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// ``` QBitmap* self, unsigned char* buf, uint32_t lenVal, const char* format, int flags ```
bool q_bitmap_load_from_data4(void* self, unsigned char* buf, uint32_t lenVal, const char* format, int64_t flags);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// ``` QBitmap* self, const char* data, const char* format ```
bool q_bitmap_load_from_data22(void* self, const char* data, const char* format);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// ``` QBitmap* self, const char* data, const char* format, int flags ```
bool q_bitmap_load_from_data32(void* self, const char* data, const char* format, int64_t flags);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// ``` QBitmap* self, const char* fileName, const char* format ```
bool q_bitmap_save22(void* self, const char* fileName, const char* format);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// ``` QBitmap* self, const char* fileName, const char* format, int quality ```
bool q_bitmap_save3(void* self, const char* fileName, const char* format, int quality);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// ``` QBitmap* self, QIODevice* device, const char* format ```
bool q_bitmap_save23(void* self, void* device, const char* format);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// ``` QBitmap* self, QIODevice* device, const char* format, int quality ```
bool q_bitmap_save32(void* self, void* device, const char* format, int quality);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
///
/// ``` QBitmap* self, QImage* img, int flags ```
bool q_bitmap_convert_from_image2(void* self, void* img, int64_t flags);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#copy)
///
/// ``` QBitmap* self, QRect* rect ```
QPixmap* q_bitmap_copy1(void* self, void* rect);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// ``` QBitmap* self, int dx, int dy, int x, int y, int width, int height, QRegion* exposed ```
void q_bitmap_scroll7(void* self, int dx, int dy, int x, int y, int width, int height, void* exposed);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// ``` QBitmap* self, int dx, int dy, QRect* rect, QRegion* exposed ```
void q_bitmap_scroll4(void* self, int dx, int dy, void* rect, void* exposed);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QBitmap* self ```
bool q_bitmap_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QBitmap* self ```
int32_t q_bitmap_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QBitmap* self ```
int32_t q_bitmap_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QBitmap* self ```
int32_t q_bitmap_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QBitmap* self ```
int32_t q_bitmap_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QBitmap* self ```
int32_t q_bitmap_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QBitmap* self ```
int32_t q_bitmap_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QBitmap* self ```
double q_bitmap_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QBitmap* self ```
int32_t q_bitmap_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_bitmap_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// ``` enum QPaintDevice__PaintDeviceMetric metric, double value ```
int32_t q_bitmap_encode_metric_f(int64_t metric, double value);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBitmap* self ```
int32_t q_bitmap_dev_type(void* self);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBitmap* self ```
int32_t q_bitmap_qbase_dev_type(void* self);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBitmap* self, int32_t (*slot)() ```
void q_bitmap_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBitmap* self ```
QPaintEngine* q_bitmap_paint_engine(void* self);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBitmap* self ```
QPaintEngine* q_bitmap_qbase_paint_engine(void* self);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBitmap* self, QPaintEngine* (*slot)() ```
void q_bitmap_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBitmap* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_bitmap_metric(void* self, int64_t param1);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBitmap* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_bitmap_qbase_metric(void* self, int64_t param1);

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBitmap* self, int32_t (*slot)(QBitmap*, enum QPaintDevice__PaintDeviceMetric) ```
void q_bitmap_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBitmap* self, QPainter* painter ```
void q_bitmap_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBitmap* self, QPainter* painter ```
void q_bitmap_qbase_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBitmap* self, void (*slot)(QBitmap*, QPainter*) ```
void q_bitmap_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBitmap* self, QPoint* offset ```
QPaintDevice* q_bitmap_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBitmap* self, QPoint* offset ```
QPaintDevice* q_bitmap_qbase_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBitmap* self, QPaintDevice* (*slot)(QBitmap*, QPoint*) ```
void q_bitmap_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBitmap* self ```
QPainter* q_bitmap_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBitmap* self ```
QPainter* q_bitmap_qbase_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBitmap* self, QPainter* (*slot)() ```
void q_bitmap_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBitmap* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_bitmap_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBitmap* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_bitmap_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBitmap* self, double (*slot)(QBitmap*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric) ```
void q_bitmap_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#dtor.QBitmap)
///
/// Delete this object from C++ memory.
///
/// ``` QBitmap* self ```
void q_bitmap_delete(void* self);

#endif
