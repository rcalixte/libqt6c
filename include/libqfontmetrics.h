#pragma once
#ifndef SRCQT6C_LIBQFONTMETRICS_H
#define SRCQT6C_LIBQFONTMETRICS_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qfontmetrics.html

/// q_fontmetrics_new constructs a new QFontMetrics object.
///
/// @param param1 QFont*
QFontMetrics* q_fontmetrics_new(void* param1);

/// q_fontmetrics_new2 constructs a new QFontMetrics object.
///
/// @param font QFont*
/// @param pd QPaintDevice*
QFontMetrics* q_fontmetrics_new2(void* font, void* pd);

/// q_fontmetrics_new3 constructs a new QFontMetrics object.
///
/// @param param1 QFontMetrics*
QFontMetrics* q_fontmetrics_new3(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#operator-eq)
///
/// @param self QFontMetrics*
/// @param param1 QFontMetrics*
void q_fontmetrics_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#swap)
///
/// @param self QFontMetrics*
/// @param other QFontMetrics*
void q_fontmetrics_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#ascent)
///
/// @param self QFontMetrics*
int32_t q_fontmetrics_ascent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#capHeight)
///
/// @param self QFontMetrics*
int32_t q_fontmetrics_cap_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#descent)
///
/// @param self QFontMetrics*
int32_t q_fontmetrics_descent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#height)
///
/// @param self QFontMetrics*
int32_t q_fontmetrics_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#leading)
///
/// @param self QFontMetrics*
int32_t q_fontmetrics_leading(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#lineSpacing)
///
/// @param self QFontMetrics*
int32_t q_fontmetrics_line_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#minLeftBearing)
///
/// @param self QFontMetrics*
int32_t q_fontmetrics_min_left_bearing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#minRightBearing)
///
/// @param self QFontMetrics*
int32_t q_fontmetrics_min_right_bearing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#maxWidth)
///
/// @param self QFontMetrics*
int32_t q_fontmetrics_max_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#xHeight)
///
/// @param self QFontMetrics*
int32_t q_fontmetrics_x_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#averageCharWidth)
///
/// @param self QFontMetrics*
int32_t q_fontmetrics_average_char_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#inFont)
///
/// @param self QFontMetrics*
/// @param param1 QChar*
bool q_fontmetrics_in_font(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#inFontUcs4)
///
/// @param self QFontMetrics*
/// @param ucs4 uint32_t
bool q_fontmetrics_in_font_ucs4(void* self, uint32_t ucs4);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#leftBearing)
///
/// @param self QFontMetrics*
/// @param param1 QChar*
int32_t q_fontmetrics_left_bearing(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#rightBearing)
///
/// @param self QFontMetrics*
/// @param param1 QChar*
int32_t q_fontmetrics_right_bearing(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#horizontalAdvance)
///
/// @param self QFontMetrics*
/// @param param1 const char*
int32_t q_fontmetrics_horizontal_advance(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#horizontalAdvance)
///
/// @param self QFontMetrics*
/// @param param1 const char*
/// @param textOption QTextOption*
int32_t q_fontmetrics_horizontal_advance2(void* self, const char* param1, void* textOption);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#horizontalAdvance)
///
/// @param self QFontMetrics*
/// @param param1 QChar*
int32_t q_fontmetrics_horizontal_advance3(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// @param self QFontMetrics*
/// @param param1 QChar*
QRect* q_fontmetrics_bounding_rect(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// @param self QFontMetrics*
/// @param text const char*
QRect* q_fontmetrics_bounding_rect2(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// @param self QFontMetrics*
/// @param text const char*
/// @param textOption QTextOption*
QRect* q_fontmetrics_bounding_rect3(void* self, const char* text, void* textOption);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// @param self QFontMetrics*
/// @param r QRect*
/// @param flags int
/// @param text const char*
QRect* q_fontmetrics_bounding_rect4(void* self, void* r, int flags, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// @param self QFontMetrics*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param flags int
/// @param text const char*
QRect* q_fontmetrics_bounding_rect5(void* self, int x, int y, int w, int h, int flags, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#size)
///
/// @param self QFontMetrics*
/// @param flags int
/// @param str const char*
QSize* q_fontmetrics_size(void* self, int flags, const char* str);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#tightBoundingRect)
///
/// @param self QFontMetrics*
/// @param text const char*
QRect* q_fontmetrics_tight_bounding_rect(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#tightBoundingRect)
///
/// @param self QFontMetrics*
/// @param text const char*
/// @param textOption QTextOption*
QRect* q_fontmetrics_tight_bounding_rect2(void* self, const char* text, void* textOption);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#elidedText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFontMetrics*
/// @param text const char*
/// @param mode enum Qt__TextElideMode
/// @param width int
const char* q_fontmetrics_elided_text(void* self, const char* text, int32_t mode, int width);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#underlinePos)
///
/// @param self QFontMetrics*
int32_t q_fontmetrics_underline_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#overlinePos)
///
/// @param self QFontMetrics*
int32_t q_fontmetrics_overline_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#strikeOutPos)
///
/// @param self QFontMetrics*
int32_t q_fontmetrics_strike_out_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#lineWidth)
///
/// @param self QFontMetrics*
int32_t q_fontmetrics_line_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#fontDpi)
///
/// @param self QFontMetrics*
double q_fontmetrics_font_dpi(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#operator-eq-eq)
///
/// @param self QFontMetrics*
/// @param other QFontMetrics*
bool q_fontmetrics_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#operator-not-eq)
///
/// @param self QFontMetrics*
/// @param other QFontMetrics*
bool q_fontmetrics_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#horizontalAdvance)
///
/// @param self QFontMetrics*
/// @param param1 const char*
/// @param lenVal int
int32_t q_fontmetrics_horizontal_advance22(void* self, const char* param1, int lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// @param self QFontMetrics*
/// @param r QRect*
/// @param flags int
/// @param text const char*
/// @param tabstops int
QRect* q_fontmetrics_bounding_rect42(void* self, void* r, int flags, const char* text, int tabstops);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// @param self QFontMetrics*
/// @param r QRect*
/// @param flags int
/// @param text const char*
/// @param tabstops int
/// @param tabarray int*
QRect* q_fontmetrics_bounding_rect52(void* self, void* r, int flags, const char* text, int tabstops, int* tabarray);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// @param self QFontMetrics*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param flags int
/// @param text const char*
/// @param tabstops int
QRect* q_fontmetrics_bounding_rect7(void* self, int x, int y, int w, int h, int flags, const char* text, int tabstops);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// @param self QFontMetrics*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param flags int
/// @param text const char*
/// @param tabstops int
/// @param tabarray int*
QRect* q_fontmetrics_bounding_rect8(void* self, int x, int y, int w, int h, int flags, const char* text, int tabstops, int* tabarray);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#size)
///
/// @param self QFontMetrics*
/// @param flags int
/// @param str const char*
/// @param tabstops int
QSize* q_fontmetrics_size3(void* self, int flags, const char* str, int tabstops);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#size)
///
/// @param self QFontMetrics*
/// @param flags int
/// @param str const char*
/// @param tabstops int
/// @param tabarray int*
QSize* q_fontmetrics_size4(void* self, int flags, const char* str, int tabstops, int* tabarray);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#elidedText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFontMetrics*
/// @param text const char*
/// @param mode enum Qt__TextElideMode
/// @param width int
/// @param flags int
const char* q_fontmetrics_elided_text4(void* self, const char* text, int32_t mode, int width, int flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#dtor.QFontMetrics)
///
/// Delete this object from C++ memory.
///
/// @param self QFontMetrics*
void q_fontmetrics_delete(void* self);

/// https://doc.qt.io/qt-6/qfontmetricsf.html

/// q_fontmetricsf_new constructs a new QFontMetricsF object.
///
/// @param font QFont*
QFontMetricsF* q_fontmetricsf_new(void* font);

/// q_fontmetricsf_new2 constructs a new QFontMetricsF object.
///
/// @param font QFont*
/// @param pd QPaintDevice*
QFontMetricsF* q_fontmetricsf_new2(void* font, void* pd);

/// q_fontmetricsf_new3 constructs a new QFontMetricsF object.
///
/// @param param1 QFontMetrics*
QFontMetricsF* q_fontmetricsf_new3(void* param1);

/// q_fontmetricsf_new4 constructs a new QFontMetricsF object.
///
/// @param param1 QFontMetricsF*
QFontMetricsF* q_fontmetricsf_new4(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#operator-eq)
///
/// @param self QFontMetricsF*
/// @param param1 QFontMetricsF*
void q_fontmetricsf_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#operator-eq)
///
/// @param self QFontMetricsF*
/// @param param1 QFontMetrics*
void q_fontmetricsf_operator_assign2(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#swap)
///
/// @param self QFontMetricsF*
/// @param other QFontMetricsF*
void q_fontmetricsf_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#ascent)
///
/// @param self QFontMetricsF*
double q_fontmetricsf_ascent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#capHeight)
///
/// @param self QFontMetricsF*
double q_fontmetricsf_cap_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#descent)
///
/// @param self QFontMetricsF*
double q_fontmetricsf_descent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#height)
///
/// @param self QFontMetricsF*
double q_fontmetricsf_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#leading)
///
/// @param self QFontMetricsF*
double q_fontmetricsf_leading(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#lineSpacing)
///
/// @param self QFontMetricsF*
double q_fontmetricsf_line_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#minLeftBearing)
///
/// @param self QFontMetricsF*
double q_fontmetricsf_min_left_bearing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#minRightBearing)
///
/// @param self QFontMetricsF*
double q_fontmetricsf_min_right_bearing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#maxWidth)
///
/// @param self QFontMetricsF*
double q_fontmetricsf_max_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#xHeight)
///
/// @param self QFontMetricsF*
double q_fontmetricsf_x_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#averageCharWidth)
///
/// @param self QFontMetricsF*
double q_fontmetricsf_average_char_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#inFont)
///
/// @param self QFontMetricsF*
/// @param param1 QChar*
bool q_fontmetricsf_in_font(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#inFontUcs4)
///
/// @param self QFontMetricsF*
/// @param ucs4 uint32_t
bool q_fontmetricsf_in_font_ucs4(void* self, uint32_t ucs4);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#leftBearing)
///
/// @param self QFontMetricsF*
/// @param param1 QChar*
double q_fontmetricsf_left_bearing(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#rightBearing)
///
/// @param self QFontMetricsF*
/// @param param1 QChar*
double q_fontmetricsf_right_bearing(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#horizontalAdvance)
///
/// @param self QFontMetricsF*
/// @param stringVal const char*
double q_fontmetricsf_horizontal_advance(void* self, const char* stringVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#horizontalAdvance)
///
/// @param self QFontMetricsF*
/// @param param1 QChar*
double q_fontmetricsf_horizontal_advance2(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#horizontalAdvance)
///
/// @param self QFontMetricsF*
/// @param stringVal const char*
/// @param textOption QTextOption*
double q_fontmetricsf_horizontal_advance3(void* self, const char* stringVal, void* textOption);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
///
/// @param self QFontMetricsF*
/// @param stringVal const char*
QRectF* q_fontmetricsf_bounding_rect(void* self, const char* stringVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
///
/// @param self QFontMetricsF*
/// @param text const char*
/// @param textOption QTextOption*
QRectF* q_fontmetricsf_bounding_rect2(void* self, const char* text, void* textOption);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
///
/// @param self QFontMetricsF*
/// @param param1 QChar*
QRectF* q_fontmetricsf_bounding_rect3(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
///
/// @param self QFontMetricsF*
/// @param r QRectF*
/// @param flags int
/// @param stringVal const char*
QRectF* q_fontmetricsf_bounding_rect4(void* self, void* r, int flags, const char* stringVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#size)
///
/// @param self QFontMetricsF*
/// @param flags int
/// @param str const char*
QSizeF* q_fontmetricsf_size(void* self, int flags, const char* str);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#tightBoundingRect)
///
/// @param self QFontMetricsF*
/// @param text const char*
QRectF* q_fontmetricsf_tight_bounding_rect(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#tightBoundingRect)
///
/// @param self QFontMetricsF*
/// @param text const char*
/// @param textOption QTextOption*
QRectF* q_fontmetricsf_tight_bounding_rect2(void* self, const char* text, void* textOption);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#elidedText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFontMetricsF*
/// @param text const char*
/// @param mode enum Qt__TextElideMode
/// @param width double
const char* q_fontmetricsf_elided_text(void* self, const char* text, int32_t mode, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#underlinePos)
///
/// @param self QFontMetricsF*
double q_fontmetricsf_underline_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#overlinePos)
///
/// @param self QFontMetricsF*
double q_fontmetricsf_overline_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#strikeOutPos)
///
/// @param self QFontMetricsF*
double q_fontmetricsf_strike_out_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#lineWidth)
///
/// @param self QFontMetricsF*
double q_fontmetricsf_line_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#fontDpi)
///
/// @param self QFontMetricsF*
double q_fontmetricsf_font_dpi(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#operator-eq-eq)
///
/// @param self QFontMetricsF*
/// @param other QFontMetricsF*
bool q_fontmetricsf_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#operator-not-eq)
///
/// @param self QFontMetricsF*
/// @param other QFontMetricsF*
bool q_fontmetricsf_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#horizontalAdvance)
///
/// @param self QFontMetricsF*
/// @param stringVal const char*
/// @param length int
double q_fontmetricsf_horizontal_advance22(void* self, const char* stringVal, int length);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
///
/// @param self QFontMetricsF*
/// @param r QRectF*
/// @param flags int
/// @param stringVal const char*
/// @param tabstops int
QRectF* q_fontmetricsf_bounding_rect42(void* self, void* r, int flags, const char* stringVal, int tabstops);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
///
/// @param self QFontMetricsF*
/// @param r QRectF*
/// @param flags int
/// @param stringVal const char*
/// @param tabstops int
/// @param tabarray int*
QRectF* q_fontmetricsf_bounding_rect5(void* self, void* r, int flags, const char* stringVal, int tabstops, int* tabarray);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#size)
///
/// @param self QFontMetricsF*
/// @param flags int
/// @param str const char*
/// @param tabstops int
QSizeF* q_fontmetricsf_size3(void* self, int flags, const char* str, int tabstops);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#size)
///
/// @param self QFontMetricsF*
/// @param flags int
/// @param str const char*
/// @param tabstops int
/// @param tabarray int*
QSizeF* q_fontmetricsf_size4(void* self, int flags, const char* str, int tabstops, int* tabarray);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#elidedText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFontMetricsF*
/// @param text const char*
/// @param mode enum Qt__TextElideMode
/// @param width double
/// @param flags int
const char* q_fontmetricsf_elided_text4(void* self, const char* text, int32_t mode, double width, int flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#dtor.QFontMetricsF)
///
/// Delete this object from C++ memory.
///
/// @param self QFontMetricsF*
void q_fontmetricsf_delete(void* self);

#endif
