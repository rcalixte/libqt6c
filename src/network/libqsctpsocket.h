#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSCTPSOCKET_H
#define SRC_NETWORKQT6C_LIBQSCTPSOCKET_H

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
#include "libqnetworkdatagram.h"
#include "libqnetworkproxy.h"
#include "../libqobject.h"
#include <string.h>
#include "libqtcpsocket.h"
#include "../libqthread.h"
#include "../libqvariant.h"

QSctpSocket* q_sctpsocket_new();
QSctpSocket* q_sctpsocket_new2(void* parent);
QMetaObject* q_sctpsocket_meta_object(void* self);
void* q_sctpsocket_metacast(void* self, const char* param1);
int32_t q_sctpsocket_metacall(void* self, int64_t param1, int param2, void* param3);
void q_sctpsocket_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_sctpsocket_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_sctpsocket_tr(const char* s);
void q_sctpsocket_close(void* self);
void q_sctpsocket_on_close(void* self, void (*slot)());
void q_sctpsocket_qbase_close(void* self);
void q_sctpsocket_disconnect_from_host(void* self);
void q_sctpsocket_on_disconnect_from_host(void* self, void (*slot)());
void q_sctpsocket_qbase_disconnect_from_host(void* self);
void q_sctpsocket_set_maximum_channel_count(void* self, int count);
int32_t q_sctpsocket_maximum_channel_count(void* self);
bool q_sctpsocket_is_in_datagram_mode(void* self);
QNetworkDatagram* q_sctpsocket_read_datagram(void* self);
bool q_sctpsocket_write_datagram(void* self, void* datagram);
long long q_sctpsocket_read_data(void* self, char* data, long long maxlen);
void q_sctpsocket_on_read_data(void* self, long long (*slot)(void*, char*, long long));
long long q_sctpsocket_qbase_read_data(void* self, char* data, long long maxlen);
long long q_sctpsocket_read_line_data(void* self, char* data, long long maxlen);
void q_sctpsocket_on_read_line_data(void* self, long long (*slot)(void*, char*, long long));
long long q_sctpsocket_qbase_read_line_data(void* self, char* data, long long maxlen);
const char* q_sctpsocket_tr2(const char* s, const char* c);
const char* q_sctpsocket_tr3(const char* s, const char* c, int n);
bool q_sctpsocket_bind2(void* self, int64_t addr, unsigned short port);
bool q_sctpsocket_bind3(void* self, int64_t addr, unsigned short port, int64_t mode);
int64_t q_sctpsocket_pause_mode(void* self);
void q_sctpsocket_set_pause_mode(void* self, int64_t pauseMode);
void q_sctpsocket_connect_to_host2(void* self, void* address, unsigned short port);
bool q_sctpsocket_is_valid(void* self);
unsigned short q_sctpsocket_local_port(void* self);
QHostAddress* q_sctpsocket_local_address(void* self);
unsigned short q_sctpsocket_peer_port(void* self);
QHostAddress* q_sctpsocket_peer_address(void* self);
const char* q_sctpsocket_peer_name(void* self);
long long q_sctpsocket_read_buffer_size(void* self);
void q_sctpsocket_abort(void* self);
int64_t q_sctpsocket_socket_type(void* self);
int64_t q_sctpsocket_state(void* self);
int64_t q_sctpsocket_error(void* self);
bool q_sctpsocket_flush(void* self);
void q_sctpsocket_set_proxy(void* self, void* networkProxy);
QNetworkProxy* q_sctpsocket_proxy(void* self);
const char* q_sctpsocket_protocol_tag(void* self);
void q_sctpsocket_set_protocol_tag(void* self, const char* tag);
void q_sctpsocket_host_found(void* self);
void q_sctpsocket_on_host_found(void* self, void (*slot)(void*));
void q_sctpsocket_connected(void* self);
void q_sctpsocket_on_connected(void* self, void (*slot)(void*));
void q_sctpsocket_disconnected(void* self);
void q_sctpsocket_on_disconnected(void* self, void (*slot)(void*));
void q_sctpsocket_state_changed(void* self, int64_t param1);
void q_sctpsocket_on_state_changed(void* self, void (*slot)(void*, int64_t));
void q_sctpsocket_error_occurred(void* self, int64_t param1);
void q_sctpsocket_on_error_occurred(void* self, void (*slot)(void*, int64_t));
void q_sctpsocket_proxy_authentication_required(void* self, void* proxy, void* authenticator);
void q_sctpsocket_on_proxy_authentication_required(void* self, void (*slot)(void*, void*, void*));
bool q_sctpsocket_bind1(void* self, unsigned short port);
bool q_sctpsocket_bind22(void* self, unsigned short port, int64_t mode);
void q_sctpsocket_connect_to_host3(void* self, void* address, unsigned short port, int64_t mode);
int64_t q_sctpsocket_open_mode(void* self);
void q_sctpsocket_set_text_mode_enabled(void* self, bool enabled);
bool q_sctpsocket_is_text_mode_enabled(void* self);
bool q_sctpsocket_is_open(void* self);
bool q_sctpsocket_is_readable(void* self);
bool q_sctpsocket_is_writable(void* self);
int32_t q_sctpsocket_read_channel_count(void* self);
int32_t q_sctpsocket_write_channel_count(void* self);
int32_t q_sctpsocket_current_read_channel(void* self);
void q_sctpsocket_set_current_read_channel(void* self, int channel);
int32_t q_sctpsocket_current_write_channel(void* self);
void q_sctpsocket_set_current_write_channel(void* self, int channel);
long long q_sctpsocket_read(void* self, char* data, long long maxlen);
char* q_sctpsocket_read_with_maxlen(void* self, long long maxlen);
char* q_sctpsocket_read_all(void* self);
long long q_sctpsocket_read_line(void* self, char* data, long long maxlen);
char* q_sctpsocket_read_line2(void* self);
void q_sctpsocket_start_transaction(void* self);
void q_sctpsocket_commit_transaction(void* self);
void q_sctpsocket_rollback_transaction(void* self);
bool q_sctpsocket_is_transaction_started(void* self);
long long q_sctpsocket_write(void* self, const char* data, long long lenVal);
long long q_sctpsocket_write_with_data(void* self, const char* data);
long long q_sctpsocket_write2(void* self, const char* data);
long long q_sctpsocket_peek(void* self, char* data, long long maxlen);
char* q_sctpsocket_peek_with_maxlen(void* self, long long maxlen);
long long q_sctpsocket_skip(void* self, long long maxSize);
void q_sctpsocket_unget_char(void* self, char c);
bool q_sctpsocket_put_char(void* self, char c);
bool q_sctpsocket_get_char(void* self, char* c);
const char* q_sctpsocket_error_string(void* self);
void q_sctpsocket_ready_read(void* self);
void q_sctpsocket_on_ready_read(void* self, void (*slot)(void*));
void q_sctpsocket_channel_ready_read(void* self, int channel);
void q_sctpsocket_on_channel_ready_read(void* self, void (*slot)(void*, int));
void q_sctpsocket_bytes_written(void* self, long long bytes);
void q_sctpsocket_on_bytes_written(void* self, void (*slot)(void*, long long));
void q_sctpsocket_channel_bytes_written(void* self, int channel, long long bytes);
void q_sctpsocket_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));
void q_sctpsocket_about_to_close(void* self);
void q_sctpsocket_on_about_to_close(void* self, void (*slot)(void*));
void q_sctpsocket_read_channel_finished(void* self);
void q_sctpsocket_on_read_channel_finished(void* self, void (*slot)(void*));
char* q_sctpsocket_read_line1(void* self, long long maxlen);
const char* q_sctpsocket_object_name(void* self);
void q_sctpsocket_set_object_name(void* self, const char* name);
bool q_sctpsocket_is_widget_type(void* self);
bool q_sctpsocket_is_window_type(void* self);
bool q_sctpsocket_is_quick_item_type(void* self);
bool q_sctpsocket_signals_blocked(void* self);
bool q_sctpsocket_block_signals(void* self, bool b);
QThread* q_sctpsocket_thread(void* self);
void q_sctpsocket_move_to_thread(void* self, void* thread);
int32_t q_sctpsocket_start_timer(void* self, int interval);
void q_sctpsocket_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_sctpsocket_children(void* self);
void q_sctpsocket_set_parent(void* self, void* parent);
void q_sctpsocket_install_event_filter(void* self, void* filterObj);
void q_sctpsocket_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_sctpsocket_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_sctpsocket_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_sctpsocket_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_sctpsocket_disconnect_with_q_meta_object_connection(void* param1);
void q_sctpsocket_dump_object_tree(void* self);
void q_sctpsocket_dump_object_info(void* self);
bool q_sctpsocket_set_property(void* self, const char* name, void* value);
QVariant* q_sctpsocket_property(void* self, const char* name);
const char** q_sctpsocket_dynamic_property_names(void* self);
QBindingStorage* q_sctpsocket_binding_storage(void* self);
QBindingStorage* q_sctpsocket_binding_storage2(void* self);
void q_sctpsocket_destroyed(void* self);
void q_sctpsocket_on_destroyed(void* self, void (*slot)(void*));
QObject* q_sctpsocket_parent(void* self);
bool q_sctpsocket_inherits(void* self, const char* classname);
void q_sctpsocket_delete_later(void* self);
int32_t q_sctpsocket_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_sctpsocket_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_sctpsocket_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_sctpsocket_destroyed1(void* self, void* param1);
void q_sctpsocket_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_sctpsocket_resume(void* self);
void q_sctpsocket_qbase_resume(void* self);
void q_sctpsocket_on_resume(void* self, void (*slot)());
bool q_sctpsocket_bind(void* self, void* address, unsigned short port, int64_t mode);
bool q_sctpsocket_qbase_bind(void* self, void* address, unsigned short port, int64_t mode);
void q_sctpsocket_on_bind(void* self, bool (*slot)(void*, void*, unsigned short, int64_t));
void q_sctpsocket_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol);
void q_sctpsocket_qbase_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol);
void q_sctpsocket_on_connect_to_host(void* self, void (*slot)(void*, const char*, unsigned short, int64_t, int64_t));
long long q_sctpsocket_bytes_available(void* self);
long long q_sctpsocket_qbase_bytes_available(void* self);
void q_sctpsocket_on_bytes_available(void* self, long long (*slot)());
long long q_sctpsocket_bytes_to_write(void* self);
long long q_sctpsocket_qbase_bytes_to_write(void* self);
void q_sctpsocket_on_bytes_to_write(void* self, long long (*slot)());
void q_sctpsocket_set_read_buffer_size(void* self, long long size);
void q_sctpsocket_qbase_set_read_buffer_size(void* self, long long size);
void q_sctpsocket_on_set_read_buffer_size(void* self, void (*slot)(void*, long long));
intptr_t q_sctpsocket_socket_descriptor(void* self);
intptr_t q_sctpsocket_qbase_socket_descriptor(void* self);
void q_sctpsocket_on_socket_descriptor(void* self, intptr_t (*slot)());
bool q_sctpsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode);
bool q_sctpsocket_qbase_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode);
void q_sctpsocket_on_set_socket_descriptor(void* self, bool (*slot)(void*, intptr_t, int64_t, int64_t));
void q_sctpsocket_set_socket_option(void* self, int64_t option, void* value);
void q_sctpsocket_qbase_set_socket_option(void* self, int64_t option, void* value);
void q_sctpsocket_on_set_socket_option(void* self, void (*slot)(void*, int64_t, void*));
QVariant* q_sctpsocket_socket_option(void* self, int64_t option);
QVariant* q_sctpsocket_qbase_socket_option(void* self, int64_t option);
void q_sctpsocket_on_socket_option(void* self, QVariant* (*slot)(void*, int64_t));
bool q_sctpsocket_is_sequential(void* self);
bool q_sctpsocket_qbase_is_sequential(void* self);
void q_sctpsocket_on_is_sequential(void* self, bool (*slot)());
bool q_sctpsocket_wait_for_connected(void* self, int msecs);
bool q_sctpsocket_qbase_wait_for_connected(void* self, int msecs);
void q_sctpsocket_on_wait_for_connected(void* self, bool (*slot)(void*, int));
bool q_sctpsocket_wait_for_ready_read(void* self, int msecs);
bool q_sctpsocket_qbase_wait_for_ready_read(void* self, int msecs);
void q_sctpsocket_on_wait_for_ready_read(void* self, bool (*slot)(void*, int));
bool q_sctpsocket_wait_for_bytes_written(void* self, int msecs);
bool q_sctpsocket_qbase_wait_for_bytes_written(void* self, int msecs);
void q_sctpsocket_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int));
bool q_sctpsocket_wait_for_disconnected(void* self, int msecs);
bool q_sctpsocket_qbase_wait_for_disconnected(void* self, int msecs);
void q_sctpsocket_on_wait_for_disconnected(void* self, bool (*slot)(void*, int));
long long q_sctpsocket_skip_data(void* self, long long maxSize);
long long q_sctpsocket_qbase_skip_data(void* self, long long maxSize);
void q_sctpsocket_on_skip_data(void* self, long long (*slot)(void*, long long));
long long q_sctpsocket_write_data(void* self, const char* data, long long lenVal);
long long q_sctpsocket_qbase_write_data(void* self, const char* data, long long lenVal);
void q_sctpsocket_on_write_data(void* self, long long (*slot)(void*, const char*, long long));
bool q_sctpsocket_open(void* self, int64_t mode);
bool q_sctpsocket_qbase_open(void* self, int64_t mode);
void q_sctpsocket_on_open(void* self, bool (*slot)(void*, int64_t));
long long q_sctpsocket_pos(void* self);
long long q_sctpsocket_qbase_pos(void* self);
void q_sctpsocket_on_pos(void* self, long long (*slot)());
long long q_sctpsocket_size(void* self);
long long q_sctpsocket_qbase_size(void* self);
void q_sctpsocket_on_size(void* self, long long (*slot)());
bool q_sctpsocket_seek(void* self, long long pos);
bool q_sctpsocket_qbase_seek(void* self, long long pos);
void q_sctpsocket_on_seek(void* self, bool (*slot)(void*, long long));
bool q_sctpsocket_at_end(void* self);
bool q_sctpsocket_qbase_at_end(void* self);
void q_sctpsocket_on_at_end(void* self, bool (*slot)());
bool q_sctpsocket_reset(void* self);
bool q_sctpsocket_qbase_reset(void* self);
void q_sctpsocket_on_reset(void* self, bool (*slot)());
bool q_sctpsocket_can_read_line(void* self);
bool q_sctpsocket_qbase_can_read_line(void* self);
void q_sctpsocket_on_can_read_line(void* self, bool (*slot)());
bool q_sctpsocket_event(void* self, void* event);
bool q_sctpsocket_qbase_event(void* self, void* event);
void q_sctpsocket_on_event(void* self, bool (*slot)(void*, void*));
bool q_sctpsocket_event_filter(void* self, void* watched, void* event);
bool q_sctpsocket_qbase_event_filter(void* self, void* watched, void* event);
void q_sctpsocket_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_sctpsocket_timer_event(void* self, void* event);
void q_sctpsocket_qbase_timer_event(void* self, void* event);
void q_sctpsocket_on_timer_event(void* self, void (*slot)(void*, void*));
void q_sctpsocket_child_event(void* self, void* event);
void q_sctpsocket_qbase_child_event(void* self, void* event);
void q_sctpsocket_on_child_event(void* self, void (*slot)(void*, void*));
void q_sctpsocket_custom_event(void* self, void* event);
void q_sctpsocket_qbase_custom_event(void* self, void* event);
void q_sctpsocket_on_custom_event(void* self, void (*slot)(void*, void*));
void q_sctpsocket_connect_notify(void* self, void* signal);
void q_sctpsocket_qbase_connect_notify(void* self, void* signal);
void q_sctpsocket_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_sctpsocket_disconnect_notify(void* self, void* signal);
void q_sctpsocket_qbase_disconnect_notify(void* self, void* signal);
void q_sctpsocket_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_sctpsocket_set_socket_state(void* self, int64_t state);
void q_sctpsocket_qbase_set_socket_state(void* self, int64_t state);
void q_sctpsocket_on_set_socket_state(void* self, void (*slot)(void*, int64_t));
void q_sctpsocket_set_socket_error(void* self, int64_t socketError);
void q_sctpsocket_qbase_set_socket_error(void* self, int64_t socketError);
void q_sctpsocket_on_set_socket_error(void* self, void (*slot)(void*, int64_t));
void q_sctpsocket_set_local_port(void* self, unsigned short port);
void q_sctpsocket_qbase_set_local_port(void* self, unsigned short port);
void q_sctpsocket_on_set_local_port(void* self, void (*slot)(void*, unsigned short));
void q_sctpsocket_set_local_address(void* self, void* address);
void q_sctpsocket_qbase_set_local_address(void* self, void* address);
void q_sctpsocket_on_set_local_address(void* self, void (*slot)(void*, void*));
void q_sctpsocket_set_peer_port(void* self, unsigned short port);
void q_sctpsocket_qbase_set_peer_port(void* self, unsigned short port);
void q_sctpsocket_on_set_peer_port(void* self, void (*slot)(void*, unsigned short));
void q_sctpsocket_set_peer_address(void* self, void* address);
void q_sctpsocket_qbase_set_peer_address(void* self, void* address);
void q_sctpsocket_on_set_peer_address(void* self, void (*slot)(void*, void*));
void q_sctpsocket_set_peer_name(void* self, const char* name);
void q_sctpsocket_qbase_set_peer_name(void* self, const char* name);
void q_sctpsocket_on_set_peer_name(void* self, void (*slot)(void*, const char*));
void q_sctpsocket_set_open_mode(void* self, int64_t openMode);
void q_sctpsocket_qbase_set_open_mode(void* self, int64_t openMode);
void q_sctpsocket_on_set_open_mode(void* self, void (*slot)(void*, int64_t));
void q_sctpsocket_set_error_string(void* self, const char* errorString);
void q_sctpsocket_qbase_set_error_string(void* self, const char* errorString);
void q_sctpsocket_on_set_error_string(void* self, void (*slot)(void*, const char*));
QObject* q_sctpsocket_sender(void* self);
QObject* q_sctpsocket_qbase_sender(void* self);
void q_sctpsocket_on_sender(void* self, QObject* (*slot)());
int32_t q_sctpsocket_sender_signal_index(void* self);
int32_t q_sctpsocket_qbase_sender_signal_index(void* self);
void q_sctpsocket_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_sctpsocket_receivers(void* self, const char* signal);
int32_t q_sctpsocket_qbase_receivers(void* self, const char* signal);
void q_sctpsocket_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_sctpsocket_is_signal_connected(void* self, void* signal);
bool q_sctpsocket_qbase_is_signal_connected(void* self, void* signal);
void q_sctpsocket_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_sctpsocket_delete(void* self);

#endif
