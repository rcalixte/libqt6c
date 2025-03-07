#pragma once
#ifndef SRCQT6C_LIBQFONTMETRICS_H
#define SRCQT6C_LIBQFONTMETRICS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqchar.h"
#include "libqfont.h"
#include "libqpaintdevice.h"
#include "libqrect.h"
#include "libqsize.h"
#include <string.h>
#include "libqtextoption.h"

QFontMetrics* q_fontmetrics_new(void* param1);
QFontMetrics* q_fontmetrics_new2(void* font, void* pd);
QFontMetrics* q_fontmetrics_new3(void* param1);
void q_fontmetrics_operator_assign(void* self, void* param1);
void q_fontmetrics_swap(void* self, void* other);
int32_t q_fontmetrics_ascent(void* self);
int32_t q_fontmetrics_cap_height(void* self);
int32_t q_fontmetrics_descent(void* self);
int32_t q_fontmetrics_height(void* self);
int32_t q_fontmetrics_leading(void* self);
int32_t q_fontmetrics_line_spacing(void* self);
int32_t q_fontmetrics_min_left_bearing(void* self);
int32_t q_fontmetrics_min_right_bearing(void* self);
int32_t q_fontmetrics_max_width(void* self);
int32_t q_fontmetrics_x_height(void* self);
int32_t q_fontmetrics_average_char_width(void* self);
bool q_fontmetrics_in_font(void* self, void* param1);
bool q_fontmetrics_in_font_ucs4(void* self, uint32_t ucs4);
int32_t q_fontmetrics_left_bearing(void* self, void* param1);
int32_t q_fontmetrics_right_bearing(void* self, void* param1);
int32_t q_fontmetrics_horizontal_advance(void* self, const char* param1);
int32_t q_fontmetrics_horizontal_advance2(void* self, const char* param1, void* textOption);
int32_t q_fontmetrics_horizontal_advance_with_q_char(void* self, void* param1);
QRect* q_fontmetrics_bounding_rect(void* self, void* param1);
QRect* q_fontmetrics_bounding_rect_with_text(void* self, const char* text);
QRect* q_fontmetrics_bounding_rect2(void* self, const char* text, void* textOption);
QRect* q_fontmetrics_bounding_rect3(void* self, void* r, int flags, const char* text);
QRect* q_fontmetrics_bounding_rect4(void* self, int x, int y, int w, int h, int flags, const char* text);
QSize* q_fontmetrics_size(void* self, int flags, const char* str);
QRect* q_fontmetrics_tight_bounding_rect(void* self, const char* text);
QRect* q_fontmetrics_tight_bounding_rect2(void* self, const char* text, void* textOption);
const char* q_fontmetrics_elided_text(void* self, const char* text, int64_t mode, int width);
int32_t q_fontmetrics_underline_pos(void* self);
int32_t q_fontmetrics_overline_pos(void* self);
int32_t q_fontmetrics_strike_out_pos(void* self);
int32_t q_fontmetrics_line_width(void* self);
double q_fontmetrics_font_dpi(void* self);
bool q_fontmetrics_operator_equal(void* self, void* other);
bool q_fontmetrics_operator_not_equal(void* self, void* other);
int32_t q_fontmetrics_horizontal_advance22(void* self, const char* param1, int lenVal);
QRect* q_fontmetrics_bounding_rect42(void* self, void* r, int flags, const char* text, int tabstops);
QRect* q_fontmetrics_bounding_rect5(void* self, void* r, int flags, const char* text, int tabstops, int* tabarray);
QRect* q_fontmetrics_bounding_rect7(void* self, int x, int y, int w, int h, int flags, const char* text, int tabstops);
QRect* q_fontmetrics_bounding_rect8(void* self, int x, int y, int w, int h, int flags, const char* text, int tabstops, int* tabarray);
QSize* q_fontmetrics_size3(void* self, int flags, const char* str, int tabstops);
QSize* q_fontmetrics_size4(void* self, int flags, const char* str, int tabstops, int* tabarray);
const char* q_fontmetrics_elided_text4(void* self, const char* text, int64_t mode, int width, int flags);
void q_fontmetrics_delete(void* self);

QFontMetricsF* q_fontmetricsf_new(void* font);
QFontMetricsF* q_fontmetricsf_new2(void* font, void* pd);
QFontMetricsF* q_fontmetricsf_new3(void* param1);
QFontMetricsF* q_fontmetricsf_new4(void* param1);
void q_fontmetricsf_operator_assign(void* self, void* param1);
void q_fontmetricsf_operator_assign_with_q_font_metrics(void* self, void* param1);
void q_fontmetricsf_swap(void* self, void* other);
double q_fontmetricsf_ascent(void* self);
double q_fontmetricsf_cap_height(void* self);
double q_fontmetricsf_descent(void* self);
double q_fontmetricsf_height(void* self);
double q_fontmetricsf_leading(void* self);
double q_fontmetricsf_line_spacing(void* self);
double q_fontmetricsf_min_left_bearing(void* self);
double q_fontmetricsf_min_right_bearing(void* self);
double q_fontmetricsf_max_width(void* self);
double q_fontmetricsf_x_height(void* self);
double q_fontmetricsf_average_char_width(void* self);
bool q_fontmetricsf_in_font(void* self, void* param1);
bool q_fontmetricsf_in_font_ucs4(void* self, uint32_t ucs4);
double q_fontmetricsf_left_bearing(void* self, void* param1);
double q_fontmetricsf_right_bearing(void* self, void* param1);
double q_fontmetricsf_horizontal_advance(void* self, const char* stringVal);
double q_fontmetricsf_horizontal_advance_with_q_char(void* self, void* param1);
double q_fontmetricsf_horizontal_advance2(void* self, const char* stringVal, void* textOption);
QRectF* q_fontmetricsf_bounding_rect(void* self, const char* stringVal);
QRectF* q_fontmetricsf_bounding_rect2(void* self, const char* text, void* textOption);
QRectF* q_fontmetricsf_bounding_rect_with_q_char(void* self, void* param1);
QRectF* q_fontmetricsf_bounding_rect3(void* self, void* r, int flags, const char* stringVal);
QSizeF* q_fontmetricsf_size(void* self, int flags, const char* str);
QRectF* q_fontmetricsf_tight_bounding_rect(void* self, const char* text);
QRectF* q_fontmetricsf_tight_bounding_rect2(void* self, const char* text, void* textOption);
const char* q_fontmetricsf_elided_text(void* self, const char* text, int64_t mode, double width);
double q_fontmetricsf_underline_pos(void* self);
double q_fontmetricsf_overline_pos(void* self);
double q_fontmetricsf_strike_out_pos(void* self);
double q_fontmetricsf_line_width(void* self);
double q_fontmetricsf_font_dpi(void* self);
bool q_fontmetricsf_operator_equal(void* self, void* other);
bool q_fontmetricsf_operator_not_equal(void* self, void* other);
double q_fontmetricsf_horizontal_advance22(void* self, const char* stringVal, int length);
QRectF* q_fontmetricsf_bounding_rect4(void* self, void* r, int flags, const char* stringVal, int tabstops);
QRectF* q_fontmetricsf_bounding_rect5(void* self, void* r, int flags, const char* stringVal, int tabstops, int* tabarray);
QSizeF* q_fontmetricsf_size3(void* self, int flags, const char* str, int tabstops);
QSizeF* q_fontmetricsf_size4(void* self, int flags, const char* str, int tabstops, int* tabarray);
const char* q_fontmetricsf_elided_text4(void* self, const char* text, int64_t mode, double width, int flags);
void q_fontmetricsf_delete(void* self);

#endif
