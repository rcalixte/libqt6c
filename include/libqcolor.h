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

QColor* q_color_new(void* other);
QColor* q_color_new2(void* other);
QColor* q_color_new3();
QColor* q_color_new4(int64_t color);
QColor* q_color_new5(int r, int g, int b);
QColor* q_color_new6(uint32_t rgb);
QColor* q_color_new7(void* rgba64);
QColor* q_color_new8(const char* name);
QColor* q_color_new9(const char* aname);
QColor* q_color_new10(int64_t spec);
QColor* q_color_new11(int64_t spec, unsigned short a1, unsigned short a2, unsigned short a3, unsigned short a4);
QColor* q_color_new12(void* param1);
QColor* q_color_new13(int r, int g, int b, int a);
QColor* q_color_new14(int64_t spec, unsigned short a1, unsigned short a2, unsigned short a3, unsigned short a4, unsigned short a5);
void q_color_copy_assign(void* self, void* other);
void q_color_move_assign(void* self, void* other);
QColor* q_color_from_string(const char* name);
void q_color_operator_assign(void* self, int64_t color);
bool q_color_is_valid(void* self);
const char* q_color_name(void* self);
void q_color_set_named_color(void* self, const char* name);
const char** q_color_color_names();
int64_t q_color_spec(void* self);
int32_t q_color_alpha(void* self);
void q_color_set_alpha(void* self, int alpha);
float q_color_alpha_f(void* self);
void q_color_set_alpha_f(void* self, float alpha);
int32_t q_color_red(void* self);
int32_t q_color_green(void* self);
int32_t q_color_blue(void* self);
void q_color_set_red(void* self, int red);
void q_color_set_green(void* self, int green);
void q_color_set_blue(void* self, int blue);
float q_color_red_f(void* self);
float q_color_green_f(void* self);
float q_color_blue_f(void* self);
void q_color_set_red_f(void* self, float red);
void q_color_set_green_f(void* self, float green);
void q_color_set_blue_f(void* self, float blue);
void q_color_get_rgb(void* self, int* r, int* g, int* b);
void q_color_set_rgb(void* self, int r, int g, int b);
void q_color_get_rgb_f(void* self, float* r, float* g, float* b);
void q_color_set_rgb_f(void* self, float r, float g, float b);
QRgba64* q_color_rgba64(void* self);
void q_color_set_rgba64(void* self, void* rgba);
uint32_t q_color_rgba(void* self);
void q_color_set_rgba(void* self, uint32_t rgba);
uint32_t q_color_rgb(void* self);
void q_color_set_rgb_with_rgb(void* self, uint32_t rgb);
int32_t q_color_hue(void* self);
int32_t q_color_saturation(void* self);
int32_t q_color_hsv_hue(void* self);
int32_t q_color_hsv_saturation(void* self);
int32_t q_color_value(void* self);
float q_color_hue_f(void* self);
float q_color_saturation_f(void* self);
float q_color_hsv_hue_f(void* self);
float q_color_hsv_saturation_f(void* self);
float q_color_value_f(void* self);
void q_color_get_hsv(void* self, int* h, int* s, int* v);
void q_color_set_hsv(void* self, int h, int s, int v);
void q_color_get_hsv_f(void* self, float* h, float* s, float* v);
void q_color_set_hsv_f(void* self, float h, float s, float v);
int32_t q_color_cyan(void* self);
int32_t q_color_magenta(void* self);
int32_t q_color_yellow(void* self);
int32_t q_color_black(void* self);
float q_color_cyan_f(void* self);
float q_color_magenta_f(void* self);
float q_color_yellow_f(void* self);
float q_color_black_f(void* self);
void q_color_get_cmyk(void* self, int* c, int* m, int* y, int* k);
void q_color_set_cmyk(void* self, int c, int m, int y, int k);
void q_color_get_cmyk_f(void* self, float* c, float* m, float* y, float* k);
void q_color_set_cmyk_f(void* self, float c, float m, float y, float k);
int32_t q_color_hsl_hue(void* self);
int32_t q_color_hsl_saturation(void* self);
int32_t q_color_lightness(void* self);
float q_color_hsl_hue_f(void* self);
float q_color_hsl_saturation_f(void* self);
float q_color_lightness_f(void* self);
void q_color_get_hsl(void* self, int* h, int* s, int* l);
void q_color_set_hsl(void* self, int h, int s, int l);
void q_color_get_hsl_f(void* self, float* h, float* s, float* l);
void q_color_set_hsl_f(void* self, float h, float s, float l);
QColor* q_color_to_rgb(void* self);
QColor* q_color_to_hsv(void* self);
QColor* q_color_to_cmyk(void* self);
QColor* q_color_to_hsl(void* self);
QColor* q_color_to_extended_rgb(void* self);
QColor* q_color_convert_to(void* self, int64_t colorSpec);
QColor* q_color_from_rgb(uint32_t rgb);
QColor* q_color_from_rgba(uint32_t rgba);
QColor* q_color_from_rgb2(int r, int g, int b);
QColor* q_color_from_rgb_f(float r, float g, float b);
QColor* q_color_from_rgba64(unsigned short r, unsigned short g, unsigned short b);
QColor* q_color_from_rgba64_with_rgba(void* rgba);
QColor* q_color_from_hsv(int h, int s, int v);
QColor* q_color_from_hsv_f(float h, float s, float v);
QColor* q_color_from_cmyk(int c, int m, int y, int k);
QColor* q_color_from_cmyk_f(float c, float m, float y, float k);
QColor* q_color_from_hsl(int h, int s, int l);
QColor* q_color_from_hsl_f(float h, float s, float l);
QColor* q_color_lighter(void* self);
QColor* q_color_darker(void* self);
bool q_color_operator_equal(void* self, void* c);
bool q_color_operator_not_equal(void* self, void* c);
QVariant* q_color_to_q_variant(void* self);
bool q_color_is_valid_color(const char* name);
bool q_color_is_valid_color_name(const char* param1);
const char* q_color_name1(void* self, int64_t format);
void q_color_get_rgb4(void* self, int* r, int* g, int* b, int* a);
void q_color_set_rgb4(void* self, int r, int g, int b, int a);
void q_color_get_rgb_f4(void* self, float* r, float* g, float* b, float* a);
void q_color_set_rgb_f4(void* self, float r, float g, float b, float a);
void q_color_get_hsv4(void* self, int* h, int* s, int* v, int* a);
void q_color_set_hsv4(void* self, int h, int s, int v, int a);
void q_color_get_hsv_f4(void* self, float* h, float* s, float* v, float* a);
void q_color_set_hsv_f4(void* self, float h, float s, float v, float a);
void q_color_get_cmyk5(void* self, int* c, int* m, int* y, int* k, int* a);
void q_color_set_cmyk5(void* self, int c, int m, int y, int k, int a);
void q_color_get_cmyk_f5(void* self, float* c, float* m, float* y, float* k, float* a);
void q_color_set_cmyk_f5(void* self, float c, float m, float y, float k, float a);
void q_color_get_hsl4(void* self, int* h, int* s, int* l, int* a);
void q_color_set_hsl4(void* self, int h, int s, int l, int a);
void q_color_get_hsl_f4(void* self, float* h, float* s, float* l, float* a);
void q_color_set_hsl_f4(void* self, float h, float s, float l, float a);
QColor* q_color_from_rgb4(int r, int g, int b, int a);
QColor* q_color_from_rgb_f4(float r, float g, float b, float a);
QColor* q_color_from_rgba644(unsigned short r, unsigned short g, unsigned short b, unsigned short a);
QColor* q_color_from_hsv4(int h, int s, int v, int a);
QColor* q_color_from_hsv_f4(float h, float s, float v, float a);
QColor* q_color_from_cmyk5(int c, int m, int y, int k, int a);
QColor* q_color_from_cmyk_f5(float c, float m, float y, float k, float a);
QColor* q_color_from_hsl4(int h, int s, int l, int a);
QColor* q_color_from_hsl_f4(float h, float s, float l, float a);
QColor* q_color_lighter1(void* self, int f);
QColor* q_color_darker1(void* self, int f);
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
