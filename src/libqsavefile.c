#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqdatetime.hpp"
#include "libqfiledevice.hpp"
#include "libqiodevice.hpp"
#include "libqiodevicebase.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqsavefile.hpp"
#include "libqsavefile.h"

/// https://doc.qt.io/qt-6/qsavefile.html

/// q_savefile_new constructs a new QSaveFile object.
///
/// ``` const char* name ```
QSaveFile* q_savefile_new(const char* name) {
    return QSaveFile_new(qstring(name));
}

/// q_savefile_new2 constructs a new QSaveFile object.
///
///
QSaveFile* q_savefile_new2() {
    return QSaveFile_new2();
}

/// q_savefile_new3 constructs a new QSaveFile object.
///
/// ``` const char* name, QObject* parent ```
QSaveFile* q_savefile_new3(const char* name, void* parent) {
    return QSaveFile_new3(qstring(name), (QObject*)parent);
}

/// q_savefile_new4 constructs a new QSaveFile object.
///
/// ``` QObject* parent ```
QSaveFile* q_savefile_new4(void* parent) {
    return QSaveFile_new4((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSaveFile* self ```
QMetaObject* q_savefile_meta_object(void* self) {
    return QSaveFile_MetaObject((QSaveFile*)self);
}

/// ``` QSaveFile* self, const char* param1 ```
void* q_savefile_metacast(void* self, const char* param1) {
    return QSaveFile_Metacast((QSaveFile*)self, param1);
}

/// ``` QSaveFile* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_savefile_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSaveFile_Metacall((QSaveFile*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QSaveFile* self, int32_t (*slot)(QSaveFile*, enum QMetaObject__Call, int, void*) ```
void q_savefile_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSaveFile_OnMetacall((QSaveFile*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSaveFile* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_savefile_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSaveFile_QBaseMetacall((QSaveFile*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_savefile_tr(const char* s) {
    libqt_string _str = QSaveFile_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#fileName)
///
/// ``` QSaveFile* self ```
const char* q_savefile_file_name(void* self) {
    libqt_string _str = QSaveFile_FileName((QSaveFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Allows for overriding the related default method
///
/// ``` QSaveFile* self, const char* (*slot)() ```
void q_savefile_on_file_name(void* self, const char* (*slot)()) {
    QSaveFile_OnFileName((QSaveFile*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSaveFile* self ```
const char* q_savefile_qbase_file_name(void* self) {
    libqt_string _str = QSaveFile_QBaseFileName((QSaveFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#setFileName)
///
/// ``` QSaveFile* self, const char* name ```
void q_savefile_set_file_name(void* self, const char* name) {
    QSaveFile_SetFileName((QSaveFile*)self, qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#open)
///
/// ``` QSaveFile* self, int flags ```
bool q_savefile_open(void* self, int64_t flags) {
    return QSaveFile_Open((QSaveFile*)self, flags);
}

/// Allows for overriding the related default method
///
/// ``` QSaveFile* self, bool (*slot)(QSaveFile*, int) ```
void q_savefile_on_open(void* self, bool (*slot)(void*, int64_t)) {
    QSaveFile_OnOpen((QSaveFile*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSaveFile* self, int flags ```
bool q_savefile_qbase_open(void* self, int64_t flags) {
    return QSaveFile_QBaseOpen((QSaveFile*)self, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#commit)
///
/// ``` QSaveFile* self ```
bool q_savefile_commit(void* self) {
    return QSaveFile_Commit((QSaveFile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#cancelWriting)
///
/// ``` QSaveFile* self ```
void q_savefile_cancel_writing(void* self) {
    QSaveFile_CancelWriting((QSaveFile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#setDirectWriteFallback)
///
/// ``` QSaveFile* self, bool enabled ```
void q_savefile_set_direct_write_fallback(void* self, bool enabled) {
    QSaveFile_SetDirectWriteFallback((QSaveFile*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#directWriteFallback)
///
/// ``` QSaveFile* self ```
bool q_savefile_direct_write_fallback(void* self) {
    return QSaveFile_DirectWriteFallback((QSaveFile*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsavefile.html#writeData)
///
/// ``` QSaveFile* self, const char* data, long long lenVal ```
long long q_savefile_write_data(void* self, const char* data, long long lenVal) {
    return QSaveFile_WriteData((QSaveFile*)self, data, lenVal);
}

/// Allows for overriding the related default method
///
/// ``` QSaveFile* self, long long (*slot)(QSaveFile*, const char*, long long) ```
void q_savefile_on_write_data(void* self, long long (*slot)(void*, const char*, long long)) {
    QSaveFile_OnWriteData((QSaveFile*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSaveFile* self, const char* data, long long lenVal ```
long long q_savefile_qbase_write_data(void* self, const char* data, long long lenVal) {
    return QSaveFile_QBaseWriteData((QSaveFile*)self, data, lenVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_savefile_tr2(const char* s, const char* c) {
    libqt_string _str = QSaveFile_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_savefile_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSaveFile_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#error)
///
/// ``` QSaveFile* self ```
int64_t q_savefile_error(void* self) {
    return QFileDevice_Error((QFileDevice*)self);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#unsetError)
///
/// ``` QSaveFile* self ```
void q_savefile_unset_error(void* self) {
    QFileDevice_UnsetError((QFileDevice*)self);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#close)
///
/// ``` QSaveFile* self ```
void q_savefile_close(void* self) {
    QFileDevice_Close((QFileDevice*)self);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#handle)
///
/// ``` QSaveFile* self ```
int32_t q_savefile_handle(void* self) {
    return QFileDevice_Handle((QFileDevice*)self);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#flush)
///
/// ``` QSaveFile* self ```
bool q_savefile_flush(void* self) {
    return QFileDevice_Flush((QFileDevice*)self);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// ``` QSaveFile* self, long long offset, long long size ```
unsigned char* q_savefile_map(void* self, long long offset, long long size) {
    return (unsigned char*)QFileDevice_Map((QFileDevice*)self, offset, size);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#unmap)
///
/// ``` QSaveFile* self, unsigned char* address ```
bool q_savefile_unmap(void* self, unsigned char* address) {
    return QFileDevice_Unmap((QFileDevice*)self, address);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#fileTime)
///
/// ``` QSaveFile* self, enum QFileDevice__FileTime time ```
QDateTime* q_savefile_file_time(void* self, int64_t time) {
    return QFileDevice_FileTime((QFileDevice*)self, time);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#setFileTime)
///
/// ``` QSaveFile* self, QDateTime* newDate, enum QFileDevice__FileTime fileTime ```
bool q_savefile_set_file_time(void* self, void* newDate, int64_t fileTime) {
    return QFileDevice_SetFileTime((QFileDevice*)self, (QDateTime*)newDate, fileTime);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#map)
///
/// ``` QSaveFile* self, long long offset, long long size, int flags ```
unsigned char* q_savefile_map3(void* self, long long offset, long long size, int64_t flags) {
    return (unsigned char*)QFileDevice_Map3((QFileDevice*)self, offset, size, flags);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QSaveFile* self ```
int64_t q_savefile_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QSaveFile* self, bool enabled ```
void q_savefile_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QSaveFile* self ```
bool q_savefile_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QSaveFile* self ```
bool q_savefile_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QSaveFile* self ```
bool q_savefile_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QSaveFile* self ```
bool q_savefile_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QSaveFile* self ```
int32_t q_savefile_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QSaveFile* self ```
int32_t q_savefile_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QSaveFile* self ```
int32_t q_savefile_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QSaveFile* self, int channel ```
void q_savefile_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QSaveFile* self ```
int32_t q_savefile_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QSaveFile* self, int channel ```
void q_savefile_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QSaveFile* self, char* data, long long maxlen ```
long long q_savefile_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QSaveFile* self, long long maxlen ```
char* q_savefile_read_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QSaveFile* self ```
char* q_savefile_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QSaveFile* self, char* data, long long maxlen ```
long long q_savefile_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QSaveFile* self ```
char* q_savefile_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QSaveFile* self ```
void q_savefile_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QSaveFile* self ```
void q_savefile_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QSaveFile* self ```
void q_savefile_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QSaveFile* self ```
bool q_savefile_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QSaveFile* self, const char* data, long long lenVal ```
long long q_savefile_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QSaveFile* self, const char* data ```
long long q_savefile_write_with_data(void* self, const char* data) {
    return QIODevice_WriteWithData((QIODevice*)self, data);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QSaveFile* self, const char* data ```
long long q_savefile_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, qstring(data));
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QSaveFile* self, char* data, long long maxlen ```
long long q_savefile_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QSaveFile* self, long long maxlen ```
char* q_savefile_peek_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_PeekWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QSaveFile* self, long long maxSize ```
long long q_savefile_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QSaveFile* self, char c ```
void q_savefile_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QSaveFile* self, char c ```
bool q_savefile_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QSaveFile* self, char* c ```
bool q_savefile_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QSaveFile* self ```
const char* q_savefile_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QSaveFile* self ```
void q_savefile_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QSaveFile* self, void (*slot)(QIODevice*) ```
void q_savefile_on_ready_read(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QSaveFile* self, int channel ```
void q_savefile_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// ``` QSaveFile* self, void (*slot)(QIODevice*, int) ```
void q_savefile_on_channel_ready_read(void* self, void (*slot)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QSaveFile* self, long long bytes ```
void q_savefile_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

/// Inherited from QIODevice
///
/// ``` QSaveFile* self, void (*slot)(QIODevice*, long long) ```
void q_savefile_on_bytes_written(void* self, void (*slot)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QSaveFile* self, int channel, long long bytes ```
void q_savefile_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

/// Inherited from QIODevice
///
/// ``` QSaveFile* self, void (*slot)(QIODevice*, int, long long) ```
void q_savefile_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QSaveFile* self ```
void q_savefile_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QSaveFile* self, void (*slot)(QIODevice*) ```
void q_savefile_on_about_to_close(void* self, void (*slot)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QSaveFile* self ```
void q_savefile_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QSaveFile* self, void (*slot)(QIODevice*) ```
void q_savefile_on_read_channel_finished(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QSaveFile* self, long long maxlen ```
char* q_savefile_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSaveFile* self ```
const char* q_savefile_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSaveFile* self, const char* name ```
void q_savefile_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSaveFile* self ```
bool q_savefile_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSaveFile* self ```
bool q_savefile_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSaveFile* self ```
bool q_savefile_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSaveFile* self ```
bool q_savefile_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSaveFile* self, bool b ```
bool q_savefile_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSaveFile* self ```
QThread* q_savefile_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSaveFile* self, QThread* thread ```
void q_savefile_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSaveFile* self, int interval ```
int32_t q_savefile_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSaveFile* self, int id ```
void q_savefile_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSaveFile* self ```
libqt_list /* of QObject* */ q_savefile_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSaveFile* self, QObject* parent ```
void q_savefile_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSaveFile* self, QObject* filterObj ```
void q_savefile_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSaveFile* self, QObject* obj ```
void q_savefile_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_savefile_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSaveFile* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_savefile_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_savefile_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_savefile_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSaveFile* self ```
void q_savefile_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSaveFile* self ```
void q_savefile_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSaveFile* self, const char* name, QVariant* value ```
bool q_savefile_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSaveFile* self, const char* name ```
QVariant* q_savefile_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSaveFile* self ```
const char** q_savefile_dynamic_property_names(void* self) {
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
/// ``` QSaveFile* self ```
QBindingStorage* q_savefile_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSaveFile* self ```
QBindingStorage* q_savefile_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSaveFile* self ```
void q_savefile_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QSaveFile* self, void (*slot)(QObject*) ```
void q_savefile_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSaveFile* self ```
QObject* q_savefile_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSaveFile* self, const char* classname ```
bool q_savefile_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSaveFile* self ```
void q_savefile_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSaveFile* self, int interval, enum Qt__TimerType timerType ```
int32_t q_savefile_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_savefile_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSaveFile* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_savefile_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSaveFile* self, QObject* param1 ```
void q_savefile_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QSaveFile* self, void (*slot)(QObject*, QObject*) ```
void q_savefile_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self ```
bool q_savefile_is_sequential(void* self) {
    return QSaveFile_IsSequential((QSaveFile*)self);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self ```
bool q_savefile_qbase_is_sequential(void* self) {
    return QSaveFile_QBaseIsSequential((QSaveFile*)self);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, bool (*slot)() ```
void q_savefile_on_is_sequential(void* self, bool (*slot)()) {
    QSaveFile_OnIsSequential((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self ```
long long q_savefile_pos(void* self) {
    return QSaveFile_Pos((QSaveFile*)self);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self ```
long long q_savefile_qbase_pos(void* self) {
    return QSaveFile_QBasePos((QSaveFile*)self);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, long long (*slot)() ```
void q_savefile_on_pos(void* self, long long (*slot)()) {
    QSaveFile_OnPos((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, long long offset ```
bool q_savefile_seek(void* self, long long offset) {
    return QSaveFile_Seek((QSaveFile*)self, offset);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, long long offset ```
bool q_savefile_qbase_seek(void* self, long long offset) {
    return QSaveFile_QBaseSeek((QSaveFile*)self, offset);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, bool (*slot)(QSaveFile*, long long) ```
void q_savefile_on_seek(void* self, bool (*slot)(void*, long long)) {
    QSaveFile_OnSeek((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self ```
bool q_savefile_at_end(void* self) {
    return QSaveFile_AtEnd((QSaveFile*)self);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self ```
bool q_savefile_qbase_at_end(void* self) {
    return QSaveFile_QBaseAtEnd((QSaveFile*)self);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, bool (*slot)() ```
void q_savefile_on_at_end(void* self, bool (*slot)()) {
    QSaveFile_OnAtEnd((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self ```
long long q_savefile_size(void* self) {
    return QSaveFile_Size((QSaveFile*)self);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self ```
long long q_savefile_qbase_size(void* self) {
    return QSaveFile_QBaseSize((QSaveFile*)self);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, long long (*slot)() ```
void q_savefile_on_size(void* self, long long (*slot)()) {
    QSaveFile_OnSize((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#resize)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, long long sz ```
bool q_savefile_resize(void* self, long long sz) {
    return QSaveFile_Resize((QSaveFile*)self, sz);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, long long sz ```
bool q_savefile_qbase_resize(void* self, long long sz) {
    return QSaveFile_QBaseResize((QSaveFile*)self, sz);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, bool (*slot)(QSaveFile*, long long) ```
void q_savefile_on_resize(void* self, bool (*slot)(void*, long long)) {
    QSaveFile_OnResize((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#permissions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self ```
int64_t q_savefile_permissions(void* self) {
    return QSaveFile_Permissions((QSaveFile*)self);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self ```
int64_t q_savefile_qbase_permissions(void* self) {
    return QSaveFile_QBasePermissions((QSaveFile*)self);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, int64_t (*slot)() ```
void q_savefile_on_permissions(void* self, int64_t (*slot)()) {
    QSaveFile_OnPermissions((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#setPermissions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, int permissionSpec ```
bool q_savefile_set_permissions(void* self, int64_t permissionSpec) {
    return QSaveFile_SetPermissions((QSaveFile*)self, permissionSpec);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, int permissionSpec ```
bool q_savefile_qbase_set_permissions(void* self, int64_t permissionSpec) {
    return QSaveFile_QBaseSetPermissions((QSaveFile*)self, permissionSpec);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, bool (*slot)(QSaveFile*, int) ```
void q_savefile_on_set_permissions(void* self, bool (*slot)(void*, int64_t)) {
    QSaveFile_OnSetPermissions((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, char* data, long long maxlen ```
long long q_savefile_read_data(void* self, char* data, long long maxlen) {
    return QSaveFile_ReadData((QSaveFile*)self, data, maxlen);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, char* data, long long maxlen ```
long long q_savefile_qbase_read_data(void* self, char* data, long long maxlen) {
    return QSaveFile_QBaseReadData((QSaveFile*)self, data, maxlen);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, long long (*slot)(QSaveFile*, char*, long long) ```
void q_savefile_on_read_data(void* self, long long (*slot)(void*, char*, long long)) {
    QSaveFile_OnReadData((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QFileDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, char* data, long long maxlen ```
long long q_savefile_read_line_data(void* self, char* data, long long maxlen) {
    return QSaveFile_ReadLineData((QSaveFile*)self, data, maxlen);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, char* data, long long maxlen ```
long long q_savefile_qbase_read_line_data(void* self, char* data, long long maxlen) {
    return QSaveFile_QBaseReadLineData((QSaveFile*)self, data, maxlen);
}

/// Inherited from QFileDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, long long (*slot)(QSaveFile*, char*, long long) ```
void q_savefile_on_read_line_data(void* self, long long (*slot)(void*, char*, long long)) {
    QSaveFile_OnReadLineData((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self ```
bool q_savefile_reset(void* self) {
    return QSaveFile_Reset((QSaveFile*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self ```
bool q_savefile_qbase_reset(void* self) {
    return QSaveFile_QBaseReset((QSaveFile*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, bool (*slot)() ```
void q_savefile_on_reset(void* self, bool (*slot)()) {
    QSaveFile_OnReset((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self ```
long long q_savefile_bytes_available(void* self) {
    return QSaveFile_BytesAvailable((QSaveFile*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self ```
long long q_savefile_qbase_bytes_available(void* self) {
    return QSaveFile_QBaseBytesAvailable((QSaveFile*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, long long (*slot)() ```
void q_savefile_on_bytes_available(void* self, long long (*slot)()) {
    QSaveFile_OnBytesAvailable((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self ```
long long q_savefile_bytes_to_write(void* self) {
    return QSaveFile_BytesToWrite((QSaveFile*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self ```
long long q_savefile_qbase_bytes_to_write(void* self) {
    return QSaveFile_QBaseBytesToWrite((QSaveFile*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, long long (*slot)() ```
void q_savefile_on_bytes_to_write(void* self, long long (*slot)()) {
    QSaveFile_OnBytesToWrite((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self ```
bool q_savefile_can_read_line(void* self) {
    return QSaveFile_CanReadLine((QSaveFile*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self ```
bool q_savefile_qbase_can_read_line(void* self) {
    return QSaveFile_QBaseCanReadLine((QSaveFile*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, bool (*slot)() ```
void q_savefile_on_can_read_line(void* self, bool (*slot)()) {
    QSaveFile_OnCanReadLine((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, int msecs ```
bool q_savefile_wait_for_ready_read(void* self, int msecs) {
    return QSaveFile_WaitForReadyRead((QSaveFile*)self, msecs);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, int msecs ```
bool q_savefile_qbase_wait_for_ready_read(void* self, int msecs) {
    return QSaveFile_QBaseWaitForReadyRead((QSaveFile*)self, msecs);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, bool (*slot)(QSaveFile*, int) ```
void q_savefile_on_wait_for_ready_read(void* self, bool (*slot)(void*, int)) {
    QSaveFile_OnWaitForReadyRead((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, int msecs ```
bool q_savefile_wait_for_bytes_written(void* self, int msecs) {
    return QSaveFile_WaitForBytesWritten((QSaveFile*)self, msecs);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, int msecs ```
bool q_savefile_qbase_wait_for_bytes_written(void* self, int msecs) {
    return QSaveFile_QBaseWaitForBytesWritten((QSaveFile*)self, msecs);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, bool (*slot)(QSaveFile*, int) ```
void q_savefile_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int)) {
    QSaveFile_OnWaitForBytesWritten((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, long long maxSize ```
long long q_savefile_skip_data(void* self, long long maxSize) {
    return QSaveFile_SkipData((QSaveFile*)self, maxSize);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, long long maxSize ```
long long q_savefile_qbase_skip_data(void* self, long long maxSize) {
    return QSaveFile_QBaseSkipData((QSaveFile*)self, maxSize);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, long long (*slot)(QSaveFile*, long long) ```
void q_savefile_on_skip_data(void* self, long long (*slot)(void*, long long)) {
    QSaveFile_OnSkipData((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, QEvent* event ```
bool q_savefile_event(void* self, void* event) {
    return QSaveFile_Event((QSaveFile*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, QEvent* event ```
bool q_savefile_qbase_event(void* self, void* event) {
    return QSaveFile_QBaseEvent((QSaveFile*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, bool (*slot)(QSaveFile*, QEvent*) ```
void q_savefile_on_event(void* self, bool (*slot)(void*, void*)) {
    QSaveFile_OnEvent((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, QObject* watched, QEvent* event ```
bool q_savefile_event_filter(void* self, void* watched, void* event) {
    return QSaveFile_EventFilter((QSaveFile*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, QObject* watched, QEvent* event ```
bool q_savefile_qbase_event_filter(void* self, void* watched, void* event) {
    return QSaveFile_QBaseEventFilter((QSaveFile*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, bool (*slot)(QSaveFile*, QObject*, QEvent*) ```
void q_savefile_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSaveFile_OnEventFilter((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, QTimerEvent* event ```
void q_savefile_timer_event(void* self, void* event) {
    QSaveFile_TimerEvent((QSaveFile*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, QTimerEvent* event ```
void q_savefile_qbase_timer_event(void* self, void* event) {
    QSaveFile_QBaseTimerEvent((QSaveFile*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, void (*slot)(QSaveFile*, QTimerEvent*) ```
void q_savefile_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSaveFile_OnTimerEvent((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, QChildEvent* event ```
void q_savefile_child_event(void* self, void* event) {
    QSaveFile_ChildEvent((QSaveFile*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, QChildEvent* event ```
void q_savefile_qbase_child_event(void* self, void* event) {
    QSaveFile_QBaseChildEvent((QSaveFile*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, void (*slot)(QSaveFile*, QChildEvent*) ```
void q_savefile_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSaveFile_OnChildEvent((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, QEvent* event ```
void q_savefile_custom_event(void* self, void* event) {
    QSaveFile_CustomEvent((QSaveFile*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, QEvent* event ```
void q_savefile_qbase_custom_event(void* self, void* event) {
    QSaveFile_QBaseCustomEvent((QSaveFile*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, void (*slot)(QSaveFile*, QEvent*) ```
void q_savefile_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSaveFile_OnCustomEvent((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, QMetaMethod* signal ```
void q_savefile_connect_notify(void* self, void* signal) {
    QSaveFile_ConnectNotify((QSaveFile*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, QMetaMethod* signal ```
void q_savefile_qbase_connect_notify(void* self, void* signal) {
    QSaveFile_QBaseConnectNotify((QSaveFile*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, void (*slot)(QSaveFile*, QMetaMethod*) ```
void q_savefile_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSaveFile_OnConnectNotify((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, QMetaMethod* signal ```
void q_savefile_disconnect_notify(void* self, void* signal) {
    QSaveFile_DisconnectNotify((QSaveFile*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, QMetaMethod* signal ```
void q_savefile_qbase_disconnect_notify(void* self, void* signal) {
    QSaveFile_QBaseDisconnectNotify((QSaveFile*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, void (*slot)(QSaveFile*, QMetaMethod*) ```
void q_savefile_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSaveFile_OnDisconnectNotify((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, int openMode ```
void q_savefile_set_open_mode(void* self, int64_t openMode) {
    QSaveFile_SetOpenMode((QSaveFile*)self, openMode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, int openMode ```
void q_savefile_qbase_set_open_mode(void* self, int64_t openMode) {
    QSaveFile_QBaseSetOpenMode((QSaveFile*)self, openMode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, void (*slot)(QSaveFile*, int) ```
void q_savefile_on_set_open_mode(void* self, void (*slot)(void*, int64_t)) {
    QSaveFile_OnSetOpenMode((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, const char* errorString ```
void q_savefile_set_error_string(void* self, const char* errorString) {
    QSaveFile_SetErrorString((QSaveFile*)self, qstring(errorString));
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, const char* errorString ```
void q_savefile_qbase_set_error_string(void* self, const char* errorString) {
    QSaveFile_QBaseSetErrorString((QSaveFile*)self, qstring(errorString));
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, void (*slot)(QSaveFile*, const char*) ```
void q_savefile_on_set_error_string(void* self, void (*slot)(void*, const char*)) {
    QSaveFile_OnSetErrorString((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self ```
QObject* q_savefile_sender(void* self) {
    return QSaveFile_Sender((QSaveFile*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self ```
QObject* q_savefile_qbase_sender(void* self) {
    return QSaveFile_QBaseSender((QSaveFile*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, QObject* (*slot)() ```
void q_savefile_on_sender(void* self, QObject* (*slot)()) {
    QSaveFile_OnSender((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self ```
int32_t q_savefile_sender_signal_index(void* self) {
    return QSaveFile_SenderSignalIndex((QSaveFile*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self ```
int32_t q_savefile_qbase_sender_signal_index(void* self) {
    return QSaveFile_QBaseSenderSignalIndex((QSaveFile*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, int32_t (*slot)() ```
void q_savefile_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSaveFile_OnSenderSignalIndex((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, const char* signal ```
int32_t q_savefile_receivers(void* self, const char* signal) {
    return QSaveFile_Receivers((QSaveFile*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, const char* signal ```
int32_t q_savefile_qbase_receivers(void* self, const char* signal) {
    return QSaveFile_QBaseReceivers((QSaveFile*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, int32_t (*slot)(QSaveFile*, const char*) ```
void q_savefile_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSaveFile_OnReceivers((QSaveFile*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSaveFile* self, QMetaMethod* signal ```
bool q_savefile_is_signal_connected(void* self, void* signal) {
    return QSaveFile_IsSignalConnected((QSaveFile*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSaveFile* self, QMetaMethod* signal ```
bool q_savefile_qbase_is_signal_connected(void* self, void* signal) {
    return QSaveFile_QBaseIsSignalConnected((QSaveFile*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSaveFile* self, bool (*slot)(QSaveFile*, QMetaMethod*) ```
void q_savefile_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSaveFile_OnIsSignalConnected((QSaveFile*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QSaveFile* self ```
void q_savefile_delete(void* self) {
    QSaveFile_Delete((QSaveFile*)(self));
}