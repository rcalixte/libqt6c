#include "../libqiodevice.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include <string.h>
#include "libqsvggenerator.hpp"
#include "libqsvggenerator.h"

QSvgGenerator* q_svggenerator_new() {
    return QSvgGenerator_new();
}

QSvgGenerator* q_svggenerator_new2(int64_t version) {
    return QSvgGenerator_new2(version);
}

const char* q_svggenerator_title(void* self) {
    libqt_string _str = QSvgGenerator_Title((QSvgGenerator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_svggenerator_set_title(void* self, const char* title) {
    QSvgGenerator_SetTitle((QSvgGenerator*)self, qstring(title));
}

const char* q_svggenerator_description(void* self) {
    libqt_string _str = QSvgGenerator_Description((QSvgGenerator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_svggenerator_set_description(void* self, const char* description) {
    QSvgGenerator_SetDescription((QSvgGenerator*)self, qstring(description));
}

QSize* q_svggenerator_size(void* self) {
    return QSvgGenerator_Size((QSvgGenerator*)self);
}

void q_svggenerator_set_size(void* self, void* size) {
    QSvgGenerator_SetSize((QSvgGenerator*)self, (QSize*)size);
}

QRect* q_svggenerator_view_box(void* self) {
    return QSvgGenerator_ViewBox((QSvgGenerator*)self);
}

QRectF* q_svggenerator_view_box_f(void* self) {
    return QSvgGenerator_ViewBoxF((QSvgGenerator*)self);
}

void q_svggenerator_set_view_box(void* self, void* viewBox) {
    QSvgGenerator_SetViewBox((QSvgGenerator*)self, (QRect*)viewBox);
}

void q_svggenerator_set_view_box2(void* self, void* viewBox) {
    QSvgGenerator_SetViewBox2((QSvgGenerator*)self, (QRectF*)viewBox);
}

const char* q_svggenerator_file_name(void* self) {
    libqt_string _str = QSvgGenerator_FileName((QSvgGenerator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_svggenerator_set_file_name(void* self, const char* fileName) {
    QSvgGenerator_SetFileName((QSvgGenerator*)self, qstring(fileName));
}

QIODevice* q_svggenerator_output_device(void* self) {
    return QSvgGenerator_OutputDevice((QSvgGenerator*)self);
}

void q_svggenerator_set_output_device(void* self, void* outputDevice) {
    QSvgGenerator_SetOutputDevice((QSvgGenerator*)self, (QIODevice*)outputDevice);
}

void q_svggenerator_set_resolution(void* self, int dpi) {
    QSvgGenerator_SetResolution((QSvgGenerator*)self, dpi);
}

int32_t q_svggenerator_resolution(void* self) {
    return QSvgGenerator_Resolution((QSvgGenerator*)self);
}

int64_t q_svggenerator_svg_version(void* self) {
    return QSvgGenerator_SvgVersion((QSvgGenerator*)self);
}

QPaintEngine* q_svggenerator_paint_engine(void* self) {
    return QSvgGenerator_PaintEngine((QSvgGenerator*)self);
}

void q_svggenerator_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QSvgGenerator_OnPaintEngine((QSvgGenerator*)self, (intptr_t)slot);
}

QPaintEngine* q_svggenerator_qbase_paint_engine(void* self) {
    return QSvgGenerator_QBasePaintEngine((QSvgGenerator*)self);
}

int32_t q_svggenerator_metric(void* self, int64_t metric) {
    return QSvgGenerator_Metric((QSvgGenerator*)self, metric);
}

void q_svggenerator_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QSvgGenerator_OnMetric((QSvgGenerator*)self, (intptr_t)slot);
}

int32_t q_svggenerator_qbase_metric(void* self, int64_t metric) {
    return QSvgGenerator_QBaseMetric((QSvgGenerator*)self, metric);
}

bool q_svggenerator_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_svggenerator_width(void* self) {
    return QPaintDevice_Width((QPaintDevice*)self);
}

int32_t q_svggenerator_height(void* self) {
    return QPaintDevice_Height((QPaintDevice*)self);
}

int32_t q_svggenerator_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_svggenerator_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_svggenerator_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_svggenerator_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_svggenerator_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_svggenerator_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_svggenerator_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_svggenerator_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_svggenerator_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_svggenerator_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_svggenerator_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_svggenerator_encode_metric_f(int64_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_svggenerator_dev_type(void* self) {
    return QSvgGenerator_DevType((QSvgGenerator*)self);
}

int32_t q_svggenerator_qbase_dev_type(void* self) {
    return QSvgGenerator_QBaseDevType((QSvgGenerator*)self);
}

void q_svggenerator_on_dev_type(void* self, int32_t (*slot)()) {
    QSvgGenerator_OnDevType((QSvgGenerator*)self, (intptr_t)slot);
}

void q_svggenerator_init_painter(void* self, void* painter) {
    QSvgGenerator_InitPainter((QSvgGenerator*)self, (QPainter*)painter);
}

void q_svggenerator_qbase_init_painter(void* self, void* painter) {
    QSvgGenerator_QBaseInitPainter((QSvgGenerator*)self, (QPainter*)painter);
}

void q_svggenerator_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QSvgGenerator_OnInitPainter((QSvgGenerator*)self, (intptr_t)slot);
}

QPaintDevice* q_svggenerator_redirected(void* self, void* offset) {
    return QSvgGenerator_Redirected((QSvgGenerator*)self, (QPoint*)offset);
}

QPaintDevice* q_svggenerator_qbase_redirected(void* self, void* offset) {
    return QSvgGenerator_QBaseRedirected((QSvgGenerator*)self, (QPoint*)offset);
}

void q_svggenerator_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QSvgGenerator_OnRedirected((QSvgGenerator*)self, (intptr_t)slot);
}

QPainter* q_svggenerator_shared_painter(void* self) {
    return QSvgGenerator_SharedPainter((QSvgGenerator*)self);
}

QPainter* q_svggenerator_qbase_shared_painter(void* self) {
    return QSvgGenerator_QBaseSharedPainter((QSvgGenerator*)self);
}

void q_svggenerator_on_shared_painter(void* self, QPainter* (*slot)()) {
    QSvgGenerator_OnSharedPainter((QSvgGenerator*)self, (intptr_t)slot);
}

double q_svggenerator_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QSvgGenerator_GetDecodedMetricF((QSvgGenerator*)self, metricA, metricB);
}

double q_svggenerator_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QSvgGenerator_QBaseGetDecodedMetricF((QSvgGenerator*)self, metricA, metricB);
}

void q_svggenerator_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t)) {
    QSvgGenerator_OnGetDecodedMetricF((QSvgGenerator*)self, (intptr_t)slot);
}

void q_svggenerator_delete(void* self) {
    QSvgGenerator_Delete((QSvgGenerator*)(self));
}
