#include "libqanystringview.hpp"
#include "libqrgba64.hpp"
#include <string.h>
#include "libqvariant.hpp"
#include "libqcolor.hpp"
#include "libqcolor.h"

QColor* q_color_new(void* other) {
    return QColor_new((QColor*)other);
}

QColor* q_color_new2(void* other) {
    return QColor_new2((QColor*)other);
}

QColor* q_color_new3() {
    return QColor_new3();
}

QColor* q_color_new4(int64_t color) {
    return QColor_new4(color);
}

QColor* q_color_new5(int r, int g, int b) {
    return QColor_new5(r, g, b);
}

QColor* q_color_new6(uint32_t rgb) {
    return QColor_new6(rgb);
}

QColor* q_color_new7(void* rgba64) {
    return QColor_new7((QRgba64*)rgba64);
}

QColor* q_color_new8(const char* name) {
    return QColor_new8(qstring(name));
}

QColor* q_color_new9(const char* aname) {
    return QColor_new9(aname);
}

QColor* q_color_new10(int64_t spec) {
    return QColor_new10(spec);
}

QColor* q_color_new11(int64_t spec, unsigned short a1, unsigned short a2, unsigned short a3, unsigned short a4) {
    return QColor_new11(spec, a1, a2, a3, a4);
}

QColor* q_color_new12(void* param1) {
    return QColor_new12((QColor*)param1);
}

QColor* q_color_new13(int r, int g, int b, int a) {
    return QColor_new13(r, g, b, a);
}

QColor* q_color_new14(int64_t spec, unsigned short a1, unsigned short a2, unsigned short a3, unsigned short a4, unsigned short a5) {
    return QColor_new14(spec, a1, a2, a3, a4, a5);
}

void q_color_copy_assign(void* self, void* other) {
    QColor_CopyAssign((QColor*)self, (QColor*)other);
}

void q_color_move_assign(void* self, void* other) {
    QColor_MoveAssign((QColor*)self, (QColor*)other);
}

QColor* q_color_from_string(char* name) {
    return QColor_FromString(name);
}

void q_color_operator_assign(void* self, int64_t color) {
    QColor_OperatorAssign((QColor*)self, color);
}

bool q_color_is_valid(void* self) {
    return QColor_IsValid((QColor*)self);
}

