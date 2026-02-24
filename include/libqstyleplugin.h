#pragma once
#ifndef SRC_QT6C_LIBQSTYLEPLUGIN_H
#define SRC_QT6C_LIBQSTYLEPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qstyleplugin.html)

/// q_styleplugin_new constructs a new QStylePlugin object.
///
QStylePlugin* q_styleplugin_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qstyleplugin.html)

/// q_styleplugin_new2 constructs a new QStylePlugin object.
///
/// @param parent QObject*
///
QStylePlugin* q_styleplugin_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QStylePlugin*
///
const QMetaObject* q_styleplugin_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QStylePlugin*
/// @param callback const QMetaObject* func()
///
void q_styleplugin_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_styleplugin_super_meta_object` instead
///
#define q_styleplugin_qbase_meta_object q_styleplugin_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QStylePlugin*
///
const QMetaObject* q_styleplugin_super_meta_object(void* self);

/// @param self QStylePlugin*
/// @param param1 const char*
///
void* q_styleplugin_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QStylePlugin*
/// @param callback void* func(QStylePlugin* self, const char* param1)
///
void q_styleplugin_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_styleplugin_super_metacast` instead
///
#define q_styleplugin_qbase_metacast q_styleplugin_super_metacast

/// Base class method implementation
///
/// @param self QStylePlugin*
/// @param param1 const char*
///
void* q_styleplugin_super_metacast(void* self, const char* param1);

/// @param self QStylePlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_styleplugin_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QStylePlugin*
/// @param callback int32_t func(QStylePlugin* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_styleplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_styleplugin_super_metacall` instead
///
#define q_styleplugin_qbase_metacall q_styleplugin_super_metacall

