#pragma once
#ifndef SRCQT6C_LIBQPIXMAP_H
#define SRCQT6C_LIBQPIXMAP_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpixmap.html

/// q_pixmap_new constructs a new QPixmap object.
///
QPixmap* q_pixmap_new();

/// q_pixmap_new2 constructs a new QPixmap object.
///
/// @param w int
/// @param h int
QPixmap* q_pixmap_new2(int w, int h);

/// q_pixmap_new3 constructs a new QPixmap object.
///
/// @param param1 QSize*
QPixmap* q_pixmap_new3(void* param1);

/// q_pixmap_new4 constructs a new QPixmap object.
///
/// @param fileName const char*
QPixmap* q_pixmap_new4(const char* fileName);

/// q_pixmap_new5 constructs a new QPixmap object.
///
/// @param param1 QPixmap*
QPixmap* q_pixmap_new5(void* param1);

/// q_pixmap_new6 constructs a new QPixmap object.
///
/// @param fileName const char*
/// @param format const char*
QPixmap* q_pixmap_new6(const char* fileName, const char* format);

/// q_pixmap_new7 constructs a new QPixmap object.
///
/// @param fileName const char*
/// @param format const char*
/// @param flags flag of enum Qt__ImageConversionFlag
QPixmap* q_pixmap_new7(const char* fileName, const char* format, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#operator-eq)
///
/// @param self QPixmap*
/// @param param1 QPixmap*
void q_pixmap_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#swap)
///
/// @param self QPixmap*
/// @param other QPixmap*
void q_pixmap_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#operator)
///
/// @param self QPixmap*
QVariant* q_pixmap_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#isNull)
///
/// @param self QPixmap*
bool q_pixmap_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#devType)
///
/// @param self QPixmap*
int32_t q_pixmap_dev_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#devType)
///
/// Allows for overriding the related default method
///
/// @param self QPixmap*
/// @param callback int32_t fn()
void q_pixmap_on_dev_type(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#devType)
///
/// Base class method implementation
///
/// @param self QPixmap*
int32_t q_pixmap_qbase_dev_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#width)
///
/// @param self QPixmap*
int32_t q_pixmap_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#height)
///
/// @param self QPixmap*
int32_t q_pixmap_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#size)
///
/// @param self QPixmap*
QSize* q_pixmap_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#rect)
///
/// @param self QPixmap*
QRect* q_pixmap_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#depth)
///
/// @param self QPixmap*
int32_t q_pixmap_depth(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#defaultDepth)
///
int32_t q_pixmap_default_depth();

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fill)
///
/// @param self QPixmap*
void q_pixmap_fill(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#mask)
///
/// @param self QPixmap*
QBitmap* q_pixmap_mask(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#setMask)
///
/// @param self QPixmap*
/// @param mask QBitmap*
void q_pixmap_set_mask(void* self, void* mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#devicePixelRatio)
///
/// @param self QPixmap*
double q_pixmap_device_pixel_ratio(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#setDevicePixelRatio)
///
/// @param self QPixmap*
/// @param scaleFactor double
void q_pixmap_set_device_pixel_ratio(void* self, double scaleFactor);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#deviceIndependentSize)
///
/// @param self QPixmap*
QSizeF* q_pixmap_device_independent_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#hasAlpha)
///
/// @param self QPixmap*
bool q_pixmap_has_alpha(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#hasAlphaChannel)
///
/// @param self QPixmap*
bool q_pixmap_has_alpha_channel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
///
/// @param self QPixmap*
QBitmap* q_pixmap_create_heuristic_mask(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
///
/// @param self QPixmap*
/// @param maskColor QColor*
QBitmap* q_pixmap_create_mask_from_color(void* self, void* maskColor);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// @param self QPixmap*
/// @param w int
/// @param h int
QPixmap* q_pixmap_scaled(void* self, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// @param self QPixmap*
/// @param s QSize*
QPixmap* q_pixmap_scaled2(void* self, void* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
///
/// @param self QPixmap*
/// @param w int
QPixmap* q_pixmap_scaled_to_width(void* self, int w);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
///
/// @param self QPixmap*
/// @param h int
QPixmap* q_pixmap_scaled_to_height(void* self, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#transformed)
///
/// @param self QPixmap*
/// @param param1 QTransform*
QPixmap* q_pixmap_transformed(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#trueMatrix)
///
/// @param m QTransform*
/// @param w int
/// @param h int
QTransform* q_pixmap_true_matrix(void* m, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#toImage)
///
/// @param self QPixmap*
QImage* q_pixmap_to_image(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fromImage)
///
/// @param image QImage*
QPixmap* q_pixmap_from_image(void* image);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fromImageReader)
///
/// @param imageReader QImageReader*
QPixmap* q_pixmap_from_image_reader(void* imageReader);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#load)
///
/// @param self QPixmap*
/// @param fileName const char*
bool q_pixmap_load(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// @param self QPixmap*
/// @param buf unsigned char*
/// @param lenVal uint32_t
bool q_pixmap_load_from_data(void* self, unsigned char* buf, uint32_t lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// @param self QPixmap*
/// @param data const char*
bool q_pixmap_load_from_data2(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// @param self QPixmap*
/// @param fileName const char*
bool q_pixmap_save(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// @param self QPixmap*
/// @param device QIODevice*
bool q_pixmap_save2(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
///
/// @param self QPixmap*
/// @param img QImage*
bool q_pixmap_convert_from_image(void* self, void* img);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#copy)
///
/// @param self QPixmap*
/// @param x int
/// @param y int
/// @param width int
/// @param height int
QPixmap* q_pixmap_copy(void* self, int x, int y, int width, int height);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#copy)
///
/// @param self QPixmap*
QPixmap* q_pixmap_copy2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// @param self QPixmap*
/// @param dx int
/// @param dy int
/// @param x int
/// @param y int
/// @param width int
/// @param height int
void q_pixmap_scroll(void* self, int dx, int dy, int x, int y, int width, int height);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// @param self QPixmap*
/// @param dx int
/// @param dy int
/// @param rect QRect*
void q_pixmap_scroll2(void* self, int dx, int dy, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#cacheKey)
///
/// @param self QPixmap*
long long q_pixmap_cache_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#isDetached)
///
/// @param self QPixmap*
bool q_pixmap_is_detached(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#detach)
///
/// @param self QPixmap*
void q_pixmap_detach(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#isQBitmap)
///
/// @param self QPixmap*
bool q_pixmap_is_q_bitmap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
///
/// @param self QPixmap*
QPaintEngine* q_pixmap_paint_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
///
/// Allows for overriding the related default method
///
/// @param self QPixmap*
/// @param callback QPaintEngine* fn()
void q_pixmap_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
///
/// Base class method implementation
///
/// @param self QPixmap*
QPaintEngine* q_pixmap_qbase_paint_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#operator-not)
///
/// @param self QPixmap*
bool q_pixmap_operator_not(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#metric)
///
/// @param self QPixmap*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_pixmap_metric(void* self, int32_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#metric)
///
/// Allows for overriding the related default method
///
/// @param self QPixmap*
/// @param callback int32_t fn(QPixmap*, enum QPaintDevice__PaintDeviceMetric)
void q_pixmap_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#metric)
///
/// Base class method implementation
///
/// @param self QPixmap*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_pixmap_qbase_metric(void* self, int32_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fill)
///
/// @param self QPixmap*
/// @param fillColor QColor*
void q_pixmap_fill1(void* self, void* fillColor);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
///
/// @param self QPixmap*
/// @param clipTight bool
QBitmap* q_pixmap_create_heuristic_mask1(void* self, bool clipTight);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
///
/// @param self QPixmap*
/// @param maskColor QColor*
/// @param mode enum Qt__MaskMode
QBitmap* q_pixmap_create_mask_from_color2(void* self, void* maskColor, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// @param self QPixmap*
/// @param w int
/// @param h int
/// @param aspectMode enum Qt__AspectRatioMode
QPixmap* q_pixmap_scaled3(void* self, int w, int h, int32_t aspectMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// @param self QPixmap*
/// @param w int
/// @param h int
/// @param aspectMode enum Qt__AspectRatioMode
/// @param mode enum Qt__TransformationMode
QPixmap* q_pixmap_scaled4(void* self, int w, int h, int32_t aspectMode, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// @param self QPixmap*
/// @param s QSize*
/// @param aspectMode enum Qt__AspectRatioMode
QPixmap* q_pixmap_scaled22(void* self, void* s, int32_t aspectMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// @param self QPixmap*
/// @param s QSize*
/// @param aspectMode enum Qt__AspectRatioMode
/// @param mode enum Qt__TransformationMode
QPixmap* q_pixmap_scaled32(void* self, void* s, int32_t aspectMode, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
///
/// @param self QPixmap*
/// @param w int
/// @param mode enum Qt__TransformationMode
QPixmap* q_pixmap_scaled_to_width2(void* self, int w, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
///
/// @param self QPixmap*
/// @param h int
/// @param mode enum Qt__TransformationMode
QPixmap* q_pixmap_scaled_to_height2(void* self, int h, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#transformed)
///
/// @param self QPixmap*
/// @param param1 QTransform*
/// @param mode enum Qt__TransformationMode
QPixmap* q_pixmap_transformed2(void* self, void* param1, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fromImage)
///
/// @param image QImage*
/// @param flags flag of enum Qt__ImageConversionFlag
QPixmap* q_pixmap_from_image2(void* image, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fromImageReader)
///
/// @param imageReader QImageReader*
/// @param flags flag of enum Qt__ImageConversionFlag
QPixmap* q_pixmap_from_image_reader2(void* imageReader, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#load)
///
/// @param self QPixmap*
/// @param fileName const char*
/// @param format const char*
bool q_pixmap_load2(void* self, const char* fileName, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#load)
///
/// @param self QPixmap*
/// @param fileName const char*
/// @param format const char*
/// @param flags flag of enum Qt__ImageConversionFlag
bool q_pixmap_load3(void* self, const char* fileName, const char* format, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// @param self QPixmap*
/// @param buf unsigned char*
/// @param lenVal uint32_t
/// @param format const char*
bool q_pixmap_load_from_data3(void* self, unsigned char* buf, uint32_t lenVal, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// @param self QPixmap*
/// @param buf unsigned char*
/// @param lenVal uint32_t
/// @param format const char*
/// @param flags flag of enum Qt__ImageConversionFlag
bool q_pixmap_load_from_data4(void* self, unsigned char* buf, uint32_t lenVal, const char* format, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// @param self QPixmap*
/// @param data const char*
/// @param format const char*
bool q_pixmap_load_from_data22(void* self, const char* data, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// @param self QPixmap*
/// @param data const char*
/// @param format const char*
/// @param flags flag of enum Qt__ImageConversionFlag
bool q_pixmap_load_from_data32(void* self, const char* data, const char* format, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// @param self QPixmap*
/// @param fileName const char*
/// @param format const char*
bool q_pixmap_save22(void* self, const char* fileName, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// @param self QPixmap*
/// @param fileName const char*
/// @param format const char*
/// @param quality int
bool q_pixmap_save3(void* self, const char* fileName, const char* format, int quality);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// @param self QPixmap*
/// @param device QIODevice*
/// @param format const char*
bool q_pixmap_save23(void* self, void* device, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// @param self QPixmap*
/// @param device QIODevice*
/// @param format const char*
/// @param quality int
bool q_pixmap_save32(void* self, void* device, const char* format, int quality);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
///
/// @param self QPixmap*
/// @param img QImage*
/// @param flags flag of enum Qt__ImageConversionFlag
bool q_pixmap_convert_from_image2(void* self, void* img, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#copy)
///
/// @param self QPixmap*
/// @param rect QRect*
QPixmap* q_pixmap_copy1(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// @param self QPixmap*
/// @param dx int
/// @param dy int
/// @param x int
/// @param y int
/// @param width int
/// @param height int
/// @param exposed QRegion*
void q_pixmap_scroll7(void* self, int dx, int dy, int x, int y, int width, int height, void* exposed);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// @param self QPixmap*
/// @param dx int
/// @param dy int
/// @param rect QRect*
/// @param exposed QRegion*
void q_pixmap_scroll4(void* self, int dx, int dy, void* rect, void* exposed);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QPixmap*
bool q_pixmap_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QPixmap*
int32_t q_pixmap_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QPixmap*
int32_t q_pixmap_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QPixmap*
int32_t q_pixmap_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QPixmap*
int32_t q_pixmap_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QPixmap*
int32_t q_pixmap_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QPixmap*
int32_t q_pixmap_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QPixmap*
double q_pixmap_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QPixmap*
int32_t q_pixmap_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_pixmap_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t q_pixmap_encode_metric_f(int32_t metric, double value);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPixmap*
/// @param painter QPainter*
void q_pixmap_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPixmap*
/// @param painter QPainter*
void q_pixmap_qbase_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPixmap*
/// @param callback void fn(QPixmap*, QPainter*)
void q_pixmap_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPixmap*
/// @param offset QPoint*
QPaintDevice* q_pixmap_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPixmap*
/// @param offset QPoint*
QPaintDevice* q_pixmap_qbase_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPixmap*
/// @param callback QPaintDevice* fn(QPixmap*, QPoint*)
void q_pixmap_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPixmap*
QPainter* q_pixmap_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPixmap*
QPainter* q_pixmap_qbase_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPixmap*
/// @param callback QPainter* fn()
void q_pixmap_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPixmap*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_pixmap_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPixmap*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_pixmap_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPixmap*
/// @param callback double fn(QPixmap*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric)
void q_pixmap_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#dtor.QPixmap)
///
/// Delete this object from C++ memory.
///
/// @param self QPixmap*
void q_pixmap_delete(void* self);

#endif
