#include "../libqdatetime.hpp"
#include "libqgeorouterequest.hpp"
#include "libqgeorouterequest.h"

QGeoRouteRequest* q_georouterequest_new() {
    return QGeoRouteRequest_new();
}

QGeoRouteRequest* q_georouterequest_new2(void* origin, void* destination) {
    return QGeoRouteRequest_new2((QGeoCoordinate*)origin, (QGeoCoordinate*)destination);
}

QGeoRouteRequest* q_georouterequest_new3(void* other) {
    return QGeoRouteRequest_new3((QGeoRouteRequest*)other);
}

QGeoRouteRequest* q_georouterequest_new4(libqt_list waypoints) {
    return QGeoRouteRequest_new4(waypoints);
}

void q_georouterequest_operator_assign(void* self, void* other) {
    QGeoRouteRequest_OperatorAssign((QGeoRouteRequest*)self, (QGeoRouteRequest*)other);
}

void q_georouterequest_swap(void* self, void* other) {
    QGeoRouteRequest_Swap((QGeoRouteRequest*)self, (QGeoRouteRequest*)other);
}

void q_georouterequest_set_waypoints(void* self, libqt_list waypoints) {
    QGeoRouteRequest_SetWaypoints((QGeoRouteRequest*)self, waypoints);
}

libqt_list /* of QGeoCoordinate* */ q_georouterequest_waypoints(void* self) {
    libqt_list _arr = QGeoRouteRequest_Waypoints((QGeoRouteRequest*)self);
    return _arr;
}

void q_georouterequest_set_exclude_areas(void* self, libqt_list areas) {
    QGeoRouteRequest_SetExcludeAreas((QGeoRouteRequest*)self, areas);
}

libqt_list /* of QGeoRectangle* */ q_georouterequest_exclude_areas(void* self) {
    libqt_list _arr = QGeoRouteRequest_ExcludeAreas((QGeoRouteRequest*)self);
    return _arr;
}

void q_georouterequest_set_number_alternative_routes(void* self, int alternatives) {
    QGeoRouteRequest_SetNumberAlternativeRoutes((QGeoRouteRequest*)self, alternatives);
}

int32_t q_georouterequest_number_alternative_routes(void* self) {
    return QGeoRouteRequest_NumberAlternativeRoutes((QGeoRouteRequest*)self);
}

void q_georouterequest_set_travel_modes(void* self, int32_t travelModes) {
    QGeoRouteRequest_SetTravelModes((QGeoRouteRequest*)self, travelModes);
}

int32_t q_georouterequest_travel_modes(void* self) {
    return QGeoRouteRequest_TravelModes((QGeoRouteRequest*)self);
}

void q_georouterequest_set_feature_weight(void* self, int32_t featureType, int32_t featureWeight) {
    QGeoRouteRequest_SetFeatureWeight((QGeoRouteRequest*)self, featureType, featureWeight);
}

int32_t q_georouterequest_feature_weight(void* self, int32_t featureType) {
    return QGeoRouteRequest_FeatureWeight((QGeoRouteRequest*)self, featureType);
}

libqt_list /* of enum QGeoRouteRequest__FeatureType */ q_georouterequest_feature_types(void* self) {
    libqt_list _arr = QGeoRouteRequest_FeatureTypes((QGeoRouteRequest*)self);
    return _arr;
}

void q_georouterequest_set_route_optimization(void* self, int32_t optimization) {
    QGeoRouteRequest_SetRouteOptimization((QGeoRouteRequest*)self, optimization);
}

int32_t q_georouterequest_route_optimization(void* self) {
    return QGeoRouteRequest_RouteOptimization((QGeoRouteRequest*)self);
}

void q_georouterequest_set_segment_detail(void* self, int32_t segmentDetail) {
    QGeoRouteRequest_SetSegmentDetail((QGeoRouteRequest*)self, segmentDetail);
}

int32_t q_georouterequest_segment_detail(void* self) {
    return QGeoRouteRequest_SegmentDetail((QGeoRouteRequest*)self);
}

void q_georouterequest_set_maneuver_detail(void* self, int32_t maneuverDetail) {
    QGeoRouteRequest_SetManeuverDetail((QGeoRouteRequest*)self, maneuverDetail);
}

int32_t q_georouterequest_maneuver_detail(void* self) {
    return QGeoRouteRequest_ManeuverDetail((QGeoRouteRequest*)self);
}

void q_georouterequest_set_departure_time(void* self, void* departureTime) {
    QGeoRouteRequest_SetDepartureTime((QGeoRouteRequest*)self, (QDateTime*)departureTime);
}

QDateTime* q_georouterequest_departure_time(void* self) {
    return QGeoRouteRequest_DepartureTime((QGeoRouteRequest*)self);
}

void q_georouterequest_delete(void* self) {
    QGeoRouteRequest_Delete((QGeoRouteRequest*)(self));
}
