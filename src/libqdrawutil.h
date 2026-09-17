#pragma once
#ifndef LIBQDRAWUTIL_H
#define LIBQDRAWUTIL_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawShadeLine)
///
/// @param p QPainter*
/// @param x1 int
/// @param y1 int
/// @param x2 int
/// @param y2 int
/// @param pal QPalette*
/// @param sunken bool
/// @param lineWidth int
/// @param midLineWidth int
///
void q_qdrawutil_h_q_draw_shade_line(void* p, int x1, int y1, int x2, int y2, void* pal, bool sunken, int lineWidth, int midLineWidth);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawShadeLine)
///
/// @param p QPainter*
/// @param p1 QPoint*
/// @param p2 QPoint*
/// @param pal QPalette*
/// @param sunken bool
/// @param lineWidth int
/// @param midLineWidth int
///
void q_qdrawutil_h_q_draw_shade_line2(void* p, void* p1, void* p2, void* pal, bool sunken, int lineWidth, int midLineWidth);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawShadeRect)
///
/// @param p QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param pal QPalette*
/// @param sunken bool
/// @param lineWidth int
/// @param midLineWidth int
/// @param fill QBrush*
///
void q_qdrawutil_h_q_draw_shade_rect(void* p, int x, int y, int w, int h, void* pal, bool sunken, int lineWidth, int midLineWidth, void* fill);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawShadeRect)
///
/// @param p QPainter*
/// @param r QRect*
/// @param pal QPalette*
/// @param sunken bool
/// @param lineWidth int
/// @param midLineWidth int
/// @param fill QBrush*
///
void q_qdrawutil_h_q_draw_shade_rect2(void* p, void* r, void* pal, bool sunken, int lineWidth, int midLineWidth, void* fill);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawShadePanel)
///
/// @param p QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param pal QPalette*
/// @param sunken bool
/// @param lineWidth int
/// @param fill QBrush*
///
void q_qdrawutil_h_q_draw_shade_panel(void* p, int x, int y, int w, int h, void* pal, bool sunken, int lineWidth, void* fill);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawShadePanel)
///
/// @param p QPainter*
/// @param r QRect*
/// @param pal QPalette*
/// @param sunken bool
/// @param lineWidth int
/// @param fill QBrush*
///
void q_qdrawutil_h_q_draw_shade_panel2(void* p, void* r, void* pal, bool sunken, int lineWidth, void* fill);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawWinButton)
///
/// @param p QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param pal QPalette*
/// @param sunken bool
/// @param fill QBrush*
///
void q_qdrawutil_h_q_draw_win_button(void* p, int x, int y, int w, int h, void* pal, bool sunken, void* fill);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawWinButton)
///
/// @param p QPainter*
/// @param r QRect*
/// @param pal QPalette*
/// @param sunken bool
/// @param fill QBrush*
///
void q_qdrawutil_h_q_draw_win_button2(void* p, void* r, void* pal, bool sunken, void* fill);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawWinPanel)
///
/// @param p QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param pal QPalette*
/// @param sunken bool
/// @param fill QBrush*
///
void q_qdrawutil_h_q_draw_win_panel(void* p, int x, int y, int w, int h, void* pal, bool sunken, void* fill);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawWinPanel)
///
/// @param p QPainter*
/// @param r QRect*
/// @param pal QPalette*
/// @param sunken bool
/// @param fill QBrush*
///
void q_qdrawutil_h_q_draw_win_panel2(void* p, void* r, void* pal, bool sunken, void* fill);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawPlainRect)
///
/// @param p QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param param6 QColor*
/// @param lineWidth int
/// @param fill QBrush*
///
void q_qdrawutil_h_q_draw_plain_rect(void* p, int x, int y, int w, int h, void* param6, int lineWidth, void* fill);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawPlainRect)
///
/// @param p QPainter*
/// @param r QRect*
/// @param param3 QColor*
/// @param lineWidth int
/// @param fill QBrush*
///
void q_qdrawutil_h_q_draw_plain_rect2(void* p, void* r, void* param3, int lineWidth, void* fill);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawPlainRoundedRect)
///
/// @param p QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param rx double
/// @param ry double
/// @param param8 QColor*
/// @param lineWidth int
/// @param fill QBrush*
///
void q_qdrawutil_h_q_draw_plain_rounded_rect(void* p, int x, int y, int w, int h, double rx, double ry, void* param8, int lineWidth, void* fill);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawPlainRoundedRect)
///
/// @param painter QPainter*
/// @param rect QRect*
/// @param rx double
/// @param ry double
/// @param lineColor QColor*
/// @param lineWidth int
/// @param fill QBrush*
///
void q_qdrawutil_h_q_draw_plain_rounded_rect2(void* painter, void* rect, double rx, double ry, void* lineColor, int lineWidth, void* fill);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawBorderPixmap)
///
/// @param painter QPainter*
/// @param targetRect QRect*
/// @param targetMargins QMargins*
/// @param pixmap QPixmap*
/// @param sourceRect QRect*
/// @param sourceMargins QMargins*
/// @param rules QTileRules*
/// @param hints flag of enum QDrawBorderPixmap__DrawingHint
///
void q_qdrawutil_h_q_draw_border_pixmap(void* painter, void* targetRect, void* targetMargins, void* pixmap, void* sourceRect, void* sourceMargins, void* rules, int32_t hints);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawBorderPixmap)
///
/// @param painter QPainter*
/// @param target QRect*
/// @param margins QMargins*
/// @param pixmap QPixmap*
///
void q_qdrawutil_h_q_draw_border_pixmap2(void* painter, void* target, void* margins, void* pixmap);

