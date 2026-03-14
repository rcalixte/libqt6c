#include "libqbluetoothaddress.hpp"
#include "libqbluetoothserviceinfo.hpp"
#include "libqbluetoothuuid.hpp"
#include "../libqcoreevent.hpp"
#include "../libqiodevice.hpp"
#include "../libqiodevicebase.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqbluetoothsocket.hpp"
#include "libqbluetoothsocket.h"

QBluetoothSocket* q_bluetoothsocket_new(int32_t socketType) {
    return QBluetoothSocket_new(socketType);
}

QBluetoothSocket* q_bluetoothsocket_new2() {
    return QBluetoothSocket_new2();
}

QBluetoothSocket* q_bluetoothsocket_new3(int32_t socketType, void* parent) {
    return QBluetoothSocket_new3(socketType, (QObject*)parent);
}

QBluetoothSocket* q_bluetoothsocket_new4(void* parent) {
    return QBluetoothSocket_new4((QObject*)parent);
}

const QMetaObject* q_bluetoothsocket_meta_object(void* self) {
    return QBluetoothSocket_MetaObject((QBluetoothSocket*)self);
}

void q_bluetoothsocket_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QBluetoothSocket_OnMetaObject((QBluetoothSocket*)self, (intptr_t)callback);
}

const QMetaObject* q_bluetoothsocket_super_meta_object(void* self) {
    return QBluetoothSocket_SuperMetaObject((QBluetoothSocket*)self);
}

void* q_bluetoothsocket_metacast(void* self, const char* param1) {
    return QBluetoothSocket_Metacast((QBluetoothSocket*)self, param1);
}

void q_bluetoothsocket_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QBluetoothSocket_OnMetacast((QBluetoothSocket*)self, (intptr_t)callback);
}

void* q_bluetoothsocket_super_metacast(void* self, const char* param1) {
    return QBluetoothSocket_SuperMetacast((QBluetoothSocket*)self, param1);
}

int32_t q_bluetoothsocket_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QBluetoothSocket_Metacall((QBluetoothSocket*)self, param1, param2, param3);
}

void q_bluetoothsocket_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QBluetoothSocket_OnMetacall((QBluetoothSocket*)self, (intptr_t)callback);
}

int32_t q_bluetoothsocket_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QBluetoothSocket_SuperMetacall((QBluetoothSocket*)self, param1, param2, param3);
}

const char* q_bluetoothsocket_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_bluetoothsocket_abort(void* self) {
    QBluetoothSocket_Abort((QBluetoothSocket*)self);
}

void q_bluetoothsocket_close(void* self) {
    QBluetoothSocket_Close((QBluetoothSocket*)self);
}

void q_bluetoothsocket_on_close(void* self, void (*callback)()) {
    QBluetoothSocket_OnClose((QBluetoothSocket*)self, (intptr_t)callback);
}

void q_bluetoothsocket_super_close(void* self) {
    QBluetoothSocket_SuperClose((QBluetoothSocket*)self);
}

bool q_bluetoothsocket_is_sequential(void* self) {
    return QBluetoothSocket_IsSequential((QBluetoothSocket*)self);
}

void q_bluetoothsocket_on_is_sequential(void* self, bool (*callback)()) {
    QBluetoothSocket_OnIsSequential((QBluetoothSocket*)self, (intptr_t)callback);
}

bool q_bluetoothsocket_super_is_sequential(void* self) {
    return QBluetoothSocket_SuperIsSequential((QBluetoothSocket*)self);
}

long long q_bluetoothsocket_bytes_available(void* self) {
    return QBluetoothSocket_BytesAvailable((QBluetoothSocket*)self);
}

void q_bluetoothsocket_on_bytes_available(void* self, long long (*callback)()) {
    QBluetoothSocket_OnBytesAvailable((QBluetoothSocket*)self, (intptr_t)callback);
}

long long q_bluetoothsocket_super_bytes_available(void* self) {
    return QBluetoothSocket_SuperBytesAvailable((QBluetoothSocket*)self);
}

long long q_bluetoothsocket_bytes_to_write(void* self) {
    return QBluetoothSocket_BytesToWrite((QBluetoothSocket*)self);
}

void q_bluetoothsocket_on_bytes_to_write(void* self, long long (*callback)()) {
    QBluetoothSocket_OnBytesToWrite((QBluetoothSocket*)self, (intptr_t)callback);
}

