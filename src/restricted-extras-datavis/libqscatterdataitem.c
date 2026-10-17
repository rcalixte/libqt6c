#include "../libqquaternion.hpp"
#include "../libqvectornd.hpp"
#include "libqscatterdataitem.hpp"
#include "libqscatterdataitem.h"

QScatterDataItem* q_scatterdataitem_new() {
    return QScatterDataItem_New();
}

QScatterDataItem* q_scatterdataitem_new2(const void* position) {
    return QScatterDataItem_New2((QVector3D*)position);
}

QScatterDataItem* q_scatterdataitem_new3(const void* position, const void* rotation) {
    return QScatterDataItem_New3((QVector3D*)position, (QQuaternion*)rotation);
}

QScatterDataItem* q_scatterdataitem_new4(const void* other) {
    return QScatterDataItem_New4((QScatterDataItem*)other);
}

void q_scatterdataitem_operator_assign(void* self, const void* other) {
    QScatterDataItem_OperatorAssign((QScatterDataItem*)self, (QScatterDataItem*)other);
}

void q_scatterdataitem_set_position(void* self, const void* pos) {
    QScatterDataItem_SetPosition((QScatterDataItem*)self, (QVector3D*)pos);
}

QVector3D* q_scatterdataitem_position(const void* self) {
    return QScatterDataItem_Position((QScatterDataItem*)self);
}

void q_scatterdataitem_set_rotation(void* self, const void* rot) {
    QScatterDataItem_SetRotation((QScatterDataItem*)self, (QQuaternion*)rot);
}

QQuaternion* q_scatterdataitem_rotation(const void* self) {
    return QScatterDataItem_Rotation((QScatterDataItem*)self);
}

void q_scatterdataitem_set_x(void* self, float value) {
    QScatterDataItem_SetX((QScatterDataItem*)self, value);
}

void q_scatterdataitem_set_y(void* self, float value) {
    QScatterDataItem_SetY((QScatterDataItem*)self, value);
}

void q_scatterdataitem_set_z(void* self, float value) {
    QScatterDataItem_SetZ((QScatterDataItem*)self, value);
}

float q_scatterdataitem_x(const void* self) {
    return QScatterDataItem_X((QScatterDataItem*)self);
}

float q_scatterdataitem_y(const void* self) {
    return QScatterDataItem_Y((QScatterDataItem*)self);
}

float q_scatterdataitem_z(const void* self) {
    return QScatterDataItem_Z((QScatterDataItem*)self);
}

void q_scatterdataitem_delete(void* self) {
    QScatterDataItem_Delete((QScatterDataItem*)(self));
}
