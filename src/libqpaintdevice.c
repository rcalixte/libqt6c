#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintdevice.h"

int32_t q_paintdevice_dev_type(const void* self) {
    return QPaintDevice_DevType((QPaintDevice*)self);
}

bool q_paintdevice_painting_active(const void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

QPaintEngine* q_paintdevice_paint_engine(const void* self) {
    return QPaintDevice_PaintEngine((QPaintDevice*)self);
}

int32_t q_paintdevice_width(const void* self) {
    return QPaintDevice_Width((QPaintDevice*)self);
}

int32_t q_paintdevice_height(const void* self) {
    return QPaintDevice_Height((QPaintDevice*)self);
}

int32_t q_paintdevice_width_m_m(const void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_paintdevice_height_m_m(const void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_paintdevice_logical_dpi_x(const void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_paintdevice_logical_dpi_y(const void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_paintdevice_physical_dpi_x(const void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_paintdevice_physical_dpi_y(const void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_paintdevice_device_pixel_ratio(const void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_paintdevice_device_pixel_ratio_f(const void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_paintdevice_color_count(const void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_paintdevice_depth(const void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_paintdevice_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_paintdevice_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_paintdevice_delete(void* self) {
    QPaintDevice_Delete((QPaintDevice*)(self));
}
