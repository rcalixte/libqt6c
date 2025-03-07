#pragma once
#ifndef SRC_NETWORKQT6C_LIBQABSTRACTSOCKET_H
#define SRC_NETWORKQT6C_LIBQABSTRACTSOCKET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

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
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QAbstractSocket* q_abstractsocket_new(int64_t socketType, void* parent);
QMetaObject* q_abstractsocket_meta_object(void* self);
void* q_abstractsocket_metacast(void* self, const char* param1);
int32_t q_abstractsocket_metacall(void* self, int64_t param1, int param2, void* param3);
void q_abstractsocket_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_abstractsocket_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_abstractsocket_tr(const char* s);
void q_abstractsocket_resume(void* self);
void q_abstractsocket_on_resume(void* self, void (*slot)());
void q_abstractsocket_qbase_resume(void* self);
int64_t q_abstractsocket_pause_mode(void* self);
void q_abstractsocket_set_pause_mode(void* self, int64_t pauseMode);
bool q_abstractsocket_bind(void* self, void* address, unsigned short port, int64_t mode);
void q_abstractsocket_on_bind(void* self, bool (*slot)(void*, void*, unsigned short, int64_t));
bool q_abstractsocket_qbase_bind(void* self, void* address, unsigned short port, int64_t mode);
bool q_abstractsocket_bind2(void* self);
void q_abstractsocket_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol);
void q_abstractsocket_on_connect_to_host(void* self, void (*slot)(void*, const char*, unsigned short, int64_t, int64_t));
void q_abstractsocket_qbase_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol);
void q_abstractsocket_connect_to_host2(void* self, void* address, unsigned short port);
void q_abstractsocket_disconnect_from_host(void* self);
void q_abstractsocket_on_disconnect_from_host(void* self, void (*slot)());
void q_abstractsocket_qbase_disconnect_from_host(void* self);
bool q_abstractsocket_is_valid(void* self);
long long q_abstractsocket_bytes_available(void* self);
void q_abstractsocket_on_bytes_available(void* self, long long (*slot)());
long long q_abstractsocket_qbase_bytes_available(void* self);
long long q_abstractsocket_bytes_to_write(void* self);
void q_abstractsocket_on_bytes_to_write(void* self, long long (*slot)());
long long q_abstractsocket_qbase_bytes_to_write(void* self);
unsigned short q_abstractsocket_local_port(void* self);
QHostAddress* q_abstractsocket_local_address(void* self);
unsigned short q_abstractsocket_peer_port(void* self);
QHostAddress* q_abstractsocket_peer_address(void* self);
const char* q_abstractsocket_peer_name(void* self);
long long q_abstractsocket_read_buffer_size(void* self);
void q_abstractsocket_set_read_buffer_size(void* self, long long size);
void q_abstractsocket_on_set_read_buffer_size(void* self, void (*slot)(void*, long long));
void q_abstractsocket_qbase_set_read_buffer_size(void* self, long long size);
void q_abstractsocket_abort(void* self);
intptr_t q_abstractsocket_socket_descriptor(void* self);
void q_abstractsocket_on_socket_descriptor(void* self, intptr_t (*slot)());
intptr_t q_abstractsocket_qbase_socket_descriptor(void* self);
bool q_abstractsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode);
void q_abstractsocket_on_set_socket_descriptor(void* self, bool (*slot)(void*, intptr_t, int64_t, int64_t));
bool q_abstractsocket_qbase_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode);
void q_abstractsocket_set_socket_option(void* self, int64_t option, void* value);
void q_abstractsocket_on_set_socket_option(void* self, void (*slot)(void*, int64_t, void*));
void q_abstractsocket_qbase_set_socket_option(void* self, int64_t option, void* value);
QVariant* q_abstractsocket_socket_option(void* self, int64_t option);
void q_abstractsocket_on_socket_option(void* self, QVariant* (*slot)(void*, int64_t));
QVariant* q_abstractsocket_qbase_socket_option(void* self, int64_t option);
int64_t q_abstractsocket_socket_type(void* self);
int64_t q_abstractsocket_state(void* self);
int64_t q_abstractsocket_error(void* self);
void q_abstractsocket_close(void* self);
void q_abstractsocket_on_close(void* self, void (*slot)());
void q_abstractsocket_qbase_close(void* self);
bool q_abstractsocket_is_sequential(void* self);
void q_abstractsocket_on_is_sequential(void* self, bool (*slot)());
bool q_abstractsocket_qbase_is_sequential(void* self);
bool q_abstractsocket_flush(void* self);
bool q_abstractsocket_wait_for_connected(void* self, int msecs);
void q_abstractsocket_on_wait_for_connected(void* self, bool (*slot)(void*, int));
bool q_abstractsocket_qbase_wait_for_connected(void* self, int msecs);
bool q_abstractsocket_wait_for_ready_read(void* self, int msecs);
void q_abstractsocket_on_wait_for_ready_read(void* self, bool (*slot)(void*, int));
bool q_abstractsocket_qbase_wait_for_ready_read(void* self, int msecs);
bool q_abstractsocket_wait_for_bytes_written(void* self, int msecs);
void q_abstractsocket_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int));
bool q_abstractsocket_qbase_wait_for_bytes_written(void* self, int msecs);
bool q_abstractsocket_wait_for_disconnected(void* self, int msecs);
void q_abstractsocket_on_wait_for_disconnected(void* self, bool (*slot)(void*, int));
bool q_abstractsocket_qbase_wait_for_disconnected(void* self, int msecs);
void q_abstractsocket_set_proxy(void* self, void* networkProxy);
QNetworkProxy* q_abstractsocket_proxy(void* self);
const char* q_abstractsocket_protocol_tag(void* self);
void q_abstractsocket_set_protocol_tag(void* self, const char* tag);
void q_abstractsocket_host_found(void* self);
void q_abstractsocket_on_host_found(void* self, void (*slot)(void*));
void q_abstractsocket_connected(void* self);
void q_abstractsocket_on_connected(void* self, void (*slot)(void*));
void q_abstractsocket_disconnected(void* self);
void q_abstractsocket_on_disconnected(void* self, void (*slot)(void*));
void q_abstractsocket_state_changed(void* self, int64_t param1);
void q_abstractsocket_on_state_changed(void* self, void (*slot)(void*, int64_t));
void q_abstractsocket_error_occurred(void* self, int64_t param1);
void q_abstractsocket_on_error_occurred(void* self, void (*slot)(void*, int64_t));
void q_abstractsocket_proxy_authentication_required(void* self, void* proxy, void* authenticator);
void q_abstractsocket_on_proxy_authentication_required(void* self, void (*slot)(void*, void*, void*));
long long q_abstractsocket_read_data(void* self, char* data, long long maxlen);
void q_abstractsocket_on_read_data(void* self, long long (*slot)(void*, char*, long long));
long long q_abstractsocket_qbase_read_data(void* self, char* data, long long maxlen);
long long q_abstractsocket_read_line_data(void* self, char* data, long long maxlen);
void q_abstractsocket_on_read_line_data(void* self, long long (*slot)(void*, char*, long long));
long long q_abstractsocket_qbase_read_line_data(void* self, char* data, long long maxlen);
long long q_abstractsocket_skip_data(void* self, long long maxSize);
void q_abstractsocket_on_skip_data(void* self, long long (*slot)(void*, long long));
long long q_abstractsocket_qbase_skip_data(void* self, long long maxSize);
long long q_abstractsocket_write_data(void* self, const char* data, long long lenVal);
void q_abstractsocket_on_write_data(void* self, long long (*slot)(void*, const char*, long long));
long long q_abstractsocket_qbase_write_data(void* self, const char* data, long long lenVal);
void q_abstractsocket_set_socket_state(void* self, int64_t state);
void q_abstractsocket_on_set_socket_state(void* self, void (*slot)(void*, int64_t));
void q_abstractsocket_qbase_set_socket_state(void* self, int64_t state);
void q_abstractsocket_set_socket_error(void* self, int64_t socketError);
void q_abstractsocket_on_set_socket_error(void* self, void (*slot)(void*, int64_t));
void q_abstractsocket_qbase_set_socket_error(void* self, int64_t socketError);
void q_abstractsocket_set_local_port(void* self, unsigned short port);
void q_abstractsocket_on_set_local_port(void* self, void (*slot)(void*, unsigned short));
void q_abstractsocket_qbase_set_local_port(void* self, unsigned short port);
void q_abstractsocket_set_local_address(void* self, void* address);
void q_abstractsocket_on_set_local_address(void* self, void (*slot)(void*, void*));
void q_abstractsocket_qbase_set_local_address(void* self, void* address);
void q_abstractsocket_set_peer_port(void* self, unsigned short port);
void q_abstractsocket_on_set_peer_port(void* self, void (*slot)(void*, unsigned short));
void q_abstractsocket_qbase_set_peer_port(void* self, unsigned short port);
void q_abstractsocket_set_peer_address(void* self, void* address);
void q_abstractsocket_on_set_peer_address(void* self, void (*slot)(void*, void*));
void q_abstractsocket_qbase_set_peer_address(void* self, void* address);
void q_abstractsocket_set_peer_name(void* self, const char* name);
void q_abstractsocket_on_set_peer_name(void* self, void (*slot)(void*, const char*));
void q_abstractsocket_qbase_set_peer_name(void* self, const char* name);
const char* q_abstractsocket_tr2(const char* s, const char* c);
const char* q_abstractsocket_tr3(const char* s, const char* c, int n);
bool q_abstractsocket_bind1(void* self, unsigned short port);
bool q_abstractsocket_bind22(void* self, unsigned short port, int64_t mode);
void q_abstractsocket_connect_to_host3(void* self, void* address, unsigned short port, int64_t mode);
int64_t q_abstractsocket_open_mode(void* self);
void q_abstractsocket_set_text_mode_enabled(void* self, bool enabled);
bool q_abstractsocket_is_text_mode_enabled(void* self);
bool q_abstractsocket_is_open(void* self);
bool q_abstractsocket_is_readable(void* self);
bool q_abstractsocket_is_writable(void* self);
int32_t q_abstractsocket_read_channel_count(void* self);
int32_t q_abstractsocket_write_channel_count(void* self);
int32_t q_abstractsocket_current_read_channel(void* self);
void q_abstractsocket_set_current_read_channel(void* self, int channel);
int32_t q_abstractsocket_current_write_channel(void* self);
void q_abstractsocket_set_current_write_channel(void* self, int channel);
long long q_abstractsocket_read(void* self, char* data, long long maxlen);
char* q_abstractsocket_read_with_maxlen(void* self, long long maxlen);
char* q_abstractsocket_read_all(void* self);
long long q_abstractsocket_read_line(void* self, char* data, long long maxlen);
char* q_abstractsocket_read_line2(void* self);
void q_abstractsocket_start_transaction(void* self);
void q_abstractsocket_commit_transaction(void* self);
void q_abstractsocket_rollback_transaction(void* self);
bool q_abstractsocket_is_transaction_started(void* self);
long long q_abstractsocket_write(void* self, const char* data, long long lenVal);
long long q_abstractsocket_write_with_data(void* self, const char* data);
long long q_abstractsocket_write2(void* self, const char* data);
long long q_abstractsocket_peek(void* self, char* data, long long maxlen);
char* q_abstractsocket_peek_with_maxlen(void* self, long long maxlen);
long long q_abstractsocket_skip(void* self, long long maxSize);
void q_abstractsocket_unget_char(void* self, char c);
bool q_abstractsocket_put_char(void* self, char c);
bool q_abstractsocket_get_char(void* self, char* c);
const char* q_abstractsocket_error_string(void* self);
void q_abstractsocket_ready_read(void* self);
void q_abstractsocket_on_ready_read(void* self, void (*slot)(void*));
void q_abstractsocket_channel_ready_read(void* self, int channel);
void q_abstractsocket_on_channel_ready_read(void* self, void (*slot)(void*, int));
void q_abstractsocket_bytes_written(void* self, long long bytes);
void q_abstractsocket_on_bytes_written(void* self, void (*slot)(void*, long long));
void q_abstractsocket_channel_bytes_written(void* self, int channel, long long bytes);
void q_abstractsocket_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));
void q_abstractsocket_about_to_close(void* self);
void q_abstractsocket_on_about_to_close(void* self, void (*slot)(void*));
void q_abstractsocket_read_channel_finished(void* self);
void q_abstractsocket_on_read_channel_finished(void* self, void (*slot)(void*));
char* q_abstractsocket_read_line1(void* self, long long maxlen);
const char* q_abstractsocket_object_name(void* self);
void q_abstractsocket_set_object_name(void* self, const char* name);
bool q_abstractsocket_is_widget_type(void* self);
bool q_abstractsocket_is_window_type(void* self);
bool q_abstractsocket_is_quick_item_type(void* self);
bool q_abstractsocket_signals_blocked(void* self);
bool q_abstractsocket_block_signals(void* self, bool b);
QThread* q_abstractsocket_thread(void* self);
void q_abstractsocket_move_to_thread(void* self, void* thread);
int32_t q_abstractsocket_start_timer(void* self, int interval);
void q_abstractsocket_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_abstractsocket_children(void* self);
void q_abstractsocket_set_parent(void* self, void* parent);
void q_abstractsocket_install_event_filter(void* self, void* filterObj);
void q_abstractsocket_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_abstractsocket_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_abstractsocket_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_abstractsocket_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_abstractsocket_disconnect_with_q_meta_object_connection(void* param1);
void q_abstractsocket_dump_object_tree(void* self);
void q_abstractsocket_dump_object_info(void* self);
bool q_abstractsocket_set_property(void* self, const char* name, void* value);
QVariant* q_abstractsocket_property(void* self, const char* name);
const char** q_abstractsocket_dynamic_property_names(void* self);
QBindingStorage* q_abstractsocket_binding_storage(void* self);
QBindingStorage* q_abstractsocket_binding_storage2(void* self);
void q_abstractsocket_destroyed(void* self);
void q_abstractsocket_on_destroyed(void* self, void (*slot)(void*));
QObject* q_abstractsocket_parent(void* self);
bool q_abstractsocket_inherits(void* self, const char* classname);
void q_abstractsocket_delete_later(void* self);
int32_t q_abstractsocket_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_abstractsocket_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_abstractsocket_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_abstractsocket_destroyed1(void* self, void* param1);
void q_abstractsocket_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_abstractsocket_open(void* self, int64_t mode);
bool q_abstractsocket_qbase_open(void* self, int64_t mode);
void q_abstractsocket_on_open(void* self, bool (*slot)(void*, int64_t));
long long q_abstractsocket_pos(void* self);
long long q_abstractsocket_qbase_pos(void* self);
void q_abstractsocket_on_pos(void* self, long long (*slot)());
long long q_abstractsocket_size(void* self);
long long q_abstractsocket_qbase_size(void* self);
void q_abstractsocket_on_size(void* self, long long (*slot)());
bool q_abstractsocket_seek(void* self, long long pos);
bool q_abstractsocket_qbase_seek(void* self, long long pos);
void q_abstractsocket_on_seek(void* self, bool (*slot)(void*, long long));
bool q_abstractsocket_at_end(void* self);
bool q_abstractsocket_qbase_at_end(void* self);
void q_abstractsocket_on_at_end(void* self, bool (*slot)());
bool q_abstractsocket_reset(void* self);
bool q_abstractsocket_qbase_reset(void* self);
void q_abstractsocket_on_reset(void* self, bool (*slot)());
bool q_abstractsocket_can_read_line(void* self);
bool q_abstractsocket_qbase_can_read_line(void* self);
void q_abstractsocket_on_can_read_line(void* self, bool (*slot)());
bool q_abstractsocket_event(void* self, void* event);
bool q_abstractsocket_qbase_event(void* self, void* event);
void q_abstractsocket_on_event(void* self, bool (*slot)(void*, void*));
bool q_abstractsocket_event_filter(void* self, void* watched, void* event);
bool q_abstractsocket_qbase_event_filter(void* self, void* watched, void* event);
void q_abstractsocket_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_abstractsocket_timer_event(void* self, void* event);
void q_abstractsocket_qbase_timer_event(void* self, void* event);
void q_abstractsocket_on_timer_event(void* self, void (*slot)(void*, void*));
void q_abstractsocket_child_event(void* self, void* event);
void q_abstractsocket_qbase_child_event(void* self, void* event);
void q_abstractsocket_on_child_event(void* self, void (*slot)(void*, void*));
void q_abstractsocket_custom_event(void* self, void* event);
void q_abstractsocket_qbase_custom_event(void* self, void* event);
void q_abstractsocket_on_custom_event(void* self, void (*slot)(void*, void*));
void q_abstractsocket_connect_notify(void* self, void* signal);
void q_abstractsocket_qbase_connect_notify(void* self, void* signal);
void q_abstractsocket_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_abstractsocket_disconnect_notify(void* self, void* signal);
void q_abstractsocket_qbase_disconnect_notify(void* self, void* signal);
void q_abstractsocket_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_abstractsocket_set_open_mode(void* self, int64_t openMode);
void q_abstractsocket_qbase_set_open_mode(void* self, int64_t openMode);
void q_abstractsocket_on_set_open_mode(void* self, void (*slot)(void*, int64_t));
void q_abstractsocket_set_error_string(void* self, const char* errorString);
void q_abstractsocket_qbase_set_error_string(void* self, const char* errorString);
void q_abstractsocket_on_set_error_string(void* self, void (*slot)(void*, const char*));
QObject* q_abstractsocket_sender(void* self);
QObject* q_abstractsocket_qbase_sender(void* self);
void q_abstractsocket_on_sender(void* self, QObject* (*slot)());
int32_t q_abstractsocket_sender_signal_index(void* self);
int32_t q_abstractsocket_qbase_sender_signal_index(void* self);
void q_abstractsocket_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_abstractsocket_receivers(void* self, const char* signal);
int32_t q_abstractsocket_qbase_receivers(void* self, const char* signal);
void q_abstractsocket_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_abstractsocket_is_signal_connected(void* self, void* signal);
bool q_abstractsocket_qbase_is_signal_connected(void* self, void* signal);
void q_abstractsocket_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_abstractsocket_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractsocket.html#types

