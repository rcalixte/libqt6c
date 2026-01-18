#include "libqgeocoordinate.hpp"
#include "libqgeoshape.hpp"
#include "../libqvariant.hpp"
#include "libqgeopolygon.hpp"
#include "libqgeopolygon.h"

QGeoPolygon* q_geopolygon_new() {
    return QGeoPolygon_new();
}

QGeoPolygon* q_geopolygon_new2(libqt_list /* of QGeoCoordinate* */ path) {
    return QGeoPolygon_new2(path);
}

QGeoPolygon* q_geopolygon_new3(void* other) {
    return QGeoPolygon_new3((QGeoPolygon*)other);
}

QGeoPolygon* q_geopolygon_new4(void* other) {
    return QGeoPolygon_new4((QGeoShape*)other);
}

void q_geopolygon_operator_assign(void* self, void* other) {
    QGeoPolygon_OperatorAssign((QGeoPolygon*)self, (QGeoPolygon*)other);
}

void q_geopolygon_set_perimeter(void* self, libqt_list /* of QGeoCoordinate* */ path) {
    QGeoPolygon_SetPerimeter((QGeoPolygon*)self, path);
}

libqt_list /* of QGeoCoordinate* */ q_geopolygon_perimeter(void* self) {
    libqt_list _arr = QGeoPolygon_Perimeter((QGeoPolygon*)self);
    return _arr;
}

void q_geopolygon_add_hole(void* self, void* holePath) {
    QGeoPolygon_AddHole((QGeoPolygon*)self, (QVariant*)holePath);
}

void q_geopolygon_add_hole2(void* self, libqt_list /* of QGeoCoordinate* */ holePath) {
    QGeoPolygon_AddHole2((QGeoPolygon*)self, holePath);
}

libqt_list /* of QVariant* */ q_geopolygon_hole(void* self, int64_t index) {
    libqt_list _arr = QGeoPolygon_Hole((QGeoPolygon*)self, index);
    return _arr;
}

libqt_list /* of QGeoCoordinate* */ q_geopolygon_hole_path(void* self, int64_t index) {
    libqt_list _arr = QGeoPolygon_HolePath((QGeoPolygon*)self, index);
    return _arr;
}

void q_geopolygon_remove_hole(void* self, int64_t index) {
    QGeoPolygon_RemoveHole((QGeoPolygon*)self, index);
}

int64_t q_geopolygon_holes_count(void* self) {
    return QGeoPolygon_HolesCount((QGeoPolygon*)self);
}

void q_geopolygon_translate(void* self, double degreesLatitude, double degreesLongitude) {
    QGeoPolygon_Translate((QGeoPolygon*)self, degreesLatitude, degreesLongitude);
}

QGeoPolygon* q_geopolygon_translated(void* self, double degreesLatitude, double degreesLongitude) {
    return QGeoPolygon_Translated((QGeoPolygon*)self, degreesLatitude, degreesLongitude);
}

double q_geopolygon_length(void* self) {
    return QGeoPolygon_Length((QGeoPolygon*)self);
}

int64_t q_geopolygon_size(void* self) {
    return QGeoPolygon_Size((QGeoPolygon*)self);
}

void q_geopolygon_add_coordinate(void* self, void* coordinate) {
    QGeoPolygon_AddCoordinate((QGeoPolygon*)self, (QGeoCoordinate*)coordinate);
}

void q_geopolygon_insert_coordinate(void* self, int64_t index, void* coordinate) {
    QGeoPolygon_InsertCoordinate((QGeoPolygon*)self, index, (QGeoCoordinate*)coordinate);
}

void q_geopolygon_replace_coordinate(void* self, int64_t index, void* coordinate) {
    QGeoPolygon_ReplaceCoordinate((QGeoPolygon*)self, index, (QGeoCoordinate*)coordinate);
}

QGeoCoordinate* q_geopolygon_coordinate_at(void* self, int64_t index) {
    return QGeoPolygon_CoordinateAt((QGeoPolygon*)self, index);
}

bool q_geopolygon_contains_coordinate(void* self, void* coordinate) {
    return QGeoPolygon_ContainsCoordinate((QGeoPolygon*)self, (QGeoCoordinate*)coordinate);
}

void q_geopolygon_remove_coordinate(void* self, void* coordinate) {
    QGeoPolygon_RemoveCoordinate((QGeoPolygon*)self, (QGeoCoordinate*)coordinate);
}

void q_geopolygon_remove_coordinate2(void* self, int64_t index) {
    QGeoPolygon_RemoveCoordinate2((QGeoPolygon*)self, index);
}

const char* q_geopolygon_to_string(void* self) {
    libqt_string _str = QGeoPolygon_ToString((QGeoPolygon*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

double q_geopolygon_length1(void* self, int64_t indexFrom) {
    return QGeoPolygon_Length1((QGeoPolygon*)self, indexFrom);
}

double q_geopolygon_length2(void* self, int64_t indexFrom, int64_t indexTo) {
    return QGeoPolygon_Length2((QGeoPolygon*)self, indexFrom, indexTo);
}

int32_t q_geopolygon_type(void* self) {
    return QGeoShape_Type((QGeoShape*)self);
}

bool q_geopolygon_is_valid(void* self) {
    return QGeoShape_IsValid((QGeoShape*)self);
}

bool q_geopolygon_is_empty(void* self) {
    return QGeoShape_IsEmpty((QGeoShape*)self);
}

bool q_geopolygon_contains(void* self, void* coordinate) {
    return QGeoShape_Contains((QGeoShape*)self, (QGeoCoordinate*)coordinate);
}

QGeoRectangle* q_geopolygon_bounding_geo_rectangle(void* self) {
    return QGeoShape_BoundingGeoRectangle((QGeoShape*)self);
}

QGeoCoordinate* q_geopolygon_center(void* self) {
    return QGeoShape_Center((QGeoShape*)self);
}

void q_geopolygon_delete(void* self) {
    QGeoPolygon_Delete((QGeoPolygon*)(self));
}
