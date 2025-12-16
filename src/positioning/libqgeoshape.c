#include "libqgeocoordinate.hpp"
#include "libqgeorectangle.hpp"
#include "libqgeoshape.hpp"
#include "libqgeoshape.h"

QGeoShape* q_geoshape_new() {
    return QGeoShape_new();
}

QGeoShape* q_geoshape_new2(void* other) {
    return QGeoShape_new2((QGeoShape*)other);
}

int32_t q_geoshape_type(void* self) {
    return QGeoShape_Type((QGeoShape*)self);
}

bool q_geoshape_is_valid(void* self) {
    return QGeoShape_IsValid((QGeoShape*)self);
}

bool q_geoshape_is_empty(void* self) {
    return QGeoShape_IsEmpty((QGeoShape*)self);
}

bool q_geoshape_contains(void* self, void* coordinate) {
    return QGeoShape_Contains((QGeoShape*)self, (QGeoCoordinate*)coordinate);
}

QGeoRectangle* q_geoshape_bounding_geo_rectangle(void* self) {
    return QGeoShape_BoundingGeoRectangle((QGeoShape*)self);
}

QGeoCoordinate* q_geoshape_center(void* self) {
    return QGeoShape_Center((QGeoShape*)self);
}

void q_geoshape_operator_assign(void* self, void* other) {
    QGeoShape_OperatorAssign((QGeoShape*)self, (QGeoShape*)other);
}

const char* q_geoshape_to_string(void* self) {
    libqt_string _str = QGeoShape_ToString((QGeoShape*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_geoshape_delete(void* self) {
    QGeoShape_Delete((QGeoShape*)(self));
}
