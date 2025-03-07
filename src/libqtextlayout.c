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

/// https://doc.qt.io/qt-6/qtextinlineobject.html

/// q_textinlineobject_new constructs a new QTextInlineObject object.
///
/// ``` QTextInlineObject* other ```
QTextInlineObject* q_textinlineobject_new(void* other) {
    return QTextInlineObject_new((QTextInlineObject*)other);
}

/// q_textinlineobject_new2 constructs a new QTextInlineObject object and invalidates the source QTextInlineObject object.
///
/// ``` QTextInlineObject* other ```
QTextInlineObject* q_textinlineobject_new2(void* other) {
    return QTextInlineObject_new2((QTextInlineObject*)other);
}

/// q_textinlineobject_new3 constructs a new QTextInlineObject object.
///
///
QTextInlineObject* q_textinlineobject_new3() {
    return QTextInlineObject_new3();
}

/// q_textinlineobject_copy_assign shallow copies `other` into `self`.
///
/// ``` QTextInlineObject* self, QTextInlineObject* other ```
void q_textinlineobject_copy_assign(void* self, void* other) {
    QTextInlineObject_CopyAssign((QTextInlineObject*)self, (QTextInlineObject*)other);
}

/// q_textinlineobject_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QTextInlineObject* self, QTextInlineObject* other ```
void q_textinlineobject_move_assign(void* self, void* other) {
    QTextInlineObject_MoveAssign((QTextInlineObject*)self, (QTextInlineObject*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#isValid)
///
/// ``` QTextInlineObject* self ```
bool q_textinlineobject_is_valid(void* self) {
    return QTextInlineObject_IsValid((QTextInlineObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#rect)
///
/// ``` QTextInlineObject* self ```
QRectF* q_textinlineobject_rect(void* self) {
    return QTextInlineObject_Rect((QTextInlineObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#width)
///
/// ``` QTextInlineObject* self ```
double q_textinlineobject_width(void* self) {
    return QTextInlineObject_Width((QTextInlineObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#ascent)
///
/// ``` QTextInlineObject* self ```
double q_textinlineobject_ascent(void* self) {
    return QTextInlineObject_Ascent((QTextInlineObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#descent)
///
/// ``` QTextInlineObject* self ```
double q_textinlineobject_descent(void* self) {
    return QTextInlineObject_Descent((QTextInlineObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#height)
///
/// ``` QTextInlineObject* self ```
double q_textinlineobject_height(void* self) {
    return QTextInlineObject_Height((QTextInlineObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#textDirection)
///
/// ``` QTextInlineObject* self ```
int64_t q_textinlineobject_text_direction(void* self) {
    return QTextInlineObject_TextDirection((QTextInlineObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#setWidth)
///
/// ``` QTextInlineObject* self, double w ```
void q_textinlineobject_set_width(void* self, double w) {
    QTextInlineObject_SetWidth((QTextInlineObject*)self, w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#setAscent)
///
/// ``` QTextInlineObject* self, double a ```
void q_textinlineobject_set_ascent(void* self, double a) {
    QTextInlineObject_SetAscent((QTextInlineObject*)self, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#setDescent)
///
/// ``` QTextInlineObject* self, double d ```
void q_textinlineobject_set_descent(void* self, double d) {
    QTextInlineObject_SetDescent((QTextInlineObject*)self, d);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#textPosition)
///
/// ``` QTextInlineObject* self ```
int32_t q_textinlineobject_text_position(void* self) {
    return QTextInlineObject_TextPosition((QTextInlineObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#formatIndex)
///
/// ``` QTextInlineObject* self ```
int32_t q_textinlineobject_format_index(void* self) {
    return QTextInlineObject_FormatIndex((QTextInlineObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextinlineobject.html#format)
///
/// ``` QTextInlineObject* self ```
QTextFormat* q_textinlineobject_format(void* self) {
    return QTextInlineObject_Format((QTextInlineObject*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QTextInlineObject* self ```
void q_textinlineobject_delete(void* self) {
    QTextInlineObject_Delete((QTextInlineObject*)(self));
}

/// https://doc.qt.io/qt-6/qtextlayout.html

/// q_textlayout_new constructs a new QTextLayout object.
///
///
QTextLayout* q_textlayout_new() {
    return QTextLayout_new();
}

/// q_textlayout_new2 constructs a new QTextLayout object.
///
/// ``` const char* text ```
QTextLayout* q_textlayout_new2(const char* text) {
    return QTextLayout_new2(qstring(text));
}

/// q_textlayout_new3 constructs a new QTextLayout object.
///
/// ``` const char* text, QFont* font ```
QTextLayout* q_textlayout_new3(const char* text, void* font) {
    return QTextLayout_new3(qstring(text), (QFont*)font);
}

/// q_textlayout_new4 constructs a new QTextLayout object.
///
/// ``` QTextBlock* b ```
QTextLayout* q_textlayout_new4(void* b) {
    return QTextLayout_new4((QTextBlock*)b);
}

/// q_textlayout_new5 constructs a new QTextLayout object.
///
/// ``` const char* text, QFont* font, QPaintDevice* paintdevice ```
QTextLayout* q_textlayout_new5(const char* text, void* font, void* paintdevice) {
    return QTextLayout_new5(qstring(text), (QFont*)font, (QPaintDevice*)paintdevice);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setFont)
///
/// ``` QTextLayout* self, QFont* f ```
void q_textlayout_set_font(void* self, void* f) {
    QTextLayout_SetFont((QTextLayout*)self, (QFont*)f);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#font)
///
/// ``` QTextLayout* self ```
QFont* q_textlayout_font(void* self) {
    return QTextLayout_Font((QTextLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setRawFont)
///
/// ``` QTextLayout* self, QRawFont* rawFont ```
void q_textlayout_set_raw_font(void* self, void* rawFont) {
    QTextLayout_SetRawFont((QTextLayout*)self, (QRawFont*)rawFont);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setText)
///
/// ``` QTextLayout* self, const char* stringVal ```
void q_textlayout_set_text(void* self, const char* stringVal) {
    QTextLayout_SetText((QTextLayout*)self, qstring(stringVal));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#text)
///
/// ``` QTextLayout* self ```
const char* q_textlayout_text(void* self) {
    libqt_string _str = QTextLayout_Text((QTextLayout*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setTextOption)
///
/// ``` QTextLayout* self, QTextOption* option ```
void q_textlayout_set_text_option(void* self, void* option) {
    QTextLayout_SetTextOption((QTextLayout*)self, (QTextOption*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#textOption)
///
/// ``` QTextLayout* self ```
QTextOption* q_textlayout_text_option(void* self) {
    return QTextLayout_TextOption((QTextLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setPreeditArea)
///
/// ``` QTextLayout* self, int position, const char* text ```
void q_textlayout_set_preedit_area(void* self, int position, const char* text) {
    QTextLayout_SetPreeditArea((QTextLayout*)self, position, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#preeditAreaPosition)
///
/// ``` QTextLayout* self ```
int32_t q_textlayout_preedit_area_position(void* self) {
    return QTextLayout_PreeditAreaPosition((QTextLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#preeditAreaText)
///
/// ``` QTextLayout* self ```
const char* q_textlayout_preedit_area_text(void* self) {
    libqt_string _str = QTextLayout_PreeditAreaText((QTextLayout*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setFormats)
///
/// ``` QTextLayout* self, QTextLayout__FormatRange* overrides[] ```
void q_textlayout_set_formats(void* self, void* overrides[]) {
    QTextLayout__FormatRange** overrides_arr = (QTextLayout__FormatRange**)overrides;
    size_t overrides_len = 0;
    while (overrides_arr[overrides_len] != NULL) {
        overrides_len++;
    }
    libqt_list overrides_list = {
        .len = overrides_len,
        .data = {(QTextLayout__FormatRange*)overrides},
    };
    QTextLayout_SetFormats((QTextLayout*)self, overrides_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#formats)
///
/// ``` QTextLayout* self ```
libqt_list /* of QTextLayout__FormatRange* */ q_textlayout_formats(void* self) {
    libqt_list _arr = QTextLayout_Formats((QTextLayout*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#clearFormats)
///
/// ``` QTextLayout* self ```
void q_textlayout_clear_formats(void* self) {
    QTextLayout_ClearFormats((QTextLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setCacheEnabled)
///
/// ``` QTextLayout* self, bool enable ```
void q_textlayout_set_cache_enabled(void* self, bool enable) {
    QTextLayout_SetCacheEnabled((QTextLayout*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#cacheEnabled)
///
/// ``` QTextLayout* self ```
bool q_textlayout_cache_enabled(void* self) {
    return QTextLayout_CacheEnabled((QTextLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setCursorMoveStyle)
///
/// ``` QTextLayout* self, enum Qt__CursorMoveStyle style ```
void q_textlayout_set_cursor_move_style(void* self, int64_t style) {
    QTextLayout_SetCursorMoveStyle((QTextLayout*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#cursorMoveStyle)
///
/// ``` QTextLayout* self ```
int64_t q_textlayout_cursor_move_style(void* self) {
    return QTextLayout_CursorMoveStyle((QTextLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#beginLayout)
///
/// ``` QTextLayout* self ```
void q_textlayout_begin_layout(void* self) {
    QTextLayout_BeginLayout((QTextLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#endLayout)
///
/// ``` QTextLayout* self ```
void q_textlayout_end_layout(void* self) {
    QTextLayout_EndLayout((QTextLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#clearLayout)
///
/// ``` QTextLayout* self ```
void q_textlayout_clear_layout(void* self) {
    QTextLayout_ClearLayout((QTextLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#createLine)
///
/// ``` QTextLayout* self ```
QTextLine* q_textlayout_create_line(void* self) {
    return QTextLayout_CreateLine((QTextLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#lineCount)
///
/// ``` QTextLayout* self ```
int32_t q_textlayout_line_count(void* self) {
    return QTextLayout_LineCount((QTextLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#lineAt)
///
/// ``` QTextLayout* self, int i ```
QTextLine* q_textlayout_line_at(void* self, int i) {
    return QTextLayout_LineAt((QTextLayout*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#lineForTextPosition)
///
/// ``` QTextLayout* self, int pos ```
QTextLine* q_textlayout_line_for_text_position(void* self, int pos) {
    return QTextLayout_LineForTextPosition((QTextLayout*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#isValidCursorPosition)
///
/// ``` QTextLayout* self, int pos ```
bool q_textlayout_is_valid_cursor_position(void* self, int pos) {
    return QTextLayout_IsValidCursorPosition((QTextLayout*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#nextCursorPosition)
///
/// ``` QTextLayout* self, int oldPos ```
int32_t q_textlayout_next_cursor_position(void* self, int oldPos) {
    return QTextLayout_NextCursorPosition((QTextLayout*)self, oldPos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#previousCursorPosition)
///
/// ``` QTextLayout* self, int oldPos ```
int32_t q_textlayout_previous_cursor_position(void* self, int oldPos) {
    return QTextLayout_PreviousCursorPosition((QTextLayout*)self, oldPos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#leftCursorPosition)
///
/// ``` QTextLayout* self, int oldPos ```
int32_t q_textlayout_left_cursor_position(void* self, int oldPos) {
    return QTextLayout_LeftCursorPosition((QTextLayout*)self, oldPos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#rightCursorPosition)
///
/// ``` QTextLayout* self, int oldPos ```
int32_t q_textlayout_right_cursor_position(void* self, int oldPos) {
    return QTextLayout_RightCursorPosition((QTextLayout*)self, oldPos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#draw)
///
/// ``` QTextLayout* self, QPainter* p, QPointF* pos ```
void q_textlayout_draw(void* self, void* p, void* pos) {
    QTextLayout_Draw((QTextLayout*)self, (QPainter*)p, (QPointF*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#drawCursor)
///
/// ``` QTextLayout* self, QPainter* p, QPointF* pos, int cursorPosition ```
void q_textlayout_draw_cursor(void* self, void* p, void* pos, int cursorPosition) {
    QTextLayout_DrawCursor((QTextLayout*)self, (QPainter*)p, (QPointF*)pos, cursorPosition);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#drawCursor)
///
/// ``` QTextLayout* self, QPainter* p, QPointF* pos, int cursorPosition, int width ```
void q_textlayout_draw_cursor2(void* self, void* p, void* pos, int cursorPosition, int width) {
    QTextLayout_DrawCursor2((QTextLayout*)self, (QPainter*)p, (QPointF*)pos, cursorPosition, width);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#position)
///
/// ``` QTextLayout* self ```
QPointF* q_textlayout_position(void* self) {
    return QTextLayout_Position((QTextLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setPosition)
///
/// ``` QTextLayout* self, QPointF* p ```
void q_textlayout_set_position(void* self, void* p) {
    QTextLayout_SetPosition((QTextLayout*)self, (QPointF*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#boundingRect)
///
/// ``` QTextLayout* self ```
QRectF* q_textlayout_bounding_rect(void* self) {
    return QTextLayout_BoundingRect((QTextLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#minimumWidth)
///
/// ``` QTextLayout* self ```
double q_textlayout_minimum_width(void* self) {
    return QTextLayout_MinimumWidth((QTextLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#maximumWidth)
///
/// ``` QTextLayout* self ```
double q_textlayout_maximum_width(void* self) {
    return QTextLayout_MaximumWidth((QTextLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#glyphRuns)
///
/// ``` QTextLayout* self ```
libqt_list /* of QGlyphRun* */ q_textlayout_glyph_runs(void* self) {
    libqt_list _arr = QTextLayout_GlyphRuns((QTextLayout*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#setFlags)
///
/// ``` QTextLayout* self, int flags ```
void q_textlayout_set_flags(void* self, int flags) {
    QTextLayout_SetFlags((QTextLayout*)self, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#nextCursorPosition)
///
/// ``` QTextLayout* self, int oldPos, enum QTextLayout__CursorMode mode ```
int32_t q_textlayout_next_cursor_position2(void* self, int oldPos, int64_t mode) {
    return QTextLayout_NextCursorPosition2((QTextLayout*)self, oldPos, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#previousCursorPosition)
///
/// ``` QTextLayout* self, int oldPos, enum QTextLayout__CursorMode mode ```
int32_t q_textlayout_previous_cursor_position2(void* self, int oldPos, int64_t mode) {
    return QTextLayout_PreviousCursorPosition2((QTextLayout*)self, oldPos, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#draw)
///
/// ``` QTextLayout* self, QPainter* p, QPointF* pos, QTextLayout__FormatRange* selections[] ```
void q_textlayout_draw3(void* self, void* p, void* pos, void* selections[]) {
    QTextLayout__FormatRange** selections_arr = (QTextLayout__FormatRange**)selections;
    size_t selections_len = 0;
    while (selections_arr[selections_len] != NULL) {
        selections_len++;
    }
    libqt_list selections_list = {
        .len = selections_len,
        .data = {(QTextLayout__FormatRange*)selections},
    };
    QTextLayout_Draw3((QTextLayout*)self, (QPainter*)p, (QPointF*)pos, selections_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#draw)
///
/// ``` QTextLayout* self, QPainter* p, QPointF* pos, QTextLayout__FormatRange* selections[], QRectF* clip ```
void q_textlayout_draw4(void* self, void* p, void* pos, void* selections[], void* clip) {
    QTextLayout__FormatRange** selections_arr = (QTextLayout__FormatRange**)selections;
    size_t selections_len = 0;
    while (selections_arr[selections_len] != NULL) {
        selections_len++;
    }
    libqt_list selections_list = {
        .len = selections_len,
        .data = {(QTextLayout__FormatRange*)selections},
    };
    QTextLayout_Draw4((QTextLayout*)self, (QPainter*)p, (QPointF*)pos, selections_list, (QRectF*)clip);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#glyphRuns)
///
/// ``` QTextLayout* self, int from ```
libqt_list /* of QGlyphRun* */ q_textlayout_glyph_runs1(void* self, int from) {
    libqt_list _arr = QTextLayout_GlyphRuns1((QTextLayout*)self, from);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout.html#glyphRuns)
///
/// ``` QTextLayout* self, int from, int length ```
libqt_list /* of QGlyphRun* */ q_textlayout_glyph_runs2(void* self, int from, int length) {
    libqt_list _arr = QTextLayout_GlyphRuns2((QTextLayout*)self, from, length);
    return _arr;
}

/// Delete this object from C++ memory.
///
/// ``` QTextLayout* self ```
void q_textlayout_delete(void* self) {
    QTextLayout_Delete((QTextLayout*)(self));
}

/// https://doc.qt.io/qt-6/qtextline.html

/// q_textline_new constructs a new QTextLine object.
///
/// ``` QTextLine* other ```
QTextLine* q_textline_new(void* other) {
    return QTextLine_new((QTextLine*)other);
}

/// q_textline_new2 constructs a new QTextLine object and invalidates the source QTextLine object.
///
/// ``` QTextLine* other ```
QTextLine* q_textline_new2(void* other) {
    return QTextLine_new2((QTextLine*)other);
}

/// q_textline_new3 constructs a new QTextLine object.
///
///
QTextLine* q_textline_new3() {
    return QTextLine_new3();
}

/// q_textline_copy_assign shallow copies `other` into `self`.
///
/// ``` QTextLine* self, QTextLine* other ```
void q_textline_copy_assign(void* self, void* other) {
    QTextLine_CopyAssign((QTextLine*)self, (QTextLine*)other);
}

/// q_textline_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QTextLine* self, QTextLine* other ```
void q_textline_move_assign(void* self, void* other) {
    QTextLine_MoveAssign((QTextLine*)self, (QTextLine*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#isValid)
///
/// ``` QTextLine* self ```
bool q_textline_is_valid(void* self) {
    return QTextLine_IsValid((QTextLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#rect)
///
/// ``` QTextLine* self ```
QRectF* q_textline_rect(void* self) {
    return QTextLine_Rect((QTextLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#x)
///
/// ``` QTextLine* self ```
double q_textline_x(void* self) {
    return QTextLine_X((QTextLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#y)
///
/// ``` QTextLine* self ```
double q_textline_y(void* self) {
    return QTextLine_Y((QTextLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#width)
///
/// ``` QTextLine* self ```
double q_textline_width(void* self) {
    return QTextLine_Width((QTextLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#ascent)
///
/// ``` QTextLine* self ```
double q_textline_ascent(void* self) {
    return QTextLine_Ascent((QTextLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#descent)
///
/// ``` QTextLine* self ```
double q_textline_descent(void* self) {
    return QTextLine_Descent((QTextLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#height)
///
/// ``` QTextLine* self ```
double q_textline_height(void* self) {
    return QTextLine_Height((QTextLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#leading)
///
/// ``` QTextLine* self ```
double q_textline_leading(void* self) {
    return QTextLine_Leading((QTextLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#setLeadingIncluded)
///
/// ``` QTextLine* self, bool included ```
void q_textline_set_leading_included(void* self, bool included) {
    QTextLine_SetLeadingIncluded((QTextLine*)self, included);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#leadingIncluded)
///
/// ``` QTextLine* self ```
bool q_textline_leading_included(void* self) {
    return QTextLine_LeadingIncluded((QTextLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#naturalTextWidth)
///
/// ``` QTextLine* self ```
double q_textline_natural_text_width(void* self) {
    return QTextLine_NaturalTextWidth((QTextLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#horizontalAdvance)
///
/// ``` QTextLine* self ```
double q_textline_horizontal_advance(void* self) {
    return QTextLine_HorizontalAdvance((QTextLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#naturalTextRect)
///
/// ``` QTextLine* self ```
QRectF* q_textline_natural_text_rect(void* self) {
    return QTextLine_NaturalTextRect((QTextLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#cursorToX)
///
/// ``` QTextLine* self, int* cursorPos ```
double q_textline_cursor_to_x(void* self, int* cursorPos) {
    return QTextLine_CursorToX((QTextLine*)self, cursorPos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#cursorToX)
///
/// ``` QTextLine* self, int cursorPos ```
double q_textline_cursor_to_x_with_cursor_pos(void* self, int cursorPos) {
    return QTextLine_CursorToXWithCursorPos((QTextLine*)self, cursorPos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#xToCursor)
///
/// ``` QTextLine* self, double x ```
int32_t q_textline_x_to_cursor(void* self, double x) {
    return QTextLine_XToCursor((QTextLine*)self, x);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#setLineWidth)
///
/// ``` QTextLine* self, double width ```
void q_textline_set_line_width(void* self, double width) {
    QTextLine_SetLineWidth((QTextLine*)self, width);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#setNumColumns)
///
/// ``` QTextLine* self, int columns ```
void q_textline_set_num_columns(void* self, int columns) {
    QTextLine_SetNumColumns((QTextLine*)self, columns);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#setNumColumns)
///
/// ``` QTextLine* self, int columns, double alignmentWidth ```
void q_textline_set_num_columns2(void* self, int columns, double alignmentWidth) {
    QTextLine_SetNumColumns2((QTextLine*)self, columns, alignmentWidth);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#setPosition)
///
/// ``` QTextLine* self, QPointF* pos ```
void q_textline_set_position(void* self, void* pos) {
    QTextLine_SetPosition((QTextLine*)self, (QPointF*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#position)
///
/// ``` QTextLine* self ```
QPointF* q_textline_position(void* self) {
    return QTextLine_Position((QTextLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#textStart)
///
/// ``` QTextLine* self ```
int32_t q_textline_text_start(void* self) {
    return QTextLine_TextStart((QTextLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#textLength)
///
/// ``` QTextLine* self ```
int32_t q_textline_text_length(void* self) {
    return QTextLine_TextLength((QTextLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#lineNumber)
///
/// ``` QTextLine* self ```
int32_t q_textline_line_number(void* self) {
    return QTextLine_LineNumber((QTextLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#draw)
///
/// ``` QTextLine* self, QPainter* painter, QPointF* position ```
void q_textline_draw(void* self, void* painter, void* position) {
    QTextLine_Draw((QTextLine*)self, (QPainter*)painter, (QPointF*)position);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#glyphRuns)
///
/// ``` QTextLine* self ```
libqt_list /* of QGlyphRun* */ q_textline_glyph_runs(void* self) {
    libqt_list _arr = QTextLine_GlyphRuns((QTextLine*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#cursorToX)
///
/// ``` QTextLine* self, int* cursorPos, enum QTextLine__Edge edge ```
double q_textline_cursor_to_x2(void* self, int* cursorPos, int64_t edge) {
    return QTextLine_CursorToX2((QTextLine*)self, cursorPos, edge);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#cursorToX)
///
/// ``` QTextLine* self, int cursorPos, enum QTextLine__Edge edge ```
double q_textline_cursor_to_x22(void* self, int cursorPos, int64_t edge) {
    return QTextLine_CursorToX22((QTextLine*)self, cursorPos, edge);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#xToCursor)
///
/// ``` QTextLine* self, double x, enum QTextLine__CursorPosition param2 ```
int32_t q_textline_x_to_cursor2(void* self, double x, int64_t param2) {
    return QTextLine_XToCursor2((QTextLine*)self, x, param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#glyphRuns)
///
/// ``` QTextLine* self, int from ```
libqt_list /* of QGlyphRun* */ q_textline_glyph_runs1(void* self, int from) {
    libqt_list _arr = QTextLine_GlyphRuns1((QTextLine*)self, from);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextline.html#glyphRuns)
///
/// ``` QTextLine* self, int from, int length ```
libqt_list /* of QGlyphRun* */ q_textline_glyph_runs2(void* self, int from, int length) {
    libqt_list _arr = QTextLine_GlyphRuns2((QTextLine*)self, from, length);
    return _arr;
}

/// Delete this object from C++ memory.
///
/// ``` QTextLine* self ```
void q_textline_delete(void* self) {
    QTextLine_Delete((QTextLine*)(self));
}

/// https://doc.qt.io/qt-6/qtextlayout-formatrange.html

/// q_textlayout__formatrange_new constructs a new QTextLayout::FormatRange object.
///
/// ``` QTextLayout__FormatRange* param1 ```
QTextLayout__FormatRange* q_textlayout__formatrange_new(void* param1) {
    return QTextLayout__FormatRange_new((QTextLayout__FormatRange*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextlayout__formatrange.html#operator=)
///
/// ``` QTextLayout__FormatRange* self, QTextLayout__FormatRange* param1 ```
void q_textlayout__formatrange_operator_assign(void* self, void* param1) {
    QTextLayout__FormatRange_OperatorAssign((QTextLayout__FormatRange*)self, (QTextLayout__FormatRange*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QTextLayout__FormatRange* self ```
void q_textlayout__formatrange_delete(void* self) {
    QTextLayout__FormatRange_Delete((QTextLayout__FormatRange*)(self));
}