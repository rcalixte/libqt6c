#include "libqfont.hpp"
#include "libqglyphrun.hpp"
#include "libqpaintdevice.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqrawfont.hpp"
#include "libqrect.hpp"
#include <string.h>
#include "libqtextobject.hpp"
#include "libqtextformat.hpp"
#include "libqtextoption.hpp"
#include "libqtextlayout.hpp"
#include "libqtextlayout.h"

QTextInlineObject* q_textinlineobject_new(void* other) {
    return QTextInlineObject_new((QTextInlineObject*)other);
}

QTextInlineObject* q_textinlineobject_new2(void* other) {
    return QTextInlineObject_new2((QTextInlineObject*)other);
}

QTextInlineObject* q_textinlineobject_new3() {
    return QTextInlineObject_new3();
}

void q_textinlineobject_copy_assign(void* self, void* other) {
    QTextInlineObject_CopyAssign((QTextInlineObject*)self, (QTextInlineObject*)other);
}

void q_textinlineobject_move_assign(void* self, void* other) {
    QTextInlineObject_MoveAssign((QTextInlineObject*)self, (QTextInlineObject*)other);
}

bool q_textinlineobject_is_valid(void* self) {
    return QTextInlineObject_IsValid((QTextInlineObject*)self);
}

QRectF* q_textinlineobject_rect(void* self) {
    return QTextInlineObject_Rect((QTextInlineObject*)self);
}

double q_textinlineobject_width(void* self) {
    return QTextInlineObject_Width((QTextInlineObject*)self);
}

double q_textinlineobject_ascent(void* self) {
    return QTextInlineObject_Ascent((QTextInlineObject*)self);
}

double q_textinlineobject_descent(void* self) {
    return QTextInlineObject_Descent((QTextInlineObject*)self);
}

double q_textinlineobject_height(void* self) {
    return QTextInlineObject_Height((QTextInlineObject*)self);
}

int64_t q_textinlineobject_text_direction(void* self) {
    return QTextInlineObject_TextDirection((QTextInlineObject*)self);
}

void q_textinlineobject_set_width(void* self, double w) {
    QTextInlineObject_SetWidth((QTextInlineObject*)self, w);
}

void q_textinlineobject_set_ascent(void* self, double a) {
    QTextInlineObject_SetAscent((QTextInlineObject*)self, a);
}

void q_textinlineobject_set_descent(void* self, double d) {
    QTextInlineObject_SetDescent((QTextInlineObject*)self, d);
}

int32_t q_textinlineobject_text_position(void* self) {
    return QTextInlineObject_TextPosition((QTextInlineObject*)self);
}

int32_t q_textinlineobject_format_index(void* self) {
    return QTextInlineObject_FormatIndex((QTextInlineObject*)self);
}

QTextFormat* q_textinlineobject_format(void* self) {
    return QTextInlineObject_Format((QTextInlineObject*)self);
}

void q_textinlineobject_delete(void* self) {
    QTextInlineObject_Delete((QTextInlineObject*)(self));
}

QTextLayout* q_textlayout_new() {
    return QTextLayout_new();
}

QTextLayout* q_textlayout_new2(const char* text) {
    return QTextLayout_new2(qstring(text));
}

QTextLayout* q_textlayout_new3(const char* text, void* font) {
    return QTextLayout_new3(qstring(text), (QFont*)font);
}

QTextLayout* q_textlayout_new4(void* b) {
    return QTextLayout_new4((QTextBlock*)b);
}

QTextLayout* q_textlayout_new5(const char* text, void* font, void* paintdevice) {
    return QTextLayout_new5(qstring(text), (QFont*)font, (QPaintDevice*)paintdevice);
}

void q_textlayout_set_font(void* self, void* f) {
    QTextLayout_SetFont((QTextLayout*)self, (QFont*)f);
}

QFont* q_textlayout_font(void* self) {
    return QTextLayout_Font((QTextLayout*)self);
}

void q_textlayout_set_raw_font(void* self, void* rawFont) {
    QTextLayout_SetRawFont((QTextLayout*)self, (QRawFont*)rawFont);
}

void q_textlayout_set_text(void* self, const char* stringVal) {
    QTextLayout_SetText((QTextLayout*)self, qstring(stringVal));
}

