#pragma once
#ifndef SRCQT6C_LIBQIMAGE_H
#define SRCQT6C_LIBQIMAGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqbytearrayview.h"
#include "libqcolor.h"
#include "libqcolorspace.h"
#include "libqcolortransform.h"
#include "libqiodevice.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpixelformat.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqsize.h"
#include <string.h>
#include "libqtransform.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qimage.html

/// q_image_new constructs a new QImage object.
///
///
QImage* q_image_new();

/// q_image_new2 constructs a new QImage object.
///
/// ``` QSize* size, enum QImage__Format format ```
QImage* q_image_new2(void* size, int64_t format);

/// q_image_new3 constructs a new QImage object.
///
/// ``` int width, int height, enum QImage__Format format ```
QImage* q_image_new3(int width, int height, int64_t format);

/// q_image_new4 constructs a new QImage object.
///
/// ``` unsigned char* data, int width, int height, enum QImage__Format format ```
QImage* q_image_new4(unsigned char* data, int width, int height, int64_t format);

/// q_image_new5 constructs a new QImage object.
///
/// ``` unsigned char* data, int width, int height, enum QImage__Format format ```
QImage* q_image_new5(unsigned char* data, int width, int height, int64_t format);

/// q_image_new6 constructs a new QImage object.
///
/// ``` unsigned char* data, int width, int height, int64_t bytesPerLine, enum QImage__Format format ```
QImage* q_image_new6(unsigned char* data, int width, int height, int64_t bytesPerLine, int64_t format);

/// q_image_new7 constructs a new QImage object.
///
/// ``` unsigned char* data, int width, int height, int64_t bytesPerLine, enum QImage__Format format ```
QImage* q_image_new7(unsigned char* data, int width, int height, int64_t bytesPerLine, int64_t format);

/// q_image_new8 constructs a new QImage object.
///
/// ``` const char* fileName ```
QImage* q_image_new8(const char* fileName);

/// q_image_new9 constructs a new QImage object.
///
/// ``` QImage* param1 ```
QImage* q_image_new9(void* param1);

