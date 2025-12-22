#include "libqgeomaneuver.hpp"
#include "libqgeoroutesegment.hpp"
#include "libqgeoroutesegment.h"

QGeoRouteSegment* q_georoutesegment_new() {
    return QGeoRouteSegment_new();
}

QGeoRouteSegment* q_georoutesegment_new2(void* other) {
    return QGeoRouteSegment_new2((QGeoRouteSegment*)other);
}

void q_georoutesegment_operator_assign(void* self, void* other) {
    QGeoRouteSegment_OperatorAssign((QGeoRouteSegment*)self, (QGeoRouteSegment*)other);
}

void q_georoutesegment_swap(void* self, void* other) {
    QGeoRouteSegment_Swap((QGeoRouteSegment*)self, (QGeoRouteSegment*)other);
}

bool q_georoutesegment_is_valid(void* self) {
    return QGeoRouteSegment_IsValid((QGeoRouteSegment*)self);
}

bool q_georoutesegment_is_leg_last_segment(void* self) {
    return QGeoRouteSegment_IsLegLastSegment((QGeoRouteSegment*)self);
}

void q_georoutesegment_set_next_route_segment(void* self, void* routeSegment) {
    QGeoRouteSegment_SetNextRouteSegment((QGeoRouteSegment*)self, (QGeoRouteSegment*)routeSegment);
}

QGeoRouteSegment* q_georoutesegment_next_route_segment(void* self) {
    return QGeoRouteSegment_NextRouteSegment((QGeoRouteSegment*)self);
}

void q_georoutesegment_set_travel_time(void* self, int secs) {
    QGeoRouteSegment_SetTravelTime((QGeoRouteSegment*)self, secs);
}

int32_t q_georoutesegment_travel_time(void* self) {
    return QGeoRouteSegment_TravelTime((QGeoRouteSegment*)self);
}

void q_georoutesegment_set_distance(void* self, double distance) {
    QGeoRouteSegment_SetDistance((QGeoRouteSegment*)self, distance);
}

double q_georoutesegment_distance(void* self) {
    return QGeoRouteSegment_Distance((QGeoRouteSegment*)self);
}

void q_georoutesegment_set_path(void* self, libqt_list path) {
    QGeoRouteSegment_SetPath((QGeoRouteSegment*)self, path);
}

libqt_list /* of QGeoCoordinate* */ q_georoutesegment_path(void* self) {
    libqt_list _arr = QGeoRouteSegment_Path((QGeoRouteSegment*)self);
    return _arr;
}

void q_georoutesegment_set_maneuver(void* self, void* maneuver) {
    QGeoRouteSegment_SetManeuver((QGeoRouteSegment*)self, (QGeoManeuver*)maneuver);
}

QGeoManeuver* q_georoutesegment_maneuver(void* self) {
    return QGeoRouteSegment_Maneuver((QGeoRouteSegment*)self);
}

void q_georoutesegment_delete(void* self) {
    QGeoRouteSegment_Delete((QGeoRouteSegment*)(self));
}
