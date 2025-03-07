#include "libqanystringview.hpp"
#include "libqrgba64.hpp"
#include <string.h>
#include "libqvariant.hpp"
#include "libqcolor.hpp"
#include "libqcolor.h"

/// https://doc.qt.io/qt-6/qcolor.html

/// q_color_new constructs a new QColor object.
///
/// ``` QColor* other ```
QColor* q_color_new(void* other) {
    return QColor_new((QColor*)other);
}

/// q_color_new2 constructs a new QColor object and invalidates the source QColor object.
///
/// ``` QColor* other ```
QColor* q_color_new2(void* other) {
    return QColor_new2((QColor*)other);
}

/// q_color_new3 constructs a new QColor object.
///
///
QColor* q_color_new3() {
    return QColor_new3();
}

/// q_color_new4 constructs a new QColor object.
///
/// ``` enum Qt__GlobalColor color ```
QColor* q_color_new4(int64_t color) {
    return QColor_new4(color);
}

/// q_color_new5 constructs a new QColor object.
///
/// ``` int r, int g, int b ```
QColor* q_color_new5(int r, int g, int b) {
    return QColor_new5(r, g, b);
}

/// q_color_new6 constructs a new QColor object.
///
/// ``` uint32_t rgb ```
QColor* q_color_new6(uint32_t rgb) {
    return QColor_new6(rgb);
}

/// q_color_new7 constructs a new QColor object.
///
/// ``` QRgba64* rgba64 ```
QColor* q_color_new7(void* rgba64) {
    return QColor_new7((QRgba64*)rgba64);
}

/// q_color_new8 constructs a new QColor object.
///
/// ``` const char* name ```
QColor* q_color_new8(const char* name) {
    return QColor_new8(qstring(name));
}

/// q_color_new9 constructs a new QColor object.
///
/// ``` const char* aname ```
QColor* q_color_new9(const char* aname) {
    return QColor_new9(aname);
}

/// q_color_new10 constructs a new QColor object.
///
/// ``` enum QColor__Spec spec ```
QColor* q_color_new10(int64_t spec) {
    return QColor_new10(spec);
}

/// q_color_new11 constructs a new QColor object.
///
/// ``` enum QColor__Spec spec, unsigned short a1, unsigned short a2, unsigned short a3, unsigned short a4 ```
QColor* q_color_new11(int64_t spec, unsigned short a1, unsigned short a2, unsigned short a3, unsigned short a4) {
    return QColor_new11(spec, a1, a2, a3, a4);
}

/// q_color_new12 constructs a new QColor object.
///
/// ``` QColor* param1 ```
QColor* q_color_new12(void* param1) {
    return QColor_new12((QColor*)param1);
}

/// q_color_new13 constructs a new QColor object.
///
/// ``` int r, int g, int b, int a ```
QColor* q_color_new13(int r, int g, int b, int a) {
    return QColor_new13(r, g, b, a);
}

/// q_color_new14 constructs a new QColor object.
///
/// ``` enum QColor__Spec spec, unsigned short a1, unsigned short a2, unsigned short a3, unsigned short a4, unsigned short a5 ```
QColor* q_color_new14(int64_t spec, unsigned short a1, unsigned short a2, unsigned short a3, unsigned short a4, unsigned short a5) {
    return QColor_new14(spec, a1, a2, a3, a4, a5);
}

/// q_color_copy_assign shallow copies `other` into `self`.
///
/// ``` QColor* self, QColor* other ```
void q_color_copy_assign(void* self, void* other) {
    QColor_CopyAssign((QColor*)self, (QColor*)other);
}

