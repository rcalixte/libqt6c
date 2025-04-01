#pragma once
#ifndef SRCQT6C_LIBQCOLOR_H
#define SRCQT6C_LIBQCOLOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqrgba64.h"
#include <string.h>
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qcolor.html

/// q_color_new constructs a new QColor object.
///
/// ``` QColor* other ```
QColor* q_color_new(void* other);

/// q_color_new2 constructs a new QColor object and invalidates the source QColor object.
///
/// ``` QColor* other ```
QColor* q_color_new2(void* other);

/// q_color_new3 constructs a new QColor object.
///
///
QColor* q_color_new3();

/// q_color_new4 constructs a new QColor object.
///
/// ``` enum Qt__GlobalColor color ```
QColor* q_color_new4(int64_t color);

/// q_color_new5 constructs a new QColor object.
///
/// ``` int r, int g, int b ```
QColor* q_color_new5(int r, int g, int b);

/// q_color_new6 constructs a new QColor object.
///
/// ``` uint32_t rgb ```
QColor* q_color_new6(uint32_t rgb);

/// q_color_new7 constructs a new QColor object.
///
/// ``` QRgba64* rgba64 ```
QColor* q_color_new7(void* rgba64);

/// q_color_new8 constructs a new QColor object.
///
/// ``` const char* name ```
QColor* q_color_new8(const char* name);

/// q_color_new9 constructs a new QColor object.
///
/// ``` const char* aname ```
QColor* q_color_new9(const char* aname);

/// q_color_new10 constructs a new QColor object.
///
/// ``` enum QColor__Spec spec ```
QColor* q_color_new10(int64_t spec);

/// q_color_new11 constructs a new QColor object.
///
/// ``` enum QColor__Spec spec, unsigned short a1, unsigned short a2, unsigned short a3, unsigned short a4 ```
QColor* q_color_new11(int64_t spec, unsigned short a1, unsigned short a2, unsigned short a3, unsigned short a4);

/// q_color_new12 constructs a new QColor object.
///
/// ``` QColor* param1 ```
QColor* q_color_new12(void* param1);

/// q_color_new13 constructs a new QColor object.
///
/// ``` int r, int g, int b, int a ```
QColor* q_color_new13(int r, int g, int b, int a);

/// q_color_new14 constructs a new QColor object.
///
/// ``` enum QColor__Spec spec, unsigned short a1, unsigned short a2, unsigned short a3, unsigned short a4, unsigned short a5 ```
QColor* q_color_new14(int64_t spec, unsigned short a1, unsigned short a2, unsigned short a3, unsigned short a4, unsigned short a5);

/// q_color_copy_assign shallow copies `other` into `self`.
///
/// ``` QColor* self, QColor* other ```
void q_color_copy_assign(void* self, void* other);

