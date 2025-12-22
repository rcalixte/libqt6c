#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQSSLCERTIFICATEEXTENSION_H
#define SRC_NETWORK_QT6C_LIBQSSLCERTIFICATEEXTENSION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html)

/// q_sslcertificateextension_new constructs a new QSslCertificateExtension object.
///
QSslCertificateExtension* q_sslcertificateextension_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html)

/// q_sslcertificateextension_new2 constructs a new QSslCertificateExtension object.
///
/// @param other QSslCertificateExtension*
///
QSslCertificateExtension* q_sslcertificateextension_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html#operator-eq)
///
/// @param self QSslCertificateExtension*
/// @param other QSslCertificateExtension*
///
void q_sslcertificateextension_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html#swap)
///
/// @param self QSslCertificateExtension*
/// @param other QSslCertificateExtension*
///
void q_sslcertificateextension_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html#oid)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSslCertificateExtension*
///
const char* q_sslcertificateextension_oid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSslCertificateExtension*
///
const char* q_sslcertificateextension_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html#value)
///
/// @param self QSslCertificateExtension*
///
QVariant* q_sslcertificateextension_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html#isCritical)
///
/// @param self QSslCertificateExtension*
///
bool q_sslcertificateextension_is_critical(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html#isSupported)
///
/// @param self QSslCertificateExtension*
///
bool q_sslcertificateextension_is_supported(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificateextension.html#dtor.QSslCertificateExtension)
///
/// Delete this object from C++ memory.
///
/// @param self QSslCertificateExtension*
///
void q_sslcertificateextension_delete(void* self);

#endif