long long q_bluetoothsocket_super_bytes_to_write(void* self) {
    return QBluetoothSocket_SuperBytesToWrite((QBluetoothSocket*)self);
}

bool q_bluetoothsocket_can_read_line(void* self) {
    return QBluetoothSocket_CanReadLine((QBluetoothSocket*)self);
}

void q_bluetoothsocket_on_can_read_line(void* self, bool (*callback)()) {
    QBluetoothSocket_OnCanReadLine((QBluetoothSocket*)self, (intptr_t)callback);
}

bool q_bluetoothsocket_super_can_read_line(void* self) {
    return QBluetoothSocket_SuperCanReadLine((QBluetoothSocket*)self);
}

void q_bluetoothsocket_connect_to_service(void* self, void* service) {
    QBluetoothSocket_ConnectToService((QBluetoothSocket*)self, (QBluetoothServiceInfo*)service);
}

void q_bluetoothsocket_connect_to_service2(void* self, void* address, void* uuid) {
    QBluetoothSocket_ConnectToService2((QBluetoothSocket*)self, (QBluetoothAddress*)address, (QBluetoothUuid*)uuid);
}

void q_bluetoothsocket_connect_to_service3(void* self, void* address, unsigned short port) {
    QBluetoothSocket_ConnectToService3((QBluetoothSocket*)self, (QBluetoothAddress*)address, port);
}

void q_bluetoothsocket_connect_to_service4(void* self, void* address, int32_t uuid) {
    QBluetoothSocket_ConnectToService4((QBluetoothSocket*)self, (QBluetoothAddress*)address, uuid);
}

void q_bluetoothsocket_disconnect_from_service(void* self) {
    QBluetoothSocket_DisconnectFromService((QBluetoothSocket*)self);
}

