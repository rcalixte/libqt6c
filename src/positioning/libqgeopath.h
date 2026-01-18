#pragma once
#ifndef SRC_POSITIONING_QT6C_LIBQGEOPATH_H
#define SRC_POSITIONING_QT6C_LIBQGEOPATH_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html)

/// q_geopath_new constructs a new QGeoPath object.
///
QGeoPath* q_geopath_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html)

/// q_geopath_new2 constructs a new QGeoPath object.
///
/// @param path libqt_list of QGeoCoordinate*
///
QGeoPath* q_geopath_new2(libqt_list /* of QGeoCoordinate* */ path);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html)

/// q_geopath_new3 constructs a new QGeoPath object.
///
/// @param other QGeoPath*
///
QGeoPath* q_geopath_new3(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html)

/// q_geopath_new4 constructs a new QGeoPath object.
///
/// @param other QGeoShape*
///
QGeoPath* q_geopath_new4(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html)

/// q_geopath_new5 constructs a new QGeoPath object.
///
/// @param path libqt_list of QGeoCoordinate*
/// @param width double*
///
QGeoPath* q_geopath_new5(libqt_list /* of QGeoCoordinate* */ path, double* width);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#operator-eq)
///
/// @param self QGeoPath*
/// @param other QGeoPath*
///
void q_geopath_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#setPath)
///
/// @param self QGeoPath*
/// @param path libqt_list of QGeoCoordinate*
///
void q_geopath_set_path(void* self, libqt_list /* of QGeoCoordinate* */ path);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#path)
///
/// @param self QGeoPath*
///
/// @return libqt_list of QGeoCoordinate*
///
libqt_list q_geopath_path(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#clearPath)
///
/// @param self QGeoPath*
///
void q_geopath_clear_path(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#setVariantPath)
///
/// @param self QGeoPath*
/// @param path libqt_list of QVariant*
///
void q_geopath_set_variant_path(void* self, libqt_list /* of QVariant* */ path);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#variantPath)
///
/// @param self QGeoPath*
///
/// @return libqt_list of QVariant*
///
libqt_list q_geopath_variant_path(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#setWidth)
///
/// @param self QGeoPath*
/// @param width double*
///
void q_geopath_set_width(void* self, double* width);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#width)
///
/// @param self QGeoPath*
///
double q_geopath_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#translate)
///
/// @param self QGeoPath*
/// @param degreesLatitude double
/// @param degreesLongitude double
///
void q_geopath_translate(void* self, double degreesLatitude, double degreesLongitude);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#translated)
///
/// @param self QGeoPath*
/// @param degreesLatitude double
/// @param degreesLongitude double
///
QGeoPath* q_geopath_translated(void* self, double degreesLatitude, double degreesLongitude);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#length)
///
/// @param self QGeoPath*
///
double q_geopath_length(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#size)
///
/// @param self QGeoPath*
///
int64_t q_geopath_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#addCoordinate)
///
/// @param self QGeoPath*
/// @param coordinate QGeoCoordinate*
///
void q_geopath_add_coordinate(void* self, void* coordinate);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#insertCoordinate)
///
/// @param self QGeoPath*
/// @param index int64_t
/// @param coordinate QGeoCoordinate*
///
void q_geopath_insert_coordinate(void* self, int64_t index, void* coordinate);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#replaceCoordinate)
///
/// @param self QGeoPath*
/// @param index int64_t
/// @param coordinate QGeoCoordinate*
///
void q_geopath_replace_coordinate(void* self, int64_t index, void* coordinate);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#coordinateAt)
///
/// @param self QGeoPath*
/// @param index int64_t
///
QGeoCoordinate* q_geopath_coordinate_at(void* self, int64_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#containsCoordinate)
///
/// @param self QGeoPath*
/// @param coordinate QGeoCoordinate*
///
bool q_geopath_contains_coordinate(void* self, void* coordinate);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#removeCoordinate)
///
/// @param self QGeoPath*
/// @param coordinate QGeoCoordinate*
///
void q_geopath_remove_coordinate(void* self, void* coordinate);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#removeCoordinate)
///
/// @param self QGeoPath*
/// @param index int64_t
///
void q_geopath_remove_coordinate2(void* self, int64_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoPath*
///
const char* q_geopath_to_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#length)
///
/// @param self QGeoPath*
/// @param indexFrom int64_t
///
double q_geopath_length1(void* self, int64_t indexFrom);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#length)
///
/// @param self QGeoPath*
/// @param indexFrom int64_t
/// @param indexTo int64_t
///
double q_geopath_length2(void* self, int64_t indexFrom, int64_t indexTo);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#type)
///
/// @param self QGeoPath*
///
/// @return enum QGeoShape__ShapeType
///
int32_t q_geopath_type(void* self);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isValid)
///
/// @param self QGeoPath*
///
bool q_geopath_is_valid(void* self);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isEmpty)
///
/// @param self QGeoPath*
///
bool q_geopath_is_empty(void* self);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#contains)
///
/// @param self QGeoPath*
/// @param coordinate QGeoCoordinate*
///
bool q_geopath_contains(void* self, void* coordinate);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#boundingGeoRectangle)
///
/// @param self QGeoPath*
///
QGeoRectangle* q_geopath_bounding_geo_rectangle(void* self);

/// Inherited from QGeoShape
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#center)
///
/// @param self QGeoPath*
///
QGeoCoordinate* q_geopath_center(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopath.html#dtor.QGeoPath)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoPath*
///
void q_geopath_delete(void* self);

#endif
