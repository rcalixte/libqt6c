#pragma once
#ifndef SRCQT6C_LIBQBITMAP_H
#define SRCQT6C_LIBQBITMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqcolor.h"
#include "libqiodevice.h"
#include "libqimage.h"
#include "libqimagereader.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqregion.h"
#include "libqsize.h"
#include <string.h>
#include "libqtransform.h"
#include "libqvariant.h"

QBitmap* q_bitmap_new();
QBitmap* q_bitmap_new2(void* param1);
QBitmap* q_bitmap_new3(int w, int h);
QBitmap* q_bitmap_new4(void* param1);
QBitmap* q_bitmap_new5(const char* fileName);
QBitmap* q_bitmap_new6(void* param1);
QBitmap* q_bitmap_new7(const char* fileName, const char* format);
void q_bitmap_operator_assign(void* self, void* param1);
void q_bitmap_swap(void* self, void* other);
QVariant* q_bitmap_to_q_variant(void* self);
void q_bitmap_clear(void* self);
QBitmap* q_bitmap_from_image(void* image);
QBitmap* q_bitmap_from_data(void* size, unsigned char* bits);
QBitmap* q_bitmap_from_pixmap(void* pixmap);
QBitmap* q_bitmap_transformed(void* self, void* matrix);
void q_bitmap_operator_assign_with_q_bitmap(void* self, void* param1);
QBitmap* q_bitmap_from_image2(void* image, int64_t flags);
QBitmap* q_bitmap_from_data3(void* size, unsigned char* bits, int64_t monoFormat);
bool q_bitmap_is_null(void* self);
int32_t q_bitmap_width(void* self);
int32_t q_bitmap_height(void* self);
QSize* q_bitmap_size(void* self);
QRect* q_bitmap_rect(void* self);
int32_t q_bitmap_depth(void* self);
int32_t q_bitmap_default_depth();
void q_bitmap_fill(void* self);
QBitmap* q_bitmap_mask(void* self);
void q_bitmap_set_mask(void* self, void* mask);
double q_bitmap_device_pixel_ratio(void* self);
void q_bitmap_set_device_pixel_ratio(void* self, double scaleFactor);
QSizeF* q_bitmap_device_independent_size(void* self);
bool q_bitmap_has_alpha(void* self);
bool q_bitmap_has_alpha_channel(void* self);
QBitmap* q_bitmap_create_heuristic_mask(void* self);
QBitmap* q_bitmap_create_mask_from_color(void* self, void* maskColor);
QPixmap* q_bitmap_scaled(void* self, int w, int h);
QPixmap* q_bitmap_scaled_with_q_size(void* self, void* s);
QPixmap* q_bitmap_scaled_to_width(void* self, int w);
QPixmap* q_bitmap_scaled_to_height(void* self, int h);
QTransform* q_bitmap_true_matrix(void* m, int w, int h);
QImage* q_bitmap_to_image(void* self);
QPixmap* q_bitmap_from_image_reader(void* imageReader);
bool q_bitmap_load(void* self, const char* fileName);
bool q_bitmap_load_from_data(void* self, unsigned char* buf, uint32_t lenVal);
bool q_bitmap_load_from_data_with_data(void* self, const char* data);
bool q_bitmap_save(void* self, const char* fileName);
bool q_bitmap_save_with_device(void* self, void* device);
bool q_bitmap_convert_from_image(void* self, void* img);
QPixmap* q_bitmap_copy(void* self, int x, int y, int width, int height);
QPixmap* q_bitmap_copy2(void* self);
void q_bitmap_scroll(void* self, int dx, int dy, int x, int y, int width, int height);
void q_bitmap_scroll2(void* self, int dx, int dy, void* rect);
long long q_bitmap_cache_key(void* self);
bool q_bitmap_is_detached(void* self);
void q_bitmap_detach(void* self);
bool q_bitmap_is_q_bitmap(void* self);
bool q_bitmap_operator_not(void* self);
void q_bitmap_fill1(void* self, void* fillColor);
QBitmap* q_bitmap_create_heuristic_mask1(void* self, bool clipTight);
QBitmap* q_bitmap_create_mask_from_color2(void* self, void* maskColor, int64_t mode);
QPixmap* q_bitmap_scaled3(void* self, int w, int h, int64_t aspectMode);
QPixmap* q_bitmap_scaled4(void* self, int w, int h, int64_t aspectMode, int64_t mode);
QPixmap* q_bitmap_scaled2(void* self, void* s, int64_t aspectMode);
QPixmap* q_bitmap_scaled32(void* self, void* s, int64_t aspectMode, int64_t mode);
QPixmap* q_bitmap_scaled_to_width2(void* self, int w, int64_t mode);
QPixmap* q_bitmap_scaled_to_height2(void* self, int h, int64_t mode);
QPixmap* q_bitmap_transformed2(void* self, void* param1, int64_t mode);
QPixmap* q_bitmap_from_image_reader2(void* imageReader, int64_t flags);
bool q_bitmap_load2(void* self, const char* fileName, const char* format);
bool q_bitmap_load3(void* self, const char* fileName, const char* format, int64_t flags);
bool q_bitmap_load_from_data3(void* self, unsigned char* buf, uint32_t lenVal, const char* format);
bool q_bitmap_load_from_data4(void* self, unsigned char* buf, uint32_t lenVal, const char* format, int64_t flags);
bool q_bitmap_load_from_data2(void* self, const char* data, const char* format);
bool q_bitmap_load_from_data32(void* self, const char* data, const char* format, int64_t flags);
bool q_bitmap_save2(void* self, const char* fileName, const char* format);
bool q_bitmap_save3(void* self, const char* fileName, const char* format, int quality);
bool q_bitmap_save22(void* self, void* device, const char* format);
bool q_bitmap_save32(void* self, void* device, const char* format, int quality);
bool q_bitmap_convert_from_image2(void* self, void* img, int64_t flags);
QPixmap* q_bitmap_copy1(void* self, void* rect);
void q_bitmap_scroll7(void* self, int dx, int dy, int x, int y, int width, int height, void* exposed);
void q_bitmap_scroll4(void* self, int dx, int dy, void* rect, void* exposed);
bool q_bitmap_painting_active(void* self);
int32_t q_bitmap_width_m_m(void* self);
int32_t q_bitmap_height_m_m(void* self);
int32_t q_bitmap_logical_dpi_x(void* self);
int32_t q_bitmap_logical_dpi_y(void* self);
int32_t q_bitmap_physical_dpi_x(void* self);
int32_t q_bitmap_physical_dpi_y(void* self);
double q_bitmap_device_pixel_ratio_f(void* self);
int32_t q_bitmap_color_count(void* self);
double q_bitmap_device_pixel_ratio_f_scale();
int32_t q_bitmap_dev_type(void* self);
int32_t q_bitmap_qbase_dev_type(void* self);
void q_bitmap_on_dev_type(void* self, int32_t (*slot)());
QPaintEngine* q_bitmap_paint_engine(void* self);
QPaintEngine* q_bitmap_qbase_paint_engine(void* self);
void q_bitmap_on_paint_engine(void* self, QPaintEngine* (*slot)());
int32_t q_bitmap_metric(void* self, int64_t param1);
int32_t q_bitmap_qbase_metric(void* self, int64_t param1);
void q_bitmap_on_metric(void* self, int32_t (*slot)(void*, int64_t));
void q_bitmap_init_painter(void* self, void* painter);
void q_bitmap_qbase_init_painter(void* self, void* painter);
void q_bitmap_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_bitmap_redirected(void* self, void* offset);
QPaintDevice* q_bitmap_qbase_redirected(void* self, void* offset);
void q_bitmap_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_bitmap_shared_painter(void* self);
QPainter* q_bitmap_qbase_shared_painter(void* self);
void q_bitmap_on_shared_painter(void* self, QPainter* (*slot)());
void q_bitmap_delete(void* self);

#endif