const char* q_bluetoothsocket_local_name(void* self) {
    libqt_string _str = QBluetoothSocket_LocalName((QBluetoothSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QBluetoothAddress* q_bluetoothsocket_local_address(void* self) {
    return QBluetoothSocket_LocalAddress((QBluetoothSocket*)self);
}

unsigned short q_bluetoothsocket_local_port(void* self) {
    return QBluetoothSocket_LocalPort((QBluetoothSocket*)self);
}

const char* q_bluetoothsocket_peer_name(void* self) {
    libqt_string _str = QBluetoothSocket_PeerName((QBluetoothSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QBluetoothAddress* q_bluetoothsocket_peer_address(void* self) {
    return QBluetoothSocket_PeerAddress((QBluetoothSocket*)self);
}

unsigned short q_bluetoothsocket_peer_port(void* self) {
    return QBluetoothSocket_PeerPort((QBluetoothSocket*)self);
}

bool q_bluetoothsocket_set_socket_descriptor(void* self, int socketDescriptor, int32_t socketType) {
    return QBluetoothSocket_SetSocketDescriptor((QBluetoothSocket*)self, socketDescriptor, socketType);
}

int32_t q_bluetoothsocket_socket_descriptor(void* self) {
    return QBluetoothSocket_SocketDescriptor((QBluetoothSocket*)self);
}

int32_t q_bluetoothsocket_socket_type(void* self) {
    return QBluetoothSocket_SocketType((QBluetoothSocket*)self);
}

int32_t q_bluetoothsocket_state(void* self) {
    return QBluetoothSocket_State((QBluetoothSocket*)self);
}

int32_t q_bluetoothsocket_error(void* self) {
    return QBluetoothSocket_Error((QBluetoothSocket*)self);
}

const char* q_bluetoothsocket_error_string(void* self) {
    libqt_string _str = QBluetoothSocket_ErrorString((QBluetoothSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_bluetoothsocket_set_preferred_security_flags(void* self, int32_t flags) {
    QBluetoothSocket_SetPreferredSecurityFlags((QBluetoothSocket*)self, flags);
}

int32_t q_bluetoothsocket_preferred_security_flags(void* self) {
    return QBluetoothSocket_PreferredSecurityFlags((QBluetoothSocket*)self);
}

void q_bluetoothsocket_connected(void* self) {
    QBluetoothSocket_Connected((QBluetoothSocket*)self);
}

void q_bluetoothsocket_on_connected(void* self, void (*callback)(void*)) {
    QBluetoothSocket_Connect_Connected((QBluetoothSocket*)self, (intptr_t)callback);
}

void q_bluetoothsocket_disconnected(void* self) {
    QBluetoothSocket_Disconnected((QBluetoothSocket*)self);
}

void q_bluetoothsocket_on_disconnected(void* self, void (*callback)(void*)) {
    QBluetoothSocket_Connect_Disconnected((QBluetoothSocket*)self, (intptr_t)callback);
}

void q_bluetoothsocket_error_occurred(void* self, int32_t error) {
    QBluetoothSocket_ErrorOccurred((QBluetoothSocket*)self, error);
}

void q_bluetoothsocket_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QBluetoothSocket_Connect_ErrorOccurred((QBluetoothSocket*)self, (intptr_t)callback);
}

void q_bluetoothsocket_state_changed(void* self, int32_t state) {
    QBluetoothSocket_StateChanged((QBluetoothSocket*)self, state);
}

void q_bluetoothsocket_on_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QBluetoothSocket_Connect_StateChanged((QBluetoothSocket*)self, (intptr_t)callback);
}

long long q_bluetoothsocket_read_data(void* self, char* data, long long maxSize) {
    return QBluetoothSocket_ReadData((QBluetoothSocket*)self, data, maxSize);
}

void q_bluetoothsocket_on_read_data(void* self, long long (*callback)(void*, char*, long long)) {
    QBluetoothSocket_OnReadData((QBluetoothSocket*)self, (intptr_t)callback);
}

long long q_bluetoothsocket_super_read_data(void* self, char* data, long long maxSize) {
    return QBluetoothSocket_SuperReadData((QBluetoothSocket*)self, data, maxSize);
}

long long q_bluetoothsocket_write_data(void* self, const char* data, long long maxSize) {
    return QBluetoothSocket_WriteData((QBluetoothSocket*)self, data, maxSize);
}

void q_bluetoothsocket_on_write_data(void* self, long long (*callback)(void*, const char*, long long)) {
    QBluetoothSocket_OnWriteData((QBluetoothSocket*)self, (intptr_t)callback);
}

long long q_bluetoothsocket_super_write_data(void* self, const char* data, long long maxSize) {
    return QBluetoothSocket_SuperWriteData((QBluetoothSocket*)self, data, maxSize);
}

void q_bluetoothsocket_set_socket_state(void* self, int32_t state) {
    QBluetoothSocket_SetSocketState((QBluetoothSocket*)self, state);
}

void q_bluetoothsocket_on_set_socket_state(void* self, void (*callback)(void*, int32_t)) {
    QBluetoothSocket_OnSetSocketState((QBluetoothSocket*)self, (intptr_t)callback);
}

void q_bluetoothsocket_super_set_socket_state(void* self, int32_t state) {
    QBluetoothSocket_SuperSetSocketState((QBluetoothSocket*)self, state);
}

void q_bluetoothsocket_set_socket_error(void* self, int32_t error) {
    QBluetoothSocket_SetSocketError((QBluetoothSocket*)self, error);
}

void q_bluetoothsocket_on_set_socket_error(void* self, void (*callback)(void*, int32_t)) {
    QBluetoothSocket_OnSetSocketError((QBluetoothSocket*)self, (intptr_t)callback);
}

void q_bluetoothsocket_super_set_socket_error(void* self, int32_t error) {
    QBluetoothSocket_SuperSetSocketError((QBluetoothSocket*)self, error);
}

void q_bluetoothsocket_do_device_discovery(void* self, void* service, int32_t openMode) {
    QBluetoothSocket_DoDeviceDiscovery((QBluetoothSocket*)self, (QBluetoothServiceInfo*)service, openMode);
}

void q_bluetoothsocket_on_do_device_discovery(void* self, void (*callback)(void*, void*, int32_t)) {
    QBluetoothSocket_OnDoDeviceDiscovery((QBluetoothSocket*)self, (intptr_t)callback);
}

void q_bluetoothsocket_super_do_device_discovery(void* self, void* service, int32_t openMode) {
    QBluetoothSocket_SuperDoDeviceDiscovery((QBluetoothSocket*)self, (QBluetoothServiceInfo*)service, openMode);
}

const char* q_bluetoothsocket_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_bluetoothsocket_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_bluetoothsocket_connect_to_service22(void* self, void* service, int32_t openMode) {
    QBluetoothSocket_ConnectToService22((QBluetoothSocket*)self, (QBluetoothServiceInfo*)service, openMode);
}

void q_bluetoothsocket_connect_to_service32(void* self, void* address, void* uuid, int32_t openMode) {
    QBluetoothSocket_ConnectToService32((QBluetoothSocket*)self, (QBluetoothAddress*)address, (QBluetoothUuid*)uuid, openMode);
}

void q_bluetoothsocket_connect_to_service33(void* self, void* address, unsigned short port, int32_t openMode) {
    QBluetoothSocket_ConnectToService33((QBluetoothSocket*)self, (QBluetoothAddress*)address, port, openMode);
}

void q_bluetoothsocket_connect_to_service34(void* self, void* address, int32_t uuid, int32_t mode) {
    QBluetoothSocket_ConnectToService34((QBluetoothSocket*)self, (QBluetoothAddress*)address, uuid, mode);
}

bool q_bluetoothsocket_set_socket_descriptor3(void* self, int socketDescriptor, int32_t socketType, int32_t socketState) {
    return QBluetoothSocket_SetSocketDescriptor3((QBluetoothSocket*)self, socketDescriptor, socketType, socketState);
}

bool q_bluetoothsocket_set_socket_descriptor4(void* self, int socketDescriptor, int32_t socketType, int32_t socketState, int32_t openMode) {
    return QBluetoothSocket_SetSocketDescriptor4((QBluetoothSocket*)self, socketDescriptor, socketType, socketState, openMode);
}

int32_t q_bluetoothsocket_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

void q_bluetoothsocket_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

bool q_bluetoothsocket_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

bool q_bluetoothsocket_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

bool q_bluetoothsocket_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

bool q_bluetoothsocket_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

int32_t q_bluetoothsocket_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

int32_t q_bluetoothsocket_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

int32_t q_bluetoothsocket_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

void q_bluetoothsocket_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

int32_t q_bluetoothsocket_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

void q_bluetoothsocket_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

long long q_bluetoothsocket_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

char* q_bluetoothsocket_read2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Read2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bluetoothsocket_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_bluetoothsocket_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

char* q_bluetoothsocket_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_bluetoothsocket_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

void q_bluetoothsocket_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

void q_bluetoothsocket_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

bool q_bluetoothsocket_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

long long q_bluetoothsocket_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

long long q_bluetoothsocket_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, data);
}

long long q_bluetoothsocket_write3(void* self, char* data) {
    return QIODevice_Write3((QIODevice*)self, qstring(data));
}

long long q_bluetoothsocket_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

char* q_bluetoothsocket_peek2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Peek2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_bluetoothsocket_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

void q_bluetoothsocket_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

bool q_bluetoothsocket_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

bool q_bluetoothsocket_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

void q_bluetoothsocket_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

void q_bluetoothsocket_on_ready_read(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_bluetoothsocket_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

void q_bluetoothsocket_on_channel_ready_read(void* self, void (*callback)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_bluetoothsocket_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

void q_bluetoothsocket_on_bytes_written(void* self, void (*callback)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_bluetoothsocket_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

void q_bluetoothsocket_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_bluetoothsocket_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

void q_bluetoothsocket_on_about_to_close(void* self, void (*callback)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)callback);
}

void q_bluetoothsocket_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

void q_bluetoothsocket_on_read_channel_finished(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)callback);
}

char* q_bluetoothsocket_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_bluetoothsocket_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_bluetoothsocket_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_bluetoothsocket_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_bluetoothsocket_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_bluetoothsocket_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_bluetoothsocket_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_bluetoothsocket_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_bluetoothsocket_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_bluetoothsocket_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_bluetoothsocket_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_bluetoothsocket_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_bluetoothsocket_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_bluetoothsocket_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_bluetoothsocket_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_bluetoothsocket_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_bluetoothsocket_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_bluetoothsocket_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_bluetoothsocket_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_bluetoothsocket_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_bluetoothsocket_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_bluetoothsocket_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_bluetoothsocket_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_bluetoothsocket_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_bluetoothsocket_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_bluetoothsocket_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_bluetoothsocket_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_bluetoothsocket_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_bluetoothsocket_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_bluetoothsocket_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_bluetoothsocket_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_bluetoothsocket_dynamic_property_names\n");
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

QBindingStorage* q_bluetoothsocket_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_bluetoothsocket_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_bluetoothsocket_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_bluetoothsocket_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_bluetoothsocket_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_bluetoothsocket_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_bluetoothsocket_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_bluetoothsocket_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_bluetoothsocket_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_bluetoothsocket_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_bluetoothsocket_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_bluetoothsocket_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_bluetoothsocket_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_bluetoothsocket_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_bluetoothsocket_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_bluetoothsocket_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_bluetoothsocket_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_bluetoothsocket_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_bluetoothsocket_open(void* self, int32_t mode) {
    return QBluetoothSocket_Open((QBluetoothSocket*)self, mode);
}

bool q_bluetoothsocket_super_open(void* self, int32_t mode) {
    return QBluetoothSocket_SuperOpen((QBluetoothSocket*)self, mode);
}

void q_bluetoothsocket_on_open(void* self, bool (*callback)(void*, int32_t)) {
    QBluetoothSocket_OnOpen((QBluetoothSocket*)self, (intptr_t)callback);
}

long long q_bluetoothsocket_pos(void* self) {
    return QBluetoothSocket_Pos((QBluetoothSocket*)self);
}

long long q_bluetoothsocket_super_pos(void* self) {
    return QBluetoothSocket_SuperPos((QBluetoothSocket*)self);
}

void q_bluetoothsocket_on_pos(void* self, long long (*callback)()) {
    QBluetoothSocket_OnPos((QBluetoothSocket*)self, (intptr_t)callback);
}

long long q_bluetoothsocket_size(void* self) {
    return QBluetoothSocket_Size((QBluetoothSocket*)self);
}

long long q_bluetoothsocket_super_size(void* self) {
    return QBluetoothSocket_SuperSize((QBluetoothSocket*)self);
}

void q_bluetoothsocket_on_size(void* self, long long (*callback)()) {
    QBluetoothSocket_OnSize((QBluetoothSocket*)self, (intptr_t)callback);
}

bool q_bluetoothsocket_seek(void* self, long long pos) {
    return QBluetoothSocket_Seek((QBluetoothSocket*)self, pos);
}

bool q_bluetoothsocket_super_seek(void* self, long long pos) {
    return QBluetoothSocket_SuperSeek((QBluetoothSocket*)self, pos);
}

void q_bluetoothsocket_on_seek(void* self, bool (*callback)(void*, long long)) {
    QBluetoothSocket_OnSeek((QBluetoothSocket*)self, (intptr_t)callback);
}

bool q_bluetoothsocket_at_end(void* self) {
    return QBluetoothSocket_AtEnd((QBluetoothSocket*)self);
}

bool q_bluetoothsocket_super_at_end(void* self) {
    return QBluetoothSocket_SuperAtEnd((QBluetoothSocket*)self);
}

void q_bluetoothsocket_on_at_end(void* self, bool (*callback)()) {
    QBluetoothSocket_OnAtEnd((QBluetoothSocket*)self, (intptr_t)callback);
}

bool q_bluetoothsocket_reset(void* self) {
    return QBluetoothSocket_Reset((QBluetoothSocket*)self);
}

bool q_bluetoothsocket_super_reset(void* self) {
    return QBluetoothSocket_SuperReset((QBluetoothSocket*)self);
}

void q_bluetoothsocket_on_reset(void* self, bool (*callback)()) {
    QBluetoothSocket_OnReset((QBluetoothSocket*)self, (intptr_t)callback);
}

bool q_bluetoothsocket_wait_for_ready_read(void* self, int msecs) {
    return QBluetoothSocket_WaitForReadyRead((QBluetoothSocket*)self, msecs);
}

bool q_bluetoothsocket_super_wait_for_ready_read(void* self, int msecs) {
    return QBluetoothSocket_SuperWaitForReadyRead((QBluetoothSocket*)self, msecs);
}

void q_bluetoothsocket_on_wait_for_ready_read(void* self, bool (*callback)(void*, int)) {
    QBluetoothSocket_OnWaitForReadyRead((QBluetoothSocket*)self, (intptr_t)callback);
}

bool q_bluetoothsocket_wait_for_bytes_written(void* self, int msecs) {
    return QBluetoothSocket_WaitForBytesWritten((QBluetoothSocket*)self, msecs);
}

bool q_bluetoothsocket_super_wait_for_bytes_written(void* self, int msecs) {
    return QBluetoothSocket_SuperWaitForBytesWritten((QBluetoothSocket*)self, msecs);
}

void q_bluetoothsocket_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int)) {
    QBluetoothSocket_OnWaitForBytesWritten((QBluetoothSocket*)self, (intptr_t)callback);
}

long long q_bluetoothsocket_read_line_data(void* self, char* data, long long maxlen) {
    return QBluetoothSocket_ReadLineData((QBluetoothSocket*)self, data, maxlen);
}

long long q_bluetoothsocket_super_read_line_data(void* self, char* data, long long maxlen) {
    return QBluetoothSocket_SuperReadLineData((QBluetoothSocket*)self, data, maxlen);
}

void q_bluetoothsocket_on_read_line_data(void* self, long long (*callback)(void*, char*, long long)) {
    QBluetoothSocket_OnReadLineData((QBluetoothSocket*)self, (intptr_t)callback);
}

long long q_bluetoothsocket_skip_data(void* self, long long maxSize) {
    return QBluetoothSocket_SkipData((QBluetoothSocket*)self, maxSize);
}

long long q_bluetoothsocket_super_skip_data(void* self, long long maxSize) {
    return QBluetoothSocket_SuperSkipData((QBluetoothSocket*)self, maxSize);
}

void q_bluetoothsocket_on_skip_data(void* self, long long (*callback)(void*, long long)) {
    QBluetoothSocket_OnSkipData((QBluetoothSocket*)self, (intptr_t)callback);
}

bool q_bluetoothsocket_event(void* self, void* event) {
    return QBluetoothSocket_Event((QBluetoothSocket*)self, (QEvent*)event);
}

bool q_bluetoothsocket_super_event(void* self, void* event) {
    return QBluetoothSocket_SuperEvent((QBluetoothSocket*)self, (QEvent*)event);
}

void q_bluetoothsocket_on_event(void* self, bool (*callback)(void*, void*)) {
    QBluetoothSocket_OnEvent((QBluetoothSocket*)self, (intptr_t)callback);
}

bool q_bluetoothsocket_event_filter(void* self, void* watched, void* event) {
    return QBluetoothSocket_EventFilter((QBluetoothSocket*)self, (QObject*)watched, (QEvent*)event);
}

bool q_bluetoothsocket_super_event_filter(void* self, void* watched, void* event) {
    return QBluetoothSocket_SuperEventFilter((QBluetoothSocket*)self, (QObject*)watched, (QEvent*)event);
}

void q_bluetoothsocket_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QBluetoothSocket_OnEventFilter((QBluetoothSocket*)self, (intptr_t)callback);
}

void q_bluetoothsocket_timer_event(void* self, void* event) {
    QBluetoothSocket_TimerEvent((QBluetoothSocket*)self, (QTimerEvent*)event);
}

void q_bluetoothsocket_super_timer_event(void* self, void* event) {
    QBluetoothSocket_SuperTimerEvent((QBluetoothSocket*)self, (QTimerEvent*)event);
}

void q_bluetoothsocket_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QBluetoothSocket_OnTimerEvent((QBluetoothSocket*)self, (intptr_t)callback);
}

