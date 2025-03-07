#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqiodevicebase.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqiodevice.hpp"
#include "libqiodevice.h"

/// https://doc.qt.io/qt-6/qiodevice.html

/// q_iodevice_new constructs a new QIODevice object.
///
///
QIODevice* q_iodevice_new() {
    return QIODevice_new();
}

/// q_iodevice_new2 constructs a new QIODevice object.
///
/// ``` QObject* parent ```
QIODevice* q_iodevice_new2(void* parent) {
    return QIODevice_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QIODevice* self ```
QMetaObject* q_iodevice_meta_object(void* self) {
    return QIODevice_MetaObject((QIODevice*)self);
}

/// ``` QIODevice* self, const char* param1 ```
void* q_iodevice_metacast(void* self, const char* param1) {
    return QIODevice_Metacast((QIODevice*)self, param1);
}

/// ``` QIODevice* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_iodevice_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QIODevice_Metacall((QIODevice*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QIODevice* self, int32_t (*slot)(QIODevice*, enum QMetaObject__Call, int, void*) ```
void q_iodevice_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QIODevice_OnMetacall((QIODevice*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIODevice* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_iodevice_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QIODevice_QBaseMetacall((QIODevice*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_iodevice_tr(const char* s) {
    libqt_string _str = QIODevice_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QIODevice* self ```
int64_t q_iodevice_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QIODevice* self, bool enabled ```
void q_iodevice_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QIODevice* self ```
bool q_iodevice_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QIODevice* self ```
bool q_iodevice_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QIODevice* self ```
bool q_iodevice_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QIODevice* self ```
bool q_iodevice_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isSequential)
///
/// ``` QIODevice* self ```
bool q_iodevice_is_sequential(void* self) {
    return QIODevice_IsSequential((QIODevice*)self);
}

/// Allows for overriding the related default method
///
/// ``` QIODevice* self, bool (*slot)() ```
void q_iodevice_on_is_sequential(void* self, bool (*slot)()) {
    QIODevice_OnIsSequential((QIODevice*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIODevice* self ```
bool q_iodevice_qbase_is_sequential(void* self) {
    return QIODevice_QBaseIsSequential((QIODevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QIODevice* self ```
int32_t q_iodevice_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QIODevice* self ```
int32_t q_iodevice_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QIODevice* self ```
int32_t q_iodevice_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QIODevice* self, int channel ```
void q_iodevice_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QIODevice* self ```
int32_t q_iodevice_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QIODevice* self, int channel ```
void q_iodevice_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// ``` QIODevice* self, int mode ```
bool q_iodevice_open(void* self, int64_t mode) {
    return QIODevice_Open((QIODevice*)self, mode);
}

/// Allows for overriding the related default method
///
/// ``` QIODevice* self, bool (*slot)(QIODevice*, int) ```
void q_iodevice_on_open(void* self, bool (*slot)(void*, int64_t)) {
    QIODevice_OnOpen((QIODevice*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIODevice* self, int mode ```
bool q_iodevice_qbase_open(void* self, int64_t mode) {
    return QIODevice_QBaseOpen((QIODevice*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#close)
///
/// ``` QIODevice* self ```
void q_iodevice_close(void* self) {
    QIODevice_Close((QIODevice*)self);
}

/// Allows for overriding the related default method
///
/// ``` QIODevice* self, void (*slot)() ```
void q_iodevice_on_close(void* self, void (*slot)()) {
    QIODevice_OnClose((QIODevice*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIODevice* self ```
void q_iodevice_qbase_close(void* self) {
    QIODevice_QBaseClose((QIODevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// ``` QIODevice* self ```
long long q_iodevice_pos(void* self) {
    return QIODevice_Pos((QIODevice*)self);
}

/// Allows for overriding the related default method
///
/// ``` QIODevice* self, long long (*slot)() ```
void q_iodevice_on_pos(void* self, long long (*slot)()) {
    QIODevice_OnPos((QIODevice*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIODevice* self ```
long long q_iodevice_qbase_pos(void* self) {
    return QIODevice_QBasePos((QIODevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// ``` QIODevice* self ```
long long q_iodevice_size(void* self) {
    return QIODevice_Size((QIODevice*)self);
}

/// Allows for overriding the related default method
///
/// ``` QIODevice* self, long long (*slot)() ```
void q_iodevice_on_size(void* self, long long (*slot)()) {
    QIODevice_OnSize((QIODevice*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIODevice* self ```
long long q_iodevice_qbase_size(void* self) {
    return QIODevice_QBaseSize((QIODevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// ``` QIODevice* self, long long pos ```
bool q_iodevice_seek(void* self, long long pos) {
    return QIODevice_Seek((QIODevice*)self, pos);
}

/// Allows for overriding the related default method
///
/// ``` QIODevice* self, bool (*slot)(QIODevice*, long long) ```
void q_iodevice_on_seek(void* self, bool (*slot)(void*, long long)) {
    QIODevice_OnSeek((QIODevice*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIODevice* self, long long pos ```
bool q_iodevice_qbase_seek(void* self, long long pos) {
    return QIODevice_QBaseSeek((QIODevice*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// ``` QIODevice* self ```
bool q_iodevice_at_end(void* self) {
    return QIODevice_AtEnd((QIODevice*)self);
}

/// Allows for overriding the related default method
///
/// ``` QIODevice* self, bool (*slot)() ```
void q_iodevice_on_at_end(void* self, bool (*slot)()) {
    QIODevice_OnAtEnd((QIODevice*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIODevice* self ```
bool q_iodevice_qbase_at_end(void* self) {
    return QIODevice_QBaseAtEnd((QIODevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// ``` QIODevice* self ```
bool q_iodevice_reset(void* self) {
    return QIODevice_Reset((QIODevice*)self);
}

/// Allows for overriding the related default method
///
/// ``` QIODevice* self, bool (*slot)() ```
void q_iodevice_on_reset(void* self, bool (*slot)()) {
    QIODevice_OnReset((QIODevice*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIODevice* self ```
bool q_iodevice_qbase_reset(void* self) {
    return QIODevice_QBaseReset((QIODevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// ``` QIODevice* self ```
long long q_iodevice_bytes_available(void* self) {
    return QIODevice_BytesAvailable((QIODevice*)self);
}

/// Allows for overriding the related default method
///
/// ``` QIODevice* self, long long (*slot)() ```
void q_iodevice_on_bytes_available(void* self, long long (*slot)()) {
    QIODevice_OnBytesAvailable((QIODevice*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIODevice* self ```
long long q_iodevice_qbase_bytes_available(void* self) {
    return QIODevice_QBaseBytesAvailable((QIODevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// ``` QIODevice* self ```
long long q_iodevice_bytes_to_write(void* self) {
    return QIODevice_BytesToWrite((QIODevice*)self);
}

/// Allows for overriding the related default method
///
/// ``` QIODevice* self, long long (*slot)() ```
void q_iodevice_on_bytes_to_write(void* self, long long (*slot)()) {
    QIODevice_OnBytesToWrite((QIODevice*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIODevice* self ```
long long q_iodevice_qbase_bytes_to_write(void* self) {
    return QIODevice_QBaseBytesToWrite((QIODevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QIODevice* self, char* data, long long maxlen ```
long long q_iodevice_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QIODevice* self, long long maxlen ```
char* q_iodevice_read_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QIODevice* self ```
char* q_iodevice_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QIODevice* self, char* data, long long maxlen ```
long long q_iodevice_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QIODevice* self ```
char* q_iodevice_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// ``` QIODevice* self ```
bool q_iodevice_can_read_line(void* self) {
    return QIODevice_CanReadLine((QIODevice*)self);
}

/// Allows for overriding the related default method
///
/// ``` QIODevice* self, bool (*slot)() ```
void q_iodevice_on_can_read_line(void* self, bool (*slot)()) {
    QIODevice_OnCanReadLine((QIODevice*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIODevice* self ```
bool q_iodevice_qbase_can_read_line(void* self) {
    return QIODevice_QBaseCanReadLine((QIODevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QIODevice* self ```
void q_iodevice_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QIODevice* self ```
void q_iodevice_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QIODevice* self ```
void q_iodevice_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QIODevice* self ```
bool q_iodevice_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QIODevice* self, const char* data, long long lenVal ```
long long q_iodevice_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QIODevice* self, const char* data ```
long long q_iodevice_write_with_data(void* self, const char* data) {
    return QIODevice_WriteWithData((QIODevice*)self, data);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QIODevice* self, const char* data ```
long long q_iodevice_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, qstring(data));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QIODevice* self, char* data, long long maxlen ```
long long q_iodevice_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QIODevice* self, long long maxlen ```
char* q_iodevice_peek_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_PeekWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QIODevice* self, long long maxSize ```
long long q_iodevice_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// ``` QIODevice* self, int msecs ```
bool q_iodevice_wait_for_ready_read(void* self, int msecs) {
    return QIODevice_WaitForReadyRead((QIODevice*)self, msecs);
}

/// Allows for overriding the related default method
///
/// ``` QIODevice* self, bool (*slot)(QIODevice*, int) ```
void q_iodevice_on_wait_for_ready_read(void* self, bool (*slot)(void*, int)) {
    QIODevice_OnWaitForReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIODevice* self, int msecs ```
bool q_iodevice_qbase_wait_for_ready_read(void* self, int msecs) {
    return QIODevice_QBaseWaitForReadyRead((QIODevice*)self, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// ``` QIODevice* self, int msecs ```
bool q_iodevice_wait_for_bytes_written(void* self, int msecs) {
    return QIODevice_WaitForBytesWritten((QIODevice*)self, msecs);
}

/// Allows for overriding the related default method
///
/// ``` QIODevice* self, bool (*slot)(QIODevice*, int) ```
void q_iodevice_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int)) {
    QIODevice_OnWaitForBytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIODevice* self, int msecs ```
bool q_iodevice_qbase_wait_for_bytes_written(void* self, int msecs) {
    return QIODevice_QBaseWaitForBytesWritten((QIODevice*)self, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QIODevice* self, char c ```
void q_iodevice_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QIODevice* self, char c ```
bool q_iodevice_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QIODevice* self, char* c ```
bool q_iodevice_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QIODevice* self ```
const char* q_iodevice_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QIODevice* self ```
void q_iodevice_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

/// ``` QIODevice* self, void (*slot)(QIODevice*) ```
void q_iodevice_on_ready_read(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QIODevice* self, int channel ```
void q_iodevice_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

/// ``` QIODevice* self, void (*slot)(QIODevice*, int) ```
void q_iodevice_on_channel_ready_read(void* self, void (*slot)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QIODevice* self, long long bytes ```
void q_iodevice_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

/// ``` QIODevice* self, void (*slot)(QIODevice*, long long) ```
void q_iodevice_on_bytes_written(void* self, void (*slot)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QIODevice* self, int channel, long long bytes ```
void q_iodevice_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

/// ``` QIODevice* self, void (*slot)(QIODevice*, int, long long) ```
void q_iodevice_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QIODevice* self ```
void q_iodevice_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

/// ``` QIODevice* self, void (*slot)(QIODevice*) ```
void q_iodevice_on_about_to_close(void* self, void (*slot)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QIODevice* self ```
void q_iodevice_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

/// ``` QIODevice* self, void (*slot)(QIODevice*) ```
void q_iodevice_on_read_channel_finished(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readData)
///
/// ``` QIODevice* self, char* data, long long maxlen ```
long long q_iodevice_read_data(void* self, char* data, long long maxlen) {
    return QIODevice_ReadData((QIODevice*)self, data, maxlen);
}

/// Allows for overriding the related default method
///
/// ``` QIODevice* self, long long (*slot)(QIODevice*, char*, long long) ```
void q_iodevice_on_read_data(void* self, long long (*slot)(void*, char*, long long)) {
    QIODevice_OnReadData((QIODevice*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIODevice* self, char* data, long long maxlen ```
long long q_iodevice_qbase_read_data(void* self, char* data, long long maxlen) {
    return QIODevice_QBaseReadData((QIODevice*)self, data, maxlen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// ``` QIODevice* self, char* data, long long maxlen ```
long long q_iodevice_read_line_data(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLineData((QIODevice*)self, data, maxlen);
}

/// Allows for overriding the related default method
///
/// ``` QIODevice* self, long long (*slot)(QIODevice*, char*, long long) ```
void q_iodevice_on_read_line_data(void* self, long long (*slot)(void*, char*, long long)) {
    QIODevice_OnReadLineData((QIODevice*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIODevice* self, char* data, long long maxlen ```
long long q_iodevice_qbase_read_line_data(void* self, char* data, long long maxlen) {
    return QIODevice_QBaseReadLineData((QIODevice*)self, data, maxlen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// ``` QIODevice* self, long long maxSize ```
long long q_iodevice_skip_data(void* self, long long maxSize) {
    return QIODevice_SkipData((QIODevice*)self, maxSize);
}

/// Allows for overriding the related default method
///
/// ``` QIODevice* self, long long (*slot)(QIODevice*, long long) ```
void q_iodevice_on_skip_data(void* self, long long (*slot)(void*, long long)) {
    QIODevice_OnSkipData((QIODevice*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIODevice* self, long long maxSize ```
long long q_iodevice_qbase_skip_data(void* self, long long maxSize) {
    return QIODevice_QBaseSkipData((QIODevice*)self, maxSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeData)
///
/// ``` QIODevice* self, const char* data, long long lenVal ```
long long q_iodevice_write_data(void* self, const char* data, long long lenVal) {
    return QIODevice_WriteData((QIODevice*)self, data, lenVal);
}

/// Allows for overriding the related default method
///
/// ``` QIODevice* self, long long (*slot)(QIODevice*, const char*, long long) ```
void q_iodevice_on_write_data(void* self, long long (*slot)(void*, const char*, long long)) {
    QIODevice_OnWriteData((QIODevice*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIODevice* self, const char* data, long long lenVal ```
long long q_iodevice_qbase_write_data(void* self, const char* data, long long lenVal) {
    return QIODevice_QBaseWriteData((QIODevice*)self, data, lenVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// ``` QIODevice* self, int openMode ```
void q_iodevice_set_open_mode(void* self, int64_t openMode) {
    QIODevice_SetOpenMode((QIODevice*)self, openMode);
}

/// Allows for overriding the related default method
///
/// ``` QIODevice* self, void (*slot)(QIODevice*, int) ```
void q_iodevice_on_set_open_mode(void* self, void (*slot)(void*, int64_t)) {
    QIODevice_OnSetOpenMode((QIODevice*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIODevice* self, int openMode ```
void q_iodevice_qbase_set_open_mode(void* self, int64_t openMode) {
    QIODevice_QBaseSetOpenMode((QIODevice*)self, openMode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// ``` QIODevice* self, const char* errorString ```
void q_iodevice_set_error_string(void* self, const char* errorString) {
    QIODevice_SetErrorString((QIODevice*)self, qstring(errorString));
}

/// Allows for overriding the related default method
///
/// ``` QIODevice* self, void (*slot)(QIODevice*, const char*) ```
void q_iodevice_on_set_error_string(void* self, void (*slot)(void*, const char*)) {
    QIODevice_OnSetErrorString((QIODevice*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QIODevice* self, const char* errorString ```
void q_iodevice_qbase_set_error_string(void* self, const char* errorString) {
    QIODevice_QBaseSetErrorString((QIODevice*)self, qstring(errorString));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_iodevice_tr2(const char* s, const char* c) {
    libqt_string _str = QIODevice_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_iodevice_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QIODevice_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QIODevice* self, long long maxlen ```
char* q_iodevice_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QIODevice* self ```
const char* q_iodevice_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QIODevice* self, const char* name ```
void q_iodevice_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QIODevice* self ```
bool q_iodevice_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QIODevice* self ```
bool q_iodevice_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QIODevice* self ```
bool q_iodevice_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QIODevice* self ```
bool q_iodevice_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QIODevice* self, bool b ```
bool q_iodevice_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QIODevice* self ```
QThread* q_iodevice_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QIODevice* self, QThread* thread ```
void q_iodevice_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QIODevice* self, int interval ```
int32_t q_iodevice_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QIODevice* self, int id ```
void q_iodevice_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QIODevice* self ```
libqt_list /* of QObject* */ q_iodevice_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QIODevice* self, QObject* parent ```
void q_iodevice_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QIODevice* self, QObject* filterObj ```
void q_iodevice_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QIODevice* self, QObject* obj ```
void q_iodevice_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_iodevice_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QIODevice* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_iodevice_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_iodevice_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_iodevice_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QIODevice* self ```
void q_iodevice_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QIODevice* self ```
void q_iodevice_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QIODevice* self, const char* name, QVariant* value ```
bool q_iodevice_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QIODevice* self, const char* name ```
QVariant* q_iodevice_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QIODevice* self ```
const char** q_iodevice_dynamic_property_names(void* self) {
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
/// ``` QIODevice* self ```
QBindingStorage* q_iodevice_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QIODevice* self ```
QBindingStorage* q_iodevice_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QIODevice* self ```
void q_iodevice_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QIODevice* self, void (*slot)(QObject*) ```
void q_iodevice_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QIODevice* self ```
QObject* q_iodevice_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QIODevice* self, const char* classname ```
bool q_iodevice_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QIODevice* self ```
void q_iodevice_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QIODevice* self, int interval, enum Qt__TimerType timerType ```
int32_t q_iodevice_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_iodevice_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QIODevice* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_iodevice_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QIODevice* self, QObject* param1 ```
void q_iodevice_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QIODevice* self, void (*slot)(QObject*, QObject*) ```
void q_iodevice_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIODevice* self, QEvent* event ```
bool q_iodevice_event(void* self, void* event) {
    return QIODevice_Event((QIODevice*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIODevice* self, QEvent* event ```
bool q_iodevice_qbase_event(void* self, void* event) {
    return QIODevice_QBaseEvent((QIODevice*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIODevice* self, bool (*slot)(QIODevice*, QEvent*) ```
void q_iodevice_on_event(void* self, bool (*slot)(void*, void*)) {
    QIODevice_OnEvent((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIODevice* self, QObject* watched, QEvent* event ```
bool q_iodevice_event_filter(void* self, void* watched, void* event) {
    return QIODevice_EventFilter((QIODevice*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIODevice* self, QObject* watched, QEvent* event ```
bool q_iodevice_qbase_event_filter(void* self, void* watched, void* event) {
    return QIODevice_QBaseEventFilter((QIODevice*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIODevice* self, bool (*slot)(QIODevice*, QObject*, QEvent*) ```
void q_iodevice_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QIODevice_OnEventFilter((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIODevice* self, QTimerEvent* event ```
void q_iodevice_timer_event(void* self, void* event) {
    QIODevice_TimerEvent((QIODevice*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIODevice* self, QTimerEvent* event ```
void q_iodevice_qbase_timer_event(void* self, void* event) {
    QIODevice_QBaseTimerEvent((QIODevice*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIODevice* self, void (*slot)(QIODevice*, QTimerEvent*) ```
void q_iodevice_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QIODevice_OnTimerEvent((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIODevice* self, QChildEvent* event ```
void q_iodevice_child_event(void* self, void* event) {
    QIODevice_ChildEvent((QIODevice*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIODevice* self, QChildEvent* event ```
void q_iodevice_qbase_child_event(void* self, void* event) {
    QIODevice_QBaseChildEvent((QIODevice*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIODevice* self, void (*slot)(QIODevice*, QChildEvent*) ```
void q_iodevice_on_child_event(void* self, void (*slot)(void*, void*)) {
    QIODevice_OnChildEvent((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIODevice* self, QEvent* event ```
void q_iodevice_custom_event(void* self, void* event) {
    QIODevice_CustomEvent((QIODevice*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIODevice* self, QEvent* event ```
void q_iodevice_qbase_custom_event(void* self, void* event) {
    QIODevice_QBaseCustomEvent((QIODevice*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIODevice* self, void (*slot)(QIODevice*, QEvent*) ```
void q_iodevice_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QIODevice_OnCustomEvent((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIODevice* self, QMetaMethod* signal ```
void q_iodevice_connect_notify(void* self, void* signal) {
    QIODevice_ConnectNotify((QIODevice*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIODevice* self, QMetaMethod* signal ```
void q_iodevice_qbase_connect_notify(void* self, void* signal) {
    QIODevice_QBaseConnectNotify((QIODevice*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIODevice* self, void (*slot)(QIODevice*, QMetaMethod*) ```
void q_iodevice_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QIODevice_OnConnectNotify((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIODevice* self, QMetaMethod* signal ```
void q_iodevice_disconnect_notify(void* self, void* signal) {
    QIODevice_DisconnectNotify((QIODevice*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIODevice* self, QMetaMethod* signal ```
void q_iodevice_qbase_disconnect_notify(void* self, void* signal) {
    QIODevice_QBaseDisconnectNotify((QIODevice*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIODevice* self, void (*slot)(QIODevice*, QMetaMethod*) ```
void q_iodevice_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QIODevice_OnDisconnectNotify((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIODevice* self ```
QObject* q_iodevice_sender(void* self) {
    return QIODevice_Sender((QIODevice*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIODevice* self ```
QObject* q_iodevice_qbase_sender(void* self) {
    return QIODevice_QBaseSender((QIODevice*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIODevice* self, QObject* (*slot)() ```
void q_iodevice_on_sender(void* self, QObject* (*slot)()) {
    QIODevice_OnSender((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIODevice* self ```
int32_t q_iodevice_sender_signal_index(void* self) {
    return QIODevice_SenderSignalIndex((QIODevice*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIODevice* self ```
int32_t q_iodevice_qbase_sender_signal_index(void* self) {
    return QIODevice_QBaseSenderSignalIndex((QIODevice*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIODevice* self, int32_t (*slot)() ```
void q_iodevice_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QIODevice_OnSenderSignalIndex((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIODevice* self, const char* signal ```
int32_t q_iodevice_receivers(void* self, const char* signal) {
    return QIODevice_Receivers((QIODevice*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIODevice* self, const char* signal ```
int32_t q_iodevice_qbase_receivers(void* self, const char* signal) {
    return QIODevice_QBaseReceivers((QIODevice*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIODevice* self, int32_t (*slot)(QIODevice*, const char*) ```
void q_iodevice_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QIODevice_OnReceivers((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QIODevice* self, QMetaMethod* signal ```
bool q_iodevice_is_signal_connected(void* self, void* signal) {
    return QIODevice_IsSignalConnected((QIODevice*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QIODevice* self, QMetaMethod* signal ```
bool q_iodevice_qbase_is_signal_connected(void* self, void* signal) {
    return QIODevice_QBaseIsSignalConnected((QIODevice*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QIODevice* self, bool (*slot)(QIODevice*, QMetaMethod*) ```
void q_iodevice_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QIODevice_OnIsSignalConnected((QIODevice*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QIODevice* self ```
void q_iodevice_delete(void* self) {
    QIODevice_Delete((QIODevice*)(self));
}