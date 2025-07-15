#pragma once
#ifndef SRCQT6C_LIBQFONTMETRICS_H
#define SRCQT6C_LIBQFONTMETRICS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qfontmetrics.html

/// q_fontmetrics_new constructs a new QFontMetrics object.
///
/// ``` QFont* param1 ```
QFontMetrics* q_fontmetrics_new(void* param1);

/// q_fontmetrics_new2 constructs a new QFontMetrics object.
///
/// ``` QFont* font, QPaintDevice* pd ```
QFontMetrics* q_fontmetrics_new2(void* font, void* pd);

/// q_fontmetrics_new3 constructs a new QFontMetrics object.
///
/// ``` QFontMetrics* param1 ```
QFontMetrics* q_fontmetrics_new3(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#operator=)
///
/// ``` QFontMetrics* self, QFontMetrics* param1 ```
void q_fontmetrics_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#swap)
///
/// ``` QFontMetrics* self, QFontMetrics* other ```
void q_fontmetrics_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#ascent)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_ascent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#capHeight)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_cap_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#descent)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_descent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#height)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#leading)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_leading(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#lineSpacing)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_line_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#minLeftBearing)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_min_left_bearing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#minRightBearing)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_min_right_bearing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#maxWidth)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_max_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#xHeight)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_x_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#averageCharWidth)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_average_char_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#inFont)
///
/// ``` QFontMetrics* self, QChar* param1 ```
bool q_fontmetrics_in_font(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#inFontUcs4)
///
/// ``` QFontMetrics* self, uint32_t ucs4 ```
bool q_fontmetrics_in_font_ucs4(void* self, uint32_t ucs4);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#leftBearing)
///
/// ``` QFontMetrics* self, QChar* param1 ```
int32_t q_fontmetrics_left_bearing(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#rightBearing)
///
/// ``` QFontMetrics* self, QChar* param1 ```
int32_t q_fontmetrics_right_bearing(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#horizontalAdvance)
///
/// ``` QFontMetrics* self, const char* param1 ```
int32_t q_fontmetrics_horizontal_advance(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#horizontalAdvance)
///
/// ``` QFontMetrics* self, const char* param1, QTextOption* textOption ```
int32_t q_fontmetrics_horizontal_advance2(void* self, const char* param1, void* textOption);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#horizontalAdvance)
///
/// ``` QFontMetrics* self, QChar* param1 ```
int32_t q_fontmetrics_horizontal_advance3(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// ``` QFontMetrics* self, QChar* param1 ```
QRect* q_fontmetrics_bounding_rect(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// ``` QFontMetrics* self, const char* text ```
QRect* q_fontmetrics_bounding_rect2(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// ``` QFontMetrics* self, const char* text, QTextOption* textOption ```
QRect* q_fontmetrics_bounding_rect3(void* self, const char* text, void* textOption);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// ``` QFontMetrics* self, QRect* r, int flags, const char* text ```
QRect* q_fontmetrics_bounding_rect4(void* self, void* r, int flags, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// ``` QFontMetrics* self, int x, int y, int w, int h, int flags, const char* text ```
QRect* q_fontmetrics_bounding_rect5(void* self, int x, int y, int w, int h, int flags, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#size)
///
/// ``` QFontMetrics* self, int flags, const char* str ```
QSize* q_fontmetrics_size(void* self, int flags, const char* str);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#tightBoundingRect)
///
/// ``` QFontMetrics* self, const char* text ```
QRect* q_fontmetrics_tight_bounding_rect(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#tightBoundingRect)
///
/// ``` QFontMetrics* self, const char* text, QTextOption* textOption ```
QRect* q_fontmetrics_tight_bounding_rect2(void* self, const char* text, void* textOption);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#elidedText)
///
/// ``` QFontMetrics* self, const char* text, enum Qt__TextElideMode mode, int width ```
const char* q_fontmetrics_elided_text(void* self, const char* text, int64_t mode, int width);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#underlinePos)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_underline_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#overlinePos)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_overline_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#strikeOutPos)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_strike_out_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#lineWidth)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_line_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#fontDpi)
///
/// ``` QFontMetrics* self ```
double q_fontmetrics_font_dpi(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#operator==)
///
/// ``` QFontMetrics* self, QFontMetrics* other ```
bool q_fontmetrics_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#operator!=)
///
/// ``` QFontMetrics* self, QFontMetrics* other ```
bool q_fontmetrics_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#horizontalAdvance)
///
/// ``` QFontMetrics* self, const char* param1, int lenVal ```
int32_t q_fontmetrics_horizontal_advance22(void* self, const char* param1, int lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// ``` QFontMetrics* self, QRect* r, int flags, const char* text, int tabstops ```
QRect* q_fontmetrics_bounding_rect42(void* self, void* r, int flags, const char* text, int tabstops);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// ``` QFontMetrics* self, QRect* r, int flags, const char* text, int tabstops, int* tabarray ```
QRect* q_fontmetrics_bounding_rect52(void* self, void* r, int flags, const char* text, int tabstops, int* tabarray);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// ``` QFontMetrics* self, int x, int y, int w, int h, int flags, const char* text, int tabstops ```
QRect* q_fontmetrics_bounding_rect7(void* self, int x, int y, int w, int h, int flags, const char* text, int tabstops);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// ``` QFontMetrics* self, int x, int y, int w, int h, int flags, const char* text, int tabstops, int* tabarray ```
QRect* q_fontmetrics_bounding_rect8(void* self, int x, int y, int w, int h, int flags, const char* text, int tabstops, int* tabarray);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#size)
///
/// ``` QFontMetrics* self, int flags, const char* str, int tabstops ```
QSize* q_fontmetrics_size3(void* self, int flags, const char* str, int tabstops);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#size)
///
/// ``` QFontMetrics* self, int flags, const char* str, int tabstops, int* tabarray ```
QSize* q_fontmetrics_size4(void* self, int flags, const char* str, int tabstops, int* tabarray);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#elidedText)
///
/// ``` QFontMetrics* self, const char* text, enum Qt__TextElideMode mode, int width, int flags ```
const char* q_fontmetrics_elided_text4(void* self, const char* text, int64_t mode, int width, int flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#dtor.QFontMetrics)
///
/// Delete this object from C++ memory.
///
/// ``` QFontMetrics* self ```
void q_fontmetrics_delete(void* self);

/// https://doc.qt.io/qt-6/qfontmetricsf.html

/// q_fontmetricsf_new constructs a new QFontMetricsF object.
///
/// ``` QFont* font ```
QFontMetricsF* q_fontmetricsf_new(void* font);

/// q_fontmetricsf_new2 constructs a new QFontMetricsF object.
///
/// ``` QFont* font, QPaintDevice* pd ```
QFontMetricsF* q_fontmetricsf_new2(void* font, void* pd);

/// q_fontmetricsf_new3 constructs a new QFontMetricsF object.
///
/// ``` QFontMetrics* param1 ```
QFontMetricsF* q_fontmetricsf_new3(void* param1);

/// q_fontmetricsf_new4 constructs a new QFontMetricsF object.
///
/// ``` QFontMetricsF* param1 ```
QFontMetricsF* q_fontmetricsf_new4(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#operator=)
///
/// ``` QFontMetricsF* self, QFontMetricsF* param1 ```
void q_fontmetricsf_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#operator=)
///
/// ``` QFontMetricsF* self, QFontMetrics* param1 ```
void q_fontmetricsf_operator_assign2(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#swap)
///
/// ``` QFontMetricsF* self, QFontMetricsF* other ```
void q_fontmetricsf_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#ascent)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_ascent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#capHeight)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_cap_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#descent)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_descent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#height)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#leading)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_leading(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#lineSpacing)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_line_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#minLeftBearing)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_min_left_bearing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#minRightBearing)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_min_right_bearing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#maxWidth)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_max_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#xHeight)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_x_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#averageCharWidth)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_average_char_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#inFont)
///
/// ``` QFontMetricsF* self, QChar* param1 ```
bool q_fontmetricsf_in_font(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#inFontUcs4)
///
/// ``` QFontMetricsF* self, uint32_t ucs4 ```
bool q_fontmetricsf_in_font_ucs4(void* self, uint32_t ucs4);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#leftBearing)
///
/// ``` QFontMetricsF* self, QChar* param1 ```
double q_fontmetricsf_left_bearing(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#rightBearing)
///
/// ``` QFontMetricsF* self, QChar* param1 ```
double q_fontmetricsf_right_bearing(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#horizontalAdvance)
///
/// ``` QFontMetricsF* self, const char* stringVal ```
double q_fontmetricsf_horizontal_advance(void* self, const char* stringVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#horizontalAdvance)
///
/// ``` QFontMetricsF* self, QChar* param1 ```
double q_fontmetricsf_horizontal_advance2(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#horizontalAdvance)
///
/// ``` QFontMetricsF* self, const char* stringVal, QTextOption* textOption ```
double q_fontmetricsf_horizontal_advance3(void* self, const char* stringVal, void* textOption);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
///
/// ``` QFontMetricsF* self, const char* stringVal ```
QRectF* q_fontmetricsf_bounding_rect(void* self, const char* stringVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
///
/// ``` QFontMetricsF* self, const char* text, QTextOption* textOption ```
QRectF* q_fontmetricsf_bounding_rect2(void* self, const char* text, void* textOption);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
///
/// ``` QFontMetricsF* self, QChar* param1 ```
QRectF* q_fontmetricsf_bounding_rect3(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
///
/// ``` QFontMetricsF* self, QRectF* r, int flags, const char* stringVal ```
QRectF* q_fontmetricsf_bounding_rect4(void* self, void* r, int flags, const char* stringVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#size)
///
/// ``` QFontMetricsF* self, int flags, const char* str ```
QSizeF* q_fontmetricsf_size(void* self, int flags, const char* str);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#tightBoundingRect)
///
/// ``` QFontMetricsF* self, const char* text ```
QRectF* q_fontmetricsf_tight_bounding_rect(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#tightBoundingRect)
///
/// ``` QFontMetricsF* self, const char* text, QTextOption* textOption ```
QRectF* q_fontmetricsf_tight_bounding_rect2(void* self, const char* text, void* textOption);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#elidedText)
///
/// ``` QFontMetricsF* self, const char* text, enum Qt__TextElideMode mode, double width ```
const char* q_fontmetricsf_elided_text(void* self, const char* text, int64_t mode, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#underlinePos)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_underline_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#overlinePos)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_overline_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#strikeOutPos)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_strike_out_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#lineWidth)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_line_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#fontDpi)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_font_dpi(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#operator==)
///
/// ``` QFontMetricsF* self, QFontMetricsF* other ```
bool q_fontmetricsf_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#operator!=)
///
/// ``` QFontMetricsF* self, QFontMetricsF* other ```
bool q_fontmetricsf_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#horizontalAdvance)
///
/// ``` QFontMetricsF* self, const char* stringVal, int length ```
double q_fontmetricsf_horizontal_advance22(void* self, const char* stringVal, int length);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
///
/// ``` QFontMetricsF* self, QRectF* r, int flags, const char* stringVal, int tabstops ```
QRectF* q_fontmetricsf_bounding_rect42(void* self, void* r, int flags, const char* stringVal, int tabstops);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
///
/// ``` QFontMetricsF* self, QRectF* r, int flags, const char* stringVal, int tabstops, int* tabarray ```
QRectF* q_fontmetricsf_bounding_rect5(void* self, void* r, int flags, const char* stringVal, int tabstops, int* tabarray);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#size)
///
/// ``` QFontMetricsF* self, int flags, const char* str, int tabstops ```
QSizeF* q_fontmetricsf_size3(void* self, int flags, const char* str, int tabstops);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#size)
///
/// ``` QFontMetricsF* self, int flags, const char* str, int tabstops, int* tabarray ```
QSizeF* q_fontmetricsf_size4(void* self, int flags, const char* str, int tabstops, int* tabarray);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#elidedText)
///
/// ``` QFontMetricsF* self, const char* text, enum Qt__TextElideMode mode, double width, int flags ```
const char* q_fontmetricsf_elided_text4(void* self, const char* text, int64_t mode, double width, int flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#dtor.QFontMetricsF)
///
/// Delete this object from C++ memory.
///
/// ``` QFontMetricsF* self ```
void q_fontmetricsf_delete(void* self);

#endif
