#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQWAVEDECODER_H
#define SRC_MULTIMEDIAQT6C_LIBQWAVEDECODER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "libqaudioformat.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqiodevice.h"
#include "../libqiodevicebase.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

/// https://doc.qt.io/qt-6/qwavedecoder.html

/// q_wavedecoder_new constructs a new QWaveDecoder object.
///
/// ``` QIODevice* device ```
QWaveDecoder* q_wavedecoder_new(void* device);

/// q_wavedecoder_new2 constructs a new QWaveDecoder object.
///
/// ``` QIODevice* device, QAudioFormat* format ```
QWaveDecoder* q_wavedecoder_new2(void* device, void* format);

/// q_wavedecoder_new3 constructs a new QWaveDecoder object.
///
/// ``` QIODevice* device, QObject* parent ```
QWaveDecoder* q_wavedecoder_new3(void* device, void* parent);

/// q_wavedecoder_new4 constructs a new QWaveDecoder object.
///
/// ``` QIODevice* device, QAudioFormat* format, QObject* parent ```
QWaveDecoder* q_wavedecoder_new4(void* device, void* format, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWaveDecoder* self ```
QMetaObject* q_wavedecoder_meta_object(void* self);

/// ``` QWaveDecoder* self, const char* param1 ```
void* q_wavedecoder_metacast(void* self, const char* param1);

/// ``` QWaveDecoder* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_wavedecoder_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QWaveDecoder* self, int32_t (*slot)(QWaveDecoder*, enum QMetaObject__Call, int, void*) ```
void q_wavedecoder_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QWaveDecoder* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_wavedecoder_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_wavedecoder_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#audioFormat)
///
/// ``` QWaveDecoder* self ```
QAudioFormat* q_wavedecoder_audio_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#getDevice)
///
/// ``` QWaveDecoder* self ```
QIODevice* q_wavedecoder_get_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#duration)
///
/// ``` QWaveDecoder* self ```
int32_t q_wavedecoder_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#headerLength)
///
///
long long q_wavedecoder_header_length();

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#open)
///
/// ``` QWaveDecoder* self, int mode ```
bool q_wavedecoder_open(void* self, int64_t mode);

/// Allows for overriding the related default method
///
/// ``` QWaveDecoder* self, bool (*slot)(QWaveDecoder*, int) ```
void q_wavedecoder_on_open(void* self, bool (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QWaveDecoder* self, int mode ```
bool q_wavedecoder_qbase_open(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#close)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_close(void* self);

/// Allows for overriding the related default method
///
/// ``` QWaveDecoder* self, void (*slot)() ```
void q_wavedecoder_on_close(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_qbase_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#seek)
///
/// ``` QWaveDecoder* self, long long pos ```
bool q_wavedecoder_seek(void* self, long long pos);

/// Allows for overriding the related default method
///
/// ``` QWaveDecoder* self, bool (*slot)(QWaveDecoder*, long long) ```
void q_wavedecoder_on_seek(void* self, bool (*slot)(void*, long long));

/// Base class method implementation
///
/// ``` QWaveDecoder* self, long long pos ```
bool q_wavedecoder_qbase_seek(void* self, long long pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#pos)
///
/// ``` QWaveDecoder* self ```
long long q_wavedecoder_pos(void* self);

/// Allows for overriding the related default method
///
/// ``` QWaveDecoder* self, long long (*slot)() ```
void q_wavedecoder_on_pos(void* self, long long (*slot)());

/// Base class method implementation
///
/// ``` QWaveDecoder* self ```
long long q_wavedecoder_qbase_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#size)
///
/// ``` QWaveDecoder* self ```
long long q_wavedecoder_size(void* self);

/// Allows for overriding the related default method
///
/// ``` QWaveDecoder* self, long long (*slot)() ```
void q_wavedecoder_on_size(void* self, long long (*slot)());

/// Base class method implementation
///
/// ``` QWaveDecoder* self ```
long long q_wavedecoder_qbase_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#isSequential)
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_is_sequential(void* self);

/// Allows for overriding the related default method
///
/// ``` QWaveDecoder* self, bool (*slot)() ```
void q_wavedecoder_on_is_sequential(void* self, bool (*slot)());

/// Base class method implementation
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_qbase_is_sequential(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#bytesAvailable)
///
/// ``` QWaveDecoder* self ```
long long q_wavedecoder_bytes_available(void* self);

/// Allows for overriding the related default method
///
/// ``` QWaveDecoder* self, long long (*slot)() ```
void q_wavedecoder_on_bytes_available(void* self, long long (*slot)());

/// Base class method implementation
///
/// ``` QWaveDecoder* self ```
long long q_wavedecoder_qbase_bytes_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#formatKnown)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_format_known(void* self);

/// ``` QWaveDecoder* self, void (*slot)(QWaveDecoder*) ```
void q_wavedecoder_on_format_known(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwavedecoder.html#parsingError)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_parsing_error(void* self);

/// ``` QWaveDecoder* self, void (*slot)(QWaveDecoder*) ```
void q_wavedecoder_on_parsing_error(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_wavedecoder_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_wavedecoder_tr3(const char* s, const char* c, int n);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QWaveDecoder* self ```
int64_t q_wavedecoder_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QWaveDecoder* self, bool enabled ```
void q_wavedecoder_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_is_open(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QWaveDecoder* self ```
int32_t q_wavedecoder_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QWaveDecoder* self ```
int32_t q_wavedecoder_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QWaveDecoder* self ```
int32_t q_wavedecoder_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QWaveDecoder* self, int channel ```
void q_wavedecoder_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QWaveDecoder* self ```
int32_t q_wavedecoder_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QWaveDecoder* self, int channel ```
void q_wavedecoder_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QWaveDecoder* self, char* data, long long maxlen ```
long long q_wavedecoder_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QWaveDecoder* self, long long maxlen ```
char* q_wavedecoder_read_with_maxlen(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QWaveDecoder* self ```
char* q_wavedecoder_read_all(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QWaveDecoder* self, char* data, long long maxlen ```
long long q_wavedecoder_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QWaveDecoder* self ```
char* q_wavedecoder_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QWaveDecoder* self, const char* data, long long lenVal ```
long long q_wavedecoder_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QWaveDecoder* self, const char* data ```
long long q_wavedecoder_write_with_data(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QWaveDecoder* self, const char* data ```
long long q_wavedecoder_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QWaveDecoder* self, char* data, long long maxlen ```
long long q_wavedecoder_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QWaveDecoder* self, long long maxlen ```
char* q_wavedecoder_peek_with_maxlen(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QWaveDecoder* self, long long maxSize ```
long long q_wavedecoder_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QWaveDecoder* self, char c ```
void q_wavedecoder_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QWaveDecoder* self, char c ```
bool q_wavedecoder_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QWaveDecoder* self, char* c ```
bool q_wavedecoder_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QWaveDecoder* self ```
const char* q_wavedecoder_error_string(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_ready_read(void* self);

/// Inherited from QIODevice
///
/// ``` QWaveDecoder* self, void (*slot)(QIODevice*) ```
void q_wavedecoder_on_ready_read(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QWaveDecoder* self, int channel ```
void q_wavedecoder_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// ``` QWaveDecoder* self, void (*slot)(QIODevice*, int) ```
void q_wavedecoder_on_channel_ready_read(void* self, void (*slot)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QWaveDecoder* self, long long bytes ```
void q_wavedecoder_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// ``` QWaveDecoder* self, void (*slot)(QIODevice*, long long) ```
void q_wavedecoder_on_bytes_written(void* self, void (*slot)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QWaveDecoder* self, int channel, long long bytes ```
void q_wavedecoder_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// ``` QWaveDecoder* self, void (*slot)(QIODevice*, int, long long) ```
void q_wavedecoder_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_about_to_close(void* self);

/// Inherited from QIODevice
///
/// ``` QWaveDecoder* self, void (*slot)(QIODevice*) ```
void q_wavedecoder_on_about_to_close(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// ``` QWaveDecoder* self, void (*slot)(QIODevice*) ```
void q_wavedecoder_on_read_channel_finished(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QWaveDecoder* self, long long maxlen ```
char* q_wavedecoder_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWaveDecoder* self ```
const char* q_wavedecoder_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWaveDecoder* self, char* name ```
void q_wavedecoder_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWaveDecoder* self, bool b ```
bool q_wavedecoder_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWaveDecoder* self ```
QThread* q_wavedecoder_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWaveDecoder* self, QThread* thread ```
void q_wavedecoder_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWaveDecoder* self, int interval ```
int32_t q_wavedecoder_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWaveDecoder* self, int id ```
void q_wavedecoder_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWaveDecoder* self ```
libqt_list /* of QObject* */ q_wavedecoder_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWaveDecoder* self, QObject* parent ```
void q_wavedecoder_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWaveDecoder* self, QObject* filterObj ```
void q_wavedecoder_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWaveDecoder* self, QObject* obj ```
void q_wavedecoder_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_wavedecoder_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWaveDecoder* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_wavedecoder_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_wavedecoder_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_wavedecoder_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWaveDecoder* self, const char* name, QVariant* value ```
bool q_wavedecoder_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWaveDecoder* self, const char* name ```
QVariant* q_wavedecoder_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWaveDecoder* self ```
const char** q_wavedecoder_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWaveDecoder* self ```
QBindingStorage* q_wavedecoder_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWaveDecoder* self ```
QBindingStorage* q_wavedecoder_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QWaveDecoder* self, void (*slot)(QObject*) ```
void q_wavedecoder_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWaveDecoder* self ```
QObject* q_wavedecoder_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWaveDecoder* self, const char* classname ```
bool q_wavedecoder_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWaveDecoder* self, int interval, enum Qt__TimerType timerType ```
int32_t q_wavedecoder_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_wavedecoder_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWaveDecoder* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_wavedecoder_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWaveDecoder* self, QObject* param1 ```
void q_wavedecoder_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QWaveDecoder* self, void (*slot)(QObject*, QObject*) ```
void q_wavedecoder_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_at_end(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_qbase_at_end(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, bool (*slot)() ```
void q_wavedecoder_on_at_end(void* self, bool (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_reset(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_qbase_reset(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, bool (*slot)() ```
void q_wavedecoder_on_reset(void* self, bool (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self ```
long long q_wavedecoder_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self ```
long long q_wavedecoder_qbase_bytes_to_write(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, long long (*slot)() ```
void q_wavedecoder_on_bytes_to_write(void* self, long long (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_can_read_line(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self ```
bool q_wavedecoder_qbase_can_read_line(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, bool (*slot)() ```
void q_wavedecoder_on_can_read_line(void* self, bool (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, int msecs ```
bool q_wavedecoder_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, int msecs ```
bool q_wavedecoder_qbase_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, bool (*slot)(QWaveDecoder*, int) ```
void q_wavedecoder_on_wait_for_ready_read(void* self, bool (*slot)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, int msecs ```
bool q_wavedecoder_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, int msecs ```
bool q_wavedecoder_qbase_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, bool (*slot)(QWaveDecoder*, int) ```
void q_wavedecoder_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, char* data, long long maxlen ```
long long q_wavedecoder_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, char* data, long long maxlen ```
long long q_wavedecoder_qbase_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, long long (*slot)(QWaveDecoder*, char*, long long) ```
void q_wavedecoder_on_read_line_data(void* self, long long (*slot)(void*, char*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, long long maxSize ```
long long q_wavedecoder_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, long long maxSize ```
long long q_wavedecoder_qbase_skip_data(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, long long (*slot)(QWaveDecoder*, long long) ```
void q_wavedecoder_on_skip_data(void* self, long long (*slot)(void*, long long));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, QEvent* event ```
bool q_wavedecoder_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, QEvent* event ```
bool q_wavedecoder_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, bool (*slot)(QWaveDecoder*, QEvent*) ```
void q_wavedecoder_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, QObject* watched, QEvent* event ```
bool q_wavedecoder_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, QObject* watched, QEvent* event ```
bool q_wavedecoder_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, bool (*slot)(QWaveDecoder*, QObject*, QEvent*) ```
void q_wavedecoder_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, QTimerEvent* event ```
void q_wavedecoder_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, QTimerEvent* event ```
void q_wavedecoder_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, void (*slot)(QWaveDecoder*, QTimerEvent*) ```
void q_wavedecoder_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, QChildEvent* event ```
void q_wavedecoder_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, QChildEvent* event ```
void q_wavedecoder_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, void (*slot)(QWaveDecoder*, QChildEvent*) ```
void q_wavedecoder_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, QEvent* event ```
void q_wavedecoder_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, QEvent* event ```
void q_wavedecoder_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, void (*slot)(QWaveDecoder*, QEvent*) ```
void q_wavedecoder_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, QMetaMethod* signal ```
void q_wavedecoder_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, QMetaMethod* signal ```
void q_wavedecoder_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, void (*slot)(QWaveDecoder*, QMetaMethod*) ```
void q_wavedecoder_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, QMetaMethod* signal ```
void q_wavedecoder_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, QMetaMethod* signal ```
void q_wavedecoder_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, void (*slot)(QWaveDecoder*, QMetaMethod*) ```
void q_wavedecoder_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, int openMode ```
void q_wavedecoder_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, int openMode ```
void q_wavedecoder_qbase_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, void (*slot)(QWaveDecoder*, int) ```
void q_wavedecoder_on_set_open_mode(void* self, void (*slot)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, const char* errorString ```
void q_wavedecoder_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, const char* errorString ```
void q_wavedecoder_qbase_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, void (*slot)(QWaveDecoder*, const char*) ```
void q_wavedecoder_on_set_error_string(void* self, void (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self ```
QObject* q_wavedecoder_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self ```
QObject* q_wavedecoder_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, QObject* (*slot)() ```
void q_wavedecoder_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self ```
int32_t q_wavedecoder_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self ```
int32_t q_wavedecoder_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, int32_t (*slot)() ```
void q_wavedecoder_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, const char* signal ```
int32_t q_wavedecoder_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, const char* signal ```
int32_t q_wavedecoder_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, int32_t (*slot)(QWaveDecoder*, const char*) ```
void q_wavedecoder_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWaveDecoder* self, QMetaMethod* signal ```
bool q_wavedecoder_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWaveDecoder* self, QMetaMethod* signal ```
bool q_wavedecoder_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWaveDecoder* self, bool (*slot)(QWaveDecoder*, QMetaMethod*) ```
void q_wavedecoder_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QWaveDecoder* self ```
void q_wavedecoder_delete(void* self);

#endif
