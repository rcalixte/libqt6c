#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQBARDATAITEM_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQBARDATAITEM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataitem-qtdatavis.html)

/// q_bardataitem_new constructs a new QBarDataItem object.
///
QBarDataItem* q_bardataitem_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataitem-qtdatavis.html)

/// q_bardataitem_new2 constructs a new QBarDataItem object.
///
/// @param value float
///
QBarDataItem* q_bardataitem_new2(float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataitem-qtdatavis.html)

/// q_bardataitem_new3 constructs a new QBarDataItem object.
///
/// @param value float
/// @param angle float
///
QBarDataItem* q_bardataitem_new3(float value, float angle);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataitem-qtdatavis.html)

/// q_bardataitem_new4 constructs a new QBarDataItem object.
///
/// @param other QBarDataItem*
///
QBarDataItem* q_bardataitem_new4(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataitem-qtdatavis.html#operator-eq)
///
/// @param self QBarDataItem*
/// @param other QBarDataItem*
///
void q_bardataitem_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataitem-qtdatavis.html#setValue)
///
/// @param self QBarDataItem*
/// @param val float
///
void q_bardataitem_set_value(void* self, float val);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataitem-qtdatavis.html#value)
///
/// @param self const QBarDataItem*
///
float q_bardataitem_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataitem-qtdatavis.html#setRotation)
///
/// @param self QBarDataItem*
/// @param angle float
///
void q_bardataitem_set_rotation(void* self, float angle);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataitem-qtdatavis.html#rotation)
///
/// @param self const QBarDataItem*
///
float q_bardataitem_rotation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbardataitem-qtdatavis.html#dtor.QBarDataItem)
///
/// Delete this object from C++ memory.
///
/// @param self QBarDataItem*
///
void q_bardataitem_delete(void* self);

#endif
