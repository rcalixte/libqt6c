#include "libqbytearrayview.hpp"
#include "libqcolor.hpp"
#include "libqcolorspace.hpp"
#include "libqcolortransform.hpp"
#include "libqiodevice.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpixelformat.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqtransform.hpp"
#include "libqvariant.hpp"
#include "libqimage.hpp"
#include "libqimage.h"

QImage* q_image_new() {
    return QImage_new();
}

QImage* q_image_new2(void* size, int32_t format) {
    return QImage_new2((QSize*)size, format);
}

QImage* q_image_new3(int width, int height, int32_t format) {
    return QImage_new3(width, height, format);
}

QImage* q_image_new4(unsigned char* data, int width, int height, int32_t format) {
    return QImage_new4(data, width, height, format);
}

QImage* q_image_new5(unsigned char* data, int width, int height, int32_t format) {
    return QImage_new5(data, width, height, format);
}

QImage* q_image_new6(unsigned char* data, int width, int height, int64_t bytesPerLine, int32_t format) {
    return QImage_new6(data, width, height, bytesPerLine, format);
}

QImage* q_image_new7(unsigned char* data, int width, int height, int64_t bytesPerLine, int32_t format) {
    return QImage_new7(data, width, height, bytesPerLine, format);
}

QImage* q_image_new8(const char* fileName) {
    return QImage_new8(qstring(fileName));
}

QImage* q_image_new9(void* param1) {
    return QImage_new9((QImage*)param1);
}

QImage* q_image_new10(const char* fileName, const char* format) {
    return QImage_new10(qstring(fileName), format);
}

void q_image_operator_assign(void* self, void* param1) {
    QImage_OperatorAssign((QImage*)self, (QImage*)param1);
}

void q_image_swap(void* self, void* other) {
    QImage_Swap((QImage*)self, (QImage*)other);
}

bool q_image_is_null(void* self) {
    return QImage_IsNull((QImage*)self);
}

int32_t q_image_dev_type(void* self) {
    return QImage_DevType((QImage*)self);
}

void q_image_on_dev_type(void* self, int32_t (*callback)()) {
    QImage_OnDevType((QImage*)self, (intptr_t)callback);
}

int32_t q_image_qbase_dev_type(void* self) {
    return QImage_QBaseDevType((QImage*)self);
}

bool q_image_operator_equal(void* self, void* param1) {
    return QImage_OperatorEqual((QImage*)self, (QImage*)param1);
}

bool q_image_operator_not_equal(void* self, void* param1) {
    return QImage_OperatorNotEqual((QImage*)self, (QImage*)param1);
}

QVariant* q_image_to_q_variant(void* self) {
    return QImage_ToQVariant((QImage*)self);
}

void q_image_detach(void* self) {
    QImage_Detach((QImage*)self);
}

bool q_image_is_detached(void* self) {
    return QImage_IsDetached((QImage*)self);
}

QImage* q_image_copy(void* self) {
    return QImage_Copy((QImage*)self);
}

QImage* q_image_copy2(void* self, int x, int y, int w, int h) {
    return QImage_Copy2((QImage*)self, x, y, w, h);
}

int32_t q_image_format(void* self) {
    return QImage_Format((QImage*)self);
}

QImage* q_image_convert_to_format(void* self, int32_t f) {
    return QImage_ConvertToFormat((QImage*)self, f);
}

QImage* q_image_convert_to_format2(void* self, int32_t f, libqt_list colorTable) {
    return QImage_ConvertToFormat2((QImage*)self, f, colorTable);
}

bool q_image_reinterpret_as_format(void* self, int32_t f) {
    return QImage_ReinterpretAsFormat((QImage*)self, f);
}

QImage* q_image_converted_to(void* self, int32_t f) {
    return QImage_ConvertedTo((QImage*)self, f);
}

void q_image_convert_to(void* self, int32_t f) {
    QImage_ConvertTo((QImage*)self, f);
}

int32_t q_image_width(void* self) {
    return QImage_Width((QImage*)self);
}

int32_t q_image_height(void* self) {
    return QImage_Height((QImage*)self);
}

