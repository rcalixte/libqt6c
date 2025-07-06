#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQAUDIOSINK_H
#define SRC_MULTIMEDIAQT6C_LIBQAUDIOSINK_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qaudiosink.html

/// q_audiosink_new constructs a new QAudioSink object.
///
///
QAudioSink* q_audiosink_new();

/// q_audiosink_new2 constructs a new QAudioSink object.
///
/// ``` QAudioDevice* audioDeviceInfo ```
QAudioSink* q_audiosink_new2(void* audioDeviceInfo);

/// q_audiosink_new3 constructs a new QAudioSink object.
///
/// ``` QAudioFormat* format ```
QAudioSink* q_audiosink_new3(void* format);

/// q_audiosink_new4 constructs a new QAudioSink object.
///
/// ``` QAudioFormat* format, QObject* parent ```
QAudioSink* q_audiosink_new4(void* format, void* parent);

/// q_audiosink_new5 constructs a new QAudioSink object.
///
/// ``` QAudioDevice* audioDeviceInfo, QAudioFormat* format ```
QAudioSink* q_audiosink_new5(void* audioDeviceInfo, void* format);

/// q_audiosink_new6 constructs a new QAudioSink object.
///
/// ``` QAudioDevice* audioDeviceInfo, QAudioFormat* format, QObject* parent ```
QAudioSink* q_audiosink_new6(void* audioDeviceInfo, void* format, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAudioSink* self ```
const QMetaObject* q_audiosink_meta_object(void* self);

/// ``` QAudioSink* self, const char* param1 ```
void* q_audiosink_metacast(void* self, const char* param1);

/// ``` QAudioSink* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audiosink_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAudioSink* self, int32_t (*slot)(QAudioSink*, enum QMetaObject__Call, int, void*) ```
void q_audiosink_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAudioSink* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audiosink_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_audiosink_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#isNull)
///
/// ``` QAudioSink* self ```
bool q_audiosink_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#format)
///
/// ``` QAudioSink* self ```
QAudioFormat* q_audiosink_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#start)
///
/// ``` QAudioSink* self, QIODevice* device ```
void q_audiosink_start(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#start)
///
/// ``` QAudioSink* self ```
QIODevice* q_audiosink_start2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#stop)
///
/// ``` QAudioSink* self ```
void q_audiosink_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#reset)
///
/// ``` QAudioSink* self ```
void q_audiosink_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#suspend)
///
/// ``` QAudioSink* self ```
void q_audiosink_suspend(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#resume)
///
/// ``` QAudioSink* self ```
void q_audiosink_resume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#setBufferSize)
///
/// ``` QAudioSink* self, int64_t bytes ```
void q_audiosink_set_buffer_size(void* self, int64_t bytes);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#bufferSize)
///
/// ``` QAudioSink* self ```
int64_t q_audiosink_buffer_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#bytesFree)
///
/// ``` QAudioSink* self ```
int64_t q_audiosink_bytes_free(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#processedUSecs)
///
/// ``` QAudioSink* self ```
long long q_audiosink_processed_u_secs(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#elapsedUSecs)
///
/// ``` QAudioSink* self ```
long long q_audiosink_elapsed_u_secs(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#error)
///
/// ``` QAudioSink* self ```
int64_t q_audiosink_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#state)
///
/// ``` QAudioSink* self ```
int64_t q_audiosink_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#setVolume)
///
/// ``` QAudioSink* self, double volume ```
void q_audiosink_set_volume(void* self, double volume);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#volume)
///
/// ``` QAudioSink* self ```
double q_audiosink_volume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#stateChanged)
///
/// ``` QAudioSink* self, enum QAudio__State state ```
void q_audiosink_state_changed(void* self, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#stateChanged)
///
/// ``` QAudioSink* self, void (*slot)(QAudioSink*, enum QAudio__State) ```
void q_audiosink_on_state_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_audiosink_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_audiosink_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAudioSink* self ```
const char* q_audiosink_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAudioSink* self, char* name ```
void q_audiosink_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAudioSink* self ```
bool q_audiosink_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAudioSink* self ```
bool q_audiosink_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAudioSink* self ```
bool q_audiosink_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAudioSink* self ```
bool q_audiosink_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAudioSink* self, bool b ```
bool q_audiosink_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAudioSink* self ```
QThread* q_audiosink_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAudioSink* self, QThread* thread ```
bool q_audiosink_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioSink* self, int interval ```
int32_t q_audiosink_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAudioSink* self, int id ```
void q_audiosink_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAudioSink* self, enum Qt__TimerId id ```
void q_audiosink_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAudioSink* self ```
libqt_list /* of QObject* */ q_audiosink_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAudioSink* self, QObject* parent ```
void q_audiosink_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAudioSink* self, QObject* filterObj ```
void q_audiosink_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAudioSink* self, QObject* obj ```
void q_audiosink_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_audiosink_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioSink* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_audiosink_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_audiosink_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_audiosink_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAudioSink* self ```
void q_audiosink_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAudioSink* self ```
void q_audiosink_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAudioSink* self, const char* name, QVariant* value ```
bool q_audiosink_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAudioSink* self, const char* name ```
QVariant* q_audiosink_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAudioSink* self ```
const char** q_audiosink_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioSink* self ```
QBindingStorage* q_audiosink_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioSink* self ```
const QBindingStorage* q_audiosink_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioSink* self ```
void q_audiosink_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioSink* self, void (*slot)(QObject*) ```
void q_audiosink_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAudioSink* self ```
QObject* q_audiosink_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAudioSink* self, const char* classname ```
bool q_audiosink_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAudioSink* self ```
void q_audiosink_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAudioSink* self, QThread* thread, Disambiguated_t* param2 ```
bool q_audiosink_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioSink* self, int interval, enum Qt__TimerType timerType ```
int32_t q_audiosink_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audiosink_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioSink* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audiosink_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioSink* self, QObject* param1 ```
void q_audiosink_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioSink* self, void (*slot)(QObject*, QObject*) ```
void q_audiosink_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSink* self, QEvent* event ```
bool q_audiosink_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSink* self, QEvent* event ```
bool q_audiosink_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSink* self, bool (*slot)(QAudioSink*, QEvent*) ```
void q_audiosink_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSink* self, QObject* watched, QEvent* event ```
bool q_audiosink_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSink* self, QObject* watched, QEvent* event ```
bool q_audiosink_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSink* self, bool (*slot)(QAudioSink*, QObject*, QEvent*) ```
void q_audiosink_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSink* self, QTimerEvent* event ```
void q_audiosink_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSink* self, QTimerEvent* event ```
void q_audiosink_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSink* self, void (*slot)(QAudioSink*, QTimerEvent*) ```
void q_audiosink_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSink* self, QChildEvent* event ```
void q_audiosink_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSink* self, QChildEvent* event ```
void q_audiosink_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSink* self, void (*slot)(QAudioSink*, QChildEvent*) ```
void q_audiosink_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSink* self, QEvent* event ```
void q_audiosink_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSink* self, QEvent* event ```
void q_audiosink_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSink* self, void (*slot)(QAudioSink*, QEvent*) ```
void q_audiosink_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSink* self, QMetaMethod* signal ```
void q_audiosink_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSink* self, QMetaMethod* signal ```
void q_audiosink_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSink* self, void (*slot)(QAudioSink*, QMetaMethod*) ```
void q_audiosink_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSink* self, QMetaMethod* signal ```
void q_audiosink_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSink* self, QMetaMethod* signal ```
void q_audiosink_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSink* self, void (*slot)(QAudioSink*, QMetaMethod*) ```
void q_audiosink_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSink* self ```
QObject* q_audiosink_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSink* self ```
QObject* q_audiosink_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSink* self, QObject* (*slot)() ```
void q_audiosink_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSink* self ```
int32_t q_audiosink_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSink* self ```
int32_t q_audiosink_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSink* self, int32_t (*slot)() ```
void q_audiosink_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSink* self, const char* signal ```
int32_t q_audiosink_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSink* self, const char* signal ```
int32_t q_audiosink_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSink* self, int32_t (*slot)(QAudioSink*, const char*) ```
void q_audiosink_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSink* self, QMetaMethod* signal ```
bool q_audiosink_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSink* self, QMetaMethod* signal ```
bool q_audiosink_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSink* self, bool (*slot)(QAudioSink*, QMetaMethod*) ```
void q_audiosink_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAudioSink* self, void (*slot)(QObject*, const char*) ```
void q_audiosink_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosink.html#dtor.QAudioSink)
///
/// Delete this object from C++ memory.
///
/// ``` QAudioSink* self ```
void q_audiosink_delete(void* self);

#endif
