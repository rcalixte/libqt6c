#include "libmetadata.hpp"
#include "libmetadata.h"

Attica__Metadata* k_attica__metadata_new() {
    return Attica__Metadata_new();
}

Attica__Metadata* k_attica__metadata_new2(void* other) {
    return Attica__Metadata_new2((Attica__Metadata*)other);
}

void k_attica__metadata_operator_assign(void* self, void* other) {
    Attica__Metadata_OperatorAssign((Attica__Metadata*)self, (Attica__Metadata*)other);
}

int32_t k_attica__metadata_error(void* self) {
    return Attica__Metadata_Error((Attica__Metadata*)self);
}

void k_attica__metadata_set_error(void* self, int32_t error) {
    Attica__Metadata_SetError((Attica__Metadata*)self, error);
}

int32_t k_attica__metadata_status_code(void* self) {
    return Attica__Metadata_StatusCode((Attica__Metadata*)self);
}

void k_attica__metadata_set_status_code(void* self, int code) {
    Attica__Metadata_SetStatusCode((Attica__Metadata*)self, code);
}

const char* k_attica__metadata_status_string(void* self) {
    libqt_string _str = Attica__Metadata_StatusString((Attica__Metadata*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__metadata_set_status_string(void* self, const char* status) {
    Attica__Metadata_SetStatusString((Attica__Metadata*)self, qstring(status));
}

const char* k_attica__metadata_message(void* self) {
    libqt_string _str = Attica__Metadata_Message((Attica__Metadata*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__metadata_set_message(void* self, const char* message) {
    Attica__Metadata_SetMessage((Attica__Metadata*)self, qstring(message));
}

int32_t k_attica__metadata_total_items(void* self) {
    return Attica__Metadata_TotalItems((Attica__Metadata*)self);
}

void k_attica__metadata_set_total_items(void* self, int items) {
    Attica__Metadata_SetTotalItems((Attica__Metadata*)self, items);
}

int32_t k_attica__metadata_items_per_page(void* self) {
    return Attica__Metadata_ItemsPerPage((Attica__Metadata*)self);
}

void k_attica__metadata_set_items_per_page(void* self, int itemsPerPage) {
    Attica__Metadata_SetItemsPerPage((Attica__Metadata*)self, itemsPerPage);
}

const char* k_attica__metadata_resulting_id(void* self) {
    libqt_string _str = Attica__Metadata_ResultingId((Attica__Metadata*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__metadata_set_resulting_id(void* self, const char* id) {
    Attica__Metadata_SetResultingId((Attica__Metadata*)self, qstring(id));
}

libqt_list /* of libqt_pair  tuple of char* and char*  */ k_attica__metadata_headers(void* self) {
    libqt_list _arr = Attica__Metadata_Headers((Attica__Metadata*)self);
    return _arr;
}

void k_attica__metadata_delete(void* self) {
    Attica__Metadata_Delete((Attica__Metadata*)(self));
}
