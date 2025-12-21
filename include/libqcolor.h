#pragma once
#ifndef SRC_QT6C_LIBQCOLOR_H
#define SRC_QT6C_LIBQCOLOR_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html)

/// q_color_new constructs a new QColor object.
///
/// @param other QColor*
///
QColor* q_color_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html)

/// q_color_new2 constructs a new QColor object and invalidates the source QColor object.
///
/// @param other QColor*
///
QColor* q_color_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html)

/// q_color_new3 constructs a new QColor object.
///
QColor* q_color_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html)

/// q_color_new4 constructs a new QColor object.
///
/// @param color enum Qt__GlobalColor
///
QColor* q_color_new4(int32_t color);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html)

/// q_color_new5 constructs a new QColor object.
///
/// @param r int
/// @param g int
/// @param b int
///
QColor* q_color_new5(int r, int g, int b);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html)

/// q_color_new6 constructs a new QColor object.
///
/// @param rgb uint32_t
///
QColor* q_color_new6(uint32_t rgb);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html)

/// q_color_new7 constructs a new QColor object.
///
/// @param rgba64 QRgba64*
///
QColor* q_color_new7(void* rgba64);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html)

/// q_color_new8 constructs a new QColor object.
///
/// @param name const char*
///
QColor* q_color_new8(const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html)

/// q_color_new9 constructs a new QColor object.
///
/// @param aname const char*
///
QColor* q_color_new9(const char* aname);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html)

/// q_color_new10 constructs a new QColor object.
///
/// @param spec enum QColor__Spec
///
QColor* q_color_new10(int32_t spec);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html)

/// q_color_new11 constructs a new QColor object.
///
/// @param spec enum QColor__Spec
/// @param a1 unsigned short
/// @param a2 unsigned short
/// @param a3 unsigned short
/// @param a4 unsigned short
///
QColor* q_color_new11(int32_t spec, unsigned short a1, unsigned short a2, unsigned short a3, unsigned short a4);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html)

/// q_color_new12 constructs a new QColor object.
///
/// @param param1 QColor*
///
QColor* q_color_new12(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html)

/// q_color_new13 constructs a new QColor object.
///
/// @param r int
/// @param g int
/// @param b int
/// @param a int
///
QColor* q_color_new13(int r, int g, int b, int a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html)

/// q_color_new14 constructs a new QColor object.
///
/// @param spec enum QColor__Spec
/// @param a1 unsigned short
/// @param a2 unsigned short
/// @param a3 unsigned short
/// @param a4 unsigned short
/// @param a5 unsigned short
///
QColor* q_color_new14(int32_t spec, unsigned short a1, unsigned short a2, unsigned short a3, unsigned short a4, unsigned short a5);

/// q_color_copy_assign shallow copies `other` into `self`.
///
/// @param self QColor*
/// @param other QColor*
///
void q_color_copy_assign(void* self, void* other);

