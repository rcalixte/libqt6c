#pragma once
#ifndef SRC_SPATIALAUDIO_QT6C_LIBQAUDIOROOM_H
#define SRC_SPATIALAUDIO_QT6C_LIBQAUDIOROOM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html)

/// q_audioroom_new constructs a new QAudioRoom object.
///
/// @param engine QAudioEngine*
///
QAudioRoom* q_audioroom_new(void* engine);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QAudioRoom*
///
const QMetaObject* q_audioroom_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QAudioRoom*
/// @param callback const QMetaObject* func()
///
void q_audioroom_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QAudioRoom*
///
const QMetaObject* q_audioroom_qbase_meta_object(void* self);

/// @param self QAudioRoom*
/// @param param1 const char*
///
void* q_audioroom_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QAudioRoom*
/// @param callback void* func(QAudioRoom* self, const char* param1)
///
void q_audioroom_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QAudioRoom*
/// @param param1 const char*
///
void* q_audioroom_qbase_metacast(void* self, const char* param1);

/// @param self QAudioRoom*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_audioroom_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAudioRoom*
/// @param callback int32_t func(QAudioRoom* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_audioroom_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QAudioRoom*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_audioroom_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_audioroom_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#setPosition)
///
/// @param self QAudioRoom*
/// @param pos QVector3D*
///
void q_audioroom_set_position(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#position)
///
/// @param self QAudioRoom*
///
QVector3D* q_audioroom_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#setDimensions)
///
/// @param self QAudioRoom*
/// @param dim QVector3D*
///
void q_audioroom_set_dimensions(void* self, void* dim);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#dimensions)
///
/// @param self QAudioRoom*
///
QVector3D* q_audioroom_dimensions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#setRotation)
///
/// @param self QAudioRoom*
/// @param q QQuaternion*
///
void q_audioroom_set_rotation(void* self, void* q);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#rotation)
///
/// @param self QAudioRoom*
///
QQuaternion* q_audioroom_rotation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#setWallMaterial)
///
/// @param self QAudioRoom*
/// @param wall enum QAudioRoom__Wall
/// @param material enum QAudioRoom__Material
///
void q_audioroom_set_wall_material(void* self, int32_t wall, int32_t material);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#wallMaterial)
///
/// @param self QAudioRoom*
/// @param wall enum QAudioRoom__Wall
///
/// @return enum QAudioRoom__Material
///
int32_t q_audioroom_wall_material(void* self, int32_t wall);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#setReflectionGain)
///
/// @param self QAudioRoom*
/// @param factor float
///
void q_audioroom_set_reflection_gain(void* self, float factor);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#reflectionGain)
///
/// @param self QAudioRoom*
///
float q_audioroom_reflection_gain(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#setReverbGain)
///
/// @param self QAudioRoom*
/// @param factor float
///
void q_audioroom_set_reverb_gain(void* self, float factor);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#reverbGain)
///
/// @param self QAudioRoom*
///
float q_audioroom_reverb_gain(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#setReverbTime)
///
/// @param self QAudioRoom*
/// @param factor float
///
void q_audioroom_set_reverb_time(void* self, float factor);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#reverbTime)
///
/// @param self QAudioRoom*
///
float q_audioroom_reverb_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#setReverbBrightness)
///
/// @param self QAudioRoom*
/// @param factor float
///
void q_audioroom_set_reverb_brightness(void* self, float factor);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#reverbBrightness)
///
/// @param self QAudioRoom*
///
float q_audioroom_reverb_brightness(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#positionChanged)
///
/// @param self QAudioRoom*
///
void q_audioroom_position_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#positionChanged)
///
/// @param self QAudioRoom*
/// @param callback void func(QAudioRoom* self)
///
void q_audioroom_on_position_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#dimensionsChanged)
///
/// @param self QAudioRoom*
///
void q_audioroom_dimensions_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#dimensionsChanged)
///
/// @param self QAudioRoom*
/// @param callback void func(QAudioRoom* self)
///
void q_audioroom_on_dimensions_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#rotationChanged)
///
/// @param self QAudioRoom*
///
void q_audioroom_rotation_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#rotationChanged)
///
/// @param self QAudioRoom*
/// @param callback void func(QAudioRoom* self)
///
void q_audioroom_on_rotation_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#wallsChanged)
///
/// @param self QAudioRoom*
///
void q_audioroom_walls_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#wallsChanged)
///
/// @param self QAudioRoom*
/// @param callback void func(QAudioRoom* self)
///
void q_audioroom_on_walls_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#reflectionGainChanged)
///
/// @param self QAudioRoom*
///
void q_audioroom_reflection_gain_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#reflectionGainChanged)
///
/// @param self QAudioRoom*
/// @param callback void func(QAudioRoom* self)
///
void q_audioroom_on_reflection_gain_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#reverbGainChanged)
///
/// @param self QAudioRoom*
///
void q_audioroom_reverb_gain_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#reverbGainChanged)
///
/// @param self QAudioRoom*
/// @param callback void func(QAudioRoom* self)
///
void q_audioroom_on_reverb_gain_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#reverbTimeChanged)
///
/// @param self QAudioRoom*
///
void q_audioroom_reverb_time_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#reverbTimeChanged)
///
/// @param self QAudioRoom*
/// @param callback void func(QAudioRoom* self)
///
void q_audioroom_on_reverb_time_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#reverbBrightnessChanged)
///
/// @param self QAudioRoom*
///
void q_audioroom_reverb_brightness_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#reverbBrightnessChanged)
///
/// @param self QAudioRoom*
/// @param callback void func(QAudioRoom* self)
///
void q_audioroom_on_reverb_brightness_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_audioroom_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_audioroom_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAudioRoom*
///
const char* q_audioroom_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAudioRoom*
/// @param name char*
///
void q_audioroom_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAudioRoom*
///
bool q_audioroom_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAudioRoom*
///
bool q_audioroom_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAudioRoom*
///
bool q_audioroom_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAudioRoom*
///
bool q_audioroom_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAudioRoom*
/// @param b bool
///
bool q_audioroom_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QAudioRoom*
///
QThread* q_audioroom_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAudioRoom*
/// @param thread QThread*
///
bool q_audioroom_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioRoom*
/// @param interval int
///
int32_t q_audioroom_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioRoom*
/// @param time int64_t of nanoseconds
///
int32_t q_audioroom_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAudioRoom*
/// @param id int
///
void q_audioroom_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAudioRoom*
/// @param id enum Qt__TimerId
///
void q_audioroom_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QAudioRoom*
///
/// @return libqt_list of QObject*
///
libqt_list q_audioroom_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAudioRoom*
/// @param parent QObject*
///
void q_audioroom_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAudioRoom*
/// @param filterObj QObject*
///
void q_audioroom_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAudioRoom*
/// @param obj QObject*
///
void q_audioroom_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_audioroom_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAudioRoom*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_audioroom_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_audioroom_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_audioroom_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAudioRoom*
///
void q_audioroom_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAudioRoom*
///
void q_audioroom_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAudioRoom*
/// @param name const char*
/// @param value QVariant*
///
bool q_audioroom_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAudioRoom*
/// @param name const char*
///
QVariant* q_audioroom_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAudioRoom*
///
const char** q_audioroom_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAudioRoom*
///
QBindingStorage* q_audioroom_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAudioRoom*
///
const QBindingStorage* q_audioroom_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioRoom*
///
void q_audioroom_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioRoom*
/// @param callback void func(QAudioRoom* self)
///
void q_audioroom_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QAudioRoom*
///
QObject* q_audioroom_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QAudioRoom*
/// @param classname const char*
///
bool q_audioroom_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAudioRoom*
///
void q_audioroom_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioRoom*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_audioroom_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioRoom*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_audioroom_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_audioroom_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAudioRoom*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_audioroom_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioRoom*
/// @param param1 QObject*
///
void q_audioroom_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioRoom*
/// @param callback void func(QAudioRoom* self, QObject* param1)
///
void q_audioroom_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioRoom*
/// @param event QEvent*
///
bool q_audioroom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioRoom*
/// @param event QEvent*
///
bool q_audioroom_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioRoom*
/// @param callback bool func(QAudioRoom* self, QEvent* event)
///
void q_audioroom_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioRoom*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_audioroom_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioRoom*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_audioroom_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioRoom*
/// @param callback bool func(QAudioRoom* self, QObject* watched, QEvent* event)
///
void q_audioroom_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioRoom*
/// @param event QTimerEvent*
///
void q_audioroom_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioRoom*
/// @param event QTimerEvent*
///
void q_audioroom_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioRoom*
/// @param callback void func(QAudioRoom* self, QTimerEvent* event)
///
void q_audioroom_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioRoom*
/// @param event QChildEvent*
///
void q_audioroom_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioRoom*
/// @param event QChildEvent*
///
void q_audioroom_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioRoom*
/// @param callback void func(QAudioRoom* self, QChildEvent* event)
///
void q_audioroom_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioRoom*
/// @param event QEvent*
///
void q_audioroom_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioRoom*
/// @param event QEvent*
///
void q_audioroom_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioRoom*
/// @param callback void func(QAudioRoom* self, QEvent* event)
///
void q_audioroom_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioRoom*
/// @param signal QMetaMethod*
///
void q_audioroom_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioRoom*
/// @param signal QMetaMethod*
///
void q_audioroom_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioRoom*
/// @param callback void func(QAudioRoom* self, QMetaMethod* signal)
///
void q_audioroom_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioRoom*
/// @param signal QMetaMethod*
///
void q_audioroom_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioRoom*
/// @param signal QMetaMethod*
///
void q_audioroom_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioRoom*
/// @param callback void func(QAudioRoom* self, QMetaMethod* signal)
///
void q_audioroom_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioRoom*
///
QObject* q_audioroom_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioRoom*
///
QObject* q_audioroom_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioRoom*
/// @param callback QObject* func()
///
void q_audioroom_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioRoom*
///
int32_t q_audioroom_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioRoom*
///
int32_t q_audioroom_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioRoom*
/// @param callback int32_t func()
///
void q_audioroom_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioRoom*
/// @param signal const char*
///
int32_t q_audioroom_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioRoom*
/// @param signal const char*
///
int32_t q_audioroom_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioRoom*
/// @param callback int32_t func(QAudioRoom* self, const char* signal)
///
void q_audioroom_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioRoom*
/// @param signal QMetaMethod*
///
bool q_audioroom_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioRoom*
/// @param signal QMetaMethod*
///
bool q_audioroom_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioRoom*
/// @param callback bool func(QAudioRoom* self, QMetaMethod* signal)
///
void q_audioroom_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAudioRoom*
/// @param callback void func(QAudioRoom* self, const char* objectName)
///
void q_audioroom_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#dtor.QAudioRoom)
///
/// Delete this object from C++ memory.
///
/// @param self QAudioRoom*
///
void q_audioroom_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#public-types)

typedef enum {
    QAUDIOROOM_MATERIAL_TRANSPARENT = 0,
    QAUDIOROOM_MATERIAL_ACOUSTICCEILINGTILES = 1,
    QAUDIOROOM_MATERIAL_BRICKBARE = 2,
    QAUDIOROOM_MATERIAL_BRICKPAINTED = 3,
    QAUDIOROOM_MATERIAL_CONCRETEBLOCKCOARSE = 4,
    QAUDIOROOM_MATERIAL_CONCRETEBLOCKPAINTED = 5,
    QAUDIOROOM_MATERIAL_CURTAINHEAVY = 6,
    QAUDIOROOM_MATERIAL_FIBERGLASSINSULATION = 7,
    QAUDIOROOM_MATERIAL_GLASSTHIN = 8,
    QAUDIOROOM_MATERIAL_GLASSTHICK = 9,
    QAUDIOROOM_MATERIAL_GRASS = 10,
    QAUDIOROOM_MATERIAL_LINOLEUMONCONCRETE = 11,
    QAUDIOROOM_MATERIAL_MARBLE = 12,
    QAUDIOROOM_MATERIAL_METAL = 13,
    QAUDIOROOM_MATERIAL_PARQUETONCONCRETE = 14,
    QAUDIOROOM_MATERIAL_PLASTERROUGH = 15,
    QAUDIOROOM_MATERIAL_PLASTERSMOOTH = 16,
    QAUDIOROOM_MATERIAL_PLYWOODPANEL = 17,
    QAUDIOROOM_MATERIAL_POLISHEDCONCRETEORTILE = 18,
    QAUDIOROOM_MATERIAL_SHEETROCK = 19,
    QAUDIOROOM_MATERIAL_WATERORICESURFACE = 20,
    QAUDIOROOM_MATERIAL_WOODCEILING = 21,
    QAUDIOROOM_MATERIAL_WOODPANEL = 22,
    QAUDIOROOM_MATERIAL_UNIFORMMATERIAL = 23
} QAudioRoom__Material;

/// [Upstream resources](https://doc.qt.io/qt-6/qaudioroom.html#public-types)

typedef enum {
    QAUDIOROOM_WALL_LEFTWALL = 0,
    QAUDIOROOM_WALL_RIGHTWALL = 1,
    QAUDIOROOM_WALL_FLOOR = 2,
    QAUDIOROOM_WALL_CEILING = 3,
    QAUDIOROOM_WALL_FRONTWALL = 4,
    QAUDIOROOM_WALL_BACKWALL = 5
} QAudioRoom__Wall;

#endif
