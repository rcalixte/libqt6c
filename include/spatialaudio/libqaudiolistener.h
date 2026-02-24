#pragma once
#ifndef SRC_SPATIALAUDIO_QT6C_LIBQAUDIOLISTENER_H
#define SRC_SPATIALAUDIO_QT6C_LIBQAUDIOLISTENER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiolistener.html)

/// q_audiolistener_new constructs a new QAudioListener object.
///
/// @param engine QAudioEngine*
///
QAudioListener* q_audiolistener_new(void* engine);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiolistener.html#setPosition)
///
/// @param self QAudioListener*
/// @param pos QVector3D*
///
void q_audiolistener_set_position(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiolistener.html#position)
///
/// @param self QAudioListener*
///
QVector3D* q_audiolistener_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiolistener.html#setRotation)
///
/// @param self QAudioListener*
/// @param q QQuaternion*
///
void q_audiolistener_set_rotation(void* self, void* q);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiolistener.html#rotation)
///
/// @param self QAudioListener*
///
QQuaternion* q_audiolistener_rotation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiolistener.html#engine)
///
/// @param self QAudioListener*
///
QAudioEngine* q_audiolistener_engine(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_audiolistener_tr(const char* s);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAudioListener*
///
const char* q_audiolistener_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAudioListener*
/// @param name const char*
///
void q_audiolistener_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAudioListener*
///
bool q_audiolistener_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAudioListener*
///
bool q_audiolistener_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAudioListener*
///
bool q_audiolistener_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAudioListener*
///
bool q_audiolistener_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAudioListener*
/// @param b bool
///
bool q_audiolistener_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QAudioListener*
///
QThread* q_audiolistener_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAudioListener*
/// @param thread QThread*
///
bool q_audiolistener_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioListener*
/// @param interval int
///
int32_t q_audiolistener_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioListener*
/// @param time int64_t of nanoseconds
///
int32_t q_audiolistener_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAudioListener*
/// @param id int
///
void q_audiolistener_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAudioListener*
/// @param id enum Qt__TimerId
///
void q_audiolistener_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QAudioListener*
///
/// @return libqt_list of QObject*
///
libqt_list q_audiolistener_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAudioListener*
/// @param parent QObject*
///
void q_audiolistener_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAudioListener*
/// @param filterObj QObject*
///
void q_audiolistener_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAudioListener*
/// @param obj QObject*
///
void q_audiolistener_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_audiolistener_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_audiolistener_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAudioListener*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_audiolistener_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_audiolistener_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_audiolistener_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAudioListener*
///
bool q_audiolistener_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAudioListener*
/// @param receiver QObject*
///
bool q_audiolistener_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_audiolistener_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAudioListener*
///
void q_audiolistener_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAudioListener*
///
void q_audiolistener_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAudioListener*
/// @param name const char*
/// @param value QVariant*
///
bool q_audiolistener_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAudioListener*
/// @param name const char*
///
QVariant* q_audiolistener_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAudioListener*
///
const char** q_audiolistener_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAudioListener*
///
QBindingStorage* q_audiolistener_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAudioListener*
///
const QBindingStorage* q_audiolistener_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioListener*
///
void q_audiolistener_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioListener*
/// @param callback void func(QAudioListener* self)
///
void q_audiolistener_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QAudioListener*
///
QObject* q_audiolistener_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QAudioListener*
/// @param classname const char*
///
bool q_audiolistener_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAudioListener*
///
void q_audiolistener_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_audiolistener_tr2(const char* s, const char* c);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_audiolistener_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioListener*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_audiolistener_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAudioListener*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_audiolistener_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_audiolistener_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_audiolistener_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAudioListener*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_audiolistener_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAudioListener*
/// @param signal const char*
///
bool q_audiolistener_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAudioListener*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_audiolistener_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAudioListener*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_audiolistener_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAudioListener*
/// @param receiver QObject*
/// @param member const char*
///
bool q_audiolistener_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioListener*
/// @param param1 QObject*
///
void q_audiolistener_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAudioListener*
/// @param callback void func(QAudioListener* self, QObject* param1)
///
void q_audiolistener_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioListener*
///
const QMetaObject* q_audiolistener_meta_object(void* self);

/// @warning DEPRECATED: Use `q_audiolistener_super_meta_object` instead
///
#define q_audiolistener_qbase_meta_object q_audiolistener_super_meta_object

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioListener*
///
const QMetaObject* q_audiolistener_super_meta_object(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioListener*
/// @param callback const QMetaObject* func()
///
void q_audiolistener_on_meta_object(void* self, const QMetaObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacast)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioListener*
/// @param param1 const char*
///
void* q_audiolistener_metacast(void* self, const char* param1);

/// @warning DEPRECATED: Use `q_audiolistener_super_metacast` instead
///
#define q_audiolistener_qbase_metacast q_audiolistener_super_metacast

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacast)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioListener*
/// @param param1 const char*
///
void* q_audiolistener_super_metacast(void* self, const char* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacast)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioListener*
/// @param callback void* func(QAudioListener* self, const char* param1)
///
void q_audiolistener_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioListener*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_audiolistener_metacall(void* self, int32_t param1, int param2, void* param3);

/// @warning DEPRECATED: Use `q_audiolistener_super_metacall` instead
///
#define q_audiolistener_qbase_metacall q_audiolistener_super_metacall

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioListener*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_audiolistener_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioListener*
/// @param callback int32_t func(QAudioListener* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_audiolistener_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioListener*
/// @param event QEvent*
///
bool q_audiolistener_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_audiolistener_super_event` instead
///
#define q_audiolistener_qbase_event q_audiolistener_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioListener*
/// @param event QEvent*
///
bool q_audiolistener_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioListener*
/// @param callback bool func(QAudioListener* self, QEvent* event)
///
void q_audiolistener_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioListener*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_audiolistener_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_audiolistener_super_event_filter` instead
///
#define q_audiolistener_qbase_event_filter q_audiolistener_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioListener*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_audiolistener_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioListener*
/// @param callback bool func(QAudioListener* self, QObject* watched, QEvent* event)
///
void q_audiolistener_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioListener*
/// @param event QTimerEvent*
///
void q_audiolistener_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_audiolistener_super_timer_event` instead
///
#define q_audiolistener_qbase_timer_event q_audiolistener_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioListener*
/// @param event QTimerEvent*
///
void q_audiolistener_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioListener*
/// @param callback void func(QAudioListener* self, QTimerEvent* event)
///
void q_audiolistener_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioListener*
/// @param event QChildEvent*
///
void q_audiolistener_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_audiolistener_super_child_event` instead
///
#define q_audiolistener_qbase_child_event q_audiolistener_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioListener*
/// @param event QChildEvent*
///
void q_audiolistener_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioListener*
/// @param callback void func(QAudioListener* self, QChildEvent* event)
///
void q_audiolistener_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioListener*
/// @param event QEvent*
///
void q_audiolistener_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_audiolistener_super_custom_event` instead
///
#define q_audiolistener_qbase_custom_event q_audiolistener_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioListener*
/// @param event QEvent*
///
void q_audiolistener_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioListener*
/// @param callback void func(QAudioListener* self, QEvent* event)
///
void q_audiolistener_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioListener*
/// @param signal QMetaMethod*
///
void q_audiolistener_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_audiolistener_super_connect_notify` instead
///
#define q_audiolistener_qbase_connect_notify q_audiolistener_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioListener*
/// @param signal QMetaMethod*
///
void q_audiolistener_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioListener*
/// @param callback void func(QAudioListener* self, QMetaMethod* signal)
///
void q_audiolistener_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioListener*
/// @param signal QMetaMethod*
///
void q_audiolistener_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_audiolistener_super_disconnect_notify` instead
///
#define q_audiolistener_qbase_disconnect_notify q_audiolistener_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioListener*
/// @param signal QMetaMethod*
///
void q_audiolistener_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioListener*
/// @param callback void func(QAudioListener* self, QMetaMethod* signal)
///
void q_audiolistener_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioListener*
///
QObject* q_audiolistener_sender(void* self);

/// @warning DEPRECATED: Use `q_audiolistener_super_sender` instead
///
#define q_audiolistener_qbase_sender q_audiolistener_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioListener*
///
QObject* q_audiolistener_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioListener*
/// @param callback QObject* func()
///
void q_audiolistener_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioListener*
///
int32_t q_audiolistener_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_audiolistener_super_sender_signal_index` instead
///
#define q_audiolistener_qbase_sender_signal_index q_audiolistener_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioListener*
///
int32_t q_audiolistener_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioListener*
/// @param callback int32_t func()
///
void q_audiolistener_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioListener*
/// @param signal const char*
///
int32_t q_audiolistener_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_audiolistener_super_receivers` instead
///
#define q_audiolistener_qbase_receivers q_audiolistener_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioListener*
/// @param signal const char*
///
int32_t q_audiolistener_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioListener*
/// @param callback int32_t func(QAudioListener* self, const char* signal)
///
void q_audiolistener_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAudioListener*
/// @param signal QMetaMethod*
///
bool q_audiolistener_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_audiolistener_super_is_signal_connected` instead
///
#define q_audiolistener_qbase_is_signal_connected q_audiolistener_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAudioListener*
/// @param signal QMetaMethod*
///
bool q_audiolistener_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAudioListener*
/// @param callback bool func(QAudioListener* self, QMetaMethod* signal)
///
void q_audiolistener_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAudioListener*
/// @param callback void func(QAudioListener* self, const char* objectName)
///
void q_audiolistener_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaudiolistener.html#dtor.QAudioListener)
///
/// Delete this object from C++ memory.
///
/// @param self QAudioListener*
///
void q_audiolistener_delete(void* self);

#endif
