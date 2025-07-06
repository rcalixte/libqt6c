#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQAUDIOBUFFEROUTPUT_H
#define SRC_MULTIMEDIAQT6C_LIBQAUDIOBUFFEROUTPUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qaudiobufferoutput.html

/// q_audiobufferoutput_new constructs a new QAudioBufferOutput object.
///
///
QAudioBufferOutput* q_audiobufferoutput_new();

/// q_audiobufferoutput_new2 constructs a new QAudioBufferOutput object.
///
/// ``` QAudioFormat* format ```
QAudioBufferOutput* q_audiobufferoutput_new2(void* format);

/// q_audiobufferoutput_new3 constructs a new QAudioBufferOutput object.
///
/// ``` QObject* parent ```
QAudioBufferOutput* q_audiobufferoutput_new3(void* parent);

/// q_audiobufferoutput_new4 constructs a new QAudioBufferOutput object.
///
/// ``` QAudioFormat* format, QObject* parent ```
QAudioBufferOutput* q_audiobufferoutput_new4(void* format, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAudioBufferOutput* self ```
const QMetaObject* q_audiobufferoutput_meta_object(void* self);

/// ``` QAudioBufferOutput* self, const char* param1 ```
void* q_audiobufferoutput_metacast(void* self, const char* param1);

/// ``` QAudioBufferOutput* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audiobufferoutput_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAudioBufferOutput* self, int32_t (*slot)(QAudioBufferOutput*, enum QMetaObject__Call, int, void*) ```
void q_audiobufferoutput_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAudioBufferOutput* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audiobufferoutput_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_audiobufferoutput_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobufferoutput.html#format)
///
/// ``` QAudioBufferOutput* self ```
QAudioFormat* q_audiobufferoutput_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobufferoutput.html#audioBufferReceived)
///
/// ``` QAudioBufferOutput* self, QAudioBuffer* buffer ```
void q_audiobufferoutput_audio_buffer_received(void* self, void* buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobufferoutput.html#audioBufferReceived)
///
/// ``` QAudioBufferOutput* self, void (*slot)(QAudioBufferOutput*, QAudioBuffer*) ```
void q_audiobufferoutput_on_audio_buffer_received(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_audiobufferoutput_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_audiobufferoutput_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAudioBufferOutput* self ```
const char* q_audiobufferoutput_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAudioBufferOutput* self, char* name ```
void q_audiobufferoutput_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAudioBufferOutput* self ```
bool q_audiobufferoutput_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAudioBufferOutput* self ```
bool q_audiobufferoutput_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAudioBufferOutput* self ```
bool q_audiobufferoutput_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAudioBufferOutput* self ```
bool q_audiobufferoutput_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAudioBufferOutput* self, bool b ```
bool q_audiobufferoutput_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAudioBufferOutput* self ```
QThread* q_audiobufferoutput_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAudioBufferOutput* self, QThread* thread ```
bool q_audiobufferoutput_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioBufferOutput* self, int interval ```
int32_t q_audiobufferoutput_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAudioBufferOutput* self, int id ```
void q_audiobufferoutput_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAudioBufferOutput* self, enum Qt__TimerId id ```
void q_audiobufferoutput_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAudioBufferOutput* self ```
libqt_list /* of QObject* */ q_audiobufferoutput_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAudioBufferOutput* self, QObject* parent ```
void q_audiobufferoutput_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAudioBufferOutput* self, QObject* filterObj ```
void q_audiobufferoutput_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAudioBufferOutput* self, QObject* obj ```
void q_audiobufferoutput_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_audiobufferoutput_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioBufferOutput* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_audiobufferoutput_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_audiobufferoutput_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_audiobufferoutput_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAudioBufferOutput* self ```
void q_audiobufferoutput_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAudioBufferOutput* self ```
void q_audiobufferoutput_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAudioBufferOutput* self, const char* name, QVariant* value ```
bool q_audiobufferoutput_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAudioBufferOutput* self, const char* name ```
QVariant* q_audiobufferoutput_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAudioBufferOutput* self ```
const char** q_audiobufferoutput_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioBufferOutput* self ```
QBindingStorage* q_audiobufferoutput_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioBufferOutput* self ```
const QBindingStorage* q_audiobufferoutput_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioBufferOutput* self ```
void q_audiobufferoutput_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioBufferOutput* self, void (*slot)(QObject*) ```
void q_audiobufferoutput_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAudioBufferOutput* self ```
QObject* q_audiobufferoutput_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAudioBufferOutput* self, const char* classname ```
bool q_audiobufferoutput_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAudioBufferOutput* self ```
void q_audiobufferoutput_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAudioBufferOutput* self, QThread* thread, Disambiguated_t* param2 ```
bool q_audiobufferoutput_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioBufferOutput* self, int interval, enum Qt__TimerType timerType ```
int32_t q_audiobufferoutput_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audiobufferoutput_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioBufferOutput* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audiobufferoutput_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioBufferOutput* self, QObject* param1 ```
void q_audiobufferoutput_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioBufferOutput* self, void (*slot)(QObject*, QObject*) ```
void q_audiobufferoutput_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioBufferOutput* self, QEvent* event ```
bool q_audiobufferoutput_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioBufferOutput* self, QEvent* event ```
bool q_audiobufferoutput_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioBufferOutput* self, bool (*slot)(QAudioBufferOutput*, QEvent*) ```
void q_audiobufferoutput_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioBufferOutput* self, QObject* watched, QEvent* event ```
bool q_audiobufferoutput_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioBufferOutput* self, QObject* watched, QEvent* event ```
bool q_audiobufferoutput_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioBufferOutput* self, bool (*slot)(QAudioBufferOutput*, QObject*, QEvent*) ```
void q_audiobufferoutput_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioBufferOutput* self, QTimerEvent* event ```
void q_audiobufferoutput_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioBufferOutput* self, QTimerEvent* event ```
void q_audiobufferoutput_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioBufferOutput* self, void (*slot)(QAudioBufferOutput*, QTimerEvent*) ```
void q_audiobufferoutput_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioBufferOutput* self, QChildEvent* event ```
void q_audiobufferoutput_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioBufferOutput* self, QChildEvent* event ```
void q_audiobufferoutput_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioBufferOutput* self, void (*slot)(QAudioBufferOutput*, QChildEvent*) ```
void q_audiobufferoutput_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioBufferOutput* self, QEvent* event ```
void q_audiobufferoutput_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioBufferOutput* self, QEvent* event ```
void q_audiobufferoutput_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioBufferOutput* self, void (*slot)(QAudioBufferOutput*, QEvent*) ```
void q_audiobufferoutput_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioBufferOutput* self, QMetaMethod* signal ```
void q_audiobufferoutput_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioBufferOutput* self, QMetaMethod* signal ```
void q_audiobufferoutput_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioBufferOutput* self, void (*slot)(QAudioBufferOutput*, QMetaMethod*) ```
void q_audiobufferoutput_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioBufferOutput* self, QMetaMethod* signal ```
void q_audiobufferoutput_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioBufferOutput* self, QMetaMethod* signal ```
void q_audiobufferoutput_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioBufferOutput* self, void (*slot)(QAudioBufferOutput*, QMetaMethod*) ```
void q_audiobufferoutput_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioBufferOutput* self ```
QObject* q_audiobufferoutput_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioBufferOutput* self ```
QObject* q_audiobufferoutput_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioBufferOutput* self, QObject* (*slot)() ```
void q_audiobufferoutput_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioBufferOutput* self ```
int32_t q_audiobufferoutput_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioBufferOutput* self ```
int32_t q_audiobufferoutput_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioBufferOutput* self, int32_t (*slot)() ```
void q_audiobufferoutput_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioBufferOutput* self, const char* signal ```
int32_t q_audiobufferoutput_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioBufferOutput* self, const char* signal ```
int32_t q_audiobufferoutput_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioBufferOutput* self, int32_t (*slot)(QAudioBufferOutput*, const char*) ```
void q_audiobufferoutput_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioBufferOutput* self, QMetaMethod* signal ```
bool q_audiobufferoutput_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioBufferOutput* self, QMetaMethod* signal ```
bool q_audiobufferoutput_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioBufferOutput* self, bool (*slot)(QAudioBufferOutput*, QMetaMethod*) ```
void q_audiobufferoutput_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAudioBufferOutput* self, void (*slot)(QObject*, const char*) ```
void q_audiobufferoutput_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobufferoutput.html#dtor.QAudioBufferOutput)
///
/// Delete this object from C++ memory.
///
/// ``` QAudioBufferOutput* self ```
void q_audiobufferoutput_delete(void* self);

#endif
