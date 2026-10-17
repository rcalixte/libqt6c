#include <QSurfaceDataItem>
#include <QVector3D>
#include <qsurfacedataitem.h>
#include "libqsurfacedataitem.hpp"
#include "libqsurfacedataitem.hxx"

QSurfaceDataItem* QSurfaceDataItem_New() {
    return new QSurfaceDataItem();
}

QSurfaceDataItem* QSurfaceDataItem_New2(const QVector3D* position) {
    return new QSurfaceDataItem(*position);
}

QSurfaceDataItem* QSurfaceDataItem_New3(const QSurfaceDataItem* other) {
    return new QSurfaceDataItem(*other);
}

void QSurfaceDataItem_OperatorAssign(QSurfaceDataItem* self, const QSurfaceDataItem* other) {
    self->operator=(*other);
}

void QSurfaceDataItem_SetPosition(QSurfaceDataItem* self, const QVector3D* pos) {
    self->setPosition(*pos);
}

QVector3D* QSurfaceDataItem_Position(const QSurfaceDataItem* self) {
    return new QVector3D(self->position());
}

void QSurfaceDataItem_SetX(QSurfaceDataItem* self, float value) {
    self->setX(static_cast<float>(value));
}

void QSurfaceDataItem_SetY(QSurfaceDataItem* self, float value) {
    self->setY(static_cast<float>(value));
}

void QSurfaceDataItem_SetZ(QSurfaceDataItem* self, float value) {
    self->setZ(static_cast<float>(value));
}

float QSurfaceDataItem_X(const QSurfaceDataItem* self) {
    return self->x();
}

float QSurfaceDataItem_Y(const QSurfaceDataItem* self) {
    return self->y();
}

float QSurfaceDataItem_Z(const QSurfaceDataItem* self) {
    return self->z();
}

void QSurfaceDataItem_Delete(QSurfaceDataItem* self) {
    delete self;
}
