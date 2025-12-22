#pragma once
#ifndef SRC_POSITIONING_QT6C_LIBQGEOCOORDINATE_H
#define SRC_POSITIONING_QT6C_LIBQGEOCOORDINATE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html)

/// q_geocoordinate_new constructs a new QGeoCoordinate object.
///
QGeoCoordinate* q_geocoordinate_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html)

/// q_geocoordinate_new2 constructs a new QGeoCoordinate object.
///
/// @param latitude double
/// @param longitude double
///
QGeoCoordinate* q_geocoordinate_new2(double latitude, double longitude);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html)

/// q_geocoordinate_new3 constructs a new QGeoCoordinate object.
///
/// @param latitude double
/// @param longitude double
/// @param altitude double
///
QGeoCoordinate* q_geocoordinate_new3(double latitude, double longitude, double altitude);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html)

/// q_geocoordinate_new4 constructs a new QGeoCoordinate object.
///
/// @param other QGeoCoordinate*
///
QGeoCoordinate* q_geocoordinate_new4(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#operator-eq)
///
/// @param self QGeoCoordinate*
/// @param other QGeoCoordinate*
///
void q_geocoordinate_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#swap)
///
/// @param self QGeoCoordinate*
/// @param other QGeoCoordinate*
///
void q_geocoordinate_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#isValid)
///
/// @param self QGeoCoordinate*
///
bool q_geocoordinate_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#type)
///
/// @param self QGeoCoordinate*
///
/// @return enum QGeoCoordinate__CoordinateType
///
int32_t q_geocoordinate_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#setLatitude)
///
/// @param self QGeoCoordinate*
/// @param latitude double
///
void q_geocoordinate_set_latitude(void* self, double latitude);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#latitude)
///
/// @param self QGeoCoordinate*
///
double q_geocoordinate_latitude(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#setLongitude)
///
/// @param self QGeoCoordinate*
/// @param longitude double
///
void q_geocoordinate_set_longitude(void* self, double longitude);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#longitude)
///
/// @param self QGeoCoordinate*
///
double q_geocoordinate_longitude(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#setAltitude)
///
/// @param self QGeoCoordinate*
/// @param altitude double
///
void q_geocoordinate_set_altitude(void* self, double altitude);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#altitude)
///
/// @param self QGeoCoordinate*
///
double q_geocoordinate_altitude(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#distanceTo)
///
/// @param self QGeoCoordinate*
/// @param other QGeoCoordinate*
///
double q_geocoordinate_distance_to(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#azimuthTo)
///
/// @param self QGeoCoordinate*
/// @param other QGeoCoordinate*
///
double q_geocoordinate_azimuth_to(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#atDistanceAndAzimuth)
///
/// @param self QGeoCoordinate*
/// @param distance double
/// @param azimuth double
///
QGeoCoordinate* q_geocoordinate_at_distance_and_azimuth(void* self, double distance, double azimuth);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoCoordinate*
///
const char* q_geocoordinate_to_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#atDistanceAndAzimuth)
///
/// @param self QGeoCoordinate*
/// @param distance double
/// @param azimuth double
/// @param distanceUp double
///
QGeoCoordinate* q_geocoordinate_at_distance_and_azimuth3(void* self, double distance, double azimuth, double distanceUp);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoCoordinate*
/// @param format enum QGeoCoordinate__CoordinateFormat
///
const char* q_geocoordinate_to_string1(void* self, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#dtor.QGeoCoordinate)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoCoordinate*
///
void q_geocoordinate_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#public-types)

typedef enum {
    QGEOCOORDINATE_COORDINATETYPE_INVALIDCOORDINATE = 0,
    QGEOCOORDINATE_COORDINATETYPE_COORDINATE2D = 1,
    QGEOCOORDINATE_COORDINATETYPE_COORDINATE3D = 2
} QGeoCoordinate__CoordinateType;

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocoordinate.html#public-types)

typedef enum {
    QGEOCOORDINATE_COORDINATEFORMAT_DEGREES = 0,
    QGEOCOORDINATE_COORDINATEFORMAT_DEGREESWITHHEMISPHERE = 1,
    QGEOCOORDINATE_COORDINATEFORMAT_DEGREESMINUTES = 2,
    QGEOCOORDINATE_COORDINATEFORMAT_DEGREESMINUTESWITHHEMISPHERE = 3,
    QGEOCOORDINATE_COORDINATEFORMAT_DEGREESMINUTESSECONDS = 4,
    QGEOCOORDINATE_COORDINATEFORMAT_DEGREESMINUTESSECONDSWITHHEMISPHERE = 5
} QGeoCoordinate__CoordinateFormat;

#endif
