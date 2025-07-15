#include "../libqdatetime.hpp"
#include "../libqiodevice.hpp"
#include "libqsslcertificateextension.hpp"
#include "libqsslerror.hpp"
#include "libqsslkey.hpp"
#include <string.h>
#include "libqsslcertificate.hpp"
#include "libqsslcertificate.h"

QSslCertificate* q_sslcertificate_new(void* device) {
    return QSslCertificate_new((QIODevice*)device);
}

QSslCertificate* q_sslcertificate_new2() {
    return QSslCertificate_new2();
}

QSslCertificate* q_sslcertificate_new3(void* other) {
    return QSslCertificate_new3((QSslCertificate*)other);
}

QSslCertificate* q_sslcertificate_new4(void* device, int64_t format) {
    return QSslCertificate_new4((QIODevice*)device, format);
}

QSslCertificate* q_sslcertificate_new5(const char* data) {
    return QSslCertificate_new5(qstring(data));
}

QSslCertificate* q_sslcertificate_new6(const char* data, int64_t format) {
    return QSslCertificate_new6(qstring(data), format);
}

void q_sslcertificate_operator_assign(void* self, void* other) {
    QSslCertificate_OperatorAssign((QSslCertificate*)self, (QSslCertificate*)other);
}

void q_sslcertificate_swap(void* self, void* other) {
    QSslCertificate_Swap((QSslCertificate*)self, (QSslCertificate*)other);
}

bool q_sslcertificate_operator_equal(void* self, void* other) {
    return QSslCertificate_OperatorEqual((QSslCertificate*)self, (QSslCertificate*)other);
}

bool q_sslcertificate_operator_not_equal(void* self, void* other) {
    return QSslCertificate_OperatorNotEqual((QSslCertificate*)self, (QSslCertificate*)other);
}

bool q_sslcertificate_is_null(void* self) {
    return QSslCertificate_IsNull((QSslCertificate*)self);
}

bool q_sslcertificate_is_blacklisted(void* self) {
    return QSslCertificate_IsBlacklisted((QSslCertificate*)self);
}

bool q_sslcertificate_is_self_signed(void* self) {
    return QSslCertificate_IsSelfSigned((QSslCertificate*)self);
}

void q_sslcertificate_clear(void* self) {
    QSslCertificate_Clear((QSslCertificate*)self);
}

