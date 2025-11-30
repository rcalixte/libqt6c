#pragma once
#ifndef SRC_MULTIMEDIA_QT6C_LIBQSOUNDEFFECT_H
#define SRC_MULTIMEDIA_QT6C_LIBQSOUNDEFFECT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qsoundeffect.html

/// q_soundeffect_new constructs a new QSoundEffect object.
///
QSoundEffect* q_soundeffect_new();

/// q_soundeffect_new2 constructs a new QSoundEffect object.
///
/// @param audioDevice QAudioDevice*
QSoundEffect* q_soundeffect_new2(void* audioDevice);

/// q_soundeffect_new3 constructs a new QSoundEffect object.
///
/// @param parent QObject*
QSoundEffect* q_soundeffect_new3(void* parent);

/// q_soundeffect_new4 constructs a new QSoundEffect object.
///
/// @param audioDevice QAudioDevice*
/// @param parent QObject*
QSoundEffect* q_soundeffect_new4(void* audioDevice, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSoundEffect*
const QMetaObject* q_soundeffect_meta_object(void* self);

/// @param self QSoundEffect*
/// @param param1 const char*
void* q_soundeffect_metacast(void* self, const char* param1);

/// @param self QSoundEffect*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_soundeffect_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSoundEffect*
/// @param callback int32_t func(QSoundEffect* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_soundeffect_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QSoundEffect*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_soundeffect_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_soundeffect_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#supportedMimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_soundeffect_supported_mime_types();

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#source)
///
/// @param self QSoundEffect*
QUrl* q_soundeffect_source(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#setSource)
///
/// @param self QSoundEffect*
/// @param url QUrl*
void q_soundeffect_set_source(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#loopCount)
///
/// @param self QSoundEffect*
int32_t q_soundeffect_loop_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#loopsRemaining)
///
/// @param self QSoundEffect*
int32_t q_soundeffect_loops_remaining(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#setLoopCount)
///
/// @param self QSoundEffect*
/// @param loopCount int
void q_soundeffect_set_loop_count(void* self, int loopCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#audioDevice)
///
/// @param self QSoundEffect*
QAudioDevice* q_soundeffect_audio_device(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#setAudioDevice)
///
/// @param self QSoundEffect*
/// @param device QAudioDevice*
void q_soundeffect_set_audio_device(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#volume)
///
/// @param self QSoundEffect*
float q_soundeffect_volume(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#setVolume)
///
/// @param self QSoundEffect*
/// @param volume float
void q_soundeffect_set_volume(void* self, float volume);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#isMuted)
///
/// @param self QSoundEffect*
bool q_soundeffect_is_muted(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#setMuted)
///
/// @param self QSoundEffect*
/// @param muted bool
void q_soundeffect_set_muted(void* self, bool muted);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#isLoaded)
///
/// @param self QSoundEffect*
bool q_soundeffect_is_loaded(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#isPlaying)
///
/// @param self QSoundEffect*
bool q_soundeffect_is_playing(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#status)
///
/// @param self QSoundEffect*
///
/// @return enum QSoundEffect__Status
int32_t q_soundeffect_status(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#sourceChanged)
///
/// @param self QSoundEffect*
void q_soundeffect_source_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#sourceChanged)
///
/// @param self QSoundEffect*
/// @param callback void func(QSoundEffect* self)
void q_soundeffect_on_source_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#loopCountChanged)
///
/// @param self QSoundEffect*
void q_soundeffect_loop_count_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#loopCountChanged)
///
/// @param self QSoundEffect*
/// @param callback void func(QSoundEffect* self)
void q_soundeffect_on_loop_count_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#loopsRemainingChanged)
///
/// @param self QSoundEffect*
void q_soundeffect_loops_remaining_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#loopsRemainingChanged)
///
/// @param self QSoundEffect*
/// @param callback void func(QSoundEffect* self)
void q_soundeffect_on_loops_remaining_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#volumeChanged)
///
/// @param self QSoundEffect*
void q_soundeffect_volume_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#volumeChanged)
///
/// @param self QSoundEffect*
/// @param callback void func(QSoundEffect* self)
void q_soundeffect_on_volume_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#mutedChanged)
///
/// @param self QSoundEffect*
void q_soundeffect_muted_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#mutedChanged)
///
/// @param self QSoundEffect*
/// @param callback void func(QSoundEffect* self)
void q_soundeffect_on_muted_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#loadedChanged)
///
/// @param self QSoundEffect*
void q_soundeffect_loaded_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#loadedChanged)
///
/// @param self QSoundEffect*
/// @param callback void func(QSoundEffect* self)
void q_soundeffect_on_loaded_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#playingChanged)
///
/// @param self QSoundEffect*
void q_soundeffect_playing_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#playingChanged)
///
/// @param self QSoundEffect*
/// @param callback void func(QSoundEffect* self)
void q_soundeffect_on_playing_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#statusChanged)
///
/// @param self QSoundEffect*
void q_soundeffect_status_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#statusChanged)
///
/// @param self QSoundEffect*
/// @param callback void func(QSoundEffect* self)
void q_soundeffect_on_status_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#audioDeviceChanged)
///
/// @param self QSoundEffect*
void q_soundeffect_audio_device_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#audioDeviceChanged)
///
/// @param self QSoundEffect*
/// @param callback void func(QSoundEffect* self)
void q_soundeffect_on_audio_device_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#play)
///
/// @param self QSoundEffect*
void q_soundeffect_play(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#stop)
///
/// @param self QSoundEffect*
void q_soundeffect_stop(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_soundeffect_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_soundeffect_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSoundEffect*
const char* q_soundeffect_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSoundEffect*
/// @param name char*
void q_soundeffect_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSoundEffect*
bool q_soundeffect_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSoundEffect*
bool q_soundeffect_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSoundEffect*
bool q_soundeffect_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSoundEffect*
bool q_soundeffect_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSoundEffect*
/// @param b bool
bool q_soundeffect_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSoundEffect*
QThread* q_soundeffect_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSoundEffect*
/// @param thread QThread*
bool q_soundeffect_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSoundEffect*
/// @param interval int
int32_t q_soundeffect_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSoundEffect*
/// @param id int
void q_soundeffect_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSoundEffect*
/// @param id enum Qt__TimerId
void q_soundeffect_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSoundEffect*
libqt_list /* of QObject* */ q_soundeffect_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSoundEffect*
/// @param parent QObject*
void q_soundeffect_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSoundEffect*
/// @param filterObj QObject*
void q_soundeffect_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSoundEffect*
/// @param obj QObject*
void q_soundeffect_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_soundeffect_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSoundEffect*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_soundeffect_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_soundeffect_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_soundeffect_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSoundEffect*
void q_soundeffect_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSoundEffect*
void q_soundeffect_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSoundEffect*
/// @param name const char*
/// @param value QVariant*
bool q_soundeffect_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSoundEffect*
/// @param name const char*
QVariant* q_soundeffect_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSoundEffect*
const char** q_soundeffect_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSoundEffect*
QBindingStorage* q_soundeffect_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSoundEffect*
const QBindingStorage* q_soundeffect_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSoundEffect*
void q_soundeffect_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSoundEffect*
/// @param callback void func(QSoundEffect* self)
void q_soundeffect_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QSoundEffect*
QObject* q_soundeffect_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSoundEffect*
/// @param classname const char*
bool q_soundeffect_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSoundEffect*
void q_soundeffect_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSoundEffect*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_soundeffect_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSoundEffect*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_soundeffect_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_soundeffect_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSoundEffect*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_soundeffect_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSoundEffect*
/// @param param1 QObject*
void q_soundeffect_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSoundEffect*
/// @param callback void func(QSoundEffect* self, QObject* param1)
void q_soundeffect_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSoundEffect*
/// @param event QEvent*
bool q_soundeffect_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSoundEffect*
/// @param event QEvent*
bool q_soundeffect_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSoundEffect*
/// @param callback bool func(QSoundEffect* self, QEvent* event)
void q_soundeffect_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSoundEffect*
/// @param watched QObject*
/// @param event QEvent*
bool q_soundeffect_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSoundEffect*
/// @param watched QObject*
/// @param event QEvent*
bool q_soundeffect_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSoundEffect*
/// @param callback bool func(QSoundEffect* self, QObject* watched, QEvent* event)
void q_soundeffect_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSoundEffect*
/// @param event QTimerEvent*
void q_soundeffect_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSoundEffect*
/// @param event QTimerEvent*
void q_soundeffect_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSoundEffect*
/// @param callback void func(QSoundEffect* self, QTimerEvent* event)
void q_soundeffect_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSoundEffect*
/// @param event QChildEvent*
void q_soundeffect_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSoundEffect*
/// @param event QChildEvent*
void q_soundeffect_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSoundEffect*
/// @param callback void func(QSoundEffect* self, QChildEvent* event)
void q_soundeffect_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSoundEffect*
/// @param event QEvent*
void q_soundeffect_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSoundEffect*
/// @param event QEvent*
void q_soundeffect_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSoundEffect*
/// @param callback void func(QSoundEffect* self, QEvent* event)
void q_soundeffect_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSoundEffect*
/// @param signal QMetaMethod*
void q_soundeffect_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSoundEffect*
/// @param signal QMetaMethod*
void q_soundeffect_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSoundEffect*
/// @param callback void func(QSoundEffect* self, QMetaMethod* signal)
void q_soundeffect_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSoundEffect*
/// @param signal QMetaMethod*
void q_soundeffect_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSoundEffect*
/// @param signal QMetaMethod*
void q_soundeffect_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSoundEffect*
/// @param callback void func(QSoundEffect* self, QMetaMethod* signal)
void q_soundeffect_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSoundEffect*
QObject* q_soundeffect_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSoundEffect*
QObject* q_soundeffect_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSoundEffect*
/// @param callback QObject* func()
void q_soundeffect_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSoundEffect*
int32_t q_soundeffect_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSoundEffect*
int32_t q_soundeffect_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSoundEffect*
/// @param callback int32_t func()
void q_soundeffect_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSoundEffect*
/// @param signal const char*
int32_t q_soundeffect_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSoundEffect*
/// @param signal const char*
int32_t q_soundeffect_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSoundEffect*
/// @param callback int32_t func(QSoundEffect* self, const char* signal)
void q_soundeffect_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSoundEffect*
/// @param signal QMetaMethod*
bool q_soundeffect_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSoundEffect*
/// @param signal QMetaMethod*
bool q_soundeffect_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSoundEffect*
/// @param callback bool func(QSoundEffect* self, QMetaMethod* signal)
void q_soundeffect_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSoundEffect*
/// @param callback void func(QSoundEffect* self, const char* objectName)
void q_soundeffect_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsoundeffect.html#dtor.QSoundEffect)
///
/// Delete this object from C++ memory.
///
/// @param self QSoundEffect*
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
