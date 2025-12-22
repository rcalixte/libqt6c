#include "libqplacesearchrequest.hpp"
#include "libqplacesearchresult.hpp"
#include "libqplaceproposedsearchresult.hpp"
#include "libqplaceproposedsearchresult.h"

QPlaceProposedSearchResult* q_placeproposedsearchresult_new() {
    return QPlaceProposedSearchResult_new();
}

QPlaceProposedSearchResult* q_placeproposedsearchresult_new2(void* other) {
    return QPlaceProposedSearchResult_new2((QPlaceSearchResult*)other);
}

QPlaceProposedSearchResult* q_placeproposedsearchresult_new3(void* param1) {
    return QPlaceProposedSearchResult_new3((QPlaceProposedSearchResult*)param1);
}

QPlaceSearchRequest* q_placeproposedsearchresult_search_request(void* self) {
    return QPlaceProposedSearchResult_SearchRequest((QPlaceProposedSearchResult*)self);
}

void q_placeproposedsearchresult_set_search_request(void* self, void* request) {
    QPlaceProposedSearchResult_SetSearchRequest((QPlaceProposedSearchResult*)self, (QPlaceSearchRequest*)request);
}

void q_placeproposedsearchresult_operator_assign(void* self, void* other) {
    QPlaceSearchResult_OperatorAssign((QPlaceSearchResult*)self, (QPlaceSearchResult*)other);
}

bool q_placeproposedsearchresult_operator_equal(void* self, void* other) {
    return QPlaceSearchResult_OperatorEqual((QPlaceSearchResult*)self, (QPlaceSearchResult*)other);
}

bool q_placeproposedsearchresult_operator_not_equal(void* self, void* other) {
    return QPlaceSearchResult_OperatorNotEqual((QPlaceSearchResult*)self, (QPlaceSearchResult*)other);
}

int32_t q_placeproposedsearchresult_type(void* self) {
    return QPlaceSearchResult_Type((QPlaceSearchResult*)self);
}

const char* q_placeproposedsearchresult_title(void* self) {
    libqt_string _str = QPlaceSearchResult_Title((QPlaceSearchResult*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placeproposedsearchresult_set_title(void* self, const char* title) {
    QPlaceSearchResult_SetTitle((QPlaceSearchResult*)self, qstring(title));
}

QPlaceIcon* q_placeproposedsearchresult_icon(void* self) {
    return QPlaceSearchResult_Icon((QPlaceSearchResult*)self);
}

void q_placeproposedsearchresult_set_icon(void* self, void* icon) {
    QPlaceSearchResult_SetIcon((QPlaceSearchResult*)self, (QPlaceIcon*)icon);
}

void q_placeproposedsearchresult_delete(void* self) {
    QPlaceProposedSearchResult_Delete((QPlaceProposedSearchResult*)(self));
}
