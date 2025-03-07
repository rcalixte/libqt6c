#pragma once
#ifndef SRC_NETWORKQT6C_LIBQOCSPRESPONSE_H
#define SRC_NETWORKQT6C_LIBQOCSPRESPONSE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqsslcertificate.h"

QOcspResponse* q_ocspresponse_new();
QOcspResponse* q_ocspresponse_new2(void* other);
void q_ocspresponse_operator_assign(void* self, void* other);
int64_t q_ocspresponse_certificate_status(void* self);
int64_t q_ocspresponse_revocation_reason(void* self);
QSslCertificate* q_ocspresponse_responder(void* self);
QSslCertificate* q_ocspresponse_subject(void* self);
void q_ocspresponse_swap(void* self, void* other);
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
