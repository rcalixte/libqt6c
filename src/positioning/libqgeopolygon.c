#include "libqgeocoordinate.hpp"
#include "libqgeoshape.hpp"
#include "../libqvariant.hpp"
#include "libqgeopolygon.hpp"
#include "libqgeopolygon.h"

QGeoPolygon* q_geopolygon_new() {
    return QGeoPolygon_New();
}

QGeoPolygon* q_geopolygon_new2(libqt_list /* of QGeoCoordinate* */ path) {
    return QGeoPolygon_New2(path);
}

QGeoPolygon* q_geopolygon_new3(const void* other) {
    return QGeoPolygon_New3((QGeoPolygon*)other);
}

QGeoPolygon* q_geopolygon_new4(const void* other) {
    return QGeoPolygon_New4((QGeoShape*)other);
}

void q_geopolygon_operator_assign(void* self, const void* other) {
    QGeoPolygon_OperatorAssign((QGeoPolygon*)self, (QGeoPolygon*)other);
}

void q_geopolygon_set_perimeter(void* self, libqt_list /* of QGeoCoordinate* */ path) {
    QGeoPolygon_SetPerimeter((QGeoPolygon*)self, path);
}

libqt_list /* of QGeoCoordinate* */ q_geopolygon_perimeter(const void* self) {
    libqt_list _arr = QGeoPolygon_Perimeter((QGeoPolygon*)self);
    return _arr;
}

void q_geopolygon_add_hole(void* self, const void* holePath) {
    QGeoPolygon_AddHole((QGeoPolygon*)self, (QVariant*)holePath);
}

void q_geopolygon_add_hole2(void* self, libqt_list /* of QGeoCoordinate* */ holePath) {
    QGeoPolygon_AddHole2((QGeoPolygon*)self, holePath);
}

libqt_list /* of QVariant* */ q_geopolygon_hole(const void* self, intptr_t index) {
    libqt_list _arr = QGeoPolygon_Hole((QGeoPolygon*)self, index);
    return _arr;
}

libqt_list /* of QGeoCoordinate* */ q_geopolygon_hole_path(const void* self, intptr_t index) {
    libqt_list _arr = QGeoPolygon_HolePath((QGeoPolygon*)self, index);
    return _arr;
}

void q_geopolygon_remove_hole(void* self, intptr_t index) {
    QGeoPolygon_RemoveHole((QGeoPolygon*)self, index);
}

intptr_t q_geopolygon_holes_count(const void* self) {
    return QGeoPolygon_HolesCount((QGeoPolygon*)self);
}

void q_geopolygon_translate(void* self, double degreesLatitude, double degreesLongitude) {
    QGeoPolygon_Translate((QGeoPolygon*)self, degreesLatitude, degreesLongitude);
}

QGeoPolygon* q_geopolygon_translated(const void* self, double degreesLatitude, double degreesLongitude) {
    return QGeoPolygon_Translated((QGeoPolygon*)self, degreesLatitude, degreesLongitude);
}

double q_geopolygon_length(const void* self) {
    return QGeoPolygon_Length((QGeoPolygon*)self);
}

intptr_t q_geopolygon_size(const void* self) {
    return QGeoPolygon_Size((QGeoPolygon*)self);
}

void q_geopolygon_add_coordinate(void* self, const void* coordinate) {
    QGeoPolygon_AddCoordinate((QGeoPolygon*)self, (QGeoCoordinate*)coordinate);
}

void q_geopolygon_insert_coordinate(void* self, intptr_t index, const void* coordinate) {
    QGeoPolygon_InsertCoordinate((QGeoPolygon*)self, index, (QGeoCoordinate*)coordinate);
}

void q_geopolygon_replace_coordinate(void* self, intptr_t index, const void* coordinate) {
    QGeoPolygon_ReplaceCoordinate((QGeoPolygon*)self, index, (QGeoCoordinate*)coordinate);
}

QGeoCoordinate* q_geopolygon_coordinate_at(const void* self, intptr_t index) {
    return QGeoPolygon_CoordinateAt((QGeoPolygon*)self, index);
}

bool q_geopolygon_contains_coordinate(const void* self, const void* coordinate) {
    return QGeoPolygon_ContainsCoordinate((QGeoPolygon*)self, (QGeoCoordinate*)coordinate);
}

void q_geopolygon_remove_coordinate(void* self, const void* coordinate) {
    QGeoPolygon_RemoveCoordinate((QGeoPolygon*)self, (QGeoCoordinate*)coordinate);
}

void q_geopolygon_remove_coordinate2(void* self, intptr_t index) {
    QGeoPolygon_RemoveCoordinate2((QGeoPolygon*)self, index);
}

const char* q_geopolygon_to_string(const void* self) {
    libqt_string _str = QGeoPolygon_ToString((QGeoPolygon*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

double q_geopolygon_length1(const void* self, intptr_t indexFrom) {
    return QGeoPolygon_Length1((QGeoPolygon*)self, indexFrom);
}

double q_geopolygon_length2(const void* self, intptr_t indexFrom, intptr_t indexTo) {
    return QGeoPolygon_Length2((QGeoPolygon*)self, indexFrom, indexTo);
}

int32_t q_geopolygon_type(const void* self) {
    return QGeoShape_Type((QGeoShape*)self);
}

bool q_geopolygon_is_valid(const void* self) {
    return QGeoShape_IsValid((QGeoShape*)self);
}

bool q_geopolygon_is_empty(const void* self) {
    return QGeoShape_IsEmpty((QGeoShape*)self);
}

bool q_geopolygon_contains(const void* self, const void* coordinate) {
    return QGeoShape_Contains((QGeoShape*)self, (QGeoCoordinate*)coordinate);
}

QGeoRectangle* q_geopolygon_bounding_geo_rectangle(const void* self) {
    return QGeoShape_BoundingGeoRectangle((QGeoShape*)self);
}

QGeoCoordinate* q_geopolygon_center(const void* self) {
    return QGeoShape_Center((QGeoShape*)self);
}

void q_geopolygon_delete(void* self) {
    QGeoPolygon_Delete((QGeoPolygon*)(self));
}
