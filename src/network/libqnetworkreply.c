#include "../libqanystringview.hpp"
#include "../libqbytearrayview.hpp"
#include "libqhttpheaders.hpp"
#include "../libqiodevice.hpp"
#include "../libqiodevicebase.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "libqnetworkaccessmanager.hpp"
#include "libqnetworkrequest.hpp"
#include "../libqobject.hpp"
#include "libqsslconfiguration.hpp"
#include "libqsslerror.hpp"
#include "libqsslpresharedkeyauthenticator.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libqnetworkreply.hpp"
#include "libqnetworkreply.h"

const QMetaObject* q_networkreply_meta_object(void* self) {
    return QNetworkReply_MetaObject((QNetworkReply*)self);
}

void* q_networkreply_metacast(void* self, const char* param1) {
    return QNetworkReply_Metacast((QNetworkReply*)self, param1);
}

int32_t q_networkreply_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QNetworkReply_Metacall((QNetworkReply*)self, param1, param2, param3);
}

const char* q_networkreply_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_networkreply_close(void* self) {
    QNetworkReply_Close((QNetworkReply*)self);
}

bool q_networkreply_is_sequential(void* self) {
    return QNetworkReply_IsSequential((QNetworkReply*)self);
}

long long q_networkreply_read_buffer_size(void* self) {
    return QNetworkReply_ReadBufferSize((QNetworkReply*)self);
}

void q_networkreply_set_read_buffer_size(void* self, long long size) {
    QNetworkReply_SetReadBufferSize((QNetworkReply*)self, size);
}

QNetworkAccessManager* q_networkreply_manager(void* self) {
    return QNetworkReply_Manager((QNetworkReply*)self);
}

int32_t q_networkreply_operation(void* self) {
    return QNetworkReply_Operation((QNetworkReply*)self);
}

QNetworkRequest* q_networkreply_request(void* self) {
    return QNetworkReply_Request((QNetworkReply*)self);
}

int32_t q_networkreply_error(void* self) {
    return QNetworkReply_Error((QNetworkReply*)self);
}

bool q_networkreply_is_finished(void* self) {
    return QNetworkReply_IsFinished((QNetworkReply*)self);
}

bool q_networkreply_is_running(void* self) {
    return QNetworkReply_IsRunning((QNetworkReply*)self);
}

QUrl* q_networkreply_url(void* self) {
    return QNetworkReply_Url((QNetworkReply*)self);
}

QVariant* q_networkreply_header(void* self, int32_t header) {
    return QNetworkReply_Header((QNetworkReply*)self, header);
}

bool q_networkreply_has_raw_header(void* self, const char* headerName) {
    return QNetworkReply_HasRawHeader((QNetworkReply*)self, headerName);
}