/// q_color_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QColor* self, QColor* other ```
void q_color_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromString)
///
/// ``` const char* name ```
QColor* q_color_from_string(const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#operator=)
///
/// ``` QColor* self, enum Qt__GlobalColor color ```
void q_color_operator_assign(void* self, int64_t color);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#isValid)
///
/// ``` QColor* self ```
bool q_color_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#name)
///
/// ``` QColor* self ```
const char* q_color_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setNamedColor)
///
/// ``` QColor* self, const char* name ```
void q_color_set_named_color(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#colorNames)
///
///
const char** q_color_color_names();

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#spec)
///
/// ``` QColor* self ```
int64_t q_color_spec(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#alpha)
///
/// ``` QColor* self ```
int32_t q_color_alpha(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setAlpha)
///
/// ``` QColor* self, int alpha ```
void q_color_set_alpha(void* self, int alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#alphaF)
///
/// ``` QColor* self ```
float q_color_alpha_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setAlphaF)
///
/// ``` QColor* self, float alpha ```
void q_color_set_alpha_f(void* self, float alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#red)
///
/// ``` QColor* self ```
int32_t q_color_red(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#green)
///
/// ``` QColor* self ```
int32_t q_color_green(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#blue)
///
/// ``` QColor* self ```
int32_t q_color_blue(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRed)
///
/// ``` QColor* self, int red ```
void q_color_set_red(void* self, int red);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setGreen)
///
/// ``` QColor* self, int green ```
void q_color_set_green(void* self, int green);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setBlue)
///
/// ``` QColor* self, int blue ```
void q_color_set_blue(void* self, int blue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#redF)
///
/// ``` QColor* self ```
float q_color_red_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#greenF)
///
/// ``` QColor* self ```
float q_color_green_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#blueF)
///
/// ``` QColor* self ```
float q_color_blue_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRedF)
///
/// ``` QColor* self, float red ```
void q_color_set_red_f(void* self, float red);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setGreenF)
///
/// ``` QColor* self, float green ```
void q_color_set_green_f(void* self, float green);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setBlueF)
///
/// ``` QColor* self, float blue ```
void q_color_set_blue_f(void* self, float blue);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getRgb)
///
/// ``` QColor* self, int* r, int* g, int* b ```
void q_color_get_rgb(void* self, int* r, int* g, int* b);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRgb)
///
/// ``` QColor* self, int r, int g, int b ```
void q_color_set_rgb(void* self, int r, int g, int b);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getRgbF)
///
/// ``` QColor* self, float* r, float* g, float* b ```
void q_color_get_rgb_f(void* self, float* r, float* g, float* b);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRgbF)
///
/// ``` QColor* self, float r, float g, float b ```
void q_color_set_rgb_f(void* self, float r, float g, float b);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#rgba64)
///
/// ``` QColor* self ```
QRgba64* q_color_rgba64(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRgba64)
///
/// ``` QColor* self, QRgba64* rgba ```
void q_color_set_rgba64(void* self, void* rgba);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#rgba)
///
/// ``` QColor* self ```
uint32_t q_color_rgba(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRgba)
///
/// ``` QColor* self, uint32_t rgba ```
void q_color_set_rgba(void* self, uint32_t rgba);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#rgb)
///
/// ``` QColor* self ```
uint32_t q_color_rgb(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRgb)
///
/// ``` QColor* self, uint32_t rgb ```
void q_color_set_rgb_with_rgb(void* self, uint32_t rgb);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hue)
///
/// ``` QColor* self ```
int32_t q_color_hue(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#saturation)
///
/// ``` QColor* self ```
int32_t q_color_saturation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hsvHue)
///
/// ``` QColor* self ```
int32_t q_color_hsv_hue(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hsvSaturation)
///
/// ``` QColor* self ```
int32_t q_color_hsv_saturation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#value)
///
/// ``` QColor* self ```
int32_t q_color_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hueF)
///
/// ``` QColor* self ```
float q_color_hue_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#saturationF)
///
/// ``` QColor* self ```
float q_color_saturation_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hsvHueF)
///
/// ``` QColor* self ```
float q_color_hsv_hue_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hsvSaturationF)
///
/// ``` QColor* self ```
float q_color_hsv_saturation_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#valueF)
///
/// ``` QColor* self ```
float q_color_value_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getHsv)
///
/// ``` QColor* self, int* h, int* s, int* v ```
void q_color_get_hsv(void* self, int* h, int* s, int* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setHsv)
///
/// ``` QColor* self, int h, int s, int v ```
void q_color_set_hsv(void* self, int h, int s, int v);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getHsvF)
///
/// ``` QColor* self, float* h, float* s, float* v ```
void q_color_get_hsv_f(void* self, float* h, float* s, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setHsvF)
///
/// ``` QColor* self, float h, float s, float v ```
void q_color_set_hsv_f(void* self, float h, float s, float v);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#cyan)
///
/// ``` QColor* self ```
int32_t q_color_cyan(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#magenta)
///
/// ``` QColor* self ```
int32_t q_color_magenta(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#yellow)
///
/// ``` QColor* self ```
int32_t q_color_yellow(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#black)
///
/// ``` QColor* self ```
int32_t q_color_black(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#cyanF)
///
/// ``` QColor* self ```
float q_color_cyan_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#magentaF)
///
/// ``` QColor* self ```
float q_color_magenta_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#yellowF)
///
/// ``` QColor* self ```
float q_color_yellow_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#blackF)
///
/// ``` QColor* self ```
float q_color_black_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getCmyk)
///
/// ``` QColor* self, int* c, int* m, int* y, int* k ```
void q_color_get_cmyk(void* self, int* c, int* m, int* y, int* k);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setCmyk)
///
/// ``` QColor* self, int c, int m, int y, int k ```
void q_color_set_cmyk(void* self, int c, int m, int y, int k);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getCmykF)
///
/// ``` QColor* self, float* c, float* m, float* y, float* k ```
void q_color_get_cmyk_f(void* self, float* c, float* m, float* y, float* k);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setCmykF)
///
/// ``` QColor* self, float c, float m, float y, float k ```
void q_color_set_cmyk_f(void* self, float c, float m, float y, float k);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hslHue)
///
/// ``` QColor* self ```
int32_t q_color_hsl_hue(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hslSaturation)
///
/// ``` QColor* self ```
int32_t q_color_hsl_saturation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#lightness)
///
/// ``` QColor* self ```
int32_t q_color_lightness(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hslHueF)
///
/// ``` QColor* self ```
float q_color_hsl_hue_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#hslSaturationF)
///
/// ``` QColor* self ```
float q_color_hsl_saturation_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#lightnessF)
///
/// ``` QColor* self ```
float q_color_lightness_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getHsl)
///
/// ``` QColor* self, int* h, int* s, int* l ```
void q_color_get_hsl(void* self, int* h, int* s, int* l);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setHsl)
///
/// ``` QColor* self, int h, int s, int l ```
void q_color_set_hsl(void* self, int h, int s, int l);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getHslF)
///
/// ``` QColor* self, float* h, float* s, float* l ```
void q_color_get_hsl_f(void* self, float* h, float* s, float* l);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setHslF)
///
/// ``` QColor* self, float h, float s, float l ```
void q_color_set_hsl_f(void* self, float h, float s, float l);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#toRgb)
///
/// ``` QColor* self ```
QColor* q_color_to_rgb(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#toHsv)
///
/// ``` QColor* self ```
QColor* q_color_to_hsv(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#toCmyk)
///
/// ``` QColor* self ```
QColor* q_color_to_cmyk(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#toHsl)
///
/// ``` QColor* self ```
QColor* q_color_to_hsl(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#toExtendedRgb)
///
/// ``` QColor* self ```
QColor* q_color_to_extended_rgb(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#convertTo)
///
/// ``` QColor* self, enum QColor__Spec colorSpec ```
QColor* q_color_convert_to(void* self, int64_t colorSpec);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgb)
///
/// ``` uint32_t rgb ```
QColor* q_color_from_rgb(uint32_t rgb);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgba)
///
/// ``` uint32_t rgba ```
QColor* q_color_from_rgba(uint32_t rgba);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgb)
///
/// ``` int r, int g, int b ```
QColor* q_color_from_rgb2(int r, int g, int b);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgbF)
///
/// ``` float r, float g, float b ```
QColor* q_color_from_rgb_f(float r, float g, float b);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgba64)
///
/// ``` unsigned short r, unsigned short g, unsigned short b ```
QColor* q_color_from_rgba64(unsigned short r, unsigned short g, unsigned short b);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgba64)
///
/// ``` QRgba64* rgba ```
QColor* q_color_from_rgba64_with_rgba(void* rgba);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromHsv)
///
/// ``` int h, int s, int v ```
QColor* q_color_from_hsv(int h, int s, int v);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromHsvF)
///
/// ``` float h, float s, float v ```
QColor* q_color_from_hsv_f(float h, float s, float v);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromCmyk)
///
/// ``` int c, int m, int y, int k ```
QColor* q_color_from_cmyk(int c, int m, int y, int k);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromCmykF)
///
/// ``` float c, float m, float y, float k ```
QColor* q_color_from_cmyk_f(float c, float m, float y, float k);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromHsl)
///
/// ``` int h, int s, int l ```
QColor* q_color_from_hsl(int h, int s, int l);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromHslF)
///
/// ``` float h, float s, float l ```
QColor* q_color_from_hsl_f(float h, float s, float l);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#lighter)
///
/// ``` QColor* self ```
QColor* q_color_lighter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#darker)
///
/// ``` QColor* self ```
QColor* q_color_darker(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#operator==)
///
/// ``` QColor* self, QColor* c ```
bool q_color_operator_equal(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#operator!=)
///
/// ``` QColor* self, QColor* c ```
bool q_color_operator_not_equal(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#operator QVariant)
///
/// ``` QColor* self ```
QVariant* q_color_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#isValidColor)
///
/// ``` const char* name ```
bool q_color_is_valid_color(const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#isValidColorName)
///
/// ``` const char* param1 ```
bool q_color_is_valid_color_name(const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#name)
///
/// ``` QColor* self, enum QColor__NameFormat format ```
const char* q_color_name1(void* self, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getRgb)
///
/// ``` QColor* self, int* r, int* g, int* b, int* a ```
void q_color_get_rgb4(void* self, int* r, int* g, int* b, int* a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRgb)
///
/// ``` QColor* self, int r, int g, int b, int a ```
void q_color_set_rgb4(void* self, int r, int g, int b, int a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getRgbF)
///
/// ``` QColor* self, float* r, float* g, float* b, float* a ```
void q_color_get_rgb_f4(void* self, float* r, float* g, float* b, float* a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setRgbF)
///
/// ``` QColor* self, float r, float g, float b, float a ```
void q_color_set_rgb_f4(void* self, float r, float g, float b, float a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getHsv)
///
/// ``` QColor* self, int* h, int* s, int* v, int* a ```
void q_color_get_hsv4(void* self, int* h, int* s, int* v, int* a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setHsv)
///
/// ``` QColor* self, int h, int s, int v, int a ```
void q_color_set_hsv4(void* self, int h, int s, int v, int a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getHsvF)
///
/// ``` QColor* self, float* h, float* s, float* v, float* a ```
void q_color_get_hsv_f4(void* self, float* h, float* s, float* v, float* a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setHsvF)
///
/// ``` QColor* self, float h, float s, float v, float a ```
void q_color_set_hsv_f4(void* self, float h, float s, float v, float a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getCmyk)
///
/// ``` QColor* self, int* c, int* m, int* y, int* k, int* a ```
void q_color_get_cmyk5(void* self, int* c, int* m, int* y, int* k, int* a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setCmyk)
///
/// ``` QColor* self, int c, int m, int y, int k, int a ```
void q_color_set_cmyk5(void* self, int c, int m, int y, int k, int a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getCmykF)
///
/// ``` QColor* self, float* c, float* m, float* y, float* k, float* a ```
void q_color_get_cmyk_f5(void* self, float* c, float* m, float* y, float* k, float* a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setCmykF)
///
/// ``` QColor* self, float c, float m, float y, float k, float a ```
void q_color_set_cmyk_f5(void* self, float c, float m, float y, float k, float a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getHsl)
///
/// ``` QColor* self, int* h, int* s, int* l, int* a ```
void q_color_get_hsl4(void* self, int* h, int* s, int* l, int* a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setHsl)
///
/// ``` QColor* self, int h, int s, int l, int a ```
void q_color_set_hsl4(void* self, int h, int s, int l, int a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#getHslF)
///
/// ``` QColor* self, float* h, float* s, float* l, float* a ```
void q_color_get_hsl_f4(void* self, float* h, float* s, float* l, float* a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#setHslF)
///
/// ``` QColor* self, float h, float s, float l, float a ```
void q_color_set_hsl_f4(void* self, float h, float s, float l, float a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgb)
///
/// ``` int r, int g, int b, int a ```
QColor* q_color_from_rgb4(int r, int g, int b, int a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgbF)
///
/// ``` float r, float g, float b, float a ```
QColor* q_color_from_rgb_f4(float r, float g, float b, float a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromRgba64)
///
/// ``` unsigned short r, unsigned short g, unsigned short b, unsigned short a ```
QColor* q_color_from_rgba644(unsigned short r, unsigned short g, unsigned short b, unsigned short a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromHsv)
///
/// ``` int h, int s, int v, int a ```
QColor* q_color_from_hsv4(int h, int s, int v, int a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromHsvF)
///
/// ``` float h, float s, float v, float a ```
QColor* q_color_from_hsv_f4(float h, float s, float v, float a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromCmyk)
///
/// ``` int c, int m, int y, int k, int a ```
QColor* q_color_from_cmyk5(int c, int m, int y, int k, int a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromCmykF)
///
/// ``` float c, float m, float y, float k, float a ```
QColor* q_color_from_cmyk_f5(float c, float m, float y, float k, float a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromHsl)
///
/// ``` int h, int s, int l, int a ```
QColor* q_color_from_hsl4(int h, int s, int l, int a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#fromHslF)
///
/// ``` float h, float s, float l, float a ```
QColor* q_color_from_hsl_f4(float h, float s, float l, float a);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#lighter)
///
/// ``` QColor* self, int f ```
QColor* q_color_lighter1(void* self, int f);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolor.html#darker)
///
/// ``` QColor* self, int f ```
QColor* q_color_darker1(void* self, int f);

/// Delete this object from C++ memory.
///
/// ``` QColor* self ```
void q_color_delete(void* self);

/// https://doc.qt.io/qt-6/qcolor.html#types

typedef enum {
    QCOLOR_SPEC_INVALID = 0,
    QCOLOR_SPEC_RGB = 1,
    QCOLOR_SPEC_HSV = 2,
    QCOLOR_SPEC_CMYK = 3,
    QCOLOR_SPEC_HSL = 4,
    QCOLOR_SPEC_EXTENDEDRGB = 5
} QColor__Spec;

typedef enum {
    QCOLOR_NAMEFORMAT_HEXRGB = 0,
    QCOLOR_NAMEFORMAT_HEXARGB = 1
} QColor__NameFormat;

#endif
