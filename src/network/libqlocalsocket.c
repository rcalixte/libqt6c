#include "../libqevent.hpp"
#include "../libqiodevice.hpp"
#include "../libqiodevicebase.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqcoreevent.hpp"
#include "libqlocalsocket.hpp"
#include "libqlocalsocket.h"

QLocalSocket* q_localsocket_new() {
    return QLocalSocket_new();
}

QLocalSocket* q_localsocket_new2(void* parent) {
    return QLocalSocket_new2((QObject*)parent);
}

const QMetaObject* q_localsocket_meta_object(void* self) {
    return QLocalSocket_MetaObject((QLocalSocket*)self);
}

void* q_localsocket_metacast(void* self, const char* param1) {
    return QLocalSocket_Metacast((QLocalSocket*)self, param1);
}

int32_t q_localsocket_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QLocalSocket_Metacall((QLocalSocket*)self, param1, param2, param3);
}

void q_localsocket_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QLocalSocket_OnMetacall((QLocalSocket*)self, (intptr_t)slot);
}

int32_t q_localsocket_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QLocalSocket_QBaseMetacall((QLocalSocket*)self, param1, param2, param3);
}

const char* q_localsocket_tr(const char* s) {
    libqt_string _str = QLocalSocket_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_localsocket_connect_to_server(void* self) {
    QLocalSocket_ConnectToServer((QLocalSocket*)self);
}

void q_localsocket_connect_to_server_with_name(void* self, const char* name) {
    QLocalSocket_ConnectToServerWithName((QLocalSocket*)self, qstring(name));
}

void q_localsocket_disconnect_from_server(void* self) {
    QLocalSocket_DisconnectFromServer((QLocalSocket*)self);
}

void q_localsocket_set_server_name(void* self, const char* name) {
    QLocalSocket_SetServerName((QLocalSocket*)self, qstring(name));
}

const char* q_localsocket_server_name(void* self) {
    libqt_string _str = QLocalSocket_ServerName((QLocalSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_localsocket_full_server_name(void* self) {
    libqt_string _str = QLocalSocket_FullServerName((QLocalSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_localsocket_abort(void* self) {
    QLocalSocket_Abort((QLocalSocket*)self);
}

bool q_localsocket_is_sequential(void* self) {
    return QLocalSocket_IsSequential((QLocalSocket*)self);
}

void q_localsocket_on_is_sequential(void* self, bool (*slot)()) {
    QLocalSocket_OnIsSequential((QLocalSocket*)self, (intptr_t)slot);
}

bool q_localsocket_qbase_is_sequential(void* self) {
    return QLocalSocket_QBaseIsSequential((QLocalSocket*)self);
}

long long q_localsocket_bytes_available(void* self) {
    return QLocalSocket_BytesAvailable((QLocalSocket*)self);
}

void q_localsocket_on_bytes_available(void* self, long long (*slot)()) {
    QLocalSocket_OnBytesAvailable((QLocalSocket*)self, (intptr_t)slot);
}

long long q_localsocket_qbase_bytes_available(void* self) {
    return QLocalSocket_QBaseBytesAvailable((QLocalSocket*)self);
}

long long q_localsocket_bytes_to_write(void* self) {
    return QLocalSocket_BytesToWrite((QLocalSocket*)self);
}

void q_localsocket_on_bytes_to_write(void* self, long long (*slot)()) {
    QLocalSocket_OnBytesToWrite((QLocalSocket*)self, (intptr_t)slot);
}

long long q_localsocket_qbase_bytes_to_write(void* self) {
    return QLocalSocket_QBaseBytesToWrite((QLocalSocket*)self);
}

bool q_localsocket_can_read_line(void* self) {
    return QLocalSocket_CanReadLine((QLocalSocket*)self);
}

void q_localsocket_on_can_read_line(void* self, bool (*slot)()) {
    QLocalSocket_OnCanReadLine((QLocalSocket*)self, (intptr_t)slot);
}

bool q_localsocket_qbase_can_read_line(void* self) {
    return QLocalSocket_QBaseCanReadLine((QLocalSocket*)self);
}

bool q_localsocket_open(void* self, int64_t openMode) {
    return QLocalSocket_Open((QLocalSocket*)self, openMode);
}

void q_localsocket_on_open(void* self, bool (*slot)(void*, int64_t)) {
    QLocalSocket_OnOpen((QLocalSocket*)self, (intptr_t)slot);
}

bool q_localsocket_qbase_open(void* self, int64_t openMode) {
    return QLocalSocket_QBaseOpen((QLocalSocket*)self, openMode);
}

void q_localsocket_close(void* self) {
    QLocalSocket_Close((QLocalSocket*)self);
}

void q_localsocket_on_close(void* self, void (*slot)()) {
    QLocalSocket_OnClose((QLocalSocket*)self, (intptr_t)slot);
}

void q_localsocket_qbase_close(void* self) {
    QLocalSocket_QBaseClose((QLocalSocket*)self);
}

int64_t q_localsocket_error(void* self) {
    return QLocalSocket_Error((QLocalSocket*)self);
}

bool q_localsocket_flush(void* self) {
    return QLocalSocket_Flush((QLocalSocket*)self);
}

bool q_localsocket_is_valid(void* self) {
    return QLocalSocket_IsValid((QLocalSocket*)self);
}

long long q_localsocket_read_buffer_size(void* self) {
    return QLocalSocket_ReadBufferSize((QLocalSocket*)self);
}

void q_localsocket_set_read_buffer_size(void* self, long long size) {
    QLocalSocket_SetReadBufferSize((QLocalSocket*)self, size);
}

bool q_localsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor) {
    return QLocalSocket_SetSocketDescriptor((QLocalSocket*)self, socketDescriptor);
}

intptr_t q_localsocket_socket_descriptor(void* self) {
    return QLocalSocket_SocketDescriptor((QLocalSocket*)self);
}

void q_localsocket_set_socket_options(void* self, int64_t option) {
    QLocalSocket_SetSocketOptions((QLocalSocket*)self, option);
}

int64_t q_localsocket_socket_options(void* self) {
    return QLocalSocket_SocketOptions((QLocalSocket*)self);
}

int64_t q_localsocket_state(void* self) {
    return QLocalSocket_State((QLocalSocket*)self);
}

bool q_localsocket_wait_for_bytes_written(void* self, int msecs) {
    return QLocalSocket_WaitForBytesWritten((QLocalSocket*)self, msecs);
}

void q_localsocket_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int)) {
    QLocalSocket_OnWaitForBytesWritten((QLocalSocket*)self, (intptr_t)slot);
}

bool q_localsocket_qbase_wait_for_bytes_written(void* self, int msecs) {
    return QLocalSocket_QBaseWaitForBytesWritten((QLocalSocket*)self, msecs);
}

bool q_localsocket_wait_for_connected(void* self) {
    return QLocalSocket_WaitForConnected((QLocalSocket*)self);
}

bool q_localsocket_wait_for_disconnected(void* self) {
    return QLocalSocket_WaitForDisconnected((QLocalSocket*)self);
}

bool q_localsocket_wait_for_ready_read(void* self, int msecs) {
    return QLocalSocket_WaitForReadyRead((QLocalSocket*)self, msecs);
}

void q_localsocket_on_wait_for_ready_read(void* self, bool (*slot)(void*, int)) {
    QLocalSocket_OnWaitForReadyRead((QLocalSocket*)self, (intptr_t)slot);
}

bool q_localsocket_qbase_wait_for_ready_read(void* self, int msecs) {
    return QLocalSocket_QBaseWaitForReadyRead((QLocalSocket*)self, msecs);
}

void q_localsocket_connected(void* self) {
    QLocalSocket_Connected((QLocalSocket*)self);
}

void q_localsocket_on_connected(void* self, void (*slot)(void*)) {
    QLocalSocket_Connect_Connected((QLocalSocket*)self, (intptr_t)slot);
}

void q_localsocket_disconnected(void* self) {
    QLocalSocket_Disconnected((QLocalSocket*)self);
}

void q_localsocket_on_disconnected(void* self, void (*slot)(void*)) {
    QLocalSocket_Connect_Disconnected((QLocalSocket*)self, (intptr_t)slot);
}

void q_localsocket_error_occurred(void* self, int64_t socketError) {
    QLocalSocket_ErrorOccurred((QLocalSocket*)self, socketError);
}

void q_localsocket_on_error_occurred(void* self, void (*slot)(void*, int64_t)) {
    QLocalSocket_Connect_ErrorOccurred((QLocalSocket*)self, (intptr_t)slot);
}

void q_localsocket_state_changed(void* self, int64_t socketState) {
    QLocalSocket_StateChanged((QLocalSocket*)self, socketState);
}

void q_localsocket_on_state_changed(void* self, void (*slot)(void*, int64_t)) {
    QLocalSocket_Connect_StateChanged((QLocalSocket*)self, (intptr_t)slot);
}

long long q_localsocket_read_data(void* self, char* param1, long long param2) {
    return QLocalSocket_ReadData((QLocalSocket*)self, param1, param2);
}

void q_localsocket_on_read_data(void* self, long long (*slot)(void*, char*, long long)) {
    QLocalSocket_OnReadData((QLocalSocket*)self, (intptr_t)slot);
}

long long q_localsocket_qbase_read_data(void* self, char* param1, long long param2) {
    return QLocalSocket_QBaseReadData((QLocalSocket*)self, param1, param2);
}

long long q_localsocket_read_line_data(void* self, char* data, long long maxSize) {
    return QLocalSocket_ReadLineData((QLocalSocket*)self, data, maxSize);
}

void q_localsocket_on_read_line_data(void* self, long long (*slot)(void*, char*, long long)) {
    QLocalSocket_OnReadLineData((QLocalSocket*)self, (intptr_t)slot);
}

long long q_localsocket_qbase_read_line_data(void* self, char* data, long long maxSize) {
    return QLocalSocket_QBaseReadLineData((QLocalSocket*)self, data, maxSize);
}

long long q_localsocket_skip_data(void* self, long long maxSize) {
    return QLocalSocket_SkipData((QLocalSocket*)self, maxSize);
}

void q_localsocket_on_skip_data(void* self, long long (*slot)(void*, long long)) {
    QLocalSocket_OnSkipData((QLocalSocket*)self, (intptr_t)slot);
}

long long q_localsocket_qbase_skip_data(void* self, long long maxSize) {
    return QLocalSocket_QBaseSkipData((QLocalSocket*)self, maxSize);
}

long long q_localsocket_write_data(void* self, const char* param1, long long param2) {
    return QLocalSocket_WriteData((QLocalSocket*)self, param1, param2);
}

void q_localsocket_on_write_data(void* self, long long (*slot)(void*, const char*, long long)) {
    QLocalSocket_OnWriteData((QLocalSocket*)self, (intptr_t)slot);
}

long long q_localsocket_qbase_write_data(void* self, const char* param1, long long param2) {
    return QLocalSocket_QBaseWriteData((QLocalSocket*)self, param1, param2);
}

const char* q_localsocket_tr2(const char* s, const char* c) {
    libqt_string _str = QLocalSocket_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_localsocket_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QLocalSocket_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_localsocket_connect_to_server1(void* self, int64_t openMode) {
    QLocalSocket_ConnectToServer1((QLocalSocket*)self, openMode);
}

void q_localsocket_connect_to_server2(void* self, const char* name, int64_t openMode) {
    QLocalSocket_ConnectToServer2((QLocalSocket*)self, qstring(name), openMode);
}

bool q_localsocket_set_socket_descriptor2(void* self, intptr_t socketDescriptor, int64_t socketState) {
    return QLocalSocket_SetSocketDescriptor2((QLocalSocket*)self, socketDescriptor, socketState);
}

bool q_localsocket_set_socket_descriptor3(void* self, intptr_t socketDescriptor, int64_t socketState, int64_t openMode) {
    return QLocalSocket_SetSocketDescriptor3((QLocalSocket*)self, socketDescriptor, socketState, openMode);
}

bool q_localsocket_wait_for_connected1(void* self, int msecs) {
    return QLocalSocket_WaitForConnected1((QLocalSocket*)self, msecs);
}

bool q_localsocket_wait_for_disconnected1(void* self, int msecs) {
    return QLocalSocket_WaitForDisconnected1((QLocalSocket*)self, msecs);
}

int64_t q_localsocket_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

void q_localsocket_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

bool q_localsocket_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

bool q_localsocket_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

bool q_localsocket_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

bool q_localsocket_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

int32_t q_localsocket_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

int32_t q_localsocket_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

int32_t q_localsocket_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

void q_localsocket_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

int32_t q_localsocket_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

void q_localsocket_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

long long q_localsocket_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

char* q_localsocket_read_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_localsocket_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_localsocket_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

char* q_localsocket_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_localsocket_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

void q_localsocket_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

void q_localsocket_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

bool q_localsocket_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

long long q_localsocket_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

long long q_localsocket_write_with_data(void* self, const char* data) {
    return QIODevice_WriteWithData((QIODevice*)self, data);
}

long long q_localsocket_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, qstring(data));
}

long long q_localsocket_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

char* q_localsocket_peek_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_PeekWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_localsocket_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

void q_localsocket_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

bool q_localsocket_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

bool q_localsocket_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

const char* q_localsocket_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_localsocket_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

void q_localsocket_on_ready_read(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)slot);
}

void q_localsocket_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

void q_localsocket_on_channel_ready_read(void* self, void (*slot)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)slot);
}

