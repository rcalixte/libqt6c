#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqvariant.hpp"
#include "libqpolygon.hpp"
#include "libqpolygon.h"

// Also inherits unprojectable QList<QPoint>

QPolygon* q_polygon_new() {
    return QPolygon_New();
}

QPolygon* q_polygon_new2(libqt_list /* of QPoint* */ v) {
    return QPolygon_New2(v);
}

QPolygon* q_polygon_new3(void* r) {
    return QPolygon_New3((QRect*)r);
}

QPolygon* q_polygon_new4(int nPoints, int* points) {
    return QPolygon_New4(nPoints, points);
}

QPolygon* q_polygon_new5(void* param1) {
    return QPolygon_New5((QPolygon*)param1);
}

QPolygon* q_polygon_new6(void* r, bool closed) {
    return QPolygon_New6((QRect*)r, closed);
}

void q_polygon_swap(void* self, void* other) {
    QPolygon_Swap((QPolygon*)self, (QPolygon*)other);
}

QVariant* q_polygon_to_q_variant(void* self) {
    return QPolygon_ToQVariant((QPolygon*)self);
}

void q_polygon_translate(void* self, int dx, int dy) {
    QPolygon_Translate((QPolygon*)self, dx, dy);
}

void q_polygon_translate2(void* self, void* offset) {
    QPolygon_Translate2((QPolygon*)self, (QPoint*)offset);
}

QPolygon* q_polygon_translated(void* self, int dx, int dy) {
    return QPolygon_Translated((QPolygon*)self, dx, dy);
}

QPolygon* q_polygon_translated2(void* self, void* offset) {
    return QPolygon_Translated2((QPolygon*)self, (QPoint*)offset);
}

QRect* q_polygon_bounding_rect(void* self) {
    return QPolygon_BoundingRect((QPolygon*)self);
}

void q_polygon_point(void* self, int i, int* x, int* y) {
    QPolygon_Point((QPolygon*)self, i, x, y);
}

QPoint* q_polygon_point2(void* self, int i) {
    return QPolygon_Point2((QPolygon*)self, i);
}

void q_polygon_set_point(void* self, int index, int x, int y) {
    QPolygon_SetPoint((QPolygon*)self, index, x, y);
}

void q_polygon_set_point2(void* self, int index, void* p) {
    QPolygon_SetPoint2((QPolygon*)self, index, (QPoint*)p);
}

void q_polygon_set_points(void* self, int nPoints, int* points) {
    QPolygon_SetPoints((QPolygon*)self, nPoints, points);
}

void q_polygon_put_points(void* self, int index, int nPoints, int* points) {
    QPolygon_PutPoints((QPolygon*)self, index, nPoints, points);
}

void q_polygon_put_points2(void* self, int index, int nPoints, void* from) {
    QPolygon_PutPoints2((QPolygon*)self, index, nPoints, (QPolygon*)from);
}

bool q_polygon_contains_point(void* self, void* pt, int32_t fillRule) {
    return QPolygon_ContainsPoint((QPolygon*)self, (QPoint*)pt, fillRule);
}

QPolygon* q_polygon_united(void* self, void* r) {
    return QPolygon_United((QPolygon*)self, (QPolygon*)r);
}

QPolygon* q_polygon_intersected(void* self, void* r) {
    return QPolygon_Intersected((QPolygon*)self, (QPolygon*)r);
}

QPolygon* q_polygon_subtracted(void* self, void* r) {
    return QPolygon_Subtracted((QPolygon*)self, (QPolygon*)r);
}

bool q_polygon_intersects(void* self, void* r) {
    return QPolygon_Intersects((QPolygon*)self, (QPolygon*)r);
}

QPolygonF* q_polygon_to_polygon_f(void* self) {
    return QPolygon_ToPolygonF((QPolygon*)self);
}

void q_polygon_put_points4(void* self, int index, int nPoints, void* from, int fromIndex) {
    QPolygon_PutPoints4((QPolygon*)self, index, nPoints, (QPolygon*)from, fromIndex);
}

void q_polygon_delete(void* self) {
    QPolygon_Delete((QPolygon*)(self));
}

// Also inherits unprojectable QList<QPointF>

QPolygonF* q_polygonf_new() {
    return QPolygonF_New();
}

QPolygonF* q_polygonf_new2(libqt_list /* of QPointF* */ v) {
    return QPolygonF_New2(v);
}

QPolygonF* q_polygonf_new3(void* r) {
    return QPolygonF_New3((QRectF*)r);
}

QPolygonF* q_polygonf_new4(void* a) {
    return QPolygonF_New4((QPolygon*)a);
}

QPolygonF* q_polygonf_new5(void* param1) {
    return QPolygonF_New5((QPolygonF*)param1);
}

void q_polygonf_swap(void* self, void* other) {
    QPolygonF_Swap((QPolygonF*)self, (QPolygonF*)other);
}

QVariant* q_polygonf_to_q_variant(void* self) {
    return QPolygonF_ToQVariant((QPolygonF*)self);
}

void q_polygonf_translate(void* self, double dx, double dy) {
    QPolygonF_Translate((QPolygonF*)self, dx, dy);
}

void q_polygonf_translate2(void* self, void* offset) {
    QPolygonF_Translate2((QPolygonF*)self, (QPointF*)offset);
}

QPolygonF* q_polygonf_translated(void* self, double dx, double dy) {
    return QPolygonF_Translated((QPolygonF*)self, dx, dy);
}

QPolygonF* q_polygonf_translated2(void* self, void* offset) {
    return QPolygonF_Translated2((QPolygonF*)self, (QPointF*)offset);
}

QPolygon* q_polygonf_to_polygon(void* self) {
    return QPolygonF_ToPolygon((QPolygonF*)self);
}

bool q_polygonf_is_closed(void* self) {
    return QPolygonF_IsClosed((QPolygonF*)self);
}

QRectF* q_polygonf_bounding_rect(void* self) {
    return QPolygonF_BoundingRect((QPolygonF*)self);
}

bool q_polygonf_contains_point(void* self, void* pt, int32_t fillRule) {
    return QPolygonF_ContainsPoint((QPolygonF*)self, (QPointF*)pt, fillRule);
}

QPolygonF* q_polygonf_united(void* self, void* r) {
    return QPolygonF_United((QPolygonF*)self, (QPolygonF*)r);
}

QPolygonF* q_polygonf_intersected(void* self, void* r) {
    return QPolygonF_Intersected((QPolygonF*)self, (QPolygonF*)r);
}

QPolygonF* q_polygonf_subtracted(void* self, void* r) {
    return QPolygonF_Subtracted((QPolygonF*)self, (QPolygonF*)r);
}

bool q_polygonf_intersects(void* self, void* r) {
    return QPolygonF_Intersects((QPolygonF*)self, (QPolygonF*)r);
}

void q_polygonf_delete(void* self) {
    QPolygonF_Delete((QPolygonF*)(self));
}
