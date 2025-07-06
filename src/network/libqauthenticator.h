#pragma once
#ifndef SRC_NETWORKQT6C_LIBQAUTHENTICATOR_H
#define SRC_NETWORKQT6C_LIBQAUTHENTICATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qauthenticator.html

/// q_authenticator_new constructs a new QAuthenticator object.
///
///
QAuthenticator* q_authenticator_new();

/// q_authenticator_new2 constructs a new QAuthenticator object.
///
/// ``` QAuthenticator* other ```
QAuthenticator* q_authenticator_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#operator=)
///
/// ``` QAuthenticator* self, QAuthenticator* other ```
void q_authenticator_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#operator==)
///
/// ``` QAuthenticator* self, QAuthenticator* other ```
bool q_authenticator_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#operator!=)
///
/// ``` QAuthenticator* self, QAuthenticator* other ```
bool q_authenticator_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#user)
///
/// ``` QAuthenticator* self ```
const char* q_authenticator_user(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#setUser)
///
/// ``` QAuthenticator* self, const char* user ```
void q_authenticator_set_user(void* self, const char* user);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#password)
///
/// ``` QAuthenticator* self ```
const char* q_authenticator_password(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#setPassword)
///
/// ``` QAuthenticator* self, const char* password ```
void q_authenticator_set_password(void* self, const char* password);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#realm)
///
/// ``` QAuthenticator* self ```
const char* q_authenticator_realm(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#setRealm)
///
/// ``` QAuthenticator* self, const char* realm ```
void q_authenticator_set_realm(void* self, const char* realm);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#option)
///
/// ``` QAuthenticator* self, const char* opt ```
QVariant* q_authenticator_option(void* self, const char* opt);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#options)
///
/// ``` QAuthenticator* self ```
libqt_map /* of const char* to QVariant* */ q_authenticator_options(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#setOption)
///
/// ``` QAuthenticator* self, const char* opt, QVariant* value ```
void q_authenticator_set_option(void* self, const char* opt, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#isNull)
///
/// ``` QAuthenticator* self ```
bool q_authenticator_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#detach)
///
/// ``` QAuthenticator* self ```
void q_authenticator_detach(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#dtor.QAuthenticator)
///
/// Delete this object from C++ memory.
///
/// ``` QAuthenticator* self ```
void q_authenticator_delete(void* self);

#endif
