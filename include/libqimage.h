#pragma once
#ifndef SRCQT6C_LIBQIMAGE_H
#define SRCQT6C_LIBQIMAGE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qimage.html

/// q_image_new constructs a new QImage object.
///
QImage* q_image_new();

/// q_image_new2 constructs a new QImage object.
///
/// @param size QSize*
/// @param format enum QImage__Format
QImage* q_image_new2(void* size, int64_t format);

/// q_image_new3 constructs a new QImage object.
///
/// @param width int
/// @param height int
/// @param format enum QImage__Format
QImage* q_image_new3(int width, int height, int64_t format);

/// q_image_new4 constructs a new QImage object.
///
/// @param data unsigned char*
/// @param width int
/// @param height int
/// @param format enum QImage__Format
QImage* q_image_new4(unsigned char* data, int width, int height, int64_t format);

/// q_image_new5 constructs a new QImage object.
///
/// @param data unsigned char*
/// @param width int
/// @param height int
/// @param format enum QImage__Format
QImage* q_image_new5(unsigned char* data, int width, int height, int64_t format);

/// q_image_new6 constructs a new QImage object.
///
/// @param data unsigned char*
/// @param width int
/// @param height int
/// @param bytesPerLine int64_t
/// @param format enum QImage__Format
QImage* q_image_new6(unsigned char* data, int width, int height, int64_t bytesPerLine, int64_t format);

/// q_image_new7 constructs a new QImage object.
///
/// @param data unsigned char*
/// @param width int
/// @param height int
/// @param bytesPerLine int64_t
/// @param format enum QImage__Format
QImage* q_image_new7(unsigned char* data, int width, int height, int64_t bytesPerLine, int64_t format);

/// q_image_new8 constructs a new QImage object.
///
/// @param fileName const char*
QImage* q_image_new8(const char* fileName);

/// q_image_new9 constructs a new QImage object.
///
/// @param param1 QImage*
QImage* q_image_new9(void* param1);

