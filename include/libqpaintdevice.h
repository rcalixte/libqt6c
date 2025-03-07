#pragma once
#ifndef SRCQT6C_LIBQPAINTDEVICE_H
#define SRCQT6C_LIBQPAINTDEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpoint.h"

int32_t q_paintdevice_dev_type(void* self);
bool q_paintdevice_painting_active(void* self);
QPaintEngine* q_paintdevice_paint_engine(void* self);
int32_t q_paintdevice_width(void* self);
int32_t q_paintdevice_height(void* self);
int32_t q_paintdevice_width_m_m(void* self);
int32_t q_paintdevice_height_m_m(void* self);
int32_t q_paintdevice_logical_dpi_x(void* self);
int32_t q_paintdevice_logical_dpi_y(void* self);
int32_t q_paintdevice_physical_dpi_x(void* self);
int32_t q_paintdevice_physical_dpi_y(void* self);
double q_paintdevice_device_pixel_ratio(void* self);
double q_paintdevice_device_pixel_ratio_f(void* self);
int32_t q_paintdevice_color_count(void* self);
int32_t q_paintdevice_depth(void* self);
double q_paintdevice_device_pixel_ratio_f_scale();
void q_paintdevice_delete(void* self);

/// https://doc.qt.io/qt-6/qpaintdevice.html#types

typedef enum {
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMWIDTH = 1,
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMHEIGHT = 2,
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMWIDTHMM = 3,
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMHEIGHTMM = 4,
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMNUMCOLORS = 5,
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMDEPTH = 6,
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMDPIX = 7,
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMDPIY = 8,
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMPHYSICALDPIX = 9,
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMPHYSICALDPIY = 10,
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMDEVICEPIXELRATIO = 11,
    QPAINTDEVICE_PAINTDEVICEMETRIC_PDMDEVICEPIXELRATIOSCALED = 12
} QPaintDevice__PaintDeviceMetric;

#endif
