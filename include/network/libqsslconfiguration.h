#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLCONFIGURATION_H
#define SRC_NETWORKQT6C_LIBQSSLCONFIGURATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqsslcertificate.h"
#include "libqsslcipher.h"
#include "libqssldiffiehellmanparameters.h"
#include "libqsslellipticcurve.h"
#include "libqsslkey.h"
#include <string.h>
#include "../libqvariant.h"

QSslConfiguration* q_sslconfiguration_new();
QSslConfiguration* q_sslconfiguration_new2(void* other);
void q_sslconfiguration_operator_assign(void* self, void* other);
void q_sslconfiguration_swap(void* self, void* other);
bool q_sslconfiguration_operator_equal(void* self, void* other);
bool q_sslconfiguration_operator_not_equal(void* self, void* other);
bool q_sslconfiguration_is_null(void* self);
int64_t q_sslconfiguration_protocol(void* self);
void q_sslconfiguration_set_protocol(void* self, int64_t protocol);
int64_t q_sslconfiguration_peer_verify_mode(void* self);
void q_sslconfiguration_set_peer_verify_mode(void* self, int64_t mode);
int32_t q_sslconfiguration_peer_verify_depth(void* self);
void q_sslconfiguration_set_peer_verify_depth(void* self, int depth);
libqt_list /* of QSslCertificate* */ q_sslconfiguration_local_certificate_chain(void* self);
void q_sslconfiguration_set_local_certificate_chain(void* self, void* localChain[]);
QSslCertificate* q_sslconfiguration_local_certificate(void* self);
void q_sslconfiguration_set_local_certificate(void* self, void* certificate);
QSslCertificate* q_sslconfiguration_peer_certificate(void* self);
libqt_list /* of QSslCertificate* */ q_sslconfiguration_peer_certificate_chain(void* self);
QSslCipher* q_sslconfiguration_session_cipher(void* self);
int64_t q_sslconfiguration_session_protocol(void* self);
QSslKey* q_sslconfiguration_private_key(void* self);
void q_sslconfiguration_set_private_key(void* self, void* key);
libqt_list /* of QSslCipher* */ q_sslconfiguration_ciphers(void* self);
void q_sslconfiguration_set_ciphers(void* self, void* ciphers[]);
void q_sslconfiguration_set_ciphers_with_ciphers(void* self, const char* ciphers);
libqt_list /* of QSslCipher* */ q_sslconfiguration_supported_ciphers();
libqt_list /* of QSslCertificate* */ q_sslconfiguration_ca_certificates(void* self);
void q_sslconfiguration_set_ca_certificates(void* self, void* certificates[]);
bool q_sslconfiguration_add_ca_certificates(void* self, const char* path);
void q_sslconfiguration_add_ca_certificate(void* self, void* certificate);
void q_sslconfiguration_add_ca_certificates_with_certificates(void* self, void* certificates[]);
libqt_list /* of QSslCertificate* */ q_sslconfiguration_system_ca_certificates();
void q_sslconfiguration_set_ssl_option(void* self, int64_t option, bool on);
bool q_sslconfiguration_test_ssl_option(void* self, int64_t option);
char* q_sslconfiguration_session_ticket(void* self);
void q_sslconfiguration_set_session_ticket(void* self, const char* sessionTicket);
int32_t q_sslconfiguration_session_ticket_life_time_hint(void* self);
QSslKey* q_sslconfiguration_ephemeral_server_key(void* self);
libqt_list /* of QSslEllipticCurve* */ q_sslconfiguration_elliptic_curves(void* self);
void q_sslconfiguration_set_elliptic_curves(void* self, void* curves[]);
libqt_list /* of QSslEllipticCurve* */ q_sslconfiguration_supported_elliptic_curves();
char* q_sslconfiguration_pre_shared_key_identity_hint(void* self);
void q_sslconfiguration_set_pre_shared_key_identity_hint(void* self, const char* hint);
QSslDiffieHellmanParameters* q_sslconfiguration_diffie_hellman_parameters(void* self);
void q_sslconfiguration_set_diffie_hellman_parameters(void* self, void* dhparams);
void q_sslconfiguration_set_backend_configuration_option(void* self, const char* name, void* value);
void q_sslconfiguration_set_backend_configuration(void* self);
QSslConfiguration* q_sslconfiguration_default_configuration();
void q_sslconfiguration_set_default_configuration(void* configuration);
bool q_sslconfiguration_dtls_cookie_verification_enabled(void* self);
void q_sslconfiguration_set_dtls_cookie_verification_enabled(void* self, bool enable);
QSslConfiguration* q_sslconfiguration_default_dtls_configuration();
void q_sslconfiguration_set_default_dtls_configuration(void* configuration);
bool q_sslconfiguration_handshake_must_interrupt_on_error(void* self);
void q_sslconfiguration_set_handshake_must_interrupt_on_error(void* self, bool interrupt);
bool q_sslconfiguration_missing_certificate_is_fatal(void* self);
void q_sslconfiguration_set_missing_certificate_is_fatal(void* self, bool cannotRecover);
void q_sslconfiguration_set_ocsp_stapling_enabled(void* self, bool enable);
bool q_sslconfiguration_ocsp_stapling_enabled(void* self);
void q_sslconfiguration_set_allowed_next_protocols(void* self, const char* protocols[]);
const char** q_sslconfiguration_allowed_next_protocols(void* self);
char* q_sslconfiguration_next_negotiated_protocol(void* self);
int64_t q_sslconfiguration_next_protocol_negotiation_status(void* self);
bool q_sslconfiguration_add_ca_certificates2(void* self, const char* path, int64_t format);
bool q_sslconfiguration_add_ca_certificates3(void* self, const char* path, int64_t format, int64_t syntax);
void q_sslconfiguration_delete(void* self);

/// https://doc.qt.io/qt-6/qsslconfiguration.html#types

typedef enum {
    QSSLCONFIGURATION_NEXTPROTOCOLNEGOTIATIONSTATUS_NEXTPROTOCOLNEGOTIATIONNONE = 0,
    QSSLCONFIGURATION_NEXTPROTOCOLNEGOTIATIONSTATUS_NEXTPROTOCOLNEGOTIATIONNEGOTIATED = 1,
    QSSLCONFIGURATION_NEXTPROTOCOLNEGOTIATIONSTATUS_NEXTPROTOCOLNEGOTIATIONUNSUPPORTED = 2
} QSslConfiguration__NextProtocolNegotiationStatus;

#endif
