#pragma once
#ifndef SRC_NETWORKQT6C_LIBQLOCALSERVER_H
#define SRC_NETWORKQT6C_LIBQLOCALSERVER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "libqlocalsocket.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QLocalServer* q_localserver_new();
QLocalServer* q_localserver_new2(void* parent);
QMetaObject* q_localserver_meta_object(void* self);
void* q_localserver_metacast(void* self, const char* param1);
int32_t q_localserver_metacall(void* self, int64_t param1, int param2, void* param3);
void q_localserver_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_localserver_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_localserver_tr(const char* s);
void q_localserver_new_connection(void* self);
void q_localserver_on_new_connection(void* self, void (*slot)(void*));
void q_localserver_close(void* self);
const char* q_localserver_error_string(void* self);
bool q_localserver_has_pending_connections(void* self);
void q_localserver_on_has_pending_connections(void* self, bool (*slot)());
bool q_localserver_qbase_has_pending_connections(void* self);
bool q_localserver_is_listening(void* self);
bool q_localserver_listen(void* self, const char* name);
bool q_localserver_listen_with_socket_descriptor(void* self, intptr_t socketDescriptor);
int32_t q_localserver_max_pending_connections(void* self);
QLocalSocket* q_localserver_next_pending_connection(void* self);
void q_localserver_on_next_pending_connection(void* self, QLocalSocket* (*slot)());
QLocalSocket* q_localserver_qbase_next_pending_connection(void* self);
const char* q_localserver_server_name(void* self);
const char* q_localserver_full_server_name(void* self);
bool q_localserver_remove_server(const char* name);
int64_t q_localserver_server_error(void* self);
void q_localserver_set_max_pending_connections(void* self, int numConnections);
bool q_localserver_wait_for_new_connection(void* self);
void q_localserver_set_listen_backlog_size(void* self, int size);
int32_t q_localserver_listen_backlog_size(void* self);
void q_localserver_set_socket_options(void* self, int64_t options);
int64_t q_localserver_socket_options(void* self);
intptr_t q_localserver_socket_descriptor(void* self);
void q_localserver_incoming_connection(void* self, uintptr_t socketDescriptor);
void q_localserver_on_incoming_connection(void* self, void (*slot)(void*, uintptr_t));
void q_localserver_qbase_incoming_connection(void* self, uintptr_t socketDescriptor);
const char* q_localserver_tr2(const char* s, const char* c);
const char* q_localserver_tr3(const char* s, const char* c, int n);
bool q_localserver_wait_for_new_connection1(void* self, int msec);
bool q_localserver_wait_for_new_connection2(void* self, int msec, bool* timedOut);
const char* q_localserver_object_name(void* self);
void q_localserver_set_object_name(void* self, const char* name);
bool q_localserver_is_widget_type(void* self);
bool q_localserver_is_window_type(void* self);
bool q_localserver_is_quick_item_type(void* self);
bool q_localserver_signals_blocked(void* self);
bool q_localserver_block_signals(void* self, bool b);
QThread* q_localserver_thread(void* self);
void q_localserver_move_to_thread(void* self, void* thread);
int32_t q_localserver_start_timer(void* self, int interval);
void q_localserver_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_localserver_children(void* self);
void q_localserver_set_parent(void* self, void* parent);
void q_localserver_install_event_filter(void* self, void* filterObj);
void q_localserver_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_localserver_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_localserver_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_localserver_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_localserver_disconnect_with_q_meta_object_connection(void* param1);
void q_localserver_dump_object_tree(void* self);
void q_localserver_dump_object_info(void* self);
bool q_localserver_set_property(void* self, const char* name, void* value);
QVariant* q_localserver_property(void* self, const char* name);
const char** q_localserver_dynamic_property_names(void* self);
QBindingStorage* q_localserver_binding_storage(void* self);
QBindingStorage* q_localserver_binding_storage2(void* self);
void q_localserver_destroyed(void* self);
void q_localserver_on_destroyed(void* self, void (*slot)(void*));
QObject* q_localserver_parent(void* self);
bool q_localserver_inherits(void* self, const char* classname);
void q_localserver_delete_later(void* self);
int32_t q_localserver_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_localserver_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_localserver_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_localserver_destroyed1(void* self, void* param1);
void q_localserver_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_localserver_event(void* self, void* event);
bool q_localserver_qbase_event(void* self, void* event);
void q_localserver_on_event(void* self, bool (*slot)(void*, void*));
bool q_localserver_event_filter(void* self, void* watched, void* event);
bool q_localserver_qbase_event_filter(void* self, void* watched, void* event);
void q_localserver_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_localserver_timer_event(void* self, void* event);
void q_localserver_qbase_timer_event(void* self, void* event);
void q_localserver_on_timer_event(void* self, void (*slot)(void*, void*));
void q_localserver_child_event(void* self, void* event);
void q_localserver_qbase_child_event(void* self, void* event);
void q_localserver_on_child_event(void* self, void (*slot)(void*, void*));
void q_localserver_custom_event(void* self, void* event);
void q_localserver_qbase_custom_event(void* self, void* event);
void q_localserver_on_custom_event(void* self, void (*slot)(void*, void*));
void q_localserver_connect_notify(void* self, void* signal);
void q_localserver_qbase_connect_notify(void* self, void* signal);
void q_localserver_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_localserver_disconnect_notify(void* self, void* signal);
void q_localserver_qbase_disconnect_notify(void* self, void* signal);
void q_localserver_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_localserver_sender(void* self);
QObject* q_localserver_qbase_sender(void* self);
void q_localserver_on_sender(void* self, QObject* (*slot)());
int32_t q_localserver_sender_signal_index(void* self);
int32_t q_localserver_qbase_sender_signal_index(void* self);
void q_localserver_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_localserver_receivers(void* self, const char* signal);
int32_t q_localserver_qbase_receivers(void* self, const char* signal);
void q_localserver_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_localserver_is_signal_connected(void* self, void* signal);
bool q_localserver_qbase_is_signal_connected(void* self, void* signal);
void q_localserver_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_localserver_delete(void* self);

/// https://doc.qt.io/qt-6/qlocalserver.html#types

typedef enum {
    QLOCALSERVER_SOCKETOPTION_NOOPTIONS = 0,
    QLOCALSERVER_SOCKETOPTION_USERACCESSOPTION = 1,
    QLOCALSERVER_SOCKETOPTION_GROUPACCESSOPTION = 2,
    QLOCALSERVER_SOCKETOPTION_OTHERACCESSOPTION = 4,
    QLOCALSERVER_SOCKETOPTION_WORLDACCESSOPTION = 7,
    QLOCALSERVER_SOCKETOPTION_ABSTRACTNAMESPACEOPTION = 8
} QLocalServer__SocketOption;

#endif
