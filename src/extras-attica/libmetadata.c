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

libqt_list /* of libqt_pair tuple of char* and char* */ k_attica__metadata_headers(void* self) {
    libqt_list _arr = Attica__Metadata_Headers((Attica__Metadata*)self);
    libqt_pair* _data = (libqt_pair*)_arr.data.ptr;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string* _first_str = (libqt_string*)_data[i].first;
        const char* _first_str_data = _first_str->data;
        libqt_string* _second_str = (libqt_string*)_data[i].second;
        const char* _second_str_data = _second_str->data;
        free(_first_str);
        free(_second_str);
        _data[i].first = (void*)_first_str_data;
        _data[i].second = (void*)_second_str_data;
    }
    return _arr;
}

void k_attica__metadata_set_headers(void* self, libqt_list /* of libqt_pair tuple of char* and char* */ headers) {
    libqt_pair* headers_pairs = (libqt_pair*)malloc(headers.len * sizeof(libqt_pair));
    if (headers_pairs == NULL) {
        fprintf(stderr, "Failed to allocate memory for string pairs in k_attica__metadata_set_headers\n");
        abort();
    }
    libqt_string* headers_str = (libqt_string*)malloc(headers.len * 2 * sizeof(libqt_string));
    if (headers_str == NULL) {
        free(headers_pairs);
        fprintf(stderr, "Failed to allocate memory for string pair values in k_attica__metadata_set_headers\n");
        abort();
    }
    libqt_pair* headers_data = (libqt_pair*)headers.data.ptr;
    for (size_t i = 0; i < headers.len; ++i) {
        headers_str[i * 2] = qstring((const char*)headers_data[i].first);
        headers_str[i * 2 + 1] = qstring((const char*)headers_data[i].second);
        headers_pairs[i].first = &headers_str[i * 2];
        headers_pairs[i].second = &headers_str[i * 2 + 1];
    }
    libqt_list headers_list = qlist(headers_pairs, headers.len);
    Attica__Metadata_SetHeaders((Attica__Metadata*)self, headers_list);
    free(headers_str);
    free(headers_pairs);
}

void k_attica__metadata_delete(void* self) {
    Attica__Metadata_Delete((Attica__Metadata*)(self));
}
