#pragma once
#ifndef SRC_NETWORKQT6C_LIBQLOCALSOCKET_H
#define SRC_NETWORKQT6C_LIBQLOCALSOCKET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqiodevice.h"
#include "../libqiodevicebase.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QLocalSocket* q_localsocket_new();
QLocalSocket* q_localsocket_new2(void* parent);
QMetaObject* q_localsocket_meta_object(void* self);
void* q_localsocket_metacast(void* self, const char* param1);
int32_t q_localsocket_metacall(void* self, int64_t param1, int param2, void* param3);
void q_localsocket_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_localsocket_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_localsocket_tr(const char* s);
void q_localsocket_connect_to_server(void* self);
void q_localsocket_connect_to_server_with_name(void* self, const char* name);
void q_localsocket_disconnect_from_server(void* self);
void q_localsocket_set_server_name(void* self, const char* name);
const char* q_localsocket_server_name(void* self);
const char* q_localsocket_full_server_name(void* self);
void q_localsocket_abort(void* self);
bool q_localsocket_is_sequential(void* self);
void q_localsocket_on_is_sequential(void* self, bool (*slot)());
bool q_localsocket_qbase_is_sequential(void* self);
long long q_localsocket_bytes_available(void* self);
void q_localsocket_on_bytes_available(void* self, long long (*slot)());
long long q_localsocket_qbase_bytes_available(void* self);
long long q_localsocket_bytes_to_write(void* self);
void q_localsocket_on_bytes_to_write(void* self, long long (*slot)());
long long q_localsocket_qbase_bytes_to_write(void* self);
bool q_localsocket_can_read_line(void* self);
void q_localsocket_on_can_read_line(void* self, bool (*slot)());
bool q_localsocket_qbase_can_read_line(void* self);
bool q_localsocket_open(void* self, int64_t openMode);
void q_localsocket_on_open(void* self, bool (*slot)(void*, int64_t));
bool q_localsocket_qbase_open(void* self, int64_t openMode);
void q_localsocket_close(void* self);
void q_localsocket_on_close(void* self, void (*slot)());
void q_localsocket_qbase_close(void* self);
int64_t q_localsocket_error(void* self);
bool q_localsocket_flush(void* self);
bool q_localsocket_is_valid(void* self);
long long q_localsocket_read_buffer_size(void* self);
void q_localsocket_set_read_buffer_size(void* self, long long size);
bool q_localsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor);
intptr_t q_localsocket_socket_descriptor(void* self);
void q_localsocket_set_socket_options(void* self, int64_t option);
int64_t q_localsocket_socket_options(void* self);
int64_t q_localsocket_state(void* self);
bool q_localsocket_wait_for_bytes_written(void* self, int msecs);
void q_localsocket_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int));
bool q_localsocket_qbase_wait_for_bytes_written(void* self, int msecs);
bool q_localsocket_wait_for_connected(void* self);
bool q_localsocket_wait_for_disconnected(void* self);
bool q_localsocket_wait_for_ready_read(void* self, int msecs);
void q_localsocket_on_wait_for_ready_read(void* self, bool (*slot)(void*, int));
bool q_localsocket_qbase_wait_for_ready_read(void* self, int msecs);
void q_localsocket_connected(void* self);
void q_localsocket_on_connected(void* self, void (*slot)(void*));
void q_localsocket_disconnected(void* self);
void q_localsocket_on_disconnected(void* self, void (*slot)(void*));
void q_localsocket_error_occurred(void* self, int64_t socketError);
void q_localsocket_on_error_occurred(void* self, void (*slot)(void*, int64_t));
void q_localsocket_state_changed(void* self, int64_t socketState);
void q_localsocket_on_state_changed(void* self, void (*slot)(void*, int64_t));
long long q_localsocket_read_data(void* self, char* param1, long long param2);
void q_localsocket_on_read_data(void* self, long long (*slot)(void*, char*, long long));
long long q_localsocket_qbase_read_data(void* self, char* param1, long long param2);
long long q_localsocket_read_line_data(void* self, char* data, long long maxSize);
void q_localsocket_on_read_line_data(void* self, long long (*slot)(void*, char*, long long));
long long q_localsocket_qbase_read_line_data(void* self, char* data, long long maxSize);
long long q_localsocket_skip_data(void* self, long long maxSize);
void q_localsocket_on_skip_data(void* self, long long (*slot)(void*, long long));
long long q_localsocket_qbase_skip_data(void* self, long long maxSize);
long long q_localsocket_write_data(void* self, const char* param1, long long param2);
void q_localsocket_on_write_data(void* self, long long (*slot)(void*, const char*, long long));
long long q_localsocket_qbase_write_data(void* self, const char* param1, long long param2);
const char* q_localsocket_tr2(const char* s, const char* c);
const char* q_localsocket_tr3(const char* s, const char* c, int n);
void q_localsocket_connect_to_server1(void* self, int64_t openMode);
void q_localsocket_connect_to_server2(void* self, const char* name, int64_t openMode);
bool q_localsocket_set_socket_descriptor2(void* self, intptr_t socketDescriptor, int64_t socketState);
bool q_localsocket_set_socket_descriptor3(void* self, intptr_t socketDescriptor, int64_t socketState, int64_t openMode);
bool q_localsocket_wait_for_connected1(void* self, int msecs);
bool q_localsocket_wait_for_disconnected1(void* self, int msecs);
int64_t q_localsocket_open_mode(void* self);
void q_localsocket_set_text_mode_enabled(void* self, bool enabled);
bool q_localsocket_is_text_mode_enabled(void* self);
bool q_localsocket_is_open(void* self);
bool q_localsocket_is_readable(void* self);
bool q_localsocket_is_writable(void* self);
int32_t q_localsocket_read_channel_count(void* self);
int32_t q_localsocket_write_channel_count(void* self);
int32_t q_localsocket_current_read_channel(void* self);
void q_localsocket_set_current_read_channel(void* self, int channel);
int32_t q_localsocket_current_write_channel(void* self);
void q_localsocket_set_current_write_channel(void* self, int channel);
long long q_localsocket_read(void* self, char* data, long long maxlen);
char* q_localsocket_read_with_maxlen(void* self, long long maxlen);
char* q_localsocket_read_all(void* self);
long long q_localsocket_read_line(void* self, char* data, long long maxlen);
char* q_localsocket_read_line2(void* self);
void q_localsocket_start_transaction(void* self);
void q_localsocket_commit_transaction(void* self);
void q_localsocket_rollback_transaction(void* self);
bool q_localsocket_is_transaction_started(void* self);
long long q_localsocket_write(void* self, const char* data, long long lenVal);
long long q_localsocket_write_with_data(void* self, const char* data);
long long q_localsocket_write2(void* self, const char* data);
long long q_localsocket_peek(void* self, char* data, long long maxlen);
char* q_localsocket_peek_with_maxlen(void* self, long long maxlen);
long long q_localsocket_skip(void* self, long long maxSize);
void q_localsocket_unget_char(void* self, char c);
bool q_localsocket_put_char(void* self, char c);
bool q_localsocket_get_char(void* self, char* c);
const char* q_localsocket_error_string(void* self);
void q_localsocket_ready_read(void* self);
void q_localsocket_on_ready_read(void* self, void (*slot)(void*));
void q_localsocket_channel_ready_read(void* self, int channel);
void q_localsocket_on_channel_ready_read(void* self, void (*slot)(void*, int));
void q_localsocket_bytes_written(void* self, long long bytes);
void q_localsocket_on_bytes_written(void* self, void (*slot)(void*, long long));
void q_localsocket_channel_bytes_written(void* self, int channel, long long bytes);
void q_localsocket_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));
void q_localsocket_about_to_close(void* self);
void q_localsocket_on_about_to_close(void* self, void (*slot)(void*));
void q_localsocket_read_channel_finished(void* self);
void q_localsocket_on_read_channel_finished(void* self, void (*slot)(void*));
char* q_localsocket_read_line1(void* self, long long maxlen);
const char* q_localsocket_object_name(void* self);
void q_localsocket_set_object_name(void* self, const char* name);
bool q_localsocket_is_widget_type(void* self);
bool q_localsocket_is_window_type(void* self);
bool q_localsocket_is_quick_item_type(void* self);
bool q_localsocket_signals_blocked(void* self);
bool q_localsocket_block_signals(void* self, bool b);
QThread* q_localsocket_thread(void* self);
void q_localsocket_move_to_thread(void* self, void* thread);
int32_t q_localsocket_start_timer(void* self, int interval);
void q_localsocket_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_localsocket_children(void* self);
void q_localsocket_set_parent(void* self, void* parent);
void q_localsocket_install_event_filter(void* self, void* filterObj);
void q_localsocket_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_localsocket_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_localsocket_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_localsocket_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_localsocket_disconnect_with_q_meta_object_connection(void* param1);
void q_localsocket_dump_object_tree(void* self);
void q_localsocket_dump_object_info(void* self);
bool q_localsocket_set_property(void* self, const char* name, void* value);
QVariant* q_localsocket_property(void* self, const char* name);
const char** q_localsocket_dynamic_property_names(void* self);
QBindingStorage* q_localsocket_binding_storage(void* self);
QBindingStorage* q_localsocket_binding_storage2(void* self);
void q_localsocket_destroyed(void* self);
void q_localsocket_on_destroyed(void* self, void (*slot)(void*));
QObject* q_localsocket_parent(void* self);
bool q_localsocket_inherits(void* self, const char* classname);
void q_localsocket_delete_later(void* self);
int32_t q_localsocket_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_localsocket_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_localsocket_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_localsocket_destroyed1(void* self, void* param1);
void q_localsocket_on_destroyed1(void* self, void (*slot)(void*, void*));
long long q_localsocket_pos(void* self);
long long q_localsocket_qbase_pos(void* self);
void q_localsocket_on_pos(void* self, long long (*slot)());
long long q_localsocket_size(void* self);
long long q_localsocket_qbase_size(void* self);
void q_localsocket_on_size(void* self, long long (*slot)());
bool q_localsocket_seek(void* self, long long pos);
bool q_localsocket_qbase_seek(void* self, long long pos);
void q_localsocket_on_seek(void* self, bool (*slot)(void*, long long));
bool q_localsocket_at_end(void* self);
bool q_localsocket_qbase_at_end(void* self);
void q_localsocket_on_at_end(void* self, bool (*slot)());
bool q_localsocket_reset(void* self);
bool q_localsocket_qbase_reset(void* self);
void q_localsocket_on_reset(void* self, bool (*slot)());
bool q_localsocket_event(void* self, void* event);
bool q_localsocket_qbase_event(void* self, void* event);
void q_localsocket_on_event(void* self, bool (*slot)(void*, void*));
bool q_localsocket_event_filter(void* self, void* watched, void* event);
bool q_localsocket_qbase_event_filter(void* self, void* watched, void* event);
void q_localsocket_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_localsocket_timer_event(void* self, void* event);
void q_localsocket_qbase_timer_event(void* self, void* event);
void q_localsocket_on_timer_event(void* self, void (*slot)(void*, void*));
void q_localsocket_child_event(void* self, void* event);
void q_localsocket_qbase_child_event(void* self, void* event);
void q_localsocket_on_child_event(void* self, void (*slot)(void*, void*));
void q_localsocket_custom_event(void* self, void* event);
void q_localsocket_qbase_custom_event(void* self, void* event);
void q_localsocket_on_custom_event(void* self, void (*slot)(void*, void*));
void q_localsocket_connect_notify(void* self, void* signal);
void q_localsocket_qbase_connect_notify(void* self, void* signal);
void q_localsocket_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_localsocket_disconnect_notify(void* self, void* signal);
void q_localsocket_qbase_disconnect_notify(void* self, void* signal);
void q_localsocket_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_localsocket_set_open_mode(void* self, int64_t openMode);
void q_localsocket_qbase_set_open_mode(void* self, int64_t openMode);
void q_localsocket_on_set_open_mode(void* self, void (*slot)(void*, int64_t));
void q_localsocket_set_error_string(void* self, const char* errorString);
void q_localsocket_qbase_set_error_string(void* self, const char* errorString);
void q_localsocket_on_set_error_string(void* self, void (*slot)(void*, const char*));
QObject* q_localsocket_sender(void* self);
QObject* q_localsocket_qbase_sender(void* self);
void q_localsocket_on_sender(void* self, QObject* (*slot)());
int32_t q_localsocket_sender_signal_index(void* self);
int32_t q_localsocket_qbase_sender_signal_index(void* self);
void q_localsocket_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_localsocket_receivers(void* self, const char* signal);
int32_t q_localsocket_qbase_receivers(void* self, const char* signal);
void q_localsocket_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_localsocket_is_signal_connected(void* self, void* signal);
bool q_localsocket_qbase_is_signal_connected(void* self, void* signal);
void q_localsocket_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_localsocket_delete(void* self);

