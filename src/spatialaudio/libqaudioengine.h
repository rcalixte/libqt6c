#pragma once
#ifndef SRC_SPATIALAUDIO_QT6C_LIBQAUDIOENGINE_H
#define SRC_SPATIALAUDIO_QT6C_LIBQAUDIOENGINE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html)

/// q_audioengine_new constructs a new QAudioEngine object.
///
QAudioEngine* q_audioengine_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html)

/// q_audioengine_new2 constructs a new QAudioEngine object.
///
/// @param parent QObject*
///
QAudioEngine* q_audioengine_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html)

/// q_audioengine_new3 constructs a new QAudioEngine object.
///
/// @param sampleRate int
///
QAudioEngine* q_audioengine_new3(int sampleRate);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html)

/// q_audioengine_new4 constructs a new QAudioEngine object.
///
/// @param sampleRate int
/// @param parent QObject*
///
QAudioEngine* q_audioengine_new4(int sampleRate, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QAudioEngine*
///
const QMetaObject* q_audioengine_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QAudioEngine*
/// @param callback const QMetaObject* func()
///
void q_audioengine_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QAudioEngine*
///
const QMetaObject* q_audioengine_qbase_meta_object(void* self);

/// @param self QAudioEngine*
/// @param param1 const char*
///
void* q_audioengine_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QAudioEngine*
/// @param callback void* func(QAudioEngine* self, const char* param1)
///
void q_audioengine_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QAudioEngine*
/// @param param1 const char*
///
void* q_audioengine_qbase_metacast(void* self, const char* param1);

/// @param self QAudioEngine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_audioengine_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAudioEngine*
/// @param callback int32_t func(QAudioEngine* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_audioengine_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QAudioEngine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_audioengine_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_audioengine_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#setOutputMode)
///
/// @param self QAudioEngine*
/// @param mode enum QAudioEngine__OutputMode
///
void q_audioengine_set_output_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#outputMode)
///
/// @param self QAudioEngine*
///
/// @return enum QAudioEngine__OutputMode
///
int32_t q_audioengine_output_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#sampleRate)
///
/// @param self QAudioEngine*
///
int32_t q_audioengine_sample_rate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#setOutputDevice)
///
/// @param self QAudioEngine*
/// @param device QAudioDevice*
///
void q_audioengine_set_output_device(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#outputDevice)
///
/// @param self QAudioEngine*
///
QAudioDevice* q_audioengine_output_device(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#setMasterVolume)
///
/// @param self QAudioEngine*
/// @param volume float
///
void q_audioengine_set_master_volume(void* self, float volume);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#masterVolume)
///
/// @param self QAudioEngine*
///
float q_audioengine_master_volume(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#setPaused)
///
/// @param self QAudioEngine*
/// @param paused bool
///
void q_audioengine_set_paused(void* self, bool paused);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#paused)
///
/// @param self QAudioEngine*
///
bool q_audioengine_paused(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#setRoomEffectsEnabled)
///
/// @param self QAudioEngine*
/// @param enabled bool
///
void q_audioengine_set_room_effects_enabled(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#roomEffectsEnabled)
///
/// @param self QAudioEngine*
///
bool q_audioengine_room_effects_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#setDistanceScale)
///
/// @param self QAudioEngine*
/// @param scale float
///
void q_audioengine_set_distance_scale(void* self, float scale);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#distanceScale)
///
/// @param self QAudioEngine*
///
float q_audioengine_distance_scale(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#outputModeChanged)
///
/// @param self QAudioEngine*
///
void q_audioengine_output_mode_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#outputModeChanged)
///
/// @param self QAudioEngine*
/// @param callback void func(QAudioEngine* self)
///
void q_audioengine_on_output_mode_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#outputDeviceChanged)
///
/// @param self QAudioEngine*
///
void q_audioengine_output_device_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#outputDeviceChanged)
///
/// @param self QAudioEngine*
/// @param callback void func(QAudioEngine* self)
///
void q_audioengine_on_output_device_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#masterVolumeChanged)
///
/// @param self QAudioEngine*
///
void q_audioengine_master_volume_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#masterVolumeChanged)
///
/// @param self QAudioEngine*
/// @param callback void func(QAudioEngine* self)
///
void q_audioengine_on_master_volume_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#pausedChanged)
///
/// @param self QAudioEngine*
///
void q_audioengine_paused_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#pausedChanged)
///
/// @param self QAudioEngine*
/// @param callback void func(QAudioEngine* self)
///
void q_audioengine_on_paused_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#distanceScaleChanged)
///
/// @param self QAudioEngine*
///
void q_audioengine_distance_scale_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#distanceScaleChanged)
///
/// @param self QAudioEngine*
/// @param callback void func(QAudioEngine* self)
///
void q_audioengine_on_distance_scale_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#start)
///
/// @param self QAudioEngine*
///
void q_audioengine_start(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#stop)
///
/// @param self QAudioEngine*
///
void q_audioengine_stop(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#pause)
///
/// @param self QAudioEngine*
///
void q_audioengine_pause(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#resume)
///
/// @param self QAudioEngine*
///
void q_audioengine_resume(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_audioengine_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_audioengine_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAudioEngine*
///
const char* q_audioengine_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAudioEngine*
/// @param name char*
///
void q_audioengine_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAudioEngine*
///
bool q_audioengine_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAudioEngine*
///
bool q_audioengine_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAudioEngine*
///
bool q_audioengine_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAudioEngine*
///
bool q_audioengine_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAudioEngine*
/// @param b bool
///
bool q_audioengine_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QAudioEngine*
///
QThread* q_audioengine_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAudioEngine*
/// @param thread QThread*
///
bool q_audioengine_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioEngine*
/// @param interval int
///
int32_t q_audioengine_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioEngine*
/// @param time int64_t of nanoseconds
///
int32_t q_audioengine_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAudioEngine*
/// @param id int
///
void q_audioengine_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAudioEngine*
/// @param id enum Qt__TimerId
///
void q_audioengine_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QAudioEngine*
///
/// @return libqt_list of QObject*
///
libqt_list q_audioengine_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAudioEngine*
/// @param parent QObject*
///
void q_audioengine_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAudioEngine*
/// @param filterObj QObject*
///
void q_audioengine_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAudioEngine*
/// @param obj QObject*
///
void q_audioengine_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_audioengine_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAudioEngine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_audioengine_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_audioengine_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_audioengine_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAudioEngine*
///
void q_audioengine_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAudioEngine*
///
void q_audioengine_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAudioEngine*
/// @param name const char*
/// @param value QVariant*
///
bool q_audioengine_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAudioEngine*
/// @param name const char*
///
QVariant* q_audioengine_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAudioEngine*
///
const char** q_audioengine_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAudioEngine*
///
QBindingStorage* q_audioengine_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAudioEngine*
///
const QBindingStorage* q_audioengine_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioEngine*
///
void q_audioengine_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioEngine*
/// @param callback void func(QAudioEngine* self)
///
void q_audioengine_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QAudioEngine*
///
QObject* q_audioengine_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QAudioEngine*
/// @param classname const char*
///
bool q_audioengine_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAudioEngine*
///
void q_audioengine_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioEngine*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_audioengine_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioEngine*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_audioengine_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_audioengine_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAudioEngine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_audioengine_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioEngine*
/// @param param1 QObject*
///
void q_audioengine_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioEngine*
/// @param callback void func(QAudioEngine* self, QObject* param1)
///
void q_audioengine_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioEngine*
/// @param event QEvent*
///
bool q_audioengine_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioEngine*
/// @param event QEvent*
///
bool q_audioengine_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioEngine*
/// @param callback bool func(QAudioEngine* self, QEvent* event)
///
void q_audioengine_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioEngine*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_audioengine_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioEngine*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_audioengine_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioEngine*
/// @param callback bool func(QAudioEngine* self, QObject* watched, QEvent* event)
///
void q_audioengine_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioEngine*
/// @param event QTimerEvent*
///
void q_audioengine_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioEngine*
/// @param event QTimerEvent*
///
void q_audioengine_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioEngine*
/// @param callback void func(QAudioEngine* self, QTimerEvent* event)
///
void q_audioengine_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioEngine*
/// @param event QChildEvent*
///
void q_audioengine_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioEngine*
/// @param event QChildEvent*
///
void q_audioengine_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioEngine*
/// @param callback void func(QAudioEngine* self, QChildEvent* event)
///
void q_audioengine_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioEngine*
/// @param event QEvent*
///
void q_audioengine_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioEngine*
/// @param event QEvent*
///
void q_audioengine_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioEngine*
/// @param callback void func(QAudioEngine* self, QEvent* event)
///
void q_audioengine_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioEngine*
/// @param signal QMetaMethod*
///
void q_audioengine_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioEngine*
/// @param signal QMetaMethod*
///
void q_audioengine_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioEngine*
/// @param callback void func(QAudioEngine* self, QMetaMethod* signal)
///
void q_audioengine_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioEngine*
/// @param signal QMetaMethod*
///
void q_audioengine_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioEngine*
/// @param signal QMetaMethod*
///
void q_audioengine_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioEngine*
/// @param callback void func(QAudioEngine* self, QMetaMethod* signal)
///
void q_audioengine_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioEngine*
///
QObject* q_audioengine_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioEngine*
///
QObject* q_audioengine_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioEngine*
/// @param callback QObject* func()
///
void q_audioengine_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioEngine*
///
int32_t q_audioengine_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioEngine*
///
int32_t q_audioengine_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioEngine*
/// @param callback int32_t func()
///
void q_audioengine_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioEngine*
/// @param signal const char*
///
int32_t q_audioengine_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioEngine*
/// @param signal const char*
///
int32_t q_audioengine_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioEngine*
/// @param callback int32_t func(QAudioEngine* self, const char* signal)
///
void q_audioengine_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioEngine*
/// @param signal QMetaMethod*
///
bool q_audioengine_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioEngine*
/// @param signal QMetaMethod*
///
bool q_audioengine_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioEngine*
/// @param callback bool func(QAudioEngine* self, QMetaMethod* signal)
///
void q_audioengine_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAudioEngine*
/// @param callback void func(QAudioEngine* self, const char* objectName)
///
void q_audioengine_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#dtor.QAudioEngine)
///
/// Delete this object from C++ memory.
///
/// @param self QAudioEngine*
///
void q_audioengine_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioengine.html#public-types)

typedef enum {
    QAUDIOENGINE_OUTPUTMODE_SURROUND = 0,
    QAUDIOENGINE_OUTPUTMODE_STEREO = 1,
    QAUDIOENGINE_OUTPUTMODE_HEADPHONE = 2
} QAudioEngine__OutputMode;

#endif
