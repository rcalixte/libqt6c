#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQAUTHENTICATOR_H
#define SRC_NETWORK_QT6C_LIBQAUTHENTICATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html)

/// q_authenticator_new constructs a new QAuthenticator object.
///
QAuthenticator* q_authenticator_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html)

/// q_authenticator_new2 constructs a new QAuthenticator object.
///
/// @param other QAuthenticator*
///
QAuthenticator* q_authenticator_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#operator-eq)
///
/// @param self QAuthenticator*
/// @param other QAuthenticator*
///
void q_authenticator_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#operator-eq-eq)
///
/// @param self QAuthenticator*
/// @param other QAuthenticator*
///
bool q_authenticator_operator_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#operator-not-eq)
///
/// @param self QAuthenticator*
/// @param other QAuthenticator*
///
bool q_authenticator_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#user)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QAuthenticator*
///
const char* q_authenticator_user(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#setUser)
///
/// @param self QAuthenticator*
/// @param user const char*
///
void q_authenticator_set_user(void* self, const char* user);

/// [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#password)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QAuthenticator*
///
const char* q_authenticator_password(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#setPassword)
///
/// @param self QAuthenticator*
/// @param password const char*
///
void q_authenticator_set_password(void* self, const char* password);

/// [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#realm)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QAuthenticator*
///
const char* q_authenticator_realm(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#setRealm)
///
/// @param self QAuthenticator*
/// @param realm const char*
///
void q_authenticator_set_realm(void* self, const char* realm);

/// [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#option)
///
/// @param self QAuthenticator*
/// @param opt const char*
///
QVariant* q_authenticator_option(void* self, const char* opt);

/// [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#options)
///
/// @param self QAuthenticator*
///
libqt_map /* of const char* to QVariant* */ q_authenticator_options(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#setOption)
///
/// @param self QAuthenticator*
/// @param opt const char*
/// @param value QVariant*
///
void q_authenticator_set_option(void* self, const char* opt, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#isNull)
///
/// @param self QAuthenticator*
///
bool q_authenticator_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#detach)
///
/// @param self QAuthenticator*
///
void q_authenticator_detach(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qauthenticator.html#dtor.QAuthenticator)
///
/// Delete this object from C++ memory.
///
/// @param self QAuthenticator*
///
void q_authenticator_delete(void* self);

#endif
