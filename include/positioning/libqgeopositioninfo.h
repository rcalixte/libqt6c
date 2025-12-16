#pragma once
#ifndef SRC_POSITIONING_QT6C_LIBQGEOPOSITIONINFO_H
#define SRC_POSITIONING_QT6C_LIBQGEOPOSITIONINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html)

/// q_geopositioninfo_new constructs a new QGeoPositionInfo object.
///
QGeoPositionInfo* q_geopositioninfo_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html)

/// q_geopositioninfo_new2 constructs a new QGeoPositionInfo object.
///
/// @param coordinate QGeoCoordinate*
/// @param updateTime QDateTime*
///
QGeoPositionInfo* q_geopositioninfo_new2(void* coordinate, void* updateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html)

/// q_geopositioninfo_new3 constructs a new QGeoPositionInfo object.
///
/// @param other QGeoPositionInfo*
///
QGeoPositionInfo* q_geopositioninfo_new3(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#operator-eq)
///
/// @param self QGeoPositionInfo*
/// @param other QGeoPositionInfo*
///
void q_geopositioninfo_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#swap)
///
/// @param self QGeoPositionInfo*
/// @param other QGeoPositionInfo*
///
void q_geopositioninfo_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#isValid)
///
/// @param self QGeoPositionInfo*
///
bool q_geopositioninfo_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#setTimestamp)
///
/// @param self QGeoPositionInfo*
/// @param timestamp QDateTime*
///
void q_geopositioninfo_set_timestamp(void* self, void* timestamp);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#timestamp)
///
/// @param self QGeoPositionInfo*
///
QDateTime* q_geopositioninfo_timestamp(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#setCoordinate)
///
/// @param self QGeoPositionInfo*
/// @param coordinate QGeoCoordinate*
///
void q_geopositioninfo_set_coordinate(void* self, void* coordinate);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#coordinate)
///
/// @param self QGeoPositionInfo*
///
QGeoCoordinate* q_geopositioninfo_coordinate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#setAttribute)
///
/// @param self QGeoPositionInfo*
/// @param attribute enum QGeoPositionInfo__Attribute
/// @param value double
///
void q_geopositioninfo_set_attribute(void* self, int32_t attribute, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#attribute)
///
/// @param self QGeoPositionInfo*
/// @param attribute enum QGeoPositionInfo__Attribute
///
double q_geopositioninfo_attribute(void* self, int32_t attribute);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#removeAttribute)
///
/// @param self QGeoPositionInfo*
/// @param attribute enum QGeoPositionInfo__Attribute
///
void q_geopositioninfo_remove_attribute(void* self, int32_t attribute);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#hasAttribute)
///
/// @param self QGeoPositionInfo*
/// @param attribute enum QGeoPositionInfo__Attribute
///
bool q_geopositioninfo_has_attribute(void* self, int32_t attribute);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#detach)
///
/// @param self QGeoPositionInfo*
///
void q_geopositioninfo_detach(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#dtor.QGeoPositionInfo)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoPositionInfo*
///
void q_geopositioninfo_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfo.html#public-types)

typedef enum {
    QGEOPOSITIONINFO_ATTRIBUTE_DIRECTION = 0,
    QGEOPOSITIONINFO_ATTRIBUTE_GROUNDSPEED = 1,
    QGEOPOSITIONINFO_ATTRIBUTE_VERTICALSPEED = 2,
    QGEOPOSITIONINFO_ATTRIBUTE_MAGNETICVARIATION = 3,
    QGEOPOSITIONINFO_ATTRIBUTE_HORIZONTALACCURACY = 4,
    QGEOPOSITIONINFO_ATTRIBUTE_VERTICALACCURACY = 5,
    QGEOPOSITIONINFO_ATTRIBUTE_DIRECTIONACCURACY = 6
} QGeoPositionInfo__Attribute;

#endif
