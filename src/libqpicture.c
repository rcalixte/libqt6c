#include "libqiodevice.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqpicture.hpp"
#include "libqpicture.h"

QPicture* q_picture_new() {
    return QPicture_new();
}

QPicture* q_picture_new2(void* param1) {
    return QPicture_new2((QPicture*)param1);
}

QPicture* q_picture_new3(int formatVersion) {
    return QPicture_new3(formatVersion);
}

bool q_picture_is_null(void* self) {
    return QPicture_IsNull((QPicture*)self);
}

int32_t q_picture_dev_type(void* self) {
    return QPicture_DevType((QPicture*)self);
}

void q_picture_on_dev_type(void* self, int32_t (*callback)()) {
    QPicture_OnDevType((QPicture*)self, (intptr_t)callback);
}

int32_t q_picture_super_dev_type(void* self) {
    return QPicture_SuperDevType((QPicture*)self);
}

uint32_t q_picture_size(void* self) {
    return QPicture_Size((QPicture*)self);
}

const char* q_picture_data(void* self) {
    return QPicture_Data((QPicture*)self);
}

void q_picture_set_data(void* self, const char* data, uint32_t size) {
    QPicture_SetData((QPicture*)self, data, size);
}

void q_picture_on_set_data(void* self, void (*callback)(void*, const char*, uint32_t)) {
    QPicture_OnSetData((QPicture*)self, (intptr_t)callback);
}

void q_picture_super_set_data(void* self, const char* data, uint32_t size) {
    QPicture_SuperSetData((QPicture*)self, data, size);
}

bool q_picture_play(void* self, void* p) {
    return QPicture_Play((QPicture*)self, (QPainter*)p);
}

bool q_picture_load(void* self, void* dev) {
    return QPicture_Load((QPicture*)self, (QIODevice*)dev);
}

bool q_picture_load2(void* self, const char* fileName) {
    return QPicture_Load2((QPicture*)self, qstring(fileName));
}

bool q_picture_save(void* self, void* dev) {
    return QPicture_Save((QPicture*)self, (QIODevice*)dev);
}

bool q_picture_save2(void* self, const char* fileName) {
    return QPicture_Save2((QPicture*)self, qstring(fileName));
}

QRect* q_picture_bounding_rect(void* self) {
    return QPicture_BoundingRect((QPicture*)self);
}

void q_picture_set_bounding_rect(void* self, void* r) {
    QPicture_SetBoundingRect((QPicture*)self, (QRect*)r);
}

void q_picture_operator_assign(void* self, void* p) {
    QPicture_OperatorAssign((QPicture*)self, (QPicture*)p);
}

void q_picture_swap(void* self, void* other) {
    QPicture_Swap((QPicture*)self, (QPicture*)other);
}

void q_picture_detach(void* self) {
    QPicture_Detach((QPicture*)self);
}

bool q_picture_is_detached(void* self) {
    return QPicture_IsDetached((QPicture*)self);
}

QPaintEngine* q_picture_paint_engine(void* self) {
    return QPicture_PaintEngine((QPicture*)self);
}

void q_picture_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QPicture_OnPaintEngine((QPicture*)self, (intptr_t)callback);
}

QPaintEngine* q_picture_super_paint_engine(void* self) {
    return QPicture_SuperPaintEngine((QPicture*)self);
}

int32_t q_picture_metric(void* self, int32_t m) {
    return QPicture_Metric((QPicture*)self, m);
}

void q_picture_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QPicture_OnMetric((QPicture*)self, (intptr_t)callback);
}

int32_t q_picture_super_metric(void* self, int32_t m) {
    return QPicture_SuperMetric((QPicture*)self, m);
}

bool q_picture_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_picture_width(void* self) {
    return QPaintDevice_Width((QPaintDevice*)self);
}

int32_t q_picture_height(void* self) {
    return QPaintDevice_Height((QPaintDevice*)self);
}

int32_t q_picture_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_picture_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_picture_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_picture_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_picture_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_picture_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_picture_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_picture_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_picture_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_picture_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_picture_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_picture_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_picture_init_painter(void* self, void* painter) {
    QPicture_InitPainter((QPicture*)self, (QPainter*)painter);
}

void q_picture_super_init_painter(void* self, void* painter) {
    QPicture_SuperInitPainter((QPicture*)self, (QPainter*)painter);
}

void q_picture_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QPicture_OnInitPainter((QPicture*)self, (intptr_t)callback);
}

QPaintDevice* q_picture_redirected(void* self, void* offset) {
    return QPicture_Redirected((QPicture*)self, (QPoint*)offset);
}

QPaintDevice* q_picture_super_redirected(void* self, void* offset) {
    return QPicture_SuperRedirected((QPicture*)self, (QPoint*)offset);
}

void q_picture_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QPicture_OnRedirected((QPicture*)self, (intptr_t)callback);
}

QPainter* q_picture_shared_painter(void* self) {
    return QPicture_SharedPainter((QPicture*)self);
}

QPainter* q_picture_super_shared_painter(void* self) {
    return QPicture_SuperSharedPainter((QPicture*)self);
}

void q_picture_on_shared_painter(void* self, QPainter* (*callback)()) {
    QPicture_OnSharedPainter((QPicture*)self, (intptr_t)callback);
}

double q_picture_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QPicture_GetDecodedMetricF((QPicture*)self, metricA, metricB);
}

double q_picture_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QPicture_SuperGetDecodedMetricF((QPicture*)self, metricA, metricB);
}

void q_picture_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QPicture_OnGetDecodedMetricF((QPicture*)self, (intptr_t)callback);
}

void q_picture_delete(void* self) {
    QPicture_Delete((QPicture*)(self));
}
