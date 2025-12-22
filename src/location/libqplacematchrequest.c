#include "libqplace.hpp"
#include "libqplacesearchresult.hpp"
#include "../libqvariant.hpp"
#include "libqplacematchrequest.hpp"
#include "libqplacematchrequest.h"

QPlaceMatchRequest* q_placematchrequest_new() {
    return QPlaceMatchRequest_new();
}

QPlaceMatchRequest* q_placematchrequest_new2(void* other) {
    return QPlaceMatchRequest_new2((QPlaceMatchRequest*)other);
}

void q_placematchrequest_operator_assign(void* self, void* other) {
    QPlaceMatchRequest_OperatorAssign((QPlaceMatchRequest*)self, (QPlaceMatchRequest*)other);
}

void q_placematchrequest_swap(void* self, void* other) {
    QPlaceMatchRequest_Swap((QPlaceMatchRequest*)self, (QPlaceMatchRequest*)other);
}

libqt_list /* of QPlace* */ q_placematchrequest_places(void* self) {
    libqt_list _arr = QPlaceMatchRequest_Places((QPlaceMatchRequest*)self);
    return _arr;
}

void q_placematchrequest_set_places(void* self, libqt_list places) {
    QPlaceMatchRequest_SetPlaces((QPlaceMatchRequest*)self, places);
}

void q_placematchrequest_set_results(void* self, libqt_list results) {
    QPlaceMatchRequest_SetResults((QPlaceMatchRequest*)self, results);
}

libqt_map /* of const char* to QVariant* */ q_placematchrequest_parameters(void* self) {
    return QPlaceMatchRequest_Parameters((QPlaceMatchRequest*)self);
}

void q_placematchrequest_set_parameters(void* self, libqt_map /* of const char* to QVariant* */ parameters) {
    QPlaceMatchRequest_SetParameters((QPlaceMatchRequest*)self, parameters);
}

void q_placematchrequest_clear(void* self) {
    QPlaceMatchRequest_Clear((QPlaceMatchRequest*)self);
}

void q_placematchrequest_delete(void* self) {
    QPlaceMatchRequest_Delete((QPlaceMatchRequest*)(self));
}
