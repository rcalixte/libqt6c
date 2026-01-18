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
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in q_authenticator_options\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in q_authenticator_options\n");
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
