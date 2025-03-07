#pragma once
#ifndef SRCQT6C_LIBQPICTURE_H
#define SRCQT6C_LIBQPICTURE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqiodevice.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpoint.h"
#include "libqrect.h"
#include <string.h>

QPicture* q_picture_new();
QPicture* q_picture_new2(void* param1);
QPicture* q_picture_new3(int formatVersion);
bool q_picture_is_null(void* self);
int32_t q_picture_dev_type(void* self);
void q_picture_on_dev_type(void* self, int32_t (*slot)());
int32_t q_picture_qbase_dev_type(void* self);
uint32_t q_picture_size(void* self);
const char* q_picture_data(void* self);
void q_picture_set_data(void* self, const char* data, uint32_t size);
void q_picture_on_set_data(void* self, void (*slot)(void*, const char*, uint32_t));
void q_picture_qbase_set_data(void* self, const char* data, uint32_t size);
bool q_picture_play(void* self, void* p);
bool q_picture_load(void* self, void* dev);
bool q_picture_load_with_file_name(void* self, const char* fileName);
bool q_picture_save(void* self, void* dev);
bool q_picture_save_with_file_name(void* self, const char* fileName);
QRect* q_picture_bounding_rect(void* self);
void q_picture_set_bounding_rect(void* self, void* r);
void q_picture_operator_assign(void* self, void* p);
void q_picture_swap(void* self, void* other);
void q_picture_detach(void* self);
bool q_picture_is_detached(void* self);
QPaintEngine* q_picture_paint_engine(void* self);
void q_picture_on_paint_engine(void* self, QPaintEngine* (*slot)());
QPaintEngine* q_picture_qbase_paint_engine(void* self);
int32_t q_picture_metric(void* self, int64_t m);
void q_picture_on_metric(void* self, int32_t (*slot)(void*, int64_t));
int32_t q_picture_qbase_metric(void* self, int64_t m);
bool q_picture_painting_active(void* self);
int32_t q_picture_width(void* self);
int32_t q_picture_height(void* self);
int32_t q_picture_width_m_m(void* self);
int32_t q_picture_height_m_m(void* self);
int32_t q_picture_logical_dpi_x(void* self);
int32_t q_picture_logical_dpi_y(void* self);
int32_t q_picture_physical_dpi_x(void* self);
int32_t q_picture_physical_dpi_y(void* self);
double q_picture_device_pixel_ratio(void* self);
double q_picture_device_pixel_ratio_f(void* self);
int32_t q_picture_color_count(void* self);
int32_t q_picture_depth(void* self);
double q_picture_device_pixel_ratio_f_scale();
void q_picture_init_painter(void* self, void* painter);
void q_picture_qbase_init_painter(void* self, void* painter);
void q_picture_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_picture_redirected(void* self, void* offset);
QPaintDevice* q_picture_qbase_redirected(void* self, void* offset);
void q_picture_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_picture_shared_painter(void* self);
QPainter* q_picture_qbase_shared_painter(void* self);
void q_picture_on_shared_painter(void* self, QPainter* (*slot)());
void q_picture_delete(void* self);

#endif
