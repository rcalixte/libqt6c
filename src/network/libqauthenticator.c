#include "../libqvariant.hpp"
#include "libqauthenticator.hpp"
#include "libqauthenticator.h"

QAuthenticator* q_authenticator_new() {
    return QAuthenticator_new();
}

QAuthenticator* q_authenticator_new2(void* other) {
    return QAuthenticator_new2((QAuthenticator*)other);
}

void q_authenticator_operator_assign(void* self, void* other) {
    QAuthenticator_OperatorAssign((QAuthenticator*)self, (QAuthenticator*)other);
}

bool q_authenticator_operator_equal(void* self, void* other) {
    return QAuthenticator_OperatorEqual((QAuthenticator*)self, (QAuthenticator*)other);
}

bool q_authenticator_operator_not_equal(void* self, void* other) {
    return QAuthenticator_OperatorNotEqual((QAuthenticator*)self, (QAuthenticator*)other);
}

const char* q_authenticator_user(void* self) {
    libqt_string _str = QAuthenticator_User((QAuthenticator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_authenticator_set_user(void* self, const char* user) {
    QAuthenticator_SetUser((QAuthenticator*)self, qstring(user));
}

const char* q_authenticator_password(void* self) {
    libqt_string _str = QAuthenticator_Password((QAuthenticator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_authenticator_set_password(void* self, const char* password) {
    QAuthenticator_SetPassword((QAuthenticator*)self, qstring(password));
}

const char* q_authenticator_realm(void* self) {
    libqt_string _str = QAuthenticator_Realm((QAuthenticator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_authenticator_set_realm(void* self, const char* realm) {
    QAuthenticator_SetRealm((QAuthenticator*)self, qstring(realm));
}

QVariant* q_authenticator_option(void* self, const char* opt) {
    return QAuthenticator_Option((QAuthenticator*)self, qstring(opt));
}

libqt_map /* of const char* to QVariant* */ q_authenticator_options(void* self) {
    // Convert QHash<QString,QVariant> to libqt_map
    libqt_map _out = QAuthenticator_Options((QAuthenticator*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    const char** _ret_keys = (const char**)malloc(_ret.len * sizeof(const char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Memory allocation failed in q_authenticator_options");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (const char*)_out_keys[i].data;
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = _out.values;
    free(_out_keys);
    return _ret;
}

void q_authenticator_set_option(void* self, const char* opt, void* value) {
    QAuthenticator_SetOption((QAuthenticator*)self, qstring(opt), (QVariant*)value);
}

bool q_authenticator_is_null(void* self) {
    return QAuthenticator_IsNull((QAuthenticator*)self);
}

void q_authenticator_detach(void* self) {
    QAuthenticator_Detach((QAuthenticator*)self);
}

void q_authenticator_delete(void* self) {
    QAuthenticator_Delete((QAuthenticator*)(self));
}
