#pragma once
#ifndef SRC_NETWORKQT6C_LIBQTCPSERVER_H
#define SRC_NETWORKQT6C_LIBQTCPSERVER_H

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
#include <string.h>
#include "libqtcpsocket.h"
#include "../libqthread.h"
#include "../libqvariant.h"

QTcpServer* q_tcpserver_new();
QTcpServer* q_tcpserver_new2(void* parent);
QMetaObject* q_tcpserver_meta_object(void* self);
void* q_tcpserver_metacast(void* self, const char* param1);
int32_t q_tcpserver_metacall(void* self, int64_t param1, int param2, void* param3);
void q_tcpserver_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_tcpserver_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_tcpserver_tr(const char* s);
bool q_tcpserver_listen(void* self);
void q_tcpserver_close(void* self);
bool q_tcpserver_is_listening(void* self);
void q_tcpserver_set_max_pending_connections(void* self, int numConnections);
int32_t q_tcpserver_max_pending_connections(void* self);
void q_tcpserver_set_listen_backlog_size(void* self, int size);
int32_t q_tcpserver_listen_backlog_size(void* self);
unsigned short q_tcpserver_server_port(void* self);
QHostAddress* q_tcpserver_server_address(void* self);
intptr_t q_tcpserver_socket_descriptor(void* self);
bool q_tcpserver_set_socket_descriptor(void* self, intptr_t socketDescriptor);
bool q_tcpserver_wait_for_new_connection(void* self);
bool q_tcpserver_has_pending_connections(void* self);
void q_tcpserver_on_has_pending_connections(void* self, bool (*slot)());
bool q_tcpserver_qbase_has_pending_connections(void* self);
QTcpSocket* q_tcpserver_next_pending_connection(void* self);
void q_tcpserver_on_next_pending_connection(void* self, QTcpSocket* (*slot)());
QTcpSocket* q_tcpserver_qbase_next_pending_connection(void* self);
int64_t q_tcpserver_server_error(void* self);
const char* q_tcpserver_error_string(void* self);
void q_tcpserver_pause_accepting(void* self);
void q_tcpserver_resume_accepting(void* self);
void q_tcpserver_set_proxy(void* self, void* networkProxy);
QNetworkProxy* q_tcpserver_proxy(void* self);
void q_tcpserver_incoming_connection(void* self, intptr_t handle);
void q_tcpserver_on_incoming_connection(void* self, void (*slot)(void*, intptr_t));
void q_tcpserver_qbase_incoming_connection(void* self, intptr_t handle);
void q_tcpserver_add_pending_connection(void* self, void* socket);
void q_tcpserver_on_add_pending_connection(void* self, void (*slot)(void*, void*));
void q_tcpserver_qbase_add_pending_connection(void* self, void* socket);
void q_tcpserver_new_connection(void* self);
void q_tcpserver_on_new_connection(void* self, void (*slot)(void*));
void q_tcpserver_accept_error(void* self, int64_t socketError);
void q_tcpserver_on_accept_error(void* self, void (*slot)(void*, int64_t));
const char* q_tcpserver_tr2(const char* s, const char* c);
const char* q_tcpserver_tr3(const char* s, const char* c, int n);
bool q_tcpserver_listen1(void* self, void* address);
bool q_tcpserver_listen2(void* self, void* address, unsigned short port);
bool q_tcpserver_wait_for_new_connection1(void* self, int msec);
bool q_tcpserver_wait_for_new_connection2(void* self, int msec, bool* timedOut);
const char* q_tcpserver_object_name(void* self);
void q_tcpserver_set_object_name(void* self, const char* name);
bool q_tcpserver_is_widget_type(void* self);
bool q_tcpserver_is_window_type(void* self);
bool q_tcpserver_is_quick_item_type(void* self);
bool q_tcpserver_signals_blocked(void* self);
bool q_tcpserver_block_signals(void* self, bool b);
QThread* q_tcpserver_thread(void* self);
void q_tcpserver_move_to_thread(void* self, void* thread);
int32_t q_tcpserver_start_timer(void* self, int interval);
void q_tcpserver_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_tcpserver_children(void* self);
void q_tcpserver_set_parent(void* self, void* parent);
void q_tcpserver_install_event_filter(void* self, void* filterObj);
void q_tcpserver_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_tcpserver_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_tcpserver_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_tcpserver_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_tcpserver_disconnect_with_q_meta_object_connection(void* param1);
void q_tcpserver_dump_object_tree(void* self);
void q_tcpserver_dump_object_info(void* self);
bool q_tcpserver_set_property(void* self, const char* name, void* value);
QVariant* q_tcpserver_property(void* self, const char* name);
const char** q_tcpserver_dynamic_property_names(void* self);
QBindingStorage* q_tcpserver_binding_storage(void* self);
QBindingStorage* q_tcpserver_binding_storage2(void* self);
void q_tcpserver_destroyed(void* self);
void q_tcpserver_on_destroyed(void* self, void (*slot)(void*));
QObject* q_tcpserver_parent(void* self);
bool q_tcpserver_inherits(void* self, const char* classname);
void q_tcpserver_delete_later(void* self);
int32_t q_tcpserver_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_tcpserver_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_tcpserver_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_tcpserver_destroyed1(void* self, void* param1);
void q_tcpserver_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_tcpserver_event(void* self, void* event);
bool q_tcpserver_qbase_event(void* self, void* event);
void q_tcpserver_on_event(void* self, bool (*slot)(void*, void*));
bool q_tcpserver_event_filter(void* self, void* watched, void* event);
bool q_tcpserver_qbase_event_filter(void* self, void* watched, void* event);
void q_tcpserver_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_tcpserver_timer_event(void* self, void* event);
void q_tcpserver_qbase_timer_event(void* self, void* event);
void q_tcpserver_on_timer_event(void* self, void (*slot)(void*, void*));
void q_tcpserver_child_event(void* self, void* event);
void q_tcpserver_qbase_child_event(void* self, void* event);
void q_tcpserver_on_child_event(void* self, void (*slot)(void*, void*));
void q_tcpserver_custom_event(void* self, void* event);
void q_tcpserver_qbase_custom_event(void* self, void* event);
void q_tcpserver_on_custom_event(void* self, void (*slot)(void*, void*));
void q_tcpserver_connect_notify(void* self, void* signal);
void q_tcpserver_qbase_connect_notify(void* self, void* signal);
void q_tcpserver_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_tcpserver_disconnect_notify(void* self, void* signal);
void q_tcpserver_qbase_disconnect_notify(void* self, void* signal);
void q_tcpserver_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_tcpserver_sender(void* self);
QObject* q_tcpserver_qbase_sender(void* self);
void q_tcpserver_on_sender(void* self, QObject* (*slot)());
int32_t q_tcpserver_sender_signal_index(void* self);
int32_t q_tcpserver_qbase_sender_signal_index(void* self);
void q_tcpserver_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_tcpserver_receivers(void* self, const char* signal);
int32_t q_tcpserver_qbase_receivers(void* self, const char* signal);
void q_tcpserver_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_tcpserver_is_signal_connected(void* self, void* signal);
bool q_tcpserver_qbase_is_signal_connected(void* self, void* signal);
void q_tcpserver_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_tcpserver_delete(void* self);

#endif
