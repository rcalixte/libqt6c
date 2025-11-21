#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQAUTHENTICATOR_H
#define SRC_NETWORK_QT6C_LIBQAUTHENTICATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qauthenticator.html

/// q_authenticator_new constructs a new QAuthenticator object.
///
QAuthenticator* q_authenticator_new();

/// q_authenticator_new2 constructs a new QAuthenticator object.
///
/// @param other QAuthenticator*
QAuthenticator* q_authenticator_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#operator-eq)
///
/// @param self QAuthenticator*
/// @param other QAuthenticator*
void q_authenticator_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#operator-eq-eq)
///
/// @param self QAuthenticator*
/// @param other QAuthenticator*
bool q_authenticator_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#operator-not-eq)
///
/// @param self QAuthenticator*
/// @param other QAuthenticator*
bool q_authenticator_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#user)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAuthenticator*
const char* q_authenticator_user(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#setUser)
///
/// @param self QAuthenticator*
/// @param user const char*
void q_authenticator_set_user(void* self, const char* user);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#password)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAuthenticator*
const char* q_authenticator_password(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#setPassword)
///
/// @param self QAuthenticator*
/// @param password const char*
void q_authenticator_set_password(void* self, const char* password);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#realm)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAuthenticator*
const char* q_authenticator_realm(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#setRealm)
///
/// @param self QAuthenticator*
/// @param realm const char*
void q_authenticator_set_realm(void* self, const char* realm);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#option)
///
/// @param self QAuthenticator*
/// @param opt const char*
QVariant* q_authenticator_option(void* self, const char* opt);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#options)
///
/// @param self QAuthenticator*
libqt_map /* of const char* to QVariant* */ q_authenticator_options(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#setOption)
///
/// @param self QAuthenticator*
/// @param opt const char*
/// @param value QVariant*
void q_authenticator_set_option(void* self, const char* opt, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#isNull)
///
/// @param self QAuthenticator*
bool q_authenticator_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#detach)
///
/// @param self QAuthenticator*
void q_authenticator_detach(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#dtor.QAuthenticator)
///
/// Delete this object from C++ memory.
///
/// @param self QAuthenticator*
void q_authenticator_delete(void* self);

#endif