void q_bluetoothsocket_child_event(void* self, void* event) {
    QBluetoothSocket_ChildEvent((QBluetoothSocket*)self, (QChildEvent*)event);
}

void q_bluetoothsocket_super_child_event(void* self, void* event) {
    QBluetoothSocket_SuperChildEvent((QBluetoothSocket*)self, (QChildEvent*)event);
}

void q_bluetoothsocket_on_child_event(void* self, void (*callback)(void*, void*)) {
    QBluetoothSocket_OnChildEvent((QBluetoothSocket*)self, (intptr_t)callback);
}

void q_bluetoothsocket_custom_event(void* self, void* event) {
    QBluetoothSocket_CustomEvent((QBluetoothSocket*)self, (QEvent*)event);
}

void q_bluetoothsocket_super_custom_event(void* self, void* event) {
    QBluetoothSocket_SuperCustomEvent((QBluetoothSocket*)self, (QEvent*)event);
}

void q_bluetoothsocket_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QBluetoothSocket_OnCustomEvent((QBluetoothSocket*)self, (intptr_t)callback);
}

void q_bluetoothsocket_connect_notify(void* self, void* signal) {
    QBluetoothSocket_ConnectNotify((QBluetoothSocket*)self, (QMetaMethod*)signal);
}

void q_bluetoothsocket_super_connect_notify(void* self, void* signal) {
    QBluetoothSocket_SuperConnectNotify((QBluetoothSocket*)self, (QMetaMethod*)signal);
}