QSize* q_image_size(void* self) {
    return QImage_Size((QImage*)self);
}

QRect* q_image_rect(void* self) {
    return QImage_Rect((QImage*)self);
}

int32_t q_image_depth(void* self) {
    return QImage_Depth((QImage*)self);
}

int32_t q_image_color_count(void* self) {
    return QImage_ColorCount((QImage*)self);
}

int32_t q_image_bit_plane_count(void* self) {
    return QImage_BitPlaneCount((QImage*)self);
}

uint32_t q_image_color(void* self, int i) {
    return QImage_Color((QImage*)self, i);
}

void q_image_set_color(void* self, int i, uint32_t c) {
    QImage_SetColor((QImage*)self, i, c);
}

void q_image_set_color_count(void* self, int colorCount) {
    QImage_SetColorCount((QImage*)self, colorCount);
}

bool q_image_all_gray(void* self) {
    return QImage_AllGray((QImage*)self);
}

bool q_image_is_grayscale(void* self) {
    return QImage_IsGrayscale((QImage*)self);
}

unsigned char* q_image_bits(void* self) {
    return (unsigned char*)QImage_Bits((QImage*)self);
}

const unsigned char* q_image_bits2(void* self) {
    return (unsigned char*)QImage_Bits2((QImage*)self);
}

const unsigned char* q_image_const_bits(void* self) {
    return (unsigned char*)QImage_ConstBits((QImage*)self);
}

int64_t q_image_size_in_bytes(void* self) {
    return QImage_SizeInBytes((QImage*)self);
}

unsigned char* q_image_scan_line(void* self, int param1) {
    return (unsigned char*)QImage_ScanLine((QImage*)self, param1);
}

const unsigned char* q_image_scan_line2(void* self, int param1) {
    return (unsigned char*)QImage_ScanLine2((QImage*)self, param1);
}

const unsigned char* q_image_const_scan_line(void* self, int param1) {
    return (unsigned char*)QImage_ConstScanLine((QImage*)self, param1);
}

int64_t q_image_bytes_per_line(void* self) {
    return QImage_BytesPerLine((QImage*)self);
}

bool q_image_valid(void* self, int x, int y) {
    return QImage_Valid((QImage*)self, x, y);
}

bool q_image_valid2(void* self, void* pt) {
    return QImage_Valid2((QImage*)self, (QPoint*)pt);
}

int32_t q_image_pixel_index(void* self, int x, int y) {
    return QImage_PixelIndex((QImage*)self, x, y);
}

int32_t q_image_pixel_index2(void* self, void* pt) {
    return QImage_PixelIndex2((QImage*)self, (QPoint*)pt);
}

uint32_t q_image_pixel(void* self, int x, int y) {
    return QImage_Pixel((QImage*)self, x, y);
}

uint32_t q_image_pixel2(void* self, void* pt) {
    return QImage_Pixel2((QImage*)self, (QPoint*)pt);
}

void q_image_set_pixel(void* self, int x, int y, uint32_t index_or_rgb) {
    QImage_SetPixel((QImage*)self, x, y, index_or_rgb);
}

void q_image_set_pixel2(void* self, void* pt, uint32_t index_or_rgb) {
    QImage_SetPixel2((QImage*)self, (QPoint*)pt, index_or_rgb);
}

QColor* q_image_pixel_color(void* self, int x, int y) {
    return QImage_PixelColor((QImage*)self, x, y);
}

QColor* q_image_pixel_color2(void* self, void* pt) {
    return QImage_PixelColor2((QImage*)self, (QPoint*)pt);
}

void q_image_set_pixel_color(void* self, int x, int y, void* c) {
    QImage_SetPixelColor((QImage*)self, x, y, (QColor*)c);
}

void q_image_set_pixel_color2(void* self, void* pt, void* c) {
    QImage_SetPixelColor2((QImage*)self, (QPoint*)pt, (QColor*)c);
}

libqt_list /* of uint32_t */ q_image_color_table(void* self) {
    libqt_list _arr = QImage_ColorTable((QImage*)self);
    return _arr;
}

