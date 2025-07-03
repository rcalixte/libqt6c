#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQAUDIODECODER_H
#define SRC_MULTIMEDIAQT6C_LIBQAUDIODECODER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqaudiobuffer.h"
#include "libqaudioformat.h"
#include "../libqevent.h"
#include "../libqiodevice.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqurl.h"

/// https://doc.qt.io/qt-6/qaudiodecoder.html

/// q_audiodecoder_new constructs a new QAudioDecoder object.
///
///
QAudioDecoder* q_audiodecoder_new();

/// q_audiodecoder_new2 constructs a new QAudioDecoder object.
///
/// ``` QObject* parent ```
QAudioDecoder* q_audiodecoder_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAudioDecoder* self ```
const QMetaObject* q_audiodecoder_meta_object(void* self);

/// ``` QAudioDecoder* self, const char* param1 ```
void* q_audiodecoder_metacast(void* self, const char* param1);

/// ``` QAudioDecoder* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audiodecoder_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAudioDecoder* self, int32_t (*slot)(QAudioDecoder*, enum QMetaObject__Call, int, void*) ```
void q_audiodecoder_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAudioDecoder* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audiodecoder_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_audiodecoder_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#isSupported)
///
/// ``` QAudioDecoder* self ```
bool q_audiodecoder_is_supported(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#isDecoding)
///
/// ``` QAudioDecoder* self ```
bool q_audiodecoder_is_decoding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#source)
///
/// ``` QAudioDecoder* self ```
QUrl* q_audiodecoder_source(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#setSource)
///
/// ``` QAudioDecoder* self, QUrl* fileName ```
void q_audiodecoder_set_source(void* self, void* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#sourceDevice)
///
/// ``` QAudioDecoder* self ```
QIODevice* q_audiodecoder_source_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#setSourceDevice)
///
/// ``` QAudioDecoder* self, QIODevice* device ```
void q_audiodecoder_set_source_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#audioFormat)
///
/// ``` QAudioDecoder* self ```
QAudioFormat* q_audiodecoder_audio_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#setAudioFormat)
///
/// ``` QAudioDecoder* self, QAudioFormat* format ```
void q_audiodecoder_set_audio_format(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#error)
///
/// ``` QAudioDecoder* self ```
int64_t q_audiodecoder_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#errorString)
///
/// ``` QAudioDecoder* self ```
const char* q_audiodecoder_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#read)
///
/// ``` QAudioDecoder* self ```
QAudioBuffer* q_audiodecoder_read(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#bufferAvailable)
///
/// ``` QAudioDecoder* self ```
bool q_audiodecoder_buffer_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#position)
///
/// ``` QAudioDecoder* self ```
long long q_audiodecoder_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#duration)
///
/// ``` QAudioDecoder* self ```
long long q_audiodecoder_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#start)
///
/// ``` QAudioDecoder* self ```
void q_audiodecoder_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#stop)
///
/// ``` QAudioDecoder* self ```
void q_audiodecoder_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#bufferAvailableChanged)
///
/// ``` QAudioDecoder* self, bool param1 ```
void q_audiodecoder_buffer_available_changed(void* self, bool param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#bufferReady)
///
/// ``` QAudioDecoder* self ```
void q_audiodecoder_buffer_ready(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#finished)
///
/// ``` QAudioDecoder* self ```
void q_audiodecoder_finished(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#isDecodingChanged)
///
/// ``` QAudioDecoder* self, bool param1 ```
void q_audiodecoder_is_decoding_changed(void* self, bool param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#formatChanged)
///
/// ``` QAudioDecoder* self, QAudioFormat* format ```
void q_audiodecoder_format_changed(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#error)
///
/// ``` QAudioDecoder* self, enum QAudioDecoder__Error errorVal ```
void q_audiodecoder_error_with_error_val(void* self, int64_t errorVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#sourceChanged)
///
/// ``` QAudioDecoder* self ```
void q_audiodecoder_source_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#positionChanged)
///
/// ``` QAudioDecoder* self, long long position ```
void q_audiodecoder_position_changed(void* self, long long position);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#durationChanged)
///
/// ``` QAudioDecoder* self, long long duration ```
void q_audiodecoder_duration_changed(void* self, long long duration);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_audiodecoder_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_audiodecoder_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAudioDecoder* self ```
const char* q_audiodecoder_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAudioDecoder* self, char* name ```
void q_audiodecoder_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAudioDecoder* self ```
bool q_audiodecoder_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAudioDecoder* self ```
bool q_audiodecoder_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAudioDecoder* self ```
bool q_audiodecoder_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAudioDecoder* self ```
bool q_audiodecoder_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAudioDecoder* self, bool b ```
bool q_audiodecoder_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAudioDecoder* self ```
QThread* q_audiodecoder_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAudioDecoder* self, QThread* thread ```
void q_audiodecoder_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioDecoder* self, int interval ```
int32_t q_audiodecoder_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAudioDecoder* self, int id ```
void q_audiodecoder_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAudioDecoder* self ```
libqt_list /* of QObject* */ q_audiodecoder_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAudioDecoder* self, QObject* parent ```
void q_audiodecoder_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAudioDecoder* self, QObject* filterObj ```
void q_audiodecoder_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAudioDecoder* self, QObject* obj ```
void q_audiodecoder_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_audiodecoder_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioDecoder* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_audiodecoder_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_audiodecoder_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_audiodecoder_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAudioDecoder* self ```
void q_audiodecoder_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAudioDecoder* self ```
void q_audiodecoder_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAudioDecoder* self, const char* name, QVariant* value ```
bool q_audiodecoder_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAudioDecoder* self, const char* name ```
QVariant* q_audiodecoder_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAudioDecoder* self ```
const char** q_audiodecoder_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioDecoder* self ```
QBindingStorage* q_audiodecoder_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioDecoder* self ```
const QBindingStorage* q_audiodecoder_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioDecoder* self ```
void q_audiodecoder_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioDecoder* self, void (*slot)(QObject*) ```
void q_audiodecoder_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAudioDecoder* self ```
QObject* q_audiodecoder_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAudioDecoder* self, const char* classname ```
bool q_audiodecoder_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAudioDecoder* self ```
void q_audiodecoder_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioDecoder* self, int interval, enum Qt__TimerType timerType ```
int32_t q_audiodecoder_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audiodecoder_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioDecoder* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audiodecoder_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioDecoder* self, QObject* param1 ```
void q_audiodecoder_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioDecoder* self, void (*slot)(QObject*, QObject*) ```
void q_audiodecoder_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioDecoder* self, QEvent* event ```
bool q_audiodecoder_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioDecoder* self, QEvent* event ```
bool q_audiodecoder_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioDecoder* self, bool (*slot)(QAudioDecoder*, QEvent*) ```
void q_audiodecoder_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioDecoder* self, QObject* watched, QEvent* event ```
bool q_audiodecoder_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioDecoder* self, QObject* watched, QEvent* event ```
bool q_audiodecoder_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioDecoder* self, bool (*slot)(QAudioDecoder*, QObject*, QEvent*) ```
void q_audiodecoder_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioDecoder* self, QTimerEvent* event ```
void q_audiodecoder_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioDecoder* self, QTimerEvent* event ```
void q_audiodecoder_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioDecoder* self, void (*slot)(QAudioDecoder*, QTimerEvent*) ```
void q_audiodecoder_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioDecoder* self, QChildEvent* event ```
void q_audiodecoder_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioDecoder* self, QChildEvent* event ```
void q_audiodecoder_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioDecoder* self, void (*slot)(QAudioDecoder*, QChildEvent*) ```
void q_audiodecoder_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioDecoder* self, QEvent* event ```
void q_audiodecoder_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioDecoder* self, QEvent* event ```
void q_audiodecoder_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioDecoder* self, void (*slot)(QAudioDecoder*, QEvent*) ```
void q_audiodecoder_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioDecoder* self, QMetaMethod* signal ```
void q_audiodecoder_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioDecoder* self, QMetaMethod* signal ```
void q_audiodecoder_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioDecoder* self, void (*slot)(QAudioDecoder*, QMetaMethod*) ```
void q_audiodecoder_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioDecoder* self, QMetaMethod* signal ```
void q_audiodecoder_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioDecoder* self, QMetaMethod* signal ```
void q_audiodecoder_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioDecoder* self, void (*slot)(QAudioDecoder*, QMetaMethod*) ```
void q_audiodecoder_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioDecoder* self ```
QObject* q_audiodecoder_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioDecoder* self ```
QObject* q_audiodecoder_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioDecoder* self, QObject* (*slot)() ```
void q_audiodecoder_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioDecoder* self ```
int32_t q_audiodecoder_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioDecoder* self ```
int32_t q_audiodecoder_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioDecoder* self, int32_t (*slot)() ```
void q_audiodecoder_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioDecoder* self, const char* signal ```
int32_t q_audiodecoder_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioDecoder* self, const char* signal ```
int32_t q_audiodecoder_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioDecoder* self, int32_t (*slot)(QAudioDecoder*, const char*) ```
void q_audiodecoder_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioDecoder* self, QMetaMethod* signal ```
bool q_audiodecoder_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioDecoder* self, QMetaMethod* signal ```
bool q_audiodecoder_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioDecoder* self, bool (*slot)(QAudioDecoder*, QMetaMethod*) ```
void q_audiodecoder_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAudioDecoder* self, void (*slot)(QObject*, const char*) ```
void q_audiodecoder_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#dtor.QAudioDecoder)
///
/// Delete this object from C++ memory.
///
/// ``` QAudioDecoder* self ```
void q_audiodecoder_delete(void* self);

/// https://doc.qt.io/qt-6/qaudiodecoder.html#types

typedef enum {
    QAUDIODECODER_ERROR_NOERROR = 0,
    QAUDIODECODER_ERROR_RESOURCEERROR = 1,
    QAUDIODECODER_ERROR_FORMATERROR = 2,
    QAUDIODECODER_ERROR_ACCESSDENIEDERROR = 3,
    QAUDIODECODER_ERROR_NOTSUPPORTEDERROR = 4
} QAudioDecoder__Error;

#endif
