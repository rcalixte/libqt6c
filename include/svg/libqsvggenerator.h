#pragma once
#ifndef SRC_SVGQT6C_LIBQSVGGENERATOR_H
#define SRC_SVGQT6C_LIBQSVGGENERATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqiodevice.h"
#include "../libqpaintdevice.h"
#include "../libqpaintengine.h"
#include "../libqpainter.h"
#include "../libqpoint.h"
#include "../libqrect.h"
#include "../libqsize.h"
#include <string.h>

QSvgGenerator* q_svggenerator_new();
const char* q_svggenerator_title(void* self);
void q_svggenerator_set_title(void* self, const char* title);
const char* q_svggenerator_description(void* self);
void q_svggenerator_set_description(void* self, const char* description);
QSize* q_svggenerator_size(void* self);
void q_svggenerator_set_size(void* self, void* size);
QRect* q_svggenerator_view_box(void* self);
QRectF* q_svggenerator_view_box_f(void* self);
void q_svggenerator_set_view_box(void* self, void* viewBox);
void q_svggenerator_set_view_box_with_view_box(void* self, void* viewBox);
const char* q_svggenerator_file_name(void* self);
void q_svggenerator_set_file_name(void* self, const char* fileName);
QIODevice* q_svggenerator_output_device(void* self);
void q_svggenerator_set_output_device(void* self, void* outputDevice);
void q_svggenerator_set_resolution(void* self, int dpi);
int32_t q_svggenerator_resolution(void* self);
QPaintEngine* q_svggenerator_paint_engine(void* self);
void q_svggenerator_on_paint_engine(void* self, QPaintEngine* (*slot)());
QPaintEngine* q_svggenerator_qbase_paint_engine(void* self);
int32_t q_svggenerator_metric(void* self, int64_t metric);
void q_svggenerator_on_metric(void* self, int32_t (*slot)(void*, int64_t));
int32_t q_svggenerator_qbase_metric(void* self, int64_t metric);
bool q_svggenerator_painting_active(void* self);
int32_t q_svggenerator_width(void* self);
int32_t q_svggenerator_height(void* self);
int32_t q_svggenerator_width_m_m(void* self);
int32_t q_svggenerator_height_m_m(void* self);
int32_t q_svggenerator_logical_dpi_x(void* self);
int32_t q_svggenerator_logical_dpi_y(void* self);
int32_t q_svggenerator_physical_dpi_x(void* self);
int32_t q_svggenerator_physical_dpi_y(void* self);
double q_svggenerator_device_pixel_ratio(void* self);
double q_svggenerator_device_pixel_ratio_f(void* self);
int32_t q_svggenerator_color_count(void* self);
int32_t q_svggenerator_depth(void* self);
double q_svggenerator_device_pixel_ratio_f_scale();
int32_t q_svggenerator_dev_type(void* self);
int32_t q_svggenerator_qbase_dev_type(void* self);
void q_svggenerator_on_dev_type(void* self, int32_t (*slot)());
void q_svggenerator_init_painter(void* self, void* painter);
void q_svggenerator_qbase_init_painter(void* self, void* painter);
void q_svggenerator_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_svggenerator_redirected(void* self, void* offset);
QPaintDevice* q_svggenerator_qbase_redirected(void* self, void* offset);
void q_svggenerator_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_svggenerator_shared_painter(void* self);
QPainter* q_svggenerator_qbase_shared_painter(void* self);
void q_svggenerator_on_shared_painter(void* self, QPainter* (*slot)());
void q_svggenerator_delete(void* self);

#endif
