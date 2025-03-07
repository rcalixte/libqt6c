#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLSOCKET_H
#define SRC_NETWORKQT6C_LIBQSSLSOCKET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractsocket.h"
#include "../libqanystringview.h"
#include "libqauthenticator.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "libqhostaddress.h"
#include "../libqiodevice.h"
#include "../libqiodevicebase.h"
#include "../libqmetaobject.h"
#include "libqnetworkproxy.h"
#include "../libqobject.h"
#include "libqocspresponse.h"
#include "libqsslcertificate.h"
#include "libqsslcipher.h"
#include "libqsslconfiguration.h"
#include "libqsslerror.h"
#include "libqsslkey.h"
#include "libqsslpresharedkeyauthenticator.h"
#include <string.h>
#include "libqtcpsocket.h"
#include "../libqthread.h"
#include "../libqvariant.h"

QSslSocket* q_sslsocket_new();
QSslSocket* q_sslsocket_new2(void* parent);
QMetaObject* q_sslsocket_meta_object(void* self);
void* q_sslsocket_metacast(void* self, const char* param1);
int32_t q_sslsocket_metacall(void* self, int64_t param1, int param2, void* param3);
void q_sslsocket_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_sslsocket_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_sslsocket_tr(const char* s);
void q_sslsocket_resume(void* self);
void q_sslsocket_on_resume(void* self, void (*slot)());
void q_sslsocket_qbase_resume(void* self);
void q_sslsocket_connect_to_host_encrypted(void* self, const char* hostName, unsigned short port);
void q_sslsocket_connect_to_host_encrypted2(void* self, const char* hostName, unsigned short port, const char* sslPeerName);
bool q_sslsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode);
void q_sslsocket_on_set_socket_descriptor(void* self, bool (*slot)(void*, intptr_t, int64_t, int64_t));
bool q_sslsocket_qbase_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode);
void q_sslsocket_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t openMode, int64_t protocol);
void q_sslsocket_on_connect_to_host(void* self, void (*slot)(void*, const char*, unsigned short, int64_t, int64_t));
void q_sslsocket_qbase_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t openMode, int64_t protocol);
void q_sslsocket_disconnect_from_host(void* self);
void q_sslsocket_on_disconnect_from_host(void* self, void (*slot)());
void q_sslsocket_qbase_disconnect_from_host(void* self);
void q_sslsocket_set_socket_option(void* self, int64_t option, void* value);
void q_sslsocket_on_set_socket_option(void* self, void (*slot)(void*, int64_t, void*));
void q_sslsocket_qbase_set_socket_option(void* self, int64_t option, void* value);
QVariant* q_sslsocket_socket_option(void* self, int64_t option);
void q_sslsocket_on_socket_option(void* self, QVariant* (*slot)(void*, int64_t));
QVariant* q_sslsocket_qbase_socket_option(void* self, int64_t option);
int64_t q_sslsocket_mode(void* self);
bool q_sslsocket_is_encrypted(void* self);
int64_t q_sslsocket_protocol(void* self);
void q_sslsocket_set_protocol(void* self, int64_t protocol);
int64_t q_sslsocket_peer_verify_mode(void* self);
void q_sslsocket_set_peer_verify_mode(void* self, int64_t mode);
int32_t q_sslsocket_peer_verify_depth(void* self);
void q_sslsocket_set_peer_verify_depth(void* self, int depth);
const char* q_sslsocket_peer_verify_name(void* self);
void q_sslsocket_set_peer_verify_name(void* self, const char* hostName);
long long q_sslsocket_bytes_available(void* self);
void q_sslsocket_on_bytes_available(void* self, long long (*slot)());
long long q_sslsocket_qbase_bytes_available(void* self);
long long q_sslsocket_bytes_to_write(void* self);
void q_sslsocket_on_bytes_to_write(void* self, long long (*slot)());
long long q_sslsocket_qbase_bytes_to_write(void* self);
bool q_sslsocket_can_read_line(void* self);
void q_sslsocket_on_can_read_line(void* self, bool (*slot)());
bool q_sslsocket_qbase_can_read_line(void* self);
void q_sslsocket_close(void* self);
void q_sslsocket_on_close(void* self, void (*slot)());
void q_sslsocket_qbase_close(void* self);
bool q_sslsocket_at_end(void* self);
void q_sslsocket_on_at_end(void* self, bool (*slot)());
bool q_sslsocket_qbase_at_end(void* self);
void q_sslsocket_set_read_buffer_size(void* self, long long size);
void q_sslsocket_on_set_read_buffer_size(void* self, void (*slot)(void*, long long));
void q_sslsocket_qbase_set_read_buffer_size(void* self, long long size);
long long q_sslsocket_encrypted_bytes_available(void* self);
long long q_sslsocket_encrypted_bytes_to_write(void* self);
QSslConfiguration* q_sslsocket_ssl_configuration(void* self);
void q_sslsocket_set_ssl_configuration(void* self, void* config);
void q_sslsocket_set_local_certificate_chain(void* self, void* localChain[]);
libqt_list /* of QSslCertificate* */ q_sslsocket_local_certificate_chain(void* self);
void q_sslsocket_set_local_certificate(void* self, void* certificate);
void q_sslsocket_set_local_certificate_with_file_name(void* self, const char* fileName);
QSslCertificate* q_sslsocket_local_certificate(void* self);
QSslCertificate* q_sslsocket_peer_certificate(void* self);
libqt_list /* of QSslCertificate* */ q_sslsocket_peer_certificate_chain(void* self);
QSslCipher* q_sslsocket_session_cipher(void* self);
int64_t q_sslsocket_session_protocol(void* self);
libqt_list /* of QOcspResponse* */ q_sslsocket_ocsp_responses(void* self);
void q_sslsocket_set_private_key(void* self, void* key);
void q_sslsocket_set_private_key_with_file_name(void* self, const char* fileName);
QSslKey* q_sslsocket_private_key(void* self);
bool q_sslsocket_wait_for_connected(void* self, int msecs);
void q_sslsocket_on_wait_for_connected(void* self, bool (*slot)(void*, int));
bool q_sslsocket_qbase_wait_for_connected(void* self, int msecs);
bool q_sslsocket_wait_for_encrypted(void* self);
bool q_sslsocket_wait_for_ready_read(void* self, int msecs);
void q_sslsocket_on_wait_for_ready_read(void* self, bool (*slot)(void*, int));
bool q_sslsocket_qbase_wait_for_ready_read(void* self, int msecs);
bool q_sslsocket_wait_for_bytes_written(void* self, int msecs);
void q_sslsocket_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int));
bool q_sslsocket_qbase_wait_for_bytes_written(void* self, int msecs);
bool q_sslsocket_wait_for_disconnected(void* self, int msecs);
void q_sslsocket_on_wait_for_disconnected(void* self, bool (*slot)(void*, int));
bool q_sslsocket_qbase_wait_for_disconnected(void* self, int msecs);
libqt_list /* of QSslError* */ q_sslsocket_ssl_handshake_errors(void* self);
bool q_sslsocket_supports_ssl();
int64_t q_sslsocket_ssl_library_version_number();
const char* q_sslsocket_ssl_library_version_string();
int64_t q_sslsocket_ssl_library_build_version_number();
const char* q_sslsocket_ssl_library_build_version_string();
const char** q_sslsocket_available_backends();
const char* q_sslsocket_active_backend();
bool q_sslsocket_set_active_backend(const char* backendName);
libqt_list /* of int64_t */ q_sslsocket_supported_protocols();
bool q_sslsocket_is_protocol_supported(int64_t protocol);
libqt_list /* of int64_t */ q_sslsocket_implemented_classes();
bool q_sslsocket_is_class_implemented(int64_t cl);
libqt_list /* of int64_t */ q_sslsocket_supported_features();
bool q_sslsocket_is_feature_supported(int64_t feat);
void q_sslsocket_ignore_ssl_errors(void* self, void* errors[]);
void q_sslsocket_continue_interrupted_handshake(void* self);
void q_sslsocket_start_client_encryption(void* self);
void q_sslsocket_start_server_encryption(void* self);
void q_sslsocket_ignore_ssl_errors2(void* self);
void q_sslsocket_encrypted(void* self);
void q_sslsocket_on_encrypted(void* self, void (*slot)(void*));
void q_sslsocket_peer_verify_error(void* self, void* errorVal);
void q_sslsocket_on_peer_verify_error(void* self, void (*slot)(void*, void*));
void q_sslsocket_ssl_errors(void* self, void* errors[]);
void q_sslsocket_on_ssl_errors(void* self, void (*slot)(void*, void*));
void q_sslsocket_mode_changed(void* self, int64_t newMode);
void q_sslsocket_on_mode_changed(void* self, void (*slot)(void*, int64_t));
void q_sslsocket_encrypted_bytes_written(void* self, long long totalBytes);
void q_sslsocket_on_encrypted_bytes_written(void* self, void (*slot)(void*, long long));
void q_sslsocket_pre_shared_key_authentication_required(void* self, void* authenticator);
void q_sslsocket_on_pre_shared_key_authentication_required(void* self, void (*slot)(void*, void*));
void q_sslsocket_new_session_ticket_received(void* self);
void q_sslsocket_on_new_session_ticket_received(void* self, void (*slot)(void*));
void q_sslsocket_alert_sent(void* self, int64_t level, int64_t typeVal, const char* description);
void q_sslsocket_on_alert_sent(void* self, void (*slot)(void*, int64_t, int64_t, const char*));
void q_sslsocket_alert_received(void* self, int64_t level, int64_t typeVal, const char* description);
void q_sslsocket_on_alert_received(void* self, void (*slot)(void*, int64_t, int64_t, const char*));
void q_sslsocket_handshake_interrupted_on_error(void* self, void* errorVal);
void q_sslsocket_on_handshake_interrupted_on_error(void* self, void (*slot)(void*, void*));
long long q_sslsocket_read_data(void* self, char* data, long long maxlen);
void q_sslsocket_on_read_data(void* self, long long (*slot)(void*, char*, long long));
long long q_sslsocket_qbase_read_data(void* self, char* data, long long maxlen);
long long q_sslsocket_skip_data(void* self, long long maxSize);
void q_sslsocket_on_skip_data(void* self, long long (*slot)(void*, long long));
long long q_sslsocket_qbase_skip_data(void* self, long long maxSize);
long long q_sslsocket_write_data(void* self, const char* data, long long lenVal);
void q_sslsocket_on_write_data(void* self, long long (*slot)(void*, const char*, long long));
long long q_sslsocket_qbase_write_data(void* self, const char* data, long long lenVal);
const char* q_sslsocket_tr2(const char* s, const char* c);
const char* q_sslsocket_tr3(const char* s, const char* c, int n);
void q_sslsocket_connect_to_host_encrypted3(void* self, const char* hostName, unsigned short port, int64_t mode);
void q_sslsocket_connect_to_host_encrypted4(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol);
void q_sslsocket_connect_to_host_encrypted42(void* self, const char* hostName, unsigned short port, const char* sslPeerName, int64_t mode);
void q_sslsocket_connect_to_host_encrypted5(void* self, const char* hostName, unsigned short port, const char* sslPeerName, int64_t mode, int64_t protocol);
void q_sslsocket_set_local_certificate2(void* self, const char* fileName, int64_t format);
void q_sslsocket_set_private_key2(void* self, const char* fileName, int64_t algorithm);
void q_sslsocket_set_private_key3(void* self, const char* fileName, int64_t algorithm, int64_t format);
void q_sslsocket_set_private_key4(void* self, const char* fileName, int64_t algorithm, int64_t format, const char* passPhrase);
bool q_sslsocket_wait_for_encrypted1(void* self, int msecs);
libqt_list /* of int64_t */ q_sslsocket_supported_protocols1(const char* backendName);
bool q_sslsocket_is_protocol_supported2(int64_t protocol, const char* backendName);
libqt_list /* of int64_t */ q_sslsocket_implemented_classes1(const char* backendName);
bool q_sslsocket_is_class_implemented2(int64_t cl, const char* backendName);
libqt_list /* of int64_t */ q_sslsocket_supported_features1(const char* backendName);
bool q_sslsocket_is_feature_supported2(int64_t feat, const char* backendName);
bool q_sslsocket_bind2(void* self, int64_t addr, unsigned short port);
bool q_sslsocket_bind3(void* self, int64_t addr, unsigned short port, int64_t mode);
int64_t q_sslsocket_pause_mode(void* self);
void q_sslsocket_set_pause_mode(void* self, int64_t pauseMode);
void q_sslsocket_connect_to_host2(void* self, void* address, unsigned short port);
bool q_sslsocket_is_valid(void* self);
unsigned short q_sslsocket_local_port(void* self);
QHostAddress* q_sslsocket_local_address(void* self);
unsigned short q_sslsocket_peer_port(void* self);
QHostAddress* q_sslsocket_peer_address(void* self);
const char* q_sslsocket_peer_name(void* self);
long long q_sslsocket_read_buffer_size(void* self);
void q_sslsocket_abort(void* self);
int64_t q_sslsocket_socket_type(void* self);
int64_t q_sslsocket_state(void* self);
int64_t q_sslsocket_error(void* self);
bool q_sslsocket_flush(void* self);
void q_sslsocket_set_proxy(void* self, void* networkProxy);
QNetworkProxy* q_sslsocket_proxy(void* self);
const char* q_sslsocket_protocol_tag(void* self);
void q_sslsocket_set_protocol_tag(void* self, const char* tag);
void q_sslsocket_host_found(void* self);
void q_sslsocket_on_host_found(void* self, void (*slot)(void*));
void q_sslsocket_connected(void* self);
void q_sslsocket_on_connected(void* self, void (*slot)(void*));
void q_sslsocket_disconnected(void* self);
void q_sslsocket_on_disconnected(void* self, void (*slot)(void*));
void q_sslsocket_state_changed(void* self, int64_t param1);
void q_sslsocket_on_state_changed(void* self, void (*slot)(void*, int64_t));
void q_sslsocket_error_occurred(void* self, int64_t param1);
void q_sslsocket_on_error_occurred(void* self, void (*slot)(void*, int64_t));
void q_sslsocket_proxy_authentication_required(void* self, void* proxy, void* authenticator);
void q_sslsocket_on_proxy_authentication_required(void* self, void (*slot)(void*, void*, void*));
bool q_sslsocket_bind1(void* self, unsigned short port);
bool q_sslsocket_bind22(void* self, unsigned short port, int64_t mode);
void q_sslsocket_connect_to_host3(void* self, void* address, unsigned short port, int64_t mode);
int64_t q_sslsocket_open_mode(void* self);
void q_sslsocket_set_text_mode_enabled(void* self, bool enabled);
bool q_sslsocket_is_text_mode_enabled(void* self);
bool q_sslsocket_is_open(void* self);
bool q_sslsocket_is_readable(void* self);
bool q_sslsocket_is_writable(void* self);
int32_t q_sslsocket_read_channel_count(void* self);
int32_t q_sslsocket_write_channel_count(void* self);
int32_t q_sslsocket_current_read_channel(void* self);
void q_sslsocket_set_current_read_channel(void* self, int channel);
int32_t q_sslsocket_current_write_channel(void* self);
void q_sslsocket_set_current_write_channel(void* self, int channel);
long long q_sslsocket_read(void* self, char* data, long long maxlen);
char* q_sslsocket_read_with_maxlen(void* self, long long maxlen);
char* q_sslsocket_read_all(void* self);
long long q_sslsocket_read_line(void* self, char* data, long long maxlen);
char* q_sslsocket_read_line2(void* self);
void q_sslsocket_start_transaction(void* self);
void q_sslsocket_commit_transaction(void* self);
void q_sslsocket_rollback_transaction(void* self);
bool q_sslsocket_is_transaction_started(void* self);
long long q_sslsocket_write(void* self, const char* data, long long lenVal);
long long q_sslsocket_write_with_data(void* self, const char* data);
long long q_sslsocket_write2(void* self, const char* data);
long long q_sslsocket_peek(void* self, char* data, long long maxlen);
char* q_sslsocket_peek_with_maxlen(void* self, long long maxlen);
long long q_sslsocket_skip(void* self, long long maxSize);
void q_sslsocket_unget_char(void* self, char c);
bool q_sslsocket_put_char(void* self, char c);
bool q_sslsocket_get_char(void* self, char* c);
const char* q_sslsocket_error_string(void* self);
void q_sslsocket_ready_read(void* self);
void q_sslsocket_on_ready_read(void* self, void (*slot)(void*));
void q_sslsocket_channel_ready_read(void* self, int channel);
void q_sslsocket_on_channel_ready_read(void* self, void (*slot)(void*, int));
void q_sslsocket_bytes_written(void* self, long long bytes);
void q_sslsocket_on_bytes_written(void* self, void (*slot)(void*, long long));
void q_sslsocket_channel_bytes_written(void* self, int channel, long long bytes);
void q_sslsocket_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));
void q_sslsocket_about_to_close(void* self);
void q_sslsocket_on_about_to_close(void* self, void (*slot)(void*));
void q_sslsocket_read_channel_finished(void* self);
void q_sslsocket_on_read_channel_finished(void* self, void (*slot)(void*));
char* q_sslsocket_read_line1(void* self, long long maxlen);
const char* q_sslsocket_object_name(void* self);
void q_sslsocket_set_object_name(void* self, const char* name);
bool q_sslsocket_is_widget_type(void* self);
bool q_sslsocket_is_window_type(void* self);
bool q_sslsocket_is_quick_item_type(void* self);
bool q_sslsocket_signals_blocked(void* self);
bool q_sslsocket_block_signals(void* self, bool b);
QThread* q_sslsocket_thread(void* self);
void q_sslsocket_move_to_thread(void* self, void* thread);
int32_t q_sslsocket_start_timer(void* self, int interval);
void q_sslsocket_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_sslsocket_children(void* self);
void q_sslsocket_set_parent(void* self, void* parent);
void q_sslsocket_install_event_filter(void* self, void* filterObj);
void q_sslsocket_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_sslsocket_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_sslsocket_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_sslsocket_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_sslsocket_disconnect_with_q_meta_object_connection(void* param1);
void q_sslsocket_dump_object_tree(void* self);
void q_sslsocket_dump_object_info(void* self);
bool q_sslsocket_set_property(void* self, const char* name, void* value);
QVariant* q_sslsocket_property(void* self, const char* name);
const char** q_sslsocket_dynamic_property_names(void* self);
QBindingStorage* q_sslsocket_binding_storage(void* self);
QBindingStorage* q_sslsocket_binding_storage2(void* self);
void q_sslsocket_destroyed(void* self);
void q_sslsocket_on_destroyed(void* self, void (*slot)(void*));
QObject* q_sslsocket_parent(void* self);
bool q_sslsocket_inherits(void* self, const char* classname);
void q_sslsocket_delete_later(void* self);
int32_t q_sslsocket_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_sslsocket_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_sslsocket_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_sslsocket_destroyed1(void* self, void* param1);
void q_sslsocket_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_sslsocket_bind(void* self, void* address, unsigned short port, int64_t mode);
bool q_sslsocket_qbase_bind(void* self, void* address, unsigned short port, int64_t mode);
void q_sslsocket_on_bind(void* self, bool (*slot)(void*, void*, unsigned short, int64_t));
intptr_t q_sslsocket_socket_descriptor(void* self);
intptr_t q_sslsocket_qbase_socket_descriptor(void* self);
void q_sslsocket_on_socket_descriptor(void* self, intptr_t (*slot)());
bool q_sslsocket_is_sequential(void* self);
bool q_sslsocket_qbase_is_sequential(void* self);
void q_sslsocket_on_is_sequential(void* self, bool (*slot)());
long long q_sslsocket_read_line_data(void* self, char* data, long long maxlen);
long long q_sslsocket_qbase_read_line_data(void* self, char* data, long long maxlen);
void q_sslsocket_on_read_line_data(void* self, long long (*slot)(void*, char*, long long));
bool q_sslsocket_open(void* self, int64_t mode);
bool q_sslsocket_qbase_open(void* self, int64_t mode);
void q_sslsocket_on_open(void* self, bool (*slot)(void*, int64_t));
long long q_sslsocket_pos(void* self);
long long q_sslsocket_qbase_pos(void* self);
void q_sslsocket_on_pos(void* self, long long (*slot)());
long long q_sslsocket_size(void* self);
long long q_sslsocket_qbase_size(void* self);
void q_sslsocket_on_size(void* self, long long (*slot)());
bool q_sslsocket_seek(void* self, long long pos);
bool q_sslsocket_qbase_seek(void* self, long long pos);
void q_sslsocket_on_seek(void* self, bool (*slot)(void*, long long));
bool q_sslsocket_reset(void* self);
bool q_sslsocket_qbase_reset(void* self);
void q_sslsocket_on_reset(void* self, bool (*slot)());
bool q_sslsocket_event(void* self, void* event);
bool q_sslsocket_qbase_event(void* self, void* event);
void q_sslsocket_on_event(void* self, bool (*slot)(void*, void*));
bool q_sslsocket_event_filter(void* self, void* watched, void* event);
bool q_sslsocket_qbase_event_filter(void* self, void* watched, void* event);
void q_sslsocket_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_sslsocket_timer_event(void* self, void* event);
void q_sslsocket_qbase_timer_event(void* self, void* event);
void q_sslsocket_on_timer_event(void* self, void (*slot)(void*, void*));
void q_sslsocket_child_event(void* self, void* event);
void q_sslsocket_qbase_child_event(void* self, void* event);
void q_sslsocket_on_child_event(void* self, void (*slot)(void*, void*));
void q_sslsocket_custom_event(void* self, void* event);
void q_sslsocket_qbase_custom_event(void* self, void* event);
void q_sslsocket_on_custom_event(void* self, void (*slot)(void*, void*));
void q_sslsocket_connect_notify(void* self, void* signal);
void q_sslsocket_qbase_connect_notify(void* self, void* signal);
void q_sslsocket_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_sslsocket_disconnect_notify(void* self, void* signal);
void q_sslsocket_qbase_disconnect_notify(void* self, void* signal);
void q_sslsocket_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_sslsocket_set_socket_state(void* self, int64_t state);
void q_sslsocket_qbase_set_socket_state(void* self, int64_t state);
void q_sslsocket_on_set_socket_state(void* self, void (*slot)(void*, int64_t));
void q_sslsocket_set_socket_error(void* self, int64_t socketError);
void q_sslsocket_qbase_set_socket_error(void* self, int64_t socketError);
void q_sslsocket_on_set_socket_error(void* self, void (*slot)(void*, int64_t));
void q_sslsocket_set_local_port(void* self, unsigned short port);
void q_sslsocket_qbase_set_local_port(void* self, unsigned short port);
void q_sslsocket_on_set_local_port(void* self, void (*slot)(void*, unsigned short));
void q_sslsocket_set_local_address(void* self, void* address);
void q_sslsocket_qbase_set_local_address(void* self, void* address);
void q_sslsocket_on_set_local_address(void* self, void (*slot)(void*, void*));
void q_sslsocket_set_peer_port(void* self, unsigned short port);
void q_sslsocket_qbase_set_peer_port(void* self, unsigned short port);
void q_sslsocket_on_set_peer_port(void* self, void (*slot)(void*, unsigned short));
void q_sslsocket_set_peer_address(void* self, void* address);
void q_sslsocket_qbase_set_peer_address(void* self, void* address);
void q_sslsocket_on_set_peer_address(void* self, void (*slot)(void*, void*));
void q_sslsocket_set_peer_name(void* self, const char* name);
void q_sslsocket_qbase_set_peer_name(void* self, const char* name);
void q_sslsocket_on_set_peer_name(void* self, void (*slot)(void*, const char*));
void q_sslsocket_set_open_mode(void* self, int64_t openMode);
void q_sslsocket_qbase_set_open_mode(void* self, int64_t openMode);
void q_sslsocket_on_set_open_mode(void* self, void (*slot)(void*, int64_t));
void q_sslsocket_set_error_string(void* self, const char* errorString);
void q_sslsocket_qbase_set_error_string(void* self, const char* errorString);
void q_sslsocket_on_set_error_string(void* self, void (*slot)(void*, const char*));
QObject* q_sslsocket_sender(void* self);
QObject* q_sslsocket_qbase_sender(void* self);
void q_sslsocket_on_sender(void* self, QObject* (*slot)());
int32_t q_sslsocket_sender_signal_index(void* self);
int32_t q_sslsocket_qbase_sender_signal_index(void* self);
void q_sslsocket_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_sslsocket_receivers(void* self, const char* signal);
int32_t q_sslsocket_qbase_receivers(void* self, const char* signal);
void q_sslsocket_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_sslsocket_is_signal_connected(void* self, void* signal);
bool q_sslsocket_qbase_is_signal_connected(void* self, void* signal);
void q_sslsocket_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_sslsocket_delete(void* self);

/// https://doc.qt.io/qt-6/qsslsocket.html#types

typedef enum {
    QSSLSOCKET_SSLMODE_UNENCRYPTEDMODE = 0,
    QSSLSOCKET_SSLMODE_SSLCLIENTMODE = 1,
    QSSLSOCKET_SSLMODE_SSLSERVERMODE = 2
} QSslSocket__SslMode;

typedef enum {
    QSSLSOCKET_PEERVERIFYMODE_VERIFYNONE = 0,
    QSSLSOCKET_PEERVERIFYMODE_QUERYPEER = 1,
    QSSLSOCKET_PEERVERIFYMODE_VERIFYPEER = 2,
    QSSLSOCKET_PEERVERIFYMODE_AUTOVERIFYPEER = 3
} QSslSocket__PeerVerifyMode;

#endif