void q_localsocket_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

void q_localsocket_on_bytes_written(void* self, void (*slot)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)slot);
}

void q_localsocket_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

void q_localsocket_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)slot);
}

void q_localsocket_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

void q_localsocket_on_about_to_close(void* self, void (*slot)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)slot);
}

void q_localsocket_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

void q_localsocket_on_read_channel_finished(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)slot);
}

char* q_localsocket_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_localsocket_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_localsocket_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_localsocket_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_localsocket_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_localsocket_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_localsocket_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_localsocket_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_localsocket_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_localsocket_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_localsocket_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_localsocket_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

const libqt_list /* of QObject* */ q_localsocket_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_localsocket_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_localsocket_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_localsocket_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_localsocket_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_localsocket_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_localsocket_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_localsocket_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_localsocket_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_localsocket_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_localsocket_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_localsocket_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_localsocket_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_localsocket_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_localsocket_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_localsocket_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_localsocket_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_localsocket_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_localsocket_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_localsocket_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_localsocket_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_localsocket_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_localsocket_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_localsocket_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_localsocket_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

long long q_localsocket_pos(void* self) {
    return QLocalSocket_Pos((QLocalSocket*)self);
}

long long q_localsocket_qbase_pos(void* self) {
    return QLocalSocket_QBasePos((QLocalSocket*)self);
}

