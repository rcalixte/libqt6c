#include "libqchar.hpp"
#include "libqfont.hpp"
#include "libqpaintdevice.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqtextoption.hpp"
#include "libqfontmetrics.hpp"
#include "libqfontmetrics.h"

/// https://doc.qt.io/qt-6/qfontmetrics.html

/// q_fontmetrics_new constructs a new QFontMetrics object.
///
/// ``` QFont* param1 ```
QFontMetrics* q_fontmetrics_new(void* param1) {
    return QFontMetrics_new((QFont*)param1);
}

/// q_fontmetrics_new2 constructs a new QFontMetrics object.
///
/// ``` QFont* font, QPaintDevice* pd ```
QFontMetrics* q_fontmetrics_new2(void* font, void* pd) {
    return QFontMetrics_new2((QFont*)font, (QPaintDevice*)pd);
}

/// q_fontmetrics_new3 constructs a new QFontMetrics object.
///
/// ``` QFontMetrics* param1 ```
QFontMetrics* q_fontmetrics_new3(void* param1) {
    return QFontMetrics_new3((QFontMetrics*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#operator=)
///
/// ``` QFontMetrics* self, QFontMetrics* param1 ```
void q_fontmetrics_operator_assign(void* self, void* param1) {
    QFontMetrics_OperatorAssign((QFontMetrics*)self, (QFontMetrics*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#swap)
///
/// ``` QFontMetrics* self, QFontMetrics* other ```
void q_fontmetrics_swap(void* self, void* other) {
    QFontMetrics_Swap((QFontMetrics*)self, (QFontMetrics*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#ascent)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_ascent(void* self) {
    return QFontMetrics_Ascent((QFontMetrics*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#capHeight)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_cap_height(void* self) {
    return QFontMetrics_CapHeight((QFontMetrics*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#descent)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_descent(void* self) {
    return QFontMetrics_Descent((QFontMetrics*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#height)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_height(void* self) {
    return QFontMetrics_Height((QFontMetrics*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#leading)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_leading(void* self) {
    return QFontMetrics_Leading((QFontMetrics*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#lineSpacing)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_line_spacing(void* self) {
    return QFontMetrics_LineSpacing((QFontMetrics*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#minLeftBearing)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_min_left_bearing(void* self) {
    return QFontMetrics_MinLeftBearing((QFontMetrics*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#minRightBearing)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_min_right_bearing(void* self) {
    return QFontMetrics_MinRightBearing((QFontMetrics*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#maxWidth)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_max_width(void* self) {
    return QFontMetrics_MaxWidth((QFontMetrics*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#xHeight)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_x_height(void* self) {
    return QFontMetrics_XHeight((QFontMetrics*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#averageCharWidth)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_average_char_width(void* self) {
    return QFontMetrics_AverageCharWidth((QFontMetrics*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#inFont)
///
/// ``` QFontMetrics* self, QChar* param1 ```
bool q_fontmetrics_in_font(void* self, void* param1) {
    return QFontMetrics_InFont((QFontMetrics*)self, (QChar*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#inFontUcs4)
///
/// ``` QFontMetrics* self, uint32_t ucs4 ```
bool q_fontmetrics_in_font_ucs4(void* self, uint32_t ucs4) {
    return QFontMetrics_InFontUcs4((QFontMetrics*)self, ucs4);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#leftBearing)
///
/// ``` QFontMetrics* self, QChar* param1 ```
int32_t q_fontmetrics_left_bearing(void* self, void* param1) {
    return QFontMetrics_LeftBearing((QFontMetrics*)self, (QChar*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#rightBearing)
///
/// ``` QFontMetrics* self, QChar* param1 ```
int32_t q_fontmetrics_right_bearing(void* self, void* param1) {
    return QFontMetrics_RightBearing((QFontMetrics*)self, (QChar*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#horizontalAdvance)
///
/// ``` QFontMetrics* self, const char* param1 ```
int32_t q_fontmetrics_horizontal_advance(void* self, const char* param1) {
    return QFontMetrics_HorizontalAdvance((QFontMetrics*)self, qstring(param1));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#horizontalAdvance)
///
/// ``` QFontMetrics* self, const char* param1, QTextOption* textOption ```
int32_t q_fontmetrics_horizontal_advance2(void* self, const char* param1, void* textOption) {
    return QFontMetrics_HorizontalAdvance2((QFontMetrics*)self, qstring(param1), (QTextOption*)textOption);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#horizontalAdvance)
///
/// ``` QFontMetrics* self, QChar* param1 ```
int32_t q_fontmetrics_horizontal_advance_with_q_char(void* self, void* param1) {
    return QFontMetrics_HorizontalAdvanceWithQChar((QFontMetrics*)self, (QChar*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// ``` QFontMetrics* self, QChar* param1 ```
QRect* q_fontmetrics_bounding_rect(void* self, void* param1) {
    return QFontMetrics_BoundingRect((QFontMetrics*)self, (QChar*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// ``` QFontMetrics* self, const char* text ```
QRect* q_fontmetrics_bounding_rect_with_text(void* self, const char* text) {
    return QFontMetrics_BoundingRectWithText((QFontMetrics*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// ``` QFontMetrics* self, const char* text, QTextOption* textOption ```
QRect* q_fontmetrics_bounding_rect2(void* self, const char* text, void* textOption) {
    return QFontMetrics_BoundingRect2((QFontMetrics*)self, qstring(text), (QTextOption*)textOption);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// ``` QFontMetrics* self, QRect* r, int flags, const char* text ```
QRect* q_fontmetrics_bounding_rect3(void* self, void* r, int flags, const char* text) {
    return QFontMetrics_BoundingRect3((QFontMetrics*)self, (QRect*)r, flags, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// ``` QFontMetrics* self, int x, int y, int w, int h, int flags, const char* text ```
QRect* q_fontmetrics_bounding_rect4(void* self, int x, int y, int w, int h, int flags, const char* text) {
    return QFontMetrics_BoundingRect4((QFontMetrics*)self, x, y, w, h, flags, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#size)
///
/// ``` QFontMetrics* self, int flags, const char* str ```
QSize* q_fontmetrics_size(void* self, int flags, const char* str) {
    return QFontMetrics_Size((QFontMetrics*)self, flags, qstring(str));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#tightBoundingRect)
///
/// ``` QFontMetrics* self, const char* text ```
QRect* q_fontmetrics_tight_bounding_rect(void* self, const char* text) {
    return QFontMetrics_TightBoundingRect((QFontMetrics*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#tightBoundingRect)
///
/// ``` QFontMetrics* self, const char* text, QTextOption* textOption ```
QRect* q_fontmetrics_tight_bounding_rect2(void* self, const char* text, void* textOption) {
    return QFontMetrics_TightBoundingRect2((QFontMetrics*)self, qstring(text), (QTextOption*)textOption);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#elidedText)
///
/// ``` QFontMetrics* self, const char* text, enum Qt__TextElideMode mode, int width ```
const char* q_fontmetrics_elided_text(void* self, const char* text, int64_t mode, int width) {
    libqt_string _str = QFontMetrics_ElidedText((QFontMetrics*)self, qstring(text), mode, width);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#underlinePos)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_underline_pos(void* self) {
    return QFontMetrics_UnderlinePos((QFontMetrics*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#overlinePos)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_overline_pos(void* self) {
    return QFontMetrics_OverlinePos((QFontMetrics*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#strikeOutPos)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_strike_out_pos(void* self) {
    return QFontMetrics_StrikeOutPos((QFontMetrics*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#lineWidth)
///
/// ``` QFontMetrics* self ```
int32_t q_fontmetrics_line_width(void* self) {
    return QFontMetrics_LineWidth((QFontMetrics*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#fontDpi)
///
/// ``` QFontMetrics* self ```
double q_fontmetrics_font_dpi(void* self) {
    return QFontMetrics_FontDpi((QFontMetrics*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#operator==)
///
/// ``` QFontMetrics* self, QFontMetrics* other ```
bool q_fontmetrics_operator_equal(void* self, void* other) {
    return QFontMetrics_OperatorEqual((QFontMetrics*)self, (QFontMetrics*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#operator!=)
///
/// ``` QFontMetrics* self, QFontMetrics* other ```
bool q_fontmetrics_operator_not_equal(void* self, void* other) {
    return QFontMetrics_OperatorNotEqual((QFontMetrics*)self, (QFontMetrics*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#horizontalAdvance)
///
/// ``` QFontMetrics* self, const char* param1, int lenVal ```
int32_t q_fontmetrics_horizontal_advance22(void* self, const char* param1, int lenVal) {
    return QFontMetrics_HorizontalAdvance22((QFontMetrics*)self, qstring(param1), lenVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// ``` QFontMetrics* self, QRect* r, int flags, const char* text, int tabstops ```
QRect* q_fontmetrics_bounding_rect42(void* self, void* r, int flags, const char* text, int tabstops) {
    return QFontMetrics_BoundingRect42((QFontMetrics*)self, (QRect*)r, flags, qstring(text), tabstops);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// ``` QFontMetrics* self, QRect* r, int flags, const char* text, int tabstops, int* tabarray ```
QRect* q_fontmetrics_bounding_rect5(void* self, void* r, int flags, const char* text, int tabstops, int* tabarray) {
    return QFontMetrics_BoundingRect5((QFontMetrics*)self, (QRect*)r, flags, qstring(text), tabstops, tabarray);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// ``` QFontMetrics* self, int x, int y, int w, int h, int flags, const char* text, int tabstops ```
QRect* q_fontmetrics_bounding_rect7(void* self, int x, int y, int w, int h, int flags, const char* text, int tabstops) {
    return QFontMetrics_BoundingRect7((QFontMetrics*)self, x, y, w, h, flags, qstring(text), tabstops);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
///
/// ``` QFontMetrics* self, int x, int y, int w, int h, int flags, const char* text, int tabstops, int* tabarray ```
QRect* q_fontmetrics_bounding_rect8(void* self, int x, int y, int w, int h, int flags, const char* text, int tabstops, int* tabarray) {
    return QFontMetrics_BoundingRect8((QFontMetrics*)self, x, y, w, h, flags, qstring(text), tabstops, tabarray);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#size)
///
/// ``` QFontMetrics* self, int flags, const char* str, int tabstops ```
QSize* q_fontmetrics_size3(void* self, int flags, const char* str, int tabstops) {
    return QFontMetrics_Size3((QFontMetrics*)self, flags, qstring(str), tabstops);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#size)
///
/// ``` QFontMetrics* self, int flags, const char* str, int tabstops, int* tabarray ```
QSize* q_fontmetrics_size4(void* self, int flags, const char* str, int tabstops, int* tabarray) {
    return QFontMetrics_Size4((QFontMetrics*)self, flags, qstring(str), tabstops, tabarray);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetrics.html#elidedText)
///
/// ``` QFontMetrics* self, const char* text, enum Qt__TextElideMode mode, int width, int flags ```
const char* q_fontmetrics_elided_text4(void* self, const char* text, int64_t mode, int width, int flags) {
    libqt_string _str = QFontMetrics_ElidedText4((QFontMetrics*)self, qstring(text), mode, width, flags);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QFontMetrics* self ```
void q_fontmetrics_delete(void* self) {
    QFontMetrics_Delete((QFontMetrics*)(self));
}

/// https://doc.qt.io/qt-6/qfontmetricsf.html

/// q_fontmetricsf_new constructs a new QFontMetricsF object.
///
/// ``` QFont* font ```
QFontMetricsF* q_fontmetricsf_new(void* font) {
    return QFontMetricsF_new((QFont*)font);
}

/// q_fontmetricsf_new2 constructs a new QFontMetricsF object.
///
/// ``` QFont* font, QPaintDevice* pd ```
QFontMetricsF* q_fontmetricsf_new2(void* font, void* pd) {
    return QFontMetricsF_new2((QFont*)font, (QPaintDevice*)pd);
}

/// q_fontmetricsf_new3 constructs a new QFontMetricsF object.
///
/// ``` QFontMetrics* param1 ```
QFontMetricsF* q_fontmetricsf_new3(void* param1) {
    return QFontMetricsF_new3((QFontMetrics*)param1);
}

/// q_fontmetricsf_new4 constructs a new QFontMetricsF object.
///
/// ``` QFontMetricsF* param1 ```
QFontMetricsF* q_fontmetricsf_new4(void* param1) {
    return QFontMetricsF_new4((QFontMetricsF*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#operator=)
///
/// ``` QFontMetricsF* self, QFontMetricsF* param1 ```
void q_fontmetricsf_operator_assign(void* self, void* param1) {
    QFontMetricsF_OperatorAssign((QFontMetricsF*)self, (QFontMetricsF*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#operator=)
///
/// ``` QFontMetricsF* self, QFontMetrics* param1 ```
void q_fontmetricsf_operator_assign_with_q_font_metrics(void* self, void* param1) {
    QFontMetricsF_OperatorAssignWithQFontMetrics((QFontMetricsF*)self, (QFontMetrics*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#swap)
///
/// ``` QFontMetricsF* self, QFontMetricsF* other ```
void q_fontmetricsf_swap(void* self, void* other) {
    QFontMetricsF_Swap((QFontMetricsF*)self, (QFontMetricsF*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#ascent)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_ascent(void* self) {
    return QFontMetricsF_Ascent((QFontMetricsF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#capHeight)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_cap_height(void* self) {
    return QFontMetricsF_CapHeight((QFontMetricsF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#descent)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_descent(void* self) {
    return QFontMetricsF_Descent((QFontMetricsF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#height)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_height(void* self) {
    return QFontMetricsF_Height((QFontMetricsF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#leading)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_leading(void* self) {
    return QFontMetricsF_Leading((QFontMetricsF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#lineSpacing)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_line_spacing(void* self) {
    return QFontMetricsF_LineSpacing((QFontMetricsF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#minLeftBearing)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_min_left_bearing(void* self) {
    return QFontMetricsF_MinLeftBearing((QFontMetricsF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#minRightBearing)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_min_right_bearing(void* self) {
    return QFontMetricsF_MinRightBearing((QFontMetricsF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#maxWidth)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_max_width(void* self) {
    return QFontMetricsF_MaxWidth((QFontMetricsF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#xHeight)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_x_height(void* self) {
    return QFontMetricsF_XHeight((QFontMetricsF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#averageCharWidth)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_average_char_width(void* self) {
    return QFontMetricsF_AverageCharWidth((QFontMetricsF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#inFont)
///
/// ``` QFontMetricsF* self, QChar* param1 ```
bool q_fontmetricsf_in_font(void* self, void* param1) {
    return QFontMetricsF_InFont((QFontMetricsF*)self, (QChar*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#inFontUcs4)
///
/// ``` QFontMetricsF* self, uint32_t ucs4 ```
bool q_fontmetricsf_in_font_ucs4(void* self, uint32_t ucs4) {
    return QFontMetricsF_InFontUcs4((QFontMetricsF*)self, ucs4);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#leftBearing)
///
/// ``` QFontMetricsF* self, QChar* param1 ```
double q_fontmetricsf_left_bearing(void* self, void* param1) {
    return QFontMetricsF_LeftBearing((QFontMetricsF*)self, (QChar*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#rightBearing)
///
/// ``` QFontMetricsF* self, QChar* param1 ```
double q_fontmetricsf_right_bearing(void* self, void* param1) {
    return QFontMetricsF_RightBearing((QFontMetricsF*)self, (QChar*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#horizontalAdvance)
///
/// ``` QFontMetricsF* self, const char* stringVal ```
double q_fontmetricsf_horizontal_advance(void* self, const char* stringVal) {
    return QFontMetricsF_HorizontalAdvance((QFontMetricsF*)self, qstring(stringVal));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#horizontalAdvance)
///
/// ``` QFontMetricsF* self, QChar* param1 ```
double q_fontmetricsf_horizontal_advance_with_q_char(void* self, void* param1) {
    return QFontMetricsF_HorizontalAdvanceWithQChar((QFontMetricsF*)self, (QChar*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#horizontalAdvance)
///
/// ``` QFontMetricsF* self, const char* stringVal, QTextOption* textOption ```
double q_fontmetricsf_horizontal_advance2(void* self, const char* stringVal, void* textOption) {
    return QFontMetricsF_HorizontalAdvance2((QFontMetricsF*)self, qstring(stringVal), (QTextOption*)textOption);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
///
/// ``` QFontMetricsF* self, const char* stringVal ```
QRectF* q_fontmetricsf_bounding_rect(void* self, const char* stringVal) {
    return QFontMetricsF_BoundingRect((QFontMetricsF*)self, qstring(stringVal));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
///
/// ``` QFontMetricsF* self, const char* text, QTextOption* textOption ```
QRectF* q_fontmetricsf_bounding_rect2(void* self, const char* text, void* textOption) {
    return QFontMetricsF_BoundingRect2((QFontMetricsF*)self, qstring(text), (QTextOption*)textOption);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
///
/// ``` QFontMetricsF* self, QChar* param1 ```
QRectF* q_fontmetricsf_bounding_rect_with_q_char(void* self, void* param1) {
    return QFontMetricsF_BoundingRectWithQChar((QFontMetricsF*)self, (QChar*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
///
/// ``` QFontMetricsF* self, QRectF* r, int flags, const char* stringVal ```
QRectF* q_fontmetricsf_bounding_rect3(void* self, void* r, int flags, const char* stringVal) {
    return QFontMetricsF_BoundingRect3((QFontMetricsF*)self, (QRectF*)r, flags, qstring(stringVal));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#size)
///
/// ``` QFontMetricsF* self, int flags, const char* str ```
QSizeF* q_fontmetricsf_size(void* self, int flags, const char* str) {
    return QFontMetricsF_Size((QFontMetricsF*)self, flags, qstring(str));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#tightBoundingRect)
///
/// ``` QFontMetricsF* self, const char* text ```
QRectF* q_fontmetricsf_tight_bounding_rect(void* self, const char* text) {
    return QFontMetricsF_TightBoundingRect((QFontMetricsF*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#tightBoundingRect)
///
/// ``` QFontMetricsF* self, const char* text, QTextOption* textOption ```
QRectF* q_fontmetricsf_tight_bounding_rect2(void* self, const char* text, void* textOption) {
    return QFontMetricsF_TightBoundingRect2((QFontMetricsF*)self, qstring(text), (QTextOption*)textOption);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#elidedText)
///
/// ``` QFontMetricsF* self, const char* text, enum Qt__TextElideMode mode, double width ```
const char* q_fontmetricsf_elided_text(void* self, const char* text, int64_t mode, double width) {
    libqt_string _str = QFontMetricsF_ElidedText((QFontMetricsF*)self, qstring(text), mode, width);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#underlinePos)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_underline_pos(void* self) {
    return QFontMetricsF_UnderlinePos((QFontMetricsF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#overlinePos)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_overline_pos(void* self) {
    return QFontMetricsF_OverlinePos((QFontMetricsF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#strikeOutPos)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_strike_out_pos(void* self) {
    return QFontMetricsF_StrikeOutPos((QFontMetricsF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#lineWidth)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_line_width(void* self) {
    return QFontMetricsF_LineWidth((QFontMetricsF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#fontDpi)
///
/// ``` QFontMetricsF* self ```
double q_fontmetricsf_font_dpi(void* self) {
    return QFontMetricsF_FontDpi((QFontMetricsF*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#operator==)
///
/// ``` QFontMetricsF* self, QFontMetricsF* other ```
bool q_fontmetricsf_operator_equal(void* self, void* other) {
    return QFontMetricsF_OperatorEqual((QFontMetricsF*)self, (QFontMetricsF*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#operator!=)
///
/// ``` QFontMetricsF* self, QFontMetricsF* other ```
bool q_fontmetricsf_operator_not_equal(void* self, void* other) {
    return QFontMetricsF_OperatorNotEqual((QFontMetricsF*)self, (QFontMetricsF*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#horizontalAdvance)
///
/// ``` QFontMetricsF* self, const char* stringVal, int length ```
double q_fontmetricsf_horizontal_advance22(void* self, const char* stringVal, int length) {
    return QFontMetricsF_HorizontalAdvance22((QFontMetricsF*)self, qstring(stringVal), length);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
///
/// ``` QFontMetricsF* self, QRectF* r, int flags, const char* stringVal, int tabstops ```
QRectF* q_fontmetricsf_bounding_rect4(void* self, void* r, int flags, const char* stringVal, int tabstops) {
    return QFontMetricsF_BoundingRect4((QFontMetricsF*)self, (QRectF*)r, flags, qstring(stringVal), tabstops);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
///
/// ``` QFontMetricsF* self, QRectF* r, int flags, const char* stringVal, int tabstops, int* tabarray ```
QRectF* q_fontmetricsf_bounding_rect5(void* self, void* r, int flags, const char* stringVal, int tabstops, int* tabarray) {
    return QFontMetricsF_BoundingRect5((QFontMetricsF*)self, (QRectF*)r, flags, qstring(stringVal), tabstops, tabarray);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#size)
///
/// ``` QFontMetricsF* self, int flags, const char* str, int tabstops ```
QSizeF* q_fontmetricsf_size3(void* self, int flags, const char* str, int tabstops) {
    return QFontMetricsF_Size3((QFontMetricsF*)self, flags, qstring(str), tabstops);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#size)
///
/// ``` QFontMetricsF* self, int flags, const char* str, int tabstops, int* tabarray ```
QSizeF* q_fontmetricsf_size4(void* self, int flags, const char* str, int tabstops, int* tabarray) {
    return QFontMetricsF_Size4((QFontMetricsF*)self, flags, qstring(str), tabstops, tabarray);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontmetricsf.html#elidedText)
///
/// ``` QFontMetricsF* self, const char* text, enum Qt__TextElideMode mode, double width, int flags ```
const char* q_fontmetricsf_elided_text4(void* self, const char* text, int64_t mode, double width, int flags) {
    libqt_string _str = QFontMetricsF_ElidedText4((QFontMetricsF*)self, qstring(text), mode, width, flags);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QFontMetricsF* self ```
void q_fontmetricsf_delete(void* self) {
    QFontMetricsF_Delete((QFontMetricsF*)(self));
}