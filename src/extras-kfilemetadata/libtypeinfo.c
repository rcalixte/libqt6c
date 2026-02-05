#include "libtypeinfo.hpp"
#include "libtypeinfo.h"

KFileMetaData__TypeInfo* k_filemetadata__typeinfo_new() {
    return KFileMetaData__TypeInfo_new();
}

KFileMetaData__TypeInfo* k_filemetadata__typeinfo_new2(int32_t type) {
    return KFileMetaData__TypeInfo_new2(type);
}

KFileMetaData__TypeInfo* k_filemetadata__typeinfo_new3(void* ti) {
    return KFileMetaData__TypeInfo_new3((KFileMetaData__TypeInfo*)ti);
}

void k_filemetadata__typeinfo_operator_assign(void* self, void* rhs) {
    KFileMetaData__TypeInfo_OperatorAssign((KFileMetaData__TypeInfo*)self, (KFileMetaData__TypeInfo*)rhs);
}

bool k_filemetadata__typeinfo_operator_equal(void* self, void* rhs) {
    return KFileMetaData__TypeInfo_OperatorEqual((KFileMetaData__TypeInfo*)self, (KFileMetaData__TypeInfo*)rhs);
}

int32_t k_filemetadata__typeinfo_type(void* self) {
    return KFileMetaData__TypeInfo_Type((KFileMetaData__TypeInfo*)self);
}

const char* k_filemetadata__typeinfo_name(void* self) {
    libqt_string _str = KFileMetaData__TypeInfo_Name((KFileMetaData__TypeInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_filemetadata__typeinfo_display_name(void* self) {
    libqt_string _str = KFileMetaData__TypeInfo_DisplayName((KFileMetaData__TypeInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KFileMetaData__TypeInfo* k_filemetadata__typeinfo_from_name(const char* name) {
    return KFileMetaData__TypeInfo_FromName(qstring(name));
}

const char** k_filemetadata__typeinfo_all_names() {
    libqt_list _arr = KFileMetaData__TypeInfo_AllNames();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_filemetadata__typeinfo_all_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void k_filemetadata__typeinfo_delete(void* self) {
    KFileMetaData__TypeInfo_Delete((KFileMetaData__TypeInfo*)(self));
}