void q_localsocket_on_pos(void* self, long long (*slot)()) {
    QLocalSocket_OnPos((QLocalSocket*)self, (intptr_t)slot);
}

long long q_localsocket_size(void* self) {
    return QLocalSocket_Size((QLocalSocket*)self);
}

long long q_localsocket_qbase_size(void* self) {
    return QLocalSocket_QBaseSize((QLocalSocket*)self);
}

void q_localsocket_on_size(void* self, long long (*slot)()) {
    QLocalSocket_OnSize((QLocalSocket*)self, (intptr_t)slot);
}

bool q_localsocket_seek(void* self, long long pos) {
    return QLocalSocket_Seek((QLocalSocket*)self, pos);
}

bool q_localsocket_qbase_seek(void* self, long long pos) {
    return QLocalSocket_QBaseSeek((QLocalSocket*)self, pos);
}

void q_localsocket_on_seek(void* self, bool (*slot)(void*, long long)) {
    QLocalSocket_OnSeek((QLocalSocket*)self, (intptr_t)slot);
}

bool q_localsocket_at_end(void* self) {
    return QLocalSocket_AtEnd((QLocalSocket*)self);
}

bool q_localsocket_qbase_at_end(void* self) {
    return QLocalSocket_QBaseAtEnd((QLocalSocket*)self);
}

