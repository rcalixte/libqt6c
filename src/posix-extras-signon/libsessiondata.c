#include "../libqvariant.hpp"
#include "libsessiondata.hpp"
#include "libsessiondata.h"

SignOn__SessionData* q_signon__sessiondata_new() {
    return SignOn__SessionData_new();
}

SignOn__SessionData* q_signon__sessiondata_new2(void* other) {
    return SignOn__SessionData_new2((SignOn__SessionData*)other);
}

SignOn__SessionData* q_signon__sessiondata_new3(libqt_map /* of const char* to QVariant* */ data) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map data_ret;
    data_ret.len = data.len;
    data_ret.keys = malloc(data_ret.len * sizeof(libqt_string));
    if (data_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys\n");
        abort();
    }
    data_ret.values = malloc(data_ret.len * sizeof(QVariant*));
    if (data_ret.values == NULL) {
        free(data_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values\n");
        abort();
    }
    const char** data_karr = (const char**)data.keys;
    libqt_string* data_kdest = (libqt_string*)data_ret.keys;
    QVariant** data_varr = (QVariant**)data.values;
    QVariant** data_vdest = (QVariant**)data_ret.values;
    for (size_t i = 0; i < data_ret.len; ++i) {
        data_kdest[i] = qstring(data_karr[i]);
        data_vdest[i] = data_varr[i];
    }

    SignOn__SessionData* _out = SignOn__SessionData_new3(data_ret);
    libqt_free(data_ret.keys);
    libqt_free(data_ret.values);
    return _out;
}

void q_signon__sessiondata_operator_assign(void* self, void* other) {
    SignOn__SessionData_OperatorAssign((SignOn__SessionData*)self, (SignOn__SessionData*)other);
}

SignOn__SessionData* q_signon__sessiondata_operator_plus_assign(void* self, void* other) {
    return SignOn__SessionData_OperatorPlusAssign((SignOn__SessionData*)self, (SignOn__SessionData*)other);
}

const char** q_signon__sessiondata_property_names(void* self) {
    libqt_list _arr = SignOn__SessionData_PropertyNames((SignOn__SessionData*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_signon__sessiondata_property_names");
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

const QVariant* q_signon__sessiondata_get_property(void* self, const char* propertyName) {
    return SignOn__SessionData_GetProperty((SignOn__SessionData*)self, qstring(propertyName));
}

const char** q_signon__sessiondata_get_access_control_tokens(void* self) {
    libqt_list _arr = SignOn__SessionData_GetAccessControlTokens((SignOn__SessionData*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_signon__sessiondata_get_access_control_tokens");
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

libqt_map /* of const char* to QVariant* */ q_signon__sessiondata_to_map(void* self) {
    // Convert QMap<QString,QVariant> to libqt_map
    libqt_map _out = SignOn__SessionData_ToMap((SignOn__SessionData*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    const char** _ret_keys = (const char**)malloc(_ret.len * sizeof(const char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Memory allocation failed in q_signon__sessiondata_to_map");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = _out_keys[i].data;
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = _out.values;
    free(_out_keys);
    return _ret;
}

void q_signon__sessiondata_set_secret(void* self, const char* value) {
    SignOn__SessionData_SetSecret((SignOn__SessionData*)self, qstring(value));
}

const char* q_signon__sessiondata_secret(void* self) {
    libqt_string _str = SignOn__SessionData_Secret((SignOn__SessionData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_signon__sessiondata_set_user_name(void* self, const char* value) {
    SignOn__SessionData_SetUserName((SignOn__SessionData*)self, qstring(value));
}

const char* q_signon__sessiondata_user_name(void* self) {
    libqt_string _str = SignOn__SessionData_UserName((SignOn__SessionData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_signon__sessiondata_set_realm(void* self, const char* value) {
    SignOn__SessionData_SetRealm((SignOn__SessionData*)self, qstring(value));
}

const char* q_signon__sessiondata_realm(void* self) {
    libqt_string _str = SignOn__SessionData_Realm((SignOn__SessionData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_signon__sessiondata_set_network_proxy(void* self, const char* value) {
    SignOn__SessionData_SetNetworkProxy((SignOn__SessionData*)self, qstring(value));
}

const char* q_signon__sessiondata_network_proxy(void* self) {
    libqt_string _str = SignOn__SessionData_NetworkProxy((SignOn__SessionData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_signon__sessiondata_set_ui_policy(void* self, int* value) {
    SignOn__SessionData_SetUiPolicy((SignOn__SessionData*)self, value);
}

int32_t q_signon__sessiondata_ui_policy(void* self) {
    return SignOn__SessionData_UiPolicy((SignOn__SessionData*)self);
}

void q_signon__sessiondata_set_caption(void* self, const char* value) {
    SignOn__SessionData_SetCaption((SignOn__SessionData*)self, qstring(value));
}

const char* q_signon__sessiondata_caption(void* self) {
    libqt_string _str = SignOn__SessionData_Caption((SignOn__SessionData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_signon__sessiondata_set_network_timeout(void* self, uint32_t* value) {
    SignOn__SessionData_SetNetworkTimeout((SignOn__SessionData*)self, value);
}

uint32_t q_signon__sessiondata_network_timeout(void* self) {
    return SignOn__SessionData_NetworkTimeout((SignOn__SessionData*)self);
}

void q_signon__sessiondata_set_window_id(void* self, uint32_t* value) {
    SignOn__SessionData_SetWindowId((SignOn__SessionData*)self, value);
}

uint32_t q_signon__sessiondata_window_id(void* self) {
    return SignOn__SessionData_WindowId((SignOn__SessionData*)self);
}

void q_signon__sessiondata_set_renew_token(void* self, bool* value) {
    SignOn__SessionData_SetRenewToken((SignOn__SessionData*)self, (bool*)value);
}

bool q_signon__sessiondata_renew_token(void* self) {
    return SignOn__SessionData_RenewToken((SignOn__SessionData*)self);
}

void q_signon__sessiondata_delete(void* self) {
    SignOn__SessionData_Delete((SignOn__SessionData*)(self));
}
