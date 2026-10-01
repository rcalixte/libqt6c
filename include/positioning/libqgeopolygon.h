#pragma once
#ifndef POSITIONING_LIBQGEOPOLYGON_H
#define POSITIONING_LIBQGEOPOLYGON_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html)

/// q_geopolygon_new constructs a new QGeoPolygon object.
///
QGeoPolygon* q_geopolygon_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html)

/// q_geopolygon_new2 constructs a new QGeoPolygon object.
///
/// @param path libqt_list of QGeoCoordinate*
///
QGeoPolygon* q_geopolygon_new2(libqt_list path);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html)

/// q_geopolygon_new3 constructs a new QGeoPolygon object.
///
/// @param other QGeoPolygon*
///
QGeoPolygon* q_geopolygon_new3(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html)

/// q_geopolygon_new4 constructs a new QGeoPolygon object.
///
/// @param other QGeoShape*
///
QGeoPolygon* q_geopolygon_new4(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#operator-eq)
///
/// @param self QGeoPolygon*
/// @param other QGeoPolygon*
///
void q_geopolygon_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#setPerimeter)
///
/// @param self QGeoPolygon*
/// @param path libqt_list of QGeoCoordinate*
///
void q_geopolygon_set_perimeter(void* self, libqt_list path);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#perimeter)
///
/// @param self const QGeoPolygon*
///
/// @return libqt_list of QGeoCoordinate*
///
libqt_list q_geopolygon_perimeter(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#addHole)
///
/// @param self QGeoPolygon*
/// @param holePath QVariant*
///
void q_geopolygon_add_hole(void* self, const void* holePath);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#addHole)
///
/// @param self QGeoPolygon*
/// @param holePath libqt_list of QGeoCoordinate*
///
void q_geopolygon_add_hole2(void* self, libqt_list holePath);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#hole)
///
/// @param self const QGeoPolygon*
/// @param index intptr_t
///
/// @return libqt_list of QVariant*
///
libqt_list q_geopolygon_hole(const void* self, intptr_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#holePath)
///
/// @param self const QGeoPolygon*
/// @param index intptr_t
///
/// @return libqt_list of QGeoCoordinate*
///
libqt_list q_geopolygon_hole_path(const void* self, intptr_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#removeHole)
///
/// @param self QGeoPolygon*
/// @param index intptr_t
///
void q_geopolygon_remove_hole(void* self, intptr_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#holesCount)
///
/// @param self const QGeoPolygon*
///
intptr_t q_geopolygon_holes_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#translate)
///
/// @param self QGeoPolygon*
/// @param degreesLatitude double
/// @param degreesLongitude double
///
void q_geopolygon_translate(void* self, double degreesLatitude, double degreesLongitude);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#translated)
///
/// @param self const QGeoPolygon*
/// @param degreesLatitude double
/// @param degreesLongitude double
///
QGeoPolygon* q_geopolygon_translated(const void* self, double degreesLatitude, double degreesLongitude);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#length)
///
/// @param self const QGeoPolygon*
///
double q_geopolygon_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#size)
///
/// @param self const QGeoPolygon*
///
intptr_t q_geopolygon_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#addCoordinate)
///
/// @param self QGeoPolygon*
/// @param coordinate QGeoCoordinate*
///
void q_geopolygon_add_coordinate(void* self, const void* coordinate);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#insertCoordinate)
///
/// @param self QGeoPolygon*
/// @param index intptr_t
/// @param coordinate QGeoCoordinate*
///
void q_geopolygon_insert_coordinate(void* self, intptr_t index, const void* coordinate);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#replaceCoordinate)
///
/// @param self QGeoPolygon*
/// @param index intptr_t
/// @param coordinate QGeoCoordinate*
///
void q_geopolygon_replace_coordinate(void* self, intptr_t index, const void* coordinate);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#coordinateAt)
///
/// @param self const QGeoPolygon*
/// @param index intptr_t
///
QGeoCoordinate* q_geopolygon_coordinate_at(const void* self, intptr_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#containsCoordinate)
///
/// @param self const QGeoPolygon*
/// @param coordinate QGeoCoordinate*
///
bool q_geopolygon_contains_coordinate(const void* self, const void* coordinate);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#removeCoordinate)
///
/// @param self QGeoPolygon*
/// @param coordinate QGeoCoordinate*
///
void q_geopolygon_remove_coordinate(void* self, const void* coordinate);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#removeCoordinate)
///
/// @param self QGeoPolygon*
/// @param index intptr_t
///
void q_geopolygon_remove_coordinate2(void* self, intptr_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QGeoPolygon*
///
const char* q_geopolygon_to_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#length)
///
/// @param self const QGeoPolygon*
/// @param indexFrom intptr_t
///
double q_geopolygon_length1(const void* self, intptr_t indexFrom);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#length)
///
/// @param self const QGeoPolygon*
/// @param indexFrom intptr_t
/// @param indexTo intptr_t
///
double q_geopolygon_length2(const void* self, intptr_t indexFrom, intptr_t indexTo);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#type)
///
/// @param self const QGeoPolygon*
///
/// @return enum QGeoShape__ShapeType
///
int32_t q_geopolygon_type(const void* self);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isValid)
///
/// @param self const QGeoPolygon*
///
bool q_geopolygon_is_valid(const void* self);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isEmpty)
///
/// @param self const QGeoPolygon*
///
bool q_geopolygon_is_empty(const void* self);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#contains)
///
/// @param self const QGeoPolygon*
/// @param coordinate QGeoCoordinate*
///
bool q_geopolygon_contains(const void* self, const void* coordinate);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#boundingGeoRectangle)
///
/// @param self const QGeoPolygon*
///
QGeoRectangle* q_geopolygon_bounding_geo_rectangle(const void* self);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#center)
///
/// @param self const QGeoPolygon*
///
QGeoCoordinate* q_geopolygon_center(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#dtor.QGeoPolygon)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoPolygon*
///
void q_geopolygon_delete(void* self);

#endif