void q_localsocket_on_at_end(void* self, bool (*slot)()) {
    QLocalSocket_OnAtEnd((QLocalSocket*)self, (intptr_t)slot);
}

bool q_localsocket_reset(void* self) {
    return QLocalSocket_Reset((QLocalSocket*)self);
}

bool q_localsocket_qbase_reset(void* self) {
    return QLocalSocket_QBaseReset((QLocalSocket*)self);
}

void q_localsocket_on_reset(void* self, bool (*slot)()) {
    QLocalSocket_OnReset((QLocalSocket*)self, (intptr_t)slot);
}

bool q_localsocket_event(void* self, void* event) {
    return QLocalSocket_Event((QLocalSocket*)self, (QEvent*)event);
}

bool q_localsocket_qbase_event(void* self, void* event) {
    return QLocalSocket_QBaseEvent((QLocalSocket*)self, (QEvent*)event);
}

void q_localsocket_on_event(void* self, bool (*slot)(void*, void*)) {
    QLocalSocket_OnEvent((QLocalSocket*)self, (intptr_t)slot);
}

bool q_localsocket_event_filter(void* self, void* watched, void* event) {
    return QLocalSocket_EventFilter((QLocalSocket*)self, (QObject*)watched, (QEvent*)event);
}

bool q_localsocket_qbase_event_filter(void* self, void* watched, void* event) {
    return QLocalSocket_QBaseEventFilter((QLocalSocket*)self, (QObject*)watched, (QEvent*)event);
}

