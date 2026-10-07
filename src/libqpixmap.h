#pragma once
#ifndef LIBQPIXMAP_H
#define LIBQPIXMAP_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html)

/// q_pixmap_new constructs a new QPixmap object.
///
QPixmap* q_pixmap_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html)

/// q_pixmap_new2 constructs a new QPixmap object.
///
/// @param w int
/// @param h int
///
QPixmap* q_pixmap_new2(int w, int h);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html)

/// q_pixmap_new3 constructs a new QPixmap object.
///
/// @param param1 QSize*
///
QPixmap* q_pixmap_new3(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html)

/// q_pixmap_new4 constructs a new QPixmap object.
///
/// @param fileName const char*
///
QPixmap* q_pixmap_new4(const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html)

/// q_pixmap_new5 constructs a new QPixmap object.
///
/// @param xpm const char**
///
QPixmap* q_pixmap_new5(const char** xpm);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html)

/// q_pixmap_new6 constructs a new QPixmap object.
///
/// @param param1 QPixmap*
///
QPixmap* q_pixmap_new6(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html)

/// q_pixmap_new7 constructs a new QPixmap object.
///
/// @param fileName const char*
/// @param format const char*
///
QPixmap* q_pixmap_new7(const char* fileName, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html)

/// q_pixmap_new8 constructs a new QPixmap object.
///
/// @param fileName const char*
/// @param format const char*
/// @param flags flag of enum Qt__ImageConversionFlag
///
QPixmap* q_pixmap_new8(const char* fileName, const char* format, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#swap)
///
/// @param self QPixmap*
/// @param other QPixmap*
///
void q_pixmap_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#operator-QVariant)
///
/// @param self const QPixmap*
///
QVariant* q_pixmap_to_q_variant(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isNull)
///
/// @param self const QPixmap*
///
bool q_pixmap_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devType)
///
/// @param self const QPixmap*
///
int32_t q_pixmap_dev_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devType)
///
/// Allows for overriding the related default method
///
/// @param self QPixmap*
/// @param callback int32_t func(const QPixmap* self)
///
void q_pixmap_on_dev_type(void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devType)
///
/// Base class method implementation
///
/// @param self const QPixmap*
///
int32_t q_pixmap_super_dev_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#width)
///
/// @param self const QPixmap*
///
int32_t q_pixmap_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#height)
///
/// @param self const QPixmap*
///
int32_t q_pixmap_height(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#size)
///
/// @param self const QPixmap*
///
QSize* q_pixmap_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#rect)
///
/// @param self const QPixmap*
///
QRect* q_pixmap_rect(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#depth)
///
/// @param self const QPixmap*
///
int32_t q_pixmap_depth(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#defaultDepth)
///
int32_t q_pixmap_default_depth();

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fill)
///
/// @param self QPixmap*
///
void q_pixmap_fill(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#mask)
///
/// @param self const QPixmap*
///
QBitmap* q_pixmap_mask(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#setMask)
///
/// @param self QPixmap*
/// @param mask QBitmap*
///
void q_pixmap_set_mask(void* self, const void* mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devicePixelRatio)
///
/// @param self const QPixmap*
///
double q_pixmap_device_pixel_ratio(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#setDevicePixelRatio)
///
/// @param self QPixmap*
/// @param scaleFactor double
///
void q_pixmap_set_device_pixel_ratio(void* self, double scaleFactor);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#deviceIndependentSize)
///
/// @param self const QPixmap*
///
QSizeF* q_pixmap_device_independent_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#hasAlpha)
///
/// @param self const QPixmap*
///
bool q_pixmap_has_alpha(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#hasAlphaChannel)
///
/// @param self const QPixmap*
///
bool q_pixmap_has_alpha_channel(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
///
/// @param self const QPixmap*
///
QBitmap* q_pixmap_create_heuristic_mask(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
///
/// @param self const QPixmap*
/// @param maskColor QColor*
///
QBitmap* q_pixmap_create_mask_from_color(const void* self, const void* maskColor);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// @param self const QPixmap*
/// @param w int
/// @param h int
///
QPixmap* q_pixmap_scaled(const void* self, int w, int h);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// @param self const QPixmap*
/// @param s QSize*
///
QPixmap* q_pixmap_scaled2(const void* self, const void* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
///
/// @param self const QPixmap*
/// @param w int
///
QPixmap* q_pixmap_scaled_to_width(const void* self, int w);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
///
/// @param self const QPixmap*
/// @param h int
///
QPixmap* q_pixmap_scaled_to_height(const void* self, int h);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#transformed)
///
/// @param self const QPixmap*
/// @param param1 QTransform*
///
QPixmap* q_pixmap_transformed(const void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#trueMatrix)
///
/// @param m QTransform*
/// @param w int
/// @param h int
///
QTransform* q_pixmap_true_matrix(const void* m, int w, int h);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#toImage)
///
/// @param self const QPixmap*
///
QImage* q_pixmap_to_image(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImage)
///
/// @param image QImage*
///
QPixmap* q_pixmap_from_image(const void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImageReader)
///
/// @param imageReader QImageReader*
///
QPixmap* q_pixmap_from_image_reader(void* imageReader);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#load)
///
/// @param self QPixmap*
/// @param fileName const char*
///
bool q_pixmap_load(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// @param self QPixmap*
/// @param buf unsigned char*
/// @param lenVal uint32_t
///
bool q_pixmap_load_from_data(void* self, unsigned char* buf, uint32_t lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// @param self QPixmap*
/// @param data const char*
///
bool q_pixmap_load_from_data2(void* self, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// @param self const QPixmap*
/// @param fileName const char*
///
bool q_pixmap_save(const void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// @param self const QPixmap*
/// @param device QIODevice*
///
bool q_pixmap_save2(const void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
///
/// @param self QPixmap*
/// @param img QImage*
///
bool q_pixmap_convert_from_image(void* self, const void* img);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
///
/// @param self const QPixmap*
/// @param x int
/// @param y int
/// @param width int
/// @param height int
///
QPixmap* q_pixmap_copy(const void* self, int x, int y, int width, int height);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
///
/// @param self const QPixmap*
///
QPixmap* q_pixmap_copy2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// @param self QPixmap*
/// @param dx int
/// @param dy int
/// @param x int
/// @param y int
/// @param width int
/// @param height int
///
void q_pixmap_scroll(void* self, int dx, int dy, int x, int y, int width, int height);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// @param self QPixmap*
/// @param dx int
/// @param dy int
/// @param rect QRect*
///
void q_pixmap_scroll2(void* self, int dx, int dy, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#cacheKey)
///
/// @param self const QPixmap*
///
int64_t q_pixmap_cache_key(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isDetached)
///
/// @param self const QPixmap*
///
bool q_pixmap_is_detached(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#detach)
///
/// @param self QPixmap*
///
void q_pixmap_detach(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isQBitmap)
///
/// @param self const QPixmap*
///
bool q_pixmap_is_q_bitmap(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
///
/// @param self const QPixmap*
///
QPaintEngine* q_pixmap_paint_engine(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
///
/// Allows for overriding the related default method
///
/// @param self QPixmap*
/// @param callback QPaintEngine* func(const QPixmap* self)
///
void q_pixmap_on_paint_engine(void* self, QPaintEngine* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
///
/// Base class method implementation
///
/// @param self const QPixmap*
///
QPaintEngine* q_pixmap_super_paint_engine(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#operator-not)
///
/// @param self const QPixmap*
///
bool q_pixmap_operator_not(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#metric)
///
/// @param self const QPixmap*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_pixmap_metric(const void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#metric)
///
/// Allows for overriding the related default method
///
/// @param self QPixmap*
/// @param callback int32_t func(const QPixmap* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_pixmap_on_metric(void* self, int32_t (*callback)(const void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#metric)
///
/// Base class method implementation
///
/// @param self const QPixmap*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_pixmap_super_metric(const void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImageInPlace)
///
/// @param self QPixmap*
/// @param image QImage*
///
QPixmap* q_pixmap_from_image_in_place(void* self, void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fill)
///
/// @param self QPixmap*
/// @param fillColor QColor*
///
void q_pixmap_fill1(void* self, const void* fillColor);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
///
/// @param self const QPixmap*
/// @param clipTight bool
///
QBitmap* q_pixmap_create_heuristic_mask1(const void* self, bool clipTight);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
///
/// @param self const QPixmap*
/// @param maskColor QColor*
/// @param mode enum Qt__MaskMode
///
QBitmap* q_pixmap_create_mask_from_color2(const void* self, const void* maskColor, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// @param self const QPixmap*
/// @param w int
/// @param h int
/// @param aspectMode enum Qt__AspectRatioMode
///
QPixmap* q_pixmap_scaled3(const void* self, int w, int h, int32_t aspectMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// @param self const QPixmap*
/// @param w int
/// @param h int
/// @param aspectMode enum Qt__AspectRatioMode
/// @param mode enum Qt__TransformationMode
///
QPixmap* q_pixmap_scaled4(const void* self, int w, int h, int32_t aspectMode, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// @param self const QPixmap*
/// @param s QSize*
/// @param aspectMode enum Qt__AspectRatioMode
///
QPixmap* q_pixmap_scaled22(const void* self, const void* s, int32_t aspectMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// @param self const QPixmap*
/// @param s QSize*
/// @param aspectMode enum Qt__AspectRatioMode
/// @param mode enum Qt__TransformationMode
///
QPixmap* q_pixmap_scaled32(const void* self, const void* s, int32_t aspectMode, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
///
/// @param self const QPixmap*
/// @param w int
/// @param mode enum Qt__TransformationMode
///
QPixmap* q_pixmap_scaled_to_width2(const void* self, int w, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
///
/// @param self const QPixmap*
/// @param h int
/// @param mode enum Qt__TransformationMode
///
QPixmap* q_pixmap_scaled_to_height2(const void* self, int h, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#transformed)
///
/// @param self const QPixmap*
/// @param param1 QTransform*
/// @param mode enum Qt__TransformationMode
///
QPixmap* q_pixmap_transformed2(const void* self, const void* param1, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImage)
///
/// @param image QImage*
/// @param flags flag of enum Qt__ImageConversionFlag
///
QPixmap* q_pixmap_from_image2(const void* image, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImageReader)
///
/// @param imageReader QImageReader*
/// @param flags flag of enum Qt__ImageConversionFlag
///
QPixmap* q_pixmap_from_image_reader2(void* imageReader, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#load)
///
/// @param self QPixmap*
/// @param fileName const char*
/// @param format const char*
///
bool q_pixmap_load2(void* self, const char* fileName, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#load)
///
/// @param self QPixmap*
/// @param fileName const char*
/// @param format const char*
/// @param flags flag of enum Qt__ImageConversionFlag
///
bool q_pixmap_load3(void* self, const char* fileName, const char* format, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// @param self QPixmap*
/// @param buf unsigned char*
/// @param lenVal uint32_t
/// @param format const char*
///
bool q_pixmap_load_from_data3(void* self, unsigned char* buf, uint32_t lenVal, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// @param self QPixmap*
/// @param buf unsigned char*
/// @param lenVal uint32_t
/// @param format const char*
/// @param flags flag of enum Qt__ImageConversionFlag
///
bool q_pixmap_load_from_data4(void* self, unsigned char* buf, uint32_t lenVal, const char* format, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// @param self QPixmap*
/// @param data const char*
/// @param format const char*
///
bool q_pixmap_load_from_data22(void* self, const char* data, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// @param self QPixmap*
/// @param data const char*
/// @param format const char*
/// @param flags flag of enum Qt__ImageConversionFlag
///
bool q_pixmap_load_from_data32(void* self, const char* data, const char* format, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// @param self const QPixmap*
/// @param fileName const char*
/// @param format const char*
///
bool q_pixmap_save22(const void* self, const char* fileName, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// @param self const QPixmap*
/// @param fileName const char*
/// @param format const char*
/// @param quality int
///
bool q_pixmap_save3(const void* self, const char* fileName, const char* format, int quality);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// @param self const QPixmap*
/// @param device QIODevice*
/// @param format const char*
///
bool q_pixmap_save23(const void* self, void* device, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// @param self const QPixmap*
/// @param device QIODevice*
/// @param format const char*
/// @param quality int
///
bool q_pixmap_save32(const void* self, void* device, const char* format, int quality);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
///
/// @param self QPixmap*
/// @param img QImage*
/// @param flags flag of enum Qt__ImageConversionFlag
///
bool q_pixmap_convert_from_image2(void* self, const void* img, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
///
/// @param self const QPixmap*
/// @param rect QRect*
///
QPixmap* q_pixmap_copy1(const void* self, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// @param self QPixmap*
/// @param dx int
/// @param dy int
/// @param x int
/// @param y int
/// @param width int
/// @param height int
/// @param exposed QRegion*
///
void q_pixmap_scroll7(void* self, int dx, int dy, int x, int y, int width, int height, void* exposed);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// @param self QPixmap*
/// @param dx int
/// @param dy int
/// @param rect QRect*
/// @param exposed QRegion*
///
void q_pixmap_scroll4(void* self, int dx, int dy, const void* rect, void* exposed);

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImageInPlace)
///
/// @param self QPixmap*
/// @param image QImage*
/// @param flags flag of enum Qt__ImageConversionFlag
///
QPixmap* q_pixmap_from_image_in_place2(void* self, void* image, int32_t flags);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const QPixmap*
///
bool q_pixmap_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const QPixmap*
///
int32_t q_pixmap_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const QPixmap*
///
int32_t q_pixmap_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const QPixmap*
///
int32_t q_pixmap_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const QPixmap*
///
int32_t q_pixmap_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const QPixmap*
///
int32_t q_pixmap_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const QPixmap*
///
int32_t q_pixmap_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const QPixmap*
///
double q_pixmap_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const QPixmap*
///
int32_t q_pixmap_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_pixmap_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_pixmap_encode_metric_f(int32_t metric, double value);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPixmap*
/// @param painter QPainter*
///
void q_pixmap_init_painter(const void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPixmap*
/// @param painter QPainter*
///
void q_pixmap_super_init_painter(const void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPixmap*
/// @param callback void func(QPixmap* self, QPainter* painter)
///
void q_pixmap_on_init_painter(void* self, void (*callback)(const void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPixmap*
/// @param offset QPoint*
///
QPaintDevice* q_pixmap_redirected(const void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPixmap*
/// @param offset QPoint*
///
QPaintDevice* q_pixmap_super_redirected(const void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPixmap*
/// @param callback QPaintDevice* func(QPixmap* self, QPoint* offset)
///
void q_pixmap_on_redirected(void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPixmap*
///
QPainter* q_pixmap_shared_painter(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPixmap*
///
QPainter* q_pixmap_super_shared_painter(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPixmap*
/// @param callback QPainter* func(QPixmap* self)
///
void q_pixmap_on_shared_painter(void* self, QPainter* (*callback)(const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPixmap*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_pixmap_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPixmap*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_pixmap_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPixmap*
/// @param callback double func(QPixmap* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_pixmap_on_get_decoded_metric_f(void* self, double (*callback)(const void*, int32_t, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#dtor.QPixmap)
///
/// Delete this object from C++ memory.
///
/// @param self QPixmap*
///
void q_pixmap_delete(void* self);

#endif