/// [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html)

/// q_tilerules_new constructs a new QTileRules object.
///
/// @param other QTileRules*
///
QTileRules* q_tilerules_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html)

/// q_tilerules_new2 constructs a new QTileRules object and invalidates the source QTileRules object.
///
/// @param other QTileRules*
///
QTileRules* q_tilerules_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html)

/// q_tilerules_new3 constructs a new QTileRules object.
///
/// @param horizontalRule enum Qt__TileRule
/// @param verticalRule enum Qt__TileRule
///
QTileRules* q_tilerules_new3(int32_t horizontalRule, int32_t verticalRule);

/// [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html)

/// q_tilerules_new4 constructs a new QTileRules object.
///
QTileRules* q_tilerules_new4();

/// [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html)

/// q_tilerules_new5 constructs a new QTileRules object.
///
/// @param param1 QTileRules*
///
QTileRules* q_tilerules_new5(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html)

/// q_tilerules_new6 constructs a new QTileRules object.
///
/// @param rule enum Qt__TileRule
///
QTileRules* q_tilerules_new6(int32_t rule);

/// q_tilerules_copy_assign shallow copies `other` into `self`.
///
/// @param self QTileRules*
/// @param other QTileRules*
///
void q_tilerules_copy_assign(void* self, void* other);

/// q_tilerules_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QTileRules*
/// @param other QTileRules*
///
void q_tilerules_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html#horizontal-var)
///
/// @param self QTileRules*
///
/// @return enum Qt__TileRule
///
int32_t q_tilerules_horizontal(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html#horizontal-var)
///
/// @param self QTileRules*
/// @param horizontal enum Qt__TileRule
///
void q_tilerules_set_horizontal(void* self, int32_t horizontal);

/// [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html#vertical-var)
///
/// @param self QTileRules*
///
/// @return enum Qt__TileRule
///
int32_t q_tilerules_vertical(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html#vertical-var)
///
/// @param self QTileRules*
/// @param vertical enum Qt__TileRule
///
void q_tilerules_set_vertical(void* self, int32_t vertical);

/// [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html#dtor.QTileRules)
///
/// Delete this object from C++ memory.
///
/// @param self QTileRules*
///
void q_tilerules_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdrawutil.html#public-types)

typedef enum {
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUETOPLEFT = 1,
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUETOP = 2,
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUETOPRIGHT = 4,
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUELEFT = 8,
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUECENTER = 16,
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUERIGHT = 32,
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUEBOTTOMLEFT = 64,
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUEBOTTOM = 128,
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUEBOTTOMRIGHT = 256,
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUECORNERS = 325,
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUEEDGES = 170,
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUEFRAME = 495,
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUEALL = 511
} QDrawBorderPixmap__DrawingHint;

#endif
