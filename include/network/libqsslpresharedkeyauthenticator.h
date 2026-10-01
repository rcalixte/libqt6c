#pragma once
#ifndef NETWORK_LIBQSSLPRESHAREDKEYAUTHENTICATOR_H
#define NETWORK_LIBQSSLPRESHAREDKEYAUTHENTICATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html)

/// q_sslpresharedkeyauthenticator_new constructs a new QSslPreSharedKeyAuthenticator object.
///
QSslPreSharedKeyAuthenticator* q_sslpresharedkeyauthenticator_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html)

/// q_sslpresharedkeyauthenticator_new2 constructs a new QSslPreSharedKeyAuthenticator object.
///
/// @param authenticator QSslPreSharedKeyAuthenticator*
///
QSslPreSharedKeyAuthenticator* q_sslpresharedkeyauthenticator_new2(const void* authenticator);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#operator-eq)
///
/// @param self QSslPreSharedKeyAuthenticator*
/// @param authenticator QSslPreSharedKeyAuthenticator*
///
void q_sslpresharedkeyauthenticator_operator_assign(void* self, const void* authenticator);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#swap)
///
/// @param self QSslPreSharedKeyAuthenticator*
/// @param other QSslPreSharedKeyAuthenticator*
///
void q_sslpresharedkeyauthenticator_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#identityHint)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QSslPreSharedKeyAuthenticator*
///
char* q_sslpresharedkeyauthenticator_identity_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#setIdentity)
///
/// @param self QSslPreSharedKeyAuthenticator*
/// @param identity char*
///
void q_sslpresharedkeyauthenticator_set_identity(void* self, char* identity);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#identity)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QSslPreSharedKeyAuthenticator*
///
char* q_sslpresharedkeyauthenticator_identity(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#maximumIdentityLength)
///
/// @param self const QSslPreSharedKeyAuthenticator*
///
int32_t q_sslpresharedkeyauthenticator_maximum_identity_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#setPreSharedKey)
///
/// @param self QSslPreSharedKeyAuthenticator*
/// @param preSharedKey char*
///
void q_sslpresharedkeyauthenticator_set_pre_shared_key(void* self, char* preSharedKey);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#preSharedKey)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QSslPreSharedKeyAuthenticator*
///
char* q_sslpresharedkeyauthenticator_pre_shared_key(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#maximumPreSharedKeyLength)
///
/// @param self const QSslPreSharedKeyAuthenticator*
///
int32_t q_sslpresharedkeyauthenticator_maximum_pre_shared_key_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#dtor.QSslPreSharedKeyAuthenticator)
///
/// Delete this object from C++ memory.
///
/// @param self QSslPreSharedKeyAuthenticator*
///
void q_sslpresharedkeyauthenticator_delete(void* self);

#endif
