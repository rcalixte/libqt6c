#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQAUDIOBUFFERINPUT_H
#define SRC_MULTIMEDIAQT6C_LIBQAUDIOBUFFERINPUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qaudiobufferinput.html

/// q_audiobufferinput_new constructs a new QAudioBufferInput object.
///
///
QAudioBufferInput* q_audiobufferinput_new();

/// q_audiobufferinput_new2 constructs a new QAudioBufferInput object.
///
/// ``` QAudioFormat* format ```
QAudioBufferInput* q_audiobufferinput_new2(void* format);

/// q_audiobufferinput_new3 constructs a new QAudioBufferInput object.
///
/// ``` QObject* parent ```
QAudioBufferInput* q_audiobufferinput_new3(void* parent);

/// q_audiobufferinput_new4 constructs a new QAudioBufferInput object.
///
/// ``` QAudioFormat* format, QObject* parent ```
QAudioBufferInput* q_audiobufferinput_new4(void* format, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAudioBufferInput* self ```
const QMetaObject* q_audiobufferinput_meta_object(void* self);

/// ``` QAudioBufferInput* self, const char* param1 ```
void* q_audiobufferinput_metacast(void* self, const char* param1);

/// ``` QAudioBufferInput* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audiobufferinput_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAudioBufferInput* self, int32_t (*slot)(QAudioBufferInput*, enum QMetaObject__Call, int, void*) ```
void q_audiobufferinput_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAudioBufferInput* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audiobufferinput_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_audiobufferinput_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobufferinput.html#sendAudioBuffer)
///
/// ``` QAudioBufferInput* self, QAudioBuffer* audioBuffer ```
bool q_audiobufferinput_send_audio_buffer(void* self, void* audioBuffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobufferinput.html#format)
///
/// ``` QAudioBufferInput* self ```
QAudioFormat* q_audiobufferinput_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobufferinput.html#captureSession)
///
/// ``` QAudioBufferInput* self ```
QMediaCaptureSession* q_audiobufferinput_capture_session(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobufferinput.html#readyToSendAudioBuffer)
///
/// ``` QAudioBufferInput* self ```
void q_audiobufferinput_ready_to_send_audio_buffer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobufferinput.html#readyToSendAudioBuffer)
///
/// ``` QAudioBufferInput* self, void (*slot)(QAudioBufferInput*) ```
void q_audiobufferinput_on_ready_to_send_audio_buffer(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_audiobufferinput_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_audiobufferinput_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAudioBufferInput* self ```
const char* q_audiobufferinput_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAudioBufferInput* self, char* name ```
void q_audiobufferinput_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAudioBufferInput* self ```
bool q_audiobufferinput_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAudioBufferInput* self ```
bool q_audiobufferinput_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAudioBufferInput* self ```
bool q_audiobufferinput_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAudioBufferInput* self ```
bool q_audiobufferinput_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAudioBufferInput* self, bool b ```
bool q_audiobufferinput_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAudioBufferInput* self ```
QThread* q_audiobufferinput_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAudioBufferInput* self, QThread* thread ```
bool q_audiobufferinput_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioBufferInput* self, int interval ```
int32_t q_audiobufferinput_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAudioBufferInput* self, int id ```
void q_audiobufferinput_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAudioBufferInput* self, enum Qt__TimerId id ```
void q_audiobufferinput_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAudioBufferInput* self ```
libqt_list /* of QObject* */ q_audiobufferinput_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAudioBufferInput* self, QObject* parent ```
void q_audiobufferinput_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAudioBufferInput* self, QObject* filterObj ```
void q_audiobufferinput_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAudioBufferInput* self, QObject* obj ```
void q_audiobufferinput_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_audiobufferinput_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioBufferInput* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_audiobufferinput_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_audiobufferinput_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_audiobufferinput_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAudioBufferInput* self ```
void q_audiobufferinput_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAudioBufferInput* self ```
void q_audiobufferinput_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAudioBufferInput* self, const char* name, QVariant* value ```
bool q_audiobufferinput_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAudioBufferInput* self, const char* name ```
QVariant* q_audiobufferinput_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAudioBufferInput* self ```
const char** q_audiobufferinput_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioBufferInput* self ```
QBindingStorage* q_audiobufferinput_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioBufferInput* self ```
const QBindingStorage* q_audiobufferinput_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioBufferInput* self ```
void q_audiobufferinput_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioBufferInput* self, void (*slot)(QObject*) ```
void q_audiobufferinput_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAudioBufferInput* self ```
QObject* q_audiobufferinput_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAudioBufferInput* self, const char* classname ```
bool q_audiobufferinput_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAudioBufferInput* self ```
void q_audiobufferinput_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAudioBufferInput* self, QThread* thread, Disambiguated_t* param2 ```
bool q_audiobufferinput_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioBufferInput* self, int interval, enum Qt__TimerType timerType ```
int32_t q_audiobufferinput_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audiobufferinput_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioBufferInput* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audiobufferinput_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioBufferInput* self, QObject* param1 ```
void q_audiobufferinput_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioBufferInput* self, void (*slot)(QObject*, QObject*) ```
void q_audiobufferinput_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioBufferInput* self, QEvent* event ```
bool q_audiobufferinput_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioBufferInput* self, QEvent* event ```
bool q_audiobufferinput_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioBufferInput* self, bool (*slot)(QAudioBufferInput*, QEvent*) ```
void q_audiobufferinput_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioBufferInput* self, QObject* watched, QEvent* event ```
bool q_audiobufferinput_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioBufferInput* self, QObject* watched, QEvent* event ```
bool q_audiobufferinput_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioBufferInput* self, bool (*slot)(QAudioBufferInput*, QObject*, QEvent*) ```
void q_audiobufferinput_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioBufferInput* self, QTimerEvent* event ```
void q_audiobufferinput_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioBufferInput* self, QTimerEvent* event ```
void q_audiobufferinput_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioBufferInput* self, void (*slot)(QAudioBufferInput*, QTimerEvent*) ```
void q_audiobufferinput_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioBufferInput* self, QChildEvent* event ```
void q_audiobufferinput_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioBufferInput* self, QChildEvent* event ```
void q_audiobufferinput_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioBufferInput* self, void (*slot)(QAudioBufferInput*, QChildEvent*) ```
void q_audiobufferinput_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioBufferInput* self, QEvent* event ```
void q_audiobufferinput_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioBufferInput* self, QEvent* event ```
void q_audiobufferinput_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioBufferInput* self, void (*slot)(QAudioBufferInput*, QEvent*) ```
void q_audiobufferinput_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioBufferInput* self, QMetaMethod* signal ```
void q_audiobufferinput_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioBufferInput* self, QMetaMethod* signal ```
void q_audiobufferinput_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioBufferInput* self, void (*slot)(QAudioBufferInput*, QMetaMethod*) ```
void q_audiobufferinput_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioBufferInput* self, QMetaMethod* signal ```
void q_audiobufferinput_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioBufferInput* self, QMetaMethod* signal ```
void q_audiobufferinput_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioBufferInput* self, void (*slot)(QAudioBufferInput*, QMetaMethod*) ```
void q_audiobufferinput_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioBufferInput* self ```
QObject* q_audiobufferinput_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioBufferInput* self ```
QObject* q_audiobufferinput_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioBufferInput* self, QObject* (*slot)() ```
void q_audiobufferinput_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioBufferInput* self ```
int32_t q_audiobufferinput_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioBufferInput* self ```
int32_t q_audiobufferinput_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioBufferInput* self, int32_t (*slot)() ```
void q_audiobufferinput_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioBufferInput* self, const char* signal ```
int32_t q_audiobufferinput_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioBufferInput* self, const char* signal ```
int32_t q_audiobufferinput_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioBufferInput* self, int32_t (*slot)(QAudioBufferInput*, const char*) ```
void q_audiobufferinput_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioBufferInput* self, QMetaMethod* signal ```
bool q_audiobufferinput_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioBufferInput* self, QMetaMethod* signal ```
bool q_audiobufferinput_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioBufferInput* self, bool (*slot)(QAudioBufferInput*, QMetaMethod*) ```
void q_audiobufferinput_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAudioBufferInput* self, void (*slot)(QObject*, const char*) ```
void q_audiobufferinput_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiobufferinput.html#dtor.QAudioBufferInput)
///
/// Delete this object from C++ memory.
///
/// ``` QAudioBufferInput* self ```
void q_audiobufferinput_delete(void* self);

#endif
