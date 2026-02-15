#include "libqsslpresharedkeyauthenticator.hpp"
#include "libqsslpresharedkeyauthenticator.h"

QSslPreSharedKeyAuthenticator* q_sslpresharedkeyauthenticator_new() {
    return QSslPreSharedKeyAuthenticator_new();
}

QSslPreSharedKeyAuthenticator* q_sslpresharedkeyauthenticator_new2(void* authenticator) {
    return QSslPreSharedKeyAuthenticator_new2((QSslPreSharedKeyAuthenticator*)authenticator);
}

void q_sslpresharedkeyauthenticator_operator_assign(void* self, void* authenticator) {
    QSslPreSharedKeyAuthenticator_OperatorAssign((QSslPreSharedKeyAuthenticator*)self, (QSslPreSharedKeyAuthenticator*)authenticator);
}

void q_sslpresharedkeyauthenticator_swap(void* self, void* other) {
    QSslPreSharedKeyAuthenticator_Swap((QSslPreSharedKeyAuthenticator*)self, (QSslPreSharedKeyAuthenticator*)other);
}

char* q_sslpresharedkeyauthenticator_identity_hint(void* self) {
    libqt_string _str = QSslPreSharedKeyAuthenticator_IdentityHint((QSslPreSharedKeyAuthenticator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sslpresharedkeyauthenticator_set_identity(void* self, char* identity) {
    QSslPreSharedKeyAuthenticator_SetIdentity((QSslPreSharedKeyAuthenticator*)self, qstring(identity));
}

char* q_sslpresharedkeyauthenticator_identity(void* self) {
    libqt_string _str = QSslPreSharedKeyAuthenticator_Identity((QSslPreSharedKeyAuthenticator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_sslpresharedkeyauthenticator_maximum_identity_length(void* self) {
    return QSslPreSharedKeyAuthenticator_MaximumIdentityLength((QSslPreSharedKeyAuthenticator*)self);
}

void q_sslpresharedkeyauthenticator_set_pre_shared_key(void* self, char* preSharedKey) {
    QSslPreSharedKeyAuthenticator_SetPreSharedKey((QSslPreSharedKeyAuthenticator*)self, qstring(preSharedKey));
}

char* q_sslpresharedkeyauthenticator_pre_shared_key(void* self) {
    libqt_string _str = QSslPreSharedKeyAuthenticator_PreSharedKey((QSslPreSharedKeyAuthenticator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_sslpresharedkeyauthenticator_maximum_pre_shared_key_length(void* self) {
    return QSslPreSharedKeyAuthenticator_MaximumPreSharedKeyLength((QSslPreSharedKeyAuthenticator*)self);
}

void q_sslpresharedkeyauthenticator_delete(void* self) {
    QSslPreSharedKeyAuthenticator_Delete((QSslPreSharedKeyAuthenticator*)(self));
}
