#pragma once
#ifndef POSITIONING_LIBQGEORECTANGLE_H
#define POSITIONING_LIBQGEORECTANGLE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html)

/// q_georectangle_new constructs a new QGeoRectangle object.
///
QGeoRectangle* q_georectangle_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html)

/// q_georectangle_new2 constructs a new QGeoRectangle object.
///
/// @param center QGeoCoordinate*
/// @param degreesWidth double
/// @param degreesHeight double
///
QGeoRectangle* q_georectangle_new2(const void* center, double degreesWidth, double degreesHeight);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html)

/// q_georectangle_new3 constructs a new QGeoRectangle object.
///
/// @param topLeft QGeoCoordinate*
/// @param bottomRight QGeoCoordinate*
///
QGeoRectangle* q_georectangle_new3(const void* topLeft, const void* bottomRight);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html)

/// q_georectangle_new4 constructs a new QGeoRectangle object.
///
/// @param coordinates libqt_list of QGeoCoordinate*
///
QGeoRectangle* q_georectangle_new4(libqt_list coordinates);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html)

/// q_georectangle_new5 constructs a new QGeoRectangle object.
///
/// @param other QGeoRectangle*
///
QGeoRectangle* q_georectangle_new5(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html)

/// q_georectangle_new6 constructs a new QGeoRectangle object.
///
/// @param other QGeoShape*
///
QGeoRectangle* q_georectangle_new6(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#operator-eq)
///
/// @param self QGeoRectangle*
/// @param other QGeoRectangle*
///
void q_georectangle_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setTopLeft)
///
/// @param self QGeoRectangle*
/// @param topLeft QGeoCoordinate*
///
void q_georectangle_set_top_left(void* self, const void* topLeft);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#topLeft)
///
/// @param self const QGeoRectangle*
///
QGeoCoordinate* q_georectangle_top_left(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setTopRight)
///
/// @param self QGeoRectangle*
/// @param topRight QGeoCoordinate*
///
void q_georectangle_set_top_right(void* self, const void* topRight);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#topRight)
///
/// @param self const QGeoRectangle*
///
QGeoCoordinate* q_georectangle_top_right(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setBottomLeft)
///
/// @param self QGeoRectangle*
/// @param bottomLeft QGeoCoordinate*
///
void q_georectangle_set_bottom_left(void* self, const void* bottomLeft);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#bottomLeft)
///
/// @param self const QGeoRectangle*
///
QGeoCoordinate* q_georectangle_bottom_left(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setBottomRight)
///
/// @param self QGeoRectangle*
/// @param bottomRight QGeoCoordinate*
///
void q_georectangle_set_bottom_right(void* self, const void* bottomRight);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#bottomRight)
///
/// @param self const QGeoRectangle*
///
QGeoCoordinate* q_georectangle_bottom_right(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setCenter)
///
/// @param self QGeoRectangle*
/// @param center QGeoCoordinate*
///
void q_georectangle_set_center(void* self, const void* center);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#center)
///
/// @param self const QGeoRectangle*
///
QGeoCoordinate* q_georectangle_center(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setWidth)
///
/// @param self QGeoRectangle*
/// @param degreesWidth double
///
void q_georectangle_set_width(void* self, double degreesWidth);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#width)
///
/// @param self const QGeoRectangle*
///
double q_georectangle_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#setHeight)
///
/// @param self QGeoRectangle*
/// @param degreesHeight double
///
void q_georectangle_set_height(void* self, double degreesHeight);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#height)
///
/// @param self const QGeoRectangle*
///
double q_georectangle_height(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#contains)
///
/// @param self const QGeoRectangle*
/// @param rectangle QGeoRectangle*
///
bool q_georectangle_contains(const void* self, const void* rectangle);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#intersects)
///
/// @param self const QGeoRectangle*
/// @param rectangle QGeoRectangle*
///
bool q_georectangle_intersects(const void* self, const void* rectangle);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#translate)
///
/// @param self QGeoRectangle*
/// @param degreesLatitude double
/// @param degreesLongitude double
///
void q_georectangle_translate(void* self, double degreesLatitude, double degreesLongitude);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#translated)
///
/// @param self const QGeoRectangle*
/// @param degreesLatitude double
/// @param degreesLongitude double
///
QGeoRectangle* q_georectangle_translated(const void* self, double degreesLatitude, double degreesLongitude);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#extendRectangle)
///
/// @param self QGeoRectangle*
/// @param coordinate QGeoCoordinate*
///
void q_georectangle_extend_rectangle(void* self, const void* coordinate);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#united)
///
/// @param self const QGeoRectangle*
/// @param rectangle QGeoRectangle*
///
QGeoRectangle* q_georectangle_united(const void* self, const void* rectangle);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#operator-7c)
///
/// @param self const QGeoRectangle*
/// @param rectangle QGeoRectangle*
///
QGeoRectangle* q_georectangle_operator_bitwise_or(const void* self, const void* rectangle);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#operator-7c-eq)
///
/// @param self QGeoRectangle*
/// @param rectangle QGeoRectangle*
///
void q_georectangle_operator_bitwise_or_assign(void* self, const void* rectangle);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QGeoRectangle*
///
const char* q_georectangle_to_string(const void* self);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#type)
///
/// @param self const QGeoRectangle*
///
/// @return enum QGeoShape__ShapeType
///
int32_t q_georectangle_type(const void* self);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isValid)
///
/// @param self const QGeoRectangle*
///
bool q_georectangle_is_valid(const void* self);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isEmpty)
///
/// @param self const QGeoRectangle*
///
bool q_georectangle_is_empty(const void* self);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#boundingGeoRectangle)
///
/// @param self const QGeoRectangle*
///
QGeoRectangle* q_georectangle_bounding_geo_rectangle(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorectangle.html#dtor.QGeoRectangle)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoRectangle*
///
void q_georectangle_delete(void* self);

#endif
