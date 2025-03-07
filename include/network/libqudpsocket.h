#pragma once
#ifndef SRC_NETWORKQT6C_LIBQUDPSOCKET_H
#define SRC_NETWORKQT6C_LIBQUDPSOCKET_H

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
#include "libqnetworkinterface.h"
#include "libqnetworkproxy.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QUdpSocket* q_udpsocket_new();
QUdpSocket* q_udpsocket_new2(void* parent);
QMetaObject* q_udpsocket_meta_object(void* self);
void* q_udpsocket_metacast(void* self, const char* param1);
int32_t q_udpsocket_metacall(void* self, int64_t param1, int param2, void* param3);
void q_udpsocket_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_udpsocket_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_udpsocket_tr(const char* s);
bool q_udpsocket_bind(void* self, int64_t addr);
bool q_udpsocket_join_multicast_group(void* self, void* groupAddress);
bool q_udpsocket_join_multicast_group2(void* self, void* groupAddress, void* iface);
bool q_udpsocket_leave_multicast_group(void* self, void* groupAddress);
bool q_udpsocket_leave_multicast_group2(void* self, void* groupAddress, void* iface);
QNetworkInterface* q_udpsocket_multicast_interface(void* self);
void q_udpsocket_set_multicast_interface(void* self, void* iface);
bool q_udpsocket_has_pending_datagrams(void* self);
long long q_udpsocket_pending_datagram_size(void* self);
QNetworkDatagram* q_udpsocket_receive_datagram(void* self);
long long q_udpsocket_read_datagram(void* self, char* data, long long maxlen);
long long q_udpsocket_write_datagram(void* self, void* datagram);
long long q_udpsocket_write_datagram2(void* self, const char* data, long long lenVal, void* host, unsigned short port);
long long q_udpsocket_write_datagram3(void* self, const char* datagram, void* host, unsigned short port);
const char* q_udpsocket_tr2(const char* s, const char* c);
const char* q_udpsocket_tr3(const char* s, const char* c, int n);
bool q_udpsocket_bind2(void* self, int64_t addr, unsigned short port);
bool q_udpsocket_bind3(void* self, int64_t addr, unsigned short port, int64_t mode);
QNetworkDatagram* q_udpsocket_receive_datagram1(void* self, long long maxSize);
long long q_udpsocket_read_datagram3(void* self, char* data, long long maxlen, void* host);
long long q_udpsocket_read_datagram4(void* self, char* data, long long maxlen, void* host, unsigned short* port);
int64_t q_udpsocket_pause_mode(void* self);
void q_udpsocket_set_pause_mode(void* self, int64_t pauseMode);
void q_udpsocket_connect_to_host2(void* self, void* address, unsigned short port);
bool q_udpsocket_is_valid(void* self);
unsigned short q_udpsocket_local_port(void* self);
QHostAddress* q_udpsocket_local_address(void* self);
unsigned short q_udpsocket_peer_port(void* self);
QHostAddress* q_udpsocket_peer_address(void* self);
const char* q_udpsocket_peer_name(void* self);
long long q_udpsocket_read_buffer_size(void* self);
void q_udpsocket_abort(void* self);
int64_t q_udpsocket_socket_type(void* self);
int64_t q_udpsocket_state(void* self);
int64_t q_udpsocket_error(void* self);
bool q_udpsocket_flush(void* self);
void q_udpsocket_set_proxy(void* self, void* networkProxy);
QNetworkProxy* q_udpsocket_proxy(void* self);
const char* q_udpsocket_protocol_tag(void* self);
void q_udpsocket_set_protocol_tag(void* self, const char* tag);
void q_udpsocket_host_found(void* self);
void q_udpsocket_on_host_found(void* self, void (*slot)(void*));
void q_udpsocket_connected(void* self);
void q_udpsocket_on_connected(void* self, void (*slot)(void*));
void q_udpsocket_disconnected(void* self);
void q_udpsocket_on_disconnected(void* self, void (*slot)(void*));
void q_udpsocket_state_changed(void* self, int64_t param1);
void q_udpsocket_on_state_changed(void* self, void (*slot)(void*, int64_t));
void q_udpsocket_error_occurred(void* self, int64_t param1);
void q_udpsocket_on_error_occurred(void* self, void (*slot)(void*, int64_t));
void q_udpsocket_proxy_authentication_required(void* self, void* proxy, void* authenticator);
void q_udpsocket_on_proxy_authentication_required(void* self, void (*slot)(void*, void*, void*));
bool q_udpsocket_bind1(void* self, unsigned short port);
bool q_udpsocket_bind22(void* self, unsigned short port, int64_t mode);
void q_udpsocket_connect_to_host3(void* self, void* address, unsigned short port, int64_t mode);
int64_t q_udpsocket_open_mode(void* self);
void q_udpsocket_set_text_mode_enabled(void* self, bool enabled);
bool q_udpsocket_is_text_mode_enabled(void* self);
bool q_udpsocket_is_open(void* self);
bool q_udpsocket_is_readable(void* self);
bool q_udpsocket_is_writable(void* self);
int32_t q_udpsocket_read_channel_count(void* self);
int32_t q_udpsocket_write_channel_count(void* self);
int32_t q_udpsocket_current_read_channel(void* self);
void q_udpsocket_set_current_read_channel(void* self, int channel);
int32_t q_udpsocket_current_write_channel(void* self);
void q_udpsocket_set_current_write_channel(void* self, int channel);
long long q_udpsocket_read(void* self, char* data, long long maxlen);
char* q_udpsocket_read_with_maxlen(void* self, long long maxlen);
char* q_udpsocket_read_all(void* self);
long long q_udpsocket_read_line(void* self, char* data, long long maxlen);
char* q_udpsocket_read_line2(void* self);
void q_udpsocket_start_transaction(void* self);
void q_udpsocket_commit_transaction(void* self);
void q_udpsocket_rollback_transaction(void* self);
bool q_udpsocket_is_transaction_started(void* self);
long long q_udpsocket_write(void* self, const char* data, long long lenVal);
long long q_udpsocket_write_with_data(void* self, const char* data);
long long q_udpsocket_write2(void* self, const char* data);
long long q_udpsocket_peek(void* self, char* data, long long maxlen);
char* q_udpsocket_peek_with_maxlen(void* self, long long maxlen);
long long q_udpsocket_skip(void* self, long long maxSize);
void q_udpsocket_unget_char(void* self, char c);
bool q_udpsocket_put_char(void* self, char c);
bool q_udpsocket_get_char(void* self, char* c);
const char* q_udpsocket_error_string(void* self);
void q_udpsocket_ready_read(void* self);
void q_udpsocket_on_ready_read(void* self, void (*slot)(void*));
void q_udpsocket_channel_ready_read(void* self, int channel);
void q_udpsocket_on_channel_ready_read(void* self, void (*slot)(void*, int));
void q_udpsocket_bytes_written(void* self, long long bytes);
void q_udpsocket_on_bytes_written(void* self, void (*slot)(void*, long long));
void q_udpsocket_channel_bytes_written(void* self, int channel, long long bytes);
void q_udpsocket_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));
void q_udpsocket_about_to_close(void* self);
void q_udpsocket_on_about_to_close(void* self, void (*slot)(void*));
void q_udpsocket_read_channel_finished(void* self);
void q_udpsocket_on_read_channel_finished(void* self, void (*slot)(void*));
char* q_udpsocket_read_line1(void* self, long long maxlen);
const char* q_udpsocket_object_name(void* self);
void q_udpsocket_set_object_name(void* self, const char* name);
bool q_udpsocket_is_widget_type(void* self);
bool q_udpsocket_is_window_type(void* self);
bool q_udpsocket_is_quick_item_type(void* self);
bool q_udpsocket_signals_blocked(void* self);
bool q_udpsocket_block_signals(void* self, bool b);
QThread* q_udpsocket_thread(void* self);
void q_udpsocket_move_to_thread(void* self, void* thread);
int32_t q_udpsocket_start_timer(void* self, int interval);
void q_udpsocket_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_udpsocket_children(void* self);
void q_udpsocket_set_parent(void* self, void* parent);
void q_udpsocket_install_event_filter(void* self, void* filterObj);
void q_udpsocket_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_udpsocket_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_udpsocket_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_udpsocket_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_udpsocket_disconnect_with_q_meta_object_connection(void* param1);
void q_udpsocket_dump_object_tree(void* self);
void q_udpsocket_dump_object_info(void* self);
bool q_udpsocket_set_property(void* self, const char* name, void* value);
QVariant* q_udpsocket_property(void* self, const char* name);
const char** q_udpsocket_dynamic_property_names(void* self);
QBindingStorage* q_udpsocket_binding_storage(void* self);
QBindingStorage* q_udpsocket_binding_storage2(void* self);
void q_udpsocket_destroyed(void* self);
void q_udpsocket_on_destroyed(void* self, void (*slot)(void*));
QObject* q_udpsocket_parent(void* self);
bool q_udpsocket_inherits(void* self, const char* classname);
void q_udpsocket_delete_later(void* self);
int32_t q_udpsocket_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_udpsocket_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_udpsocket_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_udpsocket_destroyed1(void* self, void* param1);
void q_udpsocket_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_udpsocket_resume(void* self);
void q_udpsocket_qbase_resume(void* self);
void q_udpsocket_on_resume(void* self, void (*slot)());
void q_udpsocket_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol);
void q_udpsocket_qbase_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol);
void q_udpsocket_on_connect_to_host(void* self, void (*slot)(void*, const char*, unsigned short, int64_t, int64_t));
void q_udpsocket_disconnect_from_host(void* self);
void q_udpsocket_qbase_disconnect_from_host(void* self);
void q_udpsocket_on_disconnect_from_host(void* self, void (*slot)());
long long q_udpsocket_bytes_available(void* self);
long long q_udpsocket_qbase_bytes_available(void* self);
void q_udpsocket_on_bytes_available(void* self, long long (*slot)());
long long q_udpsocket_bytes_to_write(void* self);
long long q_udpsocket_qbase_bytes_to_write(void* self);
void q_udpsocket_on_bytes_to_write(void* self, long long (*slot)());
void q_udpsocket_set_read_buffer_size(void* self, long long size);
void q_udpsocket_qbase_set_read_buffer_size(void* self, long long size);
void q_udpsocket_on_set_read_buffer_size(void* self, void (*slot)(void*, long long));
intptr_t q_udpsocket_socket_descriptor(void* self);
intptr_t q_udpsocket_qbase_socket_descriptor(void* self);
void q_udpsocket_on_socket_descriptor(void* self, intptr_t (*slot)());
bool q_udpsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode);
bool q_udpsocket_qbase_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode);
void q_udpsocket_on_set_socket_descriptor(void* self, bool (*slot)(void*, intptr_t, int64_t, int64_t));
void q_udpsocket_set_socket_option(void* self, int64_t option, void* value);
void q_udpsocket_qbase_set_socket_option(void* self, int64_t option, void* value);
void q_udpsocket_on_set_socket_option(void* self, void (*slot)(void*, int64_t, void*));
QVariant* q_udpsocket_socket_option(void* self, int64_t option);
QVariant* q_udpsocket_qbase_socket_option(void* self, int64_t option);
void q_udpsocket_on_socket_option(void* self, QVariant* (*slot)(void*, int64_t));
void q_udpsocket_close(void* self);
void q_udpsocket_qbase_close(void* self);
void q_udpsocket_on_close(void* self, void (*slot)());
bool q_udpsocket_is_sequential(void* self);
bool q_udpsocket_qbase_is_sequential(void* self);
void q_udpsocket_on_is_sequential(void* self, bool (*slot)());
bool q_udpsocket_wait_for_connected(void* self, int msecs);
bool q_udpsocket_qbase_wait_for_connected(void* self, int msecs);
void q_udpsocket_on_wait_for_connected(void* self, bool (*slot)(void*, int));
bool q_udpsocket_wait_for_ready_read(void* self, int msecs);
bool q_udpsocket_qbase_wait_for_ready_read(void* self, int msecs);
void q_udpsocket_on_wait_for_ready_read(void* self, bool (*slot)(void*, int));
bool q_udpsocket_wait_for_bytes_written(void* self, int msecs);
bool q_udpsocket_qbase_wait_for_bytes_written(void* self, int msecs);
void q_udpsocket_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int));
bool q_udpsocket_wait_for_disconnected(void* self, int msecs);
bool q_udpsocket_qbase_wait_for_disconnected(void* self, int msecs);
void q_udpsocket_on_wait_for_disconnected(void* self, bool (*slot)(void*, int));
long long q_udpsocket_read_data(void* self, char* data, long long maxlen);
long long q_udpsocket_qbase_read_data(void* self, char* data, long long maxlen);
void q_udpsocket_on_read_data(void* self, long long (*slot)(void*, char*, long long));
long long q_udpsocket_read_line_data(void* self, char* data, long long maxlen);
long long q_udpsocket_qbase_read_line_data(void* self, char* data, long long maxlen);
void q_udpsocket_on_read_line_data(void* self, long long (*slot)(void*, char*, long long));
long long q_udpsocket_skip_data(void* self, long long maxSize);
long long q_udpsocket_qbase_skip_data(void* self, long long maxSize);
void q_udpsocket_on_skip_data(void* self, long long (*slot)(void*, long long));
long long q_udpsocket_write_data(void* self, const char* data, long long lenVal);
long long q_udpsocket_qbase_write_data(void* self, const char* data, long long lenVal);
void q_udpsocket_on_write_data(void* self, long long (*slot)(void*, const char*, long long));
bool q_udpsocket_open(void* self, int64_t mode);
bool q_udpsocket_qbase_open(void* self, int64_t mode);
void q_udpsocket_on_open(void* self, bool (*slot)(void*, int64_t));
long long q_udpsocket_pos(void* self);
long long q_udpsocket_qbase_pos(void* self);
void q_udpsocket_on_pos(void* self, long long (*slot)());
long long q_udpsocket_size(void* self);
long long q_udpsocket_qbase_size(void* self);
void q_udpsocket_on_size(void* self, long long (*slot)());
bool q_udpsocket_seek(void* self, long long pos);
bool q_udpsocket_qbase_seek(void* self, long long pos);
void q_udpsocket_on_seek(void* self, bool (*slot)(void*, long long));
bool q_udpsocket_at_end(void* self);
bool q_udpsocket_qbase_at_end(void* self);
void q_udpsocket_on_at_end(void* self, bool (*slot)());
bool q_udpsocket_reset(void* self);
bool q_udpsocket_qbase_reset(void* self);
void q_udpsocket_on_reset(void* self, bool (*slot)());
bool q_udpsocket_can_read_line(void* self);
bool q_udpsocket_qbase_can_read_line(void* self);
void q_udpsocket_on_can_read_line(void* self, bool (*slot)());
bool q_udpsocket_event(void* self, void* event);
bool q_udpsocket_qbase_event(void* self, void* event);
void q_udpsocket_on_event(void* self, bool (*slot)(void*, void*));
bool q_udpsocket_event_filter(void* self, void* watched, void* event);
bool q_udpsocket_qbase_event_filter(void* self, void* watched, void* event);
void q_udpsocket_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_udpsocket_timer_event(void* self, void* event);
void q_udpsocket_qbase_timer_event(void* self, void* event);
void q_udpsocket_on_timer_event(void* self, void (*slot)(void*, void*));
void q_udpsocket_child_event(void* self, void* event);
void q_udpsocket_qbase_child_event(void* self, void* event);
void q_udpsocket_on_child_event(void* self, void (*slot)(void*, void*));
void q_udpsocket_custom_event(void* self, void* event);
void q_udpsocket_qbase_custom_event(void* self, void* event);
void q_udpsocket_on_custom_event(void* self, void (*slot)(void*, void*));
void q_udpsocket_connect_notify(void* self, void* signal);
void q_udpsocket_qbase_connect_notify(void* self, void* signal);
void q_udpsocket_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_udpsocket_disconnect_notify(void* self, void* signal);
void q_udpsocket_qbase_disconnect_notify(void* self, void* signal);
void q_udpsocket_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_udpsocket_set_socket_state(void* self, int64_t state);
void q_udpsocket_qbase_set_socket_state(void* self, int64_t state);
void q_udpsocket_on_set_socket_state(void* self, void (*slot)(void*, int64_t));
void q_udpsocket_set_socket_error(void* self, int64_t socketError);
void q_udpsocket_qbase_set_socket_error(void* self, int64_t socketError);
void q_udpsocket_on_set_socket_error(void* self, void (*slot)(void*, int64_t));
void q_udpsocket_set_local_port(void* self, unsigned short port);
void q_udpsocket_qbase_set_local_port(void* self, unsigned short port);
void q_udpsocket_on_set_local_port(void* self, void (*slot)(void*, unsigned short));
void q_udpsocket_set_local_address(void* self, void* address);
void q_udpsocket_qbase_set_local_address(void* self, void* address);
void q_udpsocket_on_set_local_address(void* self, void (*slot)(void*, void*));
void q_udpsocket_set_peer_port(void* self, unsigned short port);
void q_udpsocket_qbase_set_peer_port(void* self, unsigned short port);
void q_udpsocket_on_set_peer_port(void* self, void (*slot)(void*, unsigned short));
void q_udpsocket_set_peer_address(void* self, void* address);
void q_udpsocket_qbase_set_peer_address(void* self, void* address);
void q_udpsocket_on_set_peer_address(void* self, void (*slot)(void*, void*));
void q_udpsocket_set_peer_name(void* self, const char* name);
void q_udpsocket_qbase_set_peer_name(void* self, const char* name);
void q_udpsocket_on_set_peer_name(void* self, void (*slot)(void*, const char*));
void q_udpsocket_set_open_mode(void* self, int64_t openMode);
void q_udpsocket_qbase_set_open_mode(void* self, int64_t openMode);
void q_udpsocket_on_set_open_mode(void* self, void (*slot)(void*, int64_t));
void q_udpsocket_set_error_string(void* self, const char* errorString);
void q_udpsocket_qbase_set_error_string(void* self, const char* errorString);
void q_udpsocket_on_set_error_string(void* self, void (*slot)(void*, const char*));
QObject* q_udpsocket_sender(void* self);
QObject* q_udpsocket_qbase_sender(void* self);
void q_udpsocket_on_sender(void* self, QObject* (*slot)());
int32_t q_udpsocket_sender_signal_index(void* self);
int32_t q_udpsocket_qbase_sender_signal_index(void* self);
void q_udpsocket_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_udpsocket_receivers(void* self, const char* signal);
int32_t q_udpsocket_qbase_receivers(void* self, const char* signal);
void q_udpsocket_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_udpsocket_is_signal_connected(void* self, void* signal);
bool q_udpsocket_qbase_is_signal_connected(void* self, void* signal);
void q_udpsocket_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_udpsocket_delete(void* self);

#endif
