#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQSSLELLIPTICCURVE_H
#define SRC_NETWORK_QT6C_LIBQSSLELLIPTICCURVE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qsslellipticcurve.html

/// q_sslellipticcurve_new constructs a new QSslEllipticCurve object.
///
/// @param other QSslEllipticCurve*
QSslEllipticCurve* q_sslellipticcurve_new(void* other);

/// q_sslellipticcurve_new2 constructs a new QSslEllipticCurve object and invalidates the source QSslEllipticCurve object.
///
/// @param other QSslEllipticCurve*
QSslEllipticCurve* q_sslellipticcurve_new2(void* other);

/// q_sslellipticcurve_new3 constructs a new QSslEllipticCurve object.
///
QSslEllipticCurve* q_sslellipticcurve_new3();

/// q_sslellipticcurve_new4 constructs a new QSslEllipticCurve object.
///
/// @param param1 QSslEllipticCurve*
QSslEllipticCurve* q_sslellipticcurve_new4(void* param1);

/// q_sslellipticcurve_copy_assign shallow copies `other` into `self`.
///
/// @param self QSslEllipticCurve*
/// @param other QSslEllipticCurve*
void q_sslellipticcurve_copy_assign(void* self, void* other);

/// q_sslellipticcurve_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QSslEllipticCurve*
/// @param other QSslEllipticCurve*
void q_sslellipticcurve_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslellipticcurve.html#fromShortName)
///
/// @param name const char*
QSslEllipticCurve* q_sslellipticcurve_from_short_name(const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslellipticcurve.html#fromLongName)
///
/// @param name const char*
QSslEllipticCurve* q_sslellipticcurve_from_long_name(const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslellipticcurve.html#shortName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslEllipticCurve*
const char* q_sslellipticcurve_short_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslellipticcurve.html#longName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslEllipticCurve*
const char* q_sslellipticcurve_long_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslellipticcurve.html#isValid)
///
/// @param self QSslEllipticCurve*
bool q_sslellipticcurve_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslellipticcurve.html#isTlsNamedCurve)
///
/// @param self QSslEllipticCurve*
bool q_sslellipticcurve_is_tls_named_curve(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslellipticcurve.html#dtor.QSslEllipticCurve)
///
/// Delete this object from C++ memory.
///
/// @param self QSslEllipticCurve*
void q_sslellipticcurve_delete(void* self);

#endif
