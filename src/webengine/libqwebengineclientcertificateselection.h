#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINECLIENTCERTIFICATESELECTION_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINECLIENTCERTIFICATESELECTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html

/// q_webengineclientcertificateselection_new constructs a new QWebEngineClientCertificateSelection object.
///
/// @param param1 QWebEngineClientCertificateSelection*
QWebEngineClientCertificateSelection* q_webengineclientcertificateselection_new(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#operator-eq)
///
/// @param self QWebEngineClientCertificateSelection*
/// @param param1 QWebEngineClientCertificateSelection*
void q_webengineclientcertificateselection_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#host)
///
/// @param self QWebEngineClientCertificateSelection*
QUrl* q_webengineclientcertificateselection_host(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#select)
///
/// @param self QWebEngineClientCertificateSelection*
/// @param certificate QSslCertificate*
void q_webengineclientcertificateselection_select(void* self, void* certificate);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#selectNone)
///
/// @param self QWebEngineClientCertificateSelection*
void q_webengineclientcertificateselection_select_none(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#certificates)
///
/// @param self QWebEngineClientCertificateSelection*
libqt_list /* of QSslCertificate* */ q_webengineclientcertificateselection_certificates(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificateselection.html#dtor.QWebEngineClientCertificateSelection)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineClientCertificateSelection*
void q_webengineclientcertificateselection_delete(void* self);

#endif
