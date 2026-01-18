#include "../libqvariant.hpp"
#include "libauth_data.hpp"
#include "libauth_data.h"

Accounts__AuthData* q_accounts__authdata_new(void* other) {
    return Accounts__AuthData_new((Accounts__AuthData*)other);
}

uint32_t q_accounts__authdata_credentials_id(void* self) {
    return Accounts__AuthData_CredentialsId((Accounts__AuthData*)self);
}

const char* q_accounts__authdata_method(void* self) {
    libqt_string _str = Accounts__AuthData_Method((Accounts__AuthData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__authdata_mechanism(void* self) {
    libqt_string _str = Accounts__AuthData_Mechanism((Accounts__AuthData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_map /* of const char* to QVariant* */ q_accounts__authdata_parameters(void* self) {
    // Convert QMap<QString,QVariant> to libqt_map
    libqt_map _out = Accounts__AuthData_Parameters((Accounts__AuthData*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in q_accounts__authdata_parameters\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in q_accounts__authdata_parameters\n");
            abort();
        }
        memcpy(_ret_keys[i], _out_keys[i].data, _out_keys[i].len);
        _ret_keys[i][_out_keys[i].len] = '\0';
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = _out.values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_keys[i].data);
    }
    free(_out.keys);
    return _ret;
}

void q_accounts__authdata_delete(void* self) {
    Accounts__AuthData_Delete((Accounts__AuthData*)(self));
}
