#include "libqchar.hpp"
#include "libqfont.hpp"
#include "libqpaintdevice.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqtextoption.hpp"
#include "libqfontmetrics.hpp"
#include "libqfontmetrics.h"

QFontMetrics* q_fontmetrics_new(void* param1) {
    return QFontMetrics_new((QFont*)param1);
}

QFontMetrics* q_fontmetrics_new2(void* font, void* pd) {
    return QFontMetrics_new2((QFont*)font, (QPaintDevice*)pd);
}

QFontMetrics* q_fontmetrics_new3(void* param1) {
    return QFontMetrics_new3((QFontMetrics*)param1);
}

void q_fontmetrics_operator_assign(void* self, void* param1) {
    QFontMetrics_OperatorAssign((QFontMetrics*)self, (QFontMetrics*)param1);
}

void q_fontmetrics_swap(void* self, void* other) {
    QFontMetrics_Swap((QFontMetrics*)self, (QFontMetrics*)other);
}

int32_t q_fontmetrics_ascent(void* self) {
    return QFontMetrics_Ascent((QFontMetrics*)self);
}

int32_t q_fontmetrics_cap_height(void* self) {
    return QFontMetrics_CapHeight((QFontMetrics*)self);
}

int32_t q_fontmetrics_descent(void* self) {
    return QFontMetrics_Descent((QFontMetrics*)self);
}

int32_t q_fontmetrics_height(void* self) {
    return QFontMetrics_Height((QFontMetrics*)self);
}

int32_t q_fontmetrics_leading(void* self) {
    return QFontMetrics_Leading((QFontMetrics*)self);
}

int32_t q_fontmetrics_line_spacing(void* self) {
    return QFontMetrics_LineSpacing((QFontMetrics*)self);
}

int32_t q_fontmetrics_min_left_bearing(void* self) {
    return QFontMetrics_MinLeftBearing((QFontMetrics*)self);
}

int32_t q_fontmetrics_min_right_bearing(void* self) {
    return QFontMetrics_MinRightBearing((QFontMetrics*)self);
}

int32_t q_fontmetrics_max_width(void* self) {
    return QFontMetrics_MaxWidth((QFontMetrics*)self);
}

int32_t q_fontmetrics_x_height(void* self) {
    return QFontMetrics_XHeight((QFontMetrics*)self);
}

int32_t q_fontmetrics_average_char_width(void* self) {
    return QFontMetrics_AverageCharWidth((QFontMetrics*)self);
}

bool q_fontmetrics_in_font(void* self, void* param1) {
    return QFontMetrics_InFont((QFontMetrics*)self, (QChar*)param1);
}

bool q_fontmetrics_in_font_ucs4(void* self, uint32_t ucs4) {
    return QFontMetrics_InFontUcs4((QFontMetrics*)self, ucs4);
}

int32_t q_fontmetrics_left_bearing(void* self, void* param1) {
    return QFontMetrics_LeftBearing((QFontMetrics*)self, (QChar*)param1);
}

int32_t q_fontmetrics_right_bearing(void* self, void* param1) {
    return QFontMetrics_RightBearing((QFontMetrics*)self, (QChar*)param1);
}

int32_t q_fontmetrics_horizontal_advance(void* self, const char* param1) {
    return QFontMetrics_HorizontalAdvance((QFontMetrics*)self, qstring(param1));
}

int32_t q_fontmetrics_horizontal_advance2(void* self, const char* param1, void* textOption) {
    return QFontMetrics_HorizontalAdvance2((QFontMetrics*)self, qstring(param1), (QTextOption*)textOption);
}

int32_t q_fontmetrics_horizontal_advance3(void* self, void* param1) {
    return QFontMetrics_HorizontalAdvance3((QFontMetrics*)self, (QChar*)param1);
}

QRect* q_fontmetrics_bounding_rect(void* self, void* param1) {
    return QFontMetrics_BoundingRect((QFontMetrics*)self, (QChar*)param1);
}

QRect* q_fontmetrics_bounding_rect2(void* self, const char* text) {
    return QFontMetrics_BoundingRect2((QFontMetrics*)self, qstring(text));
}

QRect* q_fontmetrics_bounding_rect3(void* self, const char* text, void* textOption) {
    return QFontMetrics_BoundingRect3((QFontMetrics*)self, qstring(text), (QTextOption*)textOption);
}

