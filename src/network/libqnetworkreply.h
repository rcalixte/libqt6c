#pragma once
#ifndef SRC_NETWORKQT6C_LIBQNETWORKREPLY_H
#define SRC_NETWORKQT6C_LIBQNETWORKREPLY_H

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
#include "libqnetworkaccessmanager.h"
#include "libqnetworkrequest.h"
#include "../libqobject.h"
#include "libqsslconfiguration.h"
#include "libqsslerror.h"
#include "libqsslpresharedkeyauthenticator.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqurl.h"
#include "../libqvariant.h"

QMetaObject* q_networkreply_meta_object(void* self);
void* q_networkreply_metacast(void* self, const char* param1);
int32_t q_networkreply_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_networkreply_tr(const char* s);
void q_networkreply_close(void* self);
bool q_networkreply_is_sequential(void* self);
long long q_networkreply_read_buffer_size(void* self);
void q_networkreply_set_read_buffer_size(void* self, long long size);
QNetworkAccessManager* q_networkreply_manager(void* self);
int64_t q_networkreply_operation(void* self);
QNetworkRequest* q_networkreply_request(void* self);
int64_t q_networkreply_error(void* self);
bool q_networkreply_is_finished(void* self);
bool q_networkreply_is_running(void* self);
QUrl* q_networkreply_url(void* self);
QVariant* q_networkreply_header(void* self, int64_t header);
bool q_networkreply_has_raw_header(void* self, const char* headerName);
const char** q_networkreply_raw_header_list(void* self);
char* q_networkreply_raw_header(void* self, const char* headerName);
libqt_list /* of libqt_pair  tuple of char* and char*  */ q_networkreply_raw_header_pairs(void* self);
QVariant* q_networkreply_attribute(void* self, int64_t code);
QSslConfiguration* q_networkreply_ssl_configuration(void* self);
void q_networkreply_set_ssl_configuration(void* self, void* configuration);
void q_networkreply_ignore_ssl_errors(void* self, void* errors[]);
void q_networkreply_abort(void* self);
void q_networkreply_ignore_ssl_errors2(void* self);
void q_networkreply_socket_started_connecting(void* self);
void q_networkreply_on_socket_started_connecting(void* self, void (*slot)(void*));
void q_networkreply_request_sent(void* self);
void q_networkreply_on_request_sent(void* self, void (*slot)(void*));
void q_networkreply_meta_data_changed(void* self);
void q_networkreply_on_meta_data_changed(void* self, void (*slot)(void*));
void q_networkreply_finished(void* self);
void q_networkreply_on_finished(void* self, void (*slot)(void*));
void q_networkreply_error_occurred(void* self, int64_t param1);
void q_networkreply_on_error_occurred(void* self, void (*slot)(void*, int64_t));
void q_networkreply_encrypted(void* self);
void q_networkreply_on_encrypted(void* self, void (*slot)(void*));
void q_networkreply_ssl_errors(void* self, void* errors[]);
void q_networkreply_on_ssl_errors(void* self, void (*slot)(void*, void*));
void q_networkreply_pre_shared_key_authentication_required(void* self, void* authenticator);
void q_networkreply_on_pre_shared_key_authentication_required(void* self, void (*slot)(void*, void*));
void q_networkreply_redirected(void* self, void* url);
void q_networkreply_on_redirected(void* self, void (*slot)(void*, void*));
void q_networkreply_redirect_allowed(void* self);
void q_networkreply_on_redirect_allowed(void* self, void (*slot)(void*));
void q_networkreply_upload_progress(void* self, long long bytesSent, long long bytesTotal);
void q_networkreply_on_upload_progress(void* self, void (*slot)(void*, long long, long long));
void q_networkreply_download_progress(void* self, long long bytesReceived, long long bytesTotal);
void q_networkreply_on_download_progress(void* self, void (*slot)(void*, long long, long long));
const char* q_networkreply_tr2(const char* s, const char* c);
const char* q_networkreply_tr3(const char* s, const char* c, int n);
int64_t q_networkreply_open_mode(void* self);
void q_networkreply_set_text_mode_enabled(void* self, bool enabled);
bool q_networkreply_is_text_mode_enabled(void* self);
bool q_networkreply_is_open(void* self);
bool q_networkreply_is_readable(void* self);
bool q_networkreply_is_writable(void* self);
int32_t q_networkreply_read_channel_count(void* self);
int32_t q_networkreply_write_channel_count(void* self);
int32_t q_networkreply_current_read_channel(void* self);
void q_networkreply_set_current_read_channel(void* self, int channel);
int32_t q_networkreply_current_write_channel(void* self);
void q_networkreply_set_current_write_channel(void* self, int channel);
bool q_networkreply_open(void* self, int64_t mode);
long long q_networkreply_pos(void* self);
long long q_networkreply_size(void* self);
bool q_networkreply_seek(void* self, long long pos);
bool q_networkreply_at_end(void* self);
bool q_networkreply_reset(void* self);
long long q_networkreply_bytes_available(void* self);
long long q_networkreply_bytes_to_write(void* self);
long long q_networkreply_read(void* self, char* data, long long maxlen);
char* q_networkreply_read_with_maxlen(void* self, long long maxlen);
char* q_networkreply_read_all(void* self);
long long q_networkreply_read_line(void* self, char* data, long long maxlen);
char* q_networkreply_read_line2(void* self);
bool q_networkreply_can_read_line(void* self);
void q_networkreply_start_transaction(void* self);
void q_networkreply_commit_transaction(void* self);
void q_networkreply_rollback_transaction(void* self);
bool q_networkreply_is_transaction_started(void* self);
long long q_networkreply_write(void* self, const char* data, long long lenVal);
long long q_networkreply_write_with_data(void* self, const char* data);
long long q_networkreply_write2(void* self, const char* data);
long long q_networkreply_peek(void* self, char* data, long long maxlen);
char* q_networkreply_peek_with_maxlen(void* self, long long maxlen);
long long q_networkreply_skip(void* self, long long maxSize);
bool q_networkreply_wait_for_ready_read(void* self, int msecs);
bool q_networkreply_wait_for_bytes_written(void* self, int msecs);
void q_networkreply_unget_char(void* self, char c);
bool q_networkreply_put_char(void* self, char c);
bool q_networkreply_get_char(void* self, char* c);
const char* q_networkreply_error_string(void* self);
void q_networkreply_ready_read(void* self);
void q_networkreply_on_ready_read(void* self, void (*slot)(void*));
void q_networkreply_channel_ready_read(void* self, int channel);
void q_networkreply_on_channel_ready_read(void* self, void (*slot)(void*, int));
void q_networkreply_bytes_written(void* self, long long bytes);
void q_networkreply_on_bytes_written(void* self, void (*slot)(void*, long long));
void q_networkreply_channel_bytes_written(void* self, int channel, long long bytes);
void q_networkreply_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));
void q_networkreply_about_to_close(void* self);
void q_networkreply_on_about_to_close(void* self, void (*slot)(void*));
void q_networkreply_read_channel_finished(void* self);
void q_networkreply_on_read_channel_finished(void* self, void (*slot)(void*));
char* q_networkreply_read_line1(void* self, long long maxlen);
bool q_networkreply_event(void* self, void* event);
bool q_networkreply_event_filter(void* self, void* watched, void* event);
const char* q_networkreply_object_name(void* self);
void q_networkreply_set_object_name(void* self, const char* name);
bool q_networkreply_is_widget_type(void* self);
bool q_networkreply_is_window_type(void* self);
bool q_networkreply_is_quick_item_type(void* self);
bool q_networkreply_signals_blocked(void* self);
bool q_networkreply_block_signals(void* self, bool b);
QThread* q_networkreply_thread(void* self);
void q_networkreply_move_to_thread(void* self, void* thread);
int32_t q_networkreply_start_timer(void* self, int interval);
void q_networkreply_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_networkreply_children(void* self);
void q_networkreply_set_parent(void* self, void* parent);
void q_networkreply_install_event_filter(void* self, void* filterObj);
void q_networkreply_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_networkreply_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_networkreply_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_networkreply_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_networkreply_disconnect_with_q_meta_object_connection(void* param1);
void q_networkreply_dump_object_tree(void* self);
void q_networkreply_dump_object_info(void* self);
bool q_networkreply_set_property(void* self, const char* name, void* value);
QVariant* q_networkreply_property(void* self, const char* name);
const char** q_networkreply_dynamic_property_names(void* self);
QBindingStorage* q_networkreply_binding_storage(void* self);
QBindingStorage* q_networkreply_binding_storage2(void* self);
void q_networkreply_destroyed(void* self);
void q_networkreply_on_destroyed(void* self, void (*slot)(void*));
QObject* q_networkreply_parent(void* self);
bool q_networkreply_inherits(void* self, const char* classname);
void q_networkreply_delete_later(void* self);
int32_t q_networkreply_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_networkreply_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_networkreply_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_networkreply_destroyed1(void* self, void* param1);
void q_networkreply_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_networkreply_delete(void* self);

