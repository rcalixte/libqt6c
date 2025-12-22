#include "libqplaceratings.hpp"
#include "libqplaceratings.h"

QPlaceRatings* q_placeratings_new() {
    return QPlaceRatings_new();
}

QPlaceRatings* q_placeratings_new2(void* other) {
    return QPlaceRatings_new2((QPlaceRatings*)other);
}

void q_placeratings_operator_assign(void* self, void* other) {
    QPlaceRatings_OperatorAssign((QPlaceRatings*)self, (QPlaceRatings*)other);
}

void q_placeratings_swap(void* self, void* other) {
    QPlaceRatings_Swap((QPlaceRatings*)self, (QPlaceRatings*)other);
}

double q_placeratings_average(void* self) {
    return QPlaceRatings_Average((QPlaceRatings*)self);
}

void q_placeratings_set_average(void* self, double average) {
    QPlaceRatings_SetAverage((QPlaceRatings*)self, average);
}

int32_t q_placeratings_count(void* self) {
    return QPlaceRatings_Count((QPlaceRatings*)self);
}

void q_placeratings_set_count(void* self, int count) {
    QPlaceRatings_SetCount((QPlaceRatings*)self, count);
}

double q_placeratings_maximum(void* self) {
    return QPlaceRatings_Maximum((QPlaceRatings*)self);
}

void q_placeratings_set_maximum(void* self, double max) {
    QPlaceRatings_SetMaximum((QPlaceRatings*)self, max);
}

bool q_placeratings_is_empty(void* self) {
    return QPlaceRatings_IsEmpty((QPlaceRatings*)self);
}

void q_placeratings_delete(void* self) {
    QPlaceRatings_Delete((QPlaceRatings*)(self));
}
