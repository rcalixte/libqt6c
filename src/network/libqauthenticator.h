#pragma once
#ifndef SRC_NETWORKQT6C_LIBQAUTHENTICATOR_H
#define SRC_NETWORKQT6C_LIBQAUTHENTICATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include <string.h>
#include "../libqvariant.h"

QAuthenticator* q_authenticator_new();
QAuthenticator* q_authenticator_new2(void* other);
void q_authenticator_operator_assign(void* self, void* other);
bool q_authenticator_operator_equal(void* self, void* other);
bool q_authenticator_operator_not_equal(void* self, void* other);
const char* q_authenticator_user(void* self);
void q_authenticator_set_user(void* self, const char* user);
const char* q_authenticator_password(void* self);
void q_authenticator_set_password(void* self, const char* password);
const char* q_authenticator_realm(void* self);
void q_authenticator_set_realm(void* self, const char* realm);
QVariant* q_authenticator_option(void* self, const char* opt);
libqt_map /* of const char* to QVariant* */ q_authenticator_options(void* self);
void q_authenticator_set_option(void* self, const char* opt, void* value);
bool q_authenticator_is_null(void* self);
void q_authenticator_detach(void* self);
void q_authenticator_delete(void* self);

#endif
