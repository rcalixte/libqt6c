#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLCERTIFICATE_H
#define SRC_NETWORKQT6C_LIBQSSLCERTIFICATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqdatetime.h"
#include "../libqiodevice.h"
#include "libqsslcertificateextension.h"
#include "libqsslerror.h"
#include "libqsslkey.h"
#include <string.h>

QSslCertificate* q_sslcertificate_new(void* device);
QSslCertificate* q_sslcertificate_new2();
QSslCertificate* q_sslcertificate_new3(void* other);
QSslCertificate* q_sslcertificate_new4(void* device, int64_t format);
QSslCertificate* q_sslcertificate_new5(const char* data);
QSslCertificate* q_sslcertificate_new6(const char* data, int64_t format);
void q_sslcertificate_operator_assign(void* self, void* other);
void q_sslcertificate_swap(void* self, void* other);
bool q_sslcertificate_operator_equal(void* self, void* other);
bool q_sslcertificate_operator_not_equal(void* self, void* other);
bool q_sslcertificate_is_null(void* self);
bool q_sslcertificate_is_blacklisted(void* self);
bool q_sslcertificate_is_self_signed(void* self);
void q_sslcertificate_clear(void* self);
char* q_sslcertificate_version(void* self);
char* q_sslcertificate_serial_number(void* self);
char* q_sslcertificate_digest(void* self);
const char** q_sslcertificate_issuer_info(void* self, int64_t info);
const char** q_sslcertificate_issuer_info_with_attribute(void* self, const char* attribute);
const char** q_sslcertificate_subject_info(void* self, int64_t info);
const char** q_sslcertificate_subject_info_with_attribute(void* self, const char* attribute);
const char* q_sslcertificate_issuer_display_name(void* self);
const char* q_sslcertificate_subject_display_name(void* self);
const char** q_sslcertificate_subject_info_attributes(void* self);
const char** q_sslcertificate_issuer_info_attributes(void* self);
QDateTime* q_sslcertificate_effective_date(void* self);
QDateTime* q_sslcertificate_expiry_date(void* self);
QSslKey* q_sslcertificate_public_key(void* self);
libqt_list /* of QSslCertificateExtension* */ q_sslcertificate_extensions(void* self);
char* q_sslcertificate_to_pem(void* self);
char* q_sslcertificate_to_der(void* self);
const char* q_sslcertificate_to_text(void* self);
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_path(const char* path);
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_device(void* device);
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_data(const char* data);
libqt_list /* of QSslError* */ q_sslcertificate_verify(void* certificateChain[]);
bool q_sslcertificate_import_pkcs12(void* device, void* key, void* cert);
void* q_sslcertificate_handle(void* self);
char* q_sslcertificate_digest1(void* self, int64_t algorithm);
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_path2(const char* path, int64_t format);
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_path3(const char* path, int64_t format, int64_t syntax);
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_device2(void* device, int64_t format);
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_data2(const char* data, int64_t format);
libqt_list /* of QSslError* */ q_sslcertificate_verify2(void* certificateChain[], const char* hostName);
bool q_sslcertificate_import_pkcs124(void* device, void* key, void* cert, void* caCertificates[]);
bool q_sslcertificate_import_pkcs125(void* device, void* key, void* cert, void* caCertificates[], const char* passPhrase);
void q_sslcertificate_delete(void* self);

/// https://doc.qt.io/qt-6/qsslcertificate.html#types

typedef enum {
    QSSLCERTIFICATE_SUBJECTINFO_ORGANIZATION = 0,
    QSSLCERTIFICATE_SUBJECTINFO_COMMONNAME = 1,
    QSSLCERTIFICATE_SUBJECTINFO_LOCALITYNAME = 2,
    QSSLCERTIFICATE_SUBJECTINFO_ORGANIZATIONALUNITNAME = 3,
    QSSLCERTIFICATE_SUBJECTINFO_COUNTRYNAME = 4,
    QSSLCERTIFICATE_SUBJECTINFO_STATEORPROVINCENAME = 5,
    QSSLCERTIFICATE_SUBJECTINFO_DISTINGUISHEDNAMEQUALIFIER = 6,
    QSSLCERTIFICATE_SUBJECTINFO_SERIALNUMBER = 7,
    QSSLCERTIFICATE_SUBJECTINFO_EMAILADDRESS = 8
} QSslCertificate__SubjectInfo;

typedef enum {
    QSSLCERTIFICATE_PATTERNSYNTAX_REGULAREXPRESSION = 0,
    QSSLCERTIFICATE_PATTERNSYNTAX_WILDCARD = 1,
    QSSLCERTIFICATE_PATTERNSYNTAX_FIXEDSTRING = 2
} QSslCertificate__PatternSyntax;

#endif
