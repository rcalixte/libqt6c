#include "../libqopenglcontext.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "libqopenglpaintdevice.hpp"
#include "libqopenglpaintdevice.h"

QOpenGLPaintDevice* q_openglpaintdevice_new() {
    return QOpenGLPaintDevice_new();
}

QOpenGLPaintDevice* q_openglpaintdevice_new2(void* size) {
    return QOpenGLPaintDevice_new2((QSize*)size);
}

QOpenGLPaintDevice* q_openglpaintdevice_new3(int width, int height) {
    return QOpenGLPaintDevice_new3(width, height);
}

int32_t q_openglpaintdevice_dev_type(void* self) {
    return QOpenGLPaintDevice_DevType((QOpenGLPaintDevice*)self);
}

void q_openglpaintdevice_on_dev_type(void* self, int32_t (*callback)()) {
    QOpenGLPaintDevice_OnDevType((QOpenGLPaintDevice*)self, (intptr_t)callback);
}

int32_t q_openglpaintdevice_qbase_dev_type(void* self) {
    return QOpenGLPaintDevice_QBaseDevType((QOpenGLPaintDevice*)self);
}

QPaintEngine* q_openglpaintdevice_paint_engine(void* self) {
    return QOpenGLPaintDevice_PaintEngine((QOpenGLPaintDevice*)self);
}

void q_openglpaintdevice_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QOpenGLPaintDevice_OnPaintEngine((QOpenGLPaintDevice*)self, (intptr_t)callback);
}

QPaintEngine* q_openglpaintdevice_qbase_paint_engine(void* self) {
    return QOpenGLPaintDevice_QBasePaintEngine((QOpenGLPaintDevice*)self);
}

QOpenGLContext* q_openglpaintdevice_context(void* self) {
    return QOpenGLPaintDevice_Context((QOpenGLPaintDevice*)self);
}

QSize* q_openglpaintdevice_size(void* self) {
    return QOpenGLPaintDevice_Size((QOpenGLPaintDevice*)self);
}

void q_openglpaintdevice_set_size(void* self, void* size) {
    QOpenGLPaintDevice_SetSize((QOpenGLPaintDevice*)self, (QSize*)size);
}

void q_openglpaintdevice_set_device_pixel_ratio(void* self, double devicePixelRatio) {
    QOpenGLPaintDevice_SetDevicePixelRatio((QOpenGLPaintDevice*)self, devicePixelRatio);
}

double q_openglpaintdevice_dots_per_meter_x(void* self) {
    return QOpenGLPaintDevice_DotsPerMeterX((QOpenGLPaintDevice*)self);
}

double q_openglpaintdevice_dots_per_meter_y(void* self) {
    return QOpenGLPaintDevice_DotsPerMeterY((QOpenGLPaintDevice*)self);
}

void q_openglpaintdevice_set_dots_per_meter_x(void* self, double dotsPerMeterX) {
    QOpenGLPaintDevice_SetDotsPerMeterX((QOpenGLPaintDevice*)self, dotsPerMeterX);
}

void q_openglpaintdevice_set_dots_per_meter_y(void* self, double dotsPerMeterY) {
    QOpenGLPaintDevice_SetDotsPerMeterY((QOpenGLPaintDevice*)self, dotsPerMeterY);
}

void q_openglpaintdevice_set_paint_flipped(void* self, bool flipped) {
    QOpenGLPaintDevice_SetPaintFlipped((QOpenGLPaintDevice*)self, flipped);
}

bool q_openglpaintdevice_paint_flipped(void* self) {
    return QOpenGLPaintDevice_PaintFlipped((QOpenGLPaintDevice*)self);
}

void q_openglpaintdevice_ensure_active_target(void* self) {
    QOpenGLPaintDevice_EnsureActiveTarget((QOpenGLPaintDevice*)self);
}

