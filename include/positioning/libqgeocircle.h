#pragma once
#ifndef POSITIONING_LIBQGEOCIRCLE_H
#define POSITIONING_LIBQGEOCIRCLE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
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
QGeoCircle* q_geocircle_new2(const void* center);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html)

/// q_geocircle_new3 constructs a new QGeoCircle object.
///
/// @param other QGeoCircle*
///
QGeoCircle* q_geocircle_new3(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html)

/// q_geocircle_new4 constructs a new QGeoCircle object.
///
/// @param other QGeoShape*
///
QGeoCircle* q_geocircle_new4(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html)

/// q_geocircle_new5 constructs a new QGeoCircle object.
///
/// @param center QGeoCoordinate*
/// @param radius double
///
QGeoCircle* q_geocircle_new5(const void* center, double radius);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#operator-eq)
///
/// @param self QGeoCircle*
/// @param other QGeoCircle*
///
void q_geocircle_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#setCenter)
///
/// @param self QGeoCircle*
/// @param center QGeoCoordinate*
///
void q_geocircle_set_center(void* self, const void* center);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#center)
///
/// @param self const QGeoCircle*
///
QGeoCoordinate* q_geocircle_center(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#setRadius)
///
/// @param self QGeoCircle*
/// @param radius double
///
void q_geocircle_set_radius(void* self, double radius);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#radius)
///
/// @param self const QGeoCircle*
///
double q_geocircle_radius(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#translate)
///
/// @param self QGeoCircle*
/// @param degreesLatitude double
/// @param degreesLongitude double
///
void q_geocircle_translate(void* self, double degreesLatitude, double degreesLongitude);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#translated)
///
/// @param self const QGeoCircle*
/// @param degreesLatitude double
/// @param degreesLongitude double
///
QGeoCircle* q_geocircle_translated(const void* self, double degreesLatitude, double degreesLongitude);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#extendCircle)
///
/// @param self QGeoCircle*
/// @param coordinate QGeoCoordinate*
///
void q_geocircle_extend_circle(void* self, const void* coordinate);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QGeoCircle*
///
const char* q_geocircle_to_string(const void* self);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#type)
///
/// @param self const QGeoCircle*
///
/// @return enum QGeoShape__ShapeType
///
int32_t q_geocircle_type(const void* self);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isValid)
///
/// @param self const QGeoCircle*
///
bool q_geocircle_is_valid(const void* self);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isEmpty)
///
/// @param self const QGeoCircle*
///
bool q_geocircle_is_empty(const void* self);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#contains)
///
/// @param self const QGeoCircle*
/// @param coordinate QGeoCoordinate*
///
bool q_geocircle_contains(const void* self, const void* coordinate);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#boundingGeoRectangle)
///
/// @param self const QGeoCircle*
///
QGeoRectangle* q_geocircle_bounding_geo_rectangle(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocircle.html#dtor.QGeoCircle)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoCircle*
///
void q_geocircle_delete(void* self);

#endif
