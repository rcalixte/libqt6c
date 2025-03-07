#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqdatetime.hpp"
#include "libqiodevice.hpp"
#include "libqiodevicebase.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqfiledevice.hpp"
#include "libqfiledevice.h"

/// https://doc.qt.io/qt-6/qfiledevice.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QFileDevice* self ```
QMetaObject* q_filedevice_meta_object(void* self) {
    return QFileDevice_MetaObject((QFileDevice*)self);
}

/// ``` QFileDevice* self, const char* param1 ```
void* q_filedevice_metacast(void* self, const char* param1) {
    return QFileDevice_Metacast((QFileDevice*)self, param1);
}

/// ``` QFileDevice* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_filedevice_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QFileDevice_Metacall((QFileDevice*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_filedevice_tr(const char* s) {
    libqt_string _str = QFileDevice_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#error)
///
/// ``` QFileDevice* self ```
int64_t q_filedevice_error(void* self) {
    return QFileDevice_Error((QFileDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#unsetError)
///
/// ``` QFileDevice* self ```
void q_filedevice_unset_error(void* self) {
    QFileDevice_UnsetError((QFileDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#close)
///
/// ``` QFileDevice* self ```
void q_filedevice_close(void* self) {
    QFileDevice_Close((QFileDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// ``` QFileDevice* self ```
bool q_filedevice_is_sequential(void* self) {
    return QFileDevice_IsSequential((QFileDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#handle)
///
/// ``` QFileDevice* self ```
int32_t q_filedevice_handle(void* self) {
    return QFileDevice_Handle((QFileDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#fileName)
///
/// ``` QFileDevice* self ```
const char* q_filedevice_file_name(void* self) {
    libqt_string _str = QFileDevice_FileName((QFileDevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// ``` QFileDevice* self ```
long long q_filedevice_pos(void* self) {
    return QFileDevice_Pos((QFileDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// ``` QFileDevice* self, long long offset ```
bool q_filedevice_seek(void* self, long long offset) {
    return QFileDevice_Seek((QFileDevice*)self, offset);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// ``` QFileDevice* self ```
bool q_filedevice_at_end(void* self) {
    return QFileDevice_AtEnd((QFileDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#flush)
///
/// ``` QFileDevice* self ```
bool q_filedevice_flush(void* self) {
    return QFileDevice_Flush((QFileDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#size)
///
/// ``` QFileDevice* self ```
long long q_filedevice_size(void* self) {
    return QFileDevice_Size((QFileDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#resize)
///
/// ``` QFileDevice* self, long long sz ```
bool q_filedevice_resize(void* self, long long sz) {
    return QFileDevice_Resize((QFileDevice*)self, sz);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#permissions)
///
/// ``` QFileDevice* self ```
int64_t q_filedevice_permissions(void* self) {
    return QFileDevice_Permissions((QFileDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#setPermissions)
///
/// ``` QFileDevice* self, int permissionSpec ```
bool q_filedevice_set_permissions(void* self, int64_t permissionSpec) {
    return QFileDevice_SetPermissions((QFileDevice*)self, permissionSpec);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// ``` QFileDevice* self, long long offset, long long size ```
unsigned char* q_filedevice_map(void* self, long long offset, long long size) {
    return (unsigned char*)QFileDevice_Map((QFileDevice*)self, offset, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#unmap)
///
/// ``` QFileDevice* self, unsigned char* address ```
bool q_filedevice_unmap(void* self, unsigned char* address) {
    return QFileDevice_Unmap((QFileDevice*)self, address);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#fileTime)
///
/// ``` QFileDevice* self, enum QFileDevice__FileTime time ```
QDateTime* q_filedevice_file_time(void* self, int64_t time) {
    return QFileDevice_FileTime((QFileDevice*)self, time);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#setFileTime)
///
/// ``` QFileDevice* self, QDateTime* newDate, enum QFileDevice__FileTime fileTime ```
bool q_filedevice_set_file_time(void* self, void* newDate, int64_t fileTime) {
    return QFileDevice_SetFileTime((QFileDevice*)self, (QDateTime*)newDate, fileTime);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_filedevice_tr2(const char* s, const char* c) {
    libqt_string _str = QFileDevice_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_filedevice_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QFileDevice_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// ``` QFileDevice* self, long long offset, long long size, int flags ```
unsigned char* q_filedevice_map3(void* self, long long offset, long long size, int64_t flags) {
    return (unsigned char*)QFileDevice_Map3((QFileDevice*)self, offset, size, flags);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QFileDevice* self ```
int64_t q_filedevice_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QFileDevice* self, bool enabled ```
void q_filedevice_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QFileDevice* self ```
bool q_filedevice_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QFileDevice* self ```
bool q_filedevice_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QFileDevice* self ```
bool q_filedevice_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QFileDevice* self ```
bool q_filedevice_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QFileDevice* self ```
int32_t q_filedevice_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QFileDevice* self ```
int32_t q_filedevice_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QFileDevice* self ```
int32_t q_filedevice_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QFileDevice* self, int channel ```
void q_filedevice_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QFileDevice* self ```
int32_t q_filedevice_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QFileDevice* self, int channel ```
void q_filedevice_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// ``` QFileDevice* self, int mode ```
bool q_filedevice_open(void* self, int64_t mode) {
    return QIODevice_Open((QIODevice*)self, mode);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// ``` QFileDevice* self ```
bool q_filedevice_reset(void* self) {
    return QIODevice_Reset((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// ``` QFileDevice* self ```
long long q_filedevice_bytes_available(void* self) {
    return QIODevice_BytesAvailable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// ``` QFileDevice* self ```
long long q_filedevice_bytes_to_write(void* self) {
    return QIODevice_BytesToWrite((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QFileDevice* self, char* data, long long maxlen ```
long long q_filedevice_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QFileDevice* self, long long maxlen ```
char* q_filedevice_read_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QFileDevice* self ```
char* q_filedevice_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QFileDevice* self, char* data, long long maxlen ```
long long q_filedevice_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QFileDevice* self ```
char* q_filedevice_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// ``` QFileDevice* self ```
bool q_filedevice_can_read_line(void* self) {
    return QIODevice_CanReadLine((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QFileDevice* self ```
void q_filedevice_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QFileDevice* self ```
void q_filedevice_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QFileDevice* self ```
void q_filedevice_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QFileDevice* self ```
bool q_filedevice_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QFileDevice* self, const char* data, long long lenVal ```
long long q_filedevice_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QFileDevice* self, const char* data ```
long long q_filedevice_write_with_data(void* self, const char* data) {
    return QIODevice_WriteWithData((QIODevice*)self, data);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QFileDevice* self, const char* data ```
long long q_filedevice_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, qstring(data));
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QFileDevice* self, char* data, long long maxlen ```
long long q_filedevice_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QFileDevice* self, long long maxlen ```
char* q_filedevice_peek_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_PeekWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QFileDevice* self, long long maxSize ```
long long q_filedevice_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// ``` QFileDevice* self, int msecs ```
bool q_filedevice_wait_for_ready_read(void* self, int msecs) {
    return QIODevice_WaitForReadyRead((QIODevice*)self, msecs);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// ``` QFileDevice* self, int msecs ```
bool q_filedevice_wait_for_bytes_written(void* self, int msecs) {
    return QIODevice_WaitForBytesWritten((QIODevice*)self, msecs);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QFileDevice* self, char c ```
void q_filedevice_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QFileDevice* self, char c ```
bool q_filedevice_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QFileDevice* self, char* c ```
bool q_filedevice_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QFileDevice* self ```
const char* q_filedevice_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QFileDevice* self ```
void q_filedevice_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QFileDevice* self, void (*slot)(QIODevice*) ```
void q_filedevice_on_ready_read(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QFileDevice* self, int channel ```
void q_filedevice_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// ``` QFileDevice* self, void (*slot)(QIODevice*, int) ```
void q_filedevice_on_channel_ready_read(void* self, void (*slot)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QFileDevice* self, long long bytes ```
void q_filedevice_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

/// Inherited from QIODevice
///
/// ``` QFileDevice* self, void (*slot)(QIODevice*, long long) ```
void q_filedevice_on_bytes_written(void* self, void (*slot)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QFileDevice* self, int channel, long long bytes ```
void q_filedevice_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

/// Inherited from QIODevice
///
/// ``` QFileDevice* self, void (*slot)(QIODevice*, int, long long) ```
void q_filedevice_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QFileDevice* self ```
void q_filedevice_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QFileDevice* self, void (*slot)(QIODevice*) ```
void q_filedevice_on_about_to_close(void* self, void (*slot)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QFileDevice* self ```
void q_filedevice_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QFileDevice* self, void (*slot)(QIODevice*) ```
void q_filedevice_on_read_channel_finished(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QFileDevice* self, long long maxlen ```
char* q_filedevice_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QFileDevice* self, QEvent* event ```
bool q_filedevice_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QFileDevice* self, QObject* watched, QEvent* event ```
bool q_filedevice_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QFileDevice* self ```
const char* q_filedevice_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QFileDevice* self, const char* name ```
void q_filedevice_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QFileDevice* self ```
bool q_filedevice_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QFileDevice* self ```
bool q_filedevice_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QFileDevice* self ```
bool q_filedevice_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QFileDevice* self ```
bool q_filedevice_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QFileDevice* self, bool b ```
bool q_filedevice_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QFileDevice* self ```
QThread* q_filedevice_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QFileDevice* self, QThread* thread ```
void q_filedevice_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFileDevice* self, int interval ```
int32_t q_filedevice_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QFileDevice* self, int id ```
void q_filedevice_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QFileDevice* self ```
libqt_list /* of QObject* */ q_filedevice_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QFileDevice* self, QObject* parent ```
void q_filedevice_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QFileDevice* self, QObject* filterObj ```
void q_filedevice_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QFileDevice* self, QObject* obj ```
void q_filedevice_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_filedevice_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFileDevice* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_filedevice_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_filedevice_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_filedevice_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QFileDevice* self ```
void q_filedevice_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QFileDevice* self ```
void q_filedevice_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QFileDevice* self, const char* name, QVariant* value ```
bool q_filedevice_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QFileDevice* self, const char* name ```
QVariant* q_filedevice_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QFileDevice* self ```
const char** q_filedevice_dynamic_property_names(void* self) {
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
/// ``` QFileDevice* self ```
QBindingStorage* q_filedevice_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFileDevice* self ```
QBindingStorage* q_filedevice_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFileDevice* self ```
void q_filedevice_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QFileDevice* self, void (*slot)(QObject*) ```
void q_filedevice_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QFileDevice* self ```
QObject* q_filedevice_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QFileDevice* self, const char* classname ```
bool q_filedevice_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QFileDevice* self ```
void q_filedevice_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFileDevice* self, int interval, enum Qt__TimerType timerType ```
int32_t q_filedevice_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_filedevice_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFileDevice* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_filedevice_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFileDevice* self, QObject* param1 ```
void q_filedevice_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QFileDevice* self, void (*slot)(QObject*, QObject*) ```
void q_filedevice_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QFileDevice* self ```
void q_filedevice_delete(void* self) {
    QFileDevice_Delete((QFileDevice*)(self));
}