void q_image_set_color_table(void* self, libqt_list colors) {
    QImage_SetColorTable((QImage*)self, colors);
}

double q_image_device_pixel_ratio(void* self) {
    return QImage_DevicePixelRatio((QImage*)self);
}

void q_image_set_device_pixel_ratio(void* self, double scaleFactor) {
    QImage_SetDevicePixelRatio((QImage*)self, scaleFactor);
}

QSizeF* q_image_device_independent_size(void* self) {
    return QImage_DeviceIndependentSize((QImage*)self);
}

void q_image_fill(void* self, uint32_t pixel) {
    QImage_Fill((QImage*)self, pixel);
}

void q_image_fill2(void* self, void* color) {
    QImage_Fill2((QImage*)self, (QColor*)color);
}

void q_image_fill3(void* self, int32_t color) {
    QImage_Fill3((QImage*)self, color);
}

bool q_image_has_alpha_channel(void* self) {
    return QImage_HasAlphaChannel((QImage*)self);
}

void q_image_set_alpha_channel(void* self, void* alphaChannel) {
    QImage_SetAlphaChannel((QImage*)self, (QImage*)alphaChannel);
}

QImage* q_image_create_alpha_mask(void* self) {
    return QImage_CreateAlphaMask((QImage*)self);
}

QImage* q_image_create_heuristic_mask(void* self) {
    return QImage_CreateHeuristicMask((QImage*)self);
}

QImage* q_image_create_mask_from_color(void* self, uint32_t color) {
    return QImage_CreateMaskFromColor((QImage*)self, color);
}

QImage* q_image_scaled(void* self, int w, int h) {
    return QImage_Scaled((QImage*)self, w, h);
}

QImage* q_image_scaled2(void* self, void* s) {
    return QImage_Scaled2((QImage*)self, (QSize*)s);
}

QImage* q_image_scaled_to_width(void* self, int w) {
    return QImage_ScaledToWidth((QImage*)self, w);
}

QImage* q_image_scaled_to_height(void* self, int h) {
    return QImage_ScaledToHeight((QImage*)self, h);
}

QImage* q_image_transformed(void* self, void* matrix) {
    return QImage_Transformed((QImage*)self, (QTransform*)matrix);
}

QTransform* q_image_true_matrix(void* param1, int w, int h) {
    return QImage_TrueMatrix((QTransform*)param1, w, h);
}

QImage* q_image_mirrored(void* self) {
    return QImage_Mirrored((QImage*)self);
}

QImage* q_image_rgb_swapped(void* self) {
    return QImage_RgbSwapped((QImage*)self);
}

void q_image_mirror(void* self) {
    QImage_Mirror((QImage*)self);
}

void q_image_rgb_swap(void* self) {
    QImage_RgbSwap((QImage*)self);
}

void q_image_invert_pixels(void* self) {
    QImage_InvertPixels((QImage*)self);
}

QColorSpace* q_image_color_space(void* self) {
    return QImage_ColorSpace((QImage*)self);
}

QImage* q_image_converted_to_color_space(void* self, void* colorSpace) {
    return QImage_ConvertedToColorSpace((QImage*)self, (QColorSpace*)colorSpace);
}

QImage* q_image_converted_to_color_space2(void* self, void* colorSpace, int32_t format) {
    return QImage_ConvertedToColorSpace2((QImage*)self, (QColorSpace*)colorSpace, format);
}

void q_image_convert_to_color_space(void* self, void* colorSpace) {
    QImage_ConvertToColorSpace((QImage*)self, (QColorSpace*)colorSpace);
}

void q_image_convert_to_color_space2(void* self, void* colorSpace, int32_t format) {
    QImage_ConvertToColorSpace2((QImage*)self, (QColorSpace*)colorSpace, format);
}

void q_image_set_color_space(void* self, void* colorSpace) {
    QImage_SetColorSpace((QImage*)self, (QColorSpace*)colorSpace);
}

QImage* q_image_color_transformed(void* self, void* transform) {
    return QImage_ColorTransformed((QImage*)self, (QColorTransform*)transform);
}

