#include "libqmargins.hpp"
#include "libqpagelayout.hpp"
#include "libqpageranges.hpp"
#include "libqpagesize.hpp"
#include "libqpaintdevice.hpp"
#include "libqpagedpaintdevice.hpp"
#include "libqpagedpaintdevice.h"

bool q_pagedpaintdevice_set_page_layout(void* self, const void* pageLayout) {
    return QPagedPaintDevice_SetPageLayout((QPagedPaintDevice*)self, (QPageLayout*)pageLayout);
}

bool q_pagedpaintdevice_set_page_size(void* self, const void* pageSize) {
    return QPagedPaintDevice_SetPageSize((QPagedPaintDevice*)self, (QPageSize*)pageSize);
}

bool q_pagedpaintdevice_set_page_orientation(void* self, int32_t orientation) {
    return QPagedPaintDevice_SetPageOrientation((QPagedPaintDevice*)self, orientation);
}

bool q_pagedpaintdevice_set_page_margins(void* self, const void* margins, int32_t units) {
    return QPagedPaintDevice_SetPageMargins((QPagedPaintDevice*)self, (QMarginsF*)margins, units);
}

QPageLayout* q_pagedpaintdevice_page_layout(const void* self) {
    return QPagedPaintDevice_PageLayout((QPagedPaintDevice*)self);
}

void q_pagedpaintdevice_set_page_ranges(void* self, const void* ranges) {
    QPagedPaintDevice_SetPageRanges((QPagedPaintDevice*)self, (QPageRanges*)ranges);
}

QPageRanges* q_pagedpaintdevice_page_ranges(const void* self) {
    return QPagedPaintDevice_PageRanges((QPagedPaintDevice*)self);
}

int32_t q_pagedpaintdevice_dev_type(const void* self) {
    return QPaintDevice_DevType((QPaintDevice*)self);
}

bool q_pagedpaintdevice_painting_active(const void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_pagedpaintdevice_width(const void* self) {
    return QPaintDevice_Width((QPaintDevice*)self);
}

int32_t q_pagedpaintdevice_height(const void* self) {
    return QPaintDevice_Height((QPaintDevice*)self);
}

int32_t q_pagedpaintdevice_width_m_m(const void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_pagedpaintdevice_height_m_m(const void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_pagedpaintdevice_logical_dpi_x(const void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_pagedpaintdevice_logical_dpi_y(const void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_pagedpaintdevice_physical_dpi_x(const void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_pagedpaintdevice_physical_dpi_y(const void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_pagedpaintdevice_device_pixel_ratio(const void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_pagedpaintdevice_device_pixel_ratio_f(const void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_pagedpaintdevice_color_count(const void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_pagedpaintdevice_depth(const void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_pagedpaintdevice_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_pagedpaintdevice_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_pagedpaintdevice_delete(void* self) {
    QPagedPaintDevice_Delete((QPagedPaintDevice*)(self));
}
