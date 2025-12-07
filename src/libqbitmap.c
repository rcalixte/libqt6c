#include "libqimage.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqsize.hpp"
#include "libqtransform.hpp"
#include "libqvariant.hpp"
#include "libqbitmap.hpp"
#include "libqbitmap.h"

QBitmap* q_bitmap_new() {
    return QBitmap_new();
}

QBitmap* q_bitmap_new2(void* param1) {
    return QBitmap_new2((QPixmap*)param1);
}

QBitmap* q_bitmap_new3(int w, int h) {
    return QBitmap_new3(w, h);
}

QBitmap* q_bitmap_new4(void* param1) {
    return QBitmap_new4((QSize*)param1);
}

QBitmap* q_bitmap_new5(const char* fileName) {
    return QBitmap_new5(qstring(fileName));
}

QBitmap* q_bitmap_new6(void* param1) {
    return QBitmap_new6((QBitmap*)param1);
}

QBitmap* q_bitmap_new7(const char* fileName, const char* format) {
    return QBitmap_new7(qstring(fileName), format);
}

void q_bitmap_operator_assign(void* self, void* param1) {
    QBitmap_OperatorAssign((QBitmap*)self, (QPixmap*)param1);
}

void q_bitmap_swap(void* self, void* other) {
    QBitmap_Swap((QBitmap*)self, (QBitmap*)other);
}

QVariant* q_bitmap_to_q_variant(void* self) {
    return QBitmap_ToQVariant((QBitmap*)self);
}

void q_bitmap_clear(void* self) {
    QBitmap_Clear((QBitmap*)self);
}

QBitmap* q_bitmap_from_image(void* image) {
    return QBitmap_FromImage((QImage*)image);
}

QBitmap* q_bitmap_from_data(void* size, unsigned char* bits) {
    return QBitmap_FromData((QSize*)size, bits);
}

QBitmap* q_bitmap_from_pixmap(void* pixmap) {
    return QBitmap_FromPixmap((QPixmap*)pixmap);
}

QBitmap* q_bitmap_transformed(void* self, void* matrix) {
    return QBitmap_Transformed((QBitmap*)self, (QTransform*)matrix);
}

void q_bitmap_operator_assign2(void* self, void* param1) {
    QBitmap_OperatorAssign2((QBitmap*)self, (QBitmap*)param1);
}

QBitmap* q_bitmap_from_image2(void* image, int32_t flags) {
    return QBitmap_FromImage2((QImage*)image, flags);
}

QBitmap* q_bitmap_from_data3(void* size, unsigned char* bits, int32_t monoFormat) {
    return QBitmap_FromData3((QSize*)size, bits, monoFormat);
}

bool q_bitmap_is_null(void* self) {
    return QPixmap_IsNull((QPixmap*)self);
}

int32_t q_bitmap_width(void* self) {
    return QPixmap_Width((QPixmap*)self);
}

int32_t q_bitmap_height(void* self) {
    return QPixmap_Height((QPixmap*)self);
}

QSize* q_bitmap_size(void* self) {
    return QPixmap_Size((QPixmap*)self);
}

QRect* q_bitmap_rect(void* self) {
    return QPixmap_Rect((QPixmap*)self);
}

int32_t q_bitmap_depth(void* self) {
    return QPixmap_Depth((QPixmap*)self);
}

int32_t q_bitmap_default_depth() {
    return QPixmap_DefaultDepth();
}

void q_bitmap_fill(void* self) {
    QPixmap_Fill((QPixmap*)self);
}

QBitmap* q_bitmap_mask(void* self) {
    return QPixmap_Mask((QPixmap*)self);
}

void q_bitmap_set_mask(void* self, void* mask) {
    QPixmap_SetMask((QPixmap*)self, (QBitmap*)mask);
}

double q_bitmap_device_pixel_ratio(void* self) {
    return QPixmap_DevicePixelRatio((QPixmap*)self);
}

void q_bitmap_set_device_pixel_ratio(void* self, double scaleFactor) {
    QPixmap_SetDevicePixelRatio((QPixmap*)self, scaleFactor);
}