QImage* q_image_color_transformed2(void* self, void* transform, int32_t format) {
    return QImage_ColorTransformed2((QImage*)self, (QColorTransform*)transform, format);
}

void q_image_apply_color_transform(void* self, void* transform) {
    QImage_ApplyColorTransform((QImage*)self, (QColorTransform*)transform);
}

void q_image_apply_color_transform2(void* self, void* transform, int32_t format) {
    QImage_ApplyColorTransform2((QImage*)self, (QColorTransform*)transform, format);
}

bool q_image_load(void* self, void* device, const char* format) {
    return QImage_Load((QImage*)self, (QIODevice*)device, format);
}

bool q_image_load2(void* self, const char* fileName) {
    return QImage_Load2((QImage*)self, qstring(fileName));
}

bool q_image_load_from_data(void* self, const char* data) {
    libqt_string data_string = qstring(data);
    return QImage_LoadFromData((QImage*)self, (QByteArrayView*)&data_string);
}

bool q_image_load_from_data2(void* self, unsigned char* buf, int lenVal) {
    return QImage_LoadFromData2((QImage*)self, buf, lenVal);
}

bool q_image_load_from_data3(void* self, const char* data) {
    return QImage_LoadFromData3((QImage*)self, qstring(data));
}

bool q_image_save(void* self, const char* fileName) {
    return QImage_Save((QImage*)self, qstring(fileName));
}

bool q_image_save2(void* self, void* device) {
    return QImage_Save2((QImage*)self, (QIODevice*)device);
}

QImage* q_image_from_data(const char* data) {
    libqt_string data_string = qstring(data);
    return QImage_FromData((QByteArrayView*)&data_string);
}

QImage* q_image_from_data2(unsigned char* data, int size) {
    return QImage_FromData2(data, size);
}

QImage* q_image_from_data3(const char* data) {
    return QImage_FromData3(qstring(data));
}

long long q_image_cache_key(void* self) {
    return QImage_CacheKey((QImage*)self);
}

QPaintEngine* q_image_paint_engine(void* self) {
    return QImage_PaintEngine((QImage*)self);
}

void q_image_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QImage_OnPaintEngine((QImage*)self, (intptr_t)callback);
}

QPaintEngine* q_image_qbase_paint_engine(void* self) {
    return QImage_QBasePaintEngine((QImage*)self);
}

int32_t q_image_dots_per_meter_x(void* self) {
    return QImage_DotsPerMeterX((QImage*)self);
}

int32_t q_image_dots_per_meter_y(void* self) {
    return QImage_DotsPerMeterY((QImage*)self);
}

void q_image_set_dots_per_meter_x(void* self, int dotsPerMeterX) {
    QImage_SetDotsPerMeterX((QImage*)self, dotsPerMeterX);
}

void q_image_set_dots_per_meter_y(void* self, int dotsPerMeterY) {
    QImage_SetDotsPerMeterY((QImage*)self, dotsPerMeterY);
}

QPoint* q_image_offset(void* self) {
    return QImage_Offset((QImage*)self);
}

void q_image_set_offset(void* self, void* offset) {
    QImage_SetOffset((QImage*)self, (QPoint*)offset);
}

