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

QTextInlineObject* q_textinlineobject_new(void* other);
QTextInlineObject* q_textinlineobject_new2(void* other);
QTextInlineObject* q_textinlineobject_new3();
void q_textinlineobject_copy_assign(void* self, void* other);
void q_textinlineobject_move_assign(void* self, void* other);
bool q_textinlineobject_is_valid(void* self);
QRectF* q_textinlineobject_rect(void* self);
double q_textinlineobject_width(void* self);
double q_textinlineobject_ascent(void* self);
double q_textinlineobject_descent(void* self);
double q_textinlineobject_height(void* self);
int64_t q_textinlineobject_text_direction(void* self);
void q_textinlineobject_set_width(void* self, double w);
void q_textinlineobject_set_ascent(void* self, double a);
void q_textinlineobject_set_descent(void* self, double d);
int32_t q_textinlineobject_text_position(void* self);
int32_t q_textinlineobject_format_index(void* self);
QTextFormat* q_textinlineobject_format(void* self);
void q_textinlineobject_delete(void* self);

QTextLayout* q_textlayout_new();
QTextLayout* q_textlayout_new2(const char* text);
QTextLayout* q_textlayout_new3(const char* text, void* font);
QTextLayout* q_textlayout_new4(void* b);
QTextLayout* q_textlayout_new5(const char* text, void* font, void* paintdevice);
void q_textlayout_set_font(void* self, void* f);
QFont* q_textlayout_font(void* self);
void q_textlayout_set_raw_font(void* self, void* rawFont);
void q_textlayout_set_text(void* self, const char* stringVal);
const char* q_textlayout_text(void* self);
void q_textlayout_set_text_option(void* self, void* option);
QTextOption* q_textlayout_text_option(void* self);
void q_textlayout_set_preedit_area(void* self, int position, const char* text);
int32_t q_textlayout_preedit_area_position(void* self);
const char* q_textlayout_preedit_area_text(void* self);
void q_textlayout_set_formats(void* self, void* overrides[]);
libqt_list /* of QTextLayout__FormatRange* */ q_textlayout_formats(void* self);
void q_textlayout_clear_formats(void* self);
void q_textlayout_set_cache_enabled(void* self, bool enable);
bool q_textlayout_cache_enabled(void* self);
void q_textlayout_set_cursor_move_style(void* self, int64_t style);
int64_t q_textlayout_cursor_move_style(void* self);
void q_textlayout_begin_layout(void* self);
void q_textlayout_end_layout(void* self);
void q_textlayout_clear_layout(void* self);
QTextLine* q_textlayout_create_line(void* self);
int32_t q_textlayout_line_count(void* self);
QTextLine* q_textlayout_line_at(void* self, int i);
QTextLine* q_textlayout_line_for_text_position(void* self, int pos);
bool q_textlayout_is_valid_cursor_position(void* self, int pos);
int32_t q_textlayout_next_cursor_position(void* self, int oldPos);
int32_t q_textlayout_previous_cursor_position(void* self, int oldPos);
int32_t q_textlayout_left_cursor_position(void* self, int oldPos);
int32_t q_textlayout_right_cursor_position(void* self, int oldPos);
void q_textlayout_draw(void* self, void* p, void* pos);
void q_textlayout_draw_cursor(void* self, void* p, void* pos, int cursorPosition);
void q_textlayout_draw_cursor2(void* self, void* p, void* pos, int cursorPosition, int width);
QPointF* q_textlayout_position(void* self);
void q_textlayout_set_position(void* self, void* p);
QRectF* q_textlayout_bounding_rect(void* self);
double q_textlayout_minimum_width(void* self);
double q_textlayout_maximum_width(void* self);
libqt_list /* of QGlyphRun* */ q_textlayout_glyph_runs(void* self);
void q_textlayout_set_flags(void* self, int flags);
int32_t q_textlayout_next_cursor_position2(void* self, int oldPos, int64_t mode);
int32_t q_textlayout_previous_cursor_position2(void* self, int oldPos, int64_t mode);
void q_textlayout_draw3(void* self, void* p, void* pos, void* selections[]);
void q_textlayout_draw4(void* self, void* p, void* pos, void* selections[], void* clip);
libqt_list /* of QGlyphRun* */ q_textlayout_glyph_runs1(void* self, int from);
libqt_list /* of QGlyphRun* */ q_textlayout_glyph_runs2(void* self, int from, int length);
void q_textlayout_delete(void* self);

QTextLine* q_textline_new(void* other);
QTextLine* q_textline_new2(void* other);
QTextLine* q_textline_new3();
void q_textline_copy_assign(void* self, void* other);
void q_textline_move_assign(void* self, void* other);
bool q_textline_is_valid(void* self);
QRectF* q_textline_rect(void* self);
double q_textline_x(void* self);
double q_textline_y(void* self);
double q_textline_width(void* self);
double q_textline_ascent(void* self);
double q_textline_descent(void* self);
double q_textline_height(void* self);
double q_textline_leading(void* self);
void q_textline_set_leading_included(void* self, bool included);
bool q_textline_leading_included(void* self);
double q_textline_natural_text_width(void* self);
double q_textline_horizontal_advance(void* self);
QRectF* q_textline_natural_text_rect(void* self);
double q_textline_cursor_to_x(void* self, int* cursorPos);
double q_textline_cursor_to_x_with_cursor_pos(void* self, int cursorPos);
int32_t q_textline_x_to_cursor(void* self, double x);
void q_textline_set_line_width(void* self, double width);
void q_textline_set_num_columns(void* self, int columns);
void q_textline_set_num_columns2(void* self, int columns, double alignmentWidth);
void q_textline_set_position(void* self, void* pos);
QPointF* q_textline_position(void* self);
int32_t q_textline_text_start(void* self);
int32_t q_textline_text_length(void* self);
int32_t q_textline_line_number(void* self);
void q_textline_draw(void* self, void* painter, void* position);
libqt_list /* of QGlyphRun* */ q_textline_glyph_runs(void* self);
double q_textline_cursor_to_x2(void* self, int* cursorPos, int64_t edge);
double q_textline_cursor_to_x22(void* self, int cursorPos, int64_t edge);
int32_t q_textline_x_to_cursor2(void* self, double x, int64_t param2);
libqt_list /* of QGlyphRun* */ q_textline_glyph_runs1(void* self, int from);
libqt_list /* of QGlyphRun* */ q_textline_glyph_runs2(void* self, int from, int length);
void q_textline_delete(void* self);

QTextLayout__FormatRange* q_textlayout__formatrange_new(void* param1);
void q_textlayout__formatrange_operator_assign(void* self, void* param1);
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