void q_localsocket_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QLocalSocket_OnEventFilter((QLocalSocket*)self, (intptr_t)slot);
}

void q_localsocket_timer_event(void* self, void* event) {
    QLocalSocket_TimerEvent((QLocalSocket*)self, (QTimerEvent*)event);
}

void q_localsocket_qbase_timer_event(void* self, void* event) {
    QLocalSocket_QBaseTimerEvent((QLocalSocket*)self, (QTimerEvent*)event);
}

void q_localsocket_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QLocalSocket_OnTimerEvent((QLocalSocket*)self, (intptr_t)slot);
}

void q_localsocket_child_event(void* self, void* event) {
    QLocalSocket_ChildEvent((QLocalSocket*)self, (QChildEvent*)event);
}

void q_localsocket_qbase_child_event(void* self, void* event) {
    QLocalSocket_QBaseChildEvent((QLocalSocket*)self, (QChildEvent*)event);
}

void q_localsocket_on_child_event(void* self, void (*slot)(void*, void*)) {
    QLocalSocket_OnChildEvent((QLocalSocket*)self, (intptr_t)slot);
}

void q_localsocket_custom_event(void* self, void* event) {
    QLocalSocket_CustomEvent((QLocalSocket*)self, (QEvent*)event);
}

void q_localsocket_qbase_custom_event(void* self, void* event) {
    QLocalSocket_QBaseCustomEvent((QLocalSocket*)self, (QEvent*)event);
}

void q_localsocket_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QLocalSocket_OnCustomEvent((QLocalSocket*)self, (intptr_t)slot);
}

void q_localsocket_connect_notify(void* self, void* signal) {
    QLocalSocket_ConnectNotify((QLocalSocket*)self, (QMetaMethod*)signal);
}