const char** q_image_text_keys(void* self) {
    libqt_list _arr = QImage_TextKeys((QImage*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_image_text_keys");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char* q_image_text(void* self) {
    libqt_string _str = QImage_Text((QImage*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_image_set_text(void* self, const char* key, const char* value) {
    QImage_SetText((QImage*)self, qstring(key), qstring(value));
}

QPixelFormat* q_image_pixel_format(void* self) {
    return QImage_PixelFormat((QImage*)self);
}

QPixelFormat* q_image_to_pixel_format(int32_t format) {
    return QImage_ToPixelFormat(format);
}

int32_t q_image_to_image_format(void* format) {
    return QImage_ToImageFormat((QPixelFormat*)format);
}

int32_t q_image_metric(void* self, int32_t metric) {
    return QImage_Metric((QImage*)self, metric);
}

void q_image_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QImage_OnMetric((QImage*)self, (intptr_t)callback);
}

int32_t q_image_qbase_metric(void* self, int32_t metric) {
    return QImage_QBaseMetric((QImage*)self, metric);
}

QImage* q_image_mirrored_helper(void* self, bool horizontal, bool vertical) {
    return QImage_MirroredHelper((QImage*)self, horizontal, vertical);
}

void q_image_on_mirrored_helper(void* self, QImage* (*callback)(void*, bool, bool)) {
    QImage_OnMirroredHelper((QImage*)self, (intptr_t)callback);
}

QImage* q_image_qbase_mirrored_helper(void* self, bool horizontal, bool vertical) {
    return QImage_QBaseMirroredHelper((QImage*)self, horizontal, vertical);
}

QImage* q_image_rgb_swapped_helper(void* self) {
    return QImage_RgbSwappedHelper((QImage*)self);
}

void q_image_on_rgb_swapped_helper(void* self, QImage* (*callback)()) {
    QImage_OnRgbSwappedHelper((QImage*)self, (intptr_t)callback);
}

QImage* q_image_qbase_rgb_swapped_helper(void* self) {
    return QImage_QBaseRgbSwappedHelper((QImage*)self);
}

void q_image_mirrored_inplace(void* self, bool horizontal, bool vertical) {
    QImage_MirroredInplace((QImage*)self, horizontal, vertical);
}

void q_image_on_mirrored_inplace(void* self, void (*callback)(void*, bool, bool)) {
    QImage_OnMirroredInplace((QImage*)self, (intptr_t)callback);
}

void q_image_qbase_mirrored_inplace(void* self, bool horizontal, bool vertical) {
    QImage_QBaseMirroredInplace((QImage*)self, horizontal, vertical);
}

void q_image_rgb_swapped_inplace(void* self) {
    QImage_RgbSwappedInplace((QImage*)self);
}

void q_image_on_rgb_swapped_inplace(void* self, void (*callback)()) {
    QImage_OnRgbSwappedInplace((QImage*)self, (intptr_t)callback);
}

void q_image_qbase_rgb_swapped_inplace(void* self) {
    QImage_QBaseRgbSwappedInplace((QImage*)self);
}

QImage* q_image_convert_to_format_helper(void* self, int32_t format, int64_t flags) {
    return QImage_ConvertToFormatHelper((QImage*)self, format, flags);
}

void q_image_on_convert_to_format_helper(void* self, QImage* (*callback)(void*, int32_t, int64_t)) {
    QImage_OnConvertToFormatHelper((QImage*)self, (intptr_t)callback);
}

QImage* q_image_qbase_convert_to_format_helper(void* self, int32_t format, int64_t flags) {
    return QImage_QBaseConvertToFormatHelper((QImage*)self, format, flags);
}

bool q_image_convert_to_format_inplace(void* self, int32_t format, int64_t flags) {
    return QImage_ConvertToFormatInplace((QImage*)self, format, flags);
}

void q_image_on_convert_to_format_inplace(void* self, bool (*callback)(void*, int32_t, int64_t)) {
    QImage_OnConvertToFormatInplace((QImage*)self, (intptr_t)callback);
}

bool q_image_qbase_convert_to_format_inplace(void* self, int32_t format, int64_t flags) {
    return QImage_QBaseConvertToFormatInplace((QImage*)self, format, flags);
}

QImage* q_image_smooth_scaled(void* self, int w, int h) {
    return QImage_SmoothScaled((QImage*)self, w, h);
}

void q_image_on_smooth_scaled(void* self, QImage* (*callback)(void*, int, int)) {
    QImage_OnSmoothScaled((QImage*)self, (intptr_t)callback);
}

QImage* q_image_qbase_smooth_scaled(void* self, int w, int h) {
    return QImage_QBaseSmoothScaled((QImage*)self, w, h);
}

void q_image_detach_metadata(void* self) {
    QImage_DetachMetadata((QImage*)self);
}

void q_image_on_detach_metadata(void* self, void (*callback)()) {
    QImage_OnDetachMetadata((QImage*)self, (intptr_t)callback);
}

void q_image_qbase_detach_metadata(void* self) {
    QImage_QBaseDetachMetadata((QImage*)self);
}

QImage* q_image_copy1(void* self, void* rect) {
    return QImage_Copy1((QImage*)self, (QRect*)rect);
}

QImage* q_image_convert_to_format22(void* self, int32_t f, int64_t flags) {
    return QImage_ConvertToFormat22((QImage*)self, f, flags);
}

QImage* q_image_convert_to_format3(void* self, int32_t f, libqt_list colorTable, int64_t flags) {
    return QImage_ConvertToFormat3((QImage*)self, f, colorTable, flags);
}

QImage* q_image_converted_to2(void* self, int32_t f, int64_t flags) {
    return QImage_ConvertedTo2((QImage*)self, f, flags);
}

void q_image_convert_to2(void* self, int32_t f, int64_t flags) {
    QImage_ConvertTo2((QImage*)self, f, flags);
}

QImage* q_image_create_alpha_mask1(void* self, int64_t flags) {
    return QImage_CreateAlphaMask1((QImage*)self, flags);
}

QImage* q_image_create_heuristic_mask1(void* self, bool clipTight) {
    return QImage_CreateHeuristicMask1((QImage*)self, clipTight);
}

QImage* q_image_create_mask_from_color2(void* self, uint32_t color, int32_t mode) {
    return QImage_CreateMaskFromColor2((QImage*)self, color, mode);
}

QImage* q_image_scaled3(void* self, int w, int h, int32_t aspectMode) {
    return QImage_Scaled3((QImage*)self, w, h, aspectMode);
}

QImage* q_image_scaled4(void* self, int w, int h, int32_t aspectMode, int32_t mode) {
    return QImage_Scaled4((QImage*)self, w, h, aspectMode, mode);
}

QImage* q_image_scaled22(void* self, void* s, int32_t aspectMode) {
    return QImage_Scaled22((QImage*)self, (QSize*)s, aspectMode);
}

QImage* q_image_scaled32(void* self, void* s, int32_t aspectMode, int32_t mode) {
    return QImage_Scaled32((QImage*)self, (QSize*)s, aspectMode, mode);
}

QImage* q_image_scaled_to_width2(void* self, int w, int32_t mode) {
    return QImage_ScaledToWidth2((QImage*)self, w, mode);
}

QImage* q_image_scaled_to_height2(void* self, int h, int32_t mode) {
    return QImage_ScaledToHeight2((QImage*)self, h, mode);
}

QImage* q_image_transformed2(void* self, void* matrix, int32_t mode) {
    return QImage_Transformed2((QImage*)self, (QTransform*)matrix, mode);
}

QImage* q_image_mirrored1(void* self, bool horizontally) {
    return QImage_Mirrored1((QImage*)self, horizontally);
}

QImage* q_image_mirrored2(void* self, bool horizontally, bool vertically) {
    return QImage_Mirrored2((QImage*)self, horizontally, vertically);
}

void q_image_mirror1(void* self, bool horizontally) {
    QImage_Mirror1((QImage*)self, horizontally);
}

void q_image_mirror2(void* self, bool horizontally, bool vertically) {
    QImage_Mirror2((QImage*)self, horizontally, vertically);
}

void q_image_invert_pixels1(void* self, int32_t param1) {
    QImage_InvertPixels1((QImage*)self, param1);
}

QImage* q_image_converted_to_color_space3(void* self, void* colorSpace, int32_t format, int64_t flags) {
    return QImage_ConvertedToColorSpace3((QImage*)self, (QColorSpace*)colorSpace, format, flags);
}

void q_image_convert_to_color_space3(void* self, void* colorSpace, int32_t format, int64_t flags) {
    QImage_ConvertToColorSpace3((QImage*)self, (QColorSpace*)colorSpace, format, flags);
}

QImage* q_image_color_transformed3(void* self, void* transform, int32_t format, int64_t flags) {
    return QImage_ColorTransformed3((QImage*)self, (QColorTransform*)transform, format, flags);
}

void q_image_apply_color_transform3(void* self, void* transform, int32_t format, int64_t flags) {
    QImage_ApplyColorTransform3((QImage*)self, (QColorTransform*)transform, format, flags);
}

bool q_image_load22(void* self, const char* fileName, const char* format) {
    return QImage_Load22((QImage*)self, qstring(fileName), format);
}

bool q_image_load_from_data22(void* self, const char* data, const char* format) {
    libqt_string data_string = qstring(data);
    return QImage_LoadFromData22((QImage*)self, (QByteArrayView*)&data_string, format);
}

bool q_image_load_from_data32(void* self, unsigned char* buf, int lenVal, const char* format) {
    return QImage_LoadFromData32((QImage*)self, buf, lenVal, format);
}

bool q_image_load_from_data23(void* self, const char* data, const char* format) {
    return QImage_LoadFromData23((QImage*)self, qstring(data), format);
}

bool q_image_save22(void* self, const char* fileName, const char* format) {
    return QImage_Save22((QImage*)self, qstring(fileName), format);
}

bool q_image_save3(void* self, const char* fileName, const char* format, int quality) {
    return QImage_Save3((QImage*)self, qstring(fileName), format, quality);
}

bool q_image_save23(void* self, void* device, const char* format) {
    return QImage_Save23((QImage*)self, (QIODevice*)device, format);
}

bool q_image_save32(void* self, void* device, const char* format, int quality) {
    return QImage_Save32((QImage*)self, (QIODevice*)device, format, quality);
}

QImage* q_image_from_data22(const char* data, const char* format) {
    libqt_string data_string = qstring(data);
    return QImage_FromData22((QByteArrayView*)&data_string, format);
}

QImage* q_image_from_data32(unsigned char* data, int size, const char* format) {
    return QImage_FromData32(data, size, format);
}

QImage* q_image_from_data23(const char* data, const char* format) {
    return QImage_FromData23(qstring(data), format);
}

const char* q_image_text1(void* self, const char* key) {
    libqt_string _str = QImage_Text1((QImage*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_image_detach_metadata1(void* self, bool invalidateCache) {
    QImage_DetachMetadata1((QImage*)self, invalidateCache);
}

void q_image_on_detach_metadata1(void* self, void (*callback)(void*, bool)) {
    QImage_OnDetachMetadata1((QImage*)self, (intptr_t)callback);
}

void q_image_qbase_detach_metadata1(void* self, bool invalidateCache) {
    QImage_QBaseDetachMetadata1((QImage*)self, invalidateCache);
}

bool q_image_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_image_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_image_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_image_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_image_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_image_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_image_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_image_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

double q_image_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_image_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_image_init_painter(void* self, void* painter) {
    QImage_InitPainter((QImage*)self, (QPainter*)painter);
}

void q_image_qbase_init_painter(void* self, void* painter) {
    QImage_QBaseInitPainter((QImage*)self, (QPainter*)painter);
}

void q_image_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QImage_OnInitPainter((QImage*)self, (intptr_t)callback);
}

QPaintDevice* q_image_redirected(void* self, void* offset) {
    return QImage_Redirected((QImage*)self, (QPoint*)offset);
}

QPaintDevice* q_image_qbase_redirected(void* self, void* offset) {
    return QImage_QBaseRedirected((QImage*)self, (QPoint*)offset);
}

void q_image_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QImage_OnRedirected((QImage*)self, (intptr_t)callback);
}

QPainter* q_image_shared_painter(void* self) {
    return QImage_SharedPainter((QImage*)self);
}

QPainter* q_image_qbase_shared_painter(void* self) {
    return QImage_QBaseSharedPainter((QImage*)self);
}

void q_image_on_shared_painter(void* self, QPainter* (*callback)()) {
    QImage_OnSharedPainter((QImage*)self, (intptr_t)callback);
}

double q_image_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QImage_GetDecodedMetricF((QImage*)self, metricA, metricB);
}

double q_image_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QImage_QBaseGetDecodedMetricF((QImage*)self, metricA, metricB);
}

void q_image_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QImage_OnGetDecodedMetricF((QImage*)self, (intptr_t)callback);
}

void q_image_delete(void* self) {
    QImage_Delete((QImage*)(self));
}
