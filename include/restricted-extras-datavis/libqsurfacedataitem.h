#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQSURFACEDATAITEM_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQSURFACEDATAITEM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html)

/// q_surfacedataitem_new constructs a new QSurfaceDataItem object.
///
QSurfaceDataItem* q_surfacedataitem_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html)

/// q_surfacedataitem_new2 constructs a new QSurfaceDataItem object.
///
/// @param position QVector3D*
///
QSurfaceDataItem* q_surfacedataitem_new2(const void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html)

/// q_surfacedataitem_new3 constructs a new QSurfaceDataItem object.
///
/// @param other QSurfaceDataItem*
///
QSurfaceDataItem* q_surfacedataitem_new3(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html#operator-eq)
///
/// @param self QSurfaceDataItem*
/// @param other QSurfaceDataItem*
///
void q_surfacedataitem_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html#setPosition)
///
/// @param self QSurfaceDataItem*
/// @param pos QVector3D*
///
void q_surfacedataitem_set_position(void* self, const void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html#position)
///
/// @param self const QSurfaceDataItem*
///
QVector3D* q_surfacedataitem_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html#setX)
///
/// @param self QSurfaceDataItem*
/// @param value float
///
void q_surfacedataitem_set_x(void* self, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html#setY)
///
/// @param self QSurfaceDataItem*
/// @param value float
///
void q_surfacedataitem_set_y(void* self, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html#setZ)
///
/// @param self QSurfaceDataItem*
/// @param value float
///
void q_surfacedataitem_set_z(void* self, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html#x)
///
/// @param self const QSurfaceDataItem*
///
float q_surfacedataitem_x(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html#y)
///
/// @param self const QSurfaceDataItem*
///
float q_surfacedataitem_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html#z)
///
/// @param self const QSurfaceDataItem*
///
float q_surfacedataitem_z(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataitem-qtdatavis.html#dtor.QSurfaceDataItem)
///
/// Delete this object from C++ memory.
///
/// @param self QSurfaceDataItem*
///
void q_surfacedataitem_delete(void* self);

#endif