void q_openglpaintdevice_on_ensure_active_target(void* self, void (*callback)()) {
    QOpenGLPaintDevice_OnEnsureActiveTarget((QOpenGLPaintDevice*)self, (intptr_t)callback);
}

void q_openglpaintdevice_qbase_ensure_active_target(void* self) {
    QOpenGLPaintDevice_QBaseEnsureActiveTarget((QOpenGLPaintDevice*)self);
}

int32_t q_openglpaintdevice_metric(void* self, int32_t metric) {
    return QOpenGLPaintDevice_Metric((QOpenGLPaintDevice*)self, metric);
}

void q_openglpaintdevice_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QOpenGLPaintDevice_OnMetric((QOpenGLPaintDevice*)self, (intptr_t)callback);
}

int32_t q_openglpaintdevice_qbase_metric(void* self, int32_t metric) {
    return QOpenGLPaintDevice_QBaseMetric((QOpenGLPaintDevice*)self, metric);
}

bool q_openglpaintdevice_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_openglpaintdevice_width(void* self) {
    return QPaintDevice_Width((QPaintDevice*)self);
}

int32_t q_openglpaintdevice_height(void* self) {
    return QPaintDevice_Height((QPaintDevice*)self);
}

int32_t q_openglpaintdevice_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_openglpaintdevice_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_openglpaintdevice_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_openglpaintdevice_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_openglpaintdevice_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_openglpaintdevice_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_openglpaintdevice_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_openglpaintdevice_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_openglpaintdevice_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_openglpaintdevice_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_openglpaintdevice_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_openglpaintdevice_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_openglpaintdevice_init_painter(void* self, void* painter) {
    QOpenGLPaintDevice_InitPainter((QOpenGLPaintDevice*)self, (QPainter*)painter);
}

void q_openglpaintdevice_qbase_init_painter(void* self, void* painter) {
    QOpenGLPaintDevice_QBaseInitPainter((QOpenGLPaintDevice*)self, (QPainter*)painter);
}

void q_openglpaintdevice_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QOpenGLPaintDevice_OnInitPainter((QOpenGLPaintDevice*)self, (intptr_t)callback);
}

QPaintDevice* q_openglpaintdevice_redirected(void* self, void* offset) {
    return QOpenGLPaintDevice_Redirected((QOpenGLPaintDevice*)self, (QPoint*)offset);
}

QPaintDevice* q_openglpaintdevice_qbase_redirected(void* self, void* offset) {
    return QOpenGLPaintDevice_QBaseRedirected((QOpenGLPaintDevice*)self, (QPoint*)offset);
}

void q_openglpaintdevice_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QOpenGLPaintDevice_OnRedirected((QOpenGLPaintDevice*)self, (intptr_t)callback);
}

QPainter* q_openglpaintdevice_shared_painter(void* self) {
    return QOpenGLPaintDevice_SharedPainter((QOpenGLPaintDevice*)self);
}

QPainter* q_openglpaintdevice_qbase_shared_painter(void* self) {
    return QOpenGLPaintDevice_QBaseSharedPainter((QOpenGLPaintDevice*)self);
}

void q_openglpaintdevice_on_shared_painter(void* self, QPainter* (*callback)()) {
    QOpenGLPaintDevice_OnSharedPainter((QOpenGLPaintDevice*)self, (intptr_t)callback);
}

double q_openglpaintdevice_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QOpenGLPaintDevice_GetDecodedMetricF((QOpenGLPaintDevice*)self, metricA, metricB);
}

double q_openglpaintdevice_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QOpenGLPaintDevice_QBaseGetDecodedMetricF((QOpenGLPaintDevice*)self, metricA, metricB);
}

void q_openglpaintdevice_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QOpenGLPaintDevice_OnGetDecodedMetricF((QOpenGLPaintDevice*)self, (intptr_t)callback);
}

void q_openglpaintdevice_delete(void* self) {
    QOpenGLPaintDevice_Delete((QOpenGLPaintDevice*)(self));
}
