#pragma once
#ifndef LIBQBITMAP_H
#define LIBQBITMAP_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html)

/// q_bitmap_new constructs a new QBitmap object.
///
QBitmap* q_bitmap_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html)

/// q_bitmap_new2 constructs a new QBitmap object.
///
/// @param param1 QPixmap*
///
QBitmap* q_bitmap_new2(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html)

/// q_bitmap_new3 constructs a new QBitmap object.
///
/// @param w int
/// @param h int
///
QBitmap* q_bitmap_new3(int w, int h);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html)

/// q_bitmap_new4 constructs a new QBitmap object.
///
/// @param param1 QSize*
///
QBitmap* q_bitmap_new4(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html)

/// q_bitmap_new5 constructs a new QBitmap object.
///
/// @param fileName const char*
///
QBitmap* q_bitmap_new5(const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html)

/// q_bitmap_new6 constructs a new QBitmap object.
///
/// @param param1 QBitmap*
///
QBitmap* q_bitmap_new6(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html)

/// q_bitmap_new7 constructs a new QBitmap object.
///
/// @param fileName const char*
/// @param format const char*
///
QBitmap* q_bitmap_new7(const char* fileName, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#swap)
///
/// @param self QBitmap*
/// @param other QBitmap*
///
void q_bitmap_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#operator-QVariant)
///
/// @param self const QBitmap*
///
QVariant* q_bitmap_to_q_variant(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#clear)
///
/// @param self QBitmap*
///
void q_bitmap_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromImage)
///
/// @param image QImage*
///
QBitmap* q_bitmap_from_image(const void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromData)
///
/// @param size QSize*
/// @param bits unsigned char*
///
QBitmap* q_bitmap_from_data(const void* size, unsigned char* bits);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromPixmap)
///
/// @param pixmap QPixmap*
///
QBitmap* q_bitmap_from_pixmap(const void* pixmap);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#transformed)
///
/// @param self const QBitmap*
/// @param matrix QTransform*
///
QBitmap* q_bitmap_transformed(const void* self, const void* matrix);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromImage)
///
/// @param image QImage*
/// @param flags flag of enum Qt__ImageConversionFlag
///
QBitmap* q_bitmap_from_image2(const void* image, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromData)
///
/// @param size QSize*
/// @param bits unsigned char*
/// @param monoFormat enum QImage__Format
///
QBitmap* q_bitmap_from_data3(const void* size, unsigned char* bits, int32_t monoFormat);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isNull)
///
/// @param self const QBitmap*
///
bool q_bitmap_is_null(const void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#width)
///
/// @param self const QBitmap*
///
int32_t q_bitmap_width(const void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#height)
///
/// @param self const QBitmap*
///
int32_t q_bitmap_height(const void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#size)
///
/// @param self const QBitmap*
///
QSize* q_bitmap_size(const void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#rect)
///
/// @param self const QBitmap*
///
QRect* q_bitmap_rect(const void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#depth)
///
/// @param self const QBitmap*
///
int32_t q_bitmap_depth(const void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#defaultDepth)
///
int32_t q_bitmap_default_depth();

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fill)
///
/// @param self QBitmap*
///
void q_bitmap_fill(void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#mask)
///
/// @param self const QBitmap*
///
QBitmap* q_bitmap_mask(const void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#setMask)
///
/// @param self QBitmap*
/// @param mask QBitmap*
///
void q_bitmap_set_mask(void* self, const void* mask);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devicePixelRatio)
///
/// @param self const QBitmap*
///
double q_bitmap_device_pixel_ratio(const void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#setDevicePixelRatio)
///
/// @param self QBitmap*
/// @param scaleFactor double
///
void q_bitmap_set_device_pixel_ratio(void* self, double scaleFactor);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#deviceIndependentSize)
///
/// @param self const QBitmap*
///
QSizeF* q_bitmap_device_independent_size(const void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#hasAlpha)
///
/// @param self const QBitmap*
///
bool q_bitmap_has_alpha(const void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#hasAlphaChannel)
///
/// @param self const QBitmap*
///
bool q_bitmap_has_alpha_channel(const void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
///
/// @param self const QBitmap*
///
QBitmap* q_bitmap_create_heuristic_mask(const void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
///
/// @param self const QBitmap*
/// @param maskColor QColor*
///
QBitmap* q_bitmap_create_mask_from_color(const void* self, const void* maskColor);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// @param self const QBitmap*
/// @param w int
/// @param h int
///
QPixmap* q_bitmap_scaled(const void* self, int w, int h);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// @param self const QBitmap*
/// @param s QSize*
///
QPixmap* q_bitmap_scaled2(const void* self, const void* s);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
///
/// @param self const QBitmap*
/// @param w int
///
QPixmap* q_bitmap_scaled_to_width(const void* self, int w);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
///
/// @param self const QBitmap*
/// @param h int
///
QPixmap* q_bitmap_scaled_to_height(const void* self, int h);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#trueMatrix)
///
/// @param m QTransform*
/// @param w int
/// @param h int
///
QTransform* q_bitmap_true_matrix(const void* m, int w, int h);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#toImage)
///
/// @param self const QBitmap*
///
QImage* q_bitmap_to_image(const void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImageReader)
///
/// @param imageReader QImageReader*
///
QPixmap* q_bitmap_from_image_reader(void* imageReader);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#load)
///
/// @param self QBitmap*
/// @param fileName const char*
///
bool q_bitmap_load(void* self, const char* fileName);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// @param self QBitmap*
/// @param buf unsigned char*
/// @param lenVal uint32_t
///
bool q_bitmap_load_from_data(void* self, unsigned char* buf, uint32_t lenVal);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// @param self QBitmap*
/// @param data const char*
///
bool q_bitmap_load_from_data2(void* self, const char* data);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// @param self const QBitmap*
/// @param fileName const char*
///
bool q_bitmap_save(const void* self, const char* fileName);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// @param self const QBitmap*
/// @param device QIODevice*
///
bool q_bitmap_save2(const void* self, void* device);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
///
/// @param self QBitmap*
/// @param img QImage*
///
bool q_bitmap_convert_from_image(void* self, const void* img);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
///
/// @param self const QBitmap*
/// @param x int
/// @param y int
/// @param width int
/// @param height int
///
QPixmap* q_bitmap_copy(const void* self, int x, int y, int width, int height);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
///
/// @param self const QBitmap*
///
QPixmap* q_bitmap_copy2(const void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// @param self QBitmap*
/// @param dx int
/// @param dy int
/// @param x int
/// @param y int
/// @param width int
/// @param height int
///
void q_bitmap_scroll(void* self, int dx, int dy, int x, int y, int width, int height);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// @param self QBitmap*
/// @param dx int
/// @param dy int
/// @param rect QRect*
///
void q_bitmap_scroll2(void* self, int dx, int dy, const void* rect);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#cacheKey)
///
/// @param self const QBitmap*
///
int64_t q_bitmap_cache_key(const void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isDetached)
///
/// @param self const QBitmap*
///
bool q_bitmap_is_detached(const void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#detach)
///
/// @param self QBitmap*
///
void q_bitmap_detach(void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isQBitmap)
///
/// @param self const QBitmap*
///
bool q_bitmap_is_q_bitmap(const void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#operator-not)
///
/// @param self const QBitmap*
///
bool q_bitmap_operator_not(const void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fill)
///
/// @param self QBitmap*
/// @param fillColor QColor*
///
void q_bitmap_fill1(void* self, const void* fillColor);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
///
/// @param self const QBitmap*
/// @param clipTight bool
///
QBitmap* q_bitmap_create_heuristic_mask1(const void* self, bool clipTight);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
///
/// @param self const QBitmap*
/// @param maskColor QColor*
/// @param mode enum Qt__MaskMode
///
QBitmap* q_bitmap_create_mask_from_color2(const void* self, const void* maskColor, int32_t mode);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// @param self const QBitmap*
/// @param w int
/// @param h int
/// @param aspectMode enum Qt__AspectRatioMode
///
QPixmap* q_bitmap_scaled3(const void* self, int w, int h, int32_t aspectMode);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// @param self const QBitmap*
/// @param w int
/// @param h int
/// @param aspectMode enum Qt__AspectRatioMode
/// @param mode enum Qt__TransformationMode
///
QPixmap* q_bitmap_scaled4(const void* self, int w, int h, int32_t aspectMode, int32_t mode);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// @param self const QBitmap*
/// @param s QSize*
/// @param aspectMode enum Qt__AspectRatioMode
///
QPixmap* q_bitmap_scaled22(const void* self, const void* s, int32_t aspectMode);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// @param self const QBitmap*
/// @param s QSize*
/// @param aspectMode enum Qt__AspectRatioMode
/// @param mode enum Qt__TransformationMode
///
QPixmap* q_bitmap_scaled32(const void* self, const void* s, int32_t aspectMode, int32_t mode);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
///
/// @param self const QBitmap*
/// @param w int
/// @param mode enum Qt__TransformationMode
///
QPixmap* q_bitmap_scaled_to_width2(const void* self, int w, int32_t mode);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
///
/// @param self const QBitmap*
/// @param h int
/// @param mode enum Qt__TransformationMode
///
QPixmap* q_bitmap_scaled_to_height2(const void* self, int h, int32_t mode);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#transformed)
///
/// @param self const QBitmap*
/// @param param1 QTransform*
/// @param mode enum Qt__TransformationMode
///
QPixmap* q_bitmap_transformed2(const void* self, const void* param1, int32_t mode);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImageReader)
///
/// @param imageReader QImageReader*
/// @param flags flag of enum Qt__ImageConversionFlag
///
QPixmap* q_bitmap_from_image_reader2(void* imageReader, int32_t flags);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#load)
///
/// @param self QBitmap*
/// @param fileName const char*
/// @param format const char*
///
bool q_bitmap_load2(void* self, const char* fileName, const char* format);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#load)
///
/// @param self QBitmap*
/// @param fileName const char*
/// @param format const char*
/// @param flags flag of enum Qt__ImageConversionFlag
///
bool q_bitmap_load3(void* self, const char* fileName, const char* format, int32_t flags);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// @param self QBitmap*
/// @param buf unsigned char*
/// @param lenVal uint32_t
/// @param format const char*
///
bool q_bitmap_load_from_data3(void* self, unsigned char* buf, uint32_t lenVal, const char* format);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// @param self QBitmap*
/// @param buf unsigned char*
/// @param lenVal uint32_t
/// @param format const char*
/// @param flags flag of enum Qt__ImageConversionFlag
///
bool q_bitmap_load_from_data4(void* self, unsigned char* buf, uint32_t lenVal, const char* format, int32_t flags);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// @param self QBitmap*
/// @param data const char*
/// @param format const char*
///
bool q_bitmap_load_from_data22(void* self, const char* data, const char* format);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// @param self QBitmap*
/// @param data const char*
/// @param format const char*
/// @param flags flag of enum Qt__ImageConversionFlag
///
bool q_bitmap_load_from_data32(void* self, const char* data, const char* format, int32_t flags);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// @param self const QBitmap*
/// @param fileName const char*
/// @param format const char*
///
bool q_bitmap_save22(const void* self, const char* fileName, const char* format);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// @param self const QBitmap*
/// @param fileName const char*
/// @param format const char*
/// @param quality int
///
bool q_bitmap_save3(const void* self, const char* fileName, const char* format, int quality);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// @param self const QBitmap*
/// @param device QIODevice*
/// @param format const char*
///
bool q_bitmap_save23(const void* self, void* device, const char* format);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// @param self const QBitmap*
/// @param device QIODevice*
/// @param format const char*
/// @param quality int
///
bool q_bitmap_save32(const void* self, void* device, const char* format, int quality);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
///
/// @param self QBitmap*
/// @param img QImage*
/// @param flags flag of enum Qt__ImageConversionFlag
///
bool q_bitmap_convert_from_image2(void* self, const void* img, int32_t flags);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
///
/// @param self const QBitmap*
/// @param rect QRect*
///
QPixmap* q_bitmap_copy1(const void* self, const void* rect);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// @param self QBitmap*
/// @param dx int
/// @param dy int
/// @param x int
/// @param y int
/// @param width int
/// @param height int
/// @param exposed QRegion*
///
void q_bitmap_scroll7(void* self, int dx, int dy, int x, int y, int width, int height, void* exposed);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// @param self QBitmap*
/// @param dx int
/// @param dy int
/// @param rect QRect*
/// @param exposed QRegion*
///
void q_bitmap_scroll4(void* self, int dx, int dy, const void* rect, void* exposed);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const QBitmap*
///
bool q_bitmap_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const QBitmap*
///
int32_t q_bitmap_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const QBitmap*
///
int32_t q_bitmap_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const QBitmap*
///
int32_t q_bitmap_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const QBitmap*
///
int32_t q_bitmap_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const QBitmap*
///
int32_t q_bitmap_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const QBitmap*
///
int32_t q_bitmap_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const QBitmap*
///
double q_bitmap_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const QBitmap*
///
int32_t q_bitmap_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_bitmap_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_bitmap_encode_metric_f(int32_t metric, double value);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBitmap*
///
int32_t q_bitmap_dev_type(const void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBitmap*
///
int32_t q_bitmap_super_dev_type(const void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBitmap*
/// @param callback int32_t func(QBitmap* self)
///
void q_bitmap_on_dev_type(void* self, int32_t (*callback)(const void*));

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBitmap*
///
QPaintEngine* q_bitmap_paint_engine(const void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBitmap*
///
QPaintEngine* q_bitmap_super_paint_engine(const void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBitmap*
/// @param callback QPaintEngine* func(QBitmap* self)
///
void q_bitmap_on_paint_engine(void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBitmap*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_bitmap_metric(const void* self, int32_t param1);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBitmap*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_bitmap_super_metric(const void* self, int32_t param1);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBitmap*
/// @param callback int32_t func(QBitmap* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_bitmap_on_metric(void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBitmap*
/// @param painter QPainter*
///
void q_bitmap_init_painter(const void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBitmap*
/// @param painter QPainter*
///
void q_bitmap_super_init_painter(const void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBitmap*
/// @param callback void func(QBitmap* self, QPainter* painter)
///
void q_bitmap_on_init_painter(void* self, void (*callback)(const void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBitmap*
/// @param offset QPoint*
///
QPaintDevice* q_bitmap_redirected(const void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBitmap*
/// @param offset QPoint*
///
QPaintDevice* q_bitmap_super_redirected(const void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBitmap*
/// @param callback QPaintDevice* func(QBitmap* self, QPoint* offset)
///
void q_bitmap_on_redirected(void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBitmap*
///
QPainter* q_bitmap_shared_painter(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBitmap*
///
QPainter* q_bitmap_super_shared_painter(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBitmap*
/// @param callback QPainter* func(QBitmap* self)
///
void q_bitmap_on_shared_painter(void* self, QPainter* (*callback)(const void*));

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImageInPlace)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBitmap*
/// @param image QImage*
///
QPixmap* q_bitmap_from_image_in_place(void* self, void* image);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImageInPlace)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBitmap*
/// @param image QImage*
///
QPixmap* q_bitmap_super_from_image_in_place(void* self, void* image);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fromImageInPlace)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBitmap*
/// @param callback QPixmap* func(QBitmap* self, QImage* image)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_bitmap_on_from_image_in_place(void* self, QPixmap* (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBitmap*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_bitmap_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBitmap*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_bitmap_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBitmap*
/// @param callback double func(QBitmap* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_bitmap_on_get_decoded_metric_f(void* self, double (*callback)(const void*, int32_t, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#dtor.QBitmap)
///
/// Delete this object from C++ memory.
///
/// @param self QBitmap*
///
void q_bitmap_delete(void* self);

#endif
