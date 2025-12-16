#pragma once
#ifndef SRC_POSITIONING_QT6C_LIBQGEOCIRCLE_H
#define SRC_POSITIONING_QT6C_LIBQGEOCIRCLE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html)

/// q_geocircle_new constructs a new QGeoCircle object.
///
QGeoCircle* q_geocircle_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html)

/// q_geocircle_new2 constructs a new QGeoCircle object.
///
/// @param center QGeoCoordinate*
///
QGeoCircle* q_geocircle_new2(void* center);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html)

/// q_geocircle_new3 constructs a new QGeoCircle object.
///
/// @param other QGeoCircle*
///
QGeoCircle* q_geocircle_new3(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html)

/// q_geocircle_new4 constructs a new QGeoCircle object.
///
/// @param other QGeoShape*
///
QGeoCircle* q_geocircle_new4(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html)

/// q_geocircle_new5 constructs a new QGeoCircle object.
///
/// @param center QGeoCoordinate*
/// @param radius double
///
QGeoCircle* q_geocircle_new5(void* center, double radius);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#operator-eq)
///
/// @param self QGeoCircle*
/// @param other QGeoCircle*
///
void q_geocircle_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#setCenter)
///
/// @param self QGeoCircle*
/// @param center QGeoCoordinate*
///
void q_geocircle_set_center(void* self, void* center);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#center)
///
/// @param self QGeoCircle*
///
QGeoCoordinate* q_geocircle_center(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#setRadius)
///
/// @param self QGeoCircle*
/// @param radius double
///
void q_geocircle_set_radius(void* self, double radius);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#radius)
///
/// @param self QGeoCircle*
///
double q_geocircle_radius(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#translate)
///
/// @param self QGeoCircle*
/// @param degreesLatitude double
/// @param degreesLongitude double
///
void q_geocircle_translate(void* self, double degreesLatitude, double degreesLongitude);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#translated)
///
/// @param self QGeoCircle*
/// @param degreesLatitude double
/// @param degreesLongitude double
///
QGeoCircle* q_geocircle_translated(void* self, double degreesLatitude, double degreesLongitude);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#extendCircle)
///
/// @param self QGeoCircle*
/// @param coordinate QGeoCoordinate*
///
void q_geocircle_extend_circle(void* self, void* coordinate);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGeoCircle*
///
const char* q_geocircle_to_string(void* self);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#type)
///
/// @param self QGeoCircle*
///
/// @return enum QGeoShape__ShapeType
///
int32_t q_geocircle_type(void* self);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isValid)
///
/// @param self QGeoCircle*
///
bool q_geocircle_is_valid(void* self);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isEmpty)
///
/// @param self QGeoCircle*
///
bool q_geocircle_is_empty(void* self);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#contains)
///
/// @param self QGeoCircle*
/// @param coordinate QGeoCoordinate*
///
bool q_geocircle_contains(void* self, void* coordinate);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#boundingGeoRectangle)
///
/// @param self QGeoCircle*
///
QGeoRectangle* q_geocircle_bounding_geo_rectangle(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#dtor.QGeoCircle)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoCircle*
///
void q_geocircle_delete(void* self);

#endif
