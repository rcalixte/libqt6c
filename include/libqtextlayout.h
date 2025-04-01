#pragma once
#ifndef SRCQT6C_LIBQTEXTLAYOUT_H
#define SRCQT6C_LIBQTEXTLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqfont.h"
#include "libqglyphrun.h"
#include "libqpaintdevice.h"
#include "libqpainter.h"
#include "libqpoint.h"
#include "libqrawfont.h"
#include "libqrect.h"
#include <string.h>
#include "libqtextobject.h"
#include "libqtextformat.h"
#include "libqtextoption.h"

/// https://doc.qt.io/qt-6/qtextinlineobject.html

/// q_textinlineobject_new constructs a new QTextInlineObject object.
///
/// ``` QTextInlineObject* other ```
QTextInlineObject* q_textinlineobject_new(void* other);

/// q_textinlineobject_new2 constructs a new QTextInlineObject object and invalidates the source QTextInlineObject object.
///
/// ``` QTextInlineObject* other ```
QTextInlineObject* q_textinlineobject_new2(void* other);

/// q_textinlineobject_new3 constructs a new QTextInlineObject object.
///
///
QTextInlineObject* q_textinlineobject_new3();

/// q_textinlineobject_copy_assign shallow copies `other` into `self`.
///
/// ``` QTextInlineObject* self, QTextInlineObject* other ```
void q_textinlineobject_copy_assign(void* self, void* other);

/// q_textinlineobject_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QTextInlineObject* self, QTextInlineObject* other ```
void q_textinlineobject_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#isValid)
///
/// ``` QTextInlineObject* self ```
bool q_textinlineobject_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#rect)
///
/// ``` QTextInlineObject* self ```
QRectF* q_textinlineobject_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#width)
///
/// ``` QTextInlineObject* self ```
double q_textinlineobject_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#ascent)
///
/// ``` QTextInlineObject* self ```
double q_textinlineobject_ascent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#descent)
///
/// ``` QTextInlineObject* self ```
double q_textinlineobject_descent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#height)
///
/// ``` QTextInlineObject* self ```
double q_textinlineobject_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#textDirection)
///
/// ``` QTextInlineObject* self ```
int64_t q_textinlineobject_text_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#setWidth)
///
/// ``` QTextInlineObject* self, double w ```
void q_textinlineobject_set_width(void* self, double w);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#setAscent)
///
/// ``` QTextInlineObject* self, double a ```
void q_textinlineobject_set_ascent(void* self, double a);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#setDescent)
///
/// ``` QTextInlineObject* self, double d ```
void q_textinlineobject_set_descent(void* self, double d);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#textPosition)
///
/// ``` QTextInlineObject* self ```
int32_t q_textinlineobject_text_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#formatIndex)
///
/// ``` QTextInlineObject* self ```
int32_t q_textinlineobject_format_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#format)
///
/// ``` QTextInlineObject* self ```
QTextFormat* q_textinlineobject_format(void* self);

/// Delete this object from C++ memory.
///
/// ``` QTextInlineObject* self ```
void q_textinlineobject_delete(void* self);

/// https://doc.qt.io/qt-6/qtextlayout.html

/// q_textlayout_new constructs a new QTextLayout object.
///
///
QTextLayout* q_textlayout_new();

/// q_textlayout_new2 constructs a new QTextLayout object.
///
/// ``` const char* text ```
QTextLayout* q_textlayout_new2(const char* text);

/// q_textlayout_new3 constructs a new QTextLayout object.
///
/// ``` const char* text, QFont* font ```
QTextLayout* q_textlayout_new3(const char* text, void* font);

/// q_textlayout_new4 constructs a new QTextLayout object.
///
/// ``` QTextBlock* b ```
QTextLayout* q_textlayout_new4(void* b);

