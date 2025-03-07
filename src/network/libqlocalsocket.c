#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqiodevice.hpp"
#include "../libqiodevicebase.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqlocalsocket.hpp"
#include "libqlocalsocket.h"

/// https://doc.qt.io/qt-6/qlocalsocket.html

/// q_localsocket_new constructs a new QLocalSocket object.
///
///
QLocalSocket* q_localsocket_new() {
    return QLocalSocket_new();
}

/// q_localsocket_new2 constructs a new QLocalSocket object.
///
/// ``` QObject* parent ```
QLocalSocket* q_localsocket_new2(void* parent) {
    return QLocalSocket_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QLocalSocket* self ```
QMetaObject* q_localsocket_meta_object(void* self) {
    return QLocalSocket_MetaObject((QLocalSocket*)self);
}

/// ``` QLocalSocket* self, const char* param1 ```
void* q_localsocket_metacast(void* self, const char* param1) {
    return QLocalSocket_Metacast((QLocalSocket*)self, param1);
}

/// ``` QLocalSocket* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_localsocket_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QLocalSocket_Metacall((QLocalSocket*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, int32_t (*slot)(QLocalSocket*, enum QMetaObject__Call, int, void*) ```
void q_localsocket_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QLocalSocket_OnMetacall((QLocalSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLocalSocket* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_localsocket_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QLocalSocket_QBaseMetacall((QLocalSocket*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_localsocket_tr(const char* s) {
    libqt_string _str = QLocalSocket_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#connectToServer)
///
/// ``` QLocalSocket* self ```
void q_localsocket_connect_to_server(void* self) {
    QLocalSocket_ConnectToServer((QLocalSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#connectToServer)
///
/// ``` QLocalSocket* self, const char* name ```
void q_localsocket_connect_to_server_with_name(void* self, const char* name) {
    QLocalSocket_ConnectToServerWithName((QLocalSocket*)self, qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#disconnectFromServer)
///
/// ``` QLocalSocket* self ```
void q_localsocket_disconnect_from_server(void* self) {
    QLocalSocket_DisconnectFromServer((QLocalSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#setServerName)
///
/// ``` QLocalSocket* self, const char* name ```
void q_localsocket_set_server_name(void* self, const char* name) {
    QLocalSocket_SetServerName((QLocalSocket*)self, qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#serverName)
///
/// ``` QLocalSocket* self ```
const char* q_localsocket_server_name(void* self) {
    libqt_string _str = QLocalSocket_ServerName((QLocalSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#fullServerName)
///
/// ``` QLocalSocket* self ```
const char* q_localsocket_full_server_name(void* self) {
    libqt_string _str = QLocalSocket_FullServerName((QLocalSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#abort)
///
/// ``` QLocalSocket* self ```
void q_localsocket_abort(void* self) {
    QLocalSocket_Abort((QLocalSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#isSequential)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_is_sequential(void* self) {
    return QLocalSocket_IsSequential((QLocalSocket*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, bool (*slot)() ```
void q_localsocket_on_is_sequential(void* self, bool (*slot)()) {
    QLocalSocket_OnIsSequential((QLocalSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLocalSocket* self ```
bool q_localsocket_qbase_is_sequential(void* self) {
    return QLocalSocket_QBaseIsSequential((QLocalSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#bytesAvailable)
///
/// ``` QLocalSocket* self ```
long long q_localsocket_bytes_available(void* self) {
    return QLocalSocket_BytesAvailable((QLocalSocket*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, long long (*slot)() ```
void q_localsocket_on_bytes_available(void* self, long long (*slot)()) {
    QLocalSocket_OnBytesAvailable((QLocalSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLocalSocket* self ```
long long q_localsocket_qbase_bytes_available(void* self) {
    return QLocalSocket_QBaseBytesAvailable((QLocalSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#bytesToWrite)
///
/// ``` QLocalSocket* self ```
long long q_localsocket_bytes_to_write(void* self) {
    return QLocalSocket_BytesToWrite((QLocalSocket*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, long long (*slot)() ```
void q_localsocket_on_bytes_to_write(void* self, long long (*slot)()) {
    QLocalSocket_OnBytesToWrite((QLocalSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLocalSocket* self ```
long long q_localsocket_qbase_bytes_to_write(void* self) {
    return QLocalSocket_QBaseBytesToWrite((QLocalSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#canReadLine)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_can_read_line(void* self) {
    return QLocalSocket_CanReadLine((QLocalSocket*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, bool (*slot)() ```
void q_localsocket_on_can_read_line(void* self, bool (*slot)()) {
    QLocalSocket_OnCanReadLine((QLocalSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLocalSocket* self ```
bool q_localsocket_qbase_can_read_line(void* self) {
    return QLocalSocket_QBaseCanReadLine((QLocalSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#open)
///
/// ``` QLocalSocket* self, int openMode ```
bool q_localsocket_open(void* self, int64_t openMode) {
    return QLocalSocket_Open((QLocalSocket*)self, openMode);
}

/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, bool (*slot)(QLocalSocket*, int) ```
void q_localsocket_on_open(void* self, bool (*slot)(void*, int64_t)) {
    QLocalSocket_OnOpen((QLocalSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLocalSocket* self, int openMode ```
bool q_localsocket_qbase_open(void* self, int64_t openMode) {
    return QLocalSocket_QBaseOpen((QLocalSocket*)self, openMode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#close)
///
/// ``` QLocalSocket* self ```
void q_localsocket_close(void* self) {
    QLocalSocket_Close((QLocalSocket*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, void (*slot)() ```
void q_localsocket_on_close(void* self, void (*slot)()) {
    QLocalSocket_OnClose((QLocalSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLocalSocket* self ```
void q_localsocket_qbase_close(void* self) {
    QLocalSocket_QBaseClose((QLocalSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#error)
///
/// ``` QLocalSocket* self ```
int64_t q_localsocket_error(void* self) {
    return QLocalSocket_Error((QLocalSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#flush)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_flush(void* self) {
    return QLocalSocket_Flush((QLocalSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#isValid)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_is_valid(void* self) {
    return QLocalSocket_IsValid((QLocalSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#readBufferSize)
///
/// ``` QLocalSocket* self ```
long long q_localsocket_read_buffer_size(void* self) {
    return QLocalSocket_ReadBufferSize((QLocalSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#setReadBufferSize)
///
/// ``` QLocalSocket* self, long long size ```
void q_localsocket_set_read_buffer_size(void* self, long long size) {
    QLocalSocket_SetReadBufferSize((QLocalSocket*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#setSocketDescriptor)
///
/// ``` QLocalSocket* self, intptr_t socketDescriptor ```
bool q_localsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor) {
    return QLocalSocket_SetSocketDescriptor((QLocalSocket*)self, socketDescriptor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#socketDescriptor)
///
/// ``` QLocalSocket* self ```
intptr_t q_localsocket_socket_descriptor(void* self) {
    return QLocalSocket_SocketDescriptor((QLocalSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#setSocketOptions)
///
/// ``` QLocalSocket* self, int option ```
void q_localsocket_set_socket_options(void* self, int64_t option) {
    QLocalSocket_SetSocketOptions((QLocalSocket*)self, option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#socketOptions)
///
/// ``` QLocalSocket* self ```
int64_t q_localsocket_socket_options(void* self) {
    return QLocalSocket_SocketOptions((QLocalSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#state)
///
/// ``` QLocalSocket* self ```
int64_t q_localsocket_state(void* self) {
    return QLocalSocket_State((QLocalSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForBytesWritten)
///
/// ``` QLocalSocket* self, int msecs ```
bool q_localsocket_wait_for_bytes_written(void* self, int msecs) {
    return QLocalSocket_WaitForBytesWritten((QLocalSocket*)self, msecs);
}

/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, bool (*slot)(QLocalSocket*, int) ```
void q_localsocket_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int)) {
    QLocalSocket_OnWaitForBytesWritten((QLocalSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLocalSocket* self, int msecs ```
bool q_localsocket_qbase_wait_for_bytes_written(void* self, int msecs) {
    return QLocalSocket_QBaseWaitForBytesWritten((QLocalSocket*)self, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForConnected)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_wait_for_connected(void* self) {
    return QLocalSocket_WaitForConnected((QLocalSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForDisconnected)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_wait_for_disconnected(void* self) {
    return QLocalSocket_WaitForDisconnected((QLocalSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForReadyRead)
///
/// ``` QLocalSocket* self, int msecs ```
bool q_localsocket_wait_for_ready_read(void* self, int msecs) {
    return QLocalSocket_WaitForReadyRead((QLocalSocket*)self, msecs);
}

/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, bool (*slot)(QLocalSocket*, int) ```
void q_localsocket_on_wait_for_ready_read(void* self, bool (*slot)(void*, int)) {
    QLocalSocket_OnWaitForReadyRead((QLocalSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLocalSocket* self, int msecs ```
bool q_localsocket_qbase_wait_for_ready_read(void* self, int msecs) {
    return QLocalSocket_QBaseWaitForReadyRead((QLocalSocket*)self, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#connected)
///
/// ``` QLocalSocket* self ```
void q_localsocket_connected(void* self) {
    QLocalSocket_Connected((QLocalSocket*)self);
}

/// ``` QLocalSocket* self, void (*slot)(QLocalSocket*) ```
void q_localsocket_on_connected(void* self, void (*slot)(void*)) {
    QLocalSocket_Connect_Connected((QLocalSocket*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#disconnected)
///
/// ``` QLocalSocket* self ```
void q_localsocket_disconnected(void* self) {
    QLocalSocket_Disconnected((QLocalSocket*)self);
}

/// ``` QLocalSocket* self, void (*slot)(QLocalSocket*) ```
void q_localsocket_on_disconnected(void* self, void (*slot)(void*)) {
    QLocalSocket_Connect_Disconnected((QLocalSocket*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#errorOccurred)
///
/// ``` QLocalSocket* self, enum QLocalSocket__LocalSocketError socketError ```
void q_localsocket_error_occurred(void* self, int64_t socketError) {
    QLocalSocket_ErrorOccurred((QLocalSocket*)self, socketError);
}

/// ``` QLocalSocket* self, void (*slot)(QLocalSocket*, enum QLocalSocket__LocalSocketError) ```
void q_localsocket_on_error_occurred(void* self, void (*slot)(void*, int64_t)) {
    QLocalSocket_Connect_ErrorOccurred((QLocalSocket*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#stateChanged)
///
/// ``` QLocalSocket* self, enum QLocalSocket__LocalSocketState socketState ```
void q_localsocket_state_changed(void* self, int64_t socketState) {
    QLocalSocket_StateChanged((QLocalSocket*)self, socketState);
}

/// ``` QLocalSocket* self, void (*slot)(QLocalSocket*, enum QLocalSocket__LocalSocketState) ```
void q_localsocket_on_state_changed(void* self, void (*slot)(void*, int64_t)) {
    QLocalSocket_Connect_StateChanged((QLocalSocket*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#readData)
///
/// ``` QLocalSocket* self, char* param1, long long param2 ```
long long q_localsocket_read_data(void* self, char* param1, long long param2) {
    return QLocalSocket_ReadData((QLocalSocket*)self, param1, param2);
}

/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, long long (*slot)(QLocalSocket*, char*, long long) ```
void q_localsocket_on_read_data(void* self, long long (*slot)(void*, char*, long long)) {
    QLocalSocket_OnReadData((QLocalSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLocalSocket* self, char* param1, long long param2 ```
long long q_localsocket_qbase_read_data(void* self, char* param1, long long param2) {
    return QLocalSocket_QBaseReadData((QLocalSocket*)self, param1, param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#readLineData)
///
/// ``` QLocalSocket* self, char* data, long long maxSize ```
long long q_localsocket_read_line_data(void* self, char* data, long long maxSize) {
    return QLocalSocket_ReadLineData((QLocalSocket*)self, data, maxSize);
}

/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, long long (*slot)(QLocalSocket*, char*, long long) ```
void q_localsocket_on_read_line_data(void* self, long long (*slot)(void*, char*, long long)) {
    QLocalSocket_OnReadLineData((QLocalSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLocalSocket* self, char* data, long long maxSize ```
long long q_localsocket_qbase_read_line_data(void* self, char* data, long long maxSize) {
    return QLocalSocket_QBaseReadLineData((QLocalSocket*)self, data, maxSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#skipData)
///
/// ``` QLocalSocket* self, long long maxSize ```
long long q_localsocket_skip_data(void* self, long long maxSize) {
    return QLocalSocket_SkipData((QLocalSocket*)self, maxSize);
}

/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, long long (*slot)(QLocalSocket*, long long) ```
void q_localsocket_on_skip_data(void* self, long long (*slot)(void*, long long)) {
    QLocalSocket_OnSkipData((QLocalSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLocalSocket* self, long long maxSize ```
long long q_localsocket_qbase_skip_data(void* self, long long maxSize) {
    return QLocalSocket_QBaseSkipData((QLocalSocket*)self, maxSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#writeData)
///
/// ``` QLocalSocket* self, const char* param1, long long param2 ```
long long q_localsocket_write_data(void* self, const char* param1, long long param2) {
    return QLocalSocket_WriteData((QLocalSocket*)self, param1, param2);
}

/// Allows for overriding the related default method
///
/// ``` QLocalSocket* self, long long (*slot)(QLocalSocket*, const char*, long long) ```
void q_localsocket_on_write_data(void* self, long long (*slot)(void*, const char*, long long)) {
    QLocalSocket_OnWriteData((QLocalSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLocalSocket* self, const char* param1, long long param2 ```
long long q_localsocket_qbase_write_data(void* self, const char* param1, long long param2) {
    return QLocalSocket_QBaseWriteData((QLocalSocket*)self, param1, param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_localsocket_tr2(const char* s, const char* c) {
    libqt_string _str = QLocalSocket_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_localsocket_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QLocalSocket_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#connectToServer)
///
/// ``` QLocalSocket* self, int openMode ```
void q_localsocket_connect_to_server1(void* self, int64_t openMode) {
    QLocalSocket_ConnectToServer1((QLocalSocket*)self, openMode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#connectToServer)
///
/// ``` QLocalSocket* self, const char* name, int openMode ```
void q_localsocket_connect_to_server2(void* self, const char* name, int64_t openMode) {
    QLocalSocket_ConnectToServer2((QLocalSocket*)self, qstring(name), openMode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#setSocketDescriptor)
///
/// ``` QLocalSocket* self, intptr_t socketDescriptor, enum QLocalSocket__LocalSocketState socketState ```
bool q_localsocket_set_socket_descriptor2(void* self, intptr_t socketDescriptor, int64_t socketState) {
    return QLocalSocket_SetSocketDescriptor2((QLocalSocket*)self, socketDescriptor, socketState);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#setSocketDescriptor)
///
/// ``` QLocalSocket* self, intptr_t socketDescriptor, enum QLocalSocket__LocalSocketState socketState, int openMode ```
bool q_localsocket_set_socket_descriptor3(void* self, intptr_t socketDescriptor, int64_t socketState, int64_t openMode) {
    return QLocalSocket_SetSocketDescriptor3((QLocalSocket*)self, socketDescriptor, socketState, openMode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForConnected)
///
/// ``` QLocalSocket* self, int msecs ```
bool q_localsocket_wait_for_connected1(void* self, int msecs) {
    return QLocalSocket_WaitForConnected1((QLocalSocket*)self, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlocalsocket.html#waitForDisconnected)
///
/// ``` QLocalSocket* self, int msecs ```
bool q_localsocket_wait_for_disconnected1(void* self, int msecs) {
    return QLocalSocket_WaitForDisconnected1((QLocalSocket*)self, msecs);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QLocalSocket* self ```
int64_t q_localsocket_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QLocalSocket* self, bool enabled ```
void q_localsocket_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QLocalSocket* self ```
int32_t q_localsocket_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QLocalSocket* self ```
int32_t q_localsocket_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QLocalSocket* self ```
int32_t q_localsocket_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QLocalSocket* self, int channel ```
void q_localsocket_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QLocalSocket* self ```
int32_t q_localsocket_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QLocalSocket* self, int channel ```
void q_localsocket_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QLocalSocket* self, char* data, long long maxlen ```
long long q_localsocket_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QLocalSocket* self, long long maxlen ```
char* q_localsocket_read_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QLocalSocket* self ```
char* q_localsocket_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QLocalSocket* self, char* data, long long maxlen ```
long long q_localsocket_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QLocalSocket* self ```
char* q_localsocket_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QLocalSocket* self ```
void q_localsocket_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QLocalSocket* self ```
void q_localsocket_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QLocalSocket* self ```
void q_localsocket_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QLocalSocket* self, const char* data, long long lenVal ```
long long q_localsocket_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QLocalSocket* self, const char* data ```
long long q_localsocket_write_with_data(void* self, const char* data) {
    return QIODevice_WriteWithData((QIODevice*)self, data);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QLocalSocket* self, const char* data ```
long long q_localsocket_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, qstring(data));
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QLocalSocket* self, char* data, long long maxlen ```
long long q_localsocket_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QLocalSocket* self, long long maxlen ```
char* q_localsocket_peek_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_PeekWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QLocalSocket* self, long long maxSize ```
long long q_localsocket_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QLocalSocket* self, char c ```
void q_localsocket_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QLocalSocket* self, char c ```
bool q_localsocket_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QLocalSocket* self, char* c ```
bool q_localsocket_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QLocalSocket* self ```
const char* q_localsocket_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QLocalSocket* self ```
void q_localsocket_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QLocalSocket* self, void (*slot)(QIODevice*) ```
void q_localsocket_on_ready_read(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QLocalSocket* self, int channel ```
void q_localsocket_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// ``` QLocalSocket* self, void (*slot)(QIODevice*, int) ```
void q_localsocket_on_channel_ready_read(void* self, void (*slot)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QLocalSocket* self, long long bytes ```
void q_localsocket_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

/// Inherited from QIODevice
///
/// ``` QLocalSocket* self, void (*slot)(QIODevice*, long long) ```
void q_localsocket_on_bytes_written(void* self, void (*slot)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QLocalSocket* self, int channel, long long bytes ```
void q_localsocket_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

/// Inherited from QIODevice
///
/// ``` QLocalSocket* self, void (*slot)(QIODevice*, int, long long) ```
void q_localsocket_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QLocalSocket* self ```
void q_localsocket_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QLocalSocket* self, void (*slot)(QIODevice*) ```
void q_localsocket_on_about_to_close(void* self, void (*slot)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QLocalSocket* self ```
void q_localsocket_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QLocalSocket* self, void (*slot)(QIODevice*) ```
void q_localsocket_on_read_channel_finished(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QLocalSocket* self, long long maxlen ```
char* q_localsocket_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QLocalSocket* self ```
const char* q_localsocket_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QLocalSocket* self, const char* name ```
void q_localsocket_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QLocalSocket* self ```
bool q_localsocket_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QLocalSocket* self, bool b ```
bool q_localsocket_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QLocalSocket* self ```
QThread* q_localsocket_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QLocalSocket* self, QThread* thread ```
void q_localsocket_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLocalSocket* self, int interval ```
int32_t q_localsocket_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QLocalSocket* self, int id ```
void q_localsocket_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QLocalSocket* self ```
libqt_list /* of QObject* */ q_localsocket_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QLocalSocket* self, QObject* parent ```
void q_localsocket_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QLocalSocket* self, QObject* filterObj ```
void q_localsocket_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QLocalSocket* self, QObject* obj ```
void q_localsocket_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_localsocket_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLocalSocket* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_localsocket_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_localsocket_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_localsocket_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QLocalSocket* self ```
void q_localsocket_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QLocalSocket* self ```
void q_localsocket_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QLocalSocket* self, const char* name, QVariant* value ```
bool q_localsocket_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QLocalSocket* self, const char* name ```
QVariant* q_localsocket_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QLocalSocket* self ```
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

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLocalSocket* self ```
QBindingStorage* q_localsocket_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLocalSocket* self ```
QBindingStorage* q_localsocket_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLocalSocket* self ```
void q_localsocket_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QLocalSocket* self, void (*slot)(QObject*) ```
void q_localsocket_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QLocalSocket* self ```
QObject* q_localsocket_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QLocalSocket* self, const char* classname ```
bool q_localsocket_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QLocalSocket* self ```
void q_localsocket_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLocalSocket* self, int interval, enum Qt__TimerType timerType ```
int32_t q_localsocket_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_localsocket_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLocalSocket* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_localsocket_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLocalSocket* self, QObject* param1 ```
void q_localsocket_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QLocalSocket* self, void (*slot)(QObject*, QObject*) ```
void q_localsocket_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self ```
long long q_localsocket_pos(void* self) {
    return QLocalSocket_Pos((QLocalSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self ```
long long q_localsocket_qbase_pos(void* self) {
    return QLocalSocket_QBasePos((QLocalSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, long long (*slot)() ```
void q_localsocket_on_pos(void* self, long long (*slot)()) {
    QLocalSocket_OnPos((QLocalSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self ```
long long q_localsocket_size(void* self) {
    return QLocalSocket_Size((QLocalSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self ```
long long q_localsocket_qbase_size(void* self) {
    return QLocalSocket_QBaseSize((QLocalSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, long long (*slot)() ```
void q_localsocket_on_size(void* self, long long (*slot)()) {
    QLocalSocket_OnSize((QLocalSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self, long long pos ```
bool q_localsocket_seek(void* self, long long pos) {
    return QLocalSocket_Seek((QLocalSocket*)self, pos);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self, long long pos ```
bool q_localsocket_qbase_seek(void* self, long long pos) {
    return QLocalSocket_QBaseSeek((QLocalSocket*)self, pos);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, bool (*slot)(QLocalSocket*, long long) ```
void q_localsocket_on_seek(void* self, bool (*slot)(void*, long long)) {
    QLocalSocket_OnSeek((QLocalSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self ```
bool q_localsocket_at_end(void* self) {
    return QLocalSocket_AtEnd((QLocalSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self ```
bool q_localsocket_qbase_at_end(void* self) {
    return QLocalSocket_QBaseAtEnd((QLocalSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, bool (*slot)() ```
void q_localsocket_on_at_end(void* self, bool (*slot)()) {
    QLocalSocket_OnAtEnd((QLocalSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self ```
bool q_localsocket_reset(void* self) {
    return QLocalSocket_Reset((QLocalSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self ```
bool q_localsocket_qbase_reset(void* self) {
    return QLocalSocket_QBaseReset((QLocalSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, bool (*slot)() ```
void q_localsocket_on_reset(void* self, bool (*slot)()) {
    QLocalSocket_OnReset((QLocalSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self, QEvent* event ```
bool q_localsocket_event(void* self, void* event) {
    return QLocalSocket_Event((QLocalSocket*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self, QEvent* event ```
bool q_localsocket_qbase_event(void* self, void* event) {
    return QLocalSocket_QBaseEvent((QLocalSocket*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, bool (*slot)(QLocalSocket*, QEvent*) ```
void q_localsocket_on_event(void* self, bool (*slot)(void*, void*)) {
    QLocalSocket_OnEvent((QLocalSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self, QObject* watched, QEvent* event ```
bool q_localsocket_event_filter(void* self, void* watched, void* event) {
    return QLocalSocket_EventFilter((QLocalSocket*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self, QObject* watched, QEvent* event ```
bool q_localsocket_qbase_event_filter(void* self, void* watched, void* event) {
    return QLocalSocket_QBaseEventFilter((QLocalSocket*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, bool (*slot)(QLocalSocket*, QObject*, QEvent*) ```
void q_localsocket_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QLocalSocket_OnEventFilter((QLocalSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self, QTimerEvent* event ```
void q_localsocket_timer_event(void* self, void* event) {
    QLocalSocket_TimerEvent((QLocalSocket*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self, QTimerEvent* event ```
void q_localsocket_qbase_timer_event(void* self, void* event) {
    QLocalSocket_QBaseTimerEvent((QLocalSocket*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, void (*slot)(QLocalSocket*, QTimerEvent*) ```
void q_localsocket_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QLocalSocket_OnTimerEvent((QLocalSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self, QChildEvent* event ```
void q_localsocket_child_event(void* self, void* event) {
    QLocalSocket_ChildEvent((QLocalSocket*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self, QChildEvent* event ```
void q_localsocket_qbase_child_event(void* self, void* event) {
    QLocalSocket_QBaseChildEvent((QLocalSocket*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, void (*slot)(QLocalSocket*, QChildEvent*) ```
void q_localsocket_on_child_event(void* self, void (*slot)(void*, void*)) {
    QLocalSocket_OnChildEvent((QLocalSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self, QEvent* event ```
void q_localsocket_custom_event(void* self, void* event) {
    QLocalSocket_CustomEvent((QLocalSocket*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self, QEvent* event ```
void q_localsocket_qbase_custom_event(void* self, void* event) {
    QLocalSocket_QBaseCustomEvent((QLocalSocket*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, void (*slot)(QLocalSocket*, QEvent*) ```
void q_localsocket_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QLocalSocket_OnCustomEvent((QLocalSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self, QMetaMethod* signal ```
void q_localsocket_connect_notify(void* self, void* signal) {
    QLocalSocket_ConnectNotify((QLocalSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self, QMetaMethod* signal ```
void q_localsocket_qbase_connect_notify(void* self, void* signal) {
    QLocalSocket_QBaseConnectNotify((QLocalSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, void (*slot)(QLocalSocket*, QMetaMethod*) ```
void q_localsocket_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QLocalSocket_OnConnectNotify((QLocalSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self, QMetaMethod* signal ```
void q_localsocket_disconnect_notify(void* self, void* signal) {
    QLocalSocket_DisconnectNotify((QLocalSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self, QMetaMethod* signal ```
void q_localsocket_qbase_disconnect_notify(void* self, void* signal) {
    QLocalSocket_QBaseDisconnectNotify((QLocalSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, void (*slot)(QLocalSocket*, QMetaMethod*) ```
void q_localsocket_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QLocalSocket_OnDisconnectNotify((QLocalSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self, int openMode ```
void q_localsocket_set_open_mode(void* self, int64_t openMode) {
    QLocalSocket_SetOpenMode((QLocalSocket*)self, openMode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self, int openMode ```
void q_localsocket_qbase_set_open_mode(void* self, int64_t openMode) {
    QLocalSocket_QBaseSetOpenMode((QLocalSocket*)self, openMode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, void (*slot)(QLocalSocket*, int) ```
void q_localsocket_on_set_open_mode(void* self, void (*slot)(void*, int64_t)) {
    QLocalSocket_OnSetOpenMode((QLocalSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self, const char* errorString ```
void q_localsocket_set_error_string(void* self, const char* errorString) {
    QLocalSocket_SetErrorString((QLocalSocket*)self, qstring(errorString));
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self, const char* errorString ```
void q_localsocket_qbase_set_error_string(void* self, const char* errorString) {
    QLocalSocket_QBaseSetErrorString((QLocalSocket*)self, qstring(errorString));
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, void (*slot)(QLocalSocket*, const char*) ```
void q_localsocket_on_set_error_string(void* self, void (*slot)(void*, const char*)) {
    QLocalSocket_OnSetErrorString((QLocalSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self ```
QObject* q_localsocket_sender(void* self) {
    return QLocalSocket_Sender((QLocalSocket*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self ```
QObject* q_localsocket_qbase_sender(void* self) {
    return QLocalSocket_QBaseSender((QLocalSocket*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, QObject* (*slot)() ```
void q_localsocket_on_sender(void* self, QObject* (*slot)()) {
    QLocalSocket_OnSender((QLocalSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self ```
int32_t q_localsocket_sender_signal_index(void* self) {
    return QLocalSocket_SenderSignalIndex((QLocalSocket*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self ```
int32_t q_localsocket_qbase_sender_signal_index(void* self) {
    return QLocalSocket_QBaseSenderSignalIndex((QLocalSocket*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, int32_t (*slot)() ```
void q_localsocket_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QLocalSocket_OnSenderSignalIndex((QLocalSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self, const char* signal ```
int32_t q_localsocket_receivers(void* self, const char* signal) {
    return QLocalSocket_Receivers((QLocalSocket*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self, const char* signal ```
int32_t q_localsocket_qbase_receivers(void* self, const char* signal) {
    return QLocalSocket_QBaseReceivers((QLocalSocket*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, int32_t (*slot)(QLocalSocket*, const char*) ```
void q_localsocket_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QLocalSocket_OnReceivers((QLocalSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLocalSocket* self, QMetaMethod* signal ```
bool q_localsocket_is_signal_connected(void* self, void* signal) {
    return QLocalSocket_IsSignalConnected((QLocalSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLocalSocket* self, QMetaMethod* signal ```
bool q_localsocket_qbase_is_signal_connected(void* self, void* signal) {
    return QLocalSocket_QBaseIsSignalConnected((QLocalSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLocalSocket* self, bool (*slot)(QLocalSocket*, QMetaMethod*) ```
void q_localsocket_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QLocalSocket_OnIsSignalConnected((QLocalSocket*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QLocalSocket* self ```
void q_localsocket_delete(void* self) {
    QLocalSocket_Delete((QLocalSocket*)(self));
}