/// https://doc.qt.io/qt-6/qlocalsocket.html#types

typedef enum {
    QLOCALSOCKET_LOCALSOCKETERROR_CONNECTIONREFUSEDERROR = 0,
    QLOCALSOCKET_LOCALSOCKETERROR_PEERCLOSEDERROR = 1,
    QLOCALSOCKET_LOCALSOCKETERROR_SERVERNOTFOUNDERROR = 2,
    QLOCALSOCKET_LOCALSOCKETERROR_SOCKETACCESSERROR = 3,
    QLOCALSOCKET_LOCALSOCKETERROR_SOCKETRESOURCEERROR = 4,
    QLOCALSOCKET_LOCALSOCKETERROR_SOCKETTIMEOUTERROR = 5,
    QLOCALSOCKET_LOCALSOCKETERROR_DATAGRAMTOOLARGEERROR = 6,
    QLOCALSOCKET_LOCALSOCKETERROR_CONNECTIONERROR = 7,
    QLOCALSOCKET_LOCALSOCKETERROR_UNSUPPORTEDSOCKETOPERATIONERROR = 10,
    QLOCALSOCKET_LOCALSOCKETERROR_UNKNOWNSOCKETERROR = -1,
    QLOCALSOCKET_LOCALSOCKETERROR_OPERATIONERROR = 19
} QLocalSocket__LocalSocketError;

typedef enum {
    QLOCALSOCKET_LOCALSOCKETSTATE_UNCONNECTEDSTATE = 0,
    QLOCALSOCKET_LOCALSOCKETSTATE_CONNECTINGSTATE = 2,
    QLOCALSOCKET_LOCALSOCKETSTATE_CONNECTEDSTATE = 3,
    QLOCALSOCKET_LOCALSOCKETSTATE_CLOSINGSTATE = 6
} QLocalSocket__LocalSocketState;

typedef enum {
    QLOCALSOCKET_SOCKETOPTION_NOOPTIONS = 0,
    QLOCALSOCKET_SOCKETOPTION_ABSTRACTNAMESPACEOPTION = 1
} QLocalSocket__SocketOption;

#endif