QSizeF* q_bitmap_device_independent_size(void* self) {
    return QPixmap_DeviceIndependentSize((QPixmap*)self);
}

bool q_bitmap_has_alpha(void* self) {
    return QPixmap_HasAlpha((QPixmap*)self);
}

bool q_bitmap_has_alpha_channel(void* self) {
    return QPixmap_HasAlphaChannel((QPixmap*)self);
}

QBitmap* q_bitmap_create_heuristic_mask(void* self) {
    return QPixmap_CreateHeuristicMask((QPixmap*)self);
}

QBitmap* q_bitmap_create_mask_from_color(void* self, void* maskColor) {
    return QPixmap_CreateMaskFromColor((QPixmap*)self, (QColor*)maskColor);
}

QPixmap* q_bitmap_scaled(void* self, int w, int h) {
    return QPixmap_Scaled((QPixmap*)self, w, h);
}

QPixmap* q_bitmap_scaled2(void* self, void* s) {
    return QPixmap_Scaled2((QPixmap*)self, (QSize*)s);
}

QPixmap* q_bitmap_scaled_to_width(void* self, int w) {
    return QPixmap_ScaledToWidth((QPixmap*)self, w);
}

QPixmap* q_bitmap_scaled_to_height(void* self, int h) {
    return QPixmap_ScaledToHeight((QPixmap*)self, h);
}

QTransform* q_bitmap_true_matrix(void* m, int w, int h) {
    return QPixmap_TrueMatrix((QTransform*)m, w, h);
}

QImage* q_bitmap_to_image(void* self) {
    return QPixmap_ToImage((QPixmap*)self);
}

QPixmap* q_bitmap_from_image_reader(void* imageReader) {
    return QPixmap_FromImageReader((QImageReader*)imageReader);
}

bool q_bitmap_load(void* self, const char* fileName) {
    return QPixmap_Load((QPixmap*)self, qstring(fileName));
}

bool q_bitmap_load_from_data(void* self, unsigned char* buf, uint32_t lenVal) {
    return QPixmap_LoadFromData((QPixmap*)self, buf, lenVal);
}

bool q_bitmap_load_from_data2(void* self, const char* data) {
    return QPixmap_LoadFromData2((QPixmap*)self, qstring(data));
}

bool q_bitmap_save(void* self, const char* fileName) {
    return QPixmap_Save((QPixmap*)self, qstring(fileName));
}

bool q_bitmap_save2(void* self, void* device) {
    return QPixmap_Save2((QPixmap*)self, (QIODevice*)device);
}

bool q_bitmap_convert_from_image(void* self, void* img) {
    return QPixmap_ConvertFromImage((QPixmap*)self, (QImage*)img);
}

QPixmap* q_bitmap_copy(void* self, int x, int y, int width, int height) {
    return QPixmap_Copy((QPixmap*)self, x, y, width, height);
}

QPixmap* q_bitmap_copy2(void* self) {
    return QPixmap_Copy2((QPixmap*)self);
}

void q_bitmap_scroll(void* self, int dx, int dy, int x, int y, int width, int height) {
    QPixmap_Scroll((QPixmap*)self, dx, dy, x, y, width, height);
}

void q_bitmap_scroll2(void* self, int dx, int dy, void* rect) {
    QPixmap_Scroll2((QPixmap*)self, dx, dy, (QRect*)rect);
}

long long q_bitmap_cache_key(void* self) {
    return QPixmap_CacheKey((QPixmap*)self);
}

bool q_bitmap_is_detached(void* self) {
    return QPixmap_IsDetached((QPixmap*)self);
}

void q_bitmap_detach(void* self) {
    QPixmap_Detach((QPixmap*)self);
}

bool q_bitmap_is_q_bitmap(void* self) {
    return QPixmap_IsQBitmap((QPixmap*)self);
}

bool q_bitmap_operator_not(void* self) {
    return QPixmap_OperatorNot((QPixmap*)self);
}