void q_bluetoothsocket_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QBluetoothSocket_OnConnectNotify((QBluetoothSocket*)self, (intptr_t)callback);
}

void q_bluetoothsocket_disconnect_notify(void* self, void* signal) {
    QBluetoothSocket_DisconnectNotify((QBluetoothSocket*)self, (QMetaMethod*)signal);
}

void q_bluetoothsocket_super_disconnect_notify(void* self, void* signal) {
    QBluetoothSocket_SuperDisconnectNotify((QBluetoothSocket*)self, (QMetaMethod*)signal);
}

void q_bluetoothsocket_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QBluetoothSocket_OnDisconnectNotify((QBluetoothSocket*)self, (intptr_t)callback);
}

void q_bluetoothsocket_set_open_mode(void* self, int32_t openMode) {
    QBluetoothSocket_SetOpenMode((QBluetoothSocket*)self, openMode);
}

void q_bluetoothsocket_super_set_open_mode(void* self, int32_t openMode) {
    QBluetoothSocket_SuperSetOpenMode((QBluetoothSocket*)self, openMode);
}

void q_bluetoothsocket_on_set_open_mode(void* self, void (*callback)(void*, int32_t)) {
    QBluetoothSocket_OnSetOpenMode((QBluetoothSocket*)self, (intptr_t)callback);
}

