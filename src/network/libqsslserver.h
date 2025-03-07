#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLSERVER_H
#define SRC_NETWORKQT6C_LIBQSSLSERVER_H

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
#include "libqnetworkproxy.h"
#include "../libqobject.h"
#include "libqsslconfiguration.h"
#include "libqsslerror.h"
#include "libqsslpresharedkeyauthenticator.h"
#include "libqsslsocket.h"
#include <string.h>
#include "libqtcpserver.h"
#include "libqtcpsocket.h"
#include "../libqthread.h"
#include "../libqvariant.h"

QSslServer* q_sslserver_new();
QSslServer* q_sslserver_new2(void* parent);
QMetaObject* q_sslserver_meta_object(void* self);
void* q_sslserver_metacast(void* self, const char* param1);
int32_t q_sslserver_metacall(void* self, int64_t param1, int param2, void* param3);
void q_sslserver_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_sslserver_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_sslserver_tr(const char* s);
void q_sslserver_set_ssl_configuration(void* self, void* sslConfiguration);
QSslConfiguration* q_sslserver_ssl_configuration(void* self);
void q_sslserver_set_handshake_timeout(void* self, int timeout);
int32_t q_sslserver_handshake_timeout(void* self);
void q_sslserver_ssl_errors(void* self, void* socket, void* errors[]);
void q_sslserver_on_ssl_errors(void* self, void (*slot)(void*, void*, void*));
void q_sslserver_peer_verify_error(void* self, void* socket, void* errorVal);
void q_sslserver_on_peer_verify_error(void* self, void (*slot)(void*, void*, void*));
void q_sslserver_error_occurred(void* self, void* socket, int64_t errorVal);
void q_sslserver_on_error_occurred(void* self, void (*slot)(void*, void*, int64_t));
void q_sslserver_pre_shared_key_authentication_required(void* self, void* socket, void* authenticator);
void q_sslserver_on_pre_shared_key_authentication_required(void* self, void (*slot)(void*, void*, void*));
void q_sslserver_alert_sent(void* self, void* socket, int64_t level, int64_t typeVal, const char* description);
void q_sslserver_on_alert_sent(void* self, void (*slot)(void*, void*, int64_t, int64_t, const char*));
void q_sslserver_alert_received(void* self, void* socket, int64_t level, int64_t typeVal, const char* description);
void q_sslserver_on_alert_received(void* self, void (*slot)(void*, void*, int64_t, int64_t, const char*));
void q_sslserver_handshake_interrupted_on_error(void* self, void* socket, void* errorVal);
void q_sslserver_on_handshake_interrupted_on_error(void* self, void (*slot)(void*, void*, void*));
void q_sslserver_started_encryption_handshake(void* self, void* socket);
void q_sslserver_on_started_encryption_handshake(void* self, void (*slot)(void*, void*));
void q_sslserver_incoming_connection(void* self, intptr_t socket);
void q_sslserver_on_incoming_connection(void* self, void (*slot)(void*, intptr_t));
void q_sslserver_qbase_incoming_connection(void* self, intptr_t socket);
const char* q_sslserver_tr2(const char* s, const char* c);
const char* q_sslserver_tr3(const char* s, const char* c, int n);
bool q_sslserver_listen(void* self);
void q_sslserver_close(void* self);
bool q_sslserver_is_listening(void* self);
void q_sslserver_set_max_pending_connections(void* self, int numConnections);
int32_t q_sslserver_max_pending_connections(void* self);
void q_sslserver_set_listen_backlog_size(void* self, int size);
int32_t q_sslserver_listen_backlog_size(void* self);
unsigned short q_sslserver_server_port(void* self);
QHostAddress* q_sslserver_server_address(void* self);
intptr_t q_sslserver_socket_descriptor(void* self);
bool q_sslserver_set_socket_descriptor(void* self, intptr_t socketDescriptor);
bool q_sslserver_wait_for_new_connection(void* self);
int64_t q_sslserver_server_error(void* self);
const char* q_sslserver_error_string(void* self);
void q_sslserver_pause_accepting(void* self);
void q_sslserver_resume_accepting(void* self);
void q_sslserver_set_proxy(void* self, void* networkProxy);
QNetworkProxy* q_sslserver_proxy(void* self);
void q_sslserver_new_connection(void* self);
void q_sslserver_on_new_connection(void* self, void (*slot)(void*));
void q_sslserver_accept_error(void* self, int64_t socketError);
void q_sslserver_on_accept_error(void* self, void (*slot)(void*, int64_t));
bool q_sslserver_listen1(void* self, void* address);
bool q_sslserver_listen2(void* self, void* address, unsigned short port);
bool q_sslserver_wait_for_new_connection1(void* self, int msec);
bool q_sslserver_wait_for_new_connection2(void* self, int msec, bool* timedOut);
const char* q_sslserver_object_name(void* self);
void q_sslserver_set_object_name(void* self, const char* name);
bool q_sslserver_is_widget_type(void* self);
bool q_sslserver_is_window_type(void* self);
bool q_sslserver_is_quick_item_type(void* self);
bool q_sslserver_signals_blocked(void* self);
bool q_sslserver_block_signals(void* self, bool b);
QThread* q_sslserver_thread(void* self);
void q_sslserver_move_to_thread(void* self, void* thread);
int32_t q_sslserver_start_timer(void* self, int interval);
void q_sslserver_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_sslserver_children(void* self);
void q_sslserver_set_parent(void* self, void* parent);
void q_sslserver_install_event_filter(void* self, void* filterObj);
void q_sslserver_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_sslserver_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_sslserver_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_sslserver_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_sslserver_disconnect_with_q_meta_object_connection(void* param1);
void q_sslserver_dump_object_tree(void* self);
void q_sslserver_dump_object_info(void* self);
bool q_sslserver_set_property(void* self, const char* name, void* value);
QVariant* q_sslserver_property(void* self, const char* name);
const char** q_sslserver_dynamic_property_names(void* self);
QBindingStorage* q_sslserver_binding_storage(void* self);
QBindingStorage* q_sslserver_binding_storage2(void* self);
void q_sslserver_destroyed(void* self);
void q_sslserver_on_destroyed(void* self, void (*slot)(void*));
QObject* q_sslserver_parent(void* self);
bool q_sslserver_inherits(void* self, const char* classname);
void q_sslserver_delete_later(void* self);
int32_t q_sslserver_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_sslserver_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_sslserver_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_sslserver_destroyed1(void* self, void* param1);
void q_sslserver_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_sslserver_has_pending_connections(void* self);
bool q_sslserver_qbase_has_pending_connections(void* self);
void q_sslserver_on_has_pending_connections(void* self, bool (*slot)());
QTcpSocket* q_sslserver_next_pending_connection(void* self);
QTcpSocket* q_sslserver_qbase_next_pending_connection(void* self);
void q_sslserver_on_next_pending_connection(void* self, QTcpSocket* (*slot)());
bool q_sslserver_event(void* self, void* event);
bool q_sslserver_qbase_event(void* self, void* event);
void q_sslserver_on_event(void* self, bool (*slot)(void*, void*));
bool q_sslserver_event_filter(void* self, void* watched, void* event);
bool q_sslserver_qbase_event_filter(void* self, void* watched, void* event);
void q_sslserver_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_sslserver_timer_event(void* self, void* event);
void q_sslserver_qbase_timer_event(void* self, void* event);
void q_sslserver_on_timer_event(void* self, void (*slot)(void*, void*));
void q_sslserver_child_event(void* self, void* event);
void q_sslserver_qbase_child_event(void* self, void* event);
void q_sslserver_on_child_event(void* self, void (*slot)(void*, void*));
void q_sslserver_custom_event(void* self, void* event);
void q_sslserver_qbase_custom_event(void* self, void* event);
void q_sslserver_on_custom_event(void* self, void (*slot)(void*, void*));
void q_sslserver_connect_notify(void* self, void* signal);
void q_sslserver_qbase_connect_notify(void* self, void* signal);
void q_sslserver_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_sslserver_disconnect_notify(void* self, void* signal);
void q_sslserver_qbase_disconnect_notify(void* self, void* signal);
void q_sslserver_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_sslserver_add_pending_connection(void* self, void* socket);
void q_sslserver_qbase_add_pending_connection(void* self, void* socket);
void q_sslserver_on_add_pending_connection(void* self, void (*slot)(void*, void*));
QObject* q_sslserver_sender(void* self);
QObject* q_sslserver_qbase_sender(void* self);
void q_sslserver_on_sender(void* self, QObject* (*slot)());
int32_t q_sslserver_sender_signal_index(void* self);
int32_t q_sslserver_qbase_sender_signal_index(void* self);
void q_sslserver_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_sslserver_receivers(void* self, const char* signal);
int32_t q_sslserver_qbase_receivers(void* self, const char* signal);
void q_sslserver_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_sslserver_is_signal_connected(void* self, void* signal);
bool q_sslserver_qbase_is_signal_connected(void* self, void* signal);
void q_sslserver_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_sslserver_delete(void* self);

#endif
