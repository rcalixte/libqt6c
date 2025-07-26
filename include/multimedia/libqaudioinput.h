#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQAUDIOINPUT_H
#define SRC_MULTIMEDIAQT6C_LIBQAUDIOINPUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qaudioinput.html

/// q_audioinput_new constructs a new QAudioInput object.
///
///
QAudioInput* q_audioinput_new();

/// q_audioinput_new2 constructs a new QAudioInput object.
///
/// ``` QAudioDevice* deviceInfo ```
QAudioInput* q_audioinput_new2(void* deviceInfo);

/// q_audioinput_new3 constructs a new QAudioInput object.
///
/// ``` QObject* parent ```
QAudioInput* q_audioinput_new3(void* parent);

/// q_audioinput_new4 constructs a new QAudioInput object.
///
/// ``` QAudioDevice* deviceInfo, QObject* parent ```
QAudioInput* q_audioinput_new4(void* deviceInfo, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAudioInput* self ```
const QMetaObject* q_audioinput_meta_object(void* self);

/// ``` QAudioInput* self, const char* param1 ```
void* q_audioinput_metacast(void* self, const char* param1);

/// ``` QAudioInput* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audioinput_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAudioInput* self, int32_t (*slot)(QAudioInput*, enum QMetaObject__Call, int, void*) ```
void q_audioinput_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAudioInput* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audioinput_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_audioinput_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#device)
///
/// ``` QAudioInput* self ```
QAudioDevice* q_audioinput_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#volume)
///
/// ``` QAudioInput* self ```
float q_audioinput_volume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#isMuted)
///
/// ``` QAudioInput* self ```
bool q_audioinput_is_muted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#setDevice)
///
/// ``` QAudioInput* self, QAudioDevice* device ```
void q_audioinput_set_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#setVolume)
///
/// ``` QAudioInput* self, float volume ```
void q_audioinput_set_volume(void* self, float volume);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#setMuted)
///
/// ``` QAudioInput* self, bool muted ```
void q_audioinput_set_muted(void* self, bool muted);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#deviceChanged)
///
/// ``` QAudioInput* self ```
void q_audioinput_device_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#deviceChanged)
///
/// ``` QAudioInput* self, void (*slot)(QAudioInput*) ```
void q_audioinput_on_device_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#volumeChanged)
///
/// ``` QAudioInput* self, float volume ```
void q_audioinput_volume_changed(void* self, float volume);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#volumeChanged)
///
/// ``` QAudioInput* self, void (*slot)(QAudioInput*, float) ```
void q_audioinput_on_volume_changed(void* self, void (*slot)(void*, float));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#mutedChanged)
///
/// ``` QAudioInput* self, bool muted ```
void q_audioinput_muted_changed(void* self, bool muted);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#mutedChanged)
///
/// ``` QAudioInput* self, void (*slot)(QAudioInput*, bool) ```
void q_audioinput_on_muted_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_audioinput_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_audioinput_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAudioInput* self ```
const char* q_audioinput_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAudioInput* self, char* name ```
void q_audioinput_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAudioInput* self ```
bool q_audioinput_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAudioInput* self ```
bool q_audioinput_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAudioInput* self ```
bool q_audioinput_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAudioInput* self ```
bool q_audioinput_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAudioInput* self, bool b ```
bool q_audioinput_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAudioInput* self ```
QThread* q_audioinput_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAudioInput* self, QThread* thread ```
bool q_audioinput_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioInput* self, int interval ```
int32_t q_audioinput_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAudioInput* self, int id ```
void q_audioinput_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAudioInput* self, enum Qt__TimerId id ```
void q_audioinput_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAudioInput* self ```
libqt_list /* of QObject* */ q_audioinput_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAudioInput* self, QObject* parent ```
void q_audioinput_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAudioInput* self, QObject* filterObj ```
void q_audioinput_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAudioInput* self, QObject* obj ```
void q_audioinput_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_audioinput_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioInput* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_audioinput_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_audioinput_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_audioinput_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAudioInput* self ```
void q_audioinput_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAudioInput* self ```
void q_audioinput_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAudioInput* self, const char* name, QVariant* value ```
bool q_audioinput_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAudioInput* self, const char* name ```
QVariant* q_audioinput_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAudioInput* self ```
const char** q_audioinput_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioInput* self ```
QBindingStorage* q_audioinput_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioInput* self ```
const QBindingStorage* q_audioinput_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioInput* self ```
void q_audioinput_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioInput* self, void (*slot)(QAudioInput*) ```
void q_audioinput_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAudioInput* self ```
QObject* q_audioinput_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAudioInput* self, const char* classname ```
bool q_audioinput_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAudioInput* self ```
void q_audioinput_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAudioInput* self, QThread* thread, Disambiguated_t* param2 ```
bool q_audioinput_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioInput* self, int interval, enum Qt__TimerType timerType ```
int32_t q_audioinput_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audioinput_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioInput* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audioinput_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioInput* self, QObject* param1 ```
void q_audioinput_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioInput* self, void (*slot)(QAudioInput*, QObject*) ```
void q_audioinput_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioInput* self, QEvent* event ```
bool q_audioinput_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioInput* self, QEvent* event ```
bool q_audioinput_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioInput* self, bool (*slot)(QAudioInput*, QEvent*) ```
void q_audioinput_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioInput* self, QObject* watched, QEvent* event ```
bool q_audioinput_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioInput* self, QObject* watched, QEvent* event ```
bool q_audioinput_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioInput* self, bool (*slot)(QAudioInput*, QObject*, QEvent*) ```
void q_audioinput_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioInput* self, QTimerEvent* event ```
void q_audioinput_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioInput* self, QTimerEvent* event ```
void q_audioinput_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioInput* self, void (*slot)(QAudioInput*, QTimerEvent*) ```
void q_audioinput_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioInput* self, QChildEvent* event ```
void q_audioinput_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioInput* self, QChildEvent* event ```
void q_audioinput_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioInput* self, void (*slot)(QAudioInput*, QChildEvent*) ```
void q_audioinput_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioInput* self, QEvent* event ```
void q_audioinput_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioInput* self, QEvent* event ```
void q_audioinput_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioInput* self, void (*slot)(QAudioInput*, QEvent*) ```
void q_audioinput_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioInput* self, QMetaMethod* signal ```
void q_audioinput_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioInput* self, QMetaMethod* signal ```
void q_audioinput_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioInput* self, void (*slot)(QAudioInput*, QMetaMethod*) ```
void q_audioinput_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioInput* self, QMetaMethod* signal ```
void q_audioinput_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioInput* self, QMetaMethod* signal ```
void q_audioinput_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioInput* self, void (*slot)(QAudioInput*, QMetaMethod*) ```
void q_audioinput_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioInput* self ```
QObject* q_audioinput_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioInput* self ```
QObject* q_audioinput_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioInput* self, QObject* (*slot)() ```
void q_audioinput_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioInput* self ```
int32_t q_audioinput_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioInput* self ```
int32_t q_audioinput_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioInput* self, int32_t (*slot)() ```
void q_audioinput_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioInput* self, const char* signal ```
int32_t q_audioinput_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioInput* self, const char* signal ```
int32_t q_audioinput_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioInput* self, int32_t (*slot)(QAudioInput*, const char*) ```
void q_audioinput_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioInput* self, QMetaMethod* signal ```
bool q_audioinput_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioInput* self, QMetaMethod* signal ```
bool q_audioinput_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioInput* self, bool (*slot)(QAudioInput*, QMetaMethod*) ```
void q_audioinput_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAudioInput* self, void (*slot)(QAudioInput*, const char*) ```
void q_audioinput_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#dtor.QAudioInput)
///
/// Delete this object from C++ memory.
///
/// ``` QAudioInput* self ```
void q_audioinput_delete(void* self);

#endif