void q_localsocket_qbase_connect_notify(void* self, void* signal) {
    QLocalSocket_QBaseConnectNotify((QLocalSocket*)self, (QMetaMethod*)signal);
}

void q_localsocket_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QLocalSocket_OnConnectNotify((QLocalSocket*)self, (intptr_t)slot);
}

void q_localsocket_disconnect_notify(void* self, void* signal) {
    QLocalSocket_DisconnectNotify((QLocalSocket*)self, (QMetaMethod*)signal);
}

void q_localsocket_qbase_disconnect_notify(void* self, void* signal) {
    QLocalSocket_QBaseDisconnectNotify((QLocalSocket*)self, (QMetaMethod*)signal);
}

void q_localsocket_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QLocalSocket_OnDisconnectNotify((QLocalSocket*)self, (intptr_t)slot);
}

void q_localsocket_set_open_mode(void* self, int64_t openMode) {
    QLocalSocket_SetOpenMode((QLocalSocket*)self, openMode);
}

void q_localsocket_qbase_set_open_mode(void* self, int64_t openMode) {
    QLocalSocket_QBaseSetOpenMode((QLocalSocket*)self, openMode);
}

void q_localsocket_on_set_open_mode(void* self, void (*slot)(void*, int64_t)) {
    QLocalSocket_OnSetOpenMode((QLocalSocket*)self, (intptr_t)slot);
}

void q_localsocket_set_error_string(void* self, const char* errorString) {
    QLocalSocket_SetErrorString((QLocalSocket*)self, qstring(errorString));
}

void q_localsocket_qbase_set_error_string(void* self, const char* errorString) {
    QLocalSocket_QBaseSetErrorString((QLocalSocket*)self, qstring(errorString));
}

void q_localsocket_on_set_error_string(void* self, void (*slot)(void*, const char*)) {
    QLocalSocket_OnSetErrorString((QLocalSocket*)self, (intptr_t)slot);
}

QObject* q_localsocket_sender(void* self) {
    return QLocalSocket_Sender((QLocalSocket*)self);
}

QObject* q_localsocket_qbase_sender(void* self) {
    return QLocalSocket_QBaseSender((QLocalSocket*)self);
}

void q_localsocket_on_sender(void* self, QObject* (*slot)()) {
    QLocalSocket_OnSender((QLocalSocket*)self, (intptr_t)slot);
}

int32_t q_localsocket_sender_signal_index(void* self) {
    return QLocalSocket_SenderSignalIndex((QLocalSocket*)self);
}

int32_t q_localsocket_qbase_sender_signal_index(void* self) {
    return QLocalSocket_QBaseSenderSignalIndex((QLocalSocket*)self);
}

void q_localsocket_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QLocalSocket_OnSenderSignalIndex((QLocalSocket*)self, (intptr_t)slot);
}

int32_t q_localsocket_receivers(void* self, const char* signal) {
    return QLocalSocket_Receivers((QLocalSocket*)self, signal);
}

int32_t q_localsocket_qbase_receivers(void* self, const char* signal) {
    return QLocalSocket_QBaseReceivers((QLocalSocket*)self, signal);
}

void q_localsocket_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QLocalSocket_OnReceivers((QLocalSocket*)self, (intptr_t)slot);
}

bool q_localsocket_is_signal_connected(void* self, void* signal) {
    return QLocalSocket_IsSignalConnected((QLocalSocket*)self, (QMetaMethod*)signal);
}

bool q_localsocket_qbase_is_signal_connected(void* self, void* signal) {
    return QLocalSocket_QBaseIsSignalConnected((QLocalSocket*)self, (QMetaMethod*)signal);
}

void q_localsocket_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QLocalSocket_OnIsSignalConnected((QLocalSocket*)self, (intptr_t)slot);
}

void q_localsocket_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_localsocket_delete(void* self) {
    QLocalSocket_Delete((QLocalSocket*)(self));
}
