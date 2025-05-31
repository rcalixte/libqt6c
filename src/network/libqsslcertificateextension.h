#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLCERTIFICATEEXTENSION_H
#define SRC_NETWORKQT6C_LIBQSSLCERTIFICATEEXTENSION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include <string.h>
#include "../libqvariant.h"

/// https://doc.qt.io/qt-6/qsslcertificateextension.html

/// q_sslcertificateextension_new constructs a new QSslCertificateExtension object.
///
///
QSslCertificateExtension* q_sslcertificateextension_new();

/// q_sslcertificateextension_new2 constructs a new QSslCertificateExtension object.
///
/// ``` QSslCertificateExtension* other ```
QSslCertificateExtension* q_sslcertificateextension_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificateextension.html#operator=)
///
/// ``` QSslCertificateExtension* self, QSslCertificateExtension* other ```
void q_sslcertificateextension_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificateextension.html#swap)
///
/// ``` QSslCertificateExtension* self, QSslCertificateExtension* other ```
void q_sslcertificateextension_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificateextension.html#oid)
///
/// ``` QSslCertificateExtension* self ```
const char* q_sslcertificateextension_oid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificateextension.html#name)
///
/// ``` QSslCertificateExtension* self ```
const char* q_sslcertificateextension_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificateextension.html#value)
///
/// ``` QSslCertificateExtension* self ```
QVariant* q_sslcertificateextension_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificateextension.html#isCritical)
///
/// ``` QSslCertificateExtension* self ```
bool q_sslcertificateextension_is_critical(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificateextension.html#isSupported)
///
/// ``` QSslCertificateExtension* self ```
bool q_sslcertificateextension_is_supported(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificateextension.html#dtor.QSslCertificateExtension)
///
/// Delete this object from C++ memory.
///
/// ``` QSslCertificateExtension* self ```
void q_sslcertificateextension_delete(void* self);

#endif
