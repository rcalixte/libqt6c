#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQGEOROUTEREQUEST_H
#define SRC_LOCATION_QT6C_LIBQGEOROUTEREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html)

/// q_georouterequest_new constructs a new QGeoRouteRequest object.
///
QGeoRouteRequest* q_georouterequest_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html)

/// q_georouterequest_new2 constructs a new QGeoRouteRequest object.
///
/// @param origin QGeoCoordinate*
/// @param destination QGeoCoordinate*
///
QGeoRouteRequest* q_georouterequest_new2(void* origin, void* destination);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html)

/// q_georouterequest_new3 constructs a new QGeoRouteRequest object.
///
/// @param other QGeoRouteRequest*
///
QGeoRouteRequest* q_georouterequest_new3(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html)

/// q_georouterequest_new4 constructs a new QGeoRouteRequest object.
///
/// @param waypoints libqt_list /* of QGeoCoordinate* */
///
QGeoRouteRequest* q_georouterequest_new4(libqt_list waypoints);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#operator-eq)
///
/// @param self QGeoRouteRequest*
/// @param other QGeoRouteRequest*
///
void q_georouterequest_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#swap)
///
/// @param self QGeoRouteRequest*
/// @param other QGeoRouteRequest*
///
void q_georouterequest_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setWaypoints)
///
/// @param self QGeoRouteRequest*
/// @param waypoints libqt_list /* of QGeoCoordinate* */
///
void q_georouterequest_set_waypoints(void* self, libqt_list waypoints);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#waypoints)
///
/// @param self QGeoRouteRequest*
///
libqt_list /* of QGeoCoordinate* */ q_georouterequest_waypoints(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setExcludeAreas)
///
/// @param self QGeoRouteRequest*
/// @param areas libqt_list /* of QGeoRectangle* */
///
void q_georouterequest_set_exclude_areas(void* self, libqt_list areas);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#excludeAreas)
///
/// @param self QGeoRouteRequest*
///
libqt_list /* of QGeoRectangle* */ q_georouterequest_exclude_areas(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setNumberAlternativeRoutes)
///
/// @param self QGeoRouteRequest*
/// @param alternatives int
///
void q_georouterequest_set_number_alternative_routes(void* self, int alternatives);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#numberAlternativeRoutes)
///
/// @param self QGeoRouteRequest*
///
int32_t q_georouterequest_number_alternative_routes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setTravelModes)
///
/// @param self QGeoRouteRequest*
/// @param travelModes flag of enum QGeoRouteRequest__TravelMode
///
void q_georouterequest_set_travel_modes(void* self, int32_t travelModes);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#travelModes)
///
/// @param self QGeoRouteRequest*
///
/// @return flag of enum QGeoRouteRequest__TravelMode
///
int32_t q_georouterequest_travel_modes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setFeatureWeight)
///
/// @param self QGeoRouteRequest*
/// @param featureType enum QGeoRouteRequest__FeatureType
/// @param featureWeight enum QGeoRouteRequest__FeatureWeight
///
void q_georouterequest_set_feature_weight(void* self, int32_t featureType, int32_t featureWeight);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#featureWeight)
///
/// @param self QGeoRouteRequest*
/// @param featureType enum QGeoRouteRequest__FeatureType
///
/// @return enum QGeoRouteRequest__FeatureWeight
///
int32_t q_georouterequest_feature_weight(void* self, int32_t featureType);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#featureTypes)
///
/// @param self QGeoRouteRequest*
///
/// @return libqt_list of enum QGeoRouteRequest__FeatureType
///
libqt_list /* of enum QGeoRouteRequest__FeatureType */ q_georouterequest_feature_types(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setRouteOptimization)
///
/// @param self QGeoRouteRequest*
/// @param optimization flag of enum QGeoRouteRequest__RouteOptimization
///
void q_georouterequest_set_route_optimization(void* self, int32_t optimization);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#routeOptimization)
///
/// @param self QGeoRouteRequest*
///
/// @return flag of enum QGeoRouteRequest__RouteOptimization
///
int32_t q_georouterequest_route_optimization(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setSegmentDetail)
///
/// @param self QGeoRouteRequest*
/// @param segmentDetail enum QGeoRouteRequest__SegmentDetail
///
void q_georouterequest_set_segment_detail(void* self, int32_t segmentDetail);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#segmentDetail)
///
/// @param self QGeoRouteRequest*
///
/// @return enum QGeoRouteRequest__SegmentDetail
///
int32_t q_georouterequest_segment_detail(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setManeuverDetail)
///
/// @param self QGeoRouteRequest*
/// @param maneuverDetail enum QGeoRouteRequest__ManeuverDetail
///
void q_georouterequest_set_maneuver_detail(void* self, int32_t maneuverDetail);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#maneuverDetail)
///
/// @param self QGeoRouteRequest*
///
/// @return enum QGeoRouteRequest__ManeuverDetail
///
int32_t q_georouterequest_maneuver_detail(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#setDepartureTime)
///
/// @param self QGeoRouteRequest*
/// @param departureTime QDateTime*
///
void q_georouterequest_set_departure_time(void* self, void* departureTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#departureTime)
///
/// @param self QGeoRouteRequest*
///
QDateTime* q_georouterequest_departure_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#dtor.QGeoRouteRequest)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoRouteRequest*
///
void q_georouterequest_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#public-types)

typedef enum {
    QGEOROUTEREQUEST_TRAVELMODE_CARTRAVEL = 1,
    QGEOROUTEREQUEST_TRAVELMODE_PEDESTRIANTRAVEL = 2,
    QGEOROUTEREQUEST_TRAVELMODE_BICYCLETRAVEL = 4,
    QGEOROUTEREQUEST_TRAVELMODE_PUBLICTRANSITTRAVEL = 8,
    QGEOROUTEREQUEST_TRAVELMODE_TRUCKTRAVEL = 16
} QGeoRouteRequest__TravelMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#public-types)

typedef enum {
    QGEOROUTEREQUEST_FEATURETYPE_NOFEATURE = 0,
    QGEOROUTEREQUEST_FEATURETYPE_TOLLFEATURE = 1,
    QGEOROUTEREQUEST_FEATURETYPE_HIGHWAYFEATURE = 2,
    QGEOROUTEREQUEST_FEATURETYPE_PUBLICTRANSITFEATURE = 4,
    QGEOROUTEREQUEST_FEATURETYPE_FERRYFEATURE = 8,
    QGEOROUTEREQUEST_FEATURETYPE_TUNNELFEATURE = 16,
    QGEOROUTEREQUEST_FEATURETYPE_DIRTROADFEATURE = 32,
    QGEOROUTEREQUEST_FEATURETYPE_PARKSFEATURE = 64,
    QGEOROUTEREQUEST_FEATURETYPE_MOTORPOOLLANEFEATURE = 128,
    QGEOROUTEREQUEST_FEATURETYPE_TRAFFICFEATURE = 256
} QGeoRouteRequest__FeatureType;

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#public-types)

typedef enum {
    QGEOROUTEREQUEST_FEATUREWEIGHT_NEUTRALFEATUREWEIGHT = 0,
    QGEOROUTEREQUEST_FEATUREWEIGHT_PREFERFEATUREWEIGHT = 1,
    QGEOROUTEREQUEST_FEATUREWEIGHT_REQUIREFEATUREWEIGHT = 2,
    QGEOROUTEREQUEST_FEATUREWEIGHT_AVOIDFEATUREWEIGHT = 4,
    QGEOROUTEREQUEST_FEATUREWEIGHT_DISALLOWFEATUREWEIGHT = 8
} QGeoRouteRequest__FeatureWeight;

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#public-types)

typedef enum {
    QGEOROUTEREQUEST_ROUTEOPTIMIZATION_SHORTESTROUTE = 1,
    QGEOROUTEREQUEST_ROUTEOPTIMIZATION_FASTESTROUTE = 2,
    QGEOROUTEREQUEST_ROUTEOPTIMIZATION_MOSTECONOMICROUTE = 4,
    QGEOROUTEREQUEST_ROUTEOPTIMIZATION_MOSTSCENICROUTE = 8
} QGeoRouteRequest__RouteOptimization;

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#public-types)

typedef enum {
    QGEOROUTEREQUEST_SEGMENTDETAIL_NOSEGMENTDATA = 0,
    QGEOROUTEREQUEST_SEGMENTDETAIL_BASICSEGMENTDATA = 1
} QGeoRouteRequest__SegmentDetail;

/// [Upstream resources](https://doc.qt.io/qt-6/qgeorouterequest.html#public-types)

typedef enum {
    QGEOROUTEREQUEST_MANEUVERDETAIL_NOMANEUVERS = 0,
    QGEOROUTEREQUEST_MANEUVERDETAIL_BASICMANEUVERS = 1
} QGeoRouteRequest__ManeuverDetail;

#endif