const char** q_networkreply_raw_header_list(void* self) {
    libqt_list _arr = QNetworkReply_RawHeaderList((QNetworkReply*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_networkreply_raw_header_list\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

char* q_networkreply_raw_header(void* self, const char* headerName) {
    libqt_string _str = QNetworkReply_RawHeader((QNetworkReply*)self, headerName);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of libqt_pair tuple of char* and char* */ q_networkreply_raw_header_pairs(void* self) {
    libqt_list _arr = QNetworkReply_RawHeaderPairs((QNetworkReply*)self);
    libqt_pair* _data = (libqt_pair*)_arr.data.ptr;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string* _first_str = (libqt_string*)_data[i].first;
        const char* _first_str_data = _first_str->data;
        libqt_string* _second_str = (libqt_string*)_data[i].second;
        const char* _second_str_data = _second_str->data;
        free(_first_str);
        free(_second_str);
        _data[i].first = (void*)_first_str_data;
        _data[i].second = (void*)_second_str_data;
    }
    return _arr;
}

QHttpHeaders* q_networkreply_headers(void* self) {
    return QNetworkReply_Headers((QNetworkReply*)self);
}

QVariant* q_networkreply_attribute(void* self, int32_t code) {
    return QNetworkReply_Attribute((QNetworkReply*)self, code);
}

QSslConfiguration* q_networkreply_ssl_configuration(void* self) {
    return QNetworkReply_SslConfiguration((QNetworkReply*)self);
}

void q_networkreply_set_ssl_configuration(void* self, void* configuration) {
    QNetworkReply_SetSslConfiguration((QNetworkReply*)self, (QSslConfiguration*)configuration);
}

void q_networkreply_ignore_ssl_errors(void* self, libqt_list /* of QSslError* */ errors) {
    QNetworkReply_IgnoreSslErrors((QNetworkReply*)self, errors);
}

void q_networkreply_abort(void* self) {
    QNetworkReply_Abort((QNetworkReply*)self);
}

void q_networkreply_ignore_ssl_errors2(void* self) {
    QNetworkReply_IgnoreSslErrors2((QNetworkReply*)self);
}

void q_networkreply_socket_started_connecting(void* self) {
    QNetworkReply_SocketStartedConnecting((QNetworkReply*)self);
}

void q_networkreply_on_socket_started_connecting(void* self, void (*callback)(void*)) {
    QNetworkReply_Connect_SocketStartedConnecting((QNetworkReply*)self, (intptr_t)callback);
}

void q_networkreply_request_sent(void* self) {
    QNetworkReply_RequestSent((QNetworkReply*)self);
}

void q_networkreply_on_request_sent(void* self, void (*callback)(void*)) {
    QNetworkReply_Connect_RequestSent((QNetworkReply*)self, (intptr_t)callback);
}

void q_networkreply_meta_data_changed(void* self) {
    QNetworkReply_MetaDataChanged((QNetworkReply*)self);
}

void q_networkreply_on_meta_data_changed(void* self, void (*callback)(void*)) {
    QNetworkReply_Connect_MetaDataChanged((QNetworkReply*)self, (intptr_t)callback);
}

void q_networkreply_finished(void* self) {
    QNetworkReply_Finished((QNetworkReply*)self);
}

void q_networkreply_on_finished(void* self, void (*callback)(void*)) {
    QNetworkReply_Connect_Finished((QNetworkReply*)self, (intptr_t)callback);
}

void q_networkreply_error_occurred(void* self, int32_t param1) {
    QNetworkReply_ErrorOccurred((QNetworkReply*)self, param1);
}

void q_networkreply_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QNetworkReply_Connect_ErrorOccurred((QNetworkReply*)self, (intptr_t)callback);
}

void q_networkreply_encrypted(void* self) {
    QNetworkReply_Encrypted((QNetworkReply*)self);
}

void q_networkreply_on_encrypted(void* self, void (*callback)(void*)) {
    QNetworkReply_Connect_Encrypted((QNetworkReply*)self, (intptr_t)callback);
}

void q_networkreply_ssl_errors(void* self, libqt_list /* of QSslError* */ errors) {
    QNetworkReply_SslErrors((QNetworkReply*)self, errors);
}

void q_networkreply_on_ssl_errors(void* self, void (*callback)(void*, libqt_list /* of QSslError* */)) {
    QNetworkReply_Connect_SslErrors((QNetworkReply*)self, (intptr_t)callback);
}

void q_networkreply_pre_shared_key_authentication_required(void* self, void* authenticator) {
    QNetworkReply_PreSharedKeyAuthenticationRequired((QNetworkReply*)self, (QSslPreSharedKeyAuthenticator*)authenticator);
}

void q_networkreply_on_pre_shared_key_authentication_required(void* self, void (*callback)(void*, void*)) {
    QNetworkReply_Connect_PreSharedKeyAuthenticationRequired((QNetworkReply*)self, (intptr_t)callback);
}

void q_networkreply_redirected(void* self, void* url) {
    QNetworkReply_Redirected((QNetworkReply*)self, (QUrl*)url);
}

void q_networkreply_on_redirected(void* self, void (*callback)(void*, void*)) {
    QNetworkReply_Connect_Redirected((QNetworkReply*)self, (intptr_t)callback);
}

void q_networkreply_redirect_allowed(void* self) {
    QNetworkReply_RedirectAllowed((QNetworkReply*)self);
}

void q_networkreply_on_redirect_allowed(void* self, void (*callback)(void*)) {
    QNetworkReply_Connect_RedirectAllowed((QNetworkReply*)self, (intptr_t)callback);
}

void q_networkreply_upload_progress(void* self, long long bytesSent, long long bytesTotal) {
    QNetworkReply_UploadProgress((QNetworkReply*)self, bytesSent, bytesTotal);
}

void q_networkreply_on_upload_progress(void* self, void (*callback)(void*, long long, long long)) {
    QNetworkReply_Connect_UploadProgress((QNetworkReply*)self, (intptr_t)callback);
}

void q_networkreply_download_progress(void* self, long long bytesReceived, long long bytesTotal) {
    QNetworkReply_DownloadProgress((QNetworkReply*)self, bytesReceived, bytesTotal);
}

void q_networkreply_on_download_progress(void* self, void (*callback)(void*, long long, long long)) {
    QNetworkReply_Connect_DownloadProgress((QNetworkReply*)self, (intptr_t)callback);
}

const char* q_networkreply_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_networkreply_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_networkreply_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

void q_networkreply_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

bool q_networkreply_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

bool q_networkreply_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

bool q_networkreply_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

bool q_networkreply_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

int32_t q_networkreply_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

int32_t q_networkreply_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

int32_t q_networkreply_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

void q_networkreply_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

int32_t q_networkreply_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

void q_networkreply_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

bool q_networkreply_open(void* self, int32_t mode) {
    return QIODevice_Open((QIODevice*)self, mode);
}

long long q_networkreply_pos(void* self) {
    return QIODevice_Pos((QIODevice*)self);
}

long long q_networkreply_size(void* self) {
    return QIODevice_Size((QIODevice*)self);
}

bool q_networkreply_seek(void* self, long long pos) {
    return QIODevice_Seek((QIODevice*)self, pos);
}

bool q_networkreply_at_end(void* self) {
    return QIODevice_AtEnd((QIODevice*)self);
}

bool q_networkreply_reset(void* self) {
    return QIODevice_Reset((QIODevice*)self);
}

long long q_networkreply_bytes_available(void* self) {
    return QIODevice_BytesAvailable((QIODevice*)self);
}

long long q_networkreply_bytes_to_write(void* self) {
    return QIODevice_BytesToWrite((QIODevice*)self);
}

long long q_networkreply_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

char* q_networkreply_read2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Read2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_networkreply_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_networkreply_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

char* q_networkreply_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_networkreply_can_read_line(void* self) {
    return QIODevice_CanReadLine((QIODevice*)self);
}

void q_networkreply_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

void q_networkreply_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

void q_networkreply_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

bool q_networkreply_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

long long q_networkreply_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

long long q_networkreply_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, data);
}

