#include "libqbitmap.hpp"
#include "libqcolor.hpp"
#include "libqiodevice.hpp"
#include "libqimage.hpp"
#include "libqimagereader.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqsize.hpp"
#include "libqtransform.hpp"
#include "libqvariant.hpp"
#include "libqpixmap.hpp"
#include "libqpixmap.h"

QPixmap* q_pixmap_new() {
    return QPixmap_new();
}

QPixmap* q_pixmap_new2(int w, int h) {
    return QPixmap_new2(w, h);
}

QPixmap* q_pixmap_new3(void* param1) {
    return QPixmap_new3((QSize*)param1);
}

QPixmap* q_pixmap_new4(const char* fileName) {
    return QPixmap_new4(qstring(fileName));
}

QPixmap* q_pixmap_new5(const char** xpm) {
    return QPixmap_new5(xpm);
}

QPixmap* q_pixmap_new6(void* param1) {
    return QPixmap_new6((QPixmap*)param1);
}

QPixmap* q_pixmap_new7(const char* fileName, const char* format) {
    return QPixmap_new7(qstring(fileName), format);
}

QPixmap* q_pixmap_new8(const char* fileName, const char* format, int32_t flags) {
    return QPixmap_new8(qstring(fileName), format, flags);
}

void q_pixmap_operator_assign(void* self, void* param1) {
    QPixmap_OperatorAssign((QPixmap*)self, (QPixmap*)param1);
}

void q_pixmap_swap(void* self, void* other) {
    QPixmap_Swap((QPixmap*)self, (QPixmap*)other);
}

QVariant* q_pixmap_to_q_variant(void* self) {
    return QPixmap_ToQVariant((QPixmap*)self);
}

bool q_pixmap_is_null(void* self) {
    return QPixmap_IsNull((QPixmap*)self);
}

int32_t q_pixmap_dev_type(void* self) {
    return QPixmap_DevType((QPixmap*)self);
}

void q_pixmap_on_dev_type(void* self, int32_t (*callback)()) {
    QPixmap_OnDevType((QPixmap*)self, (intptr_t)callback);
}

int32_t q_pixmap_qbase_dev_type(void* self) {
    return QPixmap_QBaseDevType((QPixmap*)self);
}

int32_t q_pixmap_width(void* self) {
    return QPixmap_Width((QPixmap*)self);
}

int32_t q_pixmap_height(void* self) {
    return QPixmap_Height((QPixmap*)self);
}

QSize* q_pixmap_size(void* self) {
    return QPixmap_Size((QPixmap*)self);
}

QRect* q_pixmap_rect(void* self) {
    return QPixmap_Rect((QPixmap*)self);
}

int32_t q_pixmap_depth(void* self) {
    return QPixmap_Depth((QPixmap*)self);
}

int32_t q_pixmap_default_depth() {
    return QPixmap_DefaultDepth();
}

void q_pixmap_fill(void* self) {
    QPixmap_Fill((QPixmap*)self);
}

QBitmap* q_pixmap_mask(void* self) {
    return QPixmap_Mask((QPixmap*)self);
}

void q_pixmap_set_mask(void* self, void* mask) {
    QPixmap_SetMask((QPixmap*)self, (QBitmap*)mask);
}

double q_pixmap_device_pixel_ratio(void* self) {
    return QPixmap_DevicePixelRatio((QPixmap*)self);
}

void q_pixmap_set_device_pixel_ratio(void* self, double scaleFactor) {
    QPixmap_SetDevicePixelRatio((QPixmap*)self, scaleFactor);
}

QSizeF* q_pixmap_device_independent_size(void* self) {
    return QPixmap_DeviceIndependentSize((QPixmap*)self);
}

bool q_pixmap_has_alpha(void* self) {
    return QPixmap_HasAlpha((QPixmap*)self);
}

