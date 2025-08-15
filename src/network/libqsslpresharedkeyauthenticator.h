#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLPRESHAREDKEYAUTHENTICATOR_H
#define SRC_NETWORKQT6C_LIBQSSLPRESHAREDKEYAUTHENTICATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html

/// q_sslpresharedkeyauthenticator_new constructs a new QSslPreSharedKeyAuthenticator object.
///
QSslPreSharedKeyAuthenticator* q_sslpresharedkeyauthenticator_new();

/// q_sslpresharedkeyauthenticator_new2 constructs a new QSslPreSharedKeyAuthenticator object.
///
/// @param authenticator QSslPreSharedKeyAuthenticator*
QSslPreSharedKeyAuthenticator* q_sslpresharedkeyauthenticator_new2(void* authenticator);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#operator-eq)
///
/// @param self QSslPreSharedKeyAuthenticator*
/// @param authenticator QSslPreSharedKeyAuthenticator*
void q_sslpresharedkeyauthenticator_operator_assign(void* self, void* authenticator);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#swap)
///
/// @param self QSslPreSharedKeyAuthenticator*
/// @param other QSslPreSharedKeyAuthenticator*
void q_sslpresharedkeyauthenticator_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#identityHint)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslPreSharedKeyAuthenticator*
char* q_sslpresharedkeyauthenticator_identity_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#setIdentity)
///
/// @param self QSslPreSharedKeyAuthenticator*
/// @param identity const char*
void q_sslpresharedkeyauthenticator_set_identity(void* self, const char* identity);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#identity)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslPreSharedKeyAuthenticator*
char* q_sslpresharedkeyauthenticator_identity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#maximumIdentityLength)
///
/// @param self QSslPreSharedKeyAuthenticator*
int32_t q_sslpresharedkeyauthenticator_maximum_identity_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#setPreSharedKey)
///
/// @param self QSslPreSharedKeyAuthenticator*
/// @param preSharedKey const char*
void q_sslpresharedkeyauthenticator_set_pre_shared_key(void* self, const char* preSharedKey);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#preSharedKey)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslPreSharedKeyAuthenticator*
char* q_sslpresharedkeyauthenticator_pre_shared_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#maximumPreSharedKeyLength)
///
/// @param self QSslPreSharedKeyAuthenticator*
int32_t q_sslpresharedkeyauthenticator_maximum_pre_shared_key_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#dtor.QSslPreSharedKeyAuthenticator)
///
/// Delete this object from C++ memory.
///
/// @param self QSslPreSharedKeyAuthenticator*
void q_sslpresharedkeyauthenticator_delete(void* self);

#endif
