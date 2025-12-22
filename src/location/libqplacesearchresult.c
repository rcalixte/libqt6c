#include "libqplaceicon.hpp"
#include "libqplacesearchresult.hpp"
#include "libqplacesearchresult.h"

QPlaceSearchResult* q_placesearchresult_new() {
    return QPlaceSearchResult_new();
}

QPlaceSearchResult* q_placesearchresult_new2(void* other) {
    return QPlaceSearchResult_new2((QPlaceSearchResult*)other);
}

void q_placesearchresult_operator_assign(void* self, void* other) {
    QPlaceSearchResult_OperatorAssign((QPlaceSearchResult*)self, (QPlaceSearchResult*)other);
}

bool q_placesearchresult_operator_equal(void* self, void* other) {
    return QPlaceSearchResult_OperatorEqual((QPlaceSearchResult*)self, (QPlaceSearchResult*)other);
}

bool q_placesearchresult_operator_not_equal(void* self, void* other) {
    return QPlaceSearchResult_OperatorNotEqual((QPlaceSearchResult*)self, (QPlaceSearchResult*)other);
}

int32_t q_placesearchresult_type(void* self) {
    return QPlaceSearchResult_Type((QPlaceSearchResult*)self);
}

const char* q_placesearchresult_title(void* self) {
    libqt_string _str = QPlaceSearchResult_Title((QPlaceSearchResult*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placesearchresult_set_title(void* self, const char* title) {
    QPlaceSearchResult_SetTitle((QPlaceSearchResult*)self, qstring(title));
}

QPlaceIcon* q_placesearchresult_icon(void* self) {
    return QPlaceSearchResult_Icon((QPlaceSearchResult*)self);
}

void q_placesearchresult_set_icon(void* self, void* icon) {
    QPlaceSearchResult_SetIcon((QPlaceSearchResult*)self, (QPlaceIcon*)icon);
}

void q_placesearchresult_delete(void* self) {
    QPlaceSearchResult_Delete((QPlaceSearchResult*)(self));
}