bool q_pixmap_has_alpha_channel(void* self) {
    return QPixmap_HasAlphaChannel((QPixmap*)self);
}

QBitmap* q_pixmap_create_heuristic_mask(void* self) {
    return QPixmap_CreateHeuristicMask((QPixmap*)self);
}

QBitmap* q_pixmap_create_mask_from_color(void* self, void* maskColor) {
    return QPixmap_CreateMaskFromColor((QPixmap*)self, (QColor*)maskColor);
}

QPixmap* q_pixmap_scaled(void* self, int w, int h) {
    return QPixmap_Scaled((QPixmap*)self, w, h);
}

QPixmap* q_pixmap_scaled2(void* self, void* s) {
    return QPixmap_Scaled2((QPixmap*)self, (QSize*)s);
}

QPixmap* q_pixmap_scaled_to_width(void* self, int w) {
    return QPixmap_ScaledToWidth((QPixmap*)self, w);
}

QPixmap* q_pixmap_scaled_to_height(void* self, int h) {
    return QPixmap_ScaledToHeight((QPixmap*)self, h);
}

QPixmap* q_pixmap_transformed(void* self, void* param1) {
    return QPixmap_Transformed((QPixmap*)self, (QTransform*)param1);
}

QTransform* q_pixmap_true_matrix(void* m, int w, int h) {
    return QPixmap_TrueMatrix((QTransform*)m, w, h);
}

QImage* q_pixmap_to_image(void* self) {
    return QPixmap_ToImage((QPixmap*)self);
}

QPixmap* q_pixmap_from_image(void* image) {
    return QPixmap_FromImage((QImage*)image);
}

QPixmap* q_pixmap_from_image_reader(void* imageReader) {
    return QPixmap_FromImageReader((QImageReader*)imageReader);
}

bool q_pixmap_load(void* self, const char* fileName) {
    return QPixmap_Load((QPixmap*)self, qstring(fileName));
}

bool q_pixmap_load_from_data(void* self, unsigned char* buf, uint32_t lenVal) {
    return QPixmap_LoadFromData((QPixmap*)self, buf, lenVal);
}

bool q_pixmap_load_from_data2(void* self, char* data) {
    return QPixmap_LoadFromData2((QPixmap*)self, qstring(data));
}

bool q_pixmap_save(void* self, const char* fileName) {
    return QPixmap_Save((QPixmap*)self, qstring(fileName));
}

bool q_pixmap_save2(void* self, void* device) {
    return QPixmap_Save2((QPixmap*)self, (QIODevice*)device);
}

bool q_pixmap_convert_from_image(void* self, void* img) {
    return QPixmap_ConvertFromImage((QPixmap*)self, (QImage*)img);
}

QPixmap* q_pixmap_copy(void* self, int x, int y, int width, int height) {
    return QPixmap_Copy((QPixmap*)self, x, y, width, height);
}

QPixmap* q_pixmap_copy2(void* self) {
    return QPixmap_Copy2((QPixmap*)self);
}

void q_pixmap_scroll(void* self, int dx, int dy, int x, int y, int width, int height) {
    QPixmap_Scroll((QPixmap*)self, dx, dy, x, y, width, height);
}

void q_pixmap_scroll2(void* self, int dx, int dy, void* rect) {
    QPixmap_Scroll2((QPixmap*)self, dx, dy, (QRect*)rect);
}

long long q_pixmap_cache_key(void* self) {
    return QPixmap_CacheKey((QPixmap*)self);
}

bool q_pixmap_is_detached(void* self) {
    return QPixmap_IsDetached((QPixmap*)self);
}

void q_pixmap_detach(void* self) {
    QPixmap_Detach((QPixmap*)self);
}

bool q_pixmap_is_q_bitmap(void* self) {
    return QPixmap_IsQBitmap((QPixmap*)self);
}

QPaintEngine* q_pixmap_paint_engine(void* self) {
    return QPixmap_PaintEngine((QPixmap*)self);
}