/// https://doc.qt.io/qt-6/qnetworkreply.html#types

typedef enum {
    QNETWORKREPLY_NETWORKERROR_NOERROR = 0,
    QNETWORKREPLY_NETWORKERROR_CONNECTIONREFUSEDERROR = 1,
    QNETWORKREPLY_NETWORKERROR_REMOTEHOSTCLOSEDERROR = 2,
    QNETWORKREPLY_NETWORKERROR_HOSTNOTFOUNDERROR = 3,
    QNETWORKREPLY_NETWORKERROR_TIMEOUTERROR = 4,
    QNETWORKREPLY_NETWORKERROR_OPERATIONCANCELEDERROR = 5,
    QNETWORKREPLY_NETWORKERROR_SSLHANDSHAKEFAILEDERROR = 6,
    QNETWORKREPLY_NETWORKERROR_TEMPORARYNETWORKFAILUREERROR = 7,
    QNETWORKREPLY_NETWORKERROR_NETWORKSESSIONFAILEDERROR = 8,
    QNETWORKREPLY_NETWORKERROR_BACKGROUNDREQUESTNOTALLOWEDERROR = 9,
    QNETWORKREPLY_NETWORKERROR_TOOMANYREDIRECTSERROR = 10,
    QNETWORKREPLY_NETWORKERROR_INSECUREREDIRECTERROR = 11,
    QNETWORKREPLY_NETWORKERROR_UNKNOWNNETWORKERROR = 99,
    QNETWORKREPLY_NETWORKERROR_PROXYCONNECTIONREFUSEDERROR = 101,
    QNETWORKREPLY_NETWORKERROR_PROXYCONNECTIONCLOSEDERROR = 102,
    QNETWORKREPLY_NETWORKERROR_PROXYNOTFOUNDERROR = 103,
    QNETWORKREPLY_NETWORKERROR_PROXYTIMEOUTERROR = 104,
    QNETWORKREPLY_NETWORKERROR_PROXYAUTHENTICATIONREQUIREDERROR = 105,
    QNETWORKREPLY_NETWORKERROR_UNKNOWNPROXYERROR = 199,
    QNETWORKREPLY_NETWORKERROR_CONTENTACCESSDENIED = 201,
    QNETWORKREPLY_NETWORKERROR_CONTENTOPERATIONNOTPERMITTEDERROR = 202,
    QNETWORKREPLY_NETWORKERROR_CONTENTNOTFOUNDERROR = 203,
    QNETWORKREPLY_NETWORKERROR_AUTHENTICATIONREQUIREDERROR = 204,
    QNETWORKREPLY_NETWORKERROR_CONTENTRESENDERROR = 205,
    QNETWORKREPLY_NETWORKERROR_CONTENTCONFLICTERROR = 206,
    QNETWORKREPLY_NETWORKERROR_CONTENTGONEERROR = 207,
    QNETWORKREPLY_NETWORKERROR_UNKNOWNCONTENTERROR = 299,
    QNETWORKREPLY_NETWORKERROR_PROTOCOLUNKNOWNERROR = 301,
    QNETWORKREPLY_NETWORKERROR_PROTOCOLINVALIDOPERATIONERROR = 302,
    QNETWORKREPLY_NETWORKERROR_PROTOCOLFAILURE = 399,
    QNETWORKREPLY_NETWORKERROR_INTERNALSERVERERROR = 401,
    QNETWORKREPLY_NETWORKERROR_OPERATIONNOTIMPLEMENTEDERROR = 402,
    QNETWORKREPLY_NETWORKERROR_SERVICEUNAVAILABLEERROR = 403,
    QNETWORKREPLY_NETWORKERROR_UNKNOWNSERVERERROR = 499
} QNetworkReply__NetworkError;

#endif