QRect* q_fontmetrics_bounding_rect4(void* self, void* r, int flags, const char* text) {
    return QFontMetrics_BoundingRect4((QFontMetrics*)self, (QRect*)r, flags, qstring(text));
}

QRect* q_fontmetrics_bounding_rect5(void* self, int x, int y, int w, int h, int flags, const char* text) {
    return QFontMetrics_BoundingRect5((QFontMetrics*)self, x, y, w, h, flags, qstring(text));
}

QSize* q_fontmetrics_size(void* self, int flags, const char* str) {
    return QFontMetrics_Size((QFontMetrics*)self, flags, qstring(str));
}

QRect* q_fontmetrics_tight_bounding_rect(void* self, const char* text) {
    return QFontMetrics_TightBoundingRect((QFontMetrics*)self, qstring(text));
}

QRect* q_fontmetrics_tight_bounding_rect2(void* self, const char* text, void* textOption) {
    return QFontMetrics_TightBoundingRect2((QFontMetrics*)self, qstring(text), (QTextOption*)textOption);
}

const char* q_fontmetrics_elided_text(void* self, const char* text, int32_t mode, int width) {
    libqt_string _str = QFontMetrics_ElidedText((QFontMetrics*)self, qstring(text), mode, width);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_fontmetrics_underline_pos(void* self) {
    return QFontMetrics_UnderlinePos((QFontMetrics*)self);
}

int32_t q_fontmetrics_overline_pos(void* self) {
    return QFontMetrics_OverlinePos((QFontMetrics*)self);
}

int32_t q_fontmetrics_strike_out_pos(void* self) {
    return QFontMetrics_StrikeOutPos((QFontMetrics*)self);
}

int32_t q_fontmetrics_line_width(void* self) {
    return QFontMetrics_LineWidth((QFontMetrics*)self);
}

double q_fontmetrics_font_dpi(void* self) {
    return QFontMetrics_FontDpi((QFontMetrics*)self);
}

bool q_fontmetrics_operator_equal(void* self, void* other) {
    return QFontMetrics_OperatorEqual((QFontMetrics*)self, (QFontMetrics*)other);
}

bool q_fontmetrics_operator_not_equal(void* self, void* other) {
    return QFontMetrics_OperatorNotEqual((QFontMetrics*)self, (QFontMetrics*)other);
}

int32_t q_fontmetrics_horizontal_advance22(void* self, const char* param1, int lenVal) {
    return QFontMetrics_HorizontalAdvance22((QFontMetrics*)self, qstring(param1), lenVal);
}

QRect* q_fontmetrics_bounding_rect42(void* self, void* r, int flags, const char* text, int tabstops) {
    return QFontMetrics_BoundingRect42((QFontMetrics*)self, (QRect*)r, flags, qstring(text), tabstops);
}

QRect* q_fontmetrics_bounding_rect52(void* self, void* r, int flags, const char* text, int tabstops, int* tabarray) {
    return QFontMetrics_BoundingRect52((QFontMetrics*)self, (QRect*)r, flags, qstring(text), tabstops, tabarray);
}

QRect* q_fontmetrics_bounding_rect7(void* self, int x, int y, int w, int h, int flags, const char* text, int tabstops) {
    return QFontMetrics_BoundingRect7((QFontMetrics*)self, x, y, w, h, flags, qstring(text), tabstops);
}

QRect* q_fontmetrics_bounding_rect8(void* self, int x, int y, int w, int h, int flags, const char* text, int tabstops, int* tabarray) {
    return QFontMetrics_BoundingRect8((QFontMetrics*)self, x, y, w, h, flags, qstring(text), tabstops, tabarray);
}

QSize* q_fontmetrics_size3(void* self, int flags, const char* str, int tabstops) {
    return QFontMetrics_Size3((QFontMetrics*)self, flags, qstring(str), tabstops);
}

QSize* q_fontmetrics_size4(void* self, int flags, const char* str, int tabstops, int* tabarray) {
    return QFontMetrics_Size4((QFontMetrics*)self, flags, qstring(str), tabstops, tabarray);
}

const char* q_fontmetrics_elided_text4(void* self, const char* text, int32_t mode, int width, int flags) {
    libqt_string _str = QFontMetrics_ElidedText4((QFontMetrics*)self, qstring(text), mode, width, flags);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontmetrics_delete(void* self) {
    QFontMetrics_Delete((QFontMetrics*)(self));
}

QFontMetricsF* q_fontmetricsf_new(void* font) {
    return QFontMetricsF_new((QFont*)font);
}

QFontMetricsF* q_fontmetricsf_new2(void* font, void* pd) {
    return QFontMetricsF_new2((QFont*)font, (QPaintDevice*)pd);
}

QFontMetricsF* q_fontmetricsf_new3(void* param1) {
    return QFontMetricsF_new3((QFontMetrics*)param1);
}

QFontMetricsF* q_fontmetricsf_new4(void* param1) {
    return QFontMetricsF_new4((QFontMetricsF*)param1);
}

void q_fontmetricsf_operator_assign(void* self, void* param1) {
    QFontMetricsF_OperatorAssign((QFontMetricsF*)self, (QFontMetricsF*)param1);
}

void q_fontmetricsf_operator_assign2(void* self, void* param1) {
    QFontMetricsF_OperatorAssign2((QFontMetricsF*)self, (QFontMetrics*)param1);
}

void q_fontmetricsf_swap(void* self, void* other) {
    QFontMetricsF_Swap((QFontMetricsF*)self, (QFontMetricsF*)other);
}

double q_fontmetricsf_ascent(void* self) {
    return QFontMetricsF_Ascent((QFontMetricsF*)self);
}

double q_fontmetricsf_cap_height(void* self) {
    return QFontMetricsF_CapHeight((QFontMetricsF*)self);
}

double q_fontmetricsf_descent(void* self) {
    return QFontMetricsF_Descent((QFontMetricsF*)self);
}

double q_fontmetricsf_height(void* self) {
    return QFontMetricsF_Height((QFontMetricsF*)self);
}

double q_fontmetricsf_leading(void* self) {
    return QFontMetricsF_Leading((QFontMetricsF*)self);
}

double q_fontmetricsf_line_spacing(void* self) {
    return QFontMetricsF_LineSpacing((QFontMetricsF*)self);
}

double q_fontmetricsf_min_left_bearing(void* self) {
    return QFontMetricsF_MinLeftBearing((QFontMetricsF*)self);
}

double q_fontmetricsf_min_right_bearing(void* self) {
    return QFontMetricsF_MinRightBearing((QFontMetricsF*)self);
}

double q_fontmetricsf_max_width(void* self) {
    return QFontMetricsF_MaxWidth((QFontMetricsF*)self);
}

double q_fontmetricsf_x_height(void* self) {
    return QFontMetricsF_XHeight((QFontMetricsF*)self);
}

double q_fontmetricsf_average_char_width(void* self) {
    return QFontMetricsF_AverageCharWidth((QFontMetricsF*)self);
}

bool q_fontmetricsf_in_font(void* self, void* param1) {
    return QFontMetricsF_InFont((QFontMetricsF*)self, (QChar*)param1);
}

bool q_fontmetricsf_in_font_ucs4(void* self, uint32_t ucs4) {
    return QFontMetricsF_InFontUcs4((QFontMetricsF*)self, ucs4);
}

double q_fontmetricsf_left_bearing(void* self, void* param1) {
    return QFontMetricsF_LeftBearing((QFontMetricsF*)self, (QChar*)param1);
}

double q_fontmetricsf_right_bearing(void* self, void* param1) {
    return QFontMetricsF_RightBearing((QFontMetricsF*)self, (QChar*)param1);
}

double q_fontmetricsf_horizontal_advance(void* self, const char* stringVal) {
    return QFontMetricsF_HorizontalAdvance((QFontMetricsF*)self, qstring(stringVal));
}

double q_fontmetricsf_horizontal_advance2(void* self, void* param1) {
    return QFontMetricsF_HorizontalAdvance2((QFontMetricsF*)self, (QChar*)param1);
}

double q_fontmetricsf_horizontal_advance3(void* self, const char* stringVal, void* textOption) {
    return QFontMetricsF_HorizontalAdvance3((QFontMetricsF*)self, qstring(stringVal), (QTextOption*)textOption);
}

QRectF* q_fontmetricsf_bounding_rect(void* self, const char* stringVal) {
    return QFontMetricsF_BoundingRect((QFontMetricsF*)self, qstring(stringVal));
}

QRectF* q_fontmetricsf_bounding_rect2(void* self, const char* text, void* textOption) {
    return QFontMetricsF_BoundingRect2((QFontMetricsF*)self, qstring(text), (QTextOption*)textOption);
}

QRectF* q_fontmetricsf_bounding_rect3(void* self, void* param1) {
    return QFontMetricsF_BoundingRect3((QFontMetricsF*)self, (QChar*)param1);
}

QRectF* q_fontmetricsf_bounding_rect4(void* self, void* r, int flags, const char* stringVal) {
    return QFontMetricsF_BoundingRect4((QFontMetricsF*)self, (QRectF*)r, flags, qstring(stringVal));
}

QSizeF* q_fontmetricsf_size(void* self, int flags, const char* str) {
    return QFontMetricsF_Size((QFontMetricsF*)self, flags, qstring(str));
}

QRectF* q_fontmetricsf_tight_bounding_rect(void* self, const char* text) {
    return QFontMetricsF_TightBoundingRect((QFontMetricsF*)self, qstring(text));
}

QRectF* q_fontmetricsf_tight_bounding_rect2(void* self, const char* text, void* textOption) {
    return QFontMetricsF_TightBoundingRect2((QFontMetricsF*)self, qstring(text), (QTextOption*)textOption);
}

const char* q_fontmetricsf_elided_text(void* self, const char* text, int32_t mode, double width) {
    libqt_string _str = QFontMetricsF_ElidedText((QFontMetricsF*)self, qstring(text), mode, width);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

double q_fontmetricsf_underline_pos(void* self) {
    return QFontMetricsF_UnderlinePos((QFontMetricsF*)self);
}

double q_fontmetricsf_overline_pos(void* self) {
    return QFontMetricsF_OverlinePos((QFontMetricsF*)self);
}

double q_fontmetricsf_strike_out_pos(void* self) {
    return QFontMetricsF_StrikeOutPos((QFontMetricsF*)self);
}

double q_fontmetricsf_line_width(void* self) {
    return QFontMetricsF_LineWidth((QFontMetricsF*)self);
}

double q_fontmetricsf_font_dpi(void* self) {
    return QFontMetricsF_FontDpi((QFontMetricsF*)self);
}

bool q_fontmetricsf_operator_equal(void* self, void* other) {
    return QFontMetricsF_OperatorEqual((QFontMetricsF*)self, (QFontMetricsF*)other);
}

bool q_fontmetricsf_operator_not_equal(void* self, void* other) {
    return QFontMetricsF_OperatorNotEqual((QFontMetricsF*)self, (QFontMetricsF*)other);
}

double q_fontmetricsf_horizontal_advance22(void* self, const char* stringVal, int length) {
    return QFontMetricsF_HorizontalAdvance22((QFontMetricsF*)self, qstring(stringVal), length);
}

QRectF* q_fontmetricsf_bounding_rect42(void* self, void* r, int flags, const char* stringVal, int tabstops) {
    return QFontMetricsF_BoundingRect42((QFontMetricsF*)self, (QRectF*)r, flags, qstring(stringVal), tabstops);
}

QRectF* q_fontmetricsf_bounding_rect5(void* self, void* r, int flags, const char* stringVal, int tabstops, int* tabarray) {
    return QFontMetricsF_BoundingRect5((QFontMetricsF*)self, (QRectF*)r, flags, qstring(stringVal), tabstops, tabarray);
}

QSizeF* q_fontmetricsf_size3(void* self, int flags, const char* str, int tabstops) {
    return QFontMetricsF_Size3((QFontMetricsF*)self, flags, qstring(str), tabstops);
}

QSizeF* q_fontmetricsf_size4(void* self, int flags, const char* str, int tabstops, int* tabarray) {
    return QFontMetricsF_Size4((QFontMetricsF*)self, flags, qstring(str), tabstops, tabarray);
}

const char* q_fontmetricsf_elided_text4(void* self, const char* text, int32_t mode, double width, int flags) {
    libqt_string _str = QFontMetricsF_ElidedText4((QFontMetricsF*)self, qstring(text), mode, width, flags);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontmetricsf_delete(void* self) {
    QFontMetricsF_Delete((QFontMetricsF*)(self));
}