/// q_color_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QColor*
/// @param other QColor*
///
void q_color_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromString)
///
/// @param name char*
///
QColor* q_color_from_string(char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#operator-eq)
///
/// @param self QColor*
/// @param color enum Qt__GlobalColor
///
void q_color_operator_assign(void* self, int32_t color);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#isValid)
///
/// @param self QColor*
///
bool q_color_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#name)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QColor*
///
const char* q_color_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setNamedColor)
///
/// @param self QColor*
/// @param name const char*
///
void q_color_set_named_color(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#colorNames)
///
/// @warning Caller is responsible for freeing the returned memory
///
const char** q_color_color_names();

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#spec)
///
/// @param self QColor*
///
/// @return enum QColor__Spec
///
int32_t q_color_spec(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#alpha)
///
/// @param self QColor*
///
int32_t q_color_alpha(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setAlpha)
///
/// @param self QColor*
/// @param alpha int
///
void q_color_set_alpha(void* self, int alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#alphaF)
///
/// @param self QColor*
///
float q_color_alpha_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setAlphaF)
///
/// @param self QColor*
/// @param alpha float
///
void q_color_set_alpha_f(void* self, float alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#red)
///
/// @param self QColor*
///
int32_t q_color_red(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#green)
///
/// @param self QColor*
///
int32_t q_color_green(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#blue)
///
/// @param self QColor*
///
int32_t q_color_blue(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRed)
///
/// @param self QColor*
/// @param red int
///
void q_color_set_red(void* self, int red);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setGreen)
///
/// @param self QColor*
/// @param green int
///
void q_color_set_green(void* self, int green);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setBlue)
///
/// @param self QColor*
/// @param blue int
///
void q_color_set_blue(void* self, int blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#redF)
///
/// @param self QColor*
///
float q_color_red_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#greenF)
///
/// @param self QColor*
///
float q_color_green_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#blueF)
///
/// @param self QColor*
///
float q_color_blue_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRedF)
///
/// @param self QColor*
/// @param red float
///
void q_color_set_red_f(void* self, float red);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setGreenF)
///
/// @param self QColor*
/// @param green float
///
void q_color_set_green_f(void* self, float green);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setBlueF)
///
/// @param self QColor*
/// @param blue float
///
void q_color_set_blue_f(void* self, float blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getRgb)
///
/// @param self QColor*
/// @param r int*
/// @param g int*
/// @param b int*
///
void q_color_get_rgb(void* self, int* r, int* g, int* b);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRgb)
///
/// @param self QColor*
/// @param r int
/// @param g int
/// @param b int
///
void q_color_set_rgb(void* self, int r, int g, int b);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getRgbF)
///
/// @param self QColor*
/// @param r float*
/// @param g float*
/// @param b float*
///
void q_color_get_rgb_f(void* self, float* r, float* g, float* b);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRgbF)
///
/// @param self QColor*
/// @param r float
/// @param g float
/// @param b float
///
void q_color_set_rgb_f(void* self, float r, float g, float b);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#rgba64)
///
/// @param self QColor*
///
QRgba64* q_color_rgba64(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRgba64)
///
/// @param self QColor*
/// @param rgba QRgba64*
///
void q_color_set_rgba64(void* self, void* rgba);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#rgba)
///
/// @param self QColor*
///
uint32_t q_color_rgba(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRgba)
///
/// @param self QColor*
/// @param rgba uint32_t
///
void q_color_set_rgba(void* self, uint32_t rgba);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#rgb)
///
/// @param self QColor*
///
uint32_t q_color_rgb(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRgb)
///
/// @param self QColor*
/// @param rgb uint32_t
///
void q_color_set_rgb2(void* self, uint32_t rgb);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hue)
///
/// @param self QColor*
///
int32_t q_color_hue(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#saturation)
///
/// @param self QColor*
///
int32_t q_color_saturation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hsvHue)
///
/// @param self QColor*
///
int32_t q_color_hsv_hue(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hsvSaturation)
///
/// @param self QColor*
///
int32_t q_color_hsv_saturation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#value)
///
/// @param self QColor*
///
int32_t q_color_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hueF)
///
/// @param self QColor*
///
float q_color_hue_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#saturationF)
///
/// @param self QColor*
///
float q_color_saturation_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hsvHueF)
///
/// @param self QColor*
///
float q_color_hsv_hue_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hsvSaturationF)
///
/// @param self QColor*
///
float q_color_hsv_saturation_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#valueF)
///
/// @param self QColor*
///
float q_color_value_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getHsv)
///
/// @param self QColor*
/// @param h int*
/// @param s int*
/// @param v int*
///
void q_color_get_hsv(void* self, int* h, int* s, int* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setHsv)
///
/// @param self QColor*
/// @param h int
/// @param s int
/// @param v int
///
void q_color_set_hsv(void* self, int h, int s, int v);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getHsvF)
///
/// @param self QColor*
/// @param h float*
/// @param s float*
/// @param v float*
///
void q_color_get_hsv_f(void* self, float* h, float* s, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setHsvF)
///
/// @param self QColor*
/// @param h float
/// @param s float
/// @param v float
///
void q_color_set_hsv_f(void* self, float h, float s, float v);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#cyan)
///
/// @param self QColor*
///
int32_t q_color_cyan(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#magenta)
///
/// @param self QColor*
///
int32_t q_color_magenta(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#yellow)
///
/// @param self QColor*
///
int32_t q_color_yellow(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#black)
///
/// @param self QColor*
///
int32_t q_color_black(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#cyanF)
///
/// @param self QColor*
///
float q_color_cyan_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#magentaF)
///
/// @param self QColor*
///
float q_color_magenta_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#yellowF)
///
/// @param self QColor*
///
float q_color_yellow_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#blackF)
///
/// @param self QColor*
///
float q_color_black_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getCmyk)
///
/// @param self QColor*
/// @param c int*
/// @param m int*
/// @param y int*
/// @param k int*
///
void q_color_get_cmyk(void* self, int* c, int* m, int* y, int* k);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setCmyk)
///
/// @param self QColor*
/// @param c int
/// @param m int
/// @param y int
/// @param k int
///
void q_color_set_cmyk(void* self, int c, int m, int y, int k);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getCmykF)
///
/// @param self QColor*
/// @param c float*
/// @param m float*
/// @param y float*
/// @param k float*
///
void q_color_get_cmyk_f(void* self, float* c, float* m, float* y, float* k);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setCmykF)
///
/// @param self QColor*
/// @param c float
/// @param m float
/// @param y float
/// @param k float
///
void q_color_set_cmyk_f(void* self, float c, float m, float y, float k);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hslHue)
///
/// @param self QColor*
///
int32_t q_color_hsl_hue(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hslSaturation)
///
/// @param self QColor*
///
int32_t q_color_hsl_saturation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#lightness)
///
/// @param self QColor*
///
int32_t q_color_lightness(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hslHueF)
///
/// @param self QColor*
///
float q_color_hsl_hue_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#hslSaturationF)
///
/// @param self QColor*
///
float q_color_hsl_saturation_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#lightnessF)
///
/// @param self QColor*
///
float q_color_lightness_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getHsl)
///
/// @param self QColor*
/// @param h int*
/// @param s int*
/// @param l int*
///
void q_color_get_hsl(void* self, int* h, int* s, int* l);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setHsl)
///
/// @param self QColor*
/// @param h int
/// @param s int
/// @param l int
///
void q_color_set_hsl(void* self, int h, int s, int l);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getHslF)
///
/// @param self QColor*
/// @param h float*
/// @param s float*
/// @param l float*
///
void q_color_get_hsl_f(void* self, float* h, float* s, float* l);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setHslF)
///
/// @param self QColor*
/// @param h float
/// @param s float
/// @param l float
///
void q_color_set_hsl_f(void* self, float h, float s, float l);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#toRgb)
///
/// @param self QColor*
///
QColor* q_color_to_rgb(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#toHsv)
///
/// @param self QColor*
///
QColor* q_color_to_hsv(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#toCmyk)
///
/// @param self QColor*
///
QColor* q_color_to_cmyk(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#toHsl)
///
/// @param self QColor*
///
QColor* q_color_to_hsl(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#toExtendedRgb)
///
/// @param self QColor*
///
QColor* q_color_to_extended_rgb(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#convertTo)
///
/// @param self QColor*
/// @param colorSpec enum QColor__Spec
///
QColor* q_color_convert_to(void* self, int32_t colorSpec);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgb)
///
/// @param rgb uint32_t
///
QColor* q_color_from_rgb(uint32_t rgb);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgba)
///
/// @param rgba uint32_t
///
QColor* q_color_from_rgba(uint32_t rgba);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgb)
///
/// @param r int
/// @param g int
/// @param b int
///
QColor* q_color_from_rgb2(int r, int g, int b);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgbF)
///
/// @param r float
/// @param g float
/// @param b float
///
QColor* q_color_from_rgb_f(float r, float g, float b);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgba64)
///
/// @param r unsigned short
/// @param g unsigned short
/// @param b unsigned short
///
QColor* q_color_from_rgba64(unsigned short r, unsigned short g, unsigned short b);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgba64)
///
/// @param rgba QRgba64*
///
QColor* q_color_from_rgba642(void* rgba);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromHsv)
///
/// @param h int
/// @param s int
/// @param v int
///
QColor* q_color_from_hsv(int h, int s, int v);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromHsvF)
///
/// @param h float
/// @param s float
/// @param v float
///
QColor* q_color_from_hsv_f(float h, float s, float v);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromCmyk)
///
/// @param c int
/// @param m int
/// @param y int
/// @param k int
///
QColor* q_color_from_cmyk(int c, int m, int y, int k);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromCmykF)
///
/// @param c float
/// @param m float
/// @param y float
/// @param k float
///
QColor* q_color_from_cmyk_f(float c, float m, float y, float k);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromHsl)
///
/// @param h int
/// @param s int
/// @param l int
///
QColor* q_color_from_hsl(int h, int s, int l);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromHslF)
///
/// @param h float
/// @param s float
/// @param l float
///
QColor* q_color_from_hsl_f(float h, float s, float l);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#lighter)
///
/// @param self QColor*
///
QColor* q_color_lighter(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#darker)
///
/// @param self QColor*
///
QColor* q_color_darker(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#operator-eq-eq)
///
/// @param self QColor*
/// @param c QColor*
///
bool q_color_operator_equal(void* self, void* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#operator-not-eq)
///
/// @param self QColor*
/// @param c QColor*
///
bool q_color_operator_not_equal(void* self, void* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#operator)
///
/// @param self QColor*
///
QVariant* q_color_to_q_variant(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#isValidColor)
///
/// @param name const char*
///
bool q_color_is_valid_color(const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#isValidColorName)
///
/// @param param1 char*
///
bool q_color_is_valid_color_name(char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#name)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QColor*
/// @param format enum QColor__NameFormat
///
const char* q_color_name1(void* self, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getRgb)
///
/// @param self QColor*
/// @param r int*
/// @param g int*
/// @param b int*
/// @param a int*
///
void q_color_get_rgb4(void* self, int* r, int* g, int* b, int* a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRgb)
///
/// @param self QColor*
/// @param r int
/// @param g int
/// @param b int
/// @param a int
///
void q_color_set_rgb4(void* self, int r, int g, int b, int a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getRgbF)
///
/// @param self QColor*
/// @param r float*
/// @param g float*
/// @param b float*
/// @param a float*
///
void q_color_get_rgb_f4(void* self, float* r, float* g, float* b, float* a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setRgbF)
///
/// @param self QColor*
/// @param r float
/// @param g float
/// @param b float
/// @param a float
///
void q_color_set_rgb_f4(void* self, float r, float g, float b, float a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getHsv)
///
/// @param self QColor*
/// @param h int*
/// @param s int*
/// @param v int*
/// @param a int*
///
void q_color_get_hsv4(void* self, int* h, int* s, int* v, int* a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setHsv)
///
/// @param self QColor*
/// @param h int
/// @param s int
/// @param v int
/// @param a int
///
void q_color_set_hsv4(void* self, int h, int s, int v, int a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getHsvF)
///
/// @param self QColor*
/// @param h float*
/// @param s float*
/// @param v float*
/// @param a float*
///
void q_color_get_hsv_f4(void* self, float* h, float* s, float* v, float* a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setHsvF)
///
/// @param self QColor*
/// @param h float
/// @param s float
/// @param v float
/// @param a float
///
void q_color_set_hsv_f4(void* self, float h, float s, float v, float a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getCmyk)
///
/// @param self QColor*
/// @param c int*
/// @param m int*
/// @param y int*
/// @param k int*
/// @param a int*
///
void q_color_get_cmyk5(void* self, int* c, int* m, int* y, int* k, int* a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setCmyk)
///
/// @param self QColor*
/// @param c int
/// @param m int
/// @param y int
/// @param k int
/// @param a int
///
void q_color_set_cmyk5(void* self, int c, int m, int y, int k, int a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getCmykF)
///
/// @param self QColor*
/// @param c float*
/// @param m float*
/// @param y float*
/// @param k float*
/// @param a float*
///
void q_color_get_cmyk_f5(void* self, float* c, float* m, float* y, float* k, float* a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setCmykF)
///
/// @param self QColor*
/// @param c float
/// @param m float
/// @param y float
/// @param k float
/// @param a float
///
void q_color_set_cmyk_f5(void* self, float c, float m, float y, float k, float a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getHsl)
///
/// @param self QColor*
/// @param h int*
/// @param s int*
/// @param l int*
/// @param a int*
///
void q_color_get_hsl4(void* self, int* h, int* s, int* l, int* a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setHsl)
///
/// @param self QColor*
/// @param h int
/// @param s int
/// @param l int
/// @param a int
///
void q_color_set_hsl4(void* self, int h, int s, int l, int a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#getHslF)
///
/// @param self QColor*
/// @param h float*
/// @param s float*
/// @param l float*
/// @param a float*
///
void q_color_get_hsl_f4(void* self, float* h, float* s, float* l, float* a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#setHslF)
///
/// @param self QColor*
/// @param h float
/// @param s float
/// @param l float
/// @param a float
///
void q_color_set_hsl_f4(void* self, float h, float s, float l, float a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgb)
///
/// @param r int
/// @param g int
/// @param b int
/// @param a int
///
QColor* q_color_from_rgb4(int r, int g, int b, int a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgbF)
///
/// @param r float
/// @param g float
/// @param b float
/// @param a float
///
QColor* q_color_from_rgb_f4(float r, float g, float b, float a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromRgba64)
///
/// @param r unsigned short
/// @param g unsigned short
/// @param b unsigned short
/// @param a unsigned short
///
QColor* q_color_from_rgba644(unsigned short r, unsigned short g, unsigned short b, unsigned short a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromHsv)
///
/// @param h int
/// @param s int
/// @param v int
/// @param a int
///
QColor* q_color_from_hsv4(int h, int s, int v, int a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromHsvF)
///
/// @param h float
/// @param s float
/// @param v float
/// @param a float
///
QColor* q_color_from_hsv_f4(float h, float s, float v, float a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromCmyk)
///
/// @param c int
/// @param m int
/// @param y int
/// @param k int
/// @param a int
///
QColor* q_color_from_cmyk5(int c, int m, int y, int k, int a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromCmykF)
///
/// @param c float
/// @param m float
/// @param y float
/// @param k float
/// @param a float
///
QColor* q_color_from_cmyk_f5(float c, float m, float y, float k, float a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromHsl)
///
/// @param h int
/// @param s int
/// @param l int
/// @param a int
///
QColor* q_color_from_hsl4(int h, int s, int l, int a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#fromHslF)
///
/// @param h float
/// @param s float
/// @param l float
/// @param a float
///
QColor* q_color_from_hsl_f4(float h, float s, float l, float a);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#lighter)
///
/// @param self QColor*
/// @param f int
///
QColor* q_color_lighter1(void* self, int f);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#darker)
///
/// @param self QColor*
/// @param f int
///
QColor* q_color_darker1(void* self, int f);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#dtor.QColor)
///
/// Delete this object from C++ memory.
///
/// @param self QColor*
///
void q_color_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#public-types)

typedef enum {
    QCOLOR_SPEC_INVALID = 0,
    QCOLOR_SPEC_RGB = 1,
    QCOLOR_SPEC_HSV = 2,
    QCOLOR_SPEC_CMYK = 3,
    QCOLOR_SPEC_HSL = 4,
    QCOLOR_SPEC_EXTENDEDRGB = 5
} QColor__Spec;

/// [Upstream resources](https://doc.qt.io/qt-6/qcolor.html#public-types)

typedef enum {
    QCOLOR_NAMEFORMAT_HEXRGB = 0,
    QCOLOR_NAMEFORMAT_HEXARGB = 1
} QColor__NameFormat;

#endif
