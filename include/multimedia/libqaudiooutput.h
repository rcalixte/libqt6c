#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQAUDIOOUTPUT_H
#define SRC_MULTIMEDIAQT6C_LIBQAUDIOOUTPUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qaudiooutput.html

/// q_audiooutput_new constructs a new QAudioOutput object.
///
///
QAudioOutput* q_audiooutput_new();

/// q_audiooutput_new2 constructs a new QAudioOutput object.
///
/// ``` QAudioDevice* device ```
QAudioOutput* q_audiooutput_new2(void* device);

/// q_audiooutput_new3 constructs a new QAudioOutput object.
///
/// ``` QObject* parent ```
QAudioOutput* q_audiooutput_new3(void* parent);

/// q_audiooutput_new4 constructs a new QAudioOutput object.
///
/// ``` QAudioDevice* device, QObject* parent ```
QAudioOutput* q_audiooutput_new4(void* device, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAudioOutput* self ```
const QMetaObject* q_audiooutput_meta_object(void* self);

/// ``` QAudioOutput* self, const char* param1 ```
void* q_audiooutput_metacast(void* self, const char* param1);

/// ``` QAudioOutput* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audiooutput_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAudioOutput* self, int32_t (*slot)(QAudioOutput*, enum QMetaObject__Call, int, void*) ```
void q_audiooutput_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAudioOutput* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audiooutput_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_audiooutput_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiooutput.html#device)
///
/// ``` QAudioOutput* self ```
QAudioDevice* q_audiooutput_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiooutput.html#volume)
///
/// ``` QAudioOutput* self ```
float q_audiooutput_volume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiooutput.html#isMuted)
///
/// ``` QAudioOutput* self ```
bool q_audiooutput_is_muted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiooutput.html#setDevice)
///
/// ``` QAudioOutput* self, QAudioDevice* device ```
void q_audiooutput_set_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiooutput.html#setVolume)
///
/// ``` QAudioOutput* self, float volume ```
void q_audiooutput_set_volume(void* self, float volume);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiooutput.html#setMuted)
///
/// ``` QAudioOutput* self, bool muted ```
void q_audiooutput_set_muted(void* self, bool muted);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiooutput.html#deviceChanged)
///
/// ``` QAudioOutput* self ```
void q_audiooutput_device_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiooutput.html#deviceChanged)
///
/// ``` QAudioOutput* self, void (*slot)(QAudioOutput*) ```
void q_audiooutput_on_device_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiooutput.html#volumeChanged)
///
/// ``` QAudioOutput* self, float volume ```
void q_audiooutput_volume_changed(void* self, float volume);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiooutput.html#volumeChanged)
///
/// ``` QAudioOutput* self, void (*slot)(QAudioOutput*, float) ```
void q_audiooutput_on_volume_changed(void* self, void (*slot)(void*, float));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiooutput.html#mutedChanged)
///
/// ``` QAudioOutput* self, bool muted ```
void q_audiooutput_muted_changed(void* self, bool muted);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiooutput.html#mutedChanged)
///
/// ``` QAudioOutput* self, void (*slot)(QAudioOutput*, bool) ```
void q_audiooutput_on_muted_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_audiooutput_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_audiooutput_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAudioOutput* self ```
const char* q_audiooutput_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAudioOutput* self, char* name ```
void q_audiooutput_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAudioOutput* self ```
bool q_audiooutput_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAudioOutput* self ```
bool q_audiooutput_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAudioOutput* self ```
bool q_audiooutput_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAudioOutput* self ```
bool q_audiooutput_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAudioOutput* self, bool b ```
bool q_audiooutput_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAudioOutput* self ```
QThread* q_audiooutput_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAudioOutput* self, QThread* thread ```
bool q_audiooutput_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioOutput* self, int interval ```
int32_t q_audiooutput_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAudioOutput* self, int id ```
void q_audiooutput_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAudioOutput* self, enum Qt__TimerId id ```
void q_audiooutput_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAudioOutput* self ```
libqt_list /* of QObject* */ q_audiooutput_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAudioOutput* self, QObject* parent ```
void q_audiooutput_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAudioOutput* self, QObject* filterObj ```
void q_audiooutput_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAudioOutput* self, QObject* obj ```
void q_audiooutput_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_audiooutput_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioOutput* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_audiooutput_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_audiooutput_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_audiooutput_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAudioOutput* self ```
void q_audiooutput_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAudioOutput* self ```
void q_audiooutput_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAudioOutput* self, const char* name, QVariant* value ```
bool q_audiooutput_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAudioOutput* self, const char* name ```
QVariant* q_audiooutput_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAudioOutput* self ```
const char** q_audiooutput_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioOutput* self ```
QBindingStorage* q_audiooutput_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioOutput* self ```
const QBindingStorage* q_audiooutput_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioOutput* self ```
void q_audiooutput_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioOutput* self, void (*slot)(QObject*) ```
void q_audiooutput_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAudioOutput* self ```
QObject* q_audiooutput_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAudioOutput* self, const char* classname ```
bool q_audiooutput_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAudioOutput* self ```
void q_audiooutput_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAudioOutput* self, QThread* thread, Disambiguated_t* param2 ```
bool q_audiooutput_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioOutput* self, int interval, enum Qt__TimerType timerType ```
int32_t q_audiooutput_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audiooutput_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioOutput* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audiooutput_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioOutput* self, QObject* param1 ```
void q_audiooutput_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioOutput* self, void (*slot)(QObject*, QObject*) ```
void q_audiooutput_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioOutput* self, QEvent* event ```
bool q_audiooutput_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioOutput* self, QEvent* event ```
bool q_audiooutput_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioOutput* self, bool (*slot)(QAudioOutput*, QEvent*) ```
void q_audiooutput_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioOutput* self, QObject* watched, QEvent* event ```
bool q_audiooutput_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioOutput* self, QObject* watched, QEvent* event ```
bool q_audiooutput_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioOutput* self, bool (*slot)(QAudioOutput*, QObject*, QEvent*) ```
void q_audiooutput_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioOutput* self, QTimerEvent* event ```
void q_audiooutput_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioOutput* self, QTimerEvent* event ```
void q_audiooutput_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioOutput* self, void (*slot)(QAudioOutput*, QTimerEvent*) ```
void q_audiooutput_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioOutput* self, QChildEvent* event ```
void q_audiooutput_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioOutput* self, QChildEvent* event ```
void q_audiooutput_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioOutput* self, void (*slot)(QAudioOutput*, QChildEvent*) ```
void q_audiooutput_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioOutput* self, QEvent* event ```
void q_audiooutput_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioOutput* self, QEvent* event ```
void q_audiooutput_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioOutput* self, void (*slot)(QAudioOutput*, QEvent*) ```
void q_audiooutput_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioOutput* self, QMetaMethod* signal ```
void q_audiooutput_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioOutput* self, QMetaMethod* signal ```
void q_audiooutput_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioOutput* self, void (*slot)(QAudioOutput*, QMetaMethod*) ```
void q_audiooutput_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioOutput* self, QMetaMethod* signal ```
void q_audiooutput_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioOutput* self, QMetaMethod* signal ```
void q_audiooutput_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioOutput* self, void (*slot)(QAudioOutput*, QMetaMethod*) ```
void q_audiooutput_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioOutput* self ```
QObject* q_audiooutput_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioOutput* self ```
QObject* q_audiooutput_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioOutput* self, QObject* (*slot)() ```
void q_audiooutput_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioOutput* self ```
int32_t q_audiooutput_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioOutput* self ```
int32_t q_audiooutput_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioOutput* self, int32_t (*slot)() ```
void q_audiooutput_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioOutput* self, const char* signal ```
int32_t q_audiooutput_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioOutput* self, const char* signal ```
int32_t q_audiooutput_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioOutput* self, int32_t (*slot)(QAudioOutput*, const char*) ```
void q_audiooutput_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioOutput* self, QMetaMethod* signal ```
bool q_audiooutput_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioOutput* self, QMetaMethod* signal ```
bool q_audiooutput_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioOutput* self, bool (*slot)(QAudioOutput*, QMetaMethod*) ```
void q_audiooutput_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAudioOutput* self, void (*slot)(QObject*, const char*) ```
void q_audiooutput_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiooutput.html#dtor.QAudioOutput)
///
/// Delete this object from C++ memory.
///
/// ``` QAudioOutput* self ```
void q_audiooutput_delete(void* self);

#endif
