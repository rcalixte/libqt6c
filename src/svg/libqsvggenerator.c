#include "../libqiodevice.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include "libqsvggenerator.hpp"
#include "libqsvggenerator.h"

QSvgGenerator* q_svggenerator_new() {
    return QSvgGenerator_New();
}

QSvgGenerator* q_svggenerator_new2(int32_t version) {
    return QSvgGenerator_New2(version);
}

const char* q_svggenerator_title(const void* self) {
    libqt_string _str = QSvgGenerator_Title((QSvgGenerator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_svggenerator_set_title(void* self, const char* title) {
    QSvgGenerator_SetTitle((QSvgGenerator*)self, qstring(title));
}

const char* q_svggenerator_description(const void* self) {
    libqt_string _str = QSvgGenerator_Description((QSvgGenerator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_svggenerator_set_description(void* self, const char* description) {
    QSvgGenerator_SetDescription((QSvgGenerator*)self, qstring(description));
}

QSize* q_svggenerator_size(const void* self) {
    return QSvgGenerator_Size((QSvgGenerator*)self);
}

void q_svggenerator_set_size(void* self, const void* size) {
    QSvgGenerator_SetSize((QSvgGenerator*)self, (QSize*)size);
}

QRect* q_svggenerator_view_box(const void* self) {
    return QSvgGenerator_ViewBox((QSvgGenerator*)self);
}

QRectF* q_svggenerator_view_box_f(const void* self) {
    return QSvgGenerator_ViewBoxF((QSvgGenerator*)self);
}

void q_svggenerator_set_view_box(void* self, const void* viewBox) {
    QSvgGenerator_SetViewBox((QSvgGenerator*)self, (QRect*)viewBox);
}

void q_svggenerator_set_view_box2(void* self, const void* viewBox) {
    QSvgGenerator_SetViewBox2((QSvgGenerator*)self, (QRectF*)viewBox);
}

const char* q_svggenerator_file_name(const void* self) {
    libqt_string _str = QSvgGenerator_FileName((QSvgGenerator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_svggenerator_set_file_name(void* self, const char* fileName) {
    QSvgGenerator_SetFileName((QSvgGenerator*)self, qstring(fileName));
}

QIODevice* q_svggenerator_output_device(const void* self) {
    return QSvgGenerator_OutputDevice((QSvgGenerator*)self);
}

void q_svggenerator_set_output_device(void* self, void* outputDevice) {
    QSvgGenerator_SetOutputDevice((QSvgGenerator*)self, (QIODevice*)outputDevice);
}

void q_svggenerator_set_resolution(void* self, int dpi) {
    QSvgGenerator_SetResolution((QSvgGenerator*)self, dpi);
}

int32_t q_svggenerator_resolution(const void* self) {
    return QSvgGenerator_Resolution((QSvgGenerator*)self);
}

int32_t q_svggenerator_svg_version(const void* self) {
    return QSvgGenerator_SvgVersion((QSvgGenerator*)self);
}

QPaintEngine* q_svggenerator_paint_engine(const void* self) {
    return QSvgGenerator_PaintEngine((QSvgGenerator*)self);
}

void q_svggenerator_on_paint_engine(const void* self, QPaintEngine* (*callback)(const void*)) {
    QSvgGenerator_OnPaintEngine((QSvgGenerator*)self, (intptr_t)callback);
}

QPaintEngine* q_svggenerator_super_paint_engine(const void* self) {
    return QSvgGenerator_SuperPaintEngine((QSvgGenerator*)self);
}

int32_t q_svggenerator_metric(const void* self, int32_t metric) {
    return QSvgGenerator_Metric((QSvgGenerator*)self, metric);
}

void q_svggenerator_on_metric(const void* self, int32_t (*callback)(const void*, int32_t)) {
    QSvgGenerator_OnMetric((QSvgGenerator*)self, (intptr_t)callback);
}

int32_t q_svggenerator_super_metric(const void* self, int32_t metric) {
    return QSvgGenerator_SuperMetric((QSvgGenerator*)self, metric);
}

bool q_svggenerator_painting_active(const void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_svggenerator_width(const void* self) {
    return QPaintDevice_Width((QPaintDevice*)self);
}

int32_t q_svggenerator_height(const void* self) {
    return QPaintDevice_Height((QPaintDevice*)self);
}

int32_t q_svggenerator_width_m_m(const void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_svggenerator_height_m_m(const void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_svggenerator_logical_dpi_x(const void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_svggenerator_logical_dpi_y(const void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_svggenerator_physical_dpi_x(const void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_svggenerator_physical_dpi_y(const void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_svggenerator_device_pixel_ratio(const void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_svggenerator_device_pixel_ratio_f(const void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_svggenerator_color_count(const void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_svggenerator_depth(const void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_svggenerator_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_svggenerator_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_svggenerator_dev_type(const void* self) {
    return QSvgGenerator_DevType((QSvgGenerator*)self);
}

int32_t q_svggenerator_super_dev_type(const void* self) {
    return QSvgGenerator_SuperDevType((QSvgGenerator*)self);
}

void q_svggenerator_on_dev_type(const void* self, int32_t (*callback)(const void*)) {
    QSvgGenerator_OnDevType((const QSvgGenerator*)self, (intptr_t)callback);
}

void q_svggenerator_init_painter(const void* self, void* painter) {
    QSvgGenerator_InitPainter((QSvgGenerator*)self, (QPainter*)painter);
}

void q_svggenerator_super_init_painter(const void* self, void* painter) {
    QSvgGenerator_SuperInitPainter((QSvgGenerator*)self, (QPainter*)painter);
}

void q_svggenerator_on_init_painter(const void* self, void (*callback)(const void*, void*)) {
    QSvgGenerator_OnInitPainter((const QSvgGenerator*)self, (intptr_t)callback);
}

QPaintDevice* q_svggenerator_redirected(const void* self, void* offset) {
    return QSvgGenerator_Redirected((QSvgGenerator*)self, (QPoint*)offset);
}

QPaintDevice* q_svggenerator_super_redirected(const void* self, void* offset) {
    return QSvgGenerator_SuperRedirected((QSvgGenerator*)self, (QPoint*)offset);
}

void q_svggenerator_on_redirected(const void* self, QPaintDevice* (*callback)(const void*, void*)) {
    QSvgGenerator_OnRedirected((const QSvgGenerator*)self, (intptr_t)callback);
}

QPainter* q_svggenerator_shared_painter(const void* self) {
    return QSvgGenerator_SharedPainter((QSvgGenerator*)self);
}

QPainter* q_svggenerator_super_shared_painter(const void* self) {
    return QSvgGenerator_SuperSharedPainter((QSvgGenerator*)self);
}

void q_svggenerator_on_shared_painter(const void* self, QPainter* (*callback)(const void*)) {
    QSvgGenerator_OnSharedPainter((const QSvgGenerator*)self, (intptr_t)callback);
}

double q_svggenerator_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB) {
    return QSvgGenerator_GetDecodedMetricF((QSvgGenerator*)self, metricA, metricB);
}

void q_svggenerator_delete(void* self) {
    QSvgGenerator_Delete((QSvgGenerator*)(self));
}
