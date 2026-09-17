#include "libqbrush.hpp"
#include "libqcolor.hpp"
#include "libqmargins.hpp"
#include "libqpainter.hpp"
#include "libqpalette.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqdrawutil.hpp"
#include "libqdrawutil.h"

void q_qdrawutil_h_q_draw_shade_line(void* p, int x1, int y1, int x2, int y2, void* pal, bool sunken, int lineWidth, int midLineWidth) {
    qdrawutil_h_QDrawShadeLine((QPainter*)p, x1, y1, x2, y2, (QPalette*)pal, sunken, lineWidth, midLineWidth);
}

void q_qdrawutil_h_q_draw_shade_line2(void* p, void* p1, void* p2, void* pal, bool sunken, int lineWidth, int midLineWidth) {
    qdrawutil_h_QDrawShadeLine2((QPainter*)p, (QPoint*)p1, (QPoint*)p2, (QPalette*)pal, sunken, lineWidth, midLineWidth);
}

void q_qdrawutil_h_q_draw_shade_rect(void* p, int x, int y, int w, int h, void* pal, bool sunken, int lineWidth, int midLineWidth, void* fill) {
    qdrawutil_h_QDrawShadeRect((QPainter*)p, x, y, w, h, (QPalette*)pal, sunken, lineWidth, midLineWidth, (QBrush*)fill);
}

void q_qdrawutil_h_q_draw_shade_rect2(void* p, void* r, void* pal, bool sunken, int lineWidth, int midLineWidth, void* fill) {
    qdrawutil_h_QDrawShadeRect2((QPainter*)p, (QRect*)r, (QPalette*)pal, sunken, lineWidth, midLineWidth, (QBrush*)fill);
}

void q_qdrawutil_h_q_draw_shade_panel(void* p, int x, int y, int w, int h, void* pal, bool sunken, int lineWidth, void* fill) {
    qdrawutil_h_QDrawShadePanel((QPainter*)p, x, y, w, h, (QPalette*)pal, sunken, lineWidth, (QBrush*)fill);
}

void q_qdrawutil_h_q_draw_shade_panel2(void* p, void* r, void* pal, bool sunken, int lineWidth, void* fill) {
    qdrawutil_h_QDrawShadePanel2((QPainter*)p, (QRect*)r, (QPalette*)pal, sunken, lineWidth, (QBrush*)fill);
}

void q_qdrawutil_h_q_draw_win_button(void* p, int x, int y, int w, int h, void* pal, bool sunken, void* fill) {
    qdrawutil_h_QDrawWinButton((QPainter*)p, x, y, w, h, (QPalette*)pal, sunken, (QBrush*)fill);
}

void q_qdrawutil_h_q_draw_win_button2(void* p, void* r, void* pal, bool sunken, void* fill) {
    qdrawutil_h_QDrawWinButton2((QPainter*)p, (QRect*)r, (QPalette*)pal, sunken, (QBrush*)fill);
}

void q_qdrawutil_h_q_draw_win_panel(void* p, int x, int y, int w, int h, void* pal, bool sunken, void* fill) {
    qdrawutil_h_QDrawWinPanel((QPainter*)p, x, y, w, h, (QPalette*)pal, sunken, (QBrush*)fill);
}

void q_qdrawutil_h_q_draw_win_panel2(void* p, void* r, void* pal, bool sunken, void* fill) {
    qdrawutil_h_QDrawWinPanel2((QPainter*)p, (QRect*)r, (QPalette*)pal, sunken, (QBrush*)fill);
}

void q_qdrawutil_h_q_draw_plain_rect(void* p, int x, int y, int w, int h, void* param6, int lineWidth, void* fill) {
    qdrawutil_h_QDrawPlainRect((QPainter*)p, x, y, w, h, (QColor*)param6, lineWidth, (QBrush*)fill);
}

void q_qdrawutil_h_q_draw_plain_rect2(void* p, void* r, void* param3, int lineWidth, void* fill) {
    qdrawutil_h_QDrawPlainRect2((QPainter*)p, (QRect*)r, (QColor*)param3, lineWidth, (QBrush*)fill);
}

void q_qdrawutil_h_q_draw_plain_rounded_rect(void* p, int x, int y, int w, int h, double rx, double ry, void* param8, int lineWidth, void* fill) {
    qdrawutil_h_QDrawPlainRoundedRect((QPainter*)p, x, y, w, h, rx, ry, (QColor*)param8, lineWidth, (QBrush*)fill);
}

void q_qdrawutil_h_q_draw_plain_rounded_rect2(void* painter, void* rect, double rx, double ry, void* lineColor, int lineWidth, void* fill) {
    qdrawutil_h_QDrawPlainRoundedRect2((QPainter*)painter, (QRect*)rect, rx, ry, (QColor*)lineColor, lineWidth, (QBrush*)fill);
}

void q_qdrawutil_h_q_draw_border_pixmap(void* painter, void* targetRect, void* targetMargins, void* pixmap, void* sourceRect, void* sourceMargins, void* rules, int32_t hints) {
    qdrawutil_h_QDrawBorderPixmap((QPainter*)painter, (QRect*)targetRect, (QMargins*)targetMargins, (QPixmap*)pixmap, (QRect*)sourceRect, (QMargins*)sourceMargins, (QTileRules*)rules, hints);
}

void q_qdrawutil_h_q_draw_border_pixmap2(void* painter, void* target, void* margins, void* pixmap) {
    qdrawutil_h_QDrawBorderPixmap2((QPainter*)painter, (QRect*)target, (QMargins*)margins, (QPixmap*)pixmap);
}

QTileRules* q_tilerules_new(void* other) {
    return QTileRules_New((QTileRules*)other);
}

QTileRules* q_tilerules_new2(void* other) {
    return QTileRules_New2((QTileRules*)other);
}

QTileRules* q_tilerules_new3(int32_t horizontalRule, int32_t verticalRule) {
    return QTileRules_New3(horizontalRule, verticalRule);
}

QTileRules* q_tilerules_new4() {
    return QTileRules_New4();
}

QTileRules* q_tilerules_new5(void* param1) {
    return QTileRules_New5((QTileRules*)param1);
}

QTileRules* q_tilerules_new6(int32_t rule) {
    return QTileRules_New6(rule);
}

void q_tilerules_copy_assign(void* self, void* other) {
    QTileRules_CopyAssign((QTileRules*)self, (QTileRules*)other);
}

void q_tilerules_move_assign(void* self, void* other) {
    QTileRules_MoveAssign((QTileRules*)self, (QTileRules*)other);
}

int32_t q_tilerules_horizontal(void* self) {
    return QTileRules_Horizontal((QTileRules*)self);
}

void q_tilerules_set_horizontal(void* self, int32_t horizontal) {
    QTileRules_SetHorizontal((QTileRules*)self, horizontal);
}

int32_t q_tilerules_vertical(void* self) {
    return QTileRules_Vertical((QTileRules*)self);
}

void q_tilerules_set_vertical(void* self, int32_t vertical) {
    QTileRules_SetVertical((QTileRules*)self, vertical);
}

void q_tilerules_delete(void* self) {
    QTileRules_Delete((QTileRules*)(self));
}
