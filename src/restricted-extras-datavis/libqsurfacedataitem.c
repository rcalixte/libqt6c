#include "../libqvectornd.hpp"
#include "libqsurfacedataitem.hpp"
#include "libqsurfacedataitem.h"

QSurfaceDataItem* q_surfacedataitem_new() {
    return QSurfaceDataItem_New();
}

QSurfaceDataItem* q_surfacedataitem_new2(const void* position) {
    return QSurfaceDataItem_New2((QVector3D*)position);
}

QSurfaceDataItem* q_surfacedataitem_new3(const void* other) {
    return QSurfaceDataItem_New3((QSurfaceDataItem*)other);
}

void q_surfacedataitem_operator_assign(void* self, const void* other) {
    QSurfaceDataItem_OperatorAssign((QSurfaceDataItem*)self, (QSurfaceDataItem*)other);
}

void q_surfacedataitem_set_position(void* self, const void* pos) {
    QSurfaceDataItem_SetPosition((QSurfaceDataItem*)self, (QVector3D*)pos);
}

QVector3D* q_surfacedataitem_position(const void* self) {
    return QSurfaceDataItem_Position((QSurfaceDataItem*)self);
}

void q_surfacedataitem_set_x(void* self, float value) {
    QSurfaceDataItem_SetX((QSurfaceDataItem*)self, value);
}

void q_surfacedataitem_set_y(void* self, float value) {
    QSurfaceDataItem_SetY((QSurfaceDataItem*)self, value);
}

void q_surfacedataitem_set_z(void* self, float value) {
    QSurfaceDataItem_SetZ((QSurfaceDataItem*)self, value);
}

float q_surfacedataitem_x(const void* self) {
    return QSurfaceDataItem_X((QSurfaceDataItem*)self);
}

float q_surfacedataitem_y(const void* self) {
    return QSurfaceDataItem_Y((QSurfaceDataItem*)self);
}

float q_surfacedataitem_z(const void* self) {
    return QSurfaceDataItem_Z((QSurfaceDataItem*)self);
}

void q_surfacedataitem_delete(void* self) {
    QSurfaceDataItem_Delete((QSurfaceDataItem*)(self));
}