void q_bluetoothsocket_set_error_string(void* self, const char* errorString) {
    QBluetoothSocket_SetErrorString((QBluetoothSocket*)self, qstring(errorString));
}

void q_bluetoothsocket_super_set_error_string(void* self, const char* errorString) {
    QBluetoothSocket_SuperSetErrorString((QBluetoothSocket*)self, qstring(errorString));
}

void q_bluetoothsocket_on_set_error_string(void* self, void (*callback)(void*, const char*)) {
    QBluetoothSocket_OnSetErrorString((QBluetoothSocket*)self, (intptr_t)callback);
}

QObject* q_bluetoothsocket_sender(void* self) {
    return QBluetoothSocket_Sender((QBluetoothSocket*)self);
}

QObject* q_bluetoothsocket_super_sender(void* self) {
    return QBluetoothSocket_SuperSender((QBluetoothSocket*)self);
}

void q_bluetoothsocket_on_sender(void* self, QObject* (*callback)()) {
    QBluetoothSocket_OnSender((QBluetoothSocket*)self, (intptr_t)callback);
}

int32_t q_bluetoothsocket_sender_signal_index(void* self) {
    return QBluetoothSocket_SenderSignalIndex((QBluetoothSocket*)self);
}

int32_t q_bluetoothsocket_super_sender_signal_index(void* self) {
    return QBluetoothSocket_SuperSenderSignalIndex((QBluetoothSocket*)self);
}

