#include "libqsslcertificate.hpp"
#include "libqsslcipher.hpp"
#include "libqssldiffiehellmanparameters.hpp"
#include "libqsslellipticcurve.hpp"
#include "libqsslkey.hpp"
#include "../libqvariant.hpp"
#include "libqsslconfiguration.hpp"
#include "libqsslconfiguration.h"

QSslConfiguration* q_sslconfiguration_new() {
    return QSslConfiguration_new();
}

QSslConfiguration* q_sslconfiguration_new2(void* other) {
    return QSslConfiguration_new2((QSslConfiguration*)other);
}

void q_sslconfiguration_operator_assign(void* self, void* other) {
    QSslConfiguration_OperatorAssign((QSslConfiguration*)self, (QSslConfiguration*)other);
}

void q_sslconfiguration_swap(void* self, void* other) {
    QSslConfiguration_Swap((QSslConfiguration*)self, (QSslConfiguration*)other);
}

bool q_sslconfiguration_operator_equal(void* self, void* other) {
    return QSslConfiguration_OperatorEqual((QSslConfiguration*)self, (QSslConfiguration*)other);
}

bool q_sslconfiguration_operator_not_equal(void* self, void* other) {
    return QSslConfiguration_OperatorNotEqual((QSslConfiguration*)self, (QSslConfiguration*)other);
}

bool q_sslconfiguration_is_null(void* self) {
    return QSslConfiguration_IsNull((QSslConfiguration*)self);
}

int32_t q_sslconfiguration_protocol(void* self) {
    return QSslConfiguration_Protocol((QSslConfiguration*)self);
}

void q_sslconfiguration_set_protocol(void* self, int32_t protocol) {
    QSslConfiguration_SetProtocol((QSslConfiguration*)self, protocol);
}

int32_t q_sslconfiguration_peer_verify_mode(void* self) {
    return QSslConfiguration_PeerVerifyMode((QSslConfiguration*)self);
}

void q_sslconfiguration_set_peer_verify_mode(void* self, int32_t mode) {
    QSslConfiguration_SetPeerVerifyMode((QSslConfiguration*)self, mode);
}

int32_t q_sslconfiguration_peer_verify_depth(void* self) {
    return QSslConfiguration_PeerVerifyDepth((QSslConfiguration*)self);
}

void q_sslconfiguration_set_peer_verify_depth(void* self, int depth) {
    QSslConfiguration_SetPeerVerifyDepth((QSslConfiguration*)self, depth);
}

libqt_list /* of QSslCertificate* */ q_sslconfiguration_local_certificate_chain(void* self) {
    libqt_list _arr = QSslConfiguration_LocalCertificateChain((QSslConfiguration*)self);
    return _arr;
}

void q_sslconfiguration_set_local_certificate_chain(void* self, libqt_list localChain) {
    QSslConfiguration_SetLocalCertificateChain((QSslConfiguration*)self, localChain);
}

QSslCertificate* q_sslconfiguration_local_certificate(void* self) {
    return QSslConfiguration_LocalCertificate((QSslConfiguration*)self);
}

void q_sslconfiguration_set_local_certificate(void* self, void* certificate) {
    QSslConfiguration_SetLocalCertificate((QSslConfiguration*)self, (QSslCertificate*)certificate);
}

QSslCertificate* q_sslconfiguration_peer_certificate(void* self) {
    return QSslConfiguration_PeerCertificate((QSslConfiguration*)self);
}

libqt_list /* of QSslCertificate* */ q_sslconfiguration_peer_certificate_chain(void* self) {
    libqt_list _arr = QSslConfiguration_PeerCertificateChain((QSslConfiguration*)self);
    return _arr;
}

QSslCipher* q_sslconfiguration_session_cipher(void* self) {
    return QSslConfiguration_SessionCipher((QSslConfiguration*)self);
}

int32_t q_sslconfiguration_session_protocol(void* self) {
    return QSslConfiguration_SessionProtocol((QSslConfiguration*)self);
}

QSslKey* q_sslconfiguration_private_key(void* self) {
    return QSslConfiguration_PrivateKey((QSslConfiguration*)self);
}

void q_sslconfiguration_set_private_key(void* self, void* key) {
    QSslConfiguration_SetPrivateKey((QSslConfiguration*)self, (QSslKey*)key);
}

libqt_list /* of QSslCipher* */ q_sslconfiguration_ciphers(void* self) {
    libqt_list _arr = QSslConfiguration_Ciphers((QSslConfiguration*)self);
    return _arr;
}

