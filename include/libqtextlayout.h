#pragma once
#ifndef SRC_QT6C_LIBQTEXTLAYOUT_H
#define SRC_QT6C_LIBQTEXTLAYOUT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html)

/// q_textinlineobject_new constructs a new QTextInlineObject object.
///
/// @param other QTextInlineObject*
///
QTextInlineObject* q_textinlineobject_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html)

/// q_textinlineobject_new2 constructs a new QTextInlineObject object and invalidates the source QTextInlineObject object.
///
/// @param other QTextInlineObject*
///
QTextInlineObject* q_textinlineobject_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html)

/// q_textinlineobject_new3 constructs a new QTextInlineObject object.
///
QTextInlineObject* q_textinlineobject_new3();

/// q_textinlineobject_copy_assign shallow copies `other` into `self`.
///
/// @param self QTextInlineObject*
/// @param other QTextInlineObject*
///
void q_textinlineobject_copy_assign(void* self, void* other);

/// q_textinlineobject_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QTextInlineObject*
/// @param other QTextInlineObject*
///
void q_textinlineobject_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#isValid)
///
/// @param self QTextInlineObject*
///
bool q_textinlineobject_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#rect)
///
/// @param self QTextInlineObject*
///
QRectF* q_textinlineobject_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#width)
///
/// @param self QTextInlineObject*
///
double q_textinlineobject_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#ascent)
///
/// @param self QTextInlineObject*
///
double q_textinlineobject_ascent(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#descent)
///
/// @param self QTextInlineObject*
///
double q_textinlineobject_descent(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#height)
///
/// @param self QTextInlineObject*
///
double q_textinlineobject_height(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#textDirection)
///
/// @param self QTextInlineObject*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_textinlineobject_text_direction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#setWidth)
///
/// @param self QTextInlineObject*
/// @param w double
///
void q_textinlineobject_set_width(void* self, double w);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#setAscent)
///
/// @param self QTextInlineObject*
/// @param a double
///
void q_textinlineobject_set_ascent(void* self, double a);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#setDescent)
///
/// @param self QTextInlineObject*
/// @param d double
///
void q_textinlineobject_set_descent(void* self, double d);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#textPosition)
///
/// @param self QTextInlineObject*
///
int32_t q_textinlineobject_text_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#formatIndex)
///
/// @param self QTextInlineObject*
///
int32_t q_textinlineobject_format_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#format)
///
/// @param self QTextInlineObject*
///
QTextFormat* q_textinlineobject_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#dtor.QTextInlineObject)
///
/// Delete this object from C++ memory.
///
/// @param self QTextInlineObject*
///
void q_textinlineobject_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html)

/// q_textlayout_new constructs a new QTextLayout object.
///
QTextLayout* q_textlayout_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html)

/// q_textlayout_new2 constructs a new QTextLayout object.
///
/// @param text const char*
///
QTextLayout* q_textlayout_new2(const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html)

/// q_textlayout_new3 constructs a new QTextLayout object.
///
/// @param text const char*
/// @param font QFont*
///
QTextLayout* q_textlayout_new3(const char* text, void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html)

/// q_textlayout_new4 constructs a new QTextLayout object.
///
/// @param b QTextBlock*
///
QTextLayout* q_textlayout_new4(void* b);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html)