typedef enum {
    QABSTRACTSOCKET_SOCKETTYPE_TCPSOCKET = 0,
    QABSTRACTSOCKET_SOCKETTYPE_UDPSOCKET = 1,
    QABSTRACTSOCKET_SOCKETTYPE_SCTPSOCKET = 2,
    QABSTRACTSOCKET_SOCKETTYPE_UNKNOWNSOCKETTYPE = -1
} QAbstractSocket__SocketType;

typedef enum {
    QABSTRACTSOCKET_NETWORKLAYERPROTOCOL_IPV4PROTOCOL = 0,
    QABSTRACTSOCKET_NETWORKLAYERPROTOCOL_IPV6PROTOCOL = 1,
    QABSTRACTSOCKET_NETWORKLAYERPROTOCOL_ANYIPPROTOCOL = 2,
    QABSTRACTSOCKET_NETWORKLAYERPROTOCOL_UNKNOWNNETWORKLAYERPROTOCOL = -1
} QAbstractSocket__NetworkLayerProtocol;

typedef enum {
    QABSTRACTSOCKET_SOCKETERROR_CONNECTIONREFUSEDERROR = 0,
    QABSTRACTSOCKET_SOCKETERROR_REMOTEHOSTCLOSEDERROR = 1,
    QABSTRACTSOCKET_SOCKETERROR_HOSTNOTFOUNDERROR = 2,
    QABSTRACTSOCKET_SOCKETERROR_SOCKETACCESSERROR = 3,
    QABSTRACTSOCKET_SOCKETERROR_SOCKETRESOURCEERROR = 4,
    QABSTRACTSOCKET_SOCKETERROR_SOCKETTIMEOUTERROR = 5,
    QABSTRACTSOCKET_SOCKETERROR_DATAGRAMTOOLARGEERROR = 6,
    QABSTRACTSOCKET_SOCKETERROR_NETWORKERROR = 7,
    QABSTRACTSOCKET_SOCKETERROR_ADDRESSINUSEERROR = 8,
    QABSTRACTSOCKET_SOCKETERROR_SOCKETADDRESSNOTAVAILABLEERROR = 9,
    QABSTRACTSOCKET_SOCKETERROR_UNSUPPORTEDSOCKETOPERATIONERROR = 10,
    QABSTRACTSOCKET_SOCKETERROR_UNFINISHEDSOCKETOPERATIONERROR = 11,
    QABSTRACTSOCKET_SOCKETERROR_PROXYAUTHENTICATIONREQUIREDERROR = 12,
    QABSTRACTSOCKET_SOCKETERROR_SSLHANDSHAKEFAILEDERROR = 13,
    QABSTRACTSOCKET_SOCKETERROR_PROXYCONNECTIONREFUSEDERROR = 14,
    QABSTRACTSOCKET_SOCKETERROR_PROXYCONNECTIONCLOSEDERROR = 15,
    QABSTRACTSOCKET_SOCKETERROR_PROXYCONNECTIONTIMEOUTERROR = 16,
    QABSTRACTSOCKET_SOCKETERROR_PROXYNOTFOUNDERROR = 17,
    QABSTRACTSOCKET_SOCKETERROR_PROXYPROTOCOLERROR = 18,
    QABSTRACTSOCKET_SOCKETERROR_OPERATIONERROR = 19,
    QABSTRACTSOCKET_SOCKETERROR_SSLINTERNALERROR = 20,
    QABSTRACTSOCKET_SOCKETERROR_SSLINVALIDUSERDATAERROR = 21,
    QABSTRACTSOCKET_SOCKETERROR_TEMPORARYERROR = 22,
    QABSTRACTSOCKET_SOCKETERROR_UNKNOWNSOCKETERROR = -1
} QAbstractSocket__SocketError;

