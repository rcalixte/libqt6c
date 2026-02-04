#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQGEOROUTE_H
#define SRC_LOCATION_QT6C_LIBQGEOROUTE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html)

/// q_georoute_new constructs a new QGeoRoute object.
///
QGeoRoute* q_georoute_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html)

/// q_georoute_new2 constructs a new QGeoRoute object.
///
/// @param other QGeoRoute*
///
QGeoRoute* q_georoute_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#operator-eq)
///
/// @param self QGeoRoute*
/// @param other QGeoRoute*
///
void q_georoute_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#swap)
///
/// @param self QGeoRoute*
/// @param other QGeoRoute*
///
void q_georoute_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setRouteId)
///
/// @param self QGeoRoute*
/// @param id const char*
///
void q_georoute_set_route_id(void* self, const char* id);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#routeId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoRoute*
///
const char* q_georoute_route_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setRequest)
///
/// @param self QGeoRoute*
/// @param request QGeoRouteRequest*
///
void q_georoute_set_request(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#request)
///
/// @param self QGeoRoute*
///
QGeoRouteRequest* q_georoute_request(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setBounds)
///
/// @param self QGeoRoute*
/// @param bounds QGeoRectangle*
///
void q_georoute_set_bounds(void* self, void* bounds);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#bounds)
///
/// @param self QGeoRoute*
///
QGeoRectangle* q_georoute_bounds(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setFirstRouteSegment)
///
/// @param self QGeoRoute*
/// @param routeSegment QGeoRouteSegment*
///
void q_georoute_set_first_route_segment(void* self, void* routeSegment);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#firstRouteSegment)
///
/// @param self QGeoRoute*
///
QGeoRouteSegment* q_georoute_first_route_segment(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#segmentsCount)
///
/// @param self QGeoRoute*
///
int64_t q_georoute_segments_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#segments)
///
/// @param self QGeoRoute*
///
/// @return libqt_list of QGeoRouteSegment*
///
libqt_list q_georoute_segments(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setTravelTime)
///
/// @param self QGeoRoute*
/// @param secs int
///
void q_georoute_set_travel_time(void* self, int secs);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#travelTime)
///
/// @param self QGeoRoute*
///
int32_t q_georoute_travel_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setDistance)
///
/// @param self QGeoRoute*
/// @param distance double
///
void q_georoute_set_distance(void* self, double distance);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#distance)
///
/// @param self QGeoRoute*
///
double q_georoute_distance(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setTravelMode)
///
/// @param self QGeoRoute*
/// @param mode enum QGeoRouteRequest__TravelMode
///
void q_georoute_set_travel_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#travelMode)
///
/// @param self QGeoRoute*
///
/// @return enum QGeoRouteRequest__TravelMode
///
int32_t q_georoute_travel_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setPath)
///
/// @param self QGeoRoute*
/// @param path libqt_list of QGeoCoordinate*
///
void q_georoute_set_path(void* self, libqt_list path);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#path)
///
/// @param self QGeoRoute*
///
/// @return libqt_list of QGeoCoordinate*
///
libqt_list q_georoute_path(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setRouteLegs)
///
/// @param self QGeoRoute*
/// @param legs libqt_list of QGeoRoute*
///
void q_georoute_set_route_legs(void* self, libqt_list legs);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#routeLegs)
///
/// @param self QGeoRoute*
///
/// @return libqt_list of QGeoRoute*
///
libqt_list q_georoute_route_legs(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setExtendedAttributes)
///
/// @param self QGeoRoute*
/// @param extendedAttributes libqt_map of const char* to QVariant*
///
void q_georoute_set_extended_attributes(void* self, libqt_map extendedAttributes);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#extendedAttributes)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of const char* to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self QGeoRoute*
///
/// @return libqt_map of const char* to QVariant*
///
libqt_map q_georoute_extended_attributes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setLegIndex)
///
/// @param self QGeoRoute*
/// @param idx int
///
void q_georoute_set_leg_index(void* self, int idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#legIndex)
///
/// @param self QGeoRoute*
///
int32_t q_georoute_leg_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#setOverallRoute)
///
/// @param self QGeoRoute*
/// @param route QGeoRoute*
///
void q_georoute_set_overall_route(void* self, void* route);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#overallRoute)
///
/// @param self QGeoRoute*
///
QGeoRoute* q_georoute_overall_route(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroute.html#dtor.QGeoRoute)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoRoute*
///
void q_georoute_delete(void* self);

#endif