const char* q_textlayout_text(void* self) {
    libqt_string _str = QTextLayout_Text((QTextLayout*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textlayout_set_text_option(void* self, void* option) {
    QTextLayout_SetTextOption((QTextLayout*)self, (QTextOption*)option);
}

const QTextOption* q_textlayout_text_option(void* self) {
    return QTextLayout_TextOption((QTextLayout*)self);
}

void q_textlayout_set_preedit_area(void* self, int position, const char* text) {
    QTextLayout_SetPreeditArea((QTextLayout*)self, position, qstring(text));
}

int32_t q_textlayout_preedit_area_position(void* self) {
    return QTextLayout_PreeditAreaPosition((QTextLayout*)self);
}

const char* q_textlayout_preedit_area_text(void* self) {
    libqt_string _str = QTextLayout_PreeditAreaText((QTextLayout*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textlayout_set_formats(void* self, libqt_list overrides) {
    QTextLayout_SetFormats((QTextLayout*)self, overrides);
}

libqt_list /* of QTextLayout__FormatRange* */ q_textlayout_formats(void* self) {
    libqt_list _arr = QTextLayout_Formats((QTextLayout*)self);
    return _arr;
}

void q_textlayout_clear_formats(void* self) {
    QTextLayout_ClearFormats((QTextLayout*)self);
}

void q_textlayout_set_cache_enabled(void* self, bool enable) {
    QTextLayout_SetCacheEnabled((QTextLayout*)self, enable);
}

bool q_textlayout_cache_enabled(void* self) {
    return QTextLayout_CacheEnabled((QTextLayout*)self);
}

void q_textlayout_set_cursor_move_style(void* self, int64_t style) {
    QTextLayout_SetCursorMoveStyle((QTextLayout*)self, style);
}

int64_t q_textlayout_cursor_move_style(void* self) {
    return QTextLayout_CursorMoveStyle((QTextLayout*)self);
}

void q_textlayout_begin_layout(void* self) {
    QTextLayout_BeginLayout((QTextLayout*)self);
}

void q_textlayout_end_layout(void* self) {
    QTextLayout_EndLayout((QTextLayout*)self);
}

void q_textlayout_clear_layout(void* self) {
    QTextLayout_ClearLayout((QTextLayout*)self);
}

QTextLine* q_textlayout_create_line(void* self) {
    return QTextLayout_CreateLine((QTextLayout*)self);
}

int32_t q_textlayout_line_count(void* self) {
    return QTextLayout_LineCount((QTextLayout*)self);
}

QTextLine* q_textlayout_line_at(void* self, int i) {
    return QTextLayout_LineAt((QTextLayout*)self, i);
}

QTextLine* q_textlayout_line_for_text_position(void* self, int pos) {
    return QTextLayout_LineForTextPosition((QTextLayout*)self, pos);
}

bool q_textlayout_is_valid_cursor_position(void* self, int pos) {
    return QTextLayout_IsValidCursorPosition((QTextLayout*)self, pos);
}

int32_t q_textlayout_next_cursor_position(void* self, int oldPos) {
    return QTextLayout_NextCursorPosition((QTextLayout*)self, oldPos);
}

int32_t q_textlayout_previous_cursor_position(void* self, int oldPos) {
    return QTextLayout_PreviousCursorPosition((QTextLayout*)self, oldPos);
}

int32_t q_textlayout_left_cursor_position(void* self, int oldPos) {
    return QTextLayout_LeftCursorPosition((QTextLayout*)self, oldPos);
}

int32_t q_textlayout_right_cursor_position(void* self, int oldPos) {
    return QTextLayout_RightCursorPosition((QTextLayout*)self, oldPos);
}

void q_textlayout_draw(void* self, void* p, void* pos) {
    QTextLayout_Draw((QTextLayout*)self, (QPainter*)p, (QPointF*)pos);
}

void q_textlayout_draw_cursor(void* self, void* p, void* pos, int cursorPosition) {
    QTextLayout_DrawCursor((QTextLayout*)self, (QPainter*)p, (QPointF*)pos, cursorPosition);
}

void q_textlayout_draw_cursor2(void* self, void* p, void* pos, int cursorPosition, int width) {
    QTextLayout_DrawCursor2((QTextLayout*)self, (QPainter*)p, (QPointF*)pos, cursorPosition, width);
}

QPointF* q_textlayout_position(void* self) {
    return QTextLayout_Position((QTextLayout*)self);
}

void q_textlayout_set_position(void* self, void* p) {
    QTextLayout_SetPosition((QTextLayout*)self, (QPointF*)p);
}

QRectF* q_textlayout_bounding_rect(void* self) {
    return QTextLayout_BoundingRect((QTextLayout*)self);
}

double q_textlayout_minimum_width(void* self) {
    return QTextLayout_MinimumWidth((QTextLayout*)self);
}

double q_textlayout_maximum_width(void* self) {
    return QTextLayout_MaximumWidth((QTextLayout*)self);
}

libqt_list /* of QGlyphRun* */ q_textlayout_glyph_runs(void* self, int from, int length, int64_t flags) {
    libqt_list _arr = QTextLayout_GlyphRuns((QTextLayout*)self, from, length, flags);
    return _arr;
}

libqt_list /* of QGlyphRun* */ q_textlayout_glyph_runs2(void* self) {
    libqt_list _arr = QTextLayout_GlyphRuns2((QTextLayout*)self);
    return _arr;
}

void q_textlayout_set_flags(void* self, int flags) {
    QTextLayout_SetFlags((QTextLayout*)self, flags);
}

int32_t q_textlayout_next_cursor_position2(void* self, int oldPos, int64_t mode) {
    return QTextLayout_NextCursorPosition2((QTextLayout*)self, oldPos, mode);
}

int32_t q_textlayout_previous_cursor_position2(void* self, int oldPos, int64_t mode) {
    return QTextLayout_PreviousCursorPosition2((QTextLayout*)self, oldPos, mode);
}

void q_textlayout_draw3(void* self, void* p, void* pos, libqt_list selections) {
    QTextLayout_Draw3((QTextLayout*)self, (QPainter*)p, (QPointF*)pos, selections);
}

void q_textlayout_draw4(void* self, void* p, void* pos, libqt_list selections, void* clip) {
    QTextLayout_Draw4((QTextLayout*)self, (QPainter*)p, (QPointF*)pos, selections, (QRectF*)clip);
}

libqt_list /* of QGlyphRun* */ q_textlayout_glyph_runs1(void* self, int from) {
    libqt_list _arr = QTextLayout_GlyphRuns1((QTextLayout*)self, from);
    return _arr;
}

libqt_list /* of QGlyphRun* */ q_textlayout_glyph_runs22(void* self, int from, int length) {
    libqt_list _arr = QTextLayout_GlyphRuns22((QTextLayout*)self, from, length);
    return _arr;
}

void q_textlayout_delete(void* self) {
    QTextLayout_Delete((QTextLayout*)(self));
}

QTextLine* q_textline_new(void* other) {
    return QTextLine_new((QTextLine*)other);
}

QTextLine* q_textline_new2(void* other) {
    return QTextLine_new2((QTextLine*)other);
}

QTextLine* q_textline_new3() {
    return QTextLine_new3();
}

void q_textline_copy_assign(void* self, void* other) {
    QTextLine_CopyAssign((QTextLine*)self, (QTextLine*)other);
}

void q_textline_move_assign(void* self, void* other) {
    QTextLine_MoveAssign((QTextLine*)self, (QTextLine*)other);
}

bool q_textline_is_valid(void* self) {
    return QTextLine_IsValid((QTextLine*)self);
}

QRectF* q_textline_rect(void* self) {
    return QTextLine_Rect((QTextLine*)self);
}

double q_textline_x(void* self) {
    return QTextLine_X((QTextLine*)self);
}

double q_textline_y(void* self) {
    return QTextLine_Y((QTextLine*)self);
}

double q_textline_width(void* self) {
    return QTextLine_Width((QTextLine*)self);
}

double q_textline_ascent(void* self) {
    return QTextLine_Ascent((QTextLine*)self);
}

double q_textline_descent(void* self) {
    return QTextLine_Descent((QTextLine*)self);
}

double q_textline_height(void* self) {
    return QTextLine_Height((QTextLine*)self);
}

double q_textline_leading(void* self) {
    return QTextLine_Leading((QTextLine*)self);
}

void q_textline_set_leading_included(void* self, bool included) {
    QTextLine_SetLeadingIncluded((QTextLine*)self, included);
}

bool q_textline_leading_included(void* self) {
    return QTextLine_LeadingIncluded((QTextLine*)self);
}

double q_textline_natural_text_width(void* self) {
    return QTextLine_NaturalTextWidth((QTextLine*)self);
}

double q_textline_horizontal_advance(void* self) {
    return QTextLine_HorizontalAdvance((QTextLine*)self);
}

QRectF* q_textline_natural_text_rect(void* self) {
    return QTextLine_NaturalTextRect((QTextLine*)self);
}

double q_textline_cursor_to_x(void* self, int* cursorPos) {
    return QTextLine_CursorToX((QTextLine*)self, cursorPos);
}

double q_textline_cursor_to_x2(void* self, int cursorPos) {
    return QTextLine_CursorToX2((QTextLine*)self, cursorPos);
}

int32_t q_textline_x_to_cursor(void* self, double x) {
    return QTextLine_XToCursor((QTextLine*)self, x);
}

void q_textline_set_line_width(void* self, double width) {
    QTextLine_SetLineWidth((QTextLine*)self, width);
}

void q_textline_set_num_columns(void* self, int columns) {
    QTextLine_SetNumColumns((QTextLine*)self, columns);
}

void q_textline_set_num_columns2(void* self, int columns, double alignmentWidth) {
    QTextLine_SetNumColumns2((QTextLine*)self, columns, alignmentWidth);
}

void q_textline_set_position(void* self, void* pos) {
    QTextLine_SetPosition((QTextLine*)self, (QPointF*)pos);
}

QPointF* q_textline_position(void* self) {
    return QTextLine_Position((QTextLine*)self);
}

int32_t q_textline_text_start(void* self) {
    return QTextLine_TextStart((QTextLine*)self);
}

int32_t q_textline_text_length(void* self) {
    return QTextLine_TextLength((QTextLine*)self);
}

int32_t q_textline_line_number(void* self) {
    return QTextLine_LineNumber((QTextLine*)self);
}

void q_textline_draw(void* self, void* painter, void* position) {
    QTextLine_Draw((QTextLine*)self, (QPainter*)painter, (QPointF*)position);
}

libqt_list /* of QGlyphRun* */ q_textline_glyph_runs(void* self, int from, int length, int64_t flags) {
    libqt_list _arr = QTextLine_GlyphRuns((QTextLine*)self, from, length, flags);
    return _arr;
}

libqt_list /* of QGlyphRun* */ q_textline_glyph_runs2(void* self) {
    libqt_list _arr = QTextLine_GlyphRuns2((QTextLine*)self);
    return _arr;
}

double q_textline_cursor_to_x22(void* self, int* cursorPos, int64_t edge) {
    return QTextLine_CursorToX22((QTextLine*)self, cursorPos, edge);
}

double q_textline_cursor_to_x23(void* self, int cursorPos, int64_t edge) {
    return QTextLine_CursorToX23((QTextLine*)self, cursorPos, edge);
}

int32_t q_textline_x_to_cursor2(void* self, double x, int64_t param2) {
    return QTextLine_XToCursor2((QTextLine*)self, x, param2);
}

libqt_list /* of QGlyphRun* */ q_textline_glyph_runs1(void* self, int from) {
    libqt_list _arr = QTextLine_GlyphRuns1((QTextLine*)self, from);
    return _arr;
}

libqt_list /* of QGlyphRun* */ q_textline_glyph_runs22(void* self, int from, int length) {
    libqt_list _arr = QTextLine_GlyphRuns22((QTextLine*)self, from, length);
    return _arr;
}

void q_textline_delete(void* self) {
    QTextLine_Delete((QTextLine*)(self));
}

QTextLayout__FormatRange* q_textlayout__formatrange_new() {
    return QTextLayout__FormatRange_new();
}

void q_textlayout__formatrange_delete(void* self) {
    QTextLayout__FormatRange_Delete((QTextLayout__FormatRange*)(self));
}
