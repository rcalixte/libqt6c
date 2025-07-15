#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQMEDIADEVICES_H
#define SRC_MULTIMEDIAQT6C_LIBQMEDIADEVICES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qmediadevices.html

/// q_mediadevices_new constructs a new QMediaDevices object.
///
///
QMediaDevices* q_mediadevices_new();

/// q_mediadevices_new2 constructs a new QMediaDevices object.
///
/// ``` QObject* parent ```
QMediaDevices* q_mediadevices_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QMediaDevices* self ```
const QMetaObject* q_mediadevices_meta_object(void* self);

/// ``` QMediaDevices* self, const char* param1 ```
void* q_mediadevices_metacast(void* self, const char* param1);

/// ``` QMediaDevices* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mediadevices_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QMediaDevices* self, int32_t (*slot)(QMediaDevices*, enum QMetaObject__Call, int, void*) ```
void q_mediadevices_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QMediaDevices* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mediadevices_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_mediadevices_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#audioInputs)
///
///
libqt_list /* of QAudioDevice* */ q_mediadevices_audio_inputs();

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#audioOutputs)
///
///
libqt_list /* of QAudioDevice* */ q_mediadevices_audio_outputs();

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#videoInputs)
///
///
libqt_list /* of QCameraDevice* */ q_mediadevices_video_inputs();

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#defaultAudioInput)
///
///
QAudioDevice* q_mediadevices_default_audio_input();

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#defaultAudioOutput)
///
///
QAudioDevice* q_mediadevices_default_audio_output();

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#defaultVideoInput)
///
///
QCameraDevice* q_mediadevices_default_video_input();

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#audioInputsChanged)
///
/// ``` QMediaDevices* self ```
void q_mediadevices_audio_inputs_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#audioInputsChanged)
///
/// ``` QMediaDevices* self, void (*slot)(QMediaDevices*) ```
void q_mediadevices_on_audio_inputs_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#audioOutputsChanged)
///
/// ``` QMediaDevices* self ```
void q_mediadevices_audio_outputs_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#audioOutputsChanged)
///
/// ``` QMediaDevices* self, void (*slot)(QMediaDevices*) ```
void q_mediadevices_on_audio_outputs_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#videoInputsChanged)
///
/// ``` QMediaDevices* self ```
void q_mediadevices_video_inputs_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#videoInputsChanged)
///
/// ``` QMediaDevices* self, void (*slot)(QMediaDevices*) ```
void q_mediadevices_on_video_inputs_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#connectNotify)
///
/// ``` QMediaDevices* self, QMetaMethod* signal ```
void q_mediadevices_connect_notify(void* self, void* signal);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#connectNotify)
///
/// Allows for overriding the related default method
///
/// ``` QMediaDevices* self, void (*slot)(QMediaDevices*, QMetaMethod*) ```
void q_mediadevices_on_connect_notify(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#connectNotify)
///
/// Base class method implementation
///
/// ``` QMediaDevices* self, QMetaMethod* signal ```
void q_mediadevices_qbase_connect_notify(void* self, void* signal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_mediadevices_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_mediadevices_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QMediaDevices* self ```
const char* q_mediadevices_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QMediaDevices* self, char* name ```
void q_mediadevices_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QMediaDevices* self ```
bool q_mediadevices_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QMediaDevices* self ```
bool q_mediadevices_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QMediaDevices* self ```
bool q_mediadevices_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QMediaDevices* self ```
bool q_mediadevices_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QMediaDevices* self, bool b ```
bool q_mediadevices_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QMediaDevices* self ```
QThread* q_mediadevices_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QMediaDevices* self, QThread* thread ```
bool q_mediadevices_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMediaDevices* self, int interval ```
int32_t q_mediadevices_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QMediaDevices* self, int id ```
void q_mediadevices_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QMediaDevices* self, enum Qt__TimerId id ```
void q_mediadevices_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QMediaDevices* self ```
libqt_list /* of QObject* */ q_mediadevices_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QMediaDevices* self, QObject* parent ```
void q_mediadevices_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QMediaDevices* self, QObject* filterObj ```
void q_mediadevices_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QMediaDevices* self, QObject* obj ```
void q_mediadevices_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_mediadevices_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMediaDevices* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_mediadevices_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_mediadevices_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_mediadevices_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QMediaDevices* self ```
void q_mediadevices_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QMediaDevices* self ```
void q_mediadevices_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QMediaDevices* self, const char* name, QVariant* value ```
bool q_mediadevices_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QMediaDevices* self, const char* name ```
QVariant* q_mediadevices_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QMediaDevices* self ```
const char** q_mediadevices_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMediaDevices* self ```
QBindingStorage* q_mediadevices_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMediaDevices* self ```
const QBindingStorage* q_mediadevices_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMediaDevices* self ```
void q_mediadevices_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMediaDevices* self, void (*slot)(QObject*) ```
void q_mediadevices_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QMediaDevices* self ```
QObject* q_mediadevices_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QMediaDevices* self, const char* classname ```
bool q_mediadevices_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QMediaDevices* self ```
void q_mediadevices_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QMediaDevices* self, QThread* thread, Disambiguated_t* param2 ```
bool q_mediadevices_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMediaDevices* self, int interval, enum Qt__TimerType timerType ```
int32_t q_mediadevices_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mediadevices_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMediaDevices* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mediadevices_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMediaDevices* self, QObject* param1 ```
void q_mediadevices_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMediaDevices* self, void (*slot)(QObject*, QObject*) ```
void q_mediadevices_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaDevices* self, QEvent* event ```
bool q_mediadevices_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaDevices* self, QEvent* event ```
bool q_mediadevices_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaDevices* self, bool (*slot)(QMediaDevices*, QEvent*) ```
void q_mediadevices_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaDevices* self, QObject* watched, QEvent* event ```
bool q_mediadevices_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaDevices* self, QObject* watched, QEvent* event ```
bool q_mediadevices_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaDevices* self, bool (*slot)(QMediaDevices*, QObject*, QEvent*) ```
void q_mediadevices_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaDevices* self, QTimerEvent* event ```
void q_mediadevices_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaDevices* self, QTimerEvent* event ```
void q_mediadevices_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaDevices* self, void (*slot)(QMediaDevices*, QTimerEvent*) ```
void q_mediadevices_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaDevices* self, QChildEvent* event ```
void q_mediadevices_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaDevices* self, QChildEvent* event ```
void q_mediadevices_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaDevices* self, void (*slot)(QMediaDevices*, QChildEvent*) ```
void q_mediadevices_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaDevices* self, QEvent* event ```
void q_mediadevices_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaDevices* self, QEvent* event ```
void q_mediadevices_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaDevices* self, void (*slot)(QMediaDevices*, QEvent*) ```
void q_mediadevices_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaDevices* self, QMetaMethod* signal ```
void q_mediadevices_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaDevices* self, QMetaMethod* signal ```
void q_mediadevices_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaDevices* self, void (*slot)(QMediaDevices*, QMetaMethod*) ```
void q_mediadevices_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaDevices* self ```
QObject* q_mediadevices_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaDevices* self ```
QObject* q_mediadevices_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaDevices* self, QObject* (*slot)() ```
void q_mediadevices_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaDevices* self ```
int32_t q_mediadevices_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaDevices* self ```
int32_t q_mediadevices_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaDevices* self, int32_t (*slot)() ```
void q_mediadevices_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaDevices* self, const char* signal ```
int32_t q_mediadevices_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaDevices* self, const char* signal ```
int32_t q_mediadevices_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaDevices* self, int32_t (*slot)(QMediaDevices*, const char*) ```
void q_mediadevices_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaDevices* self, QMetaMethod* signal ```
bool q_mediadevices_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaDevices* self, QMetaMethod* signal ```
bool q_mediadevices_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaDevices* self, bool (*slot)(QMediaDevices*, QMetaMethod*) ```
void q_mediadevices_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QMediaDevices* self, void (*slot)(QObject*, const char*) ```
void q_mediadevices_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#dtor.QMediaDevices)
///
/// Delete this object from C++ memory.
///
/// ``` QMediaDevices* self ```
void q_mediadevices_delete(void* self);

#endif