void q_pixmap_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QPixmap_OnPaintEngine((QPixmap*)self, (intptr_t)callback);
}

QPaintEngine* q_pixmap_qbase_paint_engine(void* self) {
    return QPixmap_QBasePaintEngine((QPixmap*)self);
}

bool q_pixmap_operator_not(void* self) {
    return QPixmap_OperatorNot((QPixmap*)self);
}

int32_t q_pixmap_metric(void* self, int32_t param1) {
    return QPixmap_Metric((QPixmap*)self, param1);
}

void q_pixmap_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QPixmap_OnMetric((QPixmap*)self, (intptr_t)callback);
}

int32_t q_pixmap_qbase_metric(void* self, int32_t param1) {
    return QPixmap_QBaseMetric((QPixmap*)self, param1);
}

void q_pixmap_fill1(void* self, void* fillColor) {
    QPixmap_Fill1((QPixmap*)self, (QColor*)fillColor);
}

QBitmap* q_pixmap_create_heuristic_mask1(void* self, bool clipTight) {
    return QPixmap_CreateHeuristicMask1((QPixmap*)self, clipTight);
}

QBitmap* q_pixmap_create_mask_from_color2(void* self, void* maskColor, int32_t mode) {
    return QPixmap_CreateMaskFromColor2((QPixmap*)self, (QColor*)maskColor, mode);
}

QPixmap* q_pixmap_scaled3(void* self, int w, int h, int32_t aspectMode) {
    return QPixmap_Scaled3((QPixmap*)self, w, h, aspectMode);
}

QPixmap* q_pixmap_scaled4(void* self, int w, int h, int32_t aspectMode, int32_t mode) {
    return QPixmap_Scaled4((QPixmap*)self, w, h, aspectMode, mode);
}

QPixmap* q_pixmap_scaled22(void* self, void* s, int32_t aspectMode) {
    return QPixmap_Scaled22((QPixmap*)self, (QSize*)s, aspectMode);
}

QPixmap* q_pixmap_scaled32(void* self, void* s, int32_t aspectMode, int32_t mode) {
    return QPixmap_Scaled32((QPixmap*)self, (QSize*)s, aspectMode, mode);
}

QPixmap* q_pixmap_scaled_to_width2(void* self, int w, int32_t mode) {
    return QPixmap_ScaledToWidth2((QPixmap*)self, w, mode);
}

QPixmap* q_pixmap_scaled_to_height2(void* self, int h, int32_t mode) {
    return QPixmap_ScaledToHeight2((QPixmap*)self, h, mode);
}

QPixmap* q_pixmap_transformed2(void* self, void* param1, int32_t mode) {
    return QPixmap_Transformed2((QPixmap*)self, (QTransform*)param1, mode);
}

QPixmap* q_pixmap_from_image2(void* image, int32_t flags) {
    return QPixmap_FromImage2((QImage*)image, flags);
}

QPixmap* q_pixmap_from_image_reader2(void* imageReader, int32_t flags) {
    return QPixmap_FromImageReader2((QImageReader*)imageReader, flags);
}

bool q_pixmap_load2(void* self, const char* fileName, const char* format) {
    return QPixmap_Load2((QPixmap*)self, qstring(fileName), format);
}

bool q_pixmap_load3(void* self, const char* fileName, const char* format, int32_t flags) {
    return QPixmap_Load3((QPixmap*)self, qstring(fileName), format, flags);
}

bool q_pixmap_load_from_data3(void* self, unsigned char* buf, uint32_t lenVal, const char* format) {
    return QPixmap_LoadFromData3((QPixmap*)self, buf, lenVal, format);
}

bool q_pixmap_load_from_data4(void* self, unsigned char* buf, uint32_t lenVal, const char* format, int32_t flags) {
    return QPixmap_LoadFromData4((QPixmap*)self, buf, lenVal, format, flags);
}

