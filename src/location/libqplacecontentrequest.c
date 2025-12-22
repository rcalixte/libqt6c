#include "../libqvariant.hpp"
#include "libqplacecontentrequest.hpp"
#include "libqplacecontentrequest.h"

QPlaceContentRequest* q_placecontentrequest_new() {
    return QPlaceContentRequest_new();
}

QPlaceContentRequest* q_placecontentrequest_new2(void* other) {
    return QPlaceContentRequest_new2((QPlaceContentRequest*)other);
}

void q_placecontentrequest_operator_assign(void* self, void* other) {
    QPlaceContentRequest_OperatorAssign((QPlaceContentRequest*)self, (QPlaceContentRequest*)other);
}

void q_placecontentrequest_swap(void* self, void* other) {
    QPlaceContentRequest_Swap((QPlaceContentRequest*)self, (QPlaceContentRequest*)other);
}

int32_t q_placecontentrequest_content_type(void* self) {
    return QPlaceContentRequest_ContentType((QPlaceContentRequest*)self);
}

void q_placecontentrequest_set_content_type(void* self, int32_t type) {
    QPlaceContentRequest_SetContentType((QPlaceContentRequest*)self, type);
}

const char* q_placecontentrequest_place_id(void* self) {
    libqt_string _str = QPlaceContentRequest_PlaceId((QPlaceContentRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placecontentrequest_set_place_id(void* self, const char* identifier) {
    QPlaceContentRequest_SetPlaceId((QPlaceContentRequest*)self, qstring(identifier));
}

QVariant* q_placecontentrequest_content_context(void* self) {
    return QPlaceContentRequest_ContentContext((QPlaceContentRequest*)self);
}

void q_placecontentrequest_set_content_context(void* self, void* context) {
    QPlaceContentRequest_SetContentContext((QPlaceContentRequest*)self, (QVariant*)context);
}

int32_t q_placecontentrequest_limit(void* self) {
    return QPlaceContentRequest_Limit((QPlaceContentRequest*)self);
}

void q_placecontentrequest_set_limit(void* self, int limit) {
    QPlaceContentRequest_SetLimit((QPlaceContentRequest*)self, limit);
}

void q_placecontentrequest_clear(void* self) {
    QPlaceContentRequest_Clear((QPlaceContentRequest*)self);
}

void q_placecontentrequest_delete(void* self) {
    QPlaceContentRequest_Delete((QPlaceContentRequest*)(self));
}
