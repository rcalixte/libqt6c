#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLPRESHAREDKEYAUTHENTICATOR_H
#define SRC_NETWORKQT6C_LIBQSSLPRESHAREDKEYAUTHENTICATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

QSslPreSharedKeyAuthenticator* q_sslpresharedkeyauthenticator_new();
QSslPreSharedKeyAuthenticator* q_sslpresharedkeyauthenticator_new2(void* authenticator);
void q_sslpresharedkeyauthenticator_operator_assign(void* self, void* authenticator);
void q_sslpresharedkeyauthenticator_swap(void* self, void* other);
char* q_sslpresharedkeyauthenticator_identity_hint(void* self);
void q_sslpresharedkeyauthenticator_set_identity(void* self, const char* identity);
char* q_sslpresharedkeyauthenticator_identity(void* self);
int32_t q_sslpresharedkeyauthenticator_maximum_identity_length(void* self);
void q_sslpresharedkeyauthenticator_set_pre_shared_key(void* self, const char* preSharedKey);
char* q_sslpresharedkeyauthenticator_pre_shared_key(void* self);
int32_t q_sslpresharedkeyauthenticator_maximum_pre_shared_key_length(void* self);
void q_sslpresharedkeyauthenticator_delete(void* self);

#endif
