#include "../libqanystringview.hpp"
#include "libqaudioformat.hpp"
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
#include "libqwavedecoder.hpp"
#include "libqwavedecoder.h"

/// https://doc.qt.io/qt-6/qwavedecoder.html

/// q_wavedecoder_new constructs a new QWaveDecoder object.
///
/// ``` QIODevice* device ```
QWaveDecoder* q_wavedecoder_new(void* device) {
    return QWaveDecoder_new((QIODevice*)device);
}

/// q_wavedecoder_new2 constructs a new QWaveDecoder object.
///
/// ``` QIODevice* device, QAudioFormat* format ```
QWaveDecoder* q_wavedecoder_new2(void* device, void* format) {
    return QWaveDecoder_new2((QIODevice*)device, (QAudioFormat*)format);
}

/// q_wavedecoder_new3 constructs a new QWaveDecoder object.
///
/// ``` QIODevice* device, QObject* parent ```
QWaveDecoder* q_wavedecoder_new3(void* device, void* parent) {
    return QWaveDecoder_new3((QIODevice*)device, (QObject*)parent);
}

/// q_wavedecoder_new4 constructs a new QWaveDecoder object.
///
/// ``` QIODevice* device, QAudioFormat* format, QObject* parent ```
QWaveDecoder* q_wavedecoder_new4(void* device, void* format, void* parent) {
    return QWaveDecoder_new4((QIODevice*)device, (QAudioFormat*)format, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWaveDecoder* self ```
QMetaObject* q_wavedecoder_meta_object(void* self) {
    return QWaveDecoder_MetaObject((QWaveDecoder*)self);
}

/// ``` QWaveDecoder* self, const char* param1 ```
void* q_wavedecoder_metacast(void* self, const char* param1) {
    return QWaveDecoder_Metacast((QWaveDecoder*)self, param1);
}

/// ``` QWaveDecoder* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_wavedecoder_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWaveDecoder_Metacall((QWaveDecoder*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QWaveDecoder* self, int32_t (*slot)(QWaveDecoder*, enum QMetaObject__Call, int, void*) ```
void q_wavedecoder_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QWaveDecoder_OnMetacall((QWaveDecoder*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWaveDecoder* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_wavedecoder_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWaveDecoder_QBaseMetacall((QWaveDecoder*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_wavedecoder_tr(const char* s) {
    libqt_string _str = QWaveDecoder_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#audioFormat)
///
/// ``` QWaveDecoder* self ```
QAudioFormat* q_wavedecoder_audio_format(void* self) {
    return QWaveDecoder_AudioFormat((QWaveDecoder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#getDevice)
///
/// ``` QWaveDecoder* self ```
QIODevice* q_wavedecoder_get_device(void* self) {
    return QWaveDecoder_GetDevice((QWaveDecoder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#duration)
///
/// ``` QWaveDecoder* self ```
int32_t q_wavedecoder_duration(void* self) {
    return QWaveDecoder_Duration((QWaveDecoder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#headerLength)
///
///
long long q_wavedecoder_header_length() {
    return QWaveDecoder_HeaderLength();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#open)
///
/// ``` QWaveDecoder* self, int mode ```
bool q_wavedecoder_open(void* self, int64_t mode) {
    return QWaveDecoder_Open((QWaveDecoder*)self, mode);
}

/// Allows for overriding the related default method
///
/// ``` QWaveDecoder* self, bool (*slot)(QWaveDecoder*, int) ```
void q_wavedecoder_on_open(void* self, bool (*slot)(void*, int64_t)) {
    QWaveDecoder_OnOpen((QWaveDecoder*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWaveDecoder* self, int mode ```
bool q_wavedecoder_qbase_open(void* self, int64_t mode) {
    return QWaveDecoder_QBaseOpen((QWaveDecoder*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#close)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_close(void* self) {
    QWaveDecoder_Close((QWaveDecoder*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWaveDecoder* self, void (*slot)() ```
void q_wavedecoder_on_close(void* self, void (*slot)()) {
    QWaveDecoder_OnClose((QWaveDecoder*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_qbase_close(void* self) {
    QWaveDecoder_QBaseClose((QWaveDecoder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#seek)
///
/// ``` QWaveDecoder* self, long long pos ```
bool q_wavedecoder_seek(void* self, long long pos) {
    return QWaveDecoder_Seek((QWaveDecoder*)self, pos);
}

/// Allows for overriding the related default method
///
/// ``` QWaveDecoder* self, bool (*slot)(QWaveDecoder*, long long) ```
void q_wavedecoder_on_seek(void* self, bool (*slot)(void*, long long)) {
    QWaveDecoder_OnSeek((QWaveDecoder*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWaveDecoder* self, long long pos ```
bool q_wavedecoder_qbase_seek(void* self, long long pos) {
    return QWaveDecoder_QBaseSeek((QWaveDecoder*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#pos)
///
/// ``` QWaveDecoder* self ```
long long q_wavedecoder_pos(void* self) {
    return QWaveDecoder_Pos((QWaveDecoder*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWaveDecoder* self, long long (*slot)() ```
void q_wavedecoder_on_pos(void* self, long long (*slot)()) {
    QWaveDecoder_OnPos((QWaveDecoder*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWaveDecoder* self ```
long long q_wavedecoder_qbase_pos(void* self) {
    return QWaveDecoder_QBasePos((QWaveDecoder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#size)
///
/// ``` QWaveDecoder* self ```
long long q_wavedecoder_size(void* self) {
    return QWaveDecoder_Size((QWaveDecoder*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWaveDecoder* self, long long (*slot)() ```
void q_wavedecoder_on_size(void* self, long long (*slot)()) {
    QWaveDecoder_OnSize((QWaveDecoder*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWaveDecoder* self ```
long long q_wavedecoder_qbase_size(void* self) {
    return QWaveDecoder_QBaseSize((QWaveDecoder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#isSequential)
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_is_sequential(void* self) {
    return QWaveDecoder_IsSequential((QWaveDecoder*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWaveDecoder* self, bool (*slot)() ```
void q_wavedecoder_on_is_sequential(void* self, bool (*slot)()) {
    QWaveDecoder_OnIsSequential((QWaveDecoder*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_qbase_is_sequential(void* self) {
    return QWaveDecoder_QBaseIsSequential((QWaveDecoder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#bytesAvailable)
///
/// ``` QWaveDecoder* self ```
long long q_wavedecoder_bytes_available(void* self) {
    return QWaveDecoder_BytesAvailable((QWaveDecoder*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWaveDecoder* self, long long (*slot)() ```
void q_wavedecoder_on_bytes_available(void* self, long long (*slot)()) {
    QWaveDecoder_OnBytesAvailable((QWaveDecoder*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWaveDecoder* self ```
long long q_wavedecoder_qbase_bytes_available(void* self) {
    return QWaveDecoder_QBaseBytesAvailable((QWaveDecoder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#formatKnown)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_format_known(void* self) {
    QWaveDecoder_FormatKnown((QWaveDecoder*)self);
}

/// ``` QWaveDecoder* self, void (*slot)(QWaveDecoder*) ```
void q_wavedecoder_on_format_known(void* self, void (*slot)(void*)) {
    QWaveDecoder_Connect_FormatKnown((QWaveDecoder*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#parsingError)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_parsing_error(void* self) {
    QWaveDecoder_ParsingError((QWaveDecoder*)self);
}

/// ``` QWaveDecoder* self, void (*slot)(QWaveDecoder*) ```
void q_wavedecoder_on_parsing_error(void* self, void (*slot)(void*)) {
    QWaveDecoder_Connect_ParsingError((QWaveDecoder*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_wavedecoder_tr2(const char* s, const char* c) {
    libqt_string _str = QWaveDecoder_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_wavedecoder_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWaveDecoder_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QWaveDecoder* self ```
int64_t q_wavedecoder_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QWaveDecoder* self, bool enabled ```
void q_wavedecoder_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QWaveDecoder* self ```
int32_t q_wavedecoder_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QWaveDecoder* self ```
int32_t q_wavedecoder_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QWaveDecoder* self ```
int32_t q_wavedecoder_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QWaveDecoder* self, int channel ```
void q_wavedecoder_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QWaveDecoder* self ```
int32_t q_wavedecoder_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QWaveDecoder* self, int channel ```
void q_wavedecoder_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QWaveDecoder* self, char* data, long long maxlen ```
long long q_wavedecoder_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QWaveDecoder* self, long long maxlen ```
char* q_wavedecoder_read_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QWaveDecoder* self ```
char* q_wavedecoder_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QWaveDecoder* self, char* data, long long maxlen ```
long long q_wavedecoder_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QWaveDecoder* self ```
char* q_wavedecoder_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QWaveDecoder* self, const char* data, long long lenVal ```
long long q_wavedecoder_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QWaveDecoder* self, const char* data ```
long long q_wavedecoder_write_with_data(void* self, const char* data) {
    return QIODevice_WriteWithData((QIODevice*)self, data);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QWaveDecoder* self, const char* data ```
long long q_wavedecoder_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, qstring(data));
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QWaveDecoder* self, char* data, long long maxlen ```
long long q_wavedecoder_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QWaveDecoder* self, long long maxlen ```
char* q_wavedecoder_peek_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_PeekWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QWaveDecoder* self, long long maxSize ```
long long q_wavedecoder_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QWaveDecoder* self, char c ```
void q_wavedecoder_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QWaveDecoder* self, char c ```
bool q_wavedecoder_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QWaveDecoder* self, char* c ```
bool q_wavedecoder_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QWaveDecoder* self ```
const char* q_wavedecoder_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QWaveDecoder* self, void (*slot)(QIODevice*) ```
void q_wavedecoder_on_ready_read(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QWaveDecoder* self, int channel ```
void q_wavedecoder_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// ``` QWaveDecoder* self, void (*slot)(QIODevice*, int) ```
void q_wavedecoder_on_channel_ready_read(void* self, void (*slot)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QWaveDecoder* self, long long bytes ```
void q_wavedecoder_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

/// Inherited from QIODevice
///
/// ``` QWaveDecoder* self, void (*slot)(QIODevice*, long long) ```
void q_wavedecoder_on_bytes_written(void* self, void (*slot)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QWaveDecoder* self, int channel, long long bytes ```
void q_wavedecoder_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

/// Inherited from QIODevice
///
/// ``` QWaveDecoder* self, void (*slot)(QIODevice*, int, long long) ```
void q_wavedecoder_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QWaveDecoder* self, void (*slot)(QIODevice*) ```
void q_wavedecoder_on_about_to_close(void* self, void (*slot)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QWaveDecoder* self, void (*slot)(QIODevice*) ```
void q_wavedecoder_on_read_channel_finished(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QWaveDecoder* self, long long maxlen ```
char* q_wavedecoder_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWaveDecoder* self ```
const char* q_wavedecoder_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWaveDecoder* self, const char* name ```
void q_wavedecoder_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWaveDecoder* self, bool b ```
bool q_wavedecoder_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWaveDecoder* self ```
QThread* q_wavedecoder_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWaveDecoder* self, QThread* thread ```
void q_wavedecoder_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWaveDecoder* self, int interval ```
int32_t q_wavedecoder_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWaveDecoder* self, int id ```
void q_wavedecoder_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWaveDecoder* self ```
libqt_list /* of QObject* */ q_wavedecoder_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWaveDecoder* self, QObject* parent ```
void q_wavedecoder_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWaveDecoder* self, QObject* filterObj ```
void q_wavedecoder_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWaveDecoder* self, QObject* obj ```
void q_wavedecoder_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_wavedecoder_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWaveDecoder* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_wavedecoder_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_wavedecoder_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_wavedecoder_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWaveDecoder* self, const char* name, QVariant* value ```
bool q_wavedecoder_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWaveDecoder* self, const char* name ```
QVariant* q_wavedecoder_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWaveDecoder* self ```
const char** q_wavedecoder_dynamic_property_names(void* self) {
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
/// ``` QWaveDecoder* self ```
QBindingStorage* q_wavedecoder_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWaveDecoder* self ```
QBindingStorage* q_wavedecoder_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QWaveDecoder* self, void (*slot)(QObject*) ```
void q_wavedecoder_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWaveDecoder* self ```
QObject* q_wavedecoder_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWaveDecoder* self, const char* classname ```
bool q_wavedecoder_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWaveDecoder* self, int interval, enum Qt__TimerType timerType ```
int32_t q_wavedecoder_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_wavedecoder_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWaveDecoder* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_wavedecoder_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWaveDecoder* self, QObject* param1 ```
void q_wavedecoder_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QWaveDecoder* self, void (*slot)(QObject*, QObject*) ```
void q_wavedecoder_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_at_end(void* self) {
    return QWaveDecoder_AtEnd((QWaveDecoder*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_qbase_at_end(void* self) {
    return QWaveDecoder_QBaseAtEnd((QWaveDecoder*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, bool (*slot)() ```
void q_wavedecoder_on_at_end(void* self, bool (*slot)()) {
    QWaveDecoder_OnAtEnd((QWaveDecoder*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_reset(void* self) {
    return QWaveDecoder_Reset((QWaveDecoder*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_qbase_reset(void* self) {
    return QWaveDecoder_QBaseReset((QWaveDecoder*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, bool (*slot)() ```
void q_wavedecoder_on_reset(void* self, bool (*slot)()) {
    QWaveDecoder_OnReset((QWaveDecoder*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self ```
long long q_wavedecoder_bytes_to_write(void* self) {
    return QWaveDecoder_BytesToWrite((QWaveDecoder*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self ```
long long q_wavedecoder_qbase_bytes_to_write(void* self) {
    return QWaveDecoder_QBaseBytesToWrite((QWaveDecoder*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, long long (*slot)() ```
void q_wavedecoder_on_bytes_to_write(void* self, long long (*slot)()) {
    QWaveDecoder_OnBytesToWrite((QWaveDecoder*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_can_read_line(void* self) {
    return QWaveDecoder_CanReadLine((QWaveDecoder*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_qbase_can_read_line(void* self) {
    return QWaveDecoder_QBaseCanReadLine((QWaveDecoder*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, bool (*slot)() ```
void q_wavedecoder_on_can_read_line(void* self, bool (*slot)()) {
    QWaveDecoder_OnCanReadLine((QWaveDecoder*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, int msecs ```
bool q_wavedecoder_wait_for_ready_read(void* self, int msecs) {
    return QWaveDecoder_WaitForReadyRead((QWaveDecoder*)self, msecs);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, int msecs ```
bool q_wavedecoder_qbase_wait_for_ready_read(void* self, int msecs) {
    return QWaveDecoder_QBaseWaitForReadyRead((QWaveDecoder*)self, msecs);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, bool (*slot)(QWaveDecoder*, int) ```
void q_wavedecoder_on_wait_for_ready_read(void* self, bool (*slot)(void*, int)) {
    QWaveDecoder_OnWaitForReadyRead((QWaveDecoder*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, int msecs ```
bool q_wavedecoder_wait_for_bytes_written(void* self, int msecs) {
    return QWaveDecoder_WaitForBytesWritten((QWaveDecoder*)self, msecs);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, int msecs ```
bool q_wavedecoder_qbase_wait_for_bytes_written(void* self, int msecs) {
    return QWaveDecoder_QBaseWaitForBytesWritten((QWaveDecoder*)self, msecs);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, bool (*slot)(QWaveDecoder*, int) ```
void q_wavedecoder_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int)) {
    QWaveDecoder_OnWaitForBytesWritten((QWaveDecoder*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, char* data, long long maxlen ```
long long q_wavedecoder_read_line_data(void* self, char* data, long long maxlen) {
    return QWaveDecoder_ReadLineData((QWaveDecoder*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, char* data, long long maxlen ```
long long q_wavedecoder_qbase_read_line_data(void* self, char* data, long long maxlen) {
    return QWaveDecoder_QBaseReadLineData((QWaveDecoder*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, long long (*slot)(QWaveDecoder*, char*, long long) ```
void q_wavedecoder_on_read_line_data(void* self, long long (*slot)(void*, char*, long long)) {
    QWaveDecoder_OnReadLineData((QWaveDecoder*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, long long maxSize ```
long long q_wavedecoder_skip_data(void* self, long long maxSize) {
    return QWaveDecoder_SkipData((QWaveDecoder*)self, maxSize);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, long long maxSize ```
long long q_wavedecoder_qbase_skip_data(void* self, long long maxSize) {
    return QWaveDecoder_QBaseSkipData((QWaveDecoder*)self, maxSize);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, long long (*slot)(QWaveDecoder*, long long) ```
void q_wavedecoder_on_skip_data(void* self, long long (*slot)(void*, long long)) {
    QWaveDecoder_OnSkipData((QWaveDecoder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, QEvent* event ```
bool q_wavedecoder_event(void* self, void* event) {
    return QWaveDecoder_Event((QWaveDecoder*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, QEvent* event ```
bool q_wavedecoder_qbase_event(void* self, void* event) {
    return QWaveDecoder_QBaseEvent((QWaveDecoder*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, bool (*slot)(QWaveDecoder*, QEvent*) ```
void q_wavedecoder_on_event(void* self, bool (*slot)(void*, void*)) {
    QWaveDecoder_OnEvent((QWaveDecoder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, QObject* watched, QEvent* event ```
bool q_wavedecoder_event_filter(void* self, void* watched, void* event) {
    return QWaveDecoder_EventFilter((QWaveDecoder*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, QObject* watched, QEvent* event ```
bool q_wavedecoder_qbase_event_filter(void* self, void* watched, void* event) {
    return QWaveDecoder_QBaseEventFilter((QWaveDecoder*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, bool (*slot)(QWaveDecoder*, QObject*, QEvent*) ```
void q_wavedecoder_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QWaveDecoder_OnEventFilter((QWaveDecoder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, QTimerEvent* event ```
void q_wavedecoder_timer_event(void* self, void* event) {
    QWaveDecoder_TimerEvent((QWaveDecoder*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, QTimerEvent* event ```
void q_wavedecoder_qbase_timer_event(void* self, void* event) {
    QWaveDecoder_QBaseTimerEvent((QWaveDecoder*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, void (*slot)(QWaveDecoder*, QTimerEvent*) ```
void q_wavedecoder_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QWaveDecoder_OnTimerEvent((QWaveDecoder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, QChildEvent* event ```
void q_wavedecoder_child_event(void* self, void* event) {
    QWaveDecoder_ChildEvent((QWaveDecoder*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, QChildEvent* event ```
void q_wavedecoder_qbase_child_event(void* self, void* event) {
    QWaveDecoder_QBaseChildEvent((QWaveDecoder*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, void (*slot)(QWaveDecoder*, QChildEvent*) ```
void q_wavedecoder_on_child_event(void* self, void (*slot)(void*, void*)) {
    QWaveDecoder_OnChildEvent((QWaveDecoder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, QEvent* event ```
void q_wavedecoder_custom_event(void* self, void* event) {
    QWaveDecoder_CustomEvent((QWaveDecoder*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, QEvent* event ```
void q_wavedecoder_qbase_custom_event(void* self, void* event) {
    QWaveDecoder_QBaseCustomEvent((QWaveDecoder*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, void (*slot)(QWaveDecoder*, QEvent*) ```
void q_wavedecoder_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QWaveDecoder_OnCustomEvent((QWaveDecoder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, QMetaMethod* signal ```
void q_wavedecoder_connect_notify(void* self, void* signal) {
    QWaveDecoder_ConnectNotify((QWaveDecoder*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, QMetaMethod* signal ```
void q_wavedecoder_qbase_connect_notify(void* self, void* signal) {
    QWaveDecoder_QBaseConnectNotify((QWaveDecoder*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, void (*slot)(QWaveDecoder*, QMetaMethod*) ```
void q_wavedecoder_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QWaveDecoder_OnConnectNotify((QWaveDecoder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, QMetaMethod* signal ```
void q_wavedecoder_disconnect_notify(void* self, void* signal) {
    QWaveDecoder_DisconnectNotify((QWaveDecoder*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, QMetaMethod* signal ```
void q_wavedecoder_qbase_disconnect_notify(void* self, void* signal) {
    QWaveDecoder_QBaseDisconnectNotify((QWaveDecoder*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, void (*slot)(QWaveDecoder*, QMetaMethod*) ```
void q_wavedecoder_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QWaveDecoder_OnDisconnectNotify((QWaveDecoder*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, int openMode ```
void q_wavedecoder_set_open_mode(void* self, int64_t openMode) {
    QWaveDecoder_SetOpenMode((QWaveDecoder*)self, openMode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, int openMode ```
void q_wavedecoder_qbase_set_open_mode(void* self, int64_t openMode) {
    QWaveDecoder_QBaseSetOpenMode((QWaveDecoder*)self, openMode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, void (*slot)(QWaveDecoder*, int) ```
void q_wavedecoder_on_set_open_mode(void* self, void (*slot)(void*, int64_t)) {
    QWaveDecoder_OnSetOpenMode((QWaveDecoder*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, const char* errorString ```
void q_wavedecoder_set_error_string(void* self, const char* errorString) {
    QWaveDecoder_SetErrorString((QWaveDecoder*)self, qstring(errorString));
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, const char* errorString ```
void q_wavedecoder_qbase_set_error_string(void* self, const char* errorString) {
    QWaveDecoder_QBaseSetErrorString((QWaveDecoder*)self, qstring(errorString));
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, void (*slot)(QWaveDecoder*, const char*) ```
void q_wavedecoder_on_set_error_string(void* self, void (*slot)(void*, const char*)) {
    QWaveDecoder_OnSetErrorString((QWaveDecoder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self ```
QObject* q_wavedecoder_sender(void* self) {
    return QWaveDecoder_Sender((QWaveDecoder*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self ```
QObject* q_wavedecoder_qbase_sender(void* self) {
    return QWaveDecoder_QBaseSender((QWaveDecoder*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, QObject* (*slot)() ```
void q_wavedecoder_on_sender(void* self, QObject* (*slot)()) {
    QWaveDecoder_OnSender((QWaveDecoder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self ```
int32_t q_wavedecoder_sender_signal_index(void* self) {
    return QWaveDecoder_SenderSignalIndex((QWaveDecoder*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self ```
int32_t q_wavedecoder_qbase_sender_signal_index(void* self) {
    return QWaveDecoder_QBaseSenderSignalIndex((QWaveDecoder*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, int32_t (*slot)() ```
void q_wavedecoder_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QWaveDecoder_OnSenderSignalIndex((QWaveDecoder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, const char* signal ```
int32_t q_wavedecoder_receivers(void* self, const char* signal) {
    return QWaveDecoder_Receivers((QWaveDecoder*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, const char* signal ```
int32_t q_wavedecoder_qbase_receivers(void* self, const char* signal) {
    return QWaveDecoder_QBaseReceivers((QWaveDecoder*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, int32_t (*slot)(QWaveDecoder*, const char*) ```
void q_wavedecoder_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QWaveDecoder_OnReceivers((QWaveDecoder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, QMetaMethod* signal ```
bool q_wavedecoder_is_signal_connected(void* self, void* signal) {
    return QWaveDecoder_IsSignalConnected((QWaveDecoder*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, QMetaMethod* signal ```
bool q_wavedecoder_qbase_is_signal_connected(void* self, void* signal) {
    return QWaveDecoder_QBaseIsSignalConnected((QWaveDecoder*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, bool (*slot)(QWaveDecoder*, QMetaMethod*) ```
void q_wavedecoder_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QWaveDecoder_OnIsSignalConnected((QWaveDecoder*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_delete(void* self) {
    QWaveDecoder_Delete((QWaveDecoder*)(self));
}