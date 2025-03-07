#pragma once
#ifndef SRC_NETWORKQT6C_LIBQDTLS_H
#define SRC_NETWORKQT6C_LIBQDTLS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "libqhostaddress.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "libqsslcipher.h"
#include "libqsslconfiguration.h"
#include "libqsslerror.h"
#include "libqsslpresharedkeyauthenticator.h"
#include <string.h>
#include "../libqthread.h"
#include "libqudpsocket.h"
#include "../libqvariant.h"

QDtlsClientVerifier* q_dtlsclientverifier_new();
QDtlsClientVerifier* q_dtlsclientverifier_new2(void* parent);
QMetaObject* q_dtlsclientverifier_meta_object(void* self);
void* q_dtlsclientverifier_metacast(void* self, const char* param1);
int32_t q_dtlsclientverifier_metacall(void* self, int64_t param1, int param2, void* param3);
void q_dtlsclientverifier_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_dtlsclientverifier_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_dtlsclientverifier_tr(const char* s);
bool q_dtlsclientverifier_set_cookie_generator_parameters(void* self, void* params);
QDtlsClientVerifier__GeneratorParameters* q_dtlsclientverifier_cookie_generator_parameters(void* self);
bool q_dtlsclientverifier_verify_client(void* self, void* socket, const char* dgram, void* address, unsigned short port);
char* q_dtlsclientverifier_verified_hello(void* self);
int64_t q_dtlsclientverifier_dtls_error(void* self);
const char* q_dtlsclientverifier_dtls_error_string(void* self);
const char* q_dtlsclientverifier_tr2(const char* s, const char* c);
const char* q_dtlsclientverifier_tr3(const char* s, const char* c, int n);
const char* q_dtlsclientverifier_object_name(void* self);
void q_dtlsclientverifier_set_object_name(void* self, const char* name);
bool q_dtlsclientverifier_is_widget_type(void* self);
bool q_dtlsclientverifier_is_window_type(void* self);
bool q_dtlsclientverifier_is_quick_item_type(void* self);
bool q_dtlsclientverifier_signals_blocked(void* self);
bool q_dtlsclientverifier_block_signals(void* self, bool b);
QThread* q_dtlsclientverifier_thread(void* self);
void q_dtlsclientverifier_move_to_thread(void* self, void* thread);
int32_t q_dtlsclientverifier_start_timer(void* self, int interval);
void q_dtlsclientverifier_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_dtlsclientverifier_children(void* self);
void q_dtlsclientverifier_set_parent(void* self, void* parent);
void q_dtlsclientverifier_install_event_filter(void* self, void* filterObj);
void q_dtlsclientverifier_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_dtlsclientverifier_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_dtlsclientverifier_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_dtlsclientverifier_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_dtlsclientverifier_disconnect_with_q_meta_object_connection(void* param1);
void q_dtlsclientverifier_dump_object_tree(void* self);
void q_dtlsclientverifier_dump_object_info(void* self);
bool q_dtlsclientverifier_set_property(void* self, const char* name, void* value);
QVariant* q_dtlsclientverifier_property(void* self, const char* name);
const char** q_dtlsclientverifier_dynamic_property_names(void* self);
QBindingStorage* q_dtlsclientverifier_binding_storage(void* self);
QBindingStorage* q_dtlsclientverifier_binding_storage2(void* self);
void q_dtlsclientverifier_destroyed(void* self);
void q_dtlsclientverifier_on_destroyed(void* self, void (*slot)(void*));
QObject* q_dtlsclientverifier_parent(void* self);
bool q_dtlsclientverifier_inherits(void* self, const char* classname);
void q_dtlsclientverifier_delete_later(void* self);
int32_t q_dtlsclientverifier_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_dtlsclientverifier_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_dtlsclientverifier_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_dtlsclientverifier_destroyed1(void* self, void* param1);
void q_dtlsclientverifier_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_dtlsclientverifier_event(void* self, void* event);
bool q_dtlsclientverifier_qbase_event(void* self, void* event);
void q_dtlsclientverifier_on_event(void* self, bool (*slot)(void*, void*));
bool q_dtlsclientverifier_event_filter(void* self, void* watched, void* event);
bool q_dtlsclientverifier_qbase_event_filter(void* self, void* watched, void* event);
void q_dtlsclientverifier_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_dtlsclientverifier_timer_event(void* self, void* event);
void q_dtlsclientverifier_qbase_timer_event(void* self, void* event);
void q_dtlsclientverifier_on_timer_event(void* self, void (*slot)(void*, void*));
void q_dtlsclientverifier_child_event(void* self, void* event);
void q_dtlsclientverifier_qbase_child_event(void* self, void* event);
void q_dtlsclientverifier_on_child_event(void* self, void (*slot)(void*, void*));
void q_dtlsclientverifier_custom_event(void* self, void* event);
void q_dtlsclientverifier_qbase_custom_event(void* self, void* event);
void q_dtlsclientverifier_on_custom_event(void* self, void (*slot)(void*, void*));
void q_dtlsclientverifier_connect_notify(void* self, void* signal);
void q_dtlsclientverifier_qbase_connect_notify(void* self, void* signal);
void q_dtlsclientverifier_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_dtlsclientverifier_disconnect_notify(void* self, void* signal);
void q_dtlsclientverifier_qbase_disconnect_notify(void* self, void* signal);
void q_dtlsclientverifier_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_dtlsclientverifier_sender(void* self);
QObject* q_dtlsclientverifier_qbase_sender(void* self);
void q_dtlsclientverifier_on_sender(void* self, QObject* (*slot)());
int32_t q_dtlsclientverifier_sender_signal_index(void* self);
int32_t q_dtlsclientverifier_qbase_sender_signal_index(void* self);
void q_dtlsclientverifier_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_dtlsclientverifier_receivers(void* self, const char* signal);
int32_t q_dtlsclientverifier_qbase_receivers(void* self, const char* signal);
void q_dtlsclientverifier_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_dtlsclientverifier_is_signal_connected(void* self, void* signal);
bool q_dtlsclientverifier_qbase_is_signal_connected(void* self, void* signal);
void q_dtlsclientverifier_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_dtlsclientverifier_delete(void* self);