long long q_networkreply_write3(void* self, char* data) {
    return QIODevice_Write3((QIODevice*)self, qstring(data));
}

long long q_networkreply_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

char* q_networkreply_peek2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Peek2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_networkreply_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

bool q_networkreply_wait_for_ready_read(void* self, int msecs) {
    return QIODevice_WaitForReadyRead((QIODevice*)self, msecs);
}

bool q_networkreply_wait_for_bytes_written(void* self, int msecs) {
    return QIODevice_WaitForBytesWritten((QIODevice*)self, msecs);
}

void q_networkreply_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

bool q_networkreply_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

bool q_networkreply_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

const char* q_networkreply_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_networkreply_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

void q_networkreply_on_ready_read(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_networkreply_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

void q_networkreply_on_channel_ready_read(void* self, void (*callback)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_networkreply_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

void q_networkreply_on_bytes_written(void* self, void (*callback)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_networkreply_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

void q_networkreply_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_networkreply_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

void q_networkreply_on_about_to_close(void* self, void (*callback)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)callback);
}

void q_networkreply_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

void q_networkreply_on_read_channel_finished(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)callback);
}

char* q_networkreply_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_networkreply_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_networkreply_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_networkreply_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_networkreply_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_networkreply_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_networkreply_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_networkreply_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_networkreply_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_networkreply_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_networkreply_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_networkreply_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_networkreply_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_networkreply_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_networkreply_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_networkreply_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_networkreply_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_networkreply_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_networkreply_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_networkreply_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_networkreply_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_networkreply_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_networkreply_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_networkreply_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_networkreply_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_networkreply_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_networkreply_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_networkreply_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_networkreply_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_networkreply_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_networkreply_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_networkreply_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_networkreply_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_networkreply_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_networkreply_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_networkreply_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_networkreply_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_networkreply_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_networkreply_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_networkreply_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_networkreply_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_networkreply_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_networkreply_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_networkreply_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_networkreply_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_networkreply_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_networkreply_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_networkreply_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_networkreply_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_networkreply_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_networkreply_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_networkreply_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_networkreply_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_networkreply_delete(void* self) {
    QNetworkReply_Delete((QNetworkReply*)(self));
}
