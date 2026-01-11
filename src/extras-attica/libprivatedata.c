#include "../libqdatetime.hpp"
#include "libprivatedata.hpp"
#include "libprivatedata.h"

Attica__PrivateData* k_attica__privatedata_new() {
    return Attica__PrivateData_new();
}

Attica__PrivateData* k_attica__privatedata_new2(void* other) {
    return Attica__PrivateData_new2((Attica__PrivateData*)other);
}

void k_attica__privatedata_operator_assign(void* self, void* other) {
    Attica__PrivateData_OperatorAssign((Attica__PrivateData*)self, (Attica__PrivateData*)other);
}

void k_attica__privatedata_set_attribute(void* self, const char* key, const char* value) {
    Attica__PrivateData_SetAttribute((Attica__PrivateData*)self, qstring(key), qstring(value));
}

const char* k_attica__privatedata_attribute(void* self, const char* key) {
    libqt_string _str = Attica__PrivateData_Attribute((Attica__PrivateData*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__privatedata_set_timestamp(void* self, const char* key, void* when) {
    Attica__PrivateData_SetTimestamp((Attica__PrivateData*)self, qstring(key), (QDateTime*)when);
}

QDateTime* k_attica__privatedata_timestamp(void* self, const char* key) {
    return Attica__PrivateData_Timestamp((Attica__PrivateData*)self, qstring(key));
}

const char** k_attica__privatedata_keys(void* self) {
    libqt_list _arr = Attica__PrivateData_Keys((Attica__PrivateData*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_attica__privatedata_keys");
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

void k_attica__privatedata_delete(void* self) {
    Attica__PrivateData_Delete((Attica__PrivateData*)(self));
}