QDtls* q_dtls_new(int64_t mode);
QDtls* q_dtls_new2(int64_t mode, void* parent);
QMetaObject* q_dtls_meta_object(void* self);
void* q_dtls_metacast(void* self, const char* param1);
int32_t q_dtls_metacall(void* self, int64_t param1, int param2, void* param3);
void q_dtls_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_dtls_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_dtls_tr(const char* s);
bool q_dtls_set_peer(void* self, void* address, unsigned short port);
bool q_dtls_set_peer_verification_name(void* self, const char* name);
QHostAddress* q_dtls_peer_address(void* self);
unsigned short q_dtls_peer_port(void* self);
const char* q_dtls_peer_verification_name(void* self);
int64_t q_dtls_ssl_mode(void* self);
void q_dtls_set_mtu_hint(void* self, unsigned short mtuHint);
unsigned short q_dtls_mtu_hint(void* self);
bool q_dtls_set_cookie_generator_parameters(void* self, void* params);
QDtlsClientVerifier__GeneratorParameters* q_dtls_cookie_generator_parameters(void* self);
bool q_dtls_set_dtls_configuration(void* self, void* configuration);
QSslConfiguration* q_dtls_dtls_configuration(void* self);
int64_t q_dtls_handshake_state(void* self);
bool q_dtls_do_handshake(void* self, void* socket);
bool q_dtls_handle_timeout(void* self, void* socket);
bool q_dtls_resume_handshake(void* self, void* socket);
bool q_dtls_abort_handshake(void* self, void* socket);
bool q_dtls_shutdown(void* self, void* socket);
bool q_dtls_is_connection_encrypted(void* self);
QSslCipher* q_dtls_session_cipher(void* self);
int64_t q_dtls_session_protocol(void* self);
long long q_dtls_write_datagram_encrypted(void* self, void* socket, const char* dgram);
char* q_dtls_decrypt_datagram(void* self, void* socket, const char* dgram);
int64_t q_dtls_dtls_error(void* self);
const char* q_dtls_dtls_error_string(void* self);
libqt_list /* of QSslError* */ q_dtls_peer_verification_errors(void* self);
void q_dtls_ignore_verification_errors(void* self, void* errorsToIgnore[]);
void q_dtls_psk_required(void* self, void* authenticator);
void q_dtls_on_psk_required(void* self, void (*slot)(void*, void*));
void q_dtls_handshake_timeout(void* self);
void q_dtls_on_handshake_timeout(void* self, void (*slot)(void*));
const char* q_dtls_tr2(const char* s, const char* c);
const char* q_dtls_tr3(const char* s, const char* c, int n);
bool q_dtls_set_peer3(void* self, void* address, unsigned short port, const char* verificationName);
bool q_dtls_do_handshake2(void* self, void* socket, const char* dgram);
const char* q_dtls_object_name(void* self);
void q_dtls_set_object_name(void* self, const char* name);
bool q_dtls_is_widget_type(void* self);
bool q_dtls_is_window_type(void* self);
bool q_dtls_is_quick_item_type(void* self);
bool q_dtls_signals_blocked(void* self);
bool q_dtls_block_signals(void* self, bool b);
QThread* q_dtls_thread(void* self);
void q_dtls_move_to_thread(void* self, void* thread);
int32_t q_dtls_start_timer(void* self, int interval);
void q_dtls_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_dtls_children(void* self);
void q_dtls_set_parent(void* self, void* parent);
void q_dtls_install_event_filter(void* self, void* filterObj);
void q_dtls_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_dtls_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_dtls_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_dtls_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_dtls_disconnect_with_q_meta_object_connection(void* param1);
void q_dtls_dump_object_tree(void* self);
void q_dtls_dump_object_info(void* self);
bool q_dtls_set_property(void* self, const char* name, void* value);
QVariant* q_dtls_property(void* self, const char* name);
const char** q_dtls_dynamic_property_names(void* self);
QBindingStorage* q_dtls_binding_storage(void* self);
QBindingStorage* q_dtls_binding_storage2(void* self);
void q_dtls_destroyed(void* self);
void q_dtls_on_destroyed(void* self, void (*slot)(void*));
QObject* q_dtls_parent(void* self);
bool q_dtls_inherits(void* self, const char* classname);
void q_dtls_delete_later(void* self);
int32_t q_dtls_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_dtls_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_dtls_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_dtls_destroyed1(void* self, void* param1);
void q_dtls_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_dtls_event(void* self, void* event);
bool q_dtls_qbase_event(void* self, void* event);
void q_dtls_on_event(void* self, bool (*slot)(void*, void*));
bool q_dtls_event_filter(void* self, void* watched, void* event);
bool q_dtls_qbase_event_filter(void* self, void* watched, void* event);
void q_dtls_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_dtls_timer_event(void* self, void* event);
void q_dtls_qbase_timer_event(void* self, void* event);
void q_dtls_on_timer_event(void* self, void (*slot)(void*, void*));
void q_dtls_child_event(void* self, void* event);
void q_dtls_qbase_child_event(void* self, void* event);
void q_dtls_on_child_event(void* self, void (*slot)(void*, void*));
void q_dtls_custom_event(void* self, void* event);
void q_dtls_qbase_custom_event(void* self, void* event);
void q_dtls_on_custom_event(void* self, void (*slot)(void*, void*));
void q_dtls_connect_notify(void* self, void* signal);
void q_dtls_qbase_connect_notify(void* self, void* signal);
void q_dtls_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_dtls_disconnect_notify(void* self, void* signal);
void q_dtls_qbase_disconnect_notify(void* self, void* signal);
void q_dtls_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_dtls_sender(void* self);
QObject* q_dtls_qbase_sender(void* self);
void q_dtls_on_sender(void* self, QObject* (*slot)());
int32_t q_dtls_sender_signal_index(void* self);
int32_t q_dtls_qbase_sender_signal_index(void* self);
void q_dtls_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_dtls_receivers(void* self, const char* signal);
int32_t q_dtls_qbase_receivers(void* self, const char* signal);
void q_dtls_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_dtls_is_signal_connected(void* self, void* signal);
bool q_dtls_qbase_is_signal_connected(void* self, void* signal);
void q_dtls_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_dtls_delete(void* self);

