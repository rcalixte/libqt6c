#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQSOUNDEFFECT_H
#define SRC_MULTIMEDIAQT6C_LIBQSOUNDEFFECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qsoundeffect.html

/// q_soundeffect_new constructs a new QSoundEffect object.
///
///
QSoundEffect* q_soundeffect_new();

/// q_soundeffect_new2 constructs a new QSoundEffect object.
///
/// ``` QAudioDevice* audioDevice ```
QSoundEffect* q_soundeffect_new2(void* audioDevice);

/// q_soundeffect_new3 constructs a new QSoundEffect object.
///
/// ``` QObject* parent ```
QSoundEffect* q_soundeffect_new3(void* parent);

/// q_soundeffect_new4 constructs a new QSoundEffect object.
///
/// ``` QAudioDevice* audioDevice, QObject* parent ```
QSoundEffect* q_soundeffect_new4(void* audioDevice, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSoundEffect* self ```
const QMetaObject* q_soundeffect_meta_object(void* self);

/// ``` QSoundEffect* self, const char* param1 ```
void* q_soundeffect_metacast(void* self, const char* param1);

/// ``` QSoundEffect* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_soundeffect_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QSoundEffect* self, int32_t (*slot)(QSoundEffect*, enum QMetaObject__Call, int, void*) ```
void q_soundeffect_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QSoundEffect* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_soundeffect_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_soundeffect_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#supportedMimeTypes)
///
///
const char** q_soundeffect_supported_mime_types();

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#source)
///
/// ``` QSoundEffect* self ```
QUrl* q_soundeffect_source(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#setSource)
///
/// ``` QSoundEffect* self, QUrl* url ```
void q_soundeffect_set_source(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#loopCount)
///
/// ``` QSoundEffect* self ```
int32_t q_soundeffect_loop_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#loopsRemaining)
///
/// ``` QSoundEffect* self ```
int32_t q_soundeffect_loops_remaining(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#setLoopCount)
///
/// ``` QSoundEffect* self, int loopCount ```
void q_soundeffect_set_loop_count(void* self, int loopCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#audioDevice)
///
/// ``` QSoundEffect* self ```
QAudioDevice* q_soundeffect_audio_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#setAudioDevice)
///
/// ``` QSoundEffect* self, QAudioDevice* device ```
void q_soundeffect_set_audio_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#volume)
///
/// ``` QSoundEffect* self ```
float q_soundeffect_volume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#setVolume)
///
/// ``` QSoundEffect* self, float volume ```
void q_soundeffect_set_volume(void* self, float volume);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#isMuted)
///
/// ``` QSoundEffect* self ```
bool q_soundeffect_is_muted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#setMuted)
///
/// ``` QSoundEffect* self, bool muted ```
void q_soundeffect_set_muted(void* self, bool muted);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#isLoaded)
///
/// ``` QSoundEffect* self ```
bool q_soundeffect_is_loaded(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#isPlaying)
///
/// ``` QSoundEffect* self ```
bool q_soundeffect_is_playing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#status)
///
/// ``` QSoundEffect* self ```
int64_t q_soundeffect_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#sourceChanged)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_source_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#sourceChanged)
///
/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*) ```
void q_soundeffect_on_source_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#loopCountChanged)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_loop_count_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#loopCountChanged)
///
/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*) ```
void q_soundeffect_on_loop_count_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#loopsRemainingChanged)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_loops_remaining_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#loopsRemainingChanged)
///
/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*) ```
void q_soundeffect_on_loops_remaining_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#volumeChanged)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_volume_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#volumeChanged)
///
/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*) ```
void q_soundeffect_on_volume_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#mutedChanged)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_muted_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#mutedChanged)
///
/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*) ```
void q_soundeffect_on_muted_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#loadedChanged)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_loaded_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#loadedChanged)
///
/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*) ```
void q_soundeffect_on_loaded_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#playingChanged)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_playing_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#playingChanged)
///
/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*) ```
void q_soundeffect_on_playing_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#statusChanged)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_status_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#statusChanged)
///
/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*) ```
void q_soundeffect_on_status_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#audioDeviceChanged)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_audio_device_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#audioDeviceChanged)
///
/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*) ```
void q_soundeffect_on_audio_device_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#play)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_play(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#stop)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_soundeffect_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_soundeffect_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSoundEffect* self ```
const char* q_soundeffect_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSoundEffect* self, char* name ```
void q_soundeffect_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSoundEffect* self ```
bool q_soundeffect_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSoundEffect* self ```
bool q_soundeffect_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSoundEffect* self ```
bool q_soundeffect_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSoundEffect* self ```
bool q_soundeffect_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSoundEffect* self, bool b ```
bool q_soundeffect_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSoundEffect* self ```
QThread* q_soundeffect_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSoundEffect* self, QThread* thread ```
bool q_soundeffect_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSoundEffect* self, int interval ```
int32_t q_soundeffect_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSoundEffect* self, int id ```
void q_soundeffect_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSoundEffect* self, enum Qt__TimerId id ```
void q_soundeffect_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSoundEffect* self ```
libqt_list /* of QObject* */ q_soundeffect_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSoundEffect* self, QObject* parent ```
void q_soundeffect_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSoundEffect* self, QObject* filterObj ```
void q_soundeffect_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSoundEffect* self, QObject* obj ```
void q_soundeffect_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_soundeffect_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSoundEffect* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_soundeffect_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_soundeffect_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_soundeffect_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSoundEffect* self, const char* name, QVariant* value ```
bool q_soundeffect_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSoundEffect* self, const char* name ```
QVariant* q_soundeffect_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSoundEffect* self ```
const char** q_soundeffect_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSoundEffect* self ```
QBindingStorage* q_soundeffect_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSoundEffect* self ```
const QBindingStorage* q_soundeffect_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*) ```
void q_soundeffect_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSoundEffect* self ```
QObject* q_soundeffect_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSoundEffect* self, const char* classname ```
bool q_soundeffect_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSoundEffect* self, QThread* thread, Disambiguated_t* param2 ```
bool q_soundeffect_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSoundEffect* self, int interval, enum Qt__TimerType timerType ```
int32_t q_soundeffect_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_soundeffect_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSoundEffect* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_soundeffect_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSoundEffect* self, QObject* param1 ```
void q_soundeffect_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*, QObject*) ```
void q_soundeffect_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSoundEffect* self, QEvent* event ```
bool q_soundeffect_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSoundEffect* self, QEvent* event ```
bool q_soundeffect_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSoundEffect* self, bool (*slot)(QSoundEffect*, QEvent*) ```
void q_soundeffect_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSoundEffect* self, QObject* watched, QEvent* event ```
bool q_soundeffect_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSoundEffect* self, QObject* watched, QEvent* event ```
bool q_soundeffect_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSoundEffect* self, bool (*slot)(QSoundEffect*, QObject*, QEvent*) ```
void q_soundeffect_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSoundEffect* self, QTimerEvent* event ```
void q_soundeffect_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSoundEffect* self, QTimerEvent* event ```
void q_soundeffect_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*, QTimerEvent*) ```
void q_soundeffect_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSoundEffect* self, QChildEvent* event ```
void q_soundeffect_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSoundEffect* self, QChildEvent* event ```
void q_soundeffect_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*, QChildEvent*) ```
void q_soundeffect_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSoundEffect* self, QEvent* event ```
void q_soundeffect_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSoundEffect* self, QEvent* event ```
void q_soundeffect_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*, QEvent*) ```
void q_soundeffect_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSoundEffect* self, QMetaMethod* signal ```
void q_soundeffect_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSoundEffect* self, QMetaMethod* signal ```
void q_soundeffect_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*, QMetaMethod*) ```
void q_soundeffect_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSoundEffect* self, QMetaMethod* signal ```
void q_soundeffect_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSoundEffect* self, QMetaMethod* signal ```
void q_soundeffect_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*, QMetaMethod*) ```
void q_soundeffect_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSoundEffect* self ```
QObject* q_soundeffect_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSoundEffect* self ```
QObject* q_soundeffect_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSoundEffect* self, QObject* (*slot)() ```
void q_soundeffect_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSoundEffect* self ```
int32_t q_soundeffect_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSoundEffect* self ```
int32_t q_soundeffect_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSoundEffect* self, int32_t (*slot)() ```
void q_soundeffect_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSoundEffect* self, const char* signal ```
int32_t q_soundeffect_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSoundEffect* self, const char* signal ```
int32_t q_soundeffect_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSoundEffect* self, int32_t (*slot)(QSoundEffect*, const char*) ```
void q_soundeffect_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSoundEffect* self, QMetaMethod* signal ```
bool q_soundeffect_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSoundEffect* self, QMetaMethod* signal ```
bool q_soundeffect_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSoundEffect* self, bool (*slot)(QSoundEffect*, QMetaMethod*) ```
void q_soundeffect_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*, const char*) ```
void q_soundeffect_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#dtor.QSoundEffect)
///
/// Delete this object from C++ memory.
///
/// ``` QSoundEffect* self ```
void q_soundeffect_delete(void* self);

/// https://doc.qt.io/qt-6/qsoundeffect.html#types

typedef enum {
    QSOUNDEFFECT_LOOP_INFINITE = -2
} QSoundEffect__Loop;

typedef enum {
    QSOUNDEFFECT_STATUS_NULL = 0,
    QSOUNDEFFECT_STATUS_LOADING = 1,
    QSOUNDEFFECT_STATUS_READY = 2,
    QSOUNDEFFECT_STATUS_ERROR = 3
} QSoundEffect__Status;

#endif
