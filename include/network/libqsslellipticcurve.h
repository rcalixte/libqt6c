#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLELLIPTICCURVE_H
#define SRC_NETWORKQT6C_LIBQSSLELLIPTICCURVE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include <string.h>

/// https://doc.qt.io/qt-6/qsslellipticcurve.html

/// q_sslellipticcurve_new constructs a new QSslEllipticCurve object.
///
/// ``` QSslEllipticCurve* other ```
QSslEllipticCurve* q_sslellipticcurve_new(void* other);

/// q_sslellipticcurve_new2 constructs a new QSslEllipticCurve object and invalidates the source QSslEllipticCurve object.
///
/// ``` QSslEllipticCurve* other ```
QSslEllipticCurve* q_sslellipticcurve_new2(void* other);

/// q_sslellipticcurve_new3 constructs a new QSslEllipticCurve object.
///
///
QSslEllipticCurve* q_sslellipticcurve_new3();

/// q_sslellipticcurve_new4 constructs a new QSslEllipticCurve object.
///
/// ``` QSslEllipticCurve* param1 ```
QSslEllipticCurve* q_sslellipticcurve_new4(void* param1);

/// q_sslellipticcurve_copy_assign shallow copies `other` into `self`.
///
/// ``` QSslEllipticCurve* self, QSslEllipticCurve* other ```
void q_sslellipticcurve_copy_assign(void* self, void* other);

/// q_sslellipticcurve_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QSslEllipticCurve* self, QSslEllipticCurve* other ```
void q_sslellipticcurve_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslellipticcurve.html#fromShortName)
///
/// ``` const char* name ```
QSslEllipticCurve* q_sslellipticcurve_from_short_name(const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslellipticcurve.html#fromLongName)
///
/// ``` const char* name ```
QSslEllipticCurve* q_sslellipticcurve_from_long_name(const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslellipticcurve.html#shortName)
///
/// ``` QSslEllipticCurve* self ```
const char* q_sslellipticcurve_short_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslellipticcurve.html#longName)
///
/// ``` QSslEllipticCurve* self ```
const char* q_sslellipticcurve_long_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslellipticcurve.html#isValid)
///
/// ``` QSslEllipticCurve* self ```
bool q_sslellipticcurve_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslellipticcurve.html#isTlsNamedCurve)
///
/// ``` QSslEllipticCurve* self ```
bool q_sslellipticcurve_is_tls_named_curve(void* self);

/// Delete this object from C++ memory.
///
/// ``` QSslEllipticCurve* self ```
void q_sslellipticcurve_delete(void* self);

#endif
