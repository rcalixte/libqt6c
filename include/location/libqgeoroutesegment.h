#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQGEOROUTESEGMENT_H
#define SRC_LOCATION_QT6C_LIBQGEOROUTESEGMENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html)

/// q_georoutesegment_new constructs a new QGeoRouteSegment object.
///
QGeoRouteSegment* q_georoutesegment_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html)

/// q_georoutesegment_new2 constructs a new QGeoRouteSegment object.
///
/// @param other QGeoRouteSegment*
///
QGeoRouteSegment* q_georoutesegment_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#operator-eq)
///
/// @param self QGeoRouteSegment*
/// @param other QGeoRouteSegment*
///
void q_georoutesegment_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#swap)
///
/// @param self QGeoRouteSegment*
/// @param other QGeoRouteSegment*
///
void q_georoutesegment_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#isValid)
///
/// @param self QGeoRouteSegment*
///
bool q_georoutesegment_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#isLegLastSegment)
///
/// @param self QGeoRouteSegment*
///
bool q_georoutesegment_is_leg_last_segment(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#setNextRouteSegment)
///
/// @param self QGeoRouteSegment*
/// @param routeSegment QGeoRouteSegment*
///
void q_georoutesegment_set_next_route_segment(void* self, void* routeSegment);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#nextRouteSegment)
///
/// @param self QGeoRouteSegment*
///
QGeoRouteSegment* q_georoutesegment_next_route_segment(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#setTravelTime)
///
/// @param self QGeoRouteSegment*
/// @param secs int
///
void q_georoutesegment_set_travel_time(void* self, int secs);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#travelTime)
///
/// @param self QGeoRouteSegment*
///
int32_t q_georoutesegment_travel_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#setDistance)
///
/// @param self QGeoRouteSegment*
/// @param distance double
///
void q_georoutesegment_set_distance(void* self, double distance);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#distance)
///
/// @param self QGeoRouteSegment*
///
double q_georoutesegment_distance(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#setPath)
///
/// @param self QGeoRouteSegment*
/// @param path libqt_list of QGeoCoordinate*
///
void q_georoutesegment_set_path(void* self, libqt_list path);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#path)
///
/// @param self QGeoRouteSegment*
///
/// @return libqt_list of QGeoCoordinate*
///
libqt_list q_georoutesegment_path(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#setManeuver)
///
/// @param self QGeoRouteSegment*
/// @param maneuver QGeoManeuver*
///
void q_georoutesegment_set_maneuver(void* self, void* maneuver);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#maneuver)
///
/// @param self QGeoRouteSegment*
///
QGeoManeuver* q_georoutesegment_maneuver(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutesegment.html#dtor.QGeoRouteSegment)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoRouteSegment*
///
void q_georoutesegment_delete(void* self);

#endif