/// q_textlayout_new5 constructs a new QTextLayout object.
///
/// ``` const char* text, QFont* font, QPaintDevice* paintdevice ```
QTextLayout* q_textlayout_new5(const char* text, void* font, void* paintdevice);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setFont)
///
/// ``` QTextLayout* self, QFont* f ```
void q_textlayout_set_font(void* self, void* f);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#font)
///
/// ``` QTextLayout* self ```
QFont* q_textlayout_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setRawFont)
///
/// ``` QTextLayout* self, QRawFont* rawFont ```
void q_textlayout_set_raw_font(void* self, void* rawFont);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setText)
///
/// ``` QTextLayout* self, const char* stringVal ```
void q_textlayout_set_text(void* self, const char* stringVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#text)
///
/// ``` QTextLayout* self ```
const char* q_textlayout_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setTextOption)
///
/// ``` QTextLayout* self, QTextOption* option ```
void q_textlayout_set_text_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#textOption)
///
/// ``` QTextLayout* self ```
QTextOption* q_textlayout_text_option(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setPreeditArea)
///
/// ``` QTextLayout* self, int position, const char* text ```
void q_textlayout_set_preedit_area(void* self, int position, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#preeditAreaPosition)
///
/// ``` QTextLayout* self ```
int32_t q_textlayout_preedit_area_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#preeditAreaText)
///
/// ``` QTextLayout* self ```
const char* q_textlayout_preedit_area_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setFormats)
///
/// ``` QTextLayout* self, QTextLayout__FormatRange* overrides[] ```
void q_textlayout_set_formats(void* self, void* overrides[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#formats)
///
/// ``` QTextLayout* self ```
libqt_list /* of QTextLayout__FormatRange* */ q_textlayout_formats(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#clearFormats)
///
/// ``` QTextLayout* self ```
void q_textlayout_clear_formats(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setCacheEnabled)
///
/// ``` QTextLayout* self, bool enable ```
void q_textlayout_set_cache_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#cacheEnabled)
///
/// ``` QTextLayout* self ```
bool q_textlayout_cache_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setCursorMoveStyle)
///
/// ``` QTextLayout* self, enum Qt__CursorMoveStyle style ```
void q_textlayout_set_cursor_move_style(void* self, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#cursorMoveStyle)
///
/// ``` QTextLayout* self ```
int64_t q_textlayout_cursor_move_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#beginLayout)
///
/// ``` QTextLayout* self ```
void q_textlayout_begin_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#endLayout)
///
/// ``` QTextLayout* self ```
void q_textlayout_end_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#clearLayout)
///
/// ``` QTextLayout* self ```
void q_textlayout_clear_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#createLine)
///
/// ``` QTextLayout* self ```
QTextLine* q_textlayout_create_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#lineCount)
///
/// ``` QTextLayout* self ```
int32_t q_textlayout_line_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#lineAt)
///
/// ``` QTextLayout* self, int i ```
QTextLine* q_textlayout_line_at(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#lineForTextPosition)
///
/// ``` QTextLayout* self, int pos ```
QTextLine* q_textlayout_line_for_text_position(void* self, int pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#isValidCursorPosition)
///
/// ``` QTextLayout* self, int pos ```
bool q_textlayout_is_valid_cursor_position(void* self, int pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#nextCursorPosition)
///
/// ``` QTextLayout* self, int oldPos ```
int32_t q_textlayout_next_cursor_position(void* self, int oldPos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#previousCursorPosition)
///
/// ``` QTextLayout* self, int oldPos ```
int32_t q_textlayout_previous_cursor_position(void* self, int oldPos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#leftCursorPosition)
///
/// ``` QTextLayout* self, int oldPos ```
int32_t q_textlayout_left_cursor_position(void* self, int oldPos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#rightCursorPosition)
///
/// ``` QTextLayout* self, int oldPos ```
int32_t q_textlayout_right_cursor_position(void* self, int oldPos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#draw)
///
/// ``` QTextLayout* self, QPainter* p, QPointF* pos ```
void q_textlayout_draw(void* self, void* p, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#drawCursor)
///
/// ``` QTextLayout* self, QPainter* p, QPointF* pos, int cursorPosition ```
void q_textlayout_draw_cursor(void* self, void* p, void* pos, int cursorPosition);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#drawCursor)
///
/// ``` QTextLayout* self, QPainter* p, QPointF* pos, int cursorPosition, int width ```
void q_textlayout_draw_cursor2(void* self, void* p, void* pos, int cursorPosition, int width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#position)
///
/// ``` QTextLayout* self ```
QPointF* q_textlayout_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setPosition)
///
/// ``` QTextLayout* self, QPointF* p ```
void q_textlayout_set_position(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#boundingRect)
///
/// ``` QTextLayout* self ```
QRectF* q_textlayout_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#minimumWidth)
///
/// ``` QTextLayout* self ```
double q_textlayout_minimum_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#maximumWidth)
///
/// ``` QTextLayout* self ```
double q_textlayout_maximum_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#glyphRuns)
///
/// ``` QTextLayout* self ```
libqt_list /* of QGlyphRun* */ q_textlayout_glyph_runs(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setFlags)
///
/// ``` QTextLayout* self, int flags ```
void q_textlayout_set_flags(void* self, int flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#nextCursorPosition)
///
/// ``` QTextLayout* self, int oldPos, enum QTextLayout__CursorMode mode ```
int32_t q_textlayout_next_cursor_position2(void* self, int oldPos, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#previousCursorPosition)
///
/// ``` QTextLayout* self, int oldPos, enum QTextLayout__CursorMode mode ```
int32_t q_textlayout_previous_cursor_position2(void* self, int oldPos, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#draw)
///
/// ``` QTextLayout* self, QPainter* p, QPointF* pos, QTextLayout__FormatRange* selections[] ```
void q_textlayout_draw3(void* self, void* p, void* pos, void* selections[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#draw)
///
/// ``` QTextLayout* self, QPainter* p, QPointF* pos, QTextLayout__FormatRange* selections[], QRectF* clip ```
void q_textlayout_draw4(void* self, void* p, void* pos, void* selections[], void* clip);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#glyphRuns)
///
/// ``` QTextLayout* self, int from ```
libqt_list /* of QGlyphRun* */ q_textlayout_glyph_runs1(void* self, int from);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#glyphRuns)
///
/// ``` QTextLayout* self, int from, int length ```
libqt_list /* of QGlyphRun* */ q_textlayout_glyph_runs2(void* self, int from, int length);

/// Delete this object from C++ memory.
///
/// ``` QTextLayout* self ```
void q_textlayout_delete(void* self);

/// https://doc.qt.io/qt-6/qtextline.html

/// q_textline_new constructs a new QTextLine object.
///
/// ``` QTextLine* other ```
QTextLine* q_textline_new(void* other);

/// q_textline_new2 constructs a new QTextLine object and invalidates the source QTextLine object.
///
/// ``` QTextLine* other ```
QTextLine* q_textline_new2(void* other);

/// q_textline_new3 constructs a new QTextLine object.
///
///
QTextLine* q_textline_new3();

/// q_textline_copy_assign shallow copies `other` into `self`.
///
/// ``` QTextLine* self, QTextLine* other ```
void q_textline_copy_assign(void* self, void* other);

/// q_textline_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QTextLine* self, QTextLine* other ```
void q_textline_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#isValid)
///
/// ``` QTextLine* self ```
bool q_textline_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#rect)
///
/// ``` QTextLine* self ```
QRectF* q_textline_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#x)
///
/// ``` QTextLine* self ```
double q_textline_x(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#y)
///
/// ``` QTextLine* self ```
double q_textline_y(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#width)
///
/// ``` QTextLine* self ```
double q_textline_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#ascent)
///
/// ``` QTextLine* self ```
double q_textline_ascent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#descent)
///
/// ``` QTextLine* self ```
double q_textline_descent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#height)
///
/// ``` QTextLine* self ```
double q_textline_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#leading)
///
/// ``` QTextLine* self ```
double q_textline_leading(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#setLeadingIncluded)
///
/// ``` QTextLine* self, bool included ```
void q_textline_set_leading_included(void* self, bool included);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#leadingIncluded)
///
/// ``` QTextLine* self ```
bool q_textline_leading_included(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#naturalTextWidth)
///
/// ``` QTextLine* self ```
double q_textline_natural_text_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#horizontalAdvance)
///
/// ``` QTextLine* self ```
double q_textline_horizontal_advance(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#naturalTextRect)
///
/// ``` QTextLine* self ```
QRectF* q_textline_natural_text_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#cursorToX)
///
/// ``` QTextLine* self, int* cursorPos ```
double q_textline_cursor_to_x(void* self, int* cursorPos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#cursorToX)
///
/// ``` QTextLine* self, int cursorPos ```
double q_textline_cursor_to_x_with_cursor_pos(void* self, int cursorPos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#xToCursor)
///
/// ``` QTextLine* self, double x ```
int32_t q_textline_x_to_cursor(void* self, double x);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#setLineWidth)
///
/// ``` QTextLine* self, double width ```
void q_textline_set_line_width(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#setNumColumns)
///
/// ``` QTextLine* self, int columns ```
void q_textline_set_num_columns(void* self, int columns);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#setNumColumns)
///
/// ``` QTextLine* self, int columns, double alignmentWidth ```
void q_textline_set_num_columns2(void* self, int columns, double alignmentWidth);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#setPosition)
///
/// ``` QTextLine* self, QPointF* pos ```
void q_textline_set_position(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#position)
///
/// ``` QTextLine* self ```
QPointF* q_textline_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#textStart)
///
/// ``` QTextLine* self ```
int32_t q_textline_text_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#textLength)
///
/// ``` QTextLine* self ```
int32_t q_textline_text_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#lineNumber)
///
/// ``` QTextLine* self ```
int32_t q_textline_line_number(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#draw)
///
/// ``` QTextLine* self, QPainter* painter, QPointF* position ```
void q_textline_draw(void* self, void* painter, void* position);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#glyphRuns)
///
/// ``` QTextLine* self ```
libqt_list /* of QGlyphRun* */ q_textline_glyph_runs(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#cursorToX)
///
/// ``` QTextLine* self, int* cursorPos, enum QTextLine__Edge edge ```
double q_textline_cursor_to_x2(void* self, int* cursorPos, int64_t edge);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#cursorToX)
///
/// ``` QTextLine* self, int cursorPos, enum QTextLine__Edge edge ```
double q_textline_cursor_to_x22(void* self, int cursorPos, int64_t edge);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#xToCursor)
///
/// ``` QTextLine* self, double x, enum QTextLine__CursorPosition param2 ```
int32_t q_textline_x_to_cursor2(void* self, double x, int64_t param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#glyphRuns)
///
/// ``` QTextLine* self, int from ```
libqt_list /* of QGlyphRun* */ q_textline_glyph_runs1(void* self, int from);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#glyphRuns)
///
/// ``` QTextLine* self, int from, int length ```
libqt_list /* of QGlyphRun* */ q_textline_glyph_runs2(void* self, int from, int length);

/// Delete this object from C++ memory.
///
/// ``` QTextLine* self ```
void q_textline_delete(void* self);

/// https://doc.qt.io/qt-6/qtextlayout-formatrange.html

/// q_textlayout__formatrange_new constructs a new QTextLayout::FormatRange object.
///
/// ``` QTextLayout__FormatRange* param1 ```
QTextLayout__FormatRange* q_textlayout__formatrange_new(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout__formatrange.html#operator=)
///
/// ``` QTextLayout__FormatRange* self, QTextLayout__FormatRange* param1 ```
void q_textlayout__formatrange_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// ``` QTextLayout__FormatRange* self ```
void q_textlayout__formatrange_delete(void* self);

/// https://doc.qt.io/qt-6/qtextlayout.html#types

typedef enum {
    QTEXTLAYOUT_CURSORMODE_SKIPCHARACTERS = 0,
    QTEXTLAYOUT_CURSORMODE_SKIPWORDS = 1
} QTextLayout__CursorMode;

typedef enum {
    QTEXTLINE_EDGE_LEADING = 0,
    QTEXTLINE_EDGE_TRAILING = 1
} QTextLine__Edge;

typedef enum {
    QTEXTLINE_CURSORPOSITION_CURSORBETWEENCHARACTERS = 0,
    QTEXTLINE_CURSORPOSITION_CURSORONCHARACTER = 1
} QTextLine__CursorPosition;

#endif
