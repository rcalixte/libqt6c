#pragma once
#ifndef SRCQT6C_LIBQPIXMAP_H
#define SRCQT6C_LIBQPIXMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqbitmap.h"
#include "libqcolor.h"
#include "libqiodevice.h"
#include "libqimage.h"
#include "libqimagereader.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqregion.h"
#include "libqsize.h"
#include <string.h>
#include "libqtransform.h"
#include "libqvariant.h"

QPixmap* q_pixmap_new();
QPixmap* q_pixmap_new2(int w, int h);
QPixmap* q_pixmap_new3(void* param1);
QPixmap* q_pixmap_new4(const char* fileName);
QPixmap* q_pixmap_new5(void* param1);
QPixmap* q_pixmap_new6(const char* fileName, const char* format);
QPixmap* q_pixmap_new7(const char* fileName, const char* format, int64_t flags);
void q_pixmap_operator_assign(void* self, void* param1);
void q_pixmap_swap(void* self, void* other);
QVariant* q_pixmap_to_q_variant(void* self);
bool q_pixmap_is_null(void* self);
int32_t q_pixmap_dev_type(void* self);
void q_pixmap_on_dev_type(void* self, int32_t (*slot)());
int32_t q_pixmap_qbase_dev_type(void* self);
int32_t q_pixmap_width(void* self);
int32_t q_pixmap_height(void* self);
QSize* q_pixmap_size(void* self);
QRect* q_pixmap_rect(void* self);
int32_t q_pixmap_depth(void* self);
int32_t q_pixmap_default_depth();
void q_pixmap_fill(void* self);
QBitmap* q_pixmap_mask(void* self);
void q_pixmap_set_mask(void* self, void* mask);
double q_pixmap_device_pixel_ratio(void* self);
void q_pixmap_set_device_pixel_ratio(void* self, double scaleFactor);
QSizeF* q_pixmap_device_independent_size(void* self);
bool q_pixmap_has_alpha(void* self);
bool q_pixmap_has_alpha_channel(void* self);
QBitmap* q_pixmap_create_heuristic_mask(void* self);
QBitmap* q_pixmap_create_mask_from_color(void* self, void* maskColor);
QPixmap* q_pixmap_scaled(void* self, int w, int h);
QPixmap* q_pixmap_scaled_with_q_size(void* self, void* s);
QPixmap* q_pixmap_scaled_to_width(void* self, int w);
QPixmap* q_pixmap_scaled_to_height(void* self, int h);
QPixmap* q_pixmap_transformed(void* self, void* param1);
QTransform* q_pixmap_true_matrix(void* m, int w, int h);
QImage* q_pixmap_to_image(void* self);
QPixmap* q_pixmap_from_image(void* image);
QPixmap* q_pixmap_from_image_reader(void* imageReader);
bool q_pixmap_load(void* self, const char* fileName);
bool q_pixmap_load_from_data(void* self, unsigned char* buf, uint32_t lenVal);
bool q_pixmap_load_from_data_with_data(void* self, const char* data);
bool q_pixmap_save(void* self, const char* fileName);
bool q_pixmap_save_with_device(void* self, void* device);
bool q_pixmap_convert_from_image(void* self, void* img);
QPixmap* q_pixmap_copy(void* self, int x, int y, int width, int height);
QPixmap* q_pixmap_copy2(void* self);
void q_pixmap_scroll(void* self, int dx, int dy, int x, int y, int width, int height);
void q_pixmap_scroll2(void* self, int dx, int dy, void* rect);
long long q_pixmap_cache_key(void* self);
bool q_pixmap_is_detached(void* self);
void q_pixmap_detach(void* self);
bool q_pixmap_is_q_bitmap(void* self);
QPaintEngine* q_pixmap_paint_engine(void* self);
void q_pixmap_on_paint_engine(void* self, QPaintEngine* (*slot)());
QPaintEngine* q_pixmap_qbase_paint_engine(void* self);
bool q_pixmap_operator_not(void* self);
int32_t q_pixmap_metric(void* self, int64_t param1);
void q_pixmap_on_metric(void* self, int32_t (*slot)(void*, int64_t));
int32_t q_pixmap_qbase_metric(void* self, int64_t param1);
void q_pixmap_fill1(void* self, void* fillColor);
QBitmap* q_pixmap_create_heuristic_mask1(void* self, bool clipTight);
QBitmap* q_pixmap_create_mask_from_color2(void* self, void* maskColor, int64_t mode);
QPixmap* q_pixmap_scaled3(void* self, int w, int h, int64_t aspectMode);
QPixmap* q_pixmap_scaled4(void* self, int w, int h, int64_t aspectMode, int64_t mode);
QPixmap* q_pixmap_scaled2(void* self, void* s, int64_t aspectMode);
QPixmap* q_pixmap_scaled32(void* self, void* s, int64_t aspectMode, int64_t mode);
QPixmap* q_pixmap_scaled_to_width2(void* self, int w, int64_t mode);
QPixmap* q_pixmap_scaled_to_height2(void* self, int h, int64_t mode);
QPixmap* q_pixmap_transformed2(void* self, void* param1, int64_t mode);
QPixmap* q_pixmap_from_image2(void* image, int64_t flags);
QPixmap* q_pixmap_from_image_reader2(void* imageReader, int64_t flags);
bool q_pixmap_load2(void* self, const char* fileName, const char* format);
bool q_pixmap_load3(void* self, const char* fileName, const char* format, int64_t flags);
bool q_pixmap_load_from_data3(void* self, unsigned char* buf, uint32_t lenVal, const char* format);
bool q_pixmap_load_from_data4(void* self, unsigned char* buf, uint32_t lenVal, const char* format, int64_t flags);
bool q_pixmap_load_from_data2(void* self, const char* data, const char* format);
bool q_pixmap_load_from_data32(void* self, const char* data, const char* format, int64_t flags);
bool q_pixmap_save2(void* self, const char* fileName, const char* format);
bool q_pixmap_save3(void* self, const char* fileName, const char* format, int quality);
bool q_pixmap_save22(void* self, void* device, const char* format);
bool q_pixmap_save32(void* self, void* device, const char* format, int quality);
bool q_pixmap_convert_from_image2(void* self, void* img, int64_t flags);
QPixmap* q_pixmap_copy1(void* self, void* rect);
void q_pixmap_scroll7(void* self, int dx, int dy, int x, int y, int width, int height, void* exposed);
void q_pixmap_scroll4(void* self, int dx, int dy, void* rect, void* exposed);
bool q_pixmap_painting_active(void* self);
int32_t q_pixmap_width_m_m(void* self);
int32_t q_pixmap_height_m_m(void* self);
int32_t q_pixmap_logical_dpi_x(void* self);
int32_t q_pixmap_logical_dpi_y(void* self);
int32_t q_pixmap_physical_dpi_x(void* self);
int32_t q_pixmap_physical_dpi_y(void* self);
double q_pixmap_device_pixel_ratio_f(void* self);
int32_t q_pixmap_color_count(void* self);
double q_pixmap_device_pixel_ratio_f_scale();
void q_pixmap_init_painter(void* self, void* painter);
void q_pixmap_qbase_init_painter(void* self, void* painter);
void q_pixmap_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_pixmap_redirected(void* self, void* offset);
QPaintDevice* q_pixmap_qbase_redirected(void* self, void* offset);
void q_pixmap_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_pixmap_shared_painter(void* self);
QPainter* q_pixmap_qbase_shared_painter(void* self);
void q_pixmap_on_shared_painter(void* self, QPainter* (*slot)());
void q_pixmap_delete(void* self);

#endif
