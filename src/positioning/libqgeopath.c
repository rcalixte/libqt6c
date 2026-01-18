#include "libqgeocoordinate.hpp"
#include "libqgeoshape.hpp"
#include "../libqvariant.hpp"
#include "libqgeopath.hpp"
#include "libqgeopath.h"

QGeoPath* q_geopath_new() {
    return QGeoPath_new();
}

QGeoPath* q_geopath_new2(libqt_list /* of QGeoCoordinate* */ path) {
    return QGeoPath_new2(path);
}

QGeoPath* q_geopath_new3(void* other) {
    return QGeoPath_new3((QGeoPath*)other);
}

QGeoPath* q_geopath_new4(void* other) {
    return QGeoPath_new4((QGeoShape*)other);
}

QGeoPath* q_geopath_new5(libqt_list /* of QGeoCoordinate* */ path, double* width) {
    return QGeoPath_new5(path, width);
}

void q_geopath_operator_assign(void* self, void* other) {
    QGeoPath_OperatorAssign((QGeoPath*)self, (QGeoPath*)other);
}

void q_geopath_set_path(void* self, libqt_list /* of QGeoCoordinate* */ path) {
    QGeoPath_SetPath((QGeoPath*)self, path);
}

libqt_list /* of QGeoCoordinate* */ q_geopath_path(void* self) {
    libqt_list _arr = QGeoPath_Path((QGeoPath*)self);
    return _arr;
}

void q_geopath_clear_path(void* self) {
    QGeoPath_ClearPath((QGeoPath*)self);
}

void q_geopath_set_variant_path(void* self, libqt_list /* of QVariant* */ path) {
    QGeoPath_SetVariantPath((QGeoPath*)self, path);
}

libqt_list /* of QVariant* */ q_geopath_variant_path(void* self) {
    libqt_list _arr = QGeoPath_VariantPath((QGeoPath*)self);
    return _arr;
}

void q_geopath_set_width(void* self, double* width) {
    QGeoPath_SetWidth((QGeoPath*)self, width);
}

double q_geopath_width(void* self) {
    return QGeoPath_Width((QGeoPath*)self);
}

void q_geopath_translate(void* self, double degreesLatitude, double degreesLongitude) {
    QGeoPath_Translate((QGeoPath*)self, degreesLatitude, degreesLongitude);
}

QGeoPath* q_geopath_translated(void* self, double degreesLatitude, double degreesLongitude) {
    return QGeoPath_Translated((QGeoPath*)self, degreesLatitude, degreesLongitude);
}

double q_geopath_length(void* self) {
    return QGeoPath_Length((QGeoPath*)self);
}

int64_t q_geopath_size(void* self) {
    return QGeoPath_Size((QGeoPath*)self);
}

void q_geopath_add_coordinate(void* self, void* coordinate) {
    QGeoPath_AddCoordinate((QGeoPath*)self, (QGeoCoordinate*)coordinate);
}

void q_geopath_insert_coordinate(void* self, int64_t index, void* coordinate) {
    QGeoPath_InsertCoordinate((QGeoPath*)self, index, (QGeoCoordinate*)coordinate);
}

void q_geopath_replace_coordinate(void* self, int64_t index, void* coordinate) {
    QGeoPath_ReplaceCoordinate((QGeoPath*)self, index, (QGeoCoordinate*)coordinate);
}

QGeoCoordinate* q_geopath_coordinate_at(void* self, int64_t index) {
    return QGeoPath_CoordinateAt((QGeoPath*)self, index);
}

bool q_geopath_contains_coordinate(void* self, void* coordinate) {
    return QGeoPath_ContainsCoordinate((QGeoPath*)self, (QGeoCoordinate*)coordinate);
}

void q_geopath_remove_coordinate(void* self, void* coordinate) {
    QGeoPath_RemoveCoordinate((QGeoPath*)self, (QGeoCoordinate*)coordinate);
}

void q_geopath_remove_coordinate2(void* self, int64_t index) {
    QGeoPath_RemoveCoordinate2((QGeoPath*)self, index);
}

const char* q_geopath_to_string(void* self) {
    libqt_string _str = QGeoPath_ToString((QGeoPath*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

double q_geopath_length1(void* self, int64_t indexFrom) {
    return QGeoPath_Length1((QGeoPath*)self, indexFrom);
}

double q_geopath_length2(void* self, int64_t indexFrom, int64_t indexTo) {
    return QGeoPath_Length2((QGeoPath*)self, indexFrom, indexTo);
}

int32_t q_geopath_type(void* self) {
    return QGeoShape_Type((QGeoShape*)self);
}

bool q_geopath_is_valid(void* self) {
    return QGeoShape_IsValid((QGeoShape*)self);
}

bool q_geopath_is_empty(void* self) {
    return QGeoShape_IsEmpty((QGeoShape*)self);
}

bool q_geopath_contains(void* self, void* coordinate) {
    return QGeoShape_Contains((QGeoShape*)self, (QGeoCoordinate*)coordinate);
}

QGeoRectangle* q_geopath_bounding_geo_rectangle(void* self) {
    return QGeoShape_BoundingGeoRectangle((QGeoShape*)self);
}

QGeoCoordinate* q_geopath_center(void* self) {
    return QGeoShape_Center((QGeoShape*)self);
}

void q_geopath_delete(void* self) {
    QGeoPath_Delete((QGeoPath*)(self));
}
