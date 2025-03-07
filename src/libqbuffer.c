#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqiodevice.hpp"
#include "libqiodevicebase.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqbuffer.hpp"
#include "libqbuffer.h"

/// https://doc.qt.io/qt-6/qbuffer.html

/// q_buffer_new constructs a new QBuffer object.
///
///
QBuffer* q_buffer_new() {
    return QBuffer_new();
}

/// q_buffer_new2 constructs a new QBuffer object.
///
/// ``` QObject* parent ```
QBuffer* q_buffer_new2(void* parent) {
    return QBuffer_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QBuffer* self ```
QMetaObject* q_buffer_meta_object(void* self) {
    return QBuffer_MetaObject((QBuffer*)self);
}

/// ``` QBuffer* self, const char* param1 ```
void* q_buffer_metacast(void* self, const char* param1) {
    return QBuffer_Metacast((QBuffer*)self, param1);
}

/// ``` QBuffer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_buffer_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QBuffer_Metacall((QBuffer*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QBuffer* self, int32_t (*slot)(QBuffer*, enum QMetaObject__Call, int, void*) ```
void q_buffer_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QBuffer_OnMetacall((QBuffer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBuffer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_buffer_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QBuffer_QBaseMetacall((QBuffer*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_buffer_tr(const char* s) {
    libqt_string _str = QBuffer_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#buffer)
///
/// ``` QBuffer* self ```
char* q_buffer_buffer(void* self) {
    libqt_string _str = QBuffer_Buffer((QBuffer*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#buffer)
///
/// ``` QBuffer* self ```
const char* q_buffer_buffer2(void* self) {
    libqt_string _str = QBuffer_Buffer2((QBuffer*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#setData)
///
/// ``` QBuffer* self, const char* data ```
void q_buffer_set_data(void* self, const char* data) {
    QBuffer_SetData((QBuffer*)self, qstring(data));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#setData)
///
/// ``` QBuffer* self, const char* data, int lenVal ```
void q_buffer_set_data2(void* self, const char* data, int lenVal) {
    QBuffer_SetData2((QBuffer*)self, data, lenVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#data)
///
/// ``` QBuffer* self ```
const char* q_buffer_data(void* self) {
    libqt_string _str = QBuffer_Data((QBuffer*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#open)
///
/// ``` QBuffer* self, int openMode ```
bool q_buffer_open(void* self, int64_t openMode) {
    return QBuffer_Open((QBuffer*)self, openMode);
}

/// Allows for overriding the related default method
///
/// ``` QBuffer* self, bool (*slot)(QBuffer*, int) ```
void q_buffer_on_open(void* self, bool (*slot)(void*, int64_t)) {
    QBuffer_OnOpen((QBuffer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBuffer* self, int openMode ```
bool q_buffer_qbase_open(void* self, int64_t openMode) {
    return QBuffer_QBaseOpen((QBuffer*)self, openMode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#close)
///
/// ``` QBuffer* self ```
void q_buffer_close(void* self) {
    QBuffer_Close((QBuffer*)self);
}

/// Allows for overriding the related default method
///
/// ``` QBuffer* self, void (*slot)() ```
void q_buffer_on_close(void* self, void (*slot)()) {
    QBuffer_OnClose((QBuffer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBuffer* self ```
void q_buffer_qbase_close(void* self) {
    QBuffer_QBaseClose((QBuffer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#size)
///
/// ``` QBuffer* self ```
long long q_buffer_size(void* self) {
    return QBuffer_Size((QBuffer*)self);
}

/// Allows for overriding the related default method
///
/// ``` QBuffer* self, long long (*slot)() ```
void q_buffer_on_size(void* self, long long (*slot)()) {
    QBuffer_OnSize((QBuffer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBuffer* self ```
long long q_buffer_qbase_size(void* self) {
    return QBuffer_QBaseSize((QBuffer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#pos)
///
/// ``` QBuffer* self ```
long long q_buffer_pos(void* self) {
    return QBuffer_Pos((QBuffer*)self);
}

/// Allows for overriding the related default method
///
/// ``` QBuffer* self, long long (*slot)() ```
void q_buffer_on_pos(void* self, long long (*slot)()) {
    QBuffer_OnPos((QBuffer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBuffer* self ```
long long q_buffer_qbase_pos(void* self) {
    return QBuffer_QBasePos((QBuffer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#seek)
///
/// ``` QBuffer* self, long long off ```
bool q_buffer_seek(void* self, long long off) {
    return QBuffer_Seek((QBuffer*)self, off);
}

/// Allows for overriding the related default method
///
/// ``` QBuffer* self, bool (*slot)(QBuffer*, long long) ```
void q_buffer_on_seek(void* self, bool (*slot)(void*, long long)) {
    QBuffer_OnSeek((QBuffer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBuffer* self, long long off ```
bool q_buffer_qbase_seek(void* self, long long off) {
    return QBuffer_QBaseSeek((QBuffer*)self, off);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#atEnd)
///
/// ``` QBuffer* self ```
bool q_buffer_at_end(void* self) {
    return QBuffer_AtEnd((QBuffer*)self);
}

/// Allows for overriding the related default method
///
/// ``` QBuffer* self, bool (*slot)() ```
void q_buffer_on_at_end(void* self, bool (*slot)()) {
    QBuffer_OnAtEnd((QBuffer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBuffer* self ```
bool q_buffer_qbase_at_end(void* self) {
    return QBuffer_QBaseAtEnd((QBuffer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#canReadLine)
///
/// ``` QBuffer* self ```
bool q_buffer_can_read_line(void* self) {
    return QBuffer_CanReadLine((QBuffer*)self);
}

/// Allows for overriding the related default method
///
/// ``` QBuffer* self, bool (*slot)() ```
void q_buffer_on_can_read_line(void* self, bool (*slot)()) {
    QBuffer_OnCanReadLine((QBuffer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBuffer* self ```
bool q_buffer_qbase_can_read_line(void* self) {
    return QBuffer_QBaseCanReadLine((QBuffer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#connectNotify)
///
/// ``` QBuffer* self, QMetaMethod* param1 ```
void q_buffer_connect_notify(void* self, void* param1) {
    QBuffer_ConnectNotify((QBuffer*)self, (QMetaMethod*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QBuffer* self, void (*slot)(QBuffer*, QMetaMethod*) ```
void q_buffer_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QBuffer_OnConnectNotify((QBuffer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBuffer* self, QMetaMethod* param1 ```
void q_buffer_qbase_connect_notify(void* self, void* param1) {
    QBuffer_QBaseConnectNotify((QBuffer*)self, (QMetaMethod*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#disconnectNotify)
///
/// ``` QBuffer* self, QMetaMethod* param1 ```
void q_buffer_disconnect_notify(void* self, void* param1) {
    QBuffer_DisconnectNotify((QBuffer*)self, (QMetaMethod*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QBuffer* self, void (*slot)(QBuffer*, QMetaMethod*) ```
void q_buffer_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QBuffer_OnDisconnectNotify((QBuffer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBuffer* self, QMetaMethod* param1 ```
void q_buffer_qbase_disconnect_notify(void* self, void* param1) {
    QBuffer_QBaseDisconnectNotify((QBuffer*)self, (QMetaMethod*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#readData)
///
/// ``` QBuffer* self, char* data, long long maxlen ```
long long q_buffer_read_data(void* self, char* data, long long maxlen) {
    return QBuffer_ReadData((QBuffer*)self, data, maxlen);
}

/// Allows for overriding the related default method
///
/// ``` QBuffer* self, long long (*slot)(QBuffer*, char*, long long) ```
void q_buffer_on_read_data(void* self, long long (*slot)(void*, char*, long long)) {
    QBuffer_OnReadData((QBuffer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBuffer* self, char* data, long long maxlen ```
long long q_buffer_qbase_read_data(void* self, char* data, long long maxlen) {
    return QBuffer_QBaseReadData((QBuffer*)self, data, maxlen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbuffer.html#writeData)
///
/// ``` QBuffer* self, const char* data, long long lenVal ```
long long q_buffer_write_data(void* self, const char* data, long long lenVal) {
    return QBuffer_WriteData((QBuffer*)self, data, lenVal);
}

/// Allows for overriding the related default method
///
/// ``` QBuffer* self, long long (*slot)(QBuffer*, const char*, long long) ```
void q_buffer_on_write_data(void* self, long long (*slot)(void*, const char*, long long)) {
    QBuffer_OnWriteData((QBuffer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBuffer* self, const char* data, long long lenVal ```
long long q_buffer_qbase_write_data(void* self, const char* data, long long lenVal) {
    return QBuffer_QBaseWriteData((QBuffer*)self, data, lenVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_buffer_tr2(const char* s, const char* c) {
    libqt_string _str = QBuffer_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_buffer_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QBuffer_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QBuffer* self ```
int64_t q_buffer_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QBuffer* self, bool enabled ```
void q_buffer_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QBuffer* self ```
bool q_buffer_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QBuffer* self ```
bool q_buffer_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QBuffer* self ```
bool q_buffer_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QBuffer* self ```
bool q_buffer_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QBuffer* self ```
int32_t q_buffer_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QBuffer* self ```
int32_t q_buffer_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QBuffer* self ```
int32_t q_buffer_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QBuffer* self, int channel ```
void q_buffer_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QBuffer* self ```
int32_t q_buffer_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QBuffer* self, int channel ```
void q_buffer_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QBuffer* self, char* data, long long maxlen ```
long long q_buffer_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QBuffer* self, long long maxlen ```
char* q_buffer_read_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QBuffer* self ```
char* q_buffer_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QBuffer* self, char* data, long long maxlen ```
long long q_buffer_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QBuffer* self ```
char* q_buffer_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QBuffer* self ```
void q_buffer_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QBuffer* self ```
void q_buffer_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QBuffer* self ```
void q_buffer_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QBuffer* self ```
bool q_buffer_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QBuffer* self, const char* data, long long lenVal ```
long long q_buffer_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QBuffer* self, const char* data ```
long long q_buffer_write_with_data(void* self, const char* data) {
    return QIODevice_WriteWithData((QIODevice*)self, data);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QBuffer* self, const char* data ```
long long q_buffer_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, qstring(data));
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QBuffer* self, char* data, long long maxlen ```
long long q_buffer_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QBuffer* self, long long maxlen ```
char* q_buffer_peek_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_PeekWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QBuffer* self, long long maxSize ```
long long q_buffer_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QBuffer* self, char c ```
void q_buffer_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QBuffer* self, char c ```
bool q_buffer_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QBuffer* self, char* c ```
bool q_buffer_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QBuffer* self ```
const char* q_buffer_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QBuffer* self ```
void q_buffer_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QBuffer* self, void (*slot)(QIODevice*) ```
void q_buffer_on_ready_read(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QBuffer* self, int channel ```
void q_buffer_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// ``` QBuffer* self, void (*slot)(QIODevice*, int) ```
void q_buffer_on_channel_ready_read(void* self, void (*slot)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QBuffer* self, long long bytes ```
void q_buffer_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

/// Inherited from QIODevice
///
/// ``` QBuffer* self, void (*slot)(QIODevice*, long long) ```
void q_buffer_on_bytes_written(void* self, void (*slot)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QBuffer* self, int channel, long long bytes ```
void q_buffer_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

/// Inherited from QIODevice
///
/// ``` QBuffer* self, void (*slot)(QIODevice*, int, long long) ```
void q_buffer_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QBuffer* self ```
void q_buffer_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QBuffer* self, void (*slot)(QIODevice*) ```
void q_buffer_on_about_to_close(void* self, void (*slot)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QBuffer* self ```
void q_buffer_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QBuffer* self, void (*slot)(QIODevice*) ```
void q_buffer_on_read_channel_finished(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QBuffer* self, long long maxlen ```
char* q_buffer_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QBuffer* self ```
const char* q_buffer_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QBuffer* self, const char* name ```
void q_buffer_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QBuffer* self ```
bool q_buffer_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QBuffer* self ```
bool q_buffer_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QBuffer* self ```
bool q_buffer_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QBuffer* self ```
bool q_buffer_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QBuffer* self, bool b ```
bool q_buffer_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QBuffer* self ```
QThread* q_buffer_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QBuffer* self, QThread* thread ```
void q_buffer_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBuffer* self, int interval ```
int32_t q_buffer_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QBuffer* self, int id ```
void q_buffer_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QBuffer* self ```
libqt_list /* of QObject* */ q_buffer_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QBuffer* self, QObject* parent ```
void q_buffer_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QBuffer* self, QObject* filterObj ```
void q_buffer_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QBuffer* self, QObject* obj ```
void q_buffer_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_buffer_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBuffer* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_buffer_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_buffer_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_buffer_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QBuffer* self ```
void q_buffer_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QBuffer* self ```
void q_buffer_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QBuffer* self, const char* name, QVariant* value ```
bool q_buffer_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QBuffer* self, const char* name ```
QVariant* q_buffer_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QBuffer* self ```
const char** q_buffer_dynamic_property_names(void* self) {
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
/// ``` QBuffer* self ```
QBindingStorage* q_buffer_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QBuffer* self ```
QBindingStorage* q_buffer_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBuffer* self ```
void q_buffer_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QBuffer* self, void (*slot)(QObject*) ```
void q_buffer_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QBuffer* self ```
QObject* q_buffer_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QBuffer* self, const char* classname ```
bool q_buffer_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QBuffer* self ```
void q_buffer_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBuffer* self, int interval, enum Qt__TimerType timerType ```
int32_t q_buffer_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_buffer_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBuffer* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_buffer_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBuffer* self, QObject* param1 ```
void q_buffer_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QBuffer* self, void (*slot)(QObject*, QObject*) ```
void q_buffer_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self ```
bool q_buffer_is_sequential(void* self) {
    return QBuffer_IsSequential((QBuffer*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self ```
bool q_buffer_qbase_is_sequential(void* self) {
    return QBuffer_QBaseIsSequential((QBuffer*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, bool (*slot)() ```
void q_buffer_on_is_sequential(void* self, bool (*slot)()) {
    QBuffer_OnIsSequential((QBuffer*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self ```
bool q_buffer_reset(void* self) {
    return QBuffer_Reset((QBuffer*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self ```
bool q_buffer_qbase_reset(void* self) {
    return QBuffer_QBaseReset((QBuffer*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, bool (*slot)() ```
void q_buffer_on_reset(void* self, bool (*slot)()) {
    QBuffer_OnReset((QBuffer*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self ```
long long q_buffer_bytes_available(void* self) {
    return QBuffer_BytesAvailable((QBuffer*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self ```
long long q_buffer_qbase_bytes_available(void* self) {
    return QBuffer_QBaseBytesAvailable((QBuffer*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, long long (*slot)() ```
void q_buffer_on_bytes_available(void* self, long long (*slot)()) {
    QBuffer_OnBytesAvailable((QBuffer*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self ```
long long q_buffer_bytes_to_write(void* self) {
    return QBuffer_BytesToWrite((QBuffer*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self ```
long long q_buffer_qbase_bytes_to_write(void* self) {
    return QBuffer_QBaseBytesToWrite((QBuffer*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, long long (*slot)() ```
void q_buffer_on_bytes_to_write(void* self, long long (*slot)()) {
    QBuffer_OnBytesToWrite((QBuffer*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, int msecs ```
bool q_buffer_wait_for_ready_read(void* self, int msecs) {
    return QBuffer_WaitForReadyRead((QBuffer*)self, msecs);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, int msecs ```
bool q_buffer_qbase_wait_for_ready_read(void* self, int msecs) {
    return QBuffer_QBaseWaitForReadyRead((QBuffer*)self, msecs);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, bool (*slot)(QBuffer*, int) ```
void q_buffer_on_wait_for_ready_read(void* self, bool (*slot)(void*, int)) {
    QBuffer_OnWaitForReadyRead((QBuffer*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, int msecs ```
bool q_buffer_wait_for_bytes_written(void* self, int msecs) {
    return QBuffer_WaitForBytesWritten((QBuffer*)self, msecs);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, int msecs ```
bool q_buffer_qbase_wait_for_bytes_written(void* self, int msecs) {
    return QBuffer_QBaseWaitForBytesWritten((QBuffer*)self, msecs);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, bool (*slot)(QBuffer*, int) ```
void q_buffer_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int)) {
    QBuffer_OnWaitForBytesWritten((QBuffer*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, char* data, long long maxlen ```
long long q_buffer_read_line_data(void* self, char* data, long long maxlen) {
    return QBuffer_ReadLineData((QBuffer*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, char* data, long long maxlen ```
long long q_buffer_qbase_read_line_data(void* self, char* data, long long maxlen) {
    return QBuffer_QBaseReadLineData((QBuffer*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, long long (*slot)(QBuffer*, char*, long long) ```
void q_buffer_on_read_line_data(void* self, long long (*slot)(void*, char*, long long)) {
    QBuffer_OnReadLineData((QBuffer*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, long long maxSize ```
long long q_buffer_skip_data(void* self, long long maxSize) {
    return QBuffer_SkipData((QBuffer*)self, maxSize);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, long long maxSize ```
long long q_buffer_qbase_skip_data(void* self, long long maxSize) {
    return QBuffer_QBaseSkipData((QBuffer*)self, maxSize);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, long long (*slot)(QBuffer*, long long) ```
void q_buffer_on_skip_data(void* self, long long (*slot)(void*, long long)) {
    QBuffer_OnSkipData((QBuffer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, QEvent* event ```
bool q_buffer_event(void* self, void* event) {
    return QBuffer_Event((QBuffer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, QEvent* event ```
bool q_buffer_qbase_event(void* self, void* event) {
    return QBuffer_QBaseEvent((QBuffer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, bool (*slot)(QBuffer*, QEvent*) ```
void q_buffer_on_event(void* self, bool (*slot)(void*, void*)) {
    QBuffer_OnEvent((QBuffer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, QObject* watched, QEvent* event ```
bool q_buffer_event_filter(void* self, void* watched, void* event) {
    return QBuffer_EventFilter((QBuffer*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, QObject* watched, QEvent* event ```
bool q_buffer_qbase_event_filter(void* self, void* watched, void* event) {
    return QBuffer_QBaseEventFilter((QBuffer*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, bool (*slot)(QBuffer*, QObject*, QEvent*) ```
void q_buffer_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QBuffer_OnEventFilter((QBuffer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, QTimerEvent* event ```
void q_buffer_timer_event(void* self, void* event) {
    QBuffer_TimerEvent((QBuffer*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, QTimerEvent* event ```
void q_buffer_qbase_timer_event(void* self, void* event) {
    QBuffer_QBaseTimerEvent((QBuffer*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, void (*slot)(QBuffer*, QTimerEvent*) ```
void q_buffer_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QBuffer_OnTimerEvent((QBuffer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, QChildEvent* event ```
void q_buffer_child_event(void* self, void* event) {
    QBuffer_ChildEvent((QBuffer*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, QChildEvent* event ```
void q_buffer_qbase_child_event(void* self, void* event) {
    QBuffer_QBaseChildEvent((QBuffer*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, void (*slot)(QBuffer*, QChildEvent*) ```
void q_buffer_on_child_event(void* self, void (*slot)(void*, void*)) {
    QBuffer_OnChildEvent((QBuffer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, QEvent* event ```
void q_buffer_custom_event(void* self, void* event) {
    QBuffer_CustomEvent((QBuffer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, QEvent* event ```
void q_buffer_qbase_custom_event(void* self, void* event) {
    QBuffer_QBaseCustomEvent((QBuffer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, void (*slot)(QBuffer*, QEvent*) ```
void q_buffer_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QBuffer_OnCustomEvent((QBuffer*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, int openMode ```
void q_buffer_set_open_mode(void* self, int64_t openMode) {
    QBuffer_SetOpenMode((QBuffer*)self, openMode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, int openMode ```
void q_buffer_qbase_set_open_mode(void* self, int64_t openMode) {
    QBuffer_QBaseSetOpenMode((QBuffer*)self, openMode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, void (*slot)(QBuffer*, int) ```
void q_buffer_on_set_open_mode(void* self, void (*slot)(void*, int64_t)) {
    QBuffer_OnSetOpenMode((QBuffer*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, const char* errorString ```
void q_buffer_set_error_string(void* self, const char* errorString) {
    QBuffer_SetErrorString((QBuffer*)self, qstring(errorString));
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, const char* errorString ```
void q_buffer_qbase_set_error_string(void* self, const char* errorString) {
    QBuffer_QBaseSetErrorString((QBuffer*)self, qstring(errorString));
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, void (*slot)(QBuffer*, const char*) ```
void q_buffer_on_set_error_string(void* self, void (*slot)(void*, const char*)) {
    QBuffer_OnSetErrorString((QBuffer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self ```
QObject* q_buffer_sender(void* self) {
    return QBuffer_Sender((QBuffer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self ```
QObject* q_buffer_qbase_sender(void* self) {
    return QBuffer_QBaseSender((QBuffer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, QObject* (*slot)() ```
void q_buffer_on_sender(void* self, QObject* (*slot)()) {
    QBuffer_OnSender((QBuffer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self ```
int32_t q_buffer_sender_signal_index(void* self) {
    return QBuffer_SenderSignalIndex((QBuffer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self ```
int32_t q_buffer_qbase_sender_signal_index(void* self) {
    return QBuffer_QBaseSenderSignalIndex((QBuffer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, int32_t (*slot)() ```
void q_buffer_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QBuffer_OnSenderSignalIndex((QBuffer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, const char* signal ```
int32_t q_buffer_receivers(void* self, const char* signal) {
    return QBuffer_Receivers((QBuffer*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, const char* signal ```
int32_t q_buffer_qbase_receivers(void* self, const char* signal) {
    return QBuffer_QBaseReceivers((QBuffer*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, int32_t (*slot)(QBuffer*, const char*) ```
void q_buffer_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QBuffer_OnReceivers((QBuffer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBuffer* self, QMetaMethod* signal ```
bool q_buffer_is_signal_connected(void* self, void* signal) {
    return QBuffer_IsSignalConnected((QBuffer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBuffer* self, QMetaMethod* signal ```
bool q_buffer_qbase_is_signal_connected(void* self, void* signal) {
    return QBuffer_QBaseIsSignalConnected((QBuffer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBuffer* self, bool (*slot)(QBuffer*, QMetaMethod*) ```
void q_buffer_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QBuffer_OnIsSignalConnected((QBuffer*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QBuffer* self ```
void q_buffer_delete(void* self) {
    QBuffer_Delete((QBuffer*)(self));
}