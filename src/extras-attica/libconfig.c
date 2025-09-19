#include "libconfig.hpp"
#include "libconfig.h"

Attica__Config* k_attica__config_new() {
    return Attica__Config_new();
}

Attica__Config* k_attica__config_new2(void* other) {
    return Attica__Config_new2((Attica__Config*)other);
}

void k_attica__config_operator_assign(void* self, void* other) {
    Attica__Config_OperatorAssign((Attica__Config*)self, (Attica__Config*)other);
}

const char* k_attica__config_contact(void* self) {
    libqt_string _str = Attica__Config_Contact((Attica__Config*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_attica__config_host(void* self) {
    libqt_string _str = Attica__Config_Host((Attica__Config*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_attica__config_version(void* self) {
    libqt_string _str = Attica__Config_Version((Attica__Config*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_attica__config_ssl(void* self) {
    return Attica__Config_Ssl((Attica__Config*)self);
}

const char* k_attica__config_website(void* self) {
    libqt_string _str = Attica__Config_Website((Attica__Config*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__config_set_contact(void* self, const char* contact) {
    Attica__Config_SetContact((Attica__Config*)self, qstring(contact));
}

void k_attica__config_set_host(void* self, const char* host) {
    Attica__Config_SetHost((Attica__Config*)self, qstring(host));
}

void k_attica__config_set_ssl(void* self, bool ssl) {
    Attica__Config_SetSsl((Attica__Config*)self, ssl);
}

void k_attica__config_set_version(void* self, const char* version) {
    Attica__Config_SetVersion((Attica__Config*)self, qstring(version));
}

void k_attica__config_set_website(void* self, const char* website) {
    Attica__Config_SetWebsite((Attica__Config*)self, qstring(website));
}

bool k_attica__config_is_valid(void* self) {
    return Attica__Config_IsValid((Attica__Config*)self);
}

void k_attica__config_delete(void* self) {
    Attica__Config_Delete((Attica__Config*)(self));
}