/// q_image_new10 constructs a new QImage object.
///
/// @param fileName const char*
/// @param format const char*
QImage* q_image_new10(const char* fileName, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#operator-eq)
///
/// @param self QImage*
/// @param param1 QImage*
void q_image_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#swap)
///
/// @param self QImage*
/// @param other QImage*
void q_image_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#isNull)
///
/// @param self QImage*
bool q_image_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#devType)
///
/// @param self QImage*
int32_t q_image_dev_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#devType)
///
/// Allows for overriding the related default method
///
/// @param self QImage*
/// @param callback int32_t fn()
void q_image_on_dev_type(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#devType)
///
/// Base class method implementation
///
/// @param self QImage*
int32_t q_image_qbase_dev_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#operator-eq-eq)
///
/// @param self QImage*
/// @param param1 QImage*
bool q_image_operator_equal(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#operator-not-eq)
///
/// @param self QImage*
/// @param param1 QImage*
bool q_image_operator_not_equal(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#operator)
///
/// @param self QImage*
QVariant* q_image_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#detach)
///
/// @param self QImage*
void q_image_detach(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#isDetached)
///
/// @param self QImage*
bool q_image_is_detached(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#copy)
///
/// @param self QImage*
QImage* q_image_copy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#copy)
///
/// @param self QImage*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
QImage* q_image_copy2(void* self, int x, int y, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#format)
///
/// @param self QImage*
///
/// @return enum QImage__Format
int64_t q_image_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat)
///
/// @param self QImage*
/// @param f enum QImage__Format
QImage* q_image_convert_to_format(void* self, int64_t f);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat)
///
/// @param self QImage*
/// @param f enum QImage__Format
/// @param colorTable libqt_list /* of uint32_t */
QImage* q_image_convert_to_format2(void* self, int64_t f, libqt_list colorTable);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#reinterpretAsFormat)
///
/// @param self QImage*
/// @param f enum QImage__Format
bool q_image_reinterpret_as_format(void* self, int64_t f);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertedTo)
///
/// @param self QImage*
/// @param f enum QImage__Format
QImage* q_image_converted_to(void* self, int64_t f);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertTo)
///
/// @param self QImage*
/// @param f enum QImage__Format
void q_image_convert_to(void* self, int64_t f);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#width)
///
/// @param self QImage*
int32_t q_image_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#height)
///
/// @param self QImage*
int32_t q_image_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#size)
///
/// @param self QImage*
QSize* q_image_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#rect)
///
/// @param self QImage*
QRect* q_image_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#depth)
///
/// @param self QImage*
int32_t q_image_depth(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#colorCount)
///
/// @param self QImage*
int32_t q_image_color_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#bitPlaneCount)
///
/// @param self QImage*
int32_t q_image_bit_plane_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#color)
///
/// @param self QImage*
/// @param i int
uint32_t q_image_color(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setColor)
///
/// @param self QImage*
/// @param i int
/// @param c uint32_t
void q_image_set_color(void* self, int i, uint32_t c);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setColorCount)
///
/// @param self QImage*
/// @param colorCount int
void q_image_set_color_count(void* self, int colorCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#allGray)
///
/// @param self QImage*
bool q_image_all_gray(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#isGrayscale)
///
/// @param self QImage*
bool q_image_is_grayscale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#bits)
///
/// @param self QImage*
unsigned char* q_image_bits(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#bits)
///
/// @param self QImage*
const unsigned char* q_image_bits2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#constBits)
///
/// @param self QImage*
const unsigned char* q_image_const_bits(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#sizeInBytes)
///
/// @param self QImage*
int64_t q_image_size_in_bytes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scanLine)
///
/// @param self QImage*
/// @param param1 int
unsigned char* q_image_scan_line(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scanLine)
///
/// @param self QImage*
/// @param param1 int
const unsigned char* q_image_scan_line2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#constScanLine)
///
/// @param self QImage*
/// @param param1 int
const unsigned char* q_image_const_scan_line(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#bytesPerLine)
///
/// @param self QImage*
int64_t q_image_bytes_per_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#valid)
///
/// @param self QImage*
/// @param x int
/// @param y int
bool q_image_valid(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#valid)
///
/// @param self QImage*
/// @param pt QPoint*
bool q_image_valid2(void* self, void* pt);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#pixelIndex)
///
/// @param self QImage*
/// @param x int
/// @param y int
int32_t q_image_pixel_index(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#pixelIndex)
///
/// @param self QImage*
/// @param pt QPoint*
int32_t q_image_pixel_index2(void* self, void* pt);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#pixel)
///
/// @param self QImage*
/// @param x int
/// @param y int
uint32_t q_image_pixel(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#pixel)
///
/// @param self QImage*
/// @param pt QPoint*
uint32_t q_image_pixel2(void* self, void* pt);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setPixel)
///
/// @param self QImage*
/// @param x int
/// @param y int
/// @param index_or_rgb uint32_t
void q_image_set_pixel(void* self, int x, int y, uint32_t index_or_rgb);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setPixel)
///
/// @param self QImage*
/// @param pt QPoint*
/// @param index_or_rgb uint32_t
void q_image_set_pixel2(void* self, void* pt, uint32_t index_or_rgb);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#pixelColor)
///
/// @param self QImage*
/// @param x int
/// @param y int
QColor* q_image_pixel_color(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#pixelColor)
///
/// @param self QImage*
/// @param pt QPoint*
QColor* q_image_pixel_color2(void* self, void* pt);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setPixelColor)
///
/// @param self QImage*
/// @param x int
/// @param y int
/// @param c QColor*
void q_image_set_pixel_color(void* self, int x, int y, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setPixelColor)
///
/// @param self QImage*
/// @param pt QPoint*
/// @param c QColor*
void q_image_set_pixel_color2(void* self, void* pt, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#colorTable)
///
/// @param self QImage*
libqt_list /* of uint32_t */ q_image_color_table(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setColorTable)
///
/// @param self QImage*
/// @param colors libqt_list /* of uint32_t */
void q_image_set_color_table(void* self, libqt_list colors);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#devicePixelRatio)
///
/// @param self QImage*
double q_image_device_pixel_ratio(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setDevicePixelRatio)
///
/// @param self QImage*
/// @param scaleFactor double
void q_image_set_device_pixel_ratio(void* self, double scaleFactor);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#deviceIndependentSize)
///
/// @param self QImage*
QSizeF* q_image_device_independent_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fill)
///
/// @param self QImage*
/// @param pixel uint32_t
void q_image_fill(void* self, uint32_t pixel);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fill)
///
/// @param self QImage*
/// @param color QColor*
void q_image_fill2(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fill)
///
/// @param self QImage*
/// @param color enum Qt__GlobalColor
void q_image_fill3(void* self, int64_t color);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#hasAlphaChannel)
///
/// @param self QImage*
bool q_image_has_alpha_channel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setAlphaChannel)
///
/// @param self QImage*
/// @param alphaChannel QImage*
void q_image_set_alpha_channel(void* self, void* alphaChannel);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#createAlphaMask)
///
/// @param self QImage*
QImage* q_image_create_alpha_mask(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#createHeuristicMask)
///
/// @param self QImage*
QImage* q_image_create_heuristic_mask(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#createMaskFromColor)
///
/// @param self QImage*
/// @param color uint32_t
QImage* q_image_create_mask_from_color(void* self, uint32_t color);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaled)
///
/// @param self QImage*
/// @param w int
/// @param h int
QImage* q_image_scaled(void* self, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaled)
///
/// @param self QImage*
/// @param s QSize*
QImage* q_image_scaled2(void* self, void* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaledToWidth)
///
/// @param self QImage*
/// @param w int
QImage* q_image_scaled_to_width(void* self, int w);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaledToHeight)
///
/// @param self QImage*
/// @param h int
QImage* q_image_scaled_to_height(void* self, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#transformed)
///
/// @param self QImage*
/// @param matrix QTransform*
QImage* q_image_transformed(void* self, void* matrix);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#trueMatrix)
///
/// @param param1 QTransform*
/// @param w int
/// @param h int
QTransform* q_image_true_matrix(void* param1, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirrored)
///
/// @param self QImage*
QImage* q_image_mirrored(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#rgbSwapped)
///
/// @param self QImage*
QImage* q_image_rgb_swapped(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirror)
///
/// @param self QImage*
void q_image_mirror(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#rgbSwap)
///
/// @param self QImage*
void q_image_rgb_swap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#invertPixels)
///
/// @param self QImage*
void q_image_invert_pixels(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#colorSpace)
///
/// @param self QImage*
QColorSpace* q_image_color_space(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertedToColorSpace)
///
/// @param self QImage*
/// @param colorSpace QColorSpace*
QImage* q_image_converted_to_color_space(void* self, void* colorSpace);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertedToColorSpace)
///
/// @param self QImage*
/// @param colorSpace QColorSpace*
/// @param format enum QImage__Format
QImage* q_image_converted_to_color_space2(void* self, void* colorSpace, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToColorSpace)
///
/// @param self QImage*
/// @param colorSpace QColorSpace*
void q_image_convert_to_color_space(void* self, void* colorSpace);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToColorSpace)
///
/// @param self QImage*
/// @param colorSpace QColorSpace*
/// @param format enum QImage__Format
void q_image_convert_to_color_space2(void* self, void* colorSpace, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setColorSpace)
///
/// @param self QImage*
/// @param colorSpace QColorSpace*
void q_image_set_color_space(void* self, void* colorSpace);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#colorTransformed)
///
/// @param self QImage*
/// @param transform QColorTransform*
QImage* q_image_color_transformed(void* self, void* transform);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#colorTransformed)
///
/// @param self QImage*
/// @param transform QColorTransform*
/// @param format enum QImage__Format
QImage* q_image_color_transformed2(void* self, void* transform, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#applyColorTransform)
///
/// @param self QImage*
/// @param transform QColorTransform*
void q_image_apply_color_transform(void* self, void* transform);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#applyColorTransform)
///
/// @param self QImage*
/// @param transform QColorTransform*
/// @param format enum QImage__Format
void q_image_apply_color_transform2(void* self, void* transform, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#load)
///
/// @param self QImage*
/// @param device QIODevice*
/// @param format const char*
bool q_image_load(void* self, void* device, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#load)
///
/// @param self QImage*
/// @param fileName const char*
bool q_image_load2(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#loadFromData)
///
/// @param self QImage*
/// @param data const char*
bool q_image_load_from_data(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#loadFromData)
///
/// @param self QImage*
/// @param buf unsigned char*
/// @param lenVal int
bool q_image_load_from_data2(void* self, unsigned char* buf, int lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#loadFromData)
///
/// @param self QImage*
/// @param data const char*
bool q_image_load_from_data3(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#save)
///
/// @param self QImage*
/// @param fileName const char*
bool q_image_save(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#save)
///
/// @param self QImage*
/// @param device QIODevice*
bool q_image_save2(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fromData)
///
/// @param data const char*
QImage* q_image_from_data(const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fromData)
///
/// @param data unsigned char*
/// @param size int
QImage* q_image_from_data2(unsigned char* data, int size);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fromData)
///
/// @param data const char*
QImage* q_image_from_data3(const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#cacheKey)
///
/// @param self QImage*
long long q_image_cache_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#paintEngine)
///
/// @param self QImage*
QPaintEngine* q_image_paint_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#paintEngine)
///
/// Allows for overriding the related default method
///
/// @param self QImage*
/// @param callback QPaintEngine* fn()
void q_image_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#paintEngine)
///
/// Base class method implementation
///
/// @param self QImage*
QPaintEngine* q_image_qbase_paint_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#dotsPerMeterX)
///
/// @param self QImage*
int32_t q_image_dots_per_meter_x(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#dotsPerMeterY)
///
/// @param self QImage*
int32_t q_image_dots_per_meter_y(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setDotsPerMeterX)
///
/// @param self QImage*
/// @param dotsPerMeterX int
void q_image_set_dots_per_meter_x(void* self, int dotsPerMeterX);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setDotsPerMeterY)
///
/// @param self QImage*
/// @param dotsPerMeterY int
void q_image_set_dots_per_meter_y(void* self, int dotsPerMeterY);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#offset)
///
/// @param self QImage*
QPoint* q_image_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setOffset)
///
/// @param self QImage*
/// @param offset QPoint*
void q_image_set_offset(void* self, void* offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#textKeys)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QImage*
const char** q_image_text_keys(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QImage*
const char* q_image_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setText)
///
/// @param self QImage*
/// @param key const char*
/// @param value const char*
void q_image_set_text(void* self, const char* key, const char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#pixelFormat)
///
/// @param self QImage*
QPixelFormat* q_image_pixel_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#toPixelFormat)
///
/// @param format enum QImage__Format
QPixelFormat* q_image_to_pixel_format(int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#toImageFormat)
///
/// @param format QPixelFormat*
///
/// @return enum QImage__Format
int64_t q_image_to_image_format(void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#metric)
///
/// @param self QImage*
/// @param metric enum QPaintDevice__PaintDeviceMetric
int32_t q_image_metric(void* self, int64_t metric);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#metric)
///
/// Allows for overriding the related default method
///
/// @param self QImage*
/// @param callback int32_t fn(QImage*, enum QPaintDevice__PaintDeviceMetric)
void q_image_on_metric(void* self, int32_t (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#metric)
///
/// Base class method implementation
///
/// @param self QImage*
/// @param metric enum QPaintDevice__PaintDeviceMetric
int32_t q_image_qbase_metric(void* self, int64_t metric);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirrored_helper)
///
/// @param self QImage*
/// @param horizontal bool
/// @param vertical bool
QImage* q_image_mirrored_helper(void* self, bool horizontal, bool vertical);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirrored_helper)
///
/// Allows for overriding the related default method
///
/// @param self QImage*
/// @param callback QImage* fn(QImage*, bool, bool)
void q_image_on_mirrored_helper(void* self, QImage* (*callback)(void*, bool, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirrored_helper)
///
/// Base class method implementation
///
/// @param self QImage*
/// @param horizontal bool
/// @param vertical bool
QImage* q_image_qbase_mirrored_helper(void* self, bool horizontal, bool vertical);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#rgbSwapped_helper)
///
/// @param self QImage*
QImage* q_image_rgb_swapped_helper(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#rgbSwapped_helper)
///
/// Allows for overriding the related default method
///
/// @param self QImage*
/// @param callback QImage* fn()
void q_image_on_rgb_swapped_helper(void* self, QImage* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#rgbSwapped_helper)
///
/// Base class method implementation
///
/// @param self QImage*
QImage* q_image_qbase_rgb_swapped_helper(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirrored_inplace)
///
/// @param self QImage*
/// @param horizontal bool
/// @param vertical bool
void q_image_mirrored_inplace(void* self, bool horizontal, bool vertical);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirrored_inplace)
///
/// Allows for overriding the related default method
///
/// @param self QImage*
/// @param callback void fn(QImage*, bool, bool)
void q_image_on_mirrored_inplace(void* self, void (*callback)(void*, bool, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirrored_inplace)
///
/// Base class method implementation
///
/// @param self QImage*
/// @param horizontal bool
/// @param vertical bool
void q_image_qbase_mirrored_inplace(void* self, bool horizontal, bool vertical);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#rgbSwapped_inplace)
///
/// @param self QImage*
void q_image_rgb_swapped_inplace(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#rgbSwapped_inplace)
///
/// Allows for overriding the related default method
///
/// @param self QImage*
/// @param callback void fn()
void q_image_on_rgb_swapped_inplace(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#rgbSwapped_inplace)
///
/// Base class method implementation
///
/// @param self QImage*
void q_image_qbase_rgb_swapped_inplace(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat_helper)
///
/// @param self QImage*
/// @param format enum QImage__Format
/// @param flags flag of enum Qt__ImageConversionFlag
QImage* q_image_convert_to_format_helper(void* self, int64_t format, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat_helper)
///
/// Allows for overriding the related default method
///
/// @param self QImage*
/// @param callback QImage* fn(QImage*, enum QImage__Format, flag of enum Qt__ImageConversionFlag)
void q_image_on_convert_to_format_helper(void* self, QImage* (*callback)(void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat_helper)
///
/// Base class method implementation
///
/// @param self QImage*
/// @param format enum QImage__Format
/// @param flags flag of enum Qt__ImageConversionFlag
QImage* q_image_qbase_convert_to_format_helper(void* self, int64_t format, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat_inplace)
///
/// @param self QImage*
/// @param format enum QImage__Format
/// @param flags flag of enum Qt__ImageConversionFlag
bool q_image_convert_to_format_inplace(void* self, int64_t format, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat_inplace)
///
/// Allows for overriding the related default method
///
/// @param self QImage*
/// @param callback bool fn(QImage*, enum QImage__Format, flag of enum Qt__ImageConversionFlag)
void q_image_on_convert_to_format_inplace(void* self, bool (*callback)(void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat_inplace)
///
/// Base class method implementation
///
/// @param self QImage*
/// @param format enum QImage__Format
/// @param flags flag of enum Qt__ImageConversionFlag
bool q_image_qbase_convert_to_format_inplace(void* self, int64_t format, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#smoothScaled)
///
/// @param self QImage*
/// @param w int
/// @param h int
QImage* q_image_smooth_scaled(void* self, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#smoothScaled)
///
/// Allows for overriding the related default method
///
/// @param self QImage*
/// @param callback QImage* fn(QImage*, int, int)
void q_image_on_smooth_scaled(void* self, QImage* (*callback)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#smoothScaled)
///
/// Base class method implementation
///
/// @param self QImage*
/// @param w int
/// @param h int
QImage* q_image_qbase_smooth_scaled(void* self, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#detachMetadata)
///
/// @param self QImage*
void q_image_detach_metadata(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#detachMetadata)
///
/// Allows for overriding the related default method
///
/// @param self QImage*
/// @param callback void fn()
void q_image_on_detach_metadata(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#detachMetadata)
///
/// Base class method implementation
///
/// @param self QImage*
void q_image_qbase_detach_metadata(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#copy)
///
/// @param self QImage*
/// @param rect QRect*
QImage* q_image_copy1(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat)
///
/// @param self QImage*
/// @param f enum QImage__Format
/// @param flags flag of enum Qt__ImageConversionFlag
QImage* q_image_convert_to_format22(void* self, int64_t f, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat)
///
/// @param self QImage*
/// @param f enum QImage__Format
/// @param colorTable libqt_list /* of uint32_t */
/// @param flags flag of enum Qt__ImageConversionFlag
QImage* q_image_convert_to_format3(void* self, int64_t f, libqt_list colorTable, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertedTo)
///
/// @param self QImage*
/// @param f enum QImage__Format
/// @param flags flag of enum Qt__ImageConversionFlag
QImage* q_image_converted_to2(void* self, int64_t f, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertTo)
///
/// @param self QImage*
/// @param f enum QImage__Format
/// @param flags flag of enum Qt__ImageConversionFlag
void q_image_convert_to2(void* self, int64_t f, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#createAlphaMask)
///
/// @param self QImage*
/// @param flags flag of enum Qt__ImageConversionFlag
QImage* q_image_create_alpha_mask1(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#createHeuristicMask)
///
/// @param self QImage*
/// @param clipTight bool
QImage* q_image_create_heuristic_mask1(void* self, bool clipTight);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#createMaskFromColor)
///
/// @param self QImage*
/// @param color uint32_t
/// @param mode enum Qt__MaskMode
QImage* q_image_create_mask_from_color2(void* self, uint32_t color, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaled)
///
/// @param self QImage*
/// @param w int
/// @param h int
/// @param aspectMode enum Qt__AspectRatioMode
QImage* q_image_scaled3(void* self, int w, int h, int64_t aspectMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaled)
///
/// @param self QImage*
/// @param w int
/// @param h int
/// @param aspectMode enum Qt__AspectRatioMode
/// @param mode enum Qt__TransformationMode
QImage* q_image_scaled4(void* self, int w, int h, int64_t aspectMode, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaled)
///
/// @param self QImage*
/// @param s QSize*
/// @param aspectMode enum Qt__AspectRatioMode
QImage* q_image_scaled22(void* self, void* s, int64_t aspectMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaled)
///
/// @param self QImage*
/// @param s QSize*
/// @param aspectMode enum Qt__AspectRatioMode
/// @param mode enum Qt__TransformationMode
QImage* q_image_scaled32(void* self, void* s, int64_t aspectMode, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaledToWidth)
///
/// @param self QImage*
/// @param w int
/// @param mode enum Qt__TransformationMode
QImage* q_image_scaled_to_width2(void* self, int w, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaledToHeight)
///
/// @param self QImage*
/// @param h int
/// @param mode enum Qt__TransformationMode
QImage* q_image_scaled_to_height2(void* self, int h, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#transformed)
///
/// @param self QImage*
/// @param matrix QTransform*
/// @param mode enum Qt__TransformationMode
QImage* q_image_transformed2(void* self, void* matrix, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirrored)
///
/// @param self QImage*
/// @param horizontally bool
QImage* q_image_mirrored1(void* self, bool horizontally);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirrored)
///
/// @param self QImage*
/// @param horizontally bool
/// @param vertically bool
QImage* q_image_mirrored2(void* self, bool horizontally, bool vertically);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirror)
///
/// @param self QImage*
/// @param horizontally bool
void q_image_mirror1(void* self, bool horizontally);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirror)
///
/// @param self QImage*
/// @param horizontally bool
/// @param vertically bool
void q_image_mirror2(void* self, bool horizontally, bool vertically);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#invertPixels)
///
/// @param self QImage*
/// @param param1 enum QImage__InvertMode
void q_image_invert_pixels1(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertedToColorSpace)
///
/// @param self QImage*
/// @param colorSpace QColorSpace*
/// @param format enum QImage__Format
/// @param flags flag of enum Qt__ImageConversionFlag
QImage* q_image_converted_to_color_space3(void* self, void* colorSpace, int64_t format, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToColorSpace)
///
/// @param self QImage*
/// @param colorSpace QColorSpace*
/// @param format enum QImage__Format
/// @param flags flag of enum Qt__ImageConversionFlag
void q_image_convert_to_color_space3(void* self, void* colorSpace, int64_t format, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#colorTransformed)
///
/// @param self QImage*
/// @param transform QColorTransform*
/// @param format enum QImage__Format
/// @param flags flag of enum Qt__ImageConversionFlag
QImage* q_image_color_transformed3(void* self, void* transform, int64_t format, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#applyColorTransform)
///
/// @param self QImage*
/// @param transform QColorTransform*
/// @param format enum QImage__Format
/// @param flags flag of enum Qt__ImageConversionFlag
void q_image_apply_color_transform3(void* self, void* transform, int64_t format, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#load)
///
/// @param self QImage*
/// @param fileName const char*
/// @param format const char*
bool q_image_load22(void* self, const char* fileName, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#loadFromData)
///
/// @param self QImage*
/// @param data const char*
/// @param format const char*
bool q_image_load_from_data22(void* self, const char* data, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#loadFromData)
///
/// @param self QImage*
/// @param buf unsigned char*
/// @param lenVal int
/// @param format const char*
bool q_image_load_from_data32(void* self, unsigned char* buf, int lenVal, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#loadFromData)
///
/// @param self QImage*
/// @param data const char*
/// @param format const char*
bool q_image_load_from_data23(void* self, const char* data, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#save)
///
/// @param self QImage*
/// @param fileName const char*
/// @param format const char*
bool q_image_save22(void* self, const char* fileName, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#save)
///
/// @param self QImage*
/// @param fileName const char*
/// @param format const char*
/// @param quality int
bool q_image_save3(void* self, const char* fileName, const char* format, int quality);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#save)
///
/// @param self QImage*
/// @param device QIODevice*
/// @param format const char*
bool q_image_save23(void* self, void* device, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#save)
///
/// @param self QImage*
/// @param device QIODevice*
/// @param format const char*
/// @param quality int
bool q_image_save32(void* self, void* device, const char* format, int quality);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fromData)
///
/// @param data const char*
/// @param format const char*
QImage* q_image_from_data22(const char* data, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fromData)
///
/// @param data unsigned char*
/// @param size int
/// @param format const char*
QImage* q_image_from_data32(unsigned char* data, int size, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fromData)
///
/// @param data const char*
/// @param format const char*
QImage* q_image_from_data23(const char* data, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QImage*
/// @param key const char*
const char* q_image_text1(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#detachMetadata)
///
/// @param self QImage*
/// @param invalidateCache bool
void q_image_detach_metadata1(void* self, bool invalidateCache);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#detachMetadata)
///
/// Allows for overriding the related default method
///
/// @param self QImage*
/// @param callback void fn(QImage*, bool)
void q_image_on_detach_metadata1(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#detachMetadata)
///
/// Base class method implementation
///
/// @param self QImage*
/// @param invalidateCache bool
void q_image_qbase_detach_metadata1(void* self, bool invalidateCache);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QImage*
bool q_image_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QImage*
int32_t q_image_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QImage*
int32_t q_image_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QImage*
int32_t q_image_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QImage*
int32_t q_image_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QImage*
int32_t q_image_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QImage*
int32_t q_image_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QImage*
double q_image_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_image_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t q_image_encode_metric_f(int64_t metric, double value);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QImage*
/// @param painter QPainter*
void q_image_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QImage*
/// @param painter QPainter*
void q_image_qbase_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QImage*
/// @param callback void fn(QImage*, QPainter*)
void q_image_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QImage*
/// @param offset QPoint*
QPaintDevice* q_image_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QImage*
/// @param offset QPoint*
QPaintDevice* q_image_qbase_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QImage*
/// @param callback QPaintDevice* fn(QImage*, QPoint*)
void q_image_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QImage*
QPainter* q_image_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QImage*
QPainter* q_image_qbase_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QImage*
/// @param callback QPainter* fn()
void q_image_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QImage*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_image_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QImage*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_image_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QImage*
/// @param callback double fn(QImage*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric)
void q_image_on_get_decoded_metric_f(void* self, double (*callback)(void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#dtor.QImage)
///
/// Delete this object from C++ memory.
///
/// @param self QImage*
void q_image_delete(void* self);

/// https://doc.qt.io/qt-6/qimage.html#types

typedef enum {
    QIMAGE_INVERTMODE_INVERTRGB = 0,
    QIMAGE_INVERTMODE_INVERTRGBA = 1
} QImage__InvertMode;

typedef enum {
    QIMAGE_FORMAT_FORMAT_INVALID = 0,
    QIMAGE_FORMAT_FORMAT_MONO = 1,
    QIMAGE_FORMAT_FORMAT_MONOLSB = 2,
    QIMAGE_FORMAT_FORMAT_INDEXED8 = 3,
    QIMAGE_FORMAT_FORMAT_RGB32 = 4,
    QIMAGE_FORMAT_FORMAT_ARGB32 = 5,
    QIMAGE_FORMAT_FORMAT_ARGB32_PREMULTIPLIED = 6,
    QIMAGE_FORMAT_FORMAT_RGB16 = 7,
    QIMAGE_FORMAT_FORMAT_ARGB8565_PREMULTIPLIED = 8,
    QIMAGE_FORMAT_FORMAT_RGB666 = 9,
    QIMAGE_FORMAT_FORMAT_ARGB6666_PREMULTIPLIED = 10,
    QIMAGE_FORMAT_FORMAT_RGB555 = 11,
    QIMAGE_FORMAT_FORMAT_ARGB8555_PREMULTIPLIED = 12,
    QIMAGE_FORMAT_FORMAT_RGB888 = 13,
    QIMAGE_FORMAT_FORMAT_RGB444 = 14,
    QIMAGE_FORMAT_FORMAT_ARGB4444_PREMULTIPLIED = 15,
    QIMAGE_FORMAT_FORMAT_RGBX8888 = 16,
    QIMAGE_FORMAT_FORMAT_RGBA8888 = 17,
    QIMAGE_FORMAT_FORMAT_RGBA8888_PREMULTIPLIED = 18,
    QIMAGE_FORMAT_FORMAT_BGR30 = 19,
    QIMAGE_FORMAT_FORMAT_A2BGR30_PREMULTIPLIED = 20,
    QIMAGE_FORMAT_FORMAT_RGB30 = 21,
    QIMAGE_FORMAT_FORMAT_A2RGB30_PREMULTIPLIED = 22,
    QIMAGE_FORMAT_FORMAT_ALPHA8 = 23,
    QIMAGE_FORMAT_FORMAT_GRAYSCALE8 = 24,
    QIMAGE_FORMAT_FORMAT_RGBX64 = 25,
    QIMAGE_FORMAT_FORMAT_RGBA64 = 26,
    QIMAGE_FORMAT_FORMAT_RGBA64_PREMULTIPLIED = 27,
    QIMAGE_FORMAT_FORMAT_GRAYSCALE16 = 28,
    QIMAGE_FORMAT_FORMAT_BGR888 = 29,
    QIMAGE_FORMAT_FORMAT_RGBX16FPX4 = 30,
    QIMAGE_FORMAT_FORMAT_RGBA16FPX4 = 31,
    QIMAGE_FORMAT_FORMAT_RGBA16FPX4_PREMULTIPLIED = 32,
    QIMAGE_FORMAT_FORMAT_RGBX32FPX4 = 33,
    QIMAGE_FORMAT_FORMAT_RGBA32FPX4 = 34,
    QIMAGE_FORMAT_FORMAT_RGBA32FPX4_PREMULTIPLIED = 35,
    QIMAGE_FORMAT_FORMAT_CMYK8888 = 36,
    QIMAGE_FORMAT_NIMAGEFORMATS = 37
} QImage__Format;

#endif