char* q_sslcertificate_version(void* self) {
    libqt_string _str = QSslCertificate_Version((QSslCertificate*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_sslcertificate_serial_number(void* self) {
    libqt_string _str = QSslCertificate_SerialNumber((QSslCertificate*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_sslcertificate_digest(void* self) {
    libqt_string _str = QSslCertificate_Digest((QSslCertificate*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_sslcertificate_issuer_info(void* self, int64_t info) {
    libqt_list _arr = QSslCertificate_IssuerInfo((QSslCertificate*)self, info);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

const char** q_sslcertificate_issuer_info2(void* self, const char* attribute) {
    libqt_list _arr = QSslCertificate_IssuerInfo2((QSslCertificate*)self, qstring(attribute));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

const char** q_sslcertificate_subject_info(void* self, int64_t info) {
    libqt_list _arr = QSslCertificate_SubjectInfo((QSslCertificate*)self, info);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

const char** q_sslcertificate_subject_info2(void* self, const char* attribute) {
    libqt_list _arr = QSslCertificate_SubjectInfo2((QSslCertificate*)self, qstring(attribute));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

const char* q_sslcertificate_issuer_display_name(void* self) {
    libqt_string _str = QSslCertificate_IssuerDisplayName((QSslCertificate*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sslcertificate_subject_display_name(void* self) {
    libqt_string _str = QSslCertificate_SubjectDisplayName((QSslCertificate*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_sslcertificate_subject_info_attributes(void* self) {
    libqt_list _arr = QSslCertificate_SubjectInfoAttributes((QSslCertificate*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

const char** q_sslcertificate_issuer_info_attributes(void* self) {
    libqt_list _arr = QSslCertificate_IssuerInfoAttributes((QSslCertificate*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QDateTime* q_sslcertificate_effective_date(void* self) {
    return QSslCertificate_EffectiveDate((QSslCertificate*)self);
}

QDateTime* q_sslcertificate_expiry_date(void* self) {
    return QSslCertificate_ExpiryDate((QSslCertificate*)self);
}

QSslKey* q_sslcertificate_public_key(void* self) {
    return QSslCertificate_PublicKey((QSslCertificate*)self);
}

libqt_list /* of QSslCertificateExtension* */ q_sslcertificate_extensions(void* self) {
    libqt_list _arr = QSslCertificate_Extensions((QSslCertificate*)self);
    return _arr;
}

char* q_sslcertificate_to_pem(void* self) {
    libqt_string _str = QSslCertificate_ToPem((QSslCertificate*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_sslcertificate_to_der(void* self) {
    libqt_string _str = QSslCertificate_ToDer((QSslCertificate*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sslcertificate_to_text(void* self) {
    libqt_string _str = QSslCertificate_ToText((QSslCertificate*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QSslCertificate* */ q_sslcertificate_from_path(const char* path) {
    libqt_list _arr = QSslCertificate_FromPath(qstring(path));
    return _arr;
}

libqt_list /* of QSslCertificate* */ q_sslcertificate_from_device(void* device) {
    libqt_list _arr = QSslCertificate_FromDevice((QIODevice*)device);
    return _arr;
}

libqt_list /* of QSslCertificate* */ q_sslcertificate_from_data(const char* data) {
    libqt_list _arr = QSslCertificate_FromData(qstring(data));
    return _arr;
}

libqt_list /* of QSslError* */ q_sslcertificate_verify(libqt_list certificateChain) {
    libqt_list _arr = QSslCertificate_Verify(certificateChain);
    return _arr;
}

bool q_sslcertificate_import_pkcs12(void* device, void* key, void* cert) {
    return QSslCertificate_ImportPkcs12((QIODevice*)device, (QSslKey*)key, (QSslCertificate*)cert);
}

void* q_sslcertificate_handle(void* self) {
    return QSslCertificate_Handle((QSslCertificate*)self);
}

char* q_sslcertificate_digest1(void* self, int64_t algorithm) {
    libqt_string _str = QSslCertificate_Digest1((QSslCertificate*)self, algorithm);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QSslCertificate* */ q_sslcertificate_from_path2(const char* path, int64_t format) {
    libqt_list _arr = QSslCertificate_FromPath2(qstring(path), format);
    return _arr;
}

libqt_list /* of QSslCertificate* */ q_sslcertificate_from_path3(const char* path, int64_t format, int64_t syntax) {
    libqt_list _arr = QSslCertificate_FromPath3(qstring(path), format, syntax);
    return _arr;
}

libqt_list /* of QSslCertificate* */ q_sslcertificate_from_device2(void* device, int64_t format) {
    libqt_list _arr = QSslCertificate_FromDevice2((QIODevice*)device, format);
    return _arr;
}

libqt_list /* of QSslCertificate* */ q_sslcertificate_from_data2(const char* data, int64_t format) {
    libqt_list _arr = QSslCertificate_FromData2(qstring(data), format);
    return _arr;
}

libqt_list /* of QSslError* */ q_sslcertificate_verify2(libqt_list certificateChain, const char* hostName) {
    libqt_list _arr = QSslCertificate_Verify2(certificateChain, qstring(hostName));
    return _arr;
}

bool q_sslcertificate_import_pkcs124(void* device, void* key, void* cert, libqt_list caCertificates) {
    return QSslCertificate_ImportPkcs124((QIODevice*)device, (QSslKey*)key, (QSslCertificate*)cert, caCertificates);
}

bool q_sslcertificate_import_pkcs125(void* device, void* key, void* cert, libqt_list caCertificates, const char* passPhrase) {
    return QSslCertificate_ImportPkcs125((QIODevice*)device, (QSslKey*)key, (QSslCertificate*)cert, caCertificates, qstring(passPhrase));
}

void q_sslcertificate_delete(void* self) {
    QSslCertificate_Delete((QSslCertificate*)(self));
}
