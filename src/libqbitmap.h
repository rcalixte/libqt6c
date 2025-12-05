#pragma once
#ifndef SRC_QT6C_LIBQBITMAP_H
#define SRC_QT6C_LIBQBITMAP_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QBitmap* q_bitmap_new2(void* param1);

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
QBitmap* q_bitmap_new4(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html)

/// q_bitmap_new5 constructs a new QBitmap object.
///
/// @param fileName const char*
///
QBitmap* q_bitmap_new5(const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html)

/// q_bitmap_new6 constructs a new QBitmap object.
///
/// @param fileName const char*
/// @param format const char*
///
QBitmap* q_bitmap_new6(const char* fileName, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#operator-eq)
///
/// @param self QBitmap*
/// @param param1 QPixmap*
///
void q_bitmap_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#swap)
///
/// @param self QBitmap*
/// @param other QBitmap*
///
void q_bitmap_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#operator)
///
/// @param self QBitmap*
///
QVariant* q_bitmap_to_q_variant(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#clear)
///
/// @param self QBitmap*
///
void q_bitmap_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromImage)
///
/// @param image QImage*
///
QBitmap* q_bitmap_from_image(void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromData)
///
/// @param size QSize*
/// @param bits unsigned char*
///
QBitmap* q_bitmap_from_data(void* size, unsigned char* bits);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromPixmap)
///
/// @param pixmap QPixmap*
///
QBitmap* q_bitmap_from_pixmap(void* pixmap);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#transformed)
///
/// @param self QBitmap*
/// @param matrix QTransform*
///
QBitmap* q_bitmap_transformed(void* self, void* matrix);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#operator-eq)
///
/// @param self QBitmap*
/// @param param1 QBitmap*
///
void q_bitmap_operator_assign2(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromImage)
///
/// @param image QImage*
/// @param flags flag of enum Qt__ImageConversionFlag
///
QBitmap* q_bitmap_from_image2(void* image, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#fromData)
///
/// @param size QSize*
/// @param bits unsigned char*
/// @param monoFormat enum QImage__Format
///
QBitmap* q_bitmap_from_data3(void* size, unsigned char* bits, int32_t monoFormat);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isNull)
///
/// @param self QBitmap*
///
bool q_bitmap_is_null(void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#width)
///
/// @param self QBitmap*
///
int32_t q_bitmap_width(void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#height)
///
/// @param self QBitmap*
///
int32_t q_bitmap_height(void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#size)
///
/// @param self QBitmap*
///
QSize* q_bitmap_size(void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#rect)
///
/// @param self QBitmap*
///
QRect* q_bitmap_rect(void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#depth)
///
/// @param self QBitmap*
///
int32_t q_bitmap_depth(void* self);

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
/// @param self QBitmap*
///
QBitmap* q_bitmap_mask(void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#setMask)
///
/// @param self QBitmap*
/// @param mask QBitmap*
///
void q_bitmap_set_mask(void* self, void* mask);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devicePixelRatio)
///
/// @param self QBitmap*
///
double q_bitmap_device_pixel_ratio(void* self);

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
/// @param self QBitmap*
///
QSizeF* q_bitmap_device_independent_size(void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#hasAlpha)
///
/// @param self QBitmap*
///
bool q_bitmap_has_alpha(void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#hasAlphaChannel)
///
/// @param self QBitmap*
///
bool q_bitmap_has_alpha_channel(void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
///
/// @param self QBitmap*
///
QBitmap* q_bitmap_create_heuristic_mask(void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
///
/// @param self QBitmap*
/// @param maskColor QColor*
///
QBitmap* q_bitmap_create_mask_from_color(void* self, void* maskColor);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// @param self QBitmap*
/// @param w int
/// @param h int
///
QPixmap* q_bitmap_scaled(void* self, int w, int h);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// @param self QBitmap*
/// @param s QSize*
///
QPixmap* q_bitmap_scaled2(void* self, void* s);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
///
/// @param self QBitmap*
/// @param w int
///
QPixmap* q_bitmap_scaled_to_width(void* self, int w);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
///
/// @param self QBitmap*
/// @param h int
///
QPixmap* q_bitmap_scaled_to_height(void* self, int h);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#trueMatrix)
///
/// @param m QTransform*
/// @param w int
/// @param h int
///
QTransform* q_bitmap_true_matrix(void* m, int w, int h);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#toImage)
///
/// @param self QBitmap*
///
QImage* q_bitmap_to_image(void* self);

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
/// @param self QBitmap*
/// @param fileName const char*
///
bool q_bitmap_save(void* self, const char* fileName);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// @param self QBitmap*
/// @param device QIODevice*
///
bool q_bitmap_save2(void* self, void* device);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
///
/// @param self QBitmap*
/// @param img QImage*
///
bool q_bitmap_convert_from_image(void* self, void* img);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
///
/// @param self QBitmap*
/// @param x int
/// @param y int
/// @param width int
/// @param height int
///
QPixmap* q_bitmap_copy(void* self, int x, int y, int width, int height);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
///
/// @param self QBitmap*
///
QPixmap* q_bitmap_copy2(void* self);

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
void q_bitmap_scroll2(void* self, int dx, int dy, void* rect);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#cacheKey)
///
/// @param self QBitmap*
///
long long q_bitmap_cache_key(void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#isDetached)
///
/// @param self QBitmap*
///
bool q_bitmap_is_detached(void* self);

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
/// @param self QBitmap*
///
bool q_bitmap_is_q_bitmap(void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#operator-not)
///
/// @param self QBitmap*
///
bool q_bitmap_operator_not(void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#fill)
///
/// @param self QBitmap*
/// @param fillColor QColor*
///
void q_bitmap_fill1(void* self, void* fillColor);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
///
/// @param self QBitmap*
/// @param clipTight bool
///
QBitmap* q_bitmap_create_heuristic_mask1(void* self, bool clipTight);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
///
/// @param self QBitmap*
/// @param maskColor QColor*
/// @param mode enum Qt__MaskMode
///
QBitmap* q_bitmap_create_mask_from_color2(void* self, void* maskColor, int32_t mode);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// @param self QBitmap*
/// @param w int
/// @param h int
/// @param aspectMode enum Qt__AspectRatioMode
///
QPixmap* q_bitmap_scaled3(void* self, int w, int h, int32_t aspectMode);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// @param self QBitmap*
/// @param w int
/// @param h int
/// @param aspectMode enum Qt__AspectRatioMode
/// @param mode enum Qt__TransformationMode
///
QPixmap* q_bitmap_scaled4(void* self, int w, int h, int32_t aspectMode, int32_t mode);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// @param self QBitmap*
/// @param s QSize*
/// @param aspectMode enum Qt__AspectRatioMode
///
QPixmap* q_bitmap_scaled22(void* self, void* s, int32_t aspectMode);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// @param self QBitmap*
/// @param s QSize*
/// @param aspectMode enum Qt__AspectRatioMode
/// @param mode enum Qt__TransformationMode
///
QPixmap* q_bitmap_scaled32(void* self, void* s, int32_t aspectMode, int32_t mode);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
///
/// @param self QBitmap*
/// @param w int
/// @param mode enum Qt__TransformationMode
///
QPixmap* q_bitmap_scaled_to_width2(void* self, int w, int32_t mode);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
///
/// @param self QBitmap*
/// @param h int
/// @param mode enum Qt__TransformationMode
///
QPixmap* q_bitmap_scaled_to_height2(void* self, int h, int32_t mode);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#transformed)
///
/// @param self QBitmap*
/// @param param1 QTransform*
/// @param mode enum Qt__TransformationMode
///
QPixmap* q_bitmap_transformed2(void* self, void* param1, int32_t mode);

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
/// @param self QBitmap*
/// @param fileName const char*
/// @param format const char*
///
bool q_bitmap_save22(void* self, const char* fileName, const char* format);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// @param self QBitmap*
/// @param fileName const char*
/// @param format const char*
/// @param quality int
///
bool q_bitmap_save3(void* self, const char* fileName, const char* format, int quality);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// @param self QBitmap*
/// @param device QIODevice*
/// @param format const char*
///
bool q_bitmap_save23(void* self, void* device, const char* format);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// @param self QBitmap*
/// @param device QIODevice*
/// @param format const char*
/// @param quality int
///
bool q_bitmap_save32(void* self, void* device, const char* format, int quality);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
///
/// @param self QBitmap*
/// @param img QImage*
/// @param flags flag of enum Qt__ImageConversionFlag
///
bool q_bitmap_convert_from_image2(void* self, void* img, int32_t flags);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#copy)
///
/// @param self QBitmap*
/// @param rect QRect*
///
QPixmap* q_bitmap_copy1(void* self, void* rect);

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
void q_bitmap_scroll4(void* self, int dx, int dy, void* rect, void* exposed);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QBitmap*
///
bool q_bitmap_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QBitmap*
///
int32_t q_bitmap_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QBitmap*
///
int32_t q_bitmap_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QBitmap*
///
int32_t q_bitmap_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QBitmap*
///
int32_t q_bitmap_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QBitmap*
///
int32_t q_bitmap_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QBitmap*
///
int32_t q_bitmap_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QBitmap*
///
double q_bitmap_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QBitmap*
///
int32_t q_bitmap_color_count(void* self);

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
/// @param self QBitmap*
///
int32_t q_bitmap_dev_type(void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBitmap*
///
int32_t q_bitmap_qbase_dev_type(void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBitmap*
/// @param callback int32_t func()
///
void q_bitmap_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBitmap*
///
QPaintEngine* q_bitmap_paint_engine(void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBitmap*
///
QPaintEngine* q_bitmap_qbase_paint_engine(void* self);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBitmap*
/// @param callback QPaintEngine* func()
///
void q_bitmap_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBitmap*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_bitmap_metric(void* self, int32_t param1);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBitmap*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_bitmap_qbase_metric(void* self, int32_t param1);

/// Inherited from QPixmap
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpixmap.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBitmap*
/// @param callback int32_t func(QBitmap* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_bitmap_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBitmap*
/// @param painter QPainter*
///
void q_bitmap_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBitmap*
/// @param painter QPainter*
///
void q_bitmap_qbase_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBitmap*
/// @param callback void func(QBitmap* self, QPainter* painter)
///
void q_bitmap_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBitmap*
/// @param offset QPoint*
///
QPaintDevice* q_bitmap_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBitmap*
/// @param offset QPoint*
///
QPaintDevice* q_bitmap_qbase_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBitmap*
/// @param callback QPaintDevice* func(QBitmap* self, QPoint* offset)
///
void q_bitmap_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBitmap*
///
QPainter* q_bitmap_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBitmap*
///
QPainter* q_bitmap_qbase_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBitmap*
/// @param callback QPainter* func()
///
void q_bitmap_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBitmap*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_bitmap_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBitmap*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_bitmap_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBitmap*
/// @param callback double func(QBitmap* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_bitmap_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qbitmap.html#dtor.QBitmap)
///
/// Delete this object from C++ memory.
///
/// @param self QBitmap*
///
void q_bitmap_delete(void* self);

#endif
