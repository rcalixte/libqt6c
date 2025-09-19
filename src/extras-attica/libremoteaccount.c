#include "libremoteaccount.hpp"
#include "libremoteaccount.h"

Attica__RemoteAccount* k_attica__remoteaccount_new() {
    return Attica__RemoteAccount_new();
}

Attica__RemoteAccount* k_attica__remoteaccount_new2(void* other) {
    return Attica__RemoteAccount_new2((Attica__RemoteAccount*)other);
}

void k_attica__remoteaccount_operator_assign(void* self, void* other) {
    Attica__RemoteAccount_OperatorAssign((Attica__RemoteAccount*)self, (Attica__RemoteAccount*)other);
}

void k_attica__remoteaccount_set_id(void* self, const char* id) {
    Attica__RemoteAccount_SetId((Attica__RemoteAccount*)self, qstring(id));
}

const char* k_attica__remoteaccount_id(void* self) {
    libqt_string _str = Attica__RemoteAccount_Id((Attica__RemoteAccount*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__remoteaccount_set_type(void* self, const char* type) {
    Attica__RemoteAccount_SetType((Attica__RemoteAccount*)self, qstring(type));
}

const char* k_attica__remoteaccount_type(void* self) {
    libqt_string _str = Attica__RemoteAccount_Type((Attica__RemoteAccount*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__remoteaccount_set_remote_service_id(void* self, const char* remoteServiceId) {
    Attica__RemoteAccount_SetRemoteServiceId((Attica__RemoteAccount*)self, qstring(remoteServiceId));
}

const char* k_attica__remoteaccount_remote_service_id(void* self) {
    libqt_string _str = Attica__RemoteAccount_RemoteServiceId((Attica__RemoteAccount*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__remoteaccount_set_data(void* self, const char* data) {
    Attica__RemoteAccount_SetData((Attica__RemoteAccount*)self, qstring(data));
}

const char* k_attica__remoteaccount_data(void* self) {
    libqt_string _str = Attica__RemoteAccount_Data((Attica__RemoteAccount*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__remoteaccount_set_login(void* self, const char* login) {
    Attica__RemoteAccount_SetLogin((Attica__RemoteAccount*)self, qstring(login));
}

const char* k_attica__remoteaccount_login(void* self) {
    libqt_string _str = Attica__RemoteAccount_Login((Attica__RemoteAccount*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__remoteaccount_set_password(void* self, const char* password) {
    Attica__RemoteAccount_SetPassword((Attica__RemoteAccount*)self, qstring(password));
}

const char* k_attica__remoteaccount_password(void* self) {
    libqt_string _str = Attica__RemoteAccount_Password((Attica__RemoteAccount*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_attica__remoteaccount_is_valid(void* self) {
    return Attica__RemoteAccount_IsValid((Attica__RemoteAccount*)self);
}

void k_attica__remoteaccount_delete(void* self) {
    Attica__RemoteAccount_Delete((Attica__RemoteAccount*)(self));
}
