#include "libqplaceicon.hpp"
#include "libqplacesearchresult.hpp"
#include "libqplacesearchresult.h"

QPlaceSearchResult* q_placesearchresult_new() {
    return QPlaceSearchResult_New();
}

QPlaceSearchResult* q_placesearchresult_new2(const void* other) {
    return QPlaceSearchResult_New2((QPlaceSearchResult*)other);
}

bool q_placesearchresult_operator_equal(const void* self, const void* other) {
    return QPlaceSearchResult_OperatorEqual((QPlaceSearchResult*)self, (QPlaceSearchResult*)other);
}

bool q_placesearchresult_operator_not_equal(const void* self, const void* other) {
    return QPlaceSearchResult_OperatorNotEqual((QPlaceSearchResult*)self, (QPlaceSearchResult*)other);
}

int32_t q_placesearchresult_type(const void* self) {
    return QPlaceSearchResult_Type((QPlaceSearchResult*)self);
}

const char* q_placesearchresult_title(const void* self) {
    libqt_string _str = QPlaceSearchResult_Title((QPlaceSearchResult*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placesearchresult_set_title(void* self, const char* title) {
    QPlaceSearchResult_SetTitle((QPlaceSearchResult*)self, qstring(title));
}

QPlaceIcon* q_placesearchresult_icon(const void* self) {
    return QPlaceSearchResult_Icon((QPlaceSearchResult*)self);
}

void q_placesearchresult_set_icon(void* self, const void* icon) {
    QPlaceSearchResult_SetIcon((QPlaceSearchResult*)self, (QPlaceIcon*)icon);
}

void q_placesearchresult_delete(void* self) {
    QPlaceSearchResult_Delete((QPlaceSearchResult*)(self));
}