typedef enum {
    QABSTRACTSOCKET_SOCKETSTATE_UNCONNECTEDSTATE = 0,
    QABSTRACTSOCKET_SOCKETSTATE_HOSTLOOKUPSTATE = 1,
    QABSTRACTSOCKET_SOCKETSTATE_CONNECTINGSTATE = 2,
    QABSTRACTSOCKET_SOCKETSTATE_CONNECTEDSTATE = 3,
    QABSTRACTSOCKET_SOCKETSTATE_BOUNDSTATE = 4,
    QABSTRACTSOCKET_SOCKETSTATE_LISTENINGSTATE = 5,
    QABSTRACTSOCKET_SOCKETSTATE_CLOSINGSTATE = 6
} QAbstractSocket__SocketState;

typedef enum {
    QABSTRACTSOCKET_SOCKETOPTION_LOWDELAYOPTION = 0,
    QABSTRACTSOCKET_SOCKETOPTION_KEEPALIVEOPTION = 1,
    QABSTRACTSOCKET_SOCKETOPTION_MULTICASTTTLOPTION = 2,
    QABSTRACTSOCKET_SOCKETOPTION_MULTICASTLOOPBACKOPTION = 3,
    QABSTRACTSOCKET_SOCKETOPTION_TYPEOFSERVICEOPTION = 4,
    QABSTRACTSOCKET_SOCKETOPTION_SENDBUFFERSIZESOCKETOPTION = 5,
    QABSTRACTSOCKET_SOCKETOPTION_RECEIVEBUFFERSIZESOCKETOPTION = 6,
    QABSTRACTSOCKET_SOCKETOPTION_PATHMTUSOCKETOPTION = 7
} QAbstractSocket__SocketOption;

typedef enum {
    QABSTRACTSOCKET_BINDFLAG_DEFAULTFORPLATFORM = 0,
    QABSTRACTSOCKET_BINDFLAG_SHAREADDRESS = 1,
    QABSTRACTSOCKET_BINDFLAG_DONTSHAREADDRESS = 2,
    QABSTRACTSOCKET_BINDFLAG_REUSEADDRESSHINT = 4
} QAbstractSocket__BindFlag;

typedef enum {
    QABSTRACTSOCKET_PAUSEMODE_PAUSENEVER = 0,
    QABSTRACTSOCKET_PAUSEMODE_PAUSEONSSLERRORS = 1
} QAbstractSocket__PauseMode;

#endif