void q_bluetoothsocket_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QBluetoothSocket_OnSenderSignalIndex((QBluetoothSocket*)self, (intptr_t)callback);
}

int32_t q_bluetoothsocket_receivers(void* self, const char* signal) {
    return QBluetoothSocket_Receivers((QBluetoothSocket*)self, signal);
}

int32_t q_bluetoothsocket_super_receivers(void* self, const char* signal) {
    return QBluetoothSocket_SuperReceivers((QBluetoothSocket*)self, signal);
}

void q_bluetoothsocket_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QBluetoothSocket_OnReceivers((QBluetoothSocket*)self, (intptr_t)callback);
}

bool q_bluetoothsocket_is_signal_connected(void* self, void* signal) {
    return QBluetoothSocket_IsSignalConnected((QBluetoothSocket*)self, (QMetaMethod*)signal);
}

bool q_bluetoothsocket_super_is_signal_connected(void* self, void* signal) {
    return QBluetoothSocket_SuperIsSignalConnected((QBluetoothSocket*)self, (QMetaMethod*)signal);
}

void q_bluetoothsocket_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QBluetoothSocket_OnIsSignalConnected((QBluetoothSocket*)self, (intptr_t)callback);
}

void q_bluetoothsocket_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_bluetoothsocket_delete(void* self) {
    QBluetoothSocket_Delete((QBluetoothSocket*)(self));
}