const char* q_color_name(void* self) {
    libqt_string _str = QColor_Name((QColor*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_color_set_named_color(void* self, const char* name) {
    QColor_SetNamedColor((QColor*)self, qstring(name));
}

const char** q_color_color_names() {
    libqt_list _arr = QColor_ColorNames();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

int64_t q_color_spec(void* self) {
    return QColor_Spec((QColor*)self);
}

int32_t q_color_alpha(void* self) {
    return QColor_Alpha((QColor*)self);
}

void q_color_set_alpha(void* self, int alpha) {
    QColor_SetAlpha((QColor*)self, alpha);
}

float q_color_alpha_f(void* self) {
    return QColor_AlphaF((QColor*)self);
}

void q_color_set_alpha_f(void* self, float alpha) {
    QColor_SetAlphaF((QColor*)self, alpha);
}

int32_t q_color_red(void* self) {
    return QColor_Red((QColor*)self);
}

int32_t q_color_green(void* self) {
    return QColor_Green((QColor*)self);
}

int32_t q_color_blue(void* self) {
    return QColor_Blue((QColor*)self);
}

void q_color_set_red(void* self, int red) {
    QColor_SetRed((QColor*)self, red);
}

void q_color_set_green(void* self, int green) {
    QColor_SetGreen((QColor*)self, green);
}

void q_color_set_blue(void* self, int blue) {
    QColor_SetBlue((QColor*)self, blue);
}

float q_color_red_f(void* self) {
    return QColor_RedF((QColor*)self);
}

float q_color_green_f(void* self) {
    return QColor_GreenF((QColor*)self);
}

float q_color_blue_f(void* self) {
    return QColor_BlueF((QColor*)self);
}

void q_color_set_red_f(void* self, float red) {
    QColor_SetRedF((QColor*)self, red);
}

void q_color_set_green_f(void* self, float green) {
    QColor_SetGreenF((QColor*)self, green);
}

void q_color_set_blue_f(void* self, float blue) {
    QColor_SetBlueF((QColor*)self, blue);
}

void q_color_get_rgb(void* self, int* r, int* g, int* b) {
    QColor_GetRgb((QColor*)self, r, g, b);
}

void q_color_set_rgb(void* self, int r, int g, int b) {
    QColor_SetRgb((QColor*)self, r, g, b);
}

void q_color_get_rgb_f(void* self, float* r, float* g, float* b) {
    QColor_GetRgbF((QColor*)self, r, g, b);
}

void q_color_set_rgb_f(void* self, float r, float g, float b) {
    QColor_SetRgbF((QColor*)self, r, g, b);
}

QRgba64* q_color_rgba64(void* self) {
    return QColor_Rgba64((QColor*)self);
}

void q_color_set_rgba64(void* self, void* rgba) {
    QColor_SetRgba64((QColor*)self, (QRgba64*)rgba);
}

uint32_t q_color_rgba(void* self) {
    return QColor_Rgba((QColor*)self);
}

void q_color_set_rgba(void* self, uint32_t rgba) {
    QColor_SetRgba((QColor*)self, rgba);
}

uint32_t q_color_rgb(void* self) {
    return QColor_Rgb((QColor*)self);
}

void q_color_set_rgb2(void* self, uint32_t rgb) {
    QColor_SetRgb2((QColor*)self, rgb);
}

int32_t q_color_hue(void* self) {
    return QColor_Hue((QColor*)self);
}

int32_t q_color_saturation(void* self) {
    return QColor_Saturation((QColor*)self);
}

int32_t q_color_hsv_hue(void* self) {
    return QColor_HsvHue((QColor*)self);
}

int32_t q_color_hsv_saturation(void* self) {
    return QColor_HsvSaturation((QColor*)self);
}

int32_t q_color_value(void* self) {
    return QColor_Value((QColor*)self);
}

float q_color_hue_f(void* self) {
    return QColor_HueF((QColor*)self);
}

float q_color_saturation_f(void* self) {
    return QColor_SaturationF((QColor*)self);
}

float q_color_hsv_hue_f(void* self) {
    return QColor_HsvHueF((QColor*)self);
}

float q_color_hsv_saturation_f(void* self) {
    return QColor_HsvSaturationF((QColor*)self);
}

float q_color_value_f(void* self) {
    return QColor_ValueF((QColor*)self);
}

void q_color_get_hsv(void* self, int* h, int* s, int* v) {
    QColor_GetHsv((QColor*)self, h, s, v);
}

void q_color_set_hsv(void* self, int h, int s, int v) {
    QColor_SetHsv((QColor*)self, h, s, v);
}

void q_color_get_hsv_f(void* self, float* h, float* s, float* v) {
    QColor_GetHsvF((QColor*)self, h, s, v);
}

void q_color_set_hsv_f(void* self, float h, float s, float v) {
    QColor_SetHsvF((QColor*)self, h, s, v);
}

int32_t q_color_cyan(void* self) {
    return QColor_Cyan((QColor*)self);
}

int32_t q_color_magenta(void* self) {
    return QColor_Magenta((QColor*)self);
}

int32_t q_color_yellow(void* self) {
    return QColor_Yellow((QColor*)self);
}

int32_t q_color_black(void* self) {
    return QColor_Black((QColor*)self);
}

float q_color_cyan_f(void* self) {
    return QColor_CyanF((QColor*)self);
}

float q_color_magenta_f(void* self) {
    return QColor_MagentaF((QColor*)self);
}

float q_color_yellow_f(void* self) {
    return QColor_YellowF((QColor*)self);
}

float q_color_black_f(void* self) {
    return QColor_BlackF((QColor*)self);
}

void q_color_get_cmyk(void* self, int* c, int* m, int* y, int* k) {
    QColor_GetCmyk((QColor*)self, c, m, y, k);
}

void q_color_set_cmyk(void* self, int c, int m, int y, int k) {
    QColor_SetCmyk((QColor*)self, c, m, y, k);
}

void q_color_get_cmyk_f(void* self, float* c, float* m, float* y, float* k) {
    QColor_GetCmykF((QColor*)self, c, m, y, k);
}

void q_color_set_cmyk_f(void* self, float c, float m, float y, float k) {
    QColor_SetCmykF((QColor*)self, c, m, y, k);
}

int32_t q_color_hsl_hue(void* self) {
    return QColor_HslHue((QColor*)self);
}

int32_t q_color_hsl_saturation(void* self) {
    return QColor_HslSaturation((QColor*)self);
}

int32_t q_color_lightness(void* self) {
    return QColor_Lightness((QColor*)self);
}

float q_color_hsl_hue_f(void* self) {
    return QColor_HslHueF((QColor*)self);
}

float q_color_hsl_saturation_f(void* self) {
    return QColor_HslSaturationF((QColor*)self);
}

float q_color_lightness_f(void* self) {
    return QColor_LightnessF((QColor*)self);
}

void q_color_get_hsl(void* self, int* h, int* s, int* l) {
    QColor_GetHsl((QColor*)self, h, s, l);
}

void q_color_set_hsl(void* self, int h, int s, int l) {
    QColor_SetHsl((QColor*)self, h, s, l);
}

void q_color_get_hsl_f(void* self, float* h, float* s, float* l) {
    QColor_GetHslF((QColor*)self, h, s, l);
}

void q_color_set_hsl_f(void* self, float h, float s, float l) {
    QColor_SetHslF((QColor*)self, h, s, l);
}

QColor* q_color_to_rgb(void* self) {
    return QColor_ToRgb((QColor*)self);
}

QColor* q_color_to_hsv(void* self) {
    return QColor_ToHsv((QColor*)self);
}

QColor* q_color_to_cmyk(void* self) {
    return QColor_ToCmyk((QColor*)self);
}

QColor* q_color_to_hsl(void* self) {
    return QColor_ToHsl((QColor*)self);
}

QColor* q_color_to_extended_rgb(void* self) {
    return QColor_ToExtendedRgb((QColor*)self);
}

QColor* q_color_convert_to(void* self, int64_t colorSpec) {
    return QColor_ConvertTo((QColor*)self, colorSpec);
}

QColor* q_color_from_rgb(uint32_t rgb) {
    return QColor_FromRgb(rgb);
}

QColor* q_color_from_rgba(uint32_t rgba) {
    return QColor_FromRgba(rgba);
}

QColor* q_color_from_rgb2(int r, int g, int b) {
    return QColor_FromRgb2(r, g, b);
}

QColor* q_color_from_rgb_f(float r, float g, float b) {
    return QColor_FromRgbF(r, g, b);
}

QColor* q_color_from_rgba64(unsigned short r, unsigned short g, unsigned short b) {
    return QColor_FromRgba64(r, g, b);
}

QColor* q_color_from_rgba642(void* rgba) {
    return QColor_FromRgba642((QRgba64*)rgba);
}

QColor* q_color_from_hsv(int h, int s, int v) {
    return QColor_FromHsv(h, s, v);
}

QColor* q_color_from_hsv_f(float h, float s, float v) {
    return QColor_FromHsvF(h, s, v);
}

QColor* q_color_from_cmyk(int c, int m, int y, int k) {
    return QColor_FromCmyk(c, m, y, k);
}

QColor* q_color_from_cmyk_f(float c, float m, float y, float k) {
    return QColor_FromCmykF(c, m, y, k);
}

QColor* q_color_from_hsl(int h, int s, int l) {
    return QColor_FromHsl(h, s, l);
}

QColor* q_color_from_hsl_f(float h, float s, float l) {
    return QColor_FromHslF(h, s, l);
}

QColor* q_color_lighter(void* self) {
    return QColor_Lighter((QColor*)self);
}

QColor* q_color_darker(void* self) {
    return QColor_Darker((QColor*)self);
}

bool q_color_operator_equal(void* self, void* c) {
    return QColor_OperatorEqual((QColor*)self, (QColor*)c);
}

bool q_color_operator_not_equal(void* self, void* c) {
    return QColor_OperatorNotEqual((QColor*)self, (QColor*)c);
}

QVariant* q_color_to_q_variant(void* self) {
    return QColor_ToQVariant((QColor*)self);
}

bool q_color_is_valid_color(const char* name) {
    return QColor_IsValidColor(qstring(name));
}

bool q_color_is_valid_color_name(char* param1) {
    return QColor_IsValidColorName(param1);
}

const char* q_color_name1(void* self, int64_t format) {
    libqt_string _str = QColor_Name1((QColor*)self, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_color_get_rgb4(void* self, int* r, int* g, int* b, int* a) {
    QColor_GetRgb4((QColor*)self, r, g, b, a);
}

void q_color_set_rgb4(void* self, int r, int g, int b, int a) {
    QColor_SetRgb4((QColor*)self, r, g, b, a);
}

void q_color_get_rgb_f4(void* self, float* r, float* g, float* b, float* a) {
    QColor_GetRgbF4((QColor*)self, r, g, b, a);
}

void q_color_set_rgb_f4(void* self, float r, float g, float b, float a) {
    QColor_SetRgbF4((QColor*)self, r, g, b, a);
}

void q_color_get_hsv4(void* self, int* h, int* s, int* v, int* a) {
    QColor_GetHsv4((QColor*)self, h, s, v, a);
}

void q_color_set_hsv4(void* self, int h, int s, int v, int a) {
    QColor_SetHsv4((QColor*)self, h, s, v, a);
}

void q_color_get_hsv_f4(void* self, float* h, float* s, float* v, float* a) {
    QColor_GetHsvF4((QColor*)self, h, s, v, a);
}

void q_color_set_hsv_f4(void* self, float h, float s, float v, float a) {
    QColor_SetHsvF4((QColor*)self, h, s, v, a);
}

void q_color_get_cmyk5(void* self, int* c, int* m, int* y, int* k, int* a) {
    QColor_GetCmyk5((QColor*)self, c, m, y, k, a);
}

void q_color_set_cmyk5(void* self, int c, int m, int y, int k, int a) {
    QColor_SetCmyk5((QColor*)self, c, m, y, k, a);
}

void q_color_get_cmyk_f5(void* self, float* c, float* m, float* y, float* k, float* a) {
    QColor_GetCmykF5((QColor*)self, c, m, y, k, a);
}

void q_color_set_cmyk_f5(void* self, float c, float m, float y, float k, float a) {
    QColor_SetCmykF5((QColor*)self, c, m, y, k, a);
}

void q_color_get_hsl4(void* self, int* h, int* s, int* l, int* a) {
    QColor_GetHsl4((QColor*)self, h, s, l, a);
}

void q_color_set_hsl4(void* self, int h, int s, int l, int a) {
    QColor_SetHsl4((QColor*)self, h, s, l, a);
}

void q_color_get_hsl_f4(void* self, float* h, float* s, float* l, float* a) {
    QColor_GetHslF4((QColor*)self, h, s, l, a);
}

void q_color_set_hsl_f4(void* self, float h, float s, float l, float a) {
    QColor_SetHslF4((QColor*)self, h, s, l, a);
}

QColor* q_color_from_rgb4(int r, int g, int b, int a) {
    return QColor_FromRgb4(r, g, b, a);
}

QColor* q_color_from_rgb_f4(float r, float g, float b, float a) {
    return QColor_FromRgbF4(r, g, b, a);
}

QColor* q_color_from_rgba644(unsigned short r, unsigned short g, unsigned short b, unsigned short a) {
    return QColor_FromRgba644(r, g, b, a);
}

QColor* q_color_from_hsv4(int h, int s, int v, int a) {
    return QColor_FromHsv4(h, s, v, a);
}

QColor* q_color_from_hsv_f4(float h, float s, float v, float a) {
    return QColor_FromHsvF4(h, s, v, a);
}

QColor* q_color_from_cmyk5(int c, int m, int y, int k, int a) {
    return QColor_FromCmyk5(c, m, y, k, a);
}

QColor* q_color_from_cmyk_f5(float c, float m, float y, float k, float a) {
    return QColor_FromCmykF5(c, m, y, k, a);
}

QColor* q_color_from_hsl4(int h, int s, int l, int a) {
    return QColor_FromHsl4(h, s, l, a);
}

QColor* q_color_from_hsl_f4(float h, float s, float l, float a) {
    return QColor_FromHslF4(h, s, l, a);
}

QColor* q_color_lighter1(void* self, int f) {
    return QColor_Lighter1((QColor*)self, f);
}

QColor* q_color_darker1(void* self, int f) {
    return QColor_Darker1((QColor*)self, f);
}

void q_color_delete(void* self) {
    QColor_Delete((QColor*)(self));
}
