#pragma once
#ifndef SRC_WEBENGINE_QT6C_LIBQWEBENGINECERTIFICATEERROR_H
#define SRC_WEBENGINE_QT6C_LIBQWEBENGINECERTIFICATEERROR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html)

/// q_webenginecertificateerror_new constructs a new QWebEngineCertificateError object.
///
/// @param other QWebEngineCertificateError*
///
QWebEngineCertificateError* q_webenginecertificateerror_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#operator-eq)
///
/// @param self QWebEngineCertificateError*
/// @param other QWebEngineCertificateError*
///
void q_webenginecertificateerror_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#type)
///
/// @param self QWebEngineCertificateError*
///
/// @return enum QWebEngineCertificateError__Type
///
int32_t q_webenginecertificateerror_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#url)
///
/// @param self QWebEngineCertificateError*
///
QUrl* q_webenginecertificateerror_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#isOverridable)
///
/// @param self QWebEngineCertificateError*
///
bool q_webenginecertificateerror_is_overridable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#description)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineCertificateError*
///
const char* q_webenginecertificateerror_description(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#isMainFrame)
///
/// @param self QWebEngineCertificateError*
///
bool q_webenginecertificateerror_is_main_frame(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#defer)
///
/// @param self QWebEngineCertificateError*
///
void q_webenginecertificateerror_defer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#rejectCertificate)
///
/// @param self QWebEngineCertificateError*
///
void q_webenginecertificateerror_reject_certificate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#acceptCertificate)
///
/// @param self QWebEngineCertificateError*
///
void q_webenginecertificateerror_accept_certificate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#certificateChain)
///
/// @param self QWebEngineCertificateError*
///
libqt_list /* of QSslCertificate* */ q_webenginecertificateerror_certificate_chain(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#dtor.QWebEngineCertificateError)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineCertificateError*
///
void q_webenginecertificateerror_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#public-types)

typedef enum {
    QWEBENGINECERTIFICATEERROR_TYPE_SSLPINNEDKEYNOTINCERTIFICATECHAIN = -150,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATECOMMONNAMEINVALID = -200,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATEDATEINVALID = -201,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATEAUTHORITYINVALID = -202,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATECONTAINSERRORS = -203,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATENOREVOCATIONMECHANISM = -204,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATEUNABLETOCHECKREVOCATION = -205,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATEREVOKED = -206,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATEINVALID = -207,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATEWEAKSIGNATUREALGORITHM = -208,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATENONUNIQUENAME = -210,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATEWEAKKEY = -211,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATENAMECONSTRAINTVIOLATION = -212,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATEVALIDITYTOOLONG = -213,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATETRANSPARENCYREQUIRED = -214,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATESYMANTECLEGACY = -215,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATEKNOWNINTERCEPTIONBLOCKED = -217,
    QWEBENGINECERTIFICATEERROR_TYPE_SSLOBSOLETEVERSION = -218
} QWebEngineCertificateError__Type;

#endif
