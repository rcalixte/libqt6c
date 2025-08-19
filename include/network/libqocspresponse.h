#pragma once
#ifndef SRC_NETWORKQT6C_LIBQOCSPRESPONSE_H
#define SRC_NETWORKQT6C_LIBQOCSPRESPONSE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qocspresponse.html

/// q_ocspresponse_new constructs a new QOcspResponse object.
///
QOcspResponse* q_ocspresponse_new();

/// q_ocspresponse_new2 constructs a new QOcspResponse object.
///
/// @param other QOcspResponse*
QOcspResponse* q_ocspresponse_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qocspresponse.html#operator-eq)
///
/// @param self QOcspResponse*
/// @param other QOcspResponse*
void q_ocspresponse_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qocspresponse.html#certificateStatus)
///
/// @param self QOcspResponse*
///
/// @return enum QOcspResponse__QOcspCertificateStatus
int32_t q_ocspresponse_certificate_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qocspresponse.html#revocationReason)
///
/// @param self QOcspResponse*
///
/// @return enum QOcspResponse__QOcspRevocationReason
int32_t q_ocspresponse_revocation_reason(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qocspresponse.html#responder)
///
/// @param self QOcspResponse*
QSslCertificate* q_ocspresponse_responder(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qocspresponse.html#subject)
///
/// @param self QOcspResponse*
QSslCertificate* q_ocspresponse_subject(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qocspresponse.html#swap)
///
/// @param self QOcspResponse*
/// @param other QOcspResponse*
void q_ocspresponse_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qocspresponse.html#dtor.QOcspResponse)
///
/// Delete this object from C++ memory.
///
/// @param self QOcspResponse*
void q_ocspresponse_delete(void* self);

/// https://doc.qt.io/qt-6/qocspresponse.html#types

typedef enum {
    QOCSPCERTIFICATESTATUS_GOOD = 0,
    QOCSPCERTIFICATESTATUS_REVOKED = 1,
    QOCSPCERTIFICATESTATUS_UNKNOWN = 2
} QOcspCertificateStatus__;

typedef enum {
    QOCSPREVOCATIONREASON_NONE = -1,
    QOCSPREVOCATIONREASON_UNSPECIFIED = 0,
    QOCSPREVOCATIONREASON_KEYCOMPROMISE = 1,
    QOCSPREVOCATIONREASON_CACOMPROMISE = 2,
    QOCSPREVOCATIONREASON_AFFILIATIONCHANGED = 3,
    QOCSPREVOCATIONREASON_SUPERSEDED = 4,
    QOCSPREVOCATIONREASON_CESSATIONOFOPERATION = 5,
    QOCSPREVOCATIONREASON_CERTIFICATEHOLD = 6,
    QOCSPREVOCATIONREASON_REMOVEFROMCRL = 7
} QOcspRevocationReason__;

#endif
