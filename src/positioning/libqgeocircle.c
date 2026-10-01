#include "libqgeocoordinate.hpp"
#include "libqgeoshape.hpp"
#include "libqgeocircle.hpp"
#include "libqgeocircle.h"

QGeoCircle* q_geocircle_new() {
    return QGeoCircle_New();
}

QGeoCircle* q_geocircle_new2(const void* center) {
    return QGeoCircle_New2((QGeoCoordinate*)center);
}

QGeoCircle* q_geocircle_new3(const void* other) {
    return QGeoCircle_New3((QGeoCircle*)other);
}

QGeoCircle* q_geocircle_new4(const void* other) {
    return QGeoCircle_New4((QGeoShape*)other);
}

QGeoCircle* q_geocircle_new5(const void* center, double radius) {
    return QGeoCircle_New5((QGeoCoordinate*)center, radius);
}

void q_geocircle_operator_assign(void* self, const void* other) {
    QGeoCircle_OperatorAssign((QGeoCircle*)self, (QGeoCircle*)other);
}

void q_geocircle_set_center(void* self, const void* center) {
    QGeoCircle_SetCenter((QGeoCircle*)self, (QGeoCoordinate*)center);
}

QGeoCoordinate* q_geocircle_center(const void* self) {
    return QGeoCircle_Center((QGeoCircle*)self);
}

void q_geocircle_set_radius(void* self, double radius) {
    QGeoCircle_SetRadius((QGeoCircle*)self, radius);
}

double q_geocircle_radius(const void* self) {
    return QGeoCircle_Radius((QGeoCircle*)self);
}

void q_geocircle_translate(void* self, double degreesLatitude, double degreesLongitude) {
    QGeoCircle_Translate((QGeoCircle*)self, degreesLatitude, degreesLongitude);
}

QGeoCircle* q_geocircle_translated(const void* self, double degreesLatitude, double degreesLongitude) {
    return QGeoCircle_Translated((QGeoCircle*)self, degreesLatitude, degreesLongitude);
}

void q_geocircle_extend_circle(void* self, const void* coordinate) {
    QGeoCircle_ExtendCircle((QGeoCircle*)self, (QGeoCoordinate*)coordinate);
}

const char* q_geocircle_to_string(const void* self) {
    libqt_string _str = QGeoCircle_ToString((QGeoCircle*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_geocircle_type(const void* self) {
    return QGeoShape_Type((QGeoShape*)self);
}

bool q_geocircle_is_valid(const void* self) {
    return QGeoShape_IsValid((QGeoShape*)self);
}

bool q_geocircle_is_empty(const void* self) {
    return QGeoShape_IsEmpty((QGeoShape*)self);
}

bool q_geocircle_contains(const void* self, const void* coordinate) {
    return QGeoShape_Contains((QGeoShape*)self, (QGeoCoordinate*)coordinate);
}

QGeoRectangle* q_geocircle_bounding_geo_rectangle(const void* self) {
    return QGeoShape_BoundingGeoRectangle((QGeoShape*)self);
}

void q_geocircle_delete(void* self) {
    QGeoCircle_Delete((QGeoCircle*)(self));
}
