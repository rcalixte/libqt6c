#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSCTPSERVER_H
#define SRC_NETWORKQT6C_LIBQSCTPSERVER_H

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
#include "libqsctpsocket.h"
#include <string.h>
#include "libqtcpserver.h"
#include "libqtcpsocket.h"
#include "../libqthread.h"
#include "../libqvariant.h"

QSctpServer* q_sctpserver_new();
QSctpServer* q_sctpserver_new2(void* parent);
QMetaObject* q_sctpserver_meta_object(void* self);
void* q_sctpserver_metacast(void* self, const char* param1);
int32_t q_sctpserver_metacall(void* self, int64_t param1, int param2, void* param3);
void q_sctpserver_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_sctpserver_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_sctpserver_tr(const char* s);
void q_sctpserver_set_maximum_channel_count(void* self, int count);
int32_t q_sctpserver_maximum_channel_count(void* self);
QSctpSocket* q_sctpserver_next_pending_datagram_connection(void* self);
void q_sctpserver_incoming_connection(void* self, intptr_t handle);
void q_sctpserver_on_incoming_connection(void* self, void (*slot)(void*, intptr_t));
void q_sctpserver_qbase_incoming_connection(void* self, intptr_t handle);
const char* q_sctpserver_tr2(const char* s, const char* c);
const char* q_sctpserver_tr3(const char* s, const char* c, int n);
bool q_sctpserver_listen(void* self);
void q_sctpserver_close(void* self);
bool q_sctpserver_is_listening(void* self);
void q_sctpserver_set_max_pending_connections(void* self, int numConnections);
int32_t q_sctpserver_max_pending_connections(void* self);
void q_sctpserver_set_listen_backlog_size(void* self, int size);
int32_t q_sctpserver_listen_backlog_size(void* self);
unsigned short q_sctpserver_server_port(void* self);
QHostAddress* q_sctpserver_server_address(void* self);
intptr_t q_sctpserver_socket_descriptor(void* self);
bool q_sctpserver_set_socket_descriptor(void* self, intptr_t socketDescriptor);
bool q_sctpserver_wait_for_new_connection(void* self);
int64_t q_sctpserver_server_error(void* self);
const char* q_sctpserver_error_string(void* self);
void q_sctpserver_pause_accepting(void* self);
void q_sctpserver_resume_accepting(void* self);
void q_sctpserver_set_proxy(void* self, void* networkProxy);
QNetworkProxy* q_sctpserver_proxy(void* self);
void q_sctpserver_new_connection(void* self);
void q_sctpserver_on_new_connection(void* self, void (*slot)(void*));
void q_sctpserver_accept_error(void* self, int64_t socketError);
void q_sctpserver_on_accept_error(void* self, void (*slot)(void*, int64_t));
bool q_sctpserver_listen1(void* self, void* address);
bool q_sctpserver_listen2(void* self, void* address, unsigned short port);
bool q_sctpserver_wait_for_new_connection1(void* self, int msec);
bool q_sctpserver_wait_for_new_connection2(void* self, int msec, bool* timedOut);
const char* q_sctpserver_object_name(void* self);
void q_sctpserver_set_object_name(void* self, const char* name);
bool q_sctpserver_is_widget_type(void* self);
bool q_sctpserver_is_window_type(void* self);
bool q_sctpserver_is_quick_item_type(void* self);
bool q_sctpserver_signals_blocked(void* self);
bool q_sctpserver_block_signals(void* self, bool b);
QThread* q_sctpserver_thread(void* self);
void q_sctpserver_move_to_thread(void* self, void* thread);
int32_t q_sctpserver_start_timer(void* self, int interval);
void q_sctpserver_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_sctpserver_children(void* self);
void q_sctpserver_set_parent(void* self, void* parent);
void q_sctpserver_install_event_filter(void* self, void* filterObj);
void q_sctpserver_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_sctpserver_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_sctpserver_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_sctpserver_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_sctpserver_disconnect_with_q_meta_object_connection(void* param1);
void q_sctpserver_dump_object_tree(void* self);
void q_sctpserver_dump_object_info(void* self);
bool q_sctpserver_set_property(void* self, const char* name, void* value);
QVariant* q_sctpserver_property(void* self, const char* name);
const char** q_sctpserver_dynamic_property_names(void* self);
QBindingStorage* q_sctpserver_binding_storage(void* self);
QBindingStorage* q_sctpserver_binding_storage2(void* self);
void q_sctpserver_destroyed(void* self);
void q_sctpserver_on_destroyed(void* self, void (*slot)(void*));
QObject* q_sctpserver_parent(void* self);
bool q_sctpserver_inherits(void* self, const char* classname);
void q_sctpserver_delete_later(void* self);
int32_t q_sctpserver_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_sctpserver_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_sctpserver_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_sctpserver_destroyed1(void* self, void* param1);
void q_sctpserver_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_sctpserver_has_pending_connections(void* self);
bool q_sctpserver_qbase_has_pending_connections(void* self);
void q_sctpserver_on_has_pending_connections(void* self, bool (*slot)());
QTcpSocket* q_sctpserver_next_pending_connection(void* self);
QTcpSocket* q_sctpserver_qbase_next_pending_connection(void* self);
void q_sctpserver_on_next_pending_connection(void* self, QTcpSocket* (*slot)());
bool q_sctpserver_event(void* self, void* event);
bool q_sctpserver_qbase_event(void* self, void* event);
void q_sctpserver_on_event(void* self, bool (*slot)(void*, void*));
bool q_sctpserver_event_filter(void* self, void* watched, void* event);
bool q_sctpserver_qbase_event_filter(void* self, void* watched, void* event);
void q_sctpserver_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_sctpserver_timer_event(void* self, void* event);
void q_sctpserver_qbase_timer_event(void* self, void* event);
void q_sctpserver_on_timer_event(void* self, void (*slot)(void*, void*));
void q_sctpserver_child_event(void* self, void* event);
void q_sctpserver_qbase_child_event(void* self, void* event);
void q_sctpserver_on_child_event(void* self, void (*slot)(void*, void*));
void q_sctpserver_custom_event(void* self, void* event);
void q_sctpserver_qbase_custom_event(void* self, void* event);
void q_sctpserver_on_custom_event(void* self, void (*slot)(void*, void*));
void q_sctpserver_connect_notify(void* self, void* signal);
void q_sctpserver_qbase_connect_notify(void* self, void* signal);
void q_sctpserver_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_sctpserver_disconnect_notify(void* self, void* signal);
void q_sctpserver_qbase_disconnect_notify(void* self, void* signal);
void q_sctpserver_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_sctpserver_add_pending_connection(void* self, void* socket);
void q_sctpserver_qbase_add_pending_connection(void* self, void* socket);
void q_sctpserver_on_add_pending_connection(void* self, void (*slot)(void*, void*));
QObject* q_sctpserver_sender(void* self);
QObject* q_sctpserver_qbase_sender(void* self);
void q_sctpserver_on_sender(void* self, QObject* (*slot)());
int32_t q_sctpserver_sender_signal_index(void* self);
int32_t q_sctpserver_qbase_sender_signal_index(void* self);
void q_sctpserver_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_sctpserver_receivers(void* self, const char* signal);
int32_t q_sctpserver_qbase_receivers(void* self, const char* signal);
void q_sctpserver_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_sctpserver_is_signal_connected(void* self, void* signal);
bool q_sctpserver_qbase_is_signal_connected(void* self, void* signal);
void q_sctpserver_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_sctpserver_delete(void* self);

#endif