void q_bitmap_fill1(void* self, void* fillColor) {
    QPixmap_Fill1((QPixmap*)self, (QColor*)fillColor);
}

QBitmap* q_bitmap_create_heuristic_mask1(void* self, bool clipTight) {
    return QPixmap_CreateHeuristicMask1((QPixmap*)self, clipTight);
}

QBitmap* q_bitmap_create_mask_from_color2(void* self, void* maskColor, int32_t mode) {
    return QPixmap_CreateMaskFromColor2((QPixmap*)self, (QColor*)maskColor, mode);
}

QPixmap* q_bitmap_scaled3(void* self, int w, int h, int32_t aspectMode) {
    return QPixmap_Scaled3((QPixmap*)self, w, h, aspectMode);
}

QPixmap* q_bitmap_scaled4(void* self, int w, int h, int32_t aspectMode, int32_t mode) {
    return QPixmap_Scaled4((QPixmap*)self, w, h, aspectMode, mode);
}

QPixmap* q_bitmap_scaled22(void* self, void* s, int32_t aspectMode) {
    return QPixmap_Scaled22((QPixmap*)self, (QSize*)s, aspectMode);
}

QPixmap* q_bitmap_scaled32(void* self, void* s, int32_t aspectMode, int32_t mode) {
    return QPixmap_Scaled32((QPixmap*)self, (QSize*)s, aspectMode, mode);
}

QPixmap* q_bitmap_scaled_to_width2(void* self, int w, int32_t mode) {
    return QPixmap_ScaledToWidth2((QPixmap*)self, w, mode);
}

QPixmap* q_bitmap_scaled_to_height2(void* self, int h, int32_t mode) {
    return QPixmap_ScaledToHeight2((QPixmap*)self, h, mode);
}

QPixmap* q_bitmap_transformed2(void* self, void* param1, int32_t mode) {
    return QPixmap_Transformed2((QPixmap*)self, (QTransform*)param1, mode);
}

QPixmap* q_bitmap_from_image_reader2(void* imageReader, int32_t flags) {
    return QPixmap_FromImageReader2((QImageReader*)imageReader, flags);
}

bool q_bitmap_load2(void* self, const char* fileName, const char* format) {
    return QPixmap_Load2((QPixmap*)self, qstring(fileName), format);
}

bool q_bitmap_load3(void* self, const char* fileName, const char* format, int32_t flags) {
    return QPixmap_Load3((QPixmap*)self, qstring(fileName), format, flags);
}

bool q_bitmap_load_from_data3(void* self, unsigned char* buf, uint32_t lenVal, const char* format) {
    return QPixmap_LoadFromData3((QPixmap*)self, buf, lenVal, format);
}

bool q_bitmap_load_from_data4(void* self, unsigned char* buf, uint32_t lenVal, const char* format, int32_t flags) {
    return QPixmap_LoadFromData4((QPixmap*)self, buf, lenVal, format, flags);
}

bool q_bitmap_load_from_data22(void* self, const char* data, const char* format) {
    return QPixmap_LoadFromData22((QPixmap*)self, qstring(data), format);
}

bool q_bitmap_load_from_data32(void* self, const char* data, const char* format, int32_t flags) {
    return QPixmap_LoadFromData32((QPixmap*)self, qstring(data), format, flags);
}

bool q_bitmap_save22(void* self, const char* fileName, const char* format) {
    return QPixmap_Save22((QPixmap*)self, qstring(fileName), format);
}

bool q_bitmap_save3(void* self, const char* fileName, const char* format, int quality) {
    return QPixmap_Save3((QPixmap*)self, qstring(fileName), format, quality);
}

bool q_bitmap_save23(void* self, void* device, const char* format) {
    return QPixmap_Save23((QPixmap*)self, (QIODevice*)device, format);
}

bool q_bitmap_save32(void* self, void* device, const char* format, int quality) {
    return QPixmap_Save32((QPixmap*)self, (QIODevice*)device, format, quality);
}

