#include "libqgeorouterequest.hpp"
#include "libqgeoroutesegment.hpp"
#include "../libqvariant.hpp"
#include "libqgeoroute.hpp"
#include "libqgeoroute.h"

QGeoRoute* q_georoute_new() {
    return QGeoRoute_new();
}

QGeoRoute* q_georoute_new2(void* other) {
    return QGeoRoute_new2((QGeoRoute*)other);
}

void q_georoute_operator_assign(void* self, void* other) {
    QGeoRoute_OperatorAssign((QGeoRoute*)self, (QGeoRoute*)other);
}

void q_georoute_swap(void* self, void* other) {
    QGeoRoute_Swap((QGeoRoute*)self, (QGeoRoute*)other);
}

void q_georoute_set_route_id(void* self, const char* id) {
    QGeoRoute_SetRouteId((QGeoRoute*)self, qstring(id));
}

const char* q_georoute_route_id(void* self) {
    libqt_string _str = QGeoRoute_RouteId((QGeoRoute*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_georoute_set_request(void* self, void* request) {
    QGeoRoute_SetRequest((QGeoRoute*)self, (QGeoRouteRequest*)request);
}

QGeoRouteRequest* q_georoute_request(void* self) {
    return QGeoRoute_Request((QGeoRoute*)self);
}

void q_georoute_set_bounds(void* self, void* bounds) {
    QGeoRoute_SetBounds((QGeoRoute*)self, (QGeoRectangle*)bounds);
}

QGeoRectangle* q_georoute_bounds(void* self) {
    return QGeoRoute_Bounds((QGeoRoute*)self);
}

void q_georoute_set_first_route_segment(void* self, void* routeSegment) {
    QGeoRoute_SetFirstRouteSegment((QGeoRoute*)self, (QGeoRouteSegment*)routeSegment);
}

QGeoRouteSegment* q_georoute_first_route_segment(void* self) {
    return QGeoRoute_FirstRouteSegment((QGeoRoute*)self);
}

int64_t q_georoute_segments_count(void* self) {
    return QGeoRoute_SegmentsCount((QGeoRoute*)self);
}

libqt_list /* of QGeoRouteSegment* */ q_georoute_segments(void* self) {
    libqt_list _arr = QGeoRoute_Segments((QGeoRoute*)self);
    return _arr;
}

void q_georoute_set_travel_time(void* self, int secs) {
    QGeoRoute_SetTravelTime((QGeoRoute*)self, secs);
}

int32_t q_georoute_travel_time(void* self) {
    return QGeoRoute_TravelTime((QGeoRoute*)self);
}

void q_georoute_set_distance(void* self, double distance) {
    QGeoRoute_SetDistance((QGeoRoute*)self, distance);
}

double q_georoute_distance(void* self) {
    return QGeoRoute_Distance((QGeoRoute*)self);
}

void q_georoute_set_travel_mode(void* self, int32_t mode) {
    QGeoRoute_SetTravelMode((QGeoRoute*)self, mode);
}

int32_t q_georoute_travel_mode(void* self) {
    return QGeoRoute_TravelMode((QGeoRoute*)self);
}

void q_georoute_set_path(void* self, libqt_list path) {
    QGeoRoute_SetPath((QGeoRoute*)self, path);
}

libqt_list /* of QGeoCoordinate* */ q_georoute_path(void* self) {
    libqt_list _arr = QGeoRoute_Path((QGeoRoute*)self);
    return _arr;
}

void q_georoute_set_route_legs(void* self, libqt_list legs) {
    QGeoRoute_SetRouteLegs((QGeoRoute*)self, legs);
}

libqt_list /* of QGeoRoute* */ q_georoute_route_legs(void* self) {
    libqt_list _arr = QGeoRoute_RouteLegs((QGeoRoute*)self);
    return _arr;
}

void q_georoute_set_extended_attributes(void* self, libqt_map /* of const char* to QVariant* */ extendedAttributes) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map extendedAttributes_ret;
    extendedAttributes_ret.len = extendedAttributes.len;
    extendedAttributes_ret.keys = malloc(extendedAttributes_ret.len * sizeof(libqt_string));
    if (extendedAttributes_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys\n");
        abort();
    }
    extendedAttributes_ret.values = malloc(extendedAttributes_ret.len * sizeof(QVariant*));
    if (extendedAttributes_ret.values == NULL) {
        free(extendedAttributes_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values\n");
        abort();
    }
    const char** extendedAttributes_karr = (const char**)extendedAttributes.keys;
    libqt_string* extendedAttributes_kdest = (libqt_string*)extendedAttributes_ret.keys;
    QVariant** extendedAttributes_varr = (QVariant**)extendedAttributes.values;
    QVariant** extendedAttributes_vdest = (QVariant**)extendedAttributes_ret.values;
    for (size_t i = 0; i < extendedAttributes_ret.len; ++i) {
        extendedAttributes_kdest[i] = qstring(extendedAttributes_karr[i]);
        extendedAttributes_vdest[i] = extendedAttributes_varr[i];
    }
    QGeoRoute_SetExtendedAttributes((QGeoRoute*)self, extendedAttributes_ret);
    libqt_free(extendedAttributes_ret.keys);
    libqt_free(extendedAttributes_ret.values);
}

libqt_map /* of const char* to QVariant* */ q_georoute_extended_attributes(void* self) {
    // Convert QMap<QString,QVariant> to libqt_map
    libqt_map _out = QGeoRoute_ExtendedAttributes((QGeoRoute*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    const char** _ret_keys = (const char**)malloc(_ret.len * sizeof(const char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Memory allocation failed in q_georoute_extended_attributes");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (const char*)_out_keys[i].data;
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = _out.values;
    free(_out_keys);
    return _ret;
}

void q_georoute_set_leg_index(void* self, int idx) {
    QGeoRoute_SetLegIndex((QGeoRoute*)self, idx);
}

int32_t q_georoute_leg_index(void* self) {
    return QGeoRoute_LegIndex((QGeoRoute*)self);
}

void q_georoute_set_overall_route(void* self, void* route) {
    QGeoRoute_SetOverallRoute((QGeoRoute*)self, (QGeoRoute*)route);
}

QGeoRoute* q_georoute_overall_route(void* self) {
    return QGeoRoute_OverallRoute((QGeoRoute*)self);
}

void q_georoute_delete(void* self) {
    QGeoRoute_Delete((QGeoRoute*)(self));
}