QDtlsClientVerifier__GeneratorParameters* q_dtlsclientverifier__generatorparameters_new();
QDtlsClientVerifier__GeneratorParameters* q_dtlsclientverifier__generatorparameters_new2(int64_t a, const char* s);
QDtlsClientVerifier__GeneratorParameters* q_dtlsclientverifier__generatorparameters_new3(void* param1);
void q_dtlsclientverifier__generatorparameters_operator_assign(void* self, void* param1);
void q_dtlsclientverifier__generatorparameters_delete(void* self);

/// https://doc.qt.io/qt-6/qdtls.html#types

typedef enum {
    QDTLSERROR_NOERROR = 0,
    QDTLSERROR_INVALIDINPUTPARAMETERS = 1,
    QDTLSERROR_INVALIDOPERATION = 2,
    QDTLSERROR_UNDERLYINGSOCKETERROR = 3,
    QDTLSERROR_REMOTECLOSEDCONNECTIONERROR = 4,
    QDTLSERROR_PEERVERIFICATIONERROR = 5,
    QDTLSERROR_TLSINITIALIZATIONERROR = 6,
    QDTLSERROR_TLSFATALERROR = 7,
    QDTLSERROR_TLSNONFATALERROR = 8
} QDtlsError__;

typedef enum {
    QDTLS_HANDSHAKESTATE_HANDSHAKENOTSTARTED = 0,
    QDTLS_HANDSHAKESTATE_HANDSHAKEINPROGRESS = 1,
    QDTLS_HANDSHAKESTATE_PEERVERIFICATIONFAILED = 2,
    QDTLS_HANDSHAKESTATE_HANDSHAKECOMPLETE = 3
} QDtls__HandshakeState;

#endif
