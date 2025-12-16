#include "libqgeoaddress.hpp"
#include "libqgeocoordinate.hpp"
#include "libqgeoshape.hpp"
#include "../libqvariant.hpp"
#include "libqgeolocation.hpp"
#include "libqgeolocation.h"

QGeoLocation* q_geolocation_new() {
    return QGeoLocation_new();
}

QGeoLocation* q_geolocation_new2(void* other) {
    return QGeoLocation_new2((QGeoLocation*)other);
}

void q_geolocation_operator_assign(void* self, void* other) {
    QGeoLocation_OperatorAssign((QGeoLocation*)self, (QGeoLocation*)other);
}

void q_geolocation_swap(void* self, void* other) {
    QGeoLocation_Swap((QGeoLocation*)self, (QGeoLocation*)other);
}

QGeoAddress* q_geolocation_address(void* self) {
    return QGeoLocation_Address((QGeoLocation*)self);
}

void q_geolocation_set_address(void* self, void* address) {
    QGeoLocation_SetAddress((QGeoLocation*)self, (QGeoAddress*)address);
}

QGeoCoordinate* q_geolocation_coordinate(void* self) {
    return QGeoLocation_Coordinate((QGeoLocation*)self);
}

void q_geolocation_set_coordinate(void* self, void* position) {
    QGeoLocation_SetCoordinate((QGeoLocation*)self, (QGeoCoordinate*)position);
}

QGeoShape* q_geolocation_bounding_shape(void* self) {
    return QGeoLocation_BoundingShape((QGeoLocation*)self);
}

void q_geolocation_set_bounding_shape(void* self, void* shape) {
    QGeoLocation_SetBoundingShape((QGeoLocation*)self, (QGeoShape*)shape);
}

libqt_map /* of const char* to QVariant* */ q_geolocation_extended_attributes(void* self) {
    return QGeoLocation_ExtendedAttributes((QGeoLocation*)self);
}

void q_geolocation_set_extended_attributes(void* self, libqt_map /* of const char* to QVariant* */ data) {
    QGeoLocation_SetExtendedAttributes((QGeoLocation*)self, data);
}

bool q_geolocation_is_empty(void* self) {
    return QGeoLocation_IsEmpty((QGeoLocation*)self);
}

void q_geolocation_delete(void* self) {
    QGeoLocation_Delete((QGeoLocation*)(self));
}
