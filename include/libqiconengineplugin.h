#pragma once
#ifndef LIBQICONENGINEPLUGIN_H
#define LIBQICONENGINEPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengineplugin.html)

/// q_iconengineplugin_new constructs a new QIconEnginePlugin object.
///
QIconEnginePlugin* q_iconengineplugin_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengineplugin.html)

/// q_iconengineplugin_new2 constructs a new QIconEnginePlugin object.
///
/// @param parent QObject*
///
QIconEnginePlugin* q_iconengineplugin_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QIconEnginePlugin*
///
const QMetaObject* q_iconengineplugin_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QIconEnginePlugin*
/// @param callback const QMetaObject* func(const QIconEnginePlugin* self)
///
void q_iconengineplugin_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QIconEnginePlugin*
///
const QMetaObject* q_iconengineplugin_super_meta_object(const void* self);

/// @param self QIconEnginePlugin*
/// @param param1 const char*
///
void* q_iconengineplugin_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QIconEnginePlugin*
/// @param callback void* func(QIconEnginePlugin* self, const char* param1)
///
void q_iconengineplugin_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QIconEnginePlugin*
/// @param param1 const char*
///
void* q_iconengineplugin_super_metacast(void* self, const char* param1);

/// @param self QIconEnginePlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_iconengineplugin_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QIconEnginePlugin*
/// @param callback int32_t func(QIconEnginePlugin* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_iconengineplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QIconEnginePlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_iconengineplugin_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_iconengineplugin_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengineplugin.html#create)
///
/// @warning This method must be implemented with `q_iconengineplugin_on_create` before it can be called.
///
/// @param self QIconEnginePlugin*
/// @param filename const char*
///
QIconEngine* q_iconengineplugin_create(void* self, const char* filename);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengineplugin.html#create)
///
/// Allows for overriding the related default method
///
/// @param self QIconEnginePlugin*
/// @param callback QIconEngine* func(QIconEnginePlugin* self, const char* filename)
///
void q_iconengineplugin_on_create(void* self, QIconEngine* (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_iconengineplugin_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_iconengineplugin_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QIconEnginePlugin*
///
const char* q_iconengineplugin_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QIconEnginePlugin*
/// @param name const char*
///
void q_iconengineplugin_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QIconEnginePlugin*
///
bool q_iconengineplugin_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QIconEnginePlugin*
///
bool q_iconengineplugin_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QIconEnginePlugin*
///
bool q_iconengineplugin_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QIconEnginePlugin*
///
bool q_iconengineplugin_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QIconEnginePlugin*
/// @param b bool
///
bool q_iconengineplugin_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QIconEnginePlugin*
///
QThread* q_iconengineplugin_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QIconEnginePlugin*
/// @param thread QThread*
///
bool q_iconengineplugin_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QIconEnginePlugin*
/// @param interval int
///
int32_t q_iconengineplugin_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QIconEnginePlugin*
/// @param time int64_t of nanoseconds
///
int32_t q_iconengineplugin_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QIconEnginePlugin*
/// @param id int
///
void q_iconengineplugin_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QIconEnginePlugin*
/// @param id enum Qt__TimerId
///
void q_iconengineplugin_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QIconEnginePlugin*
///
/// @return libqt_list of QObject*
///
libqt_list q_iconengineplugin_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QIconEnginePlugin*
/// @param parent QObject*
///
void q_iconengineplugin_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QIconEnginePlugin*
/// @param filterObj QObject*
///
void q_iconengineplugin_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QIconEnginePlugin*
/// @param obj QObject*
///
void q_iconengineplugin_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_iconengineplugin_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_iconengineplugin_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QIconEnginePlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_iconengineplugin_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_iconengineplugin_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_iconengineplugin_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QIconEnginePlugin*
///
bool q_iconengineplugin_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QIconEnginePlugin*
/// @param receiver QObject*
///
bool q_iconengineplugin_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_iconengineplugin_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QIconEnginePlugin*
///
void q_iconengineplugin_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QIconEnginePlugin*
///
void q_iconengineplugin_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QIconEnginePlugin*
/// @param name const char*
/// @param value QVariant*
///
bool q_iconengineplugin_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QIconEnginePlugin*
/// @param name const char*
///
QVariant* q_iconengineplugin_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QIconEnginePlugin*
///
const char** q_iconengineplugin_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QIconEnginePlugin*
///
QBindingStorage* q_iconengineplugin_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QIconEnginePlugin*
///
const QBindingStorage* q_iconengineplugin_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QIconEnginePlugin*
///
void q_iconengineplugin_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QIconEnginePlugin*
/// @param callback void func(QIconEnginePlugin* self)
///
void q_iconengineplugin_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QIconEnginePlugin*
///
QObject* q_iconengineplugin_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QIconEnginePlugin*
/// @param classname const char*
///
bool q_iconengineplugin_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QIconEnginePlugin*
///
void q_iconengineplugin_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QIconEnginePlugin*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_iconengineplugin_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QIconEnginePlugin*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_iconengineplugin_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_iconengineplugin_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_iconengineplugin_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QIconEnginePlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_iconengineplugin_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QIconEnginePlugin*
/// @param signal const char*
///
bool q_iconengineplugin_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QIconEnginePlugin*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_iconengineplugin_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QIconEnginePlugin*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_iconengineplugin_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QIconEnginePlugin*
/// @param receiver QObject*
/// @param member const char*
///
bool q_iconengineplugin_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QIconEnginePlugin*
/// @param param1 QObject*
///
void q_iconengineplugin_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QIconEnginePlugin*
/// @param callback void func(QIconEnginePlugin* self, QObject* param1)
///
void q_iconengineplugin_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param event QEvent*
///
bool q_iconengineplugin_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param event QEvent*
///
bool q_iconengineplugin_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param callback bool func(QIconEnginePlugin* self, QEvent* event)
///
void q_iconengineplugin_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_iconengineplugin_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_iconengineplugin_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param callback bool func(QIconEnginePlugin* self, QObject* watched, QEvent* event)
///
void q_iconengineplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param event QTimerEvent*
///
void q_iconengineplugin_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param event QTimerEvent*
///
void q_iconengineplugin_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param callback void func(QIconEnginePlugin* self, QTimerEvent* event)
///
void q_iconengineplugin_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param event QChildEvent*
///
void q_iconengineplugin_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param event QChildEvent*
///
void q_iconengineplugin_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param callback void func(QIconEnginePlugin* self, QChildEvent* event)
///
void q_iconengineplugin_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param event QEvent*
///
void q_iconengineplugin_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param event QEvent*
///
void q_iconengineplugin_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param callback void func(QIconEnginePlugin* self, QEvent* event)
///
void q_iconengineplugin_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param signal QMetaMethod*
///
void q_iconengineplugin_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param signal QMetaMethod*
///
void q_iconengineplugin_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param callback void func(QIconEnginePlugin* self, QMetaMethod* signal)
///
void q_iconengineplugin_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param signal QMetaMethod*
///
void q_iconengineplugin_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param signal QMetaMethod*
///
void q_iconengineplugin_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param callback void func(QIconEnginePlugin* self, QMetaMethod* signal)
///
void q_iconengineplugin_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIconEnginePlugin*
///
QObject* q_iconengineplugin_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIconEnginePlugin*
///
QObject* q_iconengineplugin_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIconEnginePlugin*
/// @param callback QObject* func(QIconEnginePlugin* self)
///
void q_iconengineplugin_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIconEnginePlugin*
///
int32_t q_iconengineplugin_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIconEnginePlugin*
///
int32_t q_iconengineplugin_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIconEnginePlugin*
/// @param callback int32_t func(QIconEnginePlugin* self)
///
void q_iconengineplugin_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIconEnginePlugin*
/// @param signal const char*
///
int32_t q_iconengineplugin_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIconEnginePlugin*
/// @param signal const char*
///
int32_t q_iconengineplugin_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIconEnginePlugin*
/// @param callback int32_t func(QIconEnginePlugin* self, const char* signal)
///
void q_iconengineplugin_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIconEnginePlugin*
/// @param signal QMetaMethod*
///
bool q_iconengineplugin_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIconEnginePlugin*
/// @param signal QMetaMethod*
///
bool q_iconengineplugin_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIconEnginePlugin*
/// @param callback bool func(QIconEnginePlugin* self, QMetaMethod* signal)
///
void q_iconengineplugin_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QIconEnginePlugin*
/// @param callback void func(QIconEnginePlugin* self, const char* objectName)
///
void q_iconengineplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengineplugin.html#dtor.QIconEnginePlugin)
///
/// Delete this object from C++ memory.
///
/// @param self QIconEnginePlugin*
///
void q_iconengineplugin_delete(void* self);

#endif