bool q_bitmap_convert_from_image2(void* self, void* img, int32_t flags) {
    return QPixmap_ConvertFromImage2((QPixmap*)self, (QImage*)img, flags);
}

QPixmap* q_bitmap_copy1(void* self, void* rect) {
    return QPixmap_Copy1((QPixmap*)self, (QRect*)rect);
}

void q_bitmap_scroll7(void* self, int dx, int dy, int x, int y, int width, int height, void* exposed) {
    QPixmap_Scroll7((QPixmap*)self, dx, dy, x, y, width, height, (QRegion*)exposed);
}

void q_bitmap_scroll4(void* self, int dx, int dy, void* rect, void* exposed) {
    QPixmap_Scroll4((QPixmap*)self, dx, dy, (QRect*)rect, (QRegion*)exposed);
}

bool q_bitmap_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_bitmap_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_bitmap_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_bitmap_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_bitmap_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_bitmap_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_bitmap_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_bitmap_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_bitmap_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

double q_bitmap_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_bitmap_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_bitmap_dev_type(void* self) {
    return QBitmap_DevType((QBitmap*)self);
}

int32_t q_bitmap_qbase_dev_type(void* self) {
    return QBitmap_QBaseDevType((QBitmap*)self);
}

void q_bitmap_on_dev_type(void* self, int32_t (*callback)()) {
    QBitmap_OnDevType((QBitmap*)self, (intptr_t)callback);
}

QPaintEngine* q_bitmap_paint_engine(void* self) {
    return QBitmap_PaintEngine((QBitmap*)self);
}

QPaintEngine* q_bitmap_qbase_paint_engine(void* self) {
    return QBitmap_QBasePaintEngine((QBitmap*)self);
}

void q_bitmap_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QBitmap_OnPaintEngine((QBitmap*)self, (intptr_t)callback);
}

int32_t q_bitmap_metric(void* self, int32_t param1) {
    return QBitmap_Metric((QBitmap*)self, param1);
}

int32_t q_bitmap_qbase_metric(void* self, int32_t param1) {
    return QBitmap_QBaseMetric((QBitmap*)self, param1);
}

void q_bitmap_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QBitmap_OnMetric((QBitmap*)self, (intptr_t)callback);
}

void q_bitmap_init_painter(void* self, void* painter) {
    QBitmap_InitPainter((QBitmap*)self, (QPainter*)painter);
}

void q_bitmap_qbase_init_painter(void* self, void* painter) {
    QBitmap_QBaseInitPainter((QBitmap*)self, (QPainter*)painter);
}

void q_bitmap_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QBitmap_OnInitPainter((QBitmap*)self, (intptr_t)callback);
}

QPaintDevice* q_bitmap_redirected(void* self, void* offset) {
    return QBitmap_Redirected((QBitmap*)self, (QPoint*)offset);
}

QPaintDevice* q_bitmap_qbase_redirected(void* self, void* offset) {
    return QBitmap_QBaseRedirected((QBitmap*)self, (QPoint*)offset);
}

void q_bitmap_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QBitmap_OnRedirected((QBitmap*)self, (intptr_t)callback);
}

QPainter* q_bitmap_shared_painter(void* self) {
    return QBitmap_SharedPainter((QBitmap*)self);
}

QPainter* q_bitmap_qbase_shared_painter(void* self) {
    return QBitmap_QBaseSharedPainter((QBitmap*)self);
}

void q_bitmap_on_shared_painter(void* self, QPainter* (*callback)()) {
    QBitmap_OnSharedPainter((QBitmap*)self, (intptr_t)callback);
}

double q_bitmap_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QBitmap_GetDecodedMetricF((QBitmap*)self, metricA, metricB);
}

double q_bitmap_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QBitmap_QBaseGetDecodedMetricF((QBitmap*)self, metricA, metricB);
}

void q_bitmap_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QBitmap_OnGetDecodedMetricF((QBitmap*)self, (intptr_t)callback);
}

void q_bitmap_delete(void* self) {
    QBitmap_Delete((QBitmap*)(self));
}
