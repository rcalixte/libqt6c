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

QImage* q_image_new();
QImage* q_image_new2(void* size, int64_t format);
QImage* q_image_new3(int width, int height, int64_t format);
QImage* q_image_new4(unsigned char* data, int width, int height, int64_t format);
QImage* q_image_new5(unsigned char* data, int width, int height, int64_t format);
QImage* q_image_new6(unsigned char* data, int width, int height, int64_t bytesPerLine, int64_t format);
QImage* q_image_new7(unsigned char* data, int width, int height, int64_t bytesPerLine, int64_t format);
QImage* q_image_new8(const char* fileName);
QImage* q_image_new9(void* param1);
QImage* q_image_new10(const char* fileName, const char* format);
void q_image_operator_assign(void* self, void* param1);
void q_image_swap(void* self, void* other);
bool q_image_is_null(void* self);
int32_t q_image_dev_type(void* self);
void q_image_on_dev_type(void* self, int32_t (*slot)());
int32_t q_image_qbase_dev_type(void* self);
bool q_image_operator_equal(void* self, void* param1);
bool q_image_operator_not_equal(void* self, void* param1);
QVariant* q_image_to_q_variant(void* self);
void q_image_detach(void* self);
bool q_image_is_detached(void* self);
QImage* q_image_copy(void* self);
QImage* q_image_copy2(void* self, int x, int y, int w, int h);
int64_t q_image_format(void* self);
QImage* q_image_convert_to_format(void* self, int64_t f);
QImage* q_image_convert_to_format2(void* self, int64_t f, unsigned int* colorTable[]);
bool q_image_reinterpret_as_format(void* self, int64_t f);
QImage* q_image_converted_to(void* self, int64_t f);
void q_image_convert_to(void* self, int64_t f);
int32_t q_image_width(void* self);
int32_t q_image_height(void* self);
QSize* q_image_size(void* self);
QRect* q_image_rect(void* self);
int32_t q_image_depth(void* self);
int32_t q_image_color_count(void* self);
int32_t q_image_bit_plane_count(void* self);
uint32_t q_image_color(void* self, int i);
void q_image_set_color(void* self, int i, uint32_t c);
void q_image_set_color_count(void* self, int colorCount);
bool q_image_all_gray(void* self);
bool q_image_is_grayscale(void* self);
unsigned char* q_image_bits(void* self);
unsigned char* q_image_bits2(void* self);
unsigned char* q_image_const_bits(void* self);
int64_t q_image_size_in_bytes(void* self);
unsigned char* q_image_scan_line(void* self, int param1);
unsigned char* q_image_scan_line_with_int(void* self, int param1);
unsigned char* q_image_const_scan_line(void* self, int param1);
int64_t q_image_bytes_per_line(void* self);
bool q_image_valid(void* self, int x, int y);
bool q_image_valid_with_pt(void* self, void* pt);
int32_t q_image_pixel_index(void* self, int x, int y);
int32_t q_image_pixel_index_with_pt(void* self, void* pt);
uint32_t q_image_pixel(void* self, int x, int y);
uint32_t q_image_pixel_with_pt(void* self, void* pt);
void q_image_set_pixel(void* self, int x, int y, uint32_t index_or_rgb);
void q_image_set_pixel2(void* self, void* pt, uint32_t index_or_rgb);
QColor* q_image_pixel_color(void* self, int x, int y);
QColor* q_image_pixel_color_with_pt(void* self, void* pt);
void q_image_set_pixel_color(void* self, int x, int y, void* c);
void q_image_set_pixel_color2(void* self, void* pt, void* c);
libqt_list /* of uint32_t */ q_image_color_table(void* self);
void q_image_set_color_table(void* self, unsigned int* colors[]);
double q_image_device_pixel_ratio(void* self);
void q_image_set_device_pixel_ratio(void* self, double scaleFactor);
QSizeF* q_image_device_independent_size(void* self);
void q_image_fill(void* self, uint32_t pixel);
void q_image_fill_with_color(void* self, void* color);
void q_image_fill2(void* self, int64_t color);
bool q_image_has_alpha_channel(void* self);
void q_image_set_alpha_channel(void* self, void* alphaChannel);
QImage* q_image_create_alpha_mask(void* self);
QImage* q_image_create_heuristic_mask(void* self);
QImage* q_image_create_mask_from_color(void* self, uint32_t color);
QImage* q_image_scaled(void* self, int w, int h);
QImage* q_image_scaled_with_q_size(void* self, void* s);
QImage* q_image_scaled_to_width(void* self, int w);
QImage* q_image_scaled_to_height(void* self, int h);
QImage* q_image_transformed(void* self, void* matrix);
QTransform* q_image_true_matrix(void* param1, int w, int h);
QImage* q_image_mirrored(void* self);
QImage* q_image_rgb_swapped(void* self);
void q_image_mirror(void* self);
void q_image_rgb_swap(void* self);
void q_image_invert_pixels(void* self);
QColorSpace* q_image_color_space(void* self);
QImage* q_image_converted_to_color_space(void* self, void* param1);
void q_image_convert_to_color_space(void* self, void* param1);
void q_image_set_color_space(void* self, void* colorSpace);
QImage* q_image_color_transformed(void* self, void* transform);
void q_image_apply_color_transform(void* self, void* transform);
bool q_image_load(void* self, void* device, const char* format);
bool q_image_load_with_file_name(void* self, const char* fileName);
bool q_image_load_from_data(void* self, const char* data);
bool q_image_load_from_data2(void* self, unsigned char* buf, int lenVal);
bool q_image_load_from_data_with_data(void* self, const char* data);
bool q_image_save(void* self, const char* fileName);
bool q_image_save_with_device(void* self, void* device);
QImage* q_image_from_data(const char* data);
QImage* q_image_from_data2(unsigned char* data, int size);
QImage* q_image_from_data_with_data(const char* data);
long long q_image_cache_key(void* self);
QPaintEngine* q_image_paint_engine(void* self);
void q_image_on_paint_engine(void* self, QPaintEngine* (*slot)());
QPaintEngine* q_image_qbase_paint_engine(void* self);
int32_t q_image_dots_per_meter_x(void* self);
int32_t q_image_dots_per_meter_y(void* self);
void q_image_set_dots_per_meter_x(void* self, int dotsPerMeterX);
void q_image_set_dots_per_meter_y(void* self, int dotsPerMeterY);
QPoint* q_image_offset(void* self);
void q_image_set_offset(void* self, void* offset);
const char** q_image_text_keys(void* self);
const char* q_image_text(void* self);
void q_image_set_text(void* self, const char* key, const char* value);
QPixelFormat* q_image_pixel_format(void* self);
QPixelFormat* q_image_to_pixel_format(int64_t format);
int64_t q_image_to_image_format(void* format);
int32_t q_image_metric(void* self, int64_t metric);
void q_image_on_metric(void* self, int32_t (*slot)(void*, int64_t));
int32_t q_image_qbase_metric(void* self, int64_t metric);
QImage* q_image_mirrored_helper(void* self, bool horizontal, bool vertical);
void q_image_on_mirrored_helper(void* self, QImage* (*slot)(void*, bool, bool));
QImage* q_image_qbase_mirrored_helper(void* self, bool horizontal, bool vertical);
QImage* q_image_rgb_swapped_helper(void* self);
void q_image_on_rgb_swapped_helper(void* self, QImage* (*slot)());
QImage* q_image_qbase_rgb_swapped_helper(void* self);
void q_image_mirrored_inplace(void* self, bool horizontal, bool vertical);
void q_image_on_mirrored_inplace(void* self, void (*slot)(void*, bool, bool));
void q_image_qbase_mirrored_inplace(void* self, bool horizontal, bool vertical);
void q_image_rgb_swapped_inplace(void* self);
void q_image_on_rgb_swapped_inplace(void* self, void (*slot)());
void q_image_qbase_rgb_swapped_inplace(void* self);
QImage* q_image_convert_to_format_helper(void* self, int64_t format, int64_t flags);
void q_image_on_convert_to_format_helper(void* self, QImage* (*slot)(void*, int64_t, int64_t));
QImage* q_image_qbase_convert_to_format_helper(void* self, int64_t format, int64_t flags);
bool q_image_convert_to_format_inplace(void* self, int64_t format, int64_t flags);
void q_image_on_convert_to_format_inplace(void* self, bool (*slot)(void*, int64_t, int64_t));
bool q_image_qbase_convert_to_format_inplace(void* self, int64_t format, int64_t flags);
QImage* q_image_smooth_scaled(void* self, int w, int h);
void q_image_on_smooth_scaled(void* self, QImage* (*slot)(void*, int, int));
QImage* q_image_qbase_smooth_scaled(void* self, int w, int h);
void q_image_detach_metadata(void* self);
void q_image_on_detach_metadata(void* self, void (*slot)());
void q_image_qbase_detach_metadata(void* self);
QImage* q_image_copy1(void* self, void* rect);
QImage* q_image_convert_to_format22(void* self, int64_t f, int64_t flags);
QImage* q_image_convert_to_format3(void* self, int64_t f, unsigned int* colorTable[], int64_t flags);
QImage* q_image_converted_to2(void* self, int64_t f, int64_t flags);
void q_image_convert_to2(void* self, int64_t f, int64_t flags);
QImage* q_image_create_alpha_mask1(void* self, int64_t flags);
QImage* q_image_create_heuristic_mask1(void* self, bool clipTight);
QImage* q_image_create_mask_from_color2(void* self, uint32_t color, int64_t mode);
QImage* q_image_scaled3(void* self, int w, int h, int64_t aspectMode);
QImage* q_image_scaled4(void* self, int w, int h, int64_t aspectMode, int64_t mode);
QImage* q_image_scaled2(void* self, void* s, int64_t aspectMode);
QImage* q_image_scaled32(void* self, void* s, int64_t aspectMode, int64_t mode);
QImage* q_image_scaled_to_width2(void* self, int w, int64_t mode);
QImage* q_image_scaled_to_height2(void* self, int h, int64_t mode);
QImage* q_image_transformed2(void* self, void* matrix, int64_t mode);
QImage* q_image_mirrored1(void* self, bool horizontally);
QImage* q_image_mirrored2(void* self, bool horizontally, bool vertically);
void q_image_mirror1(void* self, bool horizontally);
void q_image_mirror2(void* self, bool horizontally, bool vertically);
void q_image_invert_pixels1(void* self, int64_t param1);
bool q_image_load2(void* self, const char* fileName, const char* format);
bool q_image_load_from_data22(void* self, const char* data, const char* format);
bool q_image_load_from_data3(void* self, unsigned char* buf, int lenVal, const char* format);
bool q_image_load_from_data23(void* self, const char* data, const char* format);
bool q_image_save2(void* self, const char* fileName, const char* format);
bool q_image_save3(void* self, const char* fileName, const char* format, int quality);
bool q_image_save22(void* self, void* device, const char* format);
bool q_image_save32(void* self, void* device, const char* format, int quality);
QImage* q_image_from_data22(const char* data, const char* format);
QImage* q_image_from_data3(unsigned char* data, int size, const char* format);
QImage* q_image_from_data23(const char* data, const char* format);
const char* q_image_text1(void* self, const char* key);
void q_image_detach_metadata1(void* self, bool invalidateCache);
void q_image_on_detach_metadata1(void* self, void (*slot)(void*, bool));
void q_image_qbase_detach_metadata1(void* self, bool invalidateCache);
bool q_image_painting_active(void* self);
int32_t q_image_width_m_m(void* self);
int32_t q_image_height_m_m(void* self);
int32_t q_image_logical_dpi_x(void* self);
int32_t q_image_logical_dpi_y(void* self);
int32_t q_image_physical_dpi_x(void* self);
int32_t q_image_physical_dpi_y(void* self);
double q_image_device_pixel_ratio_f(void* self);
double q_image_device_pixel_ratio_f_scale();
void q_image_init_painter(void* self, void* painter);
void q_image_qbase_init_painter(void* self, void* painter);
void q_image_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_image_redirected(void* self, void* offset);
QPaintDevice* q_image_qbase_redirected(void* self, void* offset);
void q_image_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_image_shared_painter(void* self);
QPainter* q_image_qbase_shared_painter(void* self);
void q_image_on_shared_painter(void* self, QPainter* (*slot)());
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
