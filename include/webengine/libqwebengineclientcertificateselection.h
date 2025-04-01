#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINECLIENTCERTIFICATESELECTION_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINECLIENTCERTIFICATESELECTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../network/libqsslcertificate.h"
#include "../libqurl.h"

/// https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html

/// q_webengineclientcertificateselection_new constructs a new QWebEngineClientCertificateSelection object.
///
/// ``` QWebEngineClientCertificateSelection* param1 ```
QWebEngineClientCertificateSelection* q_webengineclientcertificateselection_new(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#operator=)
///
/// ``` QWebEngineClientCertificateSelection* self, QWebEngineClientCertificateSelection* param1 ```
void q_webengineclientcertificateselection_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#host)
///
/// ``` QWebEngineClientCertificateSelection* self ```
QUrl* q_webengineclientcertificateselection_host(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#select)
///
/// ``` QWebEngineClientCertificateSelection* self, QSslCertificate* certificate ```
void q_webengineclientcertificateselection_select(void* self, void* certificate);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#selectNone)
///
/// ``` QWebEngineClientCertificateSelection* self ```
void q_webengineclientcertificateselection_select_none(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#certificates)
///
/// ``` QWebEngineClientCertificateSelection* self ```
libqt_list /* of QSslCertificate* */ q_webengineclientcertificateselection_certificates(void* self);

/// Delete this object from C++ memory.
///
/// ``` QWebEngineClientCertificateSelection* self ```
void q_webengineclientcertificateselection_delete(void* self);

#endif