void q_sslconfiguration_set_ciphers(void* self, libqt_list ciphers) {
    QSslConfiguration_SetCiphers((QSslConfiguration*)self, ciphers);
}

void q_sslconfiguration_set_ciphers2(void* self, const char* ciphers) {
    QSslConfiguration_SetCiphers2((QSslConfiguration*)self, qstring(ciphers));
}

libqt_list /* of QSslCipher* */ q_sslconfiguration_supported_ciphers() {
    libqt_list _arr = QSslConfiguration_SupportedCiphers();
    return _arr;
}

libqt_list /* of QSslCertificate* */ q_sslconfiguration_ca_certificates(void* self) {
    libqt_list _arr = QSslConfiguration_CaCertificates((QSslConfiguration*)self);
    return _arr;
}

void q_sslconfiguration_set_ca_certificates(void* self, libqt_list certificates) {
    QSslConfiguration_SetCaCertificates((QSslConfiguration*)self, certificates);
}

bool q_sslconfiguration_add_ca_certificates(void* self, const char* path) {
    return QSslConfiguration_AddCaCertificates((QSslConfiguration*)self, qstring(path));
}

void q_sslconfiguration_add_ca_certificate(void* self, void* certificate) {
    QSslConfiguration_AddCaCertificate((QSslConfiguration*)self, (QSslCertificate*)certificate);
}

void q_sslconfiguration_add_ca_certificates2(void* self, libqt_list certificates) {
    QSslConfiguration_AddCaCertificates2((QSslConfiguration*)self, certificates);
}

libqt_list /* of QSslCertificate* */ q_sslconfiguration_system_ca_certificates() {
    libqt_list _arr = QSslConfiguration_SystemCaCertificates();
    return _arr;
}

void q_sslconfiguration_set_ssl_option(void* self, int32_t option, bool on) {
    QSslConfiguration_SetSslOption((QSslConfiguration*)self, option, on);
}

bool q_sslconfiguration_test_ssl_option(void* self, int32_t option) {
    return QSslConfiguration_TestSslOption((QSslConfiguration*)self, option);
}

