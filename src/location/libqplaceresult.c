#include "libqplace.hpp"
#include "libqplacesearchresult.hpp"
#include "libqplaceresult.hpp"
#include "libqplaceresult.h"

QPlaceResult* q_placeresult_new() {
    return QPlaceResult_new();
}

QPlaceResult* q_placeresult_new2(void* other) {
    return QPlaceResult_new2((QPlaceSearchResult*)other);
}

QPlaceResult* q_placeresult_new3(void* param1) {
    return QPlaceResult_new3((QPlaceResult*)param1);
}

double q_placeresult_distance(void* self) {
    return QPlaceResult_Distance((QPlaceResult*)self);
}

void q_placeresult_set_distance(void* self, double distance) {
    QPlaceResult_SetDistance((QPlaceResult*)self, distance);
}

QPlace* q_placeresult_place(void* self) {
    return QPlaceResult_Place((QPlaceResult*)self);
}

void q_placeresult_set_place(void* self, void* place) {
    QPlaceResult_SetPlace((QPlaceResult*)self, (QPlace*)place);
}

bool q_placeresult_is_sponsored(void* self) {
    return QPlaceResult_IsSponsored((QPlaceResult*)self);
}

void q_placeresult_set_sponsored(void* self, bool sponsored) {
    QPlaceResult_SetSponsored((QPlaceResult*)self, sponsored);
}

void q_placeresult_operator_assign(void* self, void* other) {
    QPlaceSearchResult_OperatorAssign((QPlaceSearchResult*)self, (QPlaceSearchResult*)other);
}

bool q_placeresult_operator_equal(void* self, void* other) {
    return QPlaceSearchResult_OperatorEqual((QPlaceSearchResult*)self, (QPlaceSearchResult*)other);
}

bool q_placeresult_operator_not_equal(void* self, void* other) {
    return QPlaceSearchResult_OperatorNotEqual((QPlaceSearchResult*)self, (QPlaceSearchResult*)other);
}

int32_t q_placeresult_type(void* self) {
    return QPlaceSearchResult_Type((QPlaceSearchResult*)self);
}

const char* q_placeresult_title(void* self) {
    libqt_string _str = QPlaceSearchResult_Title((QPlaceSearchResult*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placeresult_set_title(void* self, const char* title) {
    QPlaceSearchResult_SetTitle((QPlaceSearchResult*)self, qstring(title));
}

QPlaceIcon* q_placeresult_icon(void* self) {
    return QPlaceSearchResult_Icon((QPlaceSearchResult*)self);
}

void q_placeresult_set_icon(void* self, void* icon) {
    QPlaceSearchResult_SetIcon((QPlaceSearchResult*)self, (QPlaceIcon*)icon);
}

void q_placeresult_delete(void* self) {
    QPlaceResult_Delete((QPlaceResult*)(self));
}
