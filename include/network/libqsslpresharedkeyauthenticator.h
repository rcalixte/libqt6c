#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLPRESHAREDKEYAUTHENTICATOR_H
#define SRC_NETWORKQT6C_LIBQSSLPRESHAREDKEYAUTHENTICATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html

/// q_sslpresharedkeyauthenticator_new constructs a new QSslPreSharedKeyAuthenticator object.
///
///
QSslPreSharedKeyAuthenticator* q_sslpresharedkeyauthenticator_new();

/// q_sslpresharedkeyauthenticator_new2 constructs a new QSslPreSharedKeyAuthenticator object.
///
/// ``` QSslPreSharedKeyAuthenticator* authenticator ```
QSslPreSharedKeyAuthenticator* q_sslpresharedkeyauthenticator_new2(void* authenticator);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#operator=)
///
/// ``` QSslPreSharedKeyAuthenticator* self, QSslPreSharedKeyAuthenticator* authenticator ```
void q_sslpresharedkeyauthenticator_operator_assign(void* self, void* authenticator);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#swap)
///
/// ``` QSslPreSharedKeyAuthenticator* self, QSslPreSharedKeyAuthenticator* other ```
void q_sslpresharedkeyauthenticator_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#identityHint)
///
/// ``` QSslPreSharedKeyAuthenticator* self ```
char* q_sslpresharedkeyauthenticator_identity_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#setIdentity)
///
/// ``` QSslPreSharedKeyAuthenticator* self, const char* identity ```
void q_sslpresharedkeyauthenticator_set_identity(void* self, const char* identity);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#identity)
///
/// ``` QSslPreSharedKeyAuthenticator* self ```
char* q_sslpresharedkeyauthenticator_identity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#maximumIdentityLength)
///
/// ``` QSslPreSharedKeyAuthenticator* self ```
int32_t q_sslpresharedkeyauthenticator_maximum_identity_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#setPreSharedKey)
///
/// ``` QSslPreSharedKeyAuthenticator* self, const char* preSharedKey ```
void q_sslpresharedkeyauthenticator_set_pre_shared_key(void* self, const char* preSharedKey);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#preSharedKey)
///
/// ``` QSslPreSharedKeyAuthenticator* self ```
char* q_sslpresharedkeyauthenticator_pre_shared_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#maximumPreSharedKeyLength)
///
/// ``` QSslPreSharedKeyAuthenticator* self ```
int32_t q_sslpresharedkeyauthenticator_maximum_pre_shared_key_length(void* self);

/// Delete this object from C++ memory.
///
/// ``` QSslPreSharedKeyAuthenticator* self ```
void q_sslpresharedkeyauthenticator_delete(void* self);

#endif