char* q_sslconfiguration_session_ticket(void* self) {
    libqt_string _str = QSslConfiguration_SessionTicket((QSslConfiguration*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sslconfiguration_set_session_ticket(void* self, const char* sessionTicket) {
    QSslConfiguration_SetSessionTicket((QSslConfiguration*)self, qstring(sessionTicket));
}

int32_t q_sslconfiguration_session_ticket_life_time_hint(void* self) {
    return QSslConfiguration_SessionTicketLifeTimeHint((QSslConfiguration*)self);
}

QSslKey* q_sslconfiguration_ephemeral_server_key(void* self) {
    return QSslConfiguration_EphemeralServerKey((QSslConfiguration*)self);
}

libqt_list /* of QSslEllipticCurve* */ q_sslconfiguration_elliptic_curves(void* self) {
    libqt_list _arr = QSslConfiguration_EllipticCurves((QSslConfiguration*)self);
    return _arr;
}

void q_sslconfiguration_set_elliptic_curves(void* self, libqt_list curves) {
    QSslConfiguration_SetEllipticCurves((QSslConfiguration*)self, curves);
}

libqt_list /* of QSslEllipticCurve* */ q_sslconfiguration_supported_elliptic_curves() {
    libqt_list _arr = QSslConfiguration_SupportedEllipticCurves();
    return _arr;
}

char* q_sslconfiguration_pre_shared_key_identity_hint(void* self) {
    libqt_string _str = QSslConfiguration_PreSharedKeyIdentityHint((QSslConfiguration*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sslconfiguration_set_pre_shared_key_identity_hint(void* self, const char* hint) {
    QSslConfiguration_SetPreSharedKeyIdentityHint((QSslConfiguration*)self, qstring(hint));
}

QSslDiffieHellmanParameters* q_sslconfiguration_diffie_hellman_parameters(void* self) {
    return QSslConfiguration_DiffieHellmanParameters((QSslConfiguration*)self);
}

void q_sslconfiguration_set_diffie_hellman_parameters(void* self, void* dhparams) {
    QSslConfiguration_SetDiffieHellmanParameters((QSslConfiguration*)self, (QSslDiffieHellmanParameters*)dhparams);
}

void q_sslconfiguration_set_backend_configuration_option(void* self, const char* name, void* value) {
    QSslConfiguration_SetBackendConfigurationOption((QSslConfiguration*)self, qstring(name), (QVariant*)value);
}

void q_sslconfiguration_set_backend_configuration(void* self) {
    QSslConfiguration_SetBackendConfiguration((QSslConfiguration*)self);
}

QSslConfiguration* q_sslconfiguration_default_configuration() {
    return QSslConfiguration_DefaultConfiguration();
}

void q_sslconfiguration_set_default_configuration(void* configuration) {
    QSslConfiguration_SetDefaultConfiguration((QSslConfiguration*)configuration);
}

bool q_sslconfiguration_dtls_cookie_verification_enabled(void* self) {
    return QSslConfiguration_DtlsCookieVerificationEnabled((QSslConfiguration*)self);
}

void q_sslconfiguration_set_dtls_cookie_verification_enabled(void* self, bool enable) {
    QSslConfiguration_SetDtlsCookieVerificationEnabled((QSslConfiguration*)self, enable);
}

QSslConfiguration* q_sslconfiguration_default_dtls_configuration() {
    return QSslConfiguration_DefaultDtlsConfiguration();
}

void q_sslconfiguration_set_default_dtls_configuration(void* configuration) {
    QSslConfiguration_SetDefaultDtlsConfiguration((QSslConfiguration*)configuration);
}

bool q_sslconfiguration_handshake_must_interrupt_on_error(void* self) {
    return QSslConfiguration_HandshakeMustInterruptOnError((QSslConfiguration*)self);
}

void q_sslconfiguration_set_handshake_must_interrupt_on_error(void* self, bool interrupt) {
    QSslConfiguration_SetHandshakeMustInterruptOnError((QSslConfiguration*)self, interrupt);
}

bool q_sslconfiguration_missing_certificate_is_fatal(void* self) {
    return QSslConfiguration_MissingCertificateIsFatal((QSslConfiguration*)self);
}

void q_sslconfiguration_set_missing_certificate_is_fatal(void* self, bool cannotRecover) {
    QSslConfiguration_SetMissingCertificateIsFatal((QSslConfiguration*)self, cannotRecover);
}

void q_sslconfiguration_set_ocsp_stapling_enabled(void* self, bool enable) {
    QSslConfiguration_SetOcspStaplingEnabled((QSslConfiguration*)self, enable);
}

bool q_sslconfiguration_ocsp_stapling_enabled(void* self) {
    return QSslConfiguration_OcspStaplingEnabled((QSslConfiguration*)self);
}

void q_sslconfiguration_set_allowed_next_protocols(void* self, const char* protocols[static 1]) {
    size_t protocols_len = libqt_strv_length(protocols);
    libqt_string* protocols_qstr = (libqt_string*)malloc(protocols_len * sizeof(libqt_string));
    if (protocols_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sslconfiguration_set_allowed_next_protocols");
        abort();
    }
    for (size_t i = 0; i < protocols_len; ++i) {
        protocols_qstr[i] = qstring(protocols[i]);
    }
    libqt_list protocols_list = qlist(protocols_qstr, protocols_len);
    QSslConfiguration_SetAllowedNextProtocols((QSslConfiguration*)self, protocols_list);
    free(protocols_qstr);
}

const char** q_sslconfiguration_allowed_next_protocols(void* self) {
    libqt_list _arr = QSslConfiguration_AllowedNextProtocols((QSslConfiguration*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_sslconfiguration_allowed_next_protocols");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

char* q_sslconfiguration_next_negotiated_protocol(void* self) {
    libqt_string _str = QSslConfiguration_NextNegotiatedProtocol((QSslConfiguration*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_sslconfiguration_next_protocol_negotiation_status(void* self) {
    return QSslConfiguration_NextProtocolNegotiationStatus((QSslConfiguration*)self);
}

bool q_sslconfiguration_add_ca_certificates22(void* self, const char* path, int32_t format) {
    return QSslConfiguration_AddCaCertificates22((QSslConfiguration*)self, qstring(path), format);
}

bool q_sslconfiguration_add_ca_certificates3(void* self, const char* path, int32_t format, int32_t syntax) {
    return QSslConfiguration_AddCaCertificates3((QSslConfiguration*)self, qstring(path), format, syntax);
}

void q_sslconfiguration_delete(void* self) {
    QSslConfiguration_Delete((QSslConfiguration*)(self));
}