/// q_textlayout_new5 constructs a new QTextLayout object.
///
/// @param text const char*
/// @param font QFont*
/// @param paintdevice QPaintDevice*
///
QTextLayout* q_textlayout_new5(const char* text, void* font, void* paintdevice);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setFont)
///
/// @param self QTextLayout*
/// @param f QFont*
///
void q_textlayout_set_font(void* self, void* f);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#font)
///
/// @param self QTextLayout*
///
QFont* q_textlayout_font(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setRawFont)
///
/// @param self QTextLayout*
/// @param rawFont QRawFont*
///
void q_textlayout_set_raw_font(void* self, void* rawFont);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setText)
///
/// @param self QTextLayout*
/// @param stringVal const char*
///
void q_textlayout_set_text(void* self, const char* stringVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextLayout*
///
const char* q_textlayout_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setTextOption)
///
/// @param self QTextLayout*
/// @param option QTextOption*
///
void q_textlayout_set_text_option(void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#textOption)
///
/// @param self QTextLayout*
///
const QTextOption* q_textlayout_text_option(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setPreeditArea)
///
/// @param self QTextLayout*
/// @param position int
/// @param text const char*
///
void q_textlayout_set_preedit_area(void* self, int position, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#preeditAreaPosition)
///
/// @param self QTextLayout*
///
int32_t q_textlayout_preedit_area_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#preeditAreaText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextLayout*
///
const char* q_textlayout_preedit_area_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setFormats)
///
/// @param self QTextLayout*
/// @param overrides libqt_list /* of QTextLayout__FormatRange* */
///
void q_textlayout_set_formats(void* self, libqt_list overrides);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#formats)
///
/// @param self QTextLayout*
///
libqt_list /* of QTextLayout__FormatRange* */ q_textlayout_formats(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#clearFormats)
///
/// @param self QTextLayout*
///
void q_textlayout_clear_formats(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setCacheEnabled)
///
/// @param self QTextLayout*
/// @param enable bool
///
void q_textlayout_set_cache_enabled(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#cacheEnabled)
///
/// @param self QTextLayout*
///
bool q_textlayout_cache_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setCursorMoveStyle)
///
/// @param self QTextLayout*
/// @param style enum Qt__CursorMoveStyle
///
void q_textlayout_set_cursor_move_style(void* self, int32_t style);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#cursorMoveStyle)
///
/// @param self QTextLayout*
///
/// @return enum Qt__CursorMoveStyle
///
int32_t q_textlayout_cursor_move_style(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#beginLayout)
///
/// @param self QTextLayout*
///
void q_textlayout_begin_layout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#endLayout)
///
/// @param self QTextLayout*
///
void q_textlayout_end_layout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#clearLayout)
///
/// @param self QTextLayout*
///
void q_textlayout_clear_layout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#createLine)
///
/// @param self QTextLayout*
///
QTextLine* q_textlayout_create_line(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#lineCount)
///
/// @param self QTextLayout*
///
int32_t q_textlayout_line_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#lineAt)
///
/// @param self QTextLayout*
/// @param i int
///
QTextLine* q_textlayout_line_at(void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#lineForTextPosition)
///
/// @param self QTextLayout*
/// @param pos int
///
QTextLine* q_textlayout_line_for_text_position(void* self, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#isValidCursorPosition)
///
/// @param self QTextLayout*
/// @param pos int
///
bool q_textlayout_is_valid_cursor_position(void* self, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#nextCursorPosition)
///
/// @param self QTextLayout*
/// @param oldPos int
///
int32_t q_textlayout_next_cursor_position(void* self, int oldPos);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#previousCursorPosition)
///
/// @param self QTextLayout*
/// @param oldPos int
///
int32_t q_textlayout_previous_cursor_position(void* self, int oldPos);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#leftCursorPosition)
///
/// @param self QTextLayout*
/// @param oldPos int
///
int32_t q_textlayout_left_cursor_position(void* self, int oldPos);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#rightCursorPosition)
///
/// @param self QTextLayout*
/// @param oldPos int
///
int32_t q_textlayout_right_cursor_position(void* self, int oldPos);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#draw)
///
/// @param self QTextLayout*
/// @param p QPainter*
/// @param pos QPointF*
///
void q_textlayout_draw(void* self, void* p, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#drawCursor)
///
/// @param self QTextLayout*
/// @param p QPainter*
/// @param pos QPointF*
/// @param cursorPosition int
///
void q_textlayout_draw_cursor(void* self, void* p, void* pos, int cursorPosition);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#drawCursor)
///
/// @param self QTextLayout*
/// @param p QPainter*
/// @param pos QPointF*
/// @param cursorPosition int
/// @param width int
///
void q_textlayout_draw_cursor2(void* self, void* p, void* pos, int cursorPosition, int width);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#position)
///
/// @param self QTextLayout*
///
QPointF* q_textlayout_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setPosition)
///
/// @param self QTextLayout*
/// @param p QPointF*
///
void q_textlayout_set_position(void* self, void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#boundingRect)
///
/// @param self QTextLayout*
///
QRectF* q_textlayout_bounding_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#minimumWidth)
///
/// @param self QTextLayout*
///
double q_textlayout_minimum_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#maximumWidth)
///
/// @param self QTextLayout*
///
double q_textlayout_maximum_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#glyphRuns)
///
/// @param self QTextLayout*
/// @param from int
/// @param length int
/// @param flags flag of enum QTextLayout__GlyphRunRetrievalFlag
///
libqt_list /* of QGlyphRun* */ q_textlayout_glyph_runs(void* self, int from, int length, uint16_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#glyphRuns)
///
/// @param self QTextLayout*
///
libqt_list /* of QGlyphRun* */ q_textlayout_glyph_runs2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setFlags)
///
/// @param self QTextLayout*
/// @param flags int
///
void q_textlayout_set_flags(void* self, int flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#nextCursorPosition)
///
/// @param self QTextLayout*
/// @param oldPos int
/// @param mode enum QTextLayout__CursorMode
///
int32_t q_textlayout_next_cursor_position2(void* self, int oldPos, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#previousCursorPosition)
///
/// @param self QTextLayout*
/// @param oldPos int
/// @param mode enum QTextLayout__CursorMode
///
int32_t q_textlayout_previous_cursor_position2(void* self, int oldPos, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#draw)
///
/// @param self QTextLayout*
/// @param p QPainter*
/// @param pos QPointF*
/// @param selections libqt_list /* of QTextLayout__FormatRange* */
///
void q_textlayout_draw3(void* self, void* p, void* pos, libqt_list selections);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#draw)
///
/// @param self QTextLayout*
/// @param p QPainter*
/// @param pos QPointF*
/// @param selections libqt_list /* of QTextLayout__FormatRange* */
/// @param clip QRectF*
///
void q_textlayout_draw4(void* self, void* p, void* pos, libqt_list selections, void* clip);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#glyphRuns)
///
/// @param self QTextLayout*
/// @param from int
///
libqt_list /* of QGlyphRun* */ q_textlayout_glyph_runs1(void* self, int from);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#glyphRuns)
///
/// @param self QTextLayout*
/// @param from int
/// @param length int
///
libqt_list /* of QGlyphRun* */ q_textlayout_glyph_runs22(void* self, int from, int length);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#dtor.QTextLayout)
///
/// Delete this object from C++ memory.
///
/// @param self QTextLayout*
///
void q_textlayout_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html)

/// q_textline_new constructs a new QTextLine object.
///
/// @param other QTextLine*
///
QTextLine* q_textline_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html)

/// q_textline_new2 constructs a new QTextLine object and invalidates the source QTextLine object.
///
/// @param other QTextLine*
///
QTextLine* q_textline_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html)

/// q_textline_new3 constructs a new QTextLine object.
///
QTextLine* q_textline_new3();

/// q_textline_copy_assign shallow copies `other` into `self`.
///
/// @param self QTextLine*
/// @param other QTextLine*
///
void q_textline_copy_assign(void* self, void* other);

/// q_textline_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QTextLine*
/// @param other QTextLine*
///
void q_textline_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#isValid)
///
/// @param self QTextLine*
///
bool q_textline_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#rect)
///
/// @param self QTextLine*
///
QRectF* q_textline_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#x)
///
/// @param self QTextLine*
///
double q_textline_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#y)
///
/// @param self QTextLine*
///
double q_textline_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#width)
///
/// @param self QTextLine*
///
double q_textline_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#ascent)
///
/// @param self QTextLine*
///
double q_textline_ascent(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#descent)
///
/// @param self QTextLine*
///
double q_textline_descent(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#height)
///
/// @param self QTextLine*
///
double q_textline_height(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#leading)
///
/// @param self QTextLine*
///
double q_textline_leading(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#setLeadingIncluded)
///
/// @param self QTextLine*
/// @param included bool
///
void q_textline_set_leading_included(void* self, bool included);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#leadingIncluded)
///
/// @param self QTextLine*
///
bool q_textline_leading_included(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#naturalTextWidth)
///
/// @param self QTextLine*
///
double q_textline_natural_text_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#horizontalAdvance)
///
/// @param self QTextLine*
///
double q_textline_horizontal_advance(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#naturalTextRect)
///
/// @param self QTextLine*
///
QRectF* q_textline_natural_text_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#cursorToX)
///
/// @param self QTextLine*
/// @param cursorPos int*
///
double q_textline_cursor_to_x(void* self, int* cursorPos);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#cursorToX)
///
/// @param self QTextLine*
/// @param cursorPos int
///
double q_textline_cursor_to_x2(void* self, int cursorPos);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#xToCursor)
///
/// @param self QTextLine*
/// @param x double
///
int32_t q_textline_x_to_cursor(void* self, double x);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#setLineWidth)
///
/// @param self QTextLine*
/// @param width double
///
void q_textline_set_line_width(void* self, double width);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#setNumColumns)
///
/// @param self QTextLine*
/// @param columns int
///
void q_textline_set_num_columns(void* self, int columns);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#setNumColumns)
///
/// @param self QTextLine*
/// @param columns int
/// @param alignmentWidth double
///
void q_textline_set_num_columns2(void* self, int columns, double alignmentWidth);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#setPosition)
///
/// @param self QTextLine*
/// @param pos QPointF*
///
void q_textline_set_position(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#position)
///
/// @param self QTextLine*
///
QPointF* q_textline_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#textStart)
///
/// @param self QTextLine*
///
int32_t q_textline_text_start(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#textLength)
///
/// @param self QTextLine*
///
int32_t q_textline_text_length(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#lineNumber)
///
/// @param self QTextLine*
///
int32_t q_textline_line_number(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#draw)
///
/// @param self QTextLine*
/// @param painter QPainter*
/// @param position QPointF*
///
void q_textline_draw(void* self, void* painter, void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#glyphRuns)
///
/// @param self QTextLine*
/// @param from int
/// @param length int
/// @param flags flag of enum QTextLayout__GlyphRunRetrievalFlag
///
libqt_list /* of QGlyphRun* */ q_textline_glyph_runs(void* self, int from, int length, uint16_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#glyphRuns)
///
/// @param self QTextLine*
///
libqt_list /* of QGlyphRun* */ q_textline_glyph_runs2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#cursorToX)
///
/// @param self QTextLine*
/// @param cursorPos int*
/// @param edge enum QTextLine__Edge
///
double q_textline_cursor_to_x22(void* self, int* cursorPos, int32_t edge);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#cursorToX)
///
/// @param self QTextLine*
/// @param cursorPos int
/// @param edge enum QTextLine__Edge
///
double q_textline_cursor_to_x23(void* self, int cursorPos, int32_t edge);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#xToCursor)
///
/// @param self QTextLine*
/// @param x double
/// @param param2 enum QTextLine__CursorPosition
///
int32_t q_textline_x_to_cursor2(void* self, double x, int32_t param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#glyphRuns)
///
/// @param self QTextLine*
/// @param from int
///
libqt_list /* of QGlyphRun* */ q_textline_glyph_runs1(void* self, int from);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#glyphRuns)
///
/// @param self QTextLine*
/// @param from int
/// @param length int
///
libqt_list /* of QGlyphRun* */ q_textline_glyph_runs22(void* self, int from, int length);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#dtor.QTextLine)
///
/// Delete this object from C++ memory.
///
/// @param self QTextLine*
///
void q_textline_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout-formatrange.html)

/// q_textlayout__formatrange_new constructs a new QTextLayout::FormatRange object.
///
QTextLayout__FormatRange* q_textlayout__formatrange_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout-formatrange.html)

/// q_textlayout__formatrange_new2 constructs a new QTextLayout::FormatRange object.
///
/// @param param1 QTextLayout__FormatRange*
///
QTextLayout__FormatRange* q_textlayout__formatrange_new2(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout-formatrange.html#start-var)
///
/// @param self QTextLayout__FormatRange*
///
int32_t q_textlayout__formatrange_start(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout-formatrange.html#start-var)
///
/// @param self QTextLayout__FormatRange*
/// @param start int
///
void q_textlayout__formatrange_set_start(void* self, int start);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout-formatrange.html#length-var)
///
/// @param self QTextLayout__FormatRange*
///
int32_t q_textlayout__formatrange_length(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout-formatrange.html#length-var)
///
/// @param self QTextLayout__FormatRange*
/// @param length int
///
void q_textlayout__formatrange_set_length(void* self, int length);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout-formatrange.html#format-var)
///
/// @param self QTextLayout__FormatRange*
///
QTextCharFormat* q_textlayout__formatrange_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout-formatrange.html#format-var)
///
/// @param self QTextLayout__FormatRange*
/// @param format QTextCharFormat*
///
void q_textlayout__formatrange_set_format(void* self, void* format);

/// Delete this object from C++ memory.
///
/// @param self QTextLayout__FormatRange*
///
void q_textlayout__formatrange_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#public-types)

typedef enum {
    QTEXTLAYOUT_GLYPHRUNRETRIEVALFLAG_RETRIEVEGLYPHINDEXES = 1,
    QTEXTLAYOUT_GLYPHRUNRETRIEVALFLAG_RETRIEVEGLYPHPOSITIONS = 2,
    QTEXTLAYOUT_GLYPHRUNRETRIEVALFLAG_RETRIEVESTRINGINDEXES = 4,
    QTEXTLAYOUT_GLYPHRUNRETRIEVALFLAG_RETRIEVESTRING = 8,
    QTEXTLAYOUT_GLYPHRUNRETRIEVALFLAG_DEFAULTRETRIEVALFLAGS = 3,
    QTEXTLAYOUT_GLYPHRUNRETRIEVALFLAG_RETRIEVEALL = 65535
} QTextLayout__GlyphRunRetrievalFlag;

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#public-types)

typedef enum {
    QTEXTLAYOUT_CURSORMODE_SKIPCHARACTERS = 0,
    QTEXTLAYOUT_CURSORMODE_SKIPWORDS = 1
} QTextLayout__CursorMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#public-types)

typedef enum {
    QTEXTLINE_EDGE_LEADING = 0,
    QTEXTLINE_EDGE_TRAILING = 1
} QTextLine__Edge;

/// [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#public-types)

typedef enum {
    QTEXTLINE_CURSORPOSITION_CURSORBETWEENCHARACTERS = 0,
    QTEXTLINE_CURSORPOSITION_CURSORONCHARACTER = 1
} QTextLine__CursorPosition;

#endif
