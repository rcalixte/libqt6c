#include "libqsslcertificate.hpp"
#include "libqsslcipher.hpp"
#include "libqssldiffiehellmanparameters.hpp"
#include "libqsslellipticcurve.hpp"
#include "libqsslkey.hpp"
#include <string.h>
#include "../libqvariant.hpp"
#include "libqsslconfiguration.hpp"
#include "libqsslconfiguration.h"

/// https://doc.qt.io/qt-6/qsslconfiguration.html

/// q_sslconfiguration_new constructs a new QSslConfiguration object.
///
///
QSslConfiguration* q_sslconfiguration_new() {
    return QSslConfiguration_new();
}

/// q_sslconfiguration_new2 constructs a new QSslConfiguration object.
///
/// ``` QSslConfiguration* other ```
QSslConfiguration* q_sslconfiguration_new2(void* other) {
    return QSslConfiguration_new2((QSslConfiguration*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#operator=)
///
/// ``` QSslConfiguration* self, QSslConfiguration* other ```
void q_sslconfiguration_operator_assign(void* self, void* other) {
    QSslConfiguration_OperatorAssign((QSslConfiguration*)self, (QSslConfiguration*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#swap)
///
/// ``` QSslConfiguration* self, QSslConfiguration* other ```
void q_sslconfiguration_swap(void* self, void* other) {
    QSslConfiguration_Swap((QSslConfiguration*)self, (QSslConfiguration*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#operator==)
///
/// ``` QSslConfiguration* self, QSslConfiguration* other ```
bool q_sslconfiguration_operator_equal(void* self, void* other) {
    return QSslConfiguration_OperatorEqual((QSslConfiguration*)self, (QSslConfiguration*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#operator!=)
///
/// ``` QSslConfiguration* self, QSslConfiguration* other ```
bool q_sslconfiguration_operator_not_equal(void* self, void* other) {
    return QSslConfiguration_OperatorNotEqual((QSslConfiguration*)self, (QSslConfiguration*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#isNull)
///
/// ``` QSslConfiguration* self ```
bool q_sslconfiguration_is_null(void* self) {
    return QSslConfiguration_IsNull((QSslConfiguration*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#protocol)
///
/// ``` QSslConfiguration* self ```
int64_t q_sslconfiguration_protocol(void* self) {
    return QSslConfiguration_Protocol((QSslConfiguration*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setProtocol)
///
/// ``` QSslConfiguration* self, enum QSsl__SslProtocol protocol ```
void q_sslconfiguration_set_protocol(void* self, int64_t protocol) {
    QSslConfiguration_SetProtocol((QSslConfiguration*)self, protocol);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#peerVerifyMode)
///
/// ``` QSslConfiguration* self ```
int64_t q_sslconfiguration_peer_verify_mode(void* self) {
    return QSslConfiguration_PeerVerifyMode((QSslConfiguration*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setPeerVerifyMode)
///
/// ``` QSslConfiguration* self, enum QSslSocket__PeerVerifyMode mode ```
void q_sslconfiguration_set_peer_verify_mode(void* self, int64_t mode) {
    QSslConfiguration_SetPeerVerifyMode((QSslConfiguration*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#peerVerifyDepth)
///
/// ``` QSslConfiguration* self ```
int32_t q_sslconfiguration_peer_verify_depth(void* self) {
    return QSslConfiguration_PeerVerifyDepth((QSslConfiguration*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setPeerVerifyDepth)
///
/// ``` QSslConfiguration* self, int depth ```
void q_sslconfiguration_set_peer_verify_depth(void* self, int depth) {
    QSslConfiguration_SetPeerVerifyDepth((QSslConfiguration*)self, depth);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#localCertificateChain)
///
/// ``` QSslConfiguration* self ```
libqt_list /* of QSslCertificate* */ q_sslconfiguration_local_certificate_chain(void* self) {
    libqt_list _arr = QSslConfiguration_LocalCertificateChain((QSslConfiguration*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setLocalCertificateChain)
///
/// ``` QSslConfiguration* self, QSslCertificate* localChain[] ```
void q_sslconfiguration_set_local_certificate_chain(void* self, void* localChain[]) {
    QSslCertificate** localChain_arr = (QSslCertificate**)localChain;
    size_t localChain_len = 0;
    while (localChain_arr[localChain_len] != NULL) {
        localChain_len++;
    }
    libqt_list localChain_list = {
        .len = localChain_len,
        .data = {(QSslCertificate*)localChain},
    };
    QSslConfiguration_SetLocalCertificateChain((QSslConfiguration*)self, localChain_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#localCertificate)
///
/// ``` QSslConfiguration* self ```
QSslCertificate* q_sslconfiguration_local_certificate(void* self) {
    return QSslConfiguration_LocalCertificate((QSslConfiguration*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setLocalCertificate)
///
/// ``` QSslConfiguration* self, QSslCertificate* certificate ```
void q_sslconfiguration_set_local_certificate(void* self, void* certificate) {
    QSslConfiguration_SetLocalCertificate((QSslConfiguration*)self, (QSslCertificate*)certificate);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#peerCertificate)
///
/// ``` QSslConfiguration* self ```
QSslCertificate* q_sslconfiguration_peer_certificate(void* self) {
    return QSslConfiguration_PeerCertificate((QSslConfiguration*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#peerCertificateChain)
///
/// ``` QSslConfiguration* self ```
libqt_list /* of QSslCertificate* */ q_sslconfiguration_peer_certificate_chain(void* self) {
    libqt_list _arr = QSslConfiguration_PeerCertificateChain((QSslConfiguration*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#sessionCipher)
///
/// ``` QSslConfiguration* self ```
QSslCipher* q_sslconfiguration_session_cipher(void* self) {
    return QSslConfiguration_SessionCipher((QSslConfiguration*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#sessionProtocol)
///
/// ``` QSslConfiguration* self ```
int64_t q_sslconfiguration_session_protocol(void* self) {
    return QSslConfiguration_SessionProtocol((QSslConfiguration*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#privateKey)
///
/// ``` QSslConfiguration* self ```
QSslKey* q_sslconfiguration_private_key(void* self) {
    return QSslConfiguration_PrivateKey((QSslConfiguration*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setPrivateKey)
///
/// ``` QSslConfiguration* self, QSslKey* key ```
void q_sslconfiguration_set_private_key(void* self, void* key) {
    QSslConfiguration_SetPrivateKey((QSslConfiguration*)self, (QSslKey*)key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#ciphers)
///
/// ``` QSslConfiguration* self ```
libqt_list /* of QSslCipher* */ q_sslconfiguration_ciphers(void* self) {
    libqt_list _arr = QSslConfiguration_Ciphers((QSslConfiguration*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setCiphers)
///
/// ``` QSslConfiguration* self, QSslCipher* ciphers[] ```
void q_sslconfiguration_set_ciphers(void* self, void* ciphers[]) {
    QSslCipher** ciphers_arr = (QSslCipher**)ciphers;
    size_t ciphers_len = 0;
    while (ciphers_arr[ciphers_len] != NULL) {
        ciphers_len++;
    }
    libqt_list ciphers_list = {
        .len = ciphers_len,
        .data = {(QSslCipher*)ciphers},
    };
    QSslConfiguration_SetCiphers((QSslConfiguration*)self, ciphers_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setCiphers)
///
/// ``` QSslConfiguration* self, const char* ciphers ```
void q_sslconfiguration_set_ciphers_with_ciphers(void* self, const char* ciphers) {
    QSslConfiguration_SetCiphersWithCiphers((QSslConfiguration*)self, qstring(ciphers));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#supportedCiphers)
///
///
libqt_list /* of QSslCipher* */ q_sslconfiguration_supported_ciphers() {
    libqt_list _arr = QSslConfiguration_SupportedCiphers();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#caCertificates)
///
/// ``` QSslConfiguration* self ```
libqt_list /* of QSslCertificate* */ q_sslconfiguration_ca_certificates(void* self) {
    libqt_list _arr = QSslConfiguration_CaCertificates((QSslConfiguration*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setCaCertificates)
///
/// ``` QSslConfiguration* self, QSslCertificate* certificates[] ```
void q_sslconfiguration_set_ca_certificates(void* self, void* certificates[]) {
    QSslCertificate** certificates_arr = (QSslCertificate**)certificates;
    size_t certificates_len = 0;
    while (certificates_arr[certificates_len] != NULL) {
        certificates_len++;
    }
    libqt_list certificates_list = {
        .len = certificates_len,
        .data = {(QSslCertificate*)certificates},
    };
    QSslConfiguration_SetCaCertificates((QSslConfiguration*)self, certificates_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificates)
///
/// ``` QSslConfiguration* self, const char* path ```
bool q_sslconfiguration_add_ca_certificates(void* self, const char* path) {
    return QSslConfiguration_AddCaCertificates((QSslConfiguration*)self, qstring(path));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificate)
///
/// ``` QSslConfiguration* self, QSslCertificate* certificate ```
void q_sslconfiguration_add_ca_certificate(void* self, void* certificate) {
    QSslConfiguration_AddCaCertificate((QSslConfiguration*)self, (QSslCertificate*)certificate);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificates)
///
/// ``` QSslConfiguration* self, QSslCertificate* certificates[] ```
void q_sslconfiguration_add_ca_certificates_with_certificates(void* self, void* certificates[]) {
    QSslCertificate** certificates_arr = (QSslCertificate**)certificates;
    size_t certificates_len = 0;
    while (certificates_arr[certificates_len] != NULL) {
        certificates_len++;
    }
    libqt_list certificates_list = {
        .len = certificates_len,
        .data = {(QSslCertificate*)certificates},
    };
    QSslConfiguration_AddCaCertificatesWithCertificates((QSslConfiguration*)self, certificates_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#systemCaCertificates)
///
///
libqt_list /* of QSslCertificate* */ q_sslconfiguration_system_ca_certificates() {
    libqt_list _arr = QSslConfiguration_SystemCaCertificates();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setSslOption)
///
/// ``` QSslConfiguration* self, enum QSsl__SslOption option, bool on ```
void q_sslconfiguration_set_ssl_option(void* self, int64_t option, bool on) {
    QSslConfiguration_SetSslOption((QSslConfiguration*)self, option, on);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#testSslOption)
///
/// ``` QSslConfiguration* self, enum QSsl__SslOption option ```
bool q_sslconfiguration_test_ssl_option(void* self, int64_t option) {
    return QSslConfiguration_TestSslOption((QSslConfiguration*)self, option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#sessionTicket)
///
/// ``` QSslConfiguration* self ```
char* q_sslconfiguration_session_ticket(void* self) {
    libqt_string _str = QSslConfiguration_SessionTicket((QSslConfiguration*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setSessionTicket)
///
/// ``` QSslConfiguration* self, const char* sessionTicket ```
void q_sslconfiguration_set_session_ticket(void* self, const char* sessionTicket) {
    QSslConfiguration_SetSessionTicket((QSslConfiguration*)self, qstring(sessionTicket));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#sessionTicketLifeTimeHint)
///
/// ``` QSslConfiguration* self ```
int32_t q_sslconfiguration_session_ticket_life_time_hint(void* self) {
    return QSslConfiguration_SessionTicketLifeTimeHint((QSslConfiguration*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#ephemeralServerKey)
///
/// ``` QSslConfiguration* self ```
QSslKey* q_sslconfiguration_ephemeral_server_key(void* self) {
    return QSslConfiguration_EphemeralServerKey((QSslConfiguration*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#ellipticCurves)
///
/// ``` QSslConfiguration* self ```
libqt_list /* of QSslEllipticCurve* */ q_sslconfiguration_elliptic_curves(void* self) {
    libqt_list _arr = QSslConfiguration_EllipticCurves((QSslConfiguration*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setEllipticCurves)
///
/// ``` QSslConfiguration* self, QSslEllipticCurve* curves[] ```
void q_sslconfiguration_set_elliptic_curves(void* self, void* curves[]) {
    QSslEllipticCurve** curves_arr = (QSslEllipticCurve**)curves;
    size_t curves_len = 0;
    while (curves_arr[curves_len] != NULL) {
        curves_len++;
    }
    libqt_list curves_list = {
        .len = curves_len,
        .data = {(QSslEllipticCurve*)curves},
    };
    QSslConfiguration_SetEllipticCurves((QSslConfiguration*)self, curves_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#supportedEllipticCurves)
///
///
libqt_list /* of QSslEllipticCurve* */ q_sslconfiguration_supported_elliptic_curves() {
    libqt_list _arr = QSslConfiguration_SupportedEllipticCurves();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#preSharedKeyIdentityHint)
///
/// ``` QSslConfiguration* self ```
char* q_sslconfiguration_pre_shared_key_identity_hint(void* self) {
    libqt_string _str = QSslConfiguration_PreSharedKeyIdentityHint((QSslConfiguration*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setPreSharedKeyIdentityHint)
///
/// ``` QSslConfiguration* self, const char* hint ```
void q_sslconfiguration_set_pre_shared_key_identity_hint(void* self, const char* hint) {
    QSslConfiguration_SetPreSharedKeyIdentityHint((QSslConfiguration*)self, qstring(hint));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#diffieHellmanParameters)
///
/// ``` QSslConfiguration* self ```
QSslDiffieHellmanParameters* q_sslconfiguration_diffie_hellman_parameters(void* self) {
    return QSslConfiguration_DiffieHellmanParameters((QSslConfiguration*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setDiffieHellmanParameters)
///
/// ``` QSslConfiguration* self, QSslDiffieHellmanParameters* dhparams ```
void q_sslconfiguration_set_diffie_hellman_parameters(void* self, void* dhparams) {
    QSslConfiguration_SetDiffieHellmanParameters((QSslConfiguration*)self, (QSslDiffieHellmanParameters*)dhparams);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setBackendConfigurationOption)
///
/// ``` QSslConfiguration* self, const char* name, QVariant* value ```
void q_sslconfiguration_set_backend_configuration_option(void* self, const char* name, void* value) {
    QSslConfiguration_SetBackendConfigurationOption((QSslConfiguration*)self, qstring(name), (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setBackendConfiguration)
///
/// ``` QSslConfiguration* self ```
void q_sslconfiguration_set_backend_configuration(void* self) {
    QSslConfiguration_SetBackendConfiguration((QSslConfiguration*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#defaultConfiguration)
///
///
QSslConfiguration* q_sslconfiguration_default_configuration() {
    return QSslConfiguration_DefaultConfiguration();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setDefaultConfiguration)
///
/// ``` QSslConfiguration* configuration ```
void q_sslconfiguration_set_default_configuration(void* configuration) {
    QSslConfiguration_SetDefaultConfiguration((QSslConfiguration*)configuration);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#dtlsCookieVerificationEnabled)
///
/// ``` QSslConfiguration* self ```
bool q_sslconfiguration_dtls_cookie_verification_enabled(void* self) {
    return QSslConfiguration_DtlsCookieVerificationEnabled((QSslConfiguration*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setDtlsCookieVerificationEnabled)
///
/// ``` QSslConfiguration* self, bool enable ```
void q_sslconfiguration_set_dtls_cookie_verification_enabled(void* self, bool enable) {
    QSslConfiguration_SetDtlsCookieVerificationEnabled((QSslConfiguration*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#defaultDtlsConfiguration)
///
///
QSslConfiguration* q_sslconfiguration_default_dtls_configuration() {
    return QSslConfiguration_DefaultDtlsConfiguration();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setDefaultDtlsConfiguration)
///
/// ``` QSslConfiguration* configuration ```
void q_sslconfiguration_set_default_dtls_configuration(void* configuration) {
    QSslConfiguration_SetDefaultDtlsConfiguration((QSslConfiguration*)configuration);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#handshakeMustInterruptOnError)
///
/// ``` QSslConfiguration* self ```
bool q_sslconfiguration_handshake_must_interrupt_on_error(void* self) {
    return QSslConfiguration_HandshakeMustInterruptOnError((QSslConfiguration*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setHandshakeMustInterruptOnError)
///
/// ``` QSslConfiguration* self, bool interrupt ```
void q_sslconfiguration_set_handshake_must_interrupt_on_error(void* self, bool interrupt) {
    QSslConfiguration_SetHandshakeMustInterruptOnError((QSslConfiguration*)self, interrupt);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#missingCertificateIsFatal)
///
/// ``` QSslConfiguration* self ```
bool q_sslconfiguration_missing_certificate_is_fatal(void* self) {
    return QSslConfiguration_MissingCertificateIsFatal((QSslConfiguration*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setMissingCertificateIsFatal)
///
/// ``` QSslConfiguration* self, bool cannotRecover ```
void q_sslconfiguration_set_missing_certificate_is_fatal(void* self, bool cannotRecover) {
    QSslConfiguration_SetMissingCertificateIsFatal((QSslConfiguration*)self, cannotRecover);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setOcspStaplingEnabled)
///
/// ``` QSslConfiguration* self, bool enable ```
void q_sslconfiguration_set_ocsp_stapling_enabled(void* self, bool enable) {
    QSslConfiguration_SetOcspStaplingEnabled((QSslConfiguration*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#ocspStaplingEnabled)
///
/// ``` QSslConfiguration* self ```
bool q_sslconfiguration_ocsp_stapling_enabled(void* self) {
    return QSslConfiguration_OcspStaplingEnabled((QSslConfiguration*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setAllowedNextProtocols)
///
/// ``` QSslConfiguration* self, const char* protocols[] ```
void q_sslconfiguration_set_allowed_next_protocols(void* self, const char* protocols[]) {
    size_t protocols_len = libqt_strv_length(protocols);
    libqt_string* protocols_qstr = malloc(protocols_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < protocols_len; ++_i) {
        protocols_qstr[_i] = qstring(protocols[_i]);
    }
    libqt_list protocols_list = qstrlist(protocols_qstr, protocols_len);
    QSslConfiguration_SetAllowedNextProtocols((QSslConfiguration*)self, protocols_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#allowedNextProtocols)
///
/// ``` QSslConfiguration* self ```
const char** q_sslconfiguration_allowed_next_protocols(void* self) {
    libqt_list _arr = QSslConfiguration_AllowedNextProtocols((QSslConfiguration*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#nextNegotiatedProtocol)
///
/// ``` QSslConfiguration* self ```
char* q_sslconfiguration_next_negotiated_protocol(void* self) {
    libqt_string _str = QSslConfiguration_NextNegotiatedProtocol((QSslConfiguration*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#nextProtocolNegotiationStatus)
///
/// ``` QSslConfiguration* self ```
int64_t q_sslconfiguration_next_protocol_negotiation_status(void* self) {
    return QSslConfiguration_NextProtocolNegotiationStatus((QSslConfiguration*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificates)
///
/// ``` QSslConfiguration* self, const char* path, enum QSsl__EncodingFormat format ```
bool q_sslconfiguration_add_ca_certificates2(void* self, const char* path, int64_t format) {
    return QSslConfiguration_AddCaCertificates2((QSslConfiguration*)self, qstring(path), format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificates)
///
/// ``` QSslConfiguration* self, const char* path, enum QSsl__EncodingFormat format, enum QSslCertificate__PatternSyntax syntax ```
bool q_sslconfiguration_add_ca_certificates3(void* self, const char* path, int64_t format, int64_t syntax) {
    return QSslConfiguration_AddCaCertificates3((QSslConfiguration*)self, qstring(path), format, syntax);
}

/// Delete this object from C++ memory.
///
/// ``` QSslConfiguration* self ```
void q_sslconfiguration_delete(void* self) {
    QSslConfiguration_Delete((QSslConfiguration*)(self));
}