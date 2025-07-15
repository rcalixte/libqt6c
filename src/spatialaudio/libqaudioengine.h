#pragma once
#ifndef SRC_SPATIALAUDIOQT6C_LIBQAUDIOENGINE_H
#define SRC_SPATIALAUDIOQT6C_LIBQAUDIOENGINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qaudioengine.html

/// q_audioengine_new constructs a new QAudioEngine object.
///
///
QAudioEngine* q_audioengine_new();

/// q_audioengine_new2 constructs a new QAudioEngine object.
///
/// ``` QObject* parent ```
QAudioEngine* q_audioengine_new2(void* parent);

/// q_audioengine_new3 constructs a new QAudioEngine object.
///
/// ``` int sampleRate ```
QAudioEngine* q_audioengine_new3(int sampleRate);

/// q_audioengine_new4 constructs a new QAudioEngine object.
///
/// ``` int sampleRate, QObject* parent ```
QAudioEngine* q_audioengine_new4(int sampleRate, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAudioEngine* self ```
const QMetaObject* q_audioengine_meta_object(void* self);

/// ``` QAudioEngine* self, const char* param1 ```
void* q_audioengine_metacast(void* self, const char* param1);

/// ``` QAudioEngine* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audioengine_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAudioEngine* self, int32_t (*slot)(QAudioEngine*, enum QMetaObject__Call, int, void*) ```
void q_audioengine_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAudioEngine* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audioengine_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_audioengine_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#setOutputMode)
///
/// ``` QAudioEngine* self, enum QAudioEngine__OutputMode mode ```
void q_audioengine_set_output_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#outputMode)
///
/// ``` QAudioEngine* self ```
int64_t q_audioengine_output_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#sampleRate)
///
/// ``` QAudioEngine* self ```
int32_t q_audioengine_sample_rate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#setOutputDevice)
///
/// ``` QAudioEngine* self, QAudioDevice* device ```
void q_audioengine_set_output_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#outputDevice)
///
/// ``` QAudioEngine* self ```
QAudioDevice* q_audioengine_output_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#setMasterVolume)
///
/// ``` QAudioEngine* self, float volume ```
void q_audioengine_set_master_volume(void* self, float volume);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#masterVolume)
///
/// ``` QAudioEngine* self ```
float q_audioengine_master_volume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#setPaused)
///
/// ``` QAudioEngine* self, bool paused ```
void q_audioengine_set_paused(void* self, bool paused);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#paused)
///
/// ``` QAudioEngine* self ```
bool q_audioengine_paused(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#setRoomEffectsEnabled)
///
/// ``` QAudioEngine* self, bool enabled ```
void q_audioengine_set_room_effects_enabled(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#roomEffectsEnabled)
///
/// ``` QAudioEngine* self ```
bool q_audioengine_room_effects_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#setDistanceScale)
///
/// ``` QAudioEngine* self, float scale ```
void q_audioengine_set_distance_scale(void* self, float scale);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#distanceScale)
///
/// ``` QAudioEngine* self ```
float q_audioengine_distance_scale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#outputModeChanged)
///
/// ``` QAudioEngine* self ```
void q_audioengine_output_mode_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#outputModeChanged)
///
/// ``` QAudioEngine* self, void (*slot)(QAudioEngine*) ```
void q_audioengine_on_output_mode_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#outputDeviceChanged)
///
/// ``` QAudioEngine* self ```
void q_audioengine_output_device_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#outputDeviceChanged)
///
/// ``` QAudioEngine* self, void (*slot)(QAudioEngine*) ```
void q_audioengine_on_output_device_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#masterVolumeChanged)
///
/// ``` QAudioEngine* self ```
void q_audioengine_master_volume_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#masterVolumeChanged)
///
/// ``` QAudioEngine* self, void (*slot)(QAudioEngine*) ```
void q_audioengine_on_master_volume_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#pausedChanged)
///
/// ``` QAudioEngine* self ```
void q_audioengine_paused_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#pausedChanged)
///
/// ``` QAudioEngine* self, void (*slot)(QAudioEngine*) ```
void q_audioengine_on_paused_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#distanceScaleChanged)
///
/// ``` QAudioEngine* self ```
void q_audioengine_distance_scale_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#distanceScaleChanged)
///
/// ``` QAudioEngine* self, void (*slot)(QAudioEngine*) ```
void q_audioengine_on_distance_scale_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#start)
///
/// ``` QAudioEngine* self ```
void q_audioengine_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#stop)
///
/// ``` QAudioEngine* self ```
void q_audioengine_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#pause)
///
/// ``` QAudioEngine* self ```
void q_audioengine_pause(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#resume)
///
/// ``` QAudioEngine* self ```
void q_audioengine_resume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_audioengine_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_audioengine_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAudioEngine* self ```
const char* q_audioengine_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAudioEngine* self, char* name ```
void q_audioengine_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAudioEngine* self ```
bool q_audioengine_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAudioEngine* self ```
bool q_audioengine_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAudioEngine* self ```
bool q_audioengine_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAudioEngine* self ```
bool q_audioengine_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAudioEngine* self, bool b ```
bool q_audioengine_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAudioEngine* self ```
QThread* q_audioengine_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAudioEngine* self, QThread* thread ```
bool q_audioengine_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioEngine* self, int interval ```
int32_t q_audioengine_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAudioEngine* self, int id ```
void q_audioengine_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAudioEngine* self, enum Qt__TimerId id ```
void q_audioengine_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAudioEngine* self ```
libqt_list /* of QObject* */ q_audioengine_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAudioEngine* self, QObject* parent ```
void q_audioengine_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAudioEngine* self, QObject* filterObj ```
void q_audioengine_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAudioEngine* self, QObject* obj ```
void q_audioengine_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_audioengine_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioEngine* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_audioengine_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_audioengine_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_audioengine_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAudioEngine* self ```
void q_audioengine_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAudioEngine* self ```
void q_audioengine_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAudioEngine* self, const char* name, QVariant* value ```
bool q_audioengine_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAudioEngine* self, const char* name ```
QVariant* q_audioengine_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAudioEngine* self ```
const char** q_audioengine_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioEngine* self ```
QBindingStorage* q_audioengine_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioEngine* self ```
const QBindingStorage* q_audioengine_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioEngine* self ```
void q_audioengine_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioEngine* self, void (*slot)(QObject*) ```
void q_audioengine_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAudioEngine* self ```
QObject* q_audioengine_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAudioEngine* self, const char* classname ```
bool q_audioengine_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAudioEngine* self ```
void q_audioengine_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAudioEngine* self, QThread* thread, Disambiguated_t* param2 ```
bool q_audioengine_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioEngine* self, int interval, enum Qt__TimerType timerType ```
int32_t q_audioengine_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audioengine_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioEngine* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audioengine_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioEngine* self, QObject* param1 ```
void q_audioengine_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioEngine* self, void (*slot)(QObject*, QObject*) ```
void q_audioengine_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioEngine* self, QEvent* event ```
bool q_audioengine_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioEngine* self, QEvent* event ```
bool q_audioengine_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioEngine* self, bool (*slot)(QAudioEngine*, QEvent*) ```
void q_audioengine_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioEngine* self, QObject* watched, QEvent* event ```
bool q_audioengine_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioEngine* self, QObject* watched, QEvent* event ```
bool q_audioengine_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioEngine* self, bool (*slot)(QAudioEngine*, QObject*, QEvent*) ```
void q_audioengine_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioEngine* self, QTimerEvent* event ```
void q_audioengine_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioEngine* self, QTimerEvent* event ```
void q_audioengine_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioEngine* self, void (*slot)(QAudioEngine*, QTimerEvent*) ```
void q_audioengine_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioEngine* self, QChildEvent* event ```
void q_audioengine_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioEngine* self, QChildEvent* event ```
void q_audioengine_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioEngine* self, void (*slot)(QAudioEngine*, QChildEvent*) ```
void q_audioengine_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioEngine* self, QEvent* event ```
void q_audioengine_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioEngine* self, QEvent* event ```
void q_audioengine_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioEngine* self, void (*slot)(QAudioEngine*, QEvent*) ```
void q_audioengine_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioEngine* self, QMetaMethod* signal ```
void q_audioengine_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioEngine* self, QMetaMethod* signal ```
void q_audioengine_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioEngine* self, void (*slot)(QAudioEngine*, QMetaMethod*) ```
void q_audioengine_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioEngine* self, QMetaMethod* signal ```
void q_audioengine_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioEngine* self, QMetaMethod* signal ```
void q_audioengine_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioEngine* self, void (*slot)(QAudioEngine*, QMetaMethod*) ```
void q_audioengine_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioEngine* self ```
QObject* q_audioengine_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioEngine* self ```
QObject* q_audioengine_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioEngine* self, QObject* (*slot)() ```
void q_audioengine_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioEngine* self ```
int32_t q_audioengine_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioEngine* self ```
int32_t q_audioengine_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioEngine* self, int32_t (*slot)() ```
void q_audioengine_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioEngine* self, const char* signal ```
int32_t q_audioengine_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioEngine* self, const char* signal ```
int32_t q_audioengine_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioEngine* self, int32_t (*slot)(QAudioEngine*, const char*) ```
void q_audioengine_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioEngine* self, QMetaMethod* signal ```
bool q_audioengine_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioEngine* self, QMetaMethod* signal ```
bool q_audioengine_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioEngine* self, bool (*slot)(QAudioEngine*, QMetaMethod*) ```
void q_audioengine_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAudioEngine* self, void (*slot)(QObject*, const char*) ```
void q_audioengine_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#dtor.QAudioEngine)
///
/// Delete this object from C++ memory.
///
/// ``` QAudioEngine* self ```
void q_audioengine_delete(void* self);

/// https://doc.qt.io/qt-6/qaudioengine.html#types

typedef enum {
    QAUDIOENGINE_OUTPUTMODE_SURROUND = 0,
    QAUDIOENGINE_OUTPUTMODE_STEREO = 1,
    QAUDIOENGINE_OUTPUTMODE_HEADPHONE = 2
} QAudioEngine__OutputMode;

#endif
