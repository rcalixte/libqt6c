#include "../libqdatetime.hpp"
#include "libqgeocoordinate.hpp"
#include "libqgeopositioninfo.hpp"
#include "libqgeopositioninfo.h"

QGeoPositionInfo* q_geopositioninfo_new() {
    return QGeoPositionInfo_new();
}

QGeoPositionInfo* q_geopositioninfo_new2(void* coordinate, void* updateTime) {
    return QGeoPositionInfo_new2((QGeoCoordinate*)coordinate, (QDateTime*)updateTime);
}

QGeoPositionInfo* q_geopositioninfo_new3(void* other) {
    return QGeoPositionInfo_new3((QGeoPositionInfo*)other);
}

void q_geopositioninfo_operator_assign(void* self, void* other) {
    QGeoPositionInfo_OperatorAssign((QGeoPositionInfo*)self, (QGeoPositionInfo*)other);
}

void q_geopositioninfo_swap(void* self, void* other) {
    QGeoPositionInfo_Swap((QGeoPositionInfo*)self, (QGeoPositionInfo*)other);
}

bool q_geopositioninfo_is_valid(void* self) {
    return QGeoPositionInfo_IsValid((QGeoPositionInfo*)self);
}

void q_geopositioninfo_set_timestamp(void* self, void* timestamp) {
    QGeoPositionInfo_SetTimestamp((QGeoPositionInfo*)self, (QDateTime*)timestamp);
}

QDateTime* q_geopositioninfo_timestamp(void* self) {
    return QGeoPositionInfo_Timestamp((QGeoPositionInfo*)self);
}

void q_geopositioninfo_set_coordinate(void* self, void* coordinate) {
    QGeoPositionInfo_SetCoordinate((QGeoPositionInfo*)self, (QGeoCoordinate*)coordinate);
}

QGeoCoordinate* q_geopositioninfo_coordinate(void* self) {
    return QGeoPositionInfo_Coordinate((QGeoPositionInfo*)self);
}

void q_geopositioninfo_set_attribute(void* self, int32_t attribute, double value) {
    QGeoPositionInfo_SetAttribute((QGeoPositionInfo*)self, attribute, value);
}

double q_geopositioninfo_attribute(void* self, int32_t attribute) {
    return QGeoPositionInfo_Attribute((QGeoPositionInfo*)self, attribute);
}

void q_geopositioninfo_remove_attribute(void* self, int32_t attribute) {
    QGeoPositionInfo_RemoveAttribute((QGeoPositionInfo*)self, attribute);
}

bool q_geopositioninfo_has_attribute(void* self, int32_t attribute) {
    return QGeoPositionInfo_HasAttribute((QGeoPositionInfo*)self, attribute);
}

void q_geopositioninfo_detach(void* self) {
    QGeoPositionInfo_Detach((QGeoPositionInfo*)self);
}

void q_geopositioninfo_delete(void* self) {
    QGeoPositionInfo_Delete((QGeoPositionInfo*)(self));
}