bool q_pixmap_load_from_data22(void* self, char* data, const char* format) {
    return QPixmap_LoadFromData22((QPixmap*)self, qstring(data), format);
}

bool q_pixmap_load_from_data32(void* self, char* data, const char* format, int32_t flags) {
    return QPixmap_LoadFromData32((QPixmap*)self, qstring(data), format, flags);
}

bool q_pixmap_save22(void* self, const char* fileName, const char* format) {
    return QPixmap_Save22((QPixmap*)self, qstring(fileName), format);
}

bool q_pixmap_save3(void* self, const char* fileName, const char* format, int quality) {
    return QPixmap_Save3((QPixmap*)self, qstring(fileName), format, quality);
}

bool q_pixmap_save23(void* self, void* device, const char* format) {
    return QPixmap_Save23((QPixmap*)self, (QIODevice*)device, format);
}

bool q_pixmap_save32(void* self, void* device, const char* format, int quality) {
    return QPixmap_Save32((QPixmap*)self, (QIODevice*)device, format, quality);
}

bool q_pixmap_convert_from_image2(void* self, void* img, int32_t flags) {
    return QPixmap_ConvertFromImage2((QPixmap*)self, (QImage*)img, flags);
}

QPixmap* q_pixmap_copy1(void* self, void* rect) {
    return QPixmap_Copy1((QPixmap*)self, (QRect*)rect);
}

void q_pixmap_scroll7(void* self, int dx, int dy, int x, int y, int width, int height, void* exposed) {
    QPixmap_Scroll7((QPixmap*)self, dx, dy, x, y, width, height, (QRegion*)exposed);
}

void q_pixmap_scroll4(void* self, int dx, int dy, void* rect, void* exposed) {
    QPixmap_Scroll4((QPixmap*)self, dx, dy, (QRect*)rect, (QRegion*)exposed);
}

bool q_pixmap_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_pixmap_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_pixmap_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_pixmap_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_pixmap_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_pixmap_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_pixmap_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_pixmap_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_pixmap_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

double q_pixmap_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_pixmap_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_pixmap_init_painter(void* self, void* painter) {
    QPixmap_InitPainter((QPixmap*)self, (QPainter*)painter);
}

void q_pixmap_qbase_init_painter(void* self, void* painter) {
    QPixmap_QBaseInitPainter((QPixmap*)self, (QPainter*)painter);
}

void q_pixmap_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QPixmap_OnInitPainter((QPixmap*)self, (intptr_t)callback);
}

QPaintDevice* q_pixmap_redirected(void* self, void* offset) {
    return QPixmap_Redirected((QPixmap*)self, (QPoint*)offset);
}

QPaintDevice* q_pixmap_qbase_redirected(void* self, void* offset) {
    return QPixmap_QBaseRedirected((QPixmap*)self, (QPoint*)offset);
}

void q_pixmap_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QPixmap_OnRedirected((QPixmap*)self, (intptr_t)callback);
}

QPainter* q_pixmap_shared_painter(void* self) {
    return QPixmap_SharedPainter((QPixmap*)self);
}

QPainter* q_pixmap_qbase_shared_painter(void* self) {
    return QPixmap_QBaseSharedPainter((QPixmap*)self);
}

void q_pixmap_on_shared_painter(void* self, QPainter* (*callback)()) {
    QPixmap_OnSharedPainter((QPixmap*)self, (intptr_t)callback);
}

double q_pixmap_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QPixmap_GetDecodedMetricF((QPixmap*)self, metricA, metricB);
}

double q_pixmap_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QPixmap_QBaseGetDecodedMetricF((QPixmap*)self, metricA, metricB);
}

void q_pixmap_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QPixmap_OnGetDecodedMetricF((QPixmap*)self, (intptr_t)callback);
}

void q_pixmap_delete(void* self) {
    QPixmap_Delete((QPixmap*)(self));
}