/// q_color_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QColor* self, QColor* other ```
void q_color_move_assign(void* self, void* other) {
    QColor_MoveAssign((QColor*)self, (QColor*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromString)
///
/// ``` const char* name ```
QColor* q_color_from_string(const char* name) {
    libqt_strview name_strview = qstrview(name);
    return QColor_FromString((QAnyStringView*)&name_strview);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#operator=)
///
/// ``` QColor* self, enum Qt__GlobalColor color ```
void q_color_operator_assign(void* self, int64_t color) {
    QColor_OperatorAssign((QColor*)self, color);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#isValid)
///
/// ``` QColor* self ```
bool q_color_is_valid(void* self) {
    return QColor_IsValid((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#name)
///
/// ``` QColor* self ```
const char* q_color_name(void* self) {
    libqt_string _str = QColor_Name((QColor*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setNamedColor)
///
/// ``` QColor* self, const char* name ```
void q_color_set_named_color(void* self, const char* name) {
    QColor_SetNamedColor((QColor*)self, qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#colorNames)
///
///
const char** q_color_color_names() {
    libqt_list _arr = QColor_ColorNames();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#spec)
///
/// ``` QColor* self ```
int64_t q_color_spec(void* self) {
    return QColor_Spec((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#alpha)
///
/// ``` QColor* self ```
int32_t q_color_alpha(void* self) {
    return QColor_Alpha((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setAlpha)
///
/// ``` QColor* self, int alpha ```
void q_color_set_alpha(void* self, int alpha) {
    QColor_SetAlpha((QColor*)self, alpha);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#alphaF)
///
/// ``` QColor* self ```
float q_color_alpha_f(void* self) {
    return QColor_AlphaF((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setAlphaF)
///
/// ``` QColor* self, float alpha ```
void q_color_set_alpha_f(void* self, float alpha) {
    QColor_SetAlphaF((QColor*)self, alpha);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#red)
///
/// ``` QColor* self ```
int32_t q_color_red(void* self) {
    return QColor_Red((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#green)
///
/// ``` QColor* self ```
int32_t q_color_green(void* self) {
    return QColor_Green((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#blue)
///
/// ``` QColor* self ```
int32_t q_color_blue(void* self) {
    return QColor_Blue((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRed)
///
/// ``` QColor* self, int red ```
void q_color_set_red(void* self, int red) {
    QColor_SetRed((QColor*)self, red);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setGreen)
///
/// ``` QColor* self, int green ```
void q_color_set_green(void* self, int green) {
    QColor_SetGreen((QColor*)self, green);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setBlue)
///
/// ``` QColor* self, int blue ```
void q_color_set_blue(void* self, int blue) {
    QColor_SetBlue((QColor*)self, blue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#redF)
///
/// ``` QColor* self ```
float q_color_red_f(void* self) {
    return QColor_RedF((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#greenF)
///
/// ``` QColor* self ```
float q_color_green_f(void* self) {
    return QColor_GreenF((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#blueF)
///
/// ``` QColor* self ```
float q_color_blue_f(void* self) {
    return QColor_BlueF((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRedF)
///
/// ``` QColor* self, float red ```
void q_color_set_red_f(void* self, float red) {
    QColor_SetRedF((QColor*)self, red);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setGreenF)
///
/// ``` QColor* self, float green ```
void q_color_set_green_f(void* self, float green) {
    QColor_SetGreenF((QColor*)self, green);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setBlueF)
///
/// ``` QColor* self, float blue ```
void q_color_set_blue_f(void* self, float blue) {
    QColor_SetBlueF((QColor*)self, blue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getRgb)
///
/// ``` QColor* self, int* r, int* g, int* b ```
void q_color_get_rgb(void* self, int* r, int* g, int* b) {
    QColor_GetRgb((QColor*)self, r, g, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRgb)
///
/// ``` QColor* self, int r, int g, int b ```
void q_color_set_rgb(void* self, int r, int g, int b) {
    QColor_SetRgb((QColor*)self, r, g, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getRgbF)
///
/// ``` QColor* self, float* r, float* g, float* b ```
void q_color_get_rgb_f(void* self, float* r, float* g, float* b) {
    QColor_GetRgbF((QColor*)self, r, g, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRgbF)
///
/// ``` QColor* self, float r, float g, float b ```
void q_color_set_rgb_f(void* self, float r, float g, float b) {
    QColor_SetRgbF((QColor*)self, r, g, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#rgba64)
///
/// ``` QColor* self ```
QRgba64* q_color_rgba64(void* self) {
    return QColor_Rgba64((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRgba64)
///
/// ``` QColor* self, QRgba64* rgba ```
void q_color_set_rgba64(void* self, void* rgba) {
    QColor_SetRgba64((QColor*)self, (QRgba64*)rgba);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#rgba)
///
/// ``` QColor* self ```
uint32_t q_color_rgba(void* self) {
    return QColor_Rgba((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRgba)
///
/// ``` QColor* self, uint32_t rgba ```
void q_color_set_rgba(void* self, uint32_t rgba) {
    QColor_SetRgba((QColor*)self, rgba);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#rgb)
///
/// ``` QColor* self ```
uint32_t q_color_rgb(void* self) {
    return QColor_Rgb((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRgb)
///
/// ``` QColor* self, uint32_t rgb ```
void q_color_set_rgb_with_rgb(void* self, uint32_t rgb) {
    QColor_SetRgbWithRgb((QColor*)self, rgb);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hue)
///
/// ``` QColor* self ```
int32_t q_color_hue(void* self) {
    return QColor_Hue((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#saturation)
///
/// ``` QColor* self ```
int32_t q_color_saturation(void* self) {
    return QColor_Saturation((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hsvHue)
///
/// ``` QColor* self ```
int32_t q_color_hsv_hue(void* self) {
    return QColor_HsvHue((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hsvSaturation)
///
/// ``` QColor* self ```
int32_t q_color_hsv_saturation(void* self) {
    return QColor_HsvSaturation((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#value)
///
/// ``` QColor* self ```
int32_t q_color_value(void* self) {
    return QColor_Value((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hueF)
///
/// ``` QColor* self ```
float q_color_hue_f(void* self) {
    return QColor_HueF((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#saturationF)
///
/// ``` QColor* self ```
float q_color_saturation_f(void* self) {
    return QColor_SaturationF((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hsvHueF)
///
/// ``` QColor* self ```
float q_color_hsv_hue_f(void* self) {
    return QColor_HsvHueF((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hsvSaturationF)
///
/// ``` QColor* self ```
float q_color_hsv_saturation_f(void* self) {
    return QColor_HsvSaturationF((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#valueF)
///
/// ``` QColor* self ```
float q_color_value_f(void* self) {
    return QColor_ValueF((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getHsv)
///
/// ``` QColor* self, int* h, int* s, int* v ```
void q_color_get_hsv(void* self, int* h, int* s, int* v) {
    QColor_GetHsv((QColor*)self, h, s, v);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setHsv)
///
/// ``` QColor* self, int h, int s, int v ```
void q_color_set_hsv(void* self, int h, int s, int v) {
    QColor_SetHsv((QColor*)self, h, s, v);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getHsvF)
///
/// ``` QColor* self, float* h, float* s, float* v ```
void q_color_get_hsv_f(void* self, float* h, float* s, float* v) {
    QColor_GetHsvF((QColor*)self, h, s, v);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setHsvF)
///
/// ``` QColor* self, float h, float s, float v ```
void q_color_set_hsv_f(void* self, float h, float s, float v) {
    QColor_SetHsvF((QColor*)self, h, s, v);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#cyan)
///
/// ``` QColor* self ```
int32_t q_color_cyan(void* self) {
    return QColor_Cyan((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#magenta)
///
/// ``` QColor* self ```
int32_t q_color_magenta(void* self) {
    return QColor_Magenta((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#yellow)
///
/// ``` QColor* self ```
int32_t q_color_yellow(void* self) {
    return QColor_Yellow((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#black)
///
/// ``` QColor* self ```
int32_t q_color_black(void* self) {
    return QColor_Black((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#cyanF)
///
/// ``` QColor* self ```
float q_color_cyan_f(void* self) {
    return QColor_CyanF((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#magentaF)
///
/// ``` QColor* self ```
float q_color_magenta_f(void* self) {
    return QColor_MagentaF((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#yellowF)
///
/// ``` QColor* self ```
float q_color_yellow_f(void* self) {
    return QColor_YellowF((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#blackF)
///
/// ``` QColor* self ```
float q_color_black_f(void* self) {
    return QColor_BlackF((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getCmyk)
///
/// ``` QColor* self, int* c, int* m, int* y, int* k ```
void q_color_get_cmyk(void* self, int* c, int* m, int* y, int* k) {
    QColor_GetCmyk((QColor*)self, c, m, y, k);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setCmyk)
///
/// ``` QColor* self, int c, int m, int y, int k ```
void q_color_set_cmyk(void* self, int c, int m, int y, int k) {
    QColor_SetCmyk((QColor*)self, c, m, y, k);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getCmykF)
///
/// ``` QColor* self, float* c, float* m, float* y, float* k ```
void q_color_get_cmyk_f(void* self, float* c, float* m, float* y, float* k) {
    QColor_GetCmykF((QColor*)self, c, m, y, k);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setCmykF)
///
/// ``` QColor* self, float c, float m, float y, float k ```
void q_color_set_cmyk_f(void* self, float c, float m, float y, float k) {
    QColor_SetCmykF((QColor*)self, c, m, y, k);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hslHue)
///
/// ``` QColor* self ```
int32_t q_color_hsl_hue(void* self) {
    return QColor_HslHue((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hslSaturation)
///
/// ``` QColor* self ```
int32_t q_color_hsl_saturation(void* self) {
    return QColor_HslSaturation((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#lightness)
///
/// ``` QColor* self ```
int32_t q_color_lightness(void* self) {
    return QColor_Lightness((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hslHueF)
///
/// ``` QColor* self ```
float q_color_hsl_hue_f(void* self) {
    return QColor_HslHueF((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hslSaturationF)
///
/// ``` QColor* self ```
float q_color_hsl_saturation_f(void* self) {
    return QColor_HslSaturationF((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#lightnessF)
///
/// ``` QColor* self ```
float q_color_lightness_f(void* self) {
    return QColor_LightnessF((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getHsl)
///
/// ``` QColor* self, int* h, int* s, int* l ```
void q_color_get_hsl(void* self, int* h, int* s, int* l) {
    QColor_GetHsl((QColor*)self, h, s, l);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setHsl)
///
/// ``` QColor* self, int h, int s, int l ```
void q_color_set_hsl(void* self, int h, int s, int l) {
    QColor_SetHsl((QColor*)self, h, s, l);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getHslF)
///
/// ``` QColor* self, float* h, float* s, float* l ```
void q_color_get_hsl_f(void* self, float* h, float* s, float* l) {
    QColor_GetHslF((QColor*)self, h, s, l);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setHslF)
///
/// ``` QColor* self, float h, float s, float l ```
void q_color_set_hsl_f(void* self, float h, float s, float l) {
    QColor_SetHslF((QColor*)self, h, s, l);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#toRgb)
///
/// ``` QColor* self ```
QColor* q_color_to_rgb(void* self) {
    return QColor_ToRgb((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#toHsv)
///
/// ``` QColor* self ```
QColor* q_color_to_hsv(void* self) {
    return QColor_ToHsv((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#toCmyk)
///
/// ``` QColor* self ```
QColor* q_color_to_cmyk(void* self) {
    return QColor_ToCmyk((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#toHsl)
///
/// ``` QColor* self ```
QColor* q_color_to_hsl(void* self) {
    return QColor_ToHsl((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#toExtendedRgb)
///
/// ``` QColor* self ```
QColor* q_color_to_extended_rgb(void* self) {
    return QColor_ToExtendedRgb((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#convertTo)
///
/// ``` QColor* self, enum QColor__Spec colorSpec ```
QColor* q_color_convert_to(void* self, int64_t colorSpec) {
    return QColor_ConvertTo((QColor*)self, colorSpec);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgb)
///
/// ``` uint32_t rgb ```
QColor* q_color_from_rgb(uint32_t rgb) {
    return QColor_FromRgb(rgb);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgba)
///
/// ``` uint32_t rgba ```
QColor* q_color_from_rgba(uint32_t rgba) {
    return QColor_FromRgba(rgba);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgb)
///
/// ``` int r, int g, int b ```
QColor* q_color_from_rgb2(int r, int g, int b) {
    return QColor_FromRgb2(r, g, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgbF)
///
/// ``` float r, float g, float b ```
QColor* q_color_from_rgb_f(float r, float g, float b) {
    return QColor_FromRgbF(r, g, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgba64)
///
/// ``` unsigned short r, unsigned short g, unsigned short b ```
QColor* q_color_from_rgba64(unsigned short r, unsigned short g, unsigned short b) {
    return QColor_FromRgba64(r, g, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgba64)
///
/// ``` QRgba64* rgba ```
QColor* q_color_from_rgba64_with_rgba(void* rgba) {
    return QColor_FromRgba64WithRgba((QRgba64*)rgba);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromHsv)
///
/// ``` int h, int s, int v ```
QColor* q_color_from_hsv(int h, int s, int v) {
    return QColor_FromHsv(h, s, v);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromHsvF)
///
/// ``` float h, float s, float v ```
QColor* q_color_from_hsv_f(float h, float s, float v) {
    return QColor_FromHsvF(h, s, v);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromCmyk)
///
/// ``` int c, int m, int y, int k ```
QColor* q_color_from_cmyk(int c, int m, int y, int k) {
    return QColor_FromCmyk(c, m, y, k);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromCmykF)
///
/// ``` float c, float m, float y, float k ```
QColor* q_color_from_cmyk_f(float c, float m, float y, float k) {
    return QColor_FromCmykF(c, m, y, k);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromHsl)
///
/// ``` int h, int s, int l ```
QColor* q_color_from_hsl(int h, int s, int l) {
    return QColor_FromHsl(h, s, l);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromHslF)
///
/// ``` float h, float s, float l ```
QColor* q_color_from_hsl_f(float h, float s, float l) {
    return QColor_FromHslF(h, s, l);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#lighter)
///
/// ``` QColor* self ```
QColor* q_color_lighter(void* self) {
    return QColor_Lighter((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#darker)
///
/// ``` QColor* self ```
QColor* q_color_darker(void* self) {
    return QColor_Darker((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#operator==)
///
/// ``` QColor* self, QColor* c ```
bool q_color_operator_equal(void* self, void* c) {
    return QColor_OperatorEqual((QColor*)self, (QColor*)c);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#operator!=)
///
/// ``` QColor* self, QColor* c ```
bool q_color_operator_not_equal(void* self, void* c) {
    return QColor_OperatorNotEqual((QColor*)self, (QColor*)c);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#operator QVariant)
///
/// ``` QColor* self ```
QVariant* q_color_to_q_variant(void* self) {
    return QColor_ToQVariant((QColor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#isValidColor)
///
/// ``` const char* name ```
bool q_color_is_valid_color(const char* name) {
    return QColor_IsValidColor(qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#isValidColorName)
///
/// ``` const char* param1 ```
bool q_color_is_valid_color_name(const char* param1) {
    libqt_strview param1_strview = qstrview(param1);
    return QColor_IsValidColorName((QAnyStringView*)&param1_strview);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#name)
///
/// ``` QColor* self, enum QColor__NameFormat format ```
const char* q_color_name1(void* self, int64_t format) {
    libqt_string _str = QColor_Name1((QColor*)self, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getRgb)
///
/// ``` QColor* self, int* r, int* g, int* b, int* a ```
void q_color_get_rgb4(void* self, int* r, int* g, int* b, int* a) {
    QColor_GetRgb4((QColor*)self, r, g, b, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRgb)
///
/// ``` QColor* self, int r, int g, int b, int a ```
void q_color_set_rgb4(void* self, int r, int g, int b, int a) {
    QColor_SetRgb4((QColor*)self, r, g, b, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getRgbF)
///
/// ``` QColor* self, float* r, float* g, float* b, float* a ```
void q_color_get_rgb_f4(void* self, float* r, float* g, float* b, float* a) {
    QColor_GetRgbF4((QColor*)self, r, g, b, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRgbF)
///
/// ``` QColor* self, float r, float g, float b, float a ```
void q_color_set_rgb_f4(void* self, float r, float g, float b, float a) {
    QColor_SetRgbF4((QColor*)self, r, g, b, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getHsv)
///
/// ``` QColor* self, int* h, int* s, int* v, int* a ```
void q_color_get_hsv4(void* self, int* h, int* s, int* v, int* a) {
    QColor_GetHsv4((QColor*)self, h, s, v, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setHsv)
///
/// ``` QColor* self, int h, int s, int v, int a ```
void q_color_set_hsv4(void* self, int h, int s, int v, int a) {
    QColor_SetHsv4((QColor*)self, h, s, v, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getHsvF)
///
/// ``` QColor* self, float* h, float* s, float* v, float* a ```
void q_color_get_hsv_f4(void* self, float* h, float* s, float* v, float* a) {
    QColor_GetHsvF4((QColor*)self, h, s, v, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setHsvF)
///
/// ``` QColor* self, float h, float s, float v, float a ```
void q_color_set_hsv_f4(void* self, float h, float s, float v, float a) {
    QColor_SetHsvF4((QColor*)self, h, s, v, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getCmyk)
///
/// ``` QColor* self, int* c, int* m, int* y, int* k, int* a ```
void q_color_get_cmyk5(void* self, int* c, int* m, int* y, int* k, int* a) {
    QColor_GetCmyk5((QColor*)self, c, m, y, k, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setCmyk)
///
/// ``` QColor* self, int c, int m, int y, int k, int a ```
void q_color_set_cmyk5(void* self, int c, int m, int y, int k, int a) {
    QColor_SetCmyk5((QColor*)self, c, m, y, k, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getCmykF)
///
/// ``` QColor* self, float* c, float* m, float* y, float* k, float* a ```
void q_color_get_cmyk_f5(void* self, float* c, float* m, float* y, float* k, float* a) {
    QColor_GetCmykF5((QColor*)self, c, m, y, k, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setCmykF)
///
/// ``` QColor* self, float c, float m, float y, float k, float a ```
void q_color_set_cmyk_f5(void* self, float c, float m, float y, float k, float a) {
    QColor_SetCmykF5((QColor*)self, c, m, y, k, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getHsl)
///
/// ``` QColor* self, int* h, int* s, int* l, int* a ```
void q_color_get_hsl4(void* self, int* h, int* s, int* l, int* a) {
    QColor_GetHsl4((QColor*)self, h, s, l, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setHsl)
///
/// ``` QColor* self, int h, int s, int l, int a ```
void q_color_set_hsl4(void* self, int h, int s, int l, int a) {
    QColor_SetHsl4((QColor*)self, h, s, l, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getHslF)
///
/// ``` QColor* self, float* h, float* s, float* l, float* a ```
void q_color_get_hsl_f4(void* self, float* h, float* s, float* l, float* a) {
    QColor_GetHslF4((QColor*)self, h, s, l, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setHslF)
///
/// ``` QColor* self, float h, float s, float l, float a ```
void q_color_set_hsl_f4(void* self, float h, float s, float l, float a) {
    QColor_SetHslF4((QColor*)self, h, s, l, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgb)
///
/// ``` int r, int g, int b, int a ```
QColor* q_color_from_rgb4(int r, int g, int b, int a) {
    return QColor_FromRgb4(r, g, b, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgbF)
///
/// ``` float r, float g, float b, float a ```
QColor* q_color_from_rgb_f4(float r, float g, float b, float a) {
    return QColor_FromRgbF4(r, g, b, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgba64)
///
/// ``` unsigned short r, unsigned short g, unsigned short b, unsigned short a ```
QColor* q_color_from_rgba644(unsigned short r, unsigned short g, unsigned short b, unsigned short a) {
    return QColor_FromRgba644(r, g, b, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromHsv)
///
/// ``` int h, int s, int v, int a ```
QColor* q_color_from_hsv4(int h, int s, int v, int a) {
    return QColor_FromHsv4(h, s, v, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromHsvF)
///
/// ``` float h, float s, float v, float a ```
QColor* q_color_from_hsv_f4(float h, float s, float v, float a) {
    return QColor_FromHsvF4(h, s, v, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromCmyk)
///
/// ``` int c, int m, int y, int k, int a ```
QColor* q_color_from_cmyk5(int c, int m, int y, int k, int a) {
    return QColor_FromCmyk5(c, m, y, k, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromCmykF)
///
/// ``` float c, float m, float y, float k, float a ```
QColor* q_color_from_cmyk_f5(float c, float m, float y, float k, float a) {
    return QColor_FromCmykF5(c, m, y, k, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromHsl)
///
/// ``` int h, int s, int l, int a ```
QColor* q_color_from_hsl4(int h, int s, int l, int a) {
    return QColor_FromHsl4(h, s, l, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromHslF)
///
/// ``` float h, float s, float l, float a ```
QColor* q_color_from_hsl_f4(float h, float s, float l, float a) {
    return QColor_FromHslF4(h, s, l, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#lighter)
///
/// ``` QColor* self, int f ```
QColor* q_color_lighter1(void* self, int f) {
    return QColor_Lighter1((QColor*)self, f);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#darker)
///
/// ``` QColor* self, int f ```
QColor* q_color_darker1(void* self, int f) {
    return QColor_Darker1((QColor*)self, f);
}

/// Delete this object from C++ memory.
///
/// ``` QColor* self ```
void q_color_delete(void* self) {
    QColor_Delete((QColor*)(self));
}