/// q_image_new10 constructs a new QImage object.
///
/// ``` const char* fileName, const char* format ```
QImage* q_image_new10(const char* fileName, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#operator=)
///
/// ``` QImage* self, QImage* param1 ```
void q_image_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#swap)
///
/// ``` QImage* self, QImage* other ```
void q_image_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#isNull)
///
/// ``` QImage* self ```
bool q_image_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#devType)
///
/// ``` QImage* self ```
int32_t q_image_dev_type(void* self);

/// Allows for overriding the related default method
///
/// ``` QImage* self, int32_t (*slot)() ```
void q_image_on_dev_type(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QImage* self ```
int32_t q_image_qbase_dev_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#operator==)
///
/// ``` QImage* self, QImage* param1 ```
bool q_image_operator_equal(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#operator!=)
///
/// ``` QImage* self, QImage* param1 ```
bool q_image_operator_not_equal(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#operator QVariant)
///
/// ``` QImage* self ```
QVariant* q_image_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#detach)
///
/// ``` QImage* self ```
void q_image_detach(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#isDetached)
///
/// ``` QImage* self ```
bool q_image_is_detached(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#copy)
///
/// ``` QImage* self ```
QImage* q_image_copy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#copy)
///
/// ``` QImage* self, int x, int y, int w, int h ```
QImage* q_image_copy2(void* self, int x, int y, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#format)
///
/// ``` QImage* self ```
int64_t q_image_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat)
///
/// ``` QImage* self, enum QImage__Format f ```
QImage* q_image_convert_to_format(void* self, int64_t f);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat)
///
/// ``` QImage* self, enum QImage__Format f, unsigned int* colorTable[] ```
QImage* q_image_convert_to_format2(void* self, int64_t f, unsigned int* colorTable[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#reinterpretAsFormat)
///
/// ``` QImage* self, enum QImage__Format f ```
bool q_image_reinterpret_as_format(void* self, int64_t f);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertedTo)
///
/// ``` QImage* self, enum QImage__Format f ```
QImage* q_image_converted_to(void* self, int64_t f);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertTo)
///
/// ``` QImage* self, enum QImage__Format f ```
void q_image_convert_to(void* self, int64_t f);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#width)
///
/// ``` QImage* self ```
int32_t q_image_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#height)
///
/// ``` QImage* self ```
int32_t q_image_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#size)
///
/// ``` QImage* self ```
QSize* q_image_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#rect)
///
/// ``` QImage* self ```
QRect* q_image_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#depth)
///
/// ``` QImage* self ```
int32_t q_image_depth(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#colorCount)
///
/// ``` QImage* self ```
int32_t q_image_color_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#bitPlaneCount)
///
/// ``` QImage* self ```
int32_t q_image_bit_plane_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#color)
///
/// ``` QImage* self, int i ```
uint32_t q_image_color(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setColor)
///
/// ``` QImage* self, int i, uint32_t c ```
void q_image_set_color(void* self, int i, uint32_t c);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setColorCount)
///
/// ``` QImage* self, int colorCount ```
void q_image_set_color_count(void* self, int colorCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#allGray)
///
/// ``` QImage* self ```
bool q_image_all_gray(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#isGrayscale)
///
/// ``` QImage* self ```
bool q_image_is_grayscale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#bits)
///
/// ``` QImage* self ```
unsigned char* q_image_bits(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#bits)
///
/// ``` QImage* self ```
unsigned char* q_image_bits2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#constBits)
///
/// ``` QImage* self ```
unsigned char* q_image_const_bits(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#sizeInBytes)
///
/// ``` QImage* self ```
int64_t q_image_size_in_bytes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scanLine)
///
/// ``` QImage* self, int param1 ```
unsigned char* q_image_scan_line(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scanLine)
///
/// ``` QImage* self, int param1 ```
unsigned char* q_image_scan_line_with_int(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#constScanLine)
///
/// ``` QImage* self, int param1 ```
unsigned char* q_image_const_scan_line(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#bytesPerLine)
///
/// ``` QImage* self ```
int64_t q_image_bytes_per_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#valid)
///
/// ``` QImage* self, int x, int y ```
bool q_image_valid(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#valid)
///
/// ``` QImage* self, QPoint* pt ```
bool q_image_valid_with_pt(void* self, void* pt);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#pixelIndex)
///
/// ``` QImage* self, int x, int y ```
int32_t q_image_pixel_index(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#pixelIndex)
///
/// ``` QImage* self, QPoint* pt ```
int32_t q_image_pixel_index_with_pt(void* self, void* pt);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#pixel)
///
/// ``` QImage* self, int x, int y ```
uint32_t q_image_pixel(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#pixel)
///
/// ``` QImage* self, QPoint* pt ```
uint32_t q_image_pixel_with_pt(void* self, void* pt);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setPixel)
///
/// ``` QImage* self, int x, int y, uint32_t index_or_rgb ```
void q_image_set_pixel(void* self, int x, int y, uint32_t index_or_rgb);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setPixel)
///
/// ``` QImage* self, QPoint* pt, uint32_t index_or_rgb ```
void q_image_set_pixel2(void* self, void* pt, uint32_t index_or_rgb);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#pixelColor)
///
/// ``` QImage* self, int x, int y ```
QColor* q_image_pixel_color(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#pixelColor)
///
/// ``` QImage* self, QPoint* pt ```
QColor* q_image_pixel_color_with_pt(void* self, void* pt);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setPixelColor)
///
/// ``` QImage* self, int x, int y, QColor* c ```
void q_image_set_pixel_color(void* self, int x, int y, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setPixelColor)
///
/// ``` QImage* self, QPoint* pt, QColor* c ```
void q_image_set_pixel_color2(void* self, void* pt, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#colorTable)
///
/// ``` QImage* self ```
libqt_list /* of uint32_t */ q_image_color_table(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setColorTable)
///
/// ``` QImage* self, unsigned int* colors[] ```
void q_image_set_color_table(void* self, unsigned int* colors[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#devicePixelRatio)
///
/// ``` QImage* self ```
double q_image_device_pixel_ratio(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setDevicePixelRatio)
///
/// ``` QImage* self, double scaleFactor ```
void q_image_set_device_pixel_ratio(void* self, double scaleFactor);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#deviceIndependentSize)
///
/// ``` QImage* self ```
QSizeF* q_image_device_independent_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fill)
///
/// ``` QImage* self, uint32_t pixel ```
void q_image_fill(void* self, uint32_t pixel);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fill)
///
/// ``` QImage* self, QColor* color ```
void q_image_fill_with_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fill)
///
/// ``` QImage* self, enum Qt__GlobalColor color ```
void q_image_fill2(void* self, int64_t color);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#hasAlphaChannel)
///
/// ``` QImage* self ```
bool q_image_has_alpha_channel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setAlphaChannel)
///
/// ``` QImage* self, QImage* alphaChannel ```
void q_image_set_alpha_channel(void* self, void* alphaChannel);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#createAlphaMask)
///
/// ``` QImage* self ```
QImage* q_image_create_alpha_mask(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#createHeuristicMask)
///
/// ``` QImage* self ```
QImage* q_image_create_heuristic_mask(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#createMaskFromColor)
///
/// ``` QImage* self, uint32_t color ```
QImage* q_image_create_mask_from_color(void* self, uint32_t color);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaled)
///
/// ``` QImage* self, int w, int h ```
QImage* q_image_scaled(void* self, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaled)
///
/// ``` QImage* self, QSize* s ```
QImage* q_image_scaled_with_q_size(void* self, void* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaledToWidth)
///
/// ``` QImage* self, int w ```
QImage* q_image_scaled_to_width(void* self, int w);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaledToHeight)
///
/// ``` QImage* self, int h ```
QImage* q_image_scaled_to_height(void* self, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#transformed)
///
/// ``` QImage* self, QTransform* matrix ```
QImage* q_image_transformed(void* self, void* matrix);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#trueMatrix)
///
/// ``` QTransform* param1, int w, int h ```
QTransform* q_image_true_matrix(void* param1, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirrored)
///
/// ``` QImage* self ```
QImage* q_image_mirrored(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#rgbSwapped)
///
/// ``` QImage* self ```
QImage* q_image_rgb_swapped(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirror)
///
/// ``` QImage* self ```
void q_image_mirror(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#rgbSwap)
///
/// ``` QImage* self ```
void q_image_rgb_swap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#invertPixels)
///
/// ``` QImage* self ```
void q_image_invert_pixels(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#colorSpace)
///
/// ``` QImage* self ```
QColorSpace* q_image_color_space(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertedToColorSpace)
///
/// ``` QImage* self, QColorSpace* param1 ```
QImage* q_image_converted_to_color_space(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToColorSpace)
///
/// ``` QImage* self, QColorSpace* param1 ```
void q_image_convert_to_color_space(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setColorSpace)
///
/// ``` QImage* self, QColorSpace* colorSpace ```
void q_image_set_color_space(void* self, void* colorSpace);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#colorTransformed)
///
/// ``` QImage* self, QColorTransform* transform ```
QImage* q_image_color_transformed(void* self, void* transform);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#applyColorTransform)
///
/// ``` QImage* self, QColorTransform* transform ```
void q_image_apply_color_transform(void* self, void* transform);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#load)
///
/// ``` QImage* self, QIODevice* device, const char* format ```
bool q_image_load(void* self, void* device, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#load)
///
/// ``` QImage* self, const char* fileName ```
bool q_image_load_with_file_name(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#loadFromData)
///
/// ``` QImage* self, const char* data ```
bool q_image_load_from_data(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#loadFromData)
///
/// ``` QImage* self, unsigned char* buf, int lenVal ```
bool q_image_load_from_data2(void* self, unsigned char* buf, int lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#loadFromData)
///
/// ``` QImage* self, const char* data ```
bool q_image_load_from_data_with_data(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#save)
///
/// ``` QImage* self, const char* fileName ```
bool q_image_save(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#save)
///
/// ``` QImage* self, QIODevice* device ```
bool q_image_save_with_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fromData)
///
/// ``` const char* data ```
QImage* q_image_from_data(const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fromData)
///
/// ``` unsigned char* data, int size ```
QImage* q_image_from_data2(unsigned char* data, int size);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fromData)
///
/// ``` const char* data ```
QImage* q_image_from_data_with_data(const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#cacheKey)
///
/// ``` QImage* self ```
long long q_image_cache_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#paintEngine)
///
/// ``` QImage* self ```
QPaintEngine* q_image_paint_engine(void* self);

/// Allows for overriding the related default method
///
/// ``` QImage* self, QPaintEngine* (*slot)() ```
void q_image_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Base class method implementation
///
/// ``` QImage* self ```
QPaintEngine* q_image_qbase_paint_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#dotsPerMeterX)
///
/// ``` QImage* self ```
int32_t q_image_dots_per_meter_x(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#dotsPerMeterY)
///
/// ``` QImage* self ```
int32_t q_image_dots_per_meter_y(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setDotsPerMeterX)
///
/// ``` QImage* self, int dotsPerMeterX ```
void q_image_set_dots_per_meter_x(void* self, int dotsPerMeterX);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setDotsPerMeterY)
///
/// ``` QImage* self, int dotsPerMeterY ```
void q_image_set_dots_per_meter_y(void* self, int dotsPerMeterY);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#offset)
///
/// ``` QImage* self ```
QPoint* q_image_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setOffset)
///
/// ``` QImage* self, QPoint* offset ```
void q_image_set_offset(void* self, void* offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#textKeys)
///
/// ``` QImage* self ```
const char** q_image_text_keys(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#text)
///
/// ``` QImage* self ```
const char* q_image_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#setText)
///
/// ``` QImage* self, const char* key, const char* value ```
void q_image_set_text(void* self, const char* key, const char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#pixelFormat)
///
/// ``` QImage* self ```
QPixelFormat* q_image_pixel_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#toPixelFormat)
///
/// ``` enum QImage__Format format ```
QPixelFormat* q_image_to_pixel_format(int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#toImageFormat)
///
/// ``` QPixelFormat* format ```
int64_t q_image_to_image_format(void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#metric)
///
/// ``` QImage* self, enum QPaintDevice__PaintDeviceMetric metric ```
int32_t q_image_metric(void* self, int64_t metric);

/// Allows for overriding the related default method
///
/// ``` QImage* self, int32_t (*slot)(QImage*, enum QPaintDevice__PaintDeviceMetric) ```
void q_image_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QImage* self, enum QPaintDevice__PaintDeviceMetric metric ```
int32_t q_image_qbase_metric(void* self, int64_t metric);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirrored_helper)
///
/// ``` QImage* self, bool horizontal, bool vertical ```
QImage* q_image_mirrored_helper(void* self, bool horizontal, bool vertical);

/// Allows for overriding the related default method
///
/// ``` QImage* self, QImage* (*slot)(QImage*, bool, bool) ```
void q_image_on_mirrored_helper(void* self, QImage* (*slot)(void*, bool, bool));

/// Base class method implementation
///
/// ``` QImage* self, bool horizontal, bool vertical ```
QImage* q_image_qbase_mirrored_helper(void* self, bool horizontal, bool vertical);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#rgbSwapped_helper)
///
/// ``` QImage* self ```
QImage* q_image_rgb_swapped_helper(void* self);

/// Allows for overriding the related default method
///
/// ``` QImage* self, QImage* (*slot)() ```
void q_image_on_rgb_swapped_helper(void* self, QImage* (*slot)());

/// Base class method implementation
///
/// ``` QImage* self ```
QImage* q_image_qbase_rgb_swapped_helper(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirrored_inplace)
///
/// ``` QImage* self, bool horizontal, bool vertical ```
void q_image_mirrored_inplace(void* self, bool horizontal, bool vertical);

/// Allows for overriding the related default method
///
/// ``` QImage* self, void (*slot)(QImage*, bool, bool) ```
void q_image_on_mirrored_inplace(void* self, void (*slot)(void*, bool, bool));

/// Base class method implementation
///
/// ``` QImage* self, bool horizontal, bool vertical ```
void q_image_qbase_mirrored_inplace(void* self, bool horizontal, bool vertical);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#rgbSwapped_inplace)
///
/// ``` QImage* self ```
void q_image_rgb_swapped_inplace(void* self);

/// Allows for overriding the related default method
///
/// ``` QImage* self, void (*slot)() ```
void q_image_on_rgb_swapped_inplace(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QImage* self ```
void q_image_qbase_rgb_swapped_inplace(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat_helper)
///
/// ``` QImage* self, enum QImage__Format format, int flags ```
QImage* q_image_convert_to_format_helper(void* self, int64_t format, int64_t flags);

/// Allows for overriding the related default method
///
/// ``` QImage* self, QImage* (*slot)(QImage*, enum QImage__Format, int) ```
void q_image_on_convert_to_format_helper(void* self, QImage* (*slot)(void*, int64_t, int64_t));

/// Base class method implementation
///
/// ``` QImage* self, enum QImage__Format format, int flags ```
QImage* q_image_qbase_convert_to_format_helper(void* self, int64_t format, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat_inplace)
///
/// ``` QImage* self, enum QImage__Format format, int flags ```
bool q_image_convert_to_format_inplace(void* self, int64_t format, int64_t flags);

/// Allows for overriding the related default method
///
/// ``` QImage* self, bool (*slot)(QImage*, enum QImage__Format, int) ```
void q_image_on_convert_to_format_inplace(void* self, bool (*slot)(void*, int64_t, int64_t));

/// Base class method implementation
///
/// ``` QImage* self, enum QImage__Format format, int flags ```
bool q_image_qbase_convert_to_format_inplace(void* self, int64_t format, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#smoothScaled)
///
/// ``` QImage* self, int w, int h ```
QImage* q_image_smooth_scaled(void* self, int w, int h);

/// Allows for overriding the related default method
///
/// ``` QImage* self, QImage* (*slot)(QImage*, int, int) ```
void q_image_on_smooth_scaled(void* self, QImage* (*slot)(void*, int, int));

/// Base class method implementation
///
/// ``` QImage* self, int w, int h ```
QImage* q_image_qbase_smooth_scaled(void* self, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#detachMetadata)
///
/// ``` QImage* self ```
void q_image_detach_metadata(void* self);

/// Allows for overriding the related default method
///
/// ``` QImage* self, void (*slot)() ```
void q_image_on_detach_metadata(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QImage* self ```
void q_image_qbase_detach_metadata(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#copy)
///
/// ``` QImage* self, QRect* rect ```
QImage* q_image_copy1(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat)
///
/// ``` QImage* self, enum QImage__Format f, int flags ```
QImage* q_image_convert_to_format22(void* self, int64_t f, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertToFormat)
///
/// ``` QImage* self, enum QImage__Format f, unsigned int* colorTable[], int flags ```
QImage* q_image_convert_to_format3(void* self, int64_t f, unsigned int* colorTable[], int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertedTo)
///
/// ``` QImage* self, enum QImage__Format f, int flags ```
QImage* q_image_converted_to2(void* self, int64_t f, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#convertTo)
///
/// ``` QImage* self, enum QImage__Format f, int flags ```
void q_image_convert_to2(void* self, int64_t f, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#createAlphaMask)
///
/// ``` QImage* self, int flags ```
QImage* q_image_create_alpha_mask1(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#createHeuristicMask)
///
/// ``` QImage* self, bool clipTight ```
QImage* q_image_create_heuristic_mask1(void* self, bool clipTight);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#createMaskFromColor)
///
/// ``` QImage* self, uint32_t color, enum Qt__MaskMode mode ```
QImage* q_image_create_mask_from_color2(void* self, uint32_t color, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaled)
///
/// ``` QImage* self, int w, int h, enum Qt__AspectRatioMode aspectMode ```
QImage* q_image_scaled3(void* self, int w, int h, int64_t aspectMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaled)
///
/// ``` QImage* self, int w, int h, enum Qt__AspectRatioMode aspectMode, enum Qt__TransformationMode mode ```
QImage* q_image_scaled4(void* self, int w, int h, int64_t aspectMode, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaled)
///
/// ``` QImage* self, QSize* s, enum Qt__AspectRatioMode aspectMode ```
QImage* q_image_scaled2(void* self, void* s, int64_t aspectMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaled)
///
/// ``` QImage* self, QSize* s, enum Qt__AspectRatioMode aspectMode, enum Qt__TransformationMode mode ```
QImage* q_image_scaled32(void* self, void* s, int64_t aspectMode, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaledToWidth)
///
/// ``` QImage* self, int w, enum Qt__TransformationMode mode ```
QImage* q_image_scaled_to_width2(void* self, int w, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#scaledToHeight)
///
/// ``` QImage* self, int h, enum Qt__TransformationMode mode ```
QImage* q_image_scaled_to_height2(void* self, int h, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#transformed)
///
/// ``` QImage* self, QTransform* matrix, enum Qt__TransformationMode mode ```
QImage* q_image_transformed2(void* self, void* matrix, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirrored)
///
/// ``` QImage* self, bool horizontally ```
QImage* q_image_mirrored1(void* self, bool horizontally);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirrored)
///
/// ``` QImage* self, bool horizontally, bool vertically ```
QImage* q_image_mirrored2(void* self, bool horizontally, bool vertically);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirror)
///
/// ``` QImage* self, bool horizontally ```
void q_image_mirror1(void* self, bool horizontally);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#mirror)
///
/// ``` QImage* self, bool horizontally, bool vertically ```
void q_image_mirror2(void* self, bool horizontally, bool vertically);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#invertPixels)
///
/// ``` QImage* self, enum QImage__InvertMode param1 ```
void q_image_invert_pixels1(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#load)
///
/// ``` QImage* self, const char* fileName, const char* format ```
bool q_image_load2(void* self, const char* fileName, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#loadFromData)
///
/// ``` QImage* self, const char* data, const char* format ```
bool q_image_load_from_data22(void* self, const char* data, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#loadFromData)
///
/// ``` QImage* self, unsigned char* buf, int lenVal, const char* format ```
bool q_image_load_from_data3(void* self, unsigned char* buf, int lenVal, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#loadFromData)
///
/// ``` QImage* self, const char* data, const char* format ```
bool q_image_load_from_data23(void* self, const char* data, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#save)
///
/// ``` QImage* self, const char* fileName, const char* format ```
bool q_image_save2(void* self, const char* fileName, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#save)
///
/// ``` QImage* self, const char* fileName, const char* format, int quality ```
bool q_image_save3(void* self, const char* fileName, const char* format, int quality);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#save)
///
/// ``` QImage* self, QIODevice* device, const char* format ```
bool q_image_save22(void* self, void* device, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#save)
///
/// ``` QImage* self, QIODevice* device, const char* format, int quality ```
bool q_image_save32(void* self, void* device, const char* format, int quality);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fromData)
///
/// ``` const char* data, const char* format ```
QImage* q_image_from_data22(const char* data, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fromData)
///
/// ``` unsigned char* data, int size, const char* format ```
QImage* q_image_from_data3(unsigned char* data, int size, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#fromData)
///
/// ``` const char* data, const char* format ```
QImage* q_image_from_data23(const char* data, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#text)
///
/// ``` QImage* self, const char* key ```
const char* q_image_text1(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qimage.html#detachMetadata)
///
/// ``` QImage* self, bool invalidateCache ```
void q_image_detach_metadata1(void* self, bool invalidateCache);

/// Allows for overriding the related default method
///
/// ``` QImage* self, void (*slot)(QImage*, bool) ```
void q_image_on_detach_metadata1(void* self, void (*slot)(void*, bool));

/// Base class method implementation
///
/// ``` QImage* self, bool invalidateCache ```
void q_image_qbase_detach_metadata1(void* self, bool invalidateCache);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QImage* self ```
bool q_image_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QImage* self ```
int32_t q_image_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QImage* self ```
int32_t q_image_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QImage* self ```
int32_t q_image_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QImage* self ```
int32_t q_image_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QImage* self ```
int32_t q_image_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QImage* self ```
int32_t q_image_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QImage* self ```
double q_image_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_image_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImage* self, QPainter* painter ```
void q_image_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImage* self, QPainter* painter ```
void q_image_qbase_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImage* self, void (*slot)(QImage*, QPainter*) ```
void q_image_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImage* self, QPoint* offset ```
QPaintDevice* q_image_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImage* self, QPoint* offset ```
QPaintDevice* q_image_qbase_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImage* self, QPaintDevice* (*slot)(QImage*, QPoint*) ```
void q_image_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImage* self ```
QPainter* q_image_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImage* self ```
QPainter* q_image_qbase_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImage* self, QPainter* (*slot)() ```
void q_image_on_shared_painter(void* self, QPainter* (*slot)());

/// Delete this object from C++ memory.
///
/// ``` QImage* self ```
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
    QIMAGE_FORMAT_NIMAGEFORMATS = 36
} QImage__Format;

#endif
