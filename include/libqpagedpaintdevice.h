#pragma once
#ifndef SRCQT6C_LIBQPAGEDPAINTDEVICE_H
#define SRCQT6C_LIBQPAGEDPAINTDEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqmargins.h"
#include "libqpagelayout.h"
#include "libqpageranges.h"
#include "libqpagesize.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"

bool q_pagedpaintdevice_new_page(void* self);
bool q_pagedpaintdevice_set_page_layout(void* self, void* pageLayout);
bool q_pagedpaintdevice_set_page_size(void* self, void* pageSize);
bool q_pagedpaintdevice_set_page_orientation(void* self, int64_t orientation);
bool q_pagedpaintdevice_set_page_margins(void* self, void* margins, int64_t units);
QPageLayout* q_pagedpaintdevice_page_layout(void* self);
void q_pagedpaintdevice_set_page_ranges(void* self, void* ranges);
QPageRanges* q_pagedpaintdevice_page_ranges(void* self);
int32_t q_pagedpaintdevice_dev_type(void* self);
bool q_pagedpaintdevice_painting_active(void* self);
QPaintEngine* q_pagedpaintdevice_paint_engine(void* self);
int32_t q_pagedpaintdevice_width(void* self);
int32_t q_pagedpaintdevice_height(void* self);
int32_t q_pagedpaintdevice_width_m_m(void* self);
int32_t q_pagedpaintdevice_height_m_m(void* self);
int32_t q_pagedpaintdevice_logical_dpi_x(void* self);
int32_t q_pagedpaintdevice_logical_dpi_y(void* self);
int32_t q_pagedpaintdevice_physical_dpi_x(void* self);
int32_t q_pagedpaintdevice_physical_dpi_y(void* self);
double q_pagedpaintdevice_device_pixel_ratio(void* self);
double q_pagedpaintdevice_device_pixel_ratio_f(void* self);
int32_t q_pagedpaintdevice_color_count(void* self);
int32_t q_pagedpaintdevice_depth(void* self);
double q_pagedpaintdevice_device_pixel_ratio_f_scale();
void q_pagedpaintdevice_delete(void* self);

/// https://doc.qt.io/qt-6/qpagedpaintdevice.html#types

typedef enum {
    QPAGEDPAINTDEVICE_PDFVERSION_PDFVERSION_1_4 = 0,
    QPAGEDPAINTDEVICE_PDFVERSION_PDFVERSION_A1B = 1,
    QPAGEDPAINTDEVICE_PDFVERSION_PDFVERSION_1_6 = 2
} QPagedPaintDevice__PdfVersion;

#endif
