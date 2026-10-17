#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQSCATTERDATAITEM_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQSCATTERDATAITEM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html)

/// q_scatterdataitem_new constructs a new QScatterDataItem object.
///
QScatterDataItem* q_scatterdataitem_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html)

/// q_scatterdataitem_new2 constructs a new QScatterDataItem object.
///
/// @param position QVector3D*
///
QScatterDataItem* q_scatterdataitem_new2(const void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html)

/// q_scatterdataitem_new3 constructs a new QScatterDataItem object.
///
/// @param position QVector3D*
/// @param rotation QQuaternion*
///
QScatterDataItem* q_scatterdataitem_new3(const void* position, const void* rotation);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html)

/// q_scatterdataitem_new4 constructs a new QScatterDataItem object.
///
/// @param other QScatterDataItem*
///
QScatterDataItem* q_scatterdataitem_new4(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html#operator-eq)
///
/// @param self QScatterDataItem*
/// @param other QScatterDataItem*
///
void q_scatterdataitem_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html#setPosition)
///
/// @param self QScatterDataItem*
/// @param pos QVector3D*
///
void q_scatterdataitem_set_position(void* self, const void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html#position)
///
/// @param self const QScatterDataItem*
///
QVector3D* q_scatterdataitem_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html#setRotation)
///
/// @param self QScatterDataItem*
/// @param rot QQuaternion*
///
void q_scatterdataitem_set_rotation(void* self, const void* rot);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html#rotation)
///
/// @param self const QScatterDataItem*
///
QQuaternion* q_scatterdataitem_rotation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html#setX)
///
/// @param self QScatterDataItem*
/// @param value float
///
void q_scatterdataitem_set_x(void* self, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html#setY)
///
/// @param self QScatterDataItem*
/// @param value float
///
void q_scatterdataitem_set_y(void* self, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html#setZ)
///
/// @param self QScatterDataItem*
/// @param value float
///
void q_scatterdataitem_set_z(void* self, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html#x)
///
/// @param self const QScatterDataItem*
///
float q_scatterdataitem_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html#y)
///
/// @param self const QScatterDataItem*
///
float q_scatterdataitem_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html#z)
///
/// @param self const QScatterDataItem*
///
float q_scatterdataitem_z(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataitem-qtdatavis.html#dtor.QScatterDataItem)
///
/// Delete this object from C++ memory.
///
/// @param self QScatterDataItem*
///
void q_scatterdataitem_delete(void* self);

#endif
