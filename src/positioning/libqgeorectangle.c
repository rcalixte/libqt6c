#include "libqgeocoordinate.hpp"
#include "libqgeoshape.hpp"
#include "libqgeorectangle.hpp"
#include "libqgeorectangle.h"

QGeoRectangle* q_georectangle_new() {
    return QGeoRectangle_New();
}

QGeoRectangle* q_georectangle_new2(const void* center, double degreesWidth, double degreesHeight) {
    return QGeoRectangle_New2((QGeoCoordinate*)center, degreesWidth, degreesHeight);
}

QGeoRectangle* q_georectangle_new3(const void* topLeft, const void* bottomRight) {
    return QGeoRectangle_New3((QGeoCoordinate*)topLeft, (QGeoCoordinate*)bottomRight);
}

QGeoRectangle* q_georectangle_new4(libqt_list /* of QGeoCoordinate* */ coordinates) {
    return QGeoRectangle_New4(coordinates);
}

QGeoRectangle* q_georectangle_new5(const void* other) {
    return QGeoRectangle_New5((QGeoRectangle*)other);
}

QGeoRectangle* q_georectangle_new6(const void* other) {
    return QGeoRectangle_New6((QGeoShape*)other);
}

void q_georectangle_operator_assign(void* self, const void* other) {
    QGeoRectangle_OperatorAssign((QGeoRectangle*)self, (QGeoRectangle*)other);
}

void q_georectangle_set_top_left(void* self, const void* topLeft) {
    QGeoRectangle_SetTopLeft((QGeoRectangle*)self, (QGeoCoordinate*)topLeft);
}

QGeoCoordinate* q_georectangle_top_left(const void* self) {
    return QGeoRectangle_TopLeft((QGeoRectangle*)self);
}

void q_georectangle_set_top_right(void* self, const void* topRight) {
    QGeoRectangle_SetTopRight((QGeoRectangle*)self, (QGeoCoordinate*)topRight);
}

QGeoCoordinate* q_georectangle_top_right(const void* self) {
    return QGeoRectangle_TopRight((QGeoRectangle*)self);
}

void q_georectangle_set_bottom_left(void* self, const void* bottomLeft) {
    QGeoRectangle_SetBottomLeft((QGeoRectangle*)self, (QGeoCoordinate*)bottomLeft);
}

QGeoCoordinate* q_georectangle_bottom_left(const void* self) {
    return QGeoRectangle_BottomLeft((QGeoRectangle*)self);
}

void q_georectangle_set_bottom_right(void* self, const void* bottomRight) {
    QGeoRectangle_SetBottomRight((QGeoRectangle*)self, (QGeoCoordinate*)bottomRight);
}

QGeoCoordinate* q_georectangle_bottom_right(const void* self) {
    return QGeoRectangle_BottomRight((QGeoRectangle*)self);
}

void q_georectangle_set_center(void* self, const void* center) {
    QGeoRectangle_SetCenter((QGeoRectangle*)self, (QGeoCoordinate*)center);
}

QGeoCoordinate* q_georectangle_center(const void* self) {
    return QGeoRectangle_Center((QGeoRectangle*)self);
}

void q_georectangle_set_width(void* self, double degreesWidth) {
    QGeoRectangle_SetWidth((QGeoRectangle*)self, degreesWidth);
}

double q_georectangle_width(const void* self) {
    return QGeoRectangle_Width((QGeoRectangle*)self);
}

void q_georectangle_set_height(void* self, double degreesHeight) {
    QGeoRectangle_SetHeight((QGeoRectangle*)self, degreesHeight);
}

double q_georectangle_height(const void* self) {
    return QGeoRectangle_Height((QGeoRectangle*)self);
}

bool q_georectangle_contains(const void* self, const void* rectangle) {
    return QGeoRectangle_Contains((QGeoRectangle*)self, (QGeoRectangle*)rectangle);
}

bool q_georectangle_intersects(const void* self, const void* rectangle) {
    return QGeoRectangle_Intersects((QGeoRectangle*)self, (QGeoRectangle*)rectangle);
}

void q_georectangle_translate(void* self, double degreesLatitude, double degreesLongitude) {
    QGeoRectangle_Translate((QGeoRectangle*)self, degreesLatitude, degreesLongitude);
}

QGeoRectangle* q_georectangle_translated(const void* self, double degreesLatitude, double degreesLongitude) {
    return QGeoRectangle_Translated((QGeoRectangle*)self, degreesLatitude, degreesLongitude);
}

void q_georectangle_extend_rectangle(void* self, const void* coordinate) {
    QGeoRectangle_ExtendRectangle((QGeoRectangle*)self, (QGeoCoordinate*)coordinate);
}

QGeoRectangle* q_georectangle_united(const void* self, const void* rectangle) {
    return QGeoRectangle_United((QGeoRectangle*)self, (QGeoRectangle*)rectangle);
}

QGeoRectangle* q_georectangle_operator_bitwise_or(const void* self, const void* rectangle) {
    return QGeoRectangle_OperatorBitwiseOr((QGeoRectangle*)self, (QGeoRectangle*)rectangle);
}

void q_georectangle_operator_bitwise_or_assign(void* self, const void* rectangle) {
    QGeoRectangle_OperatorBitwiseOrAssign((QGeoRectangle*)self, (QGeoRectangle*)rectangle);
}

const char* q_georectangle_to_string(const void* self) {
    libqt_string _str = QGeoRectangle_ToString((QGeoRectangle*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_georectangle_type(const void* self) {
    return QGeoShape_Type((QGeoShape*)self);
}

bool q_georectangle_is_valid(const void* self) {
    return QGeoShape_IsValid((QGeoShape*)self);
}

bool q_georectangle_is_empty(const void* self) {
    return QGeoShape_IsEmpty((QGeoShape*)self);
}

QGeoRectangle* q_georectangle_bounding_geo_rectangle(const void* self) {
    return QGeoShape_BoundingGeoRectangle((QGeoShape*)self);
}

void q_georectangle_delete(void* self) {
    QGeoRectangle_Delete((QGeoRectangle*)(self));
}
