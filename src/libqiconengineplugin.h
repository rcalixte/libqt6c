#pragma once
#ifndef SRC_QT6C_LIBQICONENGINEPLUGIN_H
#define SRC_QT6C_LIBQICONENGINEPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
/// @param self QIconEnginePlugin*
///
const QMetaObject* q_iconengineplugin_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QIconEnginePlugin*
/// @param callback const QMetaObject* func()
///
void q_iconengineplugin_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_iconengineplugin_super_meta_object` instead
///
#define q_iconengineplugin_qbase_meta_object q_iconengineplugin_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QIconEnginePlugin*
///
const QMetaObject* q_iconengineplugin_super_meta_object(void* self);

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

/// @warning DEPRECATED: Use `q_iconengineplugin_super_metacast` instead
///
#define q_iconengineplugin_qbase_metacast q_iconengineplugin_super_metacast

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

/// @warning DEPRECATED: Use `q_iconengineplugin_super_metacall` instead
///
#define q_iconengineplugin_qbase_metacall q_iconengineplugin_super_metacall

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

/// @warning DEPRECATED: Use `q_iconengineplugin_super_create` instead
///
#define q_iconengineplugin_qbase_create q_iconengineplugin_super_create

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengineplugin.html#create)
///
/// Base class method implementation
///
/// @param self QIconEnginePlugin*
/// @param filename const char*
///
QIconEngine* q_iconengineplugin_super_create(void* self, const char* filename);

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
/// @param self QIconEnginePlugin*
///
const char* q_iconengineplugin_object_name(void* self);

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
/// @param self QIconEnginePlugin*
///
bool q_iconengineplugin_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QIconEnginePlugin*
///
bool q_iconengineplugin_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QIconEnginePlugin*
///
bool q_iconengineplugin_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QIconEnginePlugin*
///
bool q_iconengineplugin_signals_blocked(void* self);

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
/// @param self QIconEnginePlugin*
///
QThread* q_iconengineplugin_thread(void* self);

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
/// @param self QIconEnginePlugin*
///
/// @return libqt_list of QObject*
///
libqt_list q_iconengineplugin_children(void* self);

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
QMetaObject__Connection* q_iconengineplugin_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_iconengineplugin_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QIconEnginePlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_iconengineplugin_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_iconengineplugin_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_iconengineplugin_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QIconEnginePlugin*
///
bool q_iconengineplugin_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QIconEnginePlugin*
/// @param receiver QObject*
///
bool q_iconengineplugin_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_iconengineplugin_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QIconEnginePlugin*
///
void q_iconengineplugin_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QIconEnginePlugin*
///
void q_iconengineplugin_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QIconEnginePlugin*
/// @param name const char*
/// @param value QVariant*
///
bool q_iconengineplugin_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QIconEnginePlugin*
/// @param name const char*
///
QVariant* q_iconengineplugin_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QIconEnginePlugin*
///
const char** q_iconengineplugin_dynamic_property_names(void* self);

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
/// @param self QIconEnginePlugin*
///
const QBindingStorage* q_iconengineplugin_binding_storage2(void* self);

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
/// @param self QIconEnginePlugin*
///
QObject* q_iconengineplugin_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QIconEnginePlugin*
/// @param classname const char*
///
bool q_iconengineplugin_inherits(void* self, const char* classname);

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
QMetaObject__Connection* q_iconengineplugin_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_iconengineplugin_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QIconEnginePlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_iconengineplugin_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QIconEnginePlugin*
/// @param signal const char*
///
bool q_iconengineplugin_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QIconEnginePlugin*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_iconengineplugin_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QIconEnginePlugin*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_iconengineplugin_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QIconEnginePlugin*
/// @param receiver QObject*
/// @param member const char*
///
bool q_iconengineplugin_disconnect23(void* self, void* receiver, const char* member);

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

/// @warning DEPRECATED: Use `q_iconengineplugin_super_event` instead
///
#define q_iconengineplugin_qbase_event q_iconengineplugin_super_event

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

/// @warning DEPRECATED: Use `q_iconengineplugin_super_event_filter` instead
///
#define q_iconengineplugin_qbase_event_filter q_iconengineplugin_super_event_filter

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

/// @warning DEPRECATED: Use `q_iconengineplugin_super_timer_event` instead
///
#define q_iconengineplugin_qbase_timer_event q_iconengineplugin_super_timer_event

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

/// @warning DEPRECATED: Use `q_iconengineplugin_super_child_event` instead
///
#define q_iconengineplugin_qbase_child_event q_iconengineplugin_super_child_event

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

/// @warning DEPRECATED: Use `q_iconengineplugin_super_custom_event` instead
///
#define q_iconengineplugin_qbase_custom_event q_iconengineplugin_super_custom_event

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
void q_iconengineplugin_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_iconengineplugin_super_connect_notify` instead
///
#define q_iconengineplugin_qbase_connect_notify q_iconengineplugin_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param signal QMetaMethod*
///
void q_iconengineplugin_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param callback void func(QIconEnginePlugin* self, QMetaMethod* signal)
///
void q_iconengineplugin_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param signal QMetaMethod*
///
void q_iconengineplugin_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_iconengineplugin_super_disconnect_notify` instead
///
#define q_iconengineplugin_qbase_disconnect_notify q_iconengineplugin_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param signal QMetaMethod*
///
void q_iconengineplugin_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param callback void func(QIconEnginePlugin* self, QMetaMethod* signal)
///
void q_iconengineplugin_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIconEnginePlugin*
///
QObject* q_iconengineplugin_sender(void* self);

/// @warning DEPRECATED: Use `q_iconengineplugin_super_sender` instead
///
#define q_iconengineplugin_qbase_sender q_iconengineplugin_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIconEnginePlugin*
///
QObject* q_iconengineplugin_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param callback QObject* func()
///
void q_iconengineplugin_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIconEnginePlugin*
///
int32_t q_iconengineplugin_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_iconengineplugin_super_sender_signal_index` instead
///
#define q_iconengineplugin_qbase_sender_signal_index q_iconengineplugin_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIconEnginePlugin*
///
int32_t q_iconengineplugin_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param callback int32_t func()
///
void q_iconengineplugin_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param signal const char*
///
int32_t q_iconengineplugin_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_iconengineplugin_super_receivers` instead
///
#define q_iconengineplugin_qbase_receivers q_iconengineplugin_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param signal const char*
///
int32_t q_iconengineplugin_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param callback int32_t func(QIconEnginePlugin* self, const char* signal)
///
void q_iconengineplugin_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param signal QMetaMethod*
///
bool q_iconengineplugin_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_iconengineplugin_super_is_signal_connected` instead
///
#define q_iconengineplugin_qbase_is_signal_connected q_iconengineplugin_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param signal QMetaMethod*
///
bool q_iconengineplugin_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIconEnginePlugin*
/// @param callback bool func(QIconEnginePlugin* self, QMetaMethod* signal)
///
void q_iconengineplugin_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

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
