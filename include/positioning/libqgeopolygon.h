#pragma once
#ifndef SRC_POSITIONING_QT6C_LIBQGEOPOLYGON_H
#define SRC_POSITIONING_QT6C_LIBQGEOPOLYGON_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QGeoPolygon* q_geopolygon_new3(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html)

/// q_geopolygon_new4 constructs a new QGeoPolygon object.
///
/// @param other QGeoShape*
///
QGeoPolygon* q_geopolygon_new4(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#operator-eq)
///
/// @param self QGeoPolygon*
/// @param other QGeoPolygon*
///
void q_geopolygon_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#setPerimeter)
///
/// @param self QGeoPolygon*
/// @param path libqt_list of QGeoCoordinate*
///
void q_geopolygon_set_perimeter(void* self, libqt_list path);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#perimeter)
///
/// @param self QGeoPolygon*
///
/// @return libqt_list of QGeoCoordinate*
///
libqt_list q_geopolygon_perimeter(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#addHole)
///
/// @param self QGeoPolygon*
/// @param holePath QVariant*
///
void q_geopolygon_add_hole(void* self, void* holePath);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#addHole)
///
/// @param self QGeoPolygon*
/// @param holePath libqt_list of QGeoCoordinate*
///
void q_geopolygon_add_hole2(void* self, libqt_list holePath);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#hole)
///
/// @param self QGeoPolygon*
/// @param index int64_t
///
/// @return libqt_list of QVariant*
///
libqt_list q_geopolygon_hole(void* self, int64_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#holePath)
///
/// @param self QGeoPolygon*
/// @param index int64_t
///
/// @return libqt_list of QGeoCoordinate*
///
libqt_list q_geopolygon_hole_path(void* self, int64_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#removeHole)
///
/// @param self QGeoPolygon*
/// @param index int64_t
///
void q_geopolygon_remove_hole(void* self, int64_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#holesCount)
///
/// @param self QGeoPolygon*
///
int64_t q_geopolygon_holes_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#translate)
///
/// @param self QGeoPolygon*
/// @param degreesLatitude double
/// @param degreesLongitude double
///
void q_geopolygon_translate(void* self, double degreesLatitude, double degreesLongitude);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#translated)
///
/// @param self QGeoPolygon*
/// @param degreesLatitude double
/// @param degreesLongitude double
///
QGeoPolygon* q_geopolygon_translated(void* self, double degreesLatitude, double degreesLongitude);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#length)
///
/// @param self QGeoPolygon*
///
double q_geopolygon_length(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#size)
///
/// @param self QGeoPolygon*
///
int64_t q_geopolygon_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#addCoordinate)
///
/// @param self QGeoPolygon*
/// @param coordinate QGeoCoordinate*
///
void q_geopolygon_add_coordinate(void* self, void* coordinate);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#insertCoordinate)
///
/// @param self QGeoPolygon*
/// @param index int64_t
/// @param coordinate QGeoCoordinate*
///
void q_geopolygon_insert_coordinate(void* self, int64_t index, void* coordinate);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#replaceCoordinate)
///
/// @param self QGeoPolygon*
/// @param index int64_t
/// @param coordinate QGeoCoordinate*
///
void q_geopolygon_replace_coordinate(void* self, int64_t index, void* coordinate);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#coordinateAt)
///
/// @param self QGeoPolygon*
/// @param index int64_t
///
QGeoCoordinate* q_geopolygon_coordinate_at(void* self, int64_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#containsCoordinate)
///
/// @param self QGeoPolygon*
/// @param coordinate QGeoCoordinate*
///
bool q_geopolygon_contains_coordinate(void* self, void* coordinate);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#removeCoordinate)
///
/// @param self QGeoPolygon*
/// @param coordinate QGeoCoordinate*
///
void q_geopolygon_remove_coordinate(void* self, void* coordinate);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#removeCoordinate)
///
/// @param self QGeoPolygon*
/// @param index int64_t
///
void q_geopolygon_remove_coordinate2(void* self, int64_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoPolygon*
///
const char* q_geopolygon_to_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#length)
///
/// @param self QGeoPolygon*
/// @param indexFrom int64_t
///
double q_geopolygon_length1(void* self, int64_t indexFrom);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#length)
///
/// @param self QGeoPolygon*
/// @param indexFrom int64_t
/// @param indexTo int64_t
///
double q_geopolygon_length2(void* self, int64_t indexFrom, int64_t indexTo);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#type)
///
/// @param self QGeoPolygon*
///
/// @return enum QGeoShape__ShapeType
///
int32_t q_geopolygon_type(void* self);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isValid)
///
/// @param self QGeoPolygon*
///
bool q_geopolygon_is_valid(void* self);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isEmpty)
///
/// @param self QGeoPolygon*
///
bool q_geopolygon_is_empty(void* self);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#contains)
///
/// @param self QGeoPolygon*
/// @param coordinate QGeoCoordinate*
///
bool q_geopolygon_contains(void* self, void* coordinate);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#boundingGeoRectangle)
///
/// @param self QGeoPolygon*
///
QGeoRectangle* q_geopolygon_bounding_geo_rectangle(void* self);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#center)
///
/// @param self QGeoPolygon*
///
QGeoCoordinate* q_geopolygon_center(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopolygon.html#dtor.QGeoPolygon)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoPolygon*
///
void q_geopolygon_delete(void* self);

#endif