/// Base class method implementation
///
/// @param self QStylePlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_styleplugin_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_styleplugin_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qstyleplugin.html#create)
///
/// @param self QStylePlugin*
/// @param key const char*
///
QStyle* q_styleplugin_create(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qstyleplugin.html#create)
///
/// Allows for overriding the related default method
///
/// @param self QStylePlugin*
/// @param callback QStyle* func(QStylePlugin* self, const char* key)
///
void q_styleplugin_on_create(void* self, QStyle* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_styleplugin_super_create` instead
///
#define q_styleplugin_qbase_create q_styleplugin_super_create

/// [Upstream resources](https://doc.qt.io/qt-6/qstyleplugin.html#create)
///
/// Base class method implementation
///
/// @param self QStylePlugin*
/// @param key const char*
///
QStyle* q_styleplugin_super_create(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_styleplugin_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_styleplugin_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QStylePlugin*
///
const char* q_styleplugin_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QStylePlugin*
/// @param name const char*
///
void q_styleplugin_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QStylePlugin*
///
bool q_styleplugin_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QStylePlugin*
///
bool q_styleplugin_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QStylePlugin*
///
bool q_styleplugin_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QStylePlugin*
///
bool q_styleplugin_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QStylePlugin*
/// @param b bool
///
bool q_styleplugin_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QStylePlugin*
///
QThread* q_styleplugin_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QStylePlugin*
/// @param thread QThread*
///
bool q_styleplugin_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QStylePlugin*
/// @param interval int
///
int32_t q_styleplugin_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QStylePlugin*
/// @param time int64_t of nanoseconds
///
int32_t q_styleplugin_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QStylePlugin*
/// @param id int
///
void q_styleplugin_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QStylePlugin*
/// @param id enum Qt__TimerId
///
void q_styleplugin_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QStylePlugin*
///
/// @return libqt_list of QObject*
///
libqt_list q_styleplugin_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QStylePlugin*
/// @param parent QObject*
///
void q_styleplugin_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QStylePlugin*
/// @param filterObj QObject*
///
void q_styleplugin_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QStylePlugin*
/// @param obj QObject*
///
void q_styleplugin_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_styleplugin_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_styleplugin_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QStylePlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_styleplugin_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_styleplugin_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_styleplugin_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QStylePlugin*
///
bool q_styleplugin_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QStylePlugin*
/// @param receiver QObject*
///
bool q_styleplugin_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_styleplugin_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QStylePlugin*
///
void q_styleplugin_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QStylePlugin*
///
void q_styleplugin_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QStylePlugin*
/// @param name const char*
/// @param value QVariant*
///
bool q_styleplugin_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QStylePlugin*
/// @param name const char*
///
QVariant* q_styleplugin_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QStylePlugin*
///
const char** q_styleplugin_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QStylePlugin*
///
QBindingStorage* q_styleplugin_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QStylePlugin*
///
const QBindingStorage* q_styleplugin_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStylePlugin*
///
void q_styleplugin_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStylePlugin*
/// @param callback void func(QStylePlugin* self)
///
void q_styleplugin_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QStylePlugin*
///
QObject* q_styleplugin_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QStylePlugin*
/// @param classname const char*
///
bool q_styleplugin_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QStylePlugin*
///
void q_styleplugin_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QStylePlugin*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_styleplugin_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QStylePlugin*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_styleplugin_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_styleplugin_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_styleplugin_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QStylePlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_styleplugin_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QStylePlugin*
/// @param signal const char*
///
bool q_styleplugin_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QStylePlugin*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_styleplugin_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QStylePlugin*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_styleplugin_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QStylePlugin*
/// @param receiver QObject*
/// @param member const char*
///
bool q_styleplugin_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStylePlugin*
/// @param param1 QObject*
///
void q_styleplugin_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStylePlugin*
/// @param callback void func(QStylePlugin* self, QObject* param1)
///
void q_styleplugin_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStylePlugin*
/// @param event QEvent*
///
bool q_styleplugin_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_styleplugin_super_event` instead
///
#define q_styleplugin_qbase_event q_styleplugin_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStylePlugin*
/// @param event QEvent*
///
bool q_styleplugin_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStylePlugin*
/// @param callback bool func(QStylePlugin* self, QEvent* event)
///
void q_styleplugin_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStylePlugin*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_styleplugin_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_styleplugin_super_event_filter` instead
///
#define q_styleplugin_qbase_event_filter q_styleplugin_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStylePlugin*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_styleplugin_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStylePlugin*
/// @param callback bool func(QStylePlugin* self, QObject* watched, QEvent* event)
///
void q_styleplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStylePlugin*
/// @param event QTimerEvent*
///
void q_styleplugin_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_styleplugin_super_timer_event` instead
///
#define q_styleplugin_qbase_timer_event q_styleplugin_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStylePlugin*
/// @param event QTimerEvent*
///
void q_styleplugin_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStylePlugin*
/// @param callback void func(QStylePlugin* self, QTimerEvent* event)
///
void q_styleplugin_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStylePlugin*
/// @param event QChildEvent*
///
void q_styleplugin_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_styleplugin_super_child_event` instead
///
#define q_styleplugin_qbase_child_event q_styleplugin_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStylePlugin*
/// @param event QChildEvent*
///
void q_styleplugin_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStylePlugin*
/// @param callback void func(QStylePlugin* self, QChildEvent* event)
///
void q_styleplugin_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStylePlugin*
/// @param event QEvent*
///
void q_styleplugin_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_styleplugin_super_custom_event` instead
///
#define q_styleplugin_qbase_custom_event q_styleplugin_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStylePlugin*
/// @param event QEvent*
///
void q_styleplugin_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStylePlugin*
/// @param callback void func(QStylePlugin* self, QEvent* event)
///
void q_styleplugin_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStylePlugin*
/// @param signal QMetaMethod*
///
void q_styleplugin_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_styleplugin_super_connect_notify` instead
///
#define q_styleplugin_qbase_connect_notify q_styleplugin_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStylePlugin*
/// @param signal QMetaMethod*
///
void q_styleplugin_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStylePlugin*
/// @param callback void func(QStylePlugin* self, QMetaMethod* signal)
///
void q_styleplugin_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStylePlugin*
/// @param signal QMetaMethod*
///
void q_styleplugin_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_styleplugin_super_disconnect_notify` instead
///
#define q_styleplugin_qbase_disconnect_notify q_styleplugin_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStylePlugin*
/// @param signal QMetaMethod*
///
void q_styleplugin_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStylePlugin*
/// @param callback void func(QStylePlugin* self, QMetaMethod* signal)
///
void q_styleplugin_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStylePlugin*
///
QObject* q_styleplugin_sender(void* self);

/// @warning DEPRECATED: Use `q_styleplugin_super_sender` instead
///
#define q_styleplugin_qbase_sender q_styleplugin_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStylePlugin*
///
QObject* q_styleplugin_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStylePlugin*
/// @param callback QObject* func()
///
void q_styleplugin_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStylePlugin*
///
int32_t q_styleplugin_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_styleplugin_super_sender_signal_index` instead
///
#define q_styleplugin_qbase_sender_signal_index q_styleplugin_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStylePlugin*
///
int32_t q_styleplugin_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStylePlugin*
/// @param callback int32_t func()
///
void q_styleplugin_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStylePlugin*
/// @param signal const char*
///
int32_t q_styleplugin_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_styleplugin_super_receivers` instead
///
#define q_styleplugin_qbase_receivers q_styleplugin_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStylePlugin*
/// @param signal const char*
///
int32_t q_styleplugin_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStylePlugin*
/// @param callback int32_t func(QStylePlugin* self, const char* signal)
///
void q_styleplugin_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStylePlugin*
/// @param signal QMetaMethod*
///
bool q_styleplugin_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_styleplugin_super_is_signal_connected` instead
///
#define q_styleplugin_qbase_is_signal_connected q_styleplugin_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStylePlugin*
/// @param signal QMetaMethod*
///
bool q_styleplugin_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStylePlugin*
/// @param callback bool func(QStylePlugin* self, QMetaMethod* signal)
///
void q_styleplugin_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QStylePlugin*
/// @param callback void func(QStylePlugin* self, const char* objectName)
///
void q_styleplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstyleplugin.html#dtor.QStylePlugin)
///
/// Delete this object from C++ memory.
///
/// @param self QStylePlugin*
///
void q_styleplugin_delete(void* self);

#endif
