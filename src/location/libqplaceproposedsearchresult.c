#include "libqplacesearchrequest.hpp"
#include "libqplacesearchresult.hpp"
#include "libqplaceproposedsearchresult.hpp"
#include "libqplaceproposedsearchresult.h"

QPlaceProposedSearchResult* q_placeproposedsearchresult_new() {
    return QPlaceProposedSearchResult_New();
}

QPlaceProposedSearchResult* q_placeproposedsearchresult_new2(const void* other) {
    return QPlaceProposedSearchResult_New2((QPlaceSearchResult*)other);
}

QPlaceProposedSearchResult* q_placeproposedsearchresult_new3(const void* param1) {
    return QPlaceProposedSearchResult_New3((QPlaceProposedSearchResult*)param1);
}

QPlaceSearchRequest* q_placeproposedsearchresult_search_request(const void* self) {
    return QPlaceProposedSearchResult_SearchRequest((QPlaceProposedSearchResult*)self);
}

void q_placeproposedsearchresult_set_search_request(void* self, const void* request) {
    QPlaceProposedSearchResult_SetSearchRequest((QPlaceProposedSearchResult*)self, (QPlaceSearchRequest*)request);
}

bool q_placeproposedsearchresult_operator_equal(const void* self, const void* other) {
    return QPlaceSearchResult_OperatorEqual((QPlaceSearchResult*)self, (QPlaceSearchResult*)other);
}

bool q_placeproposedsearchresult_operator_not_equal(const void* self, const void* other) {
    return QPlaceSearchResult_OperatorNotEqual((QPlaceSearchResult*)self, (QPlaceSearchResult*)other);
}

int32_t q_placeproposedsearchresult_type(const void* self) {
    return QPlaceSearchResult_Type((QPlaceSearchResult*)self);
}

const char* q_placeproposedsearchresult_title(const void* self) {
    libqt_string _str = QPlaceSearchResult_Title((QPlaceSearchResult*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placeproposedsearchresult_set_title(void* self, const char* title) {
    QPlaceSearchResult_SetTitle((QPlaceSearchResult*)self, qstring(title));
}

QPlaceIcon* q_placeproposedsearchresult_icon(const void* self) {
    return QPlaceSearchResult_Icon((QPlaceSearchResult*)self);
}

void q_placeproposedsearchresult_set_icon(void* self, const void* icon) {
    QPlaceSearchResult_SetIcon((QPlaceSearchResult*)self, (QPlaceIcon*)icon);
}

void q_placeproposedsearchresult_delete(void* self) {
    QPlaceProposedSearchResult_Delete((QPlaceProposedSearchResult*)(self));
}
