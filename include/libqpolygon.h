#pragma once
#ifndef LIBQPOLYGON_H
#define LIBQPOLYGON_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html)

/// q_polygon_new constructs a new QPolygon object.
///
QPolygon* q_polygon_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html)

/// q_polygon_new2 constructs a new QPolygon object.
///
/// @param v libqt_list of QPoint*
///
QPolygon* q_polygon_new2(libqt_list v);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html)

/// q_polygon_new3 constructs a new QPolygon object.
///
/// @param r QRect*
///
QPolygon* q_polygon_new3(const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html)

/// q_polygon_new4 constructs a new QPolygon object.
///
/// @param nPoints int
/// @param points int*
///
QPolygon* q_polygon_new4(int nPoints, int* points);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html)

/// q_polygon_new5 constructs a new QPolygon object.
///
/// @param param1 QPolygon*
///
QPolygon* q_polygon_new5(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html)

/// q_polygon_new6 constructs a new QPolygon object.
///
/// @param r QRect*
/// @param closed bool
///
QPolygon* q_polygon_new6(const void* r, bool closed);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#swap)
///
/// @param self QPolygon*
/// @param other QPolygon*
///
void q_polygon_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#operator-QVariant)
///
/// @param self const QPolygon*
///
QVariant* q_polygon_to_q_variant(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#translate)
///
/// @param self QPolygon*
/// @param dx int
/// @param dy int
///
void q_polygon_translate(void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#translate)
///
/// @param self QPolygon*
/// @param offset QPoint*
///
void q_polygon_translate2(void* self, const void* offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#translated)
///
/// @param self const QPolygon*
/// @param dx int
/// @param dy int
///
QPolygon* q_polygon_translated(const void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#translated)
///
/// @param self const QPolygon*
/// @param offset QPoint*
///
QPolygon* q_polygon_translated2(const void* self, const void* offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#boundingRect)
///
/// @param self const QPolygon*
///
QRect* q_polygon_bounding_rect(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#point)
///
/// @param self const QPolygon*
/// @param i int
/// @param x int*
/// @param y int*
///
void q_polygon_point(const void* self, int i, int* x, int* y);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#point)
///
/// @param self const QPolygon*
/// @param i int
///
QPoint* q_polygon_point2(const void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#setPoint)
///
/// @param self QPolygon*
/// @param index int
/// @param x int
/// @param y int
///
void q_polygon_set_point(void* self, int index, int x, int y);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#setPoint)
///
/// @param self QPolygon*
/// @param index int
/// @param p QPoint*
///
void q_polygon_set_point2(void* self, int index, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#setPoints)
///
/// @param self QPolygon*
/// @param nPoints int
/// @param points int*
///
void q_polygon_set_points(void* self, int nPoints, int* points);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#putPoints)
///
/// @param self QPolygon*
/// @param index int
/// @param nPoints int
/// @param points int*
///
void q_polygon_put_points(void* self, int index, int nPoints, int* points);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#putPoints)
///
/// @param self QPolygon*
/// @param index int
/// @param nPoints int
/// @param from QPolygon*
///
void q_polygon_put_points2(void* self, int index, int nPoints, const void* from);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#containsPoint)
///
/// @param self const QPolygon*
/// @param pt QPoint*
/// @param fillRule enum Qt__FillRule
///
bool q_polygon_contains_point(const void* self, const void* pt, int32_t fillRule);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#united)
///
/// @param self const QPolygon*
/// @param r QPolygon*
///
QPolygon* q_polygon_united(const void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#intersected)
///
/// @param self const QPolygon*
/// @param r QPolygon*
///
QPolygon* q_polygon_intersected(const void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#subtracted)
///
/// @param self const QPolygon*
/// @param r QPolygon*
///
QPolygon* q_polygon_subtracted(const void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#intersects)
///
/// @param self const QPolygon*
/// @param r QPolygon*
///
bool q_polygon_intersects(const void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#toPolygonF)
///
/// @param self const QPolygon*
///
QPolygonF* q_polygon_to_polygon_f(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#putPoints)
///
/// @param self QPolygon*
/// @param index int
/// @param nPoints int
/// @param from QPolygon*
/// @param fromIndex int
///
void q_polygon_put_points4(void* self, int index, int nPoints, const void* from, int fromIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygon.html#dtor.QPolygon)
///
/// Delete this object from C++ memory.
///
/// @param self QPolygon*
///
void q_polygon_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html)

/// q_polygonf_new constructs a new QPolygonF object.
///
QPolygonF* q_polygonf_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html)

/// q_polygonf_new2 constructs a new QPolygonF object.
///
/// @param v libqt_list of QPointF*
///
QPolygonF* q_polygonf_new2(libqt_list v);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html)

/// q_polygonf_new3 constructs a new QPolygonF object.
///
/// @param r QRectF*
///
QPolygonF* q_polygonf_new3(const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html)

/// q_polygonf_new4 constructs a new QPolygonF object.
///
/// @param a QPolygon*
///
QPolygonF* q_polygonf_new4(const void* a);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html)

/// q_polygonf_new5 constructs a new QPolygonF object.
///
/// @param param1 QPolygonF*
///
QPolygonF* q_polygonf_new5(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#swap)
///
/// @param self QPolygonF*
/// @param other QPolygonF*
///
void q_polygonf_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#operator-QVariant)
///
/// @param self const QPolygonF*
///
QVariant* q_polygonf_to_q_variant(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#translate)
///
/// @param self QPolygonF*
/// @param dx double
/// @param dy double
///
void q_polygonf_translate(void* self, double dx, double dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#translate)
///
/// @param self QPolygonF*
/// @param offset QPointF*
///
void q_polygonf_translate2(void* self, const void* offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#translated)
///
/// @param self const QPolygonF*
/// @param dx double
/// @param dy double
///
QPolygonF* q_polygonf_translated(const void* self, double dx, double dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#translated)
///
/// @param self const QPolygonF*
/// @param offset QPointF*
///
QPolygonF* q_polygonf_translated2(const void* self, const void* offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#toPolygon)
///
/// @param self const QPolygonF*
///
QPolygon* q_polygonf_to_polygon(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#isClosed)
///
/// @param self const QPolygonF*
///
bool q_polygonf_is_closed(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#boundingRect)
///
/// @param self const QPolygonF*
///
QRectF* q_polygonf_bounding_rect(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#containsPoint)
///
/// @param self const QPolygonF*
/// @param pt QPointF*
/// @param fillRule enum Qt__FillRule
///
bool q_polygonf_contains_point(const void* self, const void* pt, int32_t fillRule);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#united)
///
/// @param self const QPolygonF*
/// @param r QPolygonF*
///
QPolygonF* q_polygonf_united(const void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#intersected)
///
/// @param self const QPolygonF*
/// @param r QPolygonF*
///
QPolygonF* q_polygonf_intersected(const void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#subtracted)
///
/// @param self const QPolygonF*
/// @param r QPolygonF*
///
QPolygonF* q_polygonf_subtracted(const void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#intersects)
///
/// @param self const QPolygonF*
/// @param r QPolygonF*
///
bool q_polygonf_intersects(const void* self, const void* r);

/// [Upstream resources](https://doc.qt.io/qt-6/qpolygonf.html#dtor.QPolygonF)
///
/// Delete this object from C++ memory.
///
/// @param self QPolygonF*
///
void q_polygonf_delete(void* self);

#endif
