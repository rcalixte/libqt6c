#include "libqgeocoordinate.hpp"
#include "libqgeocoordinate.h"

QGeoCoordinate* q_geocoordinate_new() {
    return QGeoCoordinate_new();
}

QGeoCoordinate* q_geocoordinate_new2(double latitude, double longitude) {
    return QGeoCoordinate_new2(latitude, longitude);
}

QGeoCoordinate* q_geocoordinate_new3(double latitude, double longitude, double altitude) {
    return QGeoCoordinate_new3(latitude, longitude, altitude);
}

QGeoCoordinate* q_geocoordinate_new4(void* other) {
    return QGeoCoordinate_new4((QGeoCoordinate*)other);
}

void q_geocoordinate_operator_assign(void* self, void* other) {
    QGeoCoordinate_OperatorAssign((QGeoCoordinate*)self, (QGeoCoordinate*)other);
}

void q_geocoordinate_swap(void* self, void* other) {
    QGeoCoordinate_Swap((QGeoCoordinate*)self, (QGeoCoordinate*)other);
}

bool q_geocoordinate_is_valid(void* self) {
    return QGeoCoordinate_IsValid((QGeoCoordinate*)self);
}

int32_t q_geocoordinate_type(void* self) {
    return QGeoCoordinate_Type((QGeoCoordinate*)self);
}

void q_geocoordinate_set_latitude(void* self, double latitude) {
    QGeoCoordinate_SetLatitude((QGeoCoordinate*)self, latitude);
}

double q_geocoordinate_latitude(void* self) {
    return QGeoCoordinate_Latitude((QGeoCoordinate*)self);
}

void q_geocoordinate_set_longitude(void* self, double longitude) {
    QGeoCoordinate_SetLongitude((QGeoCoordinate*)self, longitude);
}

double q_geocoordinate_longitude(void* self) {
    return QGeoCoordinate_Longitude((QGeoCoordinate*)self);
}

void q_geocoordinate_set_altitude(void* self, double altitude) {
    QGeoCoordinate_SetAltitude((QGeoCoordinate*)self, altitude);
}

double q_geocoordinate_altitude(void* self) {
    return QGeoCoordinate_Altitude((QGeoCoordinate*)self);
}

double q_geocoordinate_distance_to(void* self, void* other) {
    return QGeoCoordinate_DistanceTo((QGeoCoordinate*)self, (QGeoCoordinate*)other);
}

double q_geocoordinate_azimuth_to(void* self, void* other) {
    return QGeoCoordinate_AzimuthTo((QGeoCoordinate*)self, (QGeoCoordinate*)other);
}

QGeoCoordinate* q_geocoordinate_at_distance_and_azimuth(void* self, double distance, double azimuth) {
    return QGeoCoordinate_AtDistanceAndAzimuth((QGeoCoordinate*)self, distance, azimuth);
}

const char* q_geocoordinate_to_string(void* self) {
    libqt_string _str = QGeoCoordinate_ToString((QGeoCoordinate*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QGeoCoordinate* q_geocoordinate_at_distance_and_azimuth3(void* self, double distance, double azimuth, double distanceUp) {
    return QGeoCoordinate_AtDistanceAndAzimuth3((QGeoCoordinate*)self, distance, azimuth, distanceUp);
}

const char* q_geocoordinate_to_string1(void* self, int32_t format) {
    libqt_string _str = QGeoCoordinate_ToString1((QGeoCoordinate*)self, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_geocoordinate_delete(void* self) {
    QGeoCoordinate_Delete((QGeoCoordinate*)(self));
}
