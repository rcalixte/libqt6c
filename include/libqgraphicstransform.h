#pragma once
#ifndef LIBQGRAPHICSTRANSFORM_H
#define LIBQGRAPHICSTRANSFORM_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicstransform.html)

/// q_graphicstransform_new constructs a new QGraphicsTransform object.
///
QGraphicsTransform* q_graphicstransform_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicstransform.html)

/// q_graphicstransform_new2 constructs a new QGraphicsTransform object.
///
/// @param parent QObject*
///
QGraphicsTransform* q_graphicstransform_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QGraphicsTransform*
///
const QMetaObject* q_graphicstransform_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QGraphicsTransform*
/// @param callback const QMetaObject* func(const QGraphicsTransform* self)
///
void q_graphicstransform_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QGraphicsTransform*
///
const QMetaObject* q_graphicstransform_super_meta_object(const void* self);

/// @param self QGraphicsTransform*
/// @param param1 const char*
///
void* q_graphicstransform_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QGraphicsTransform*
/// @param callback void* func(QGraphicsTransform* self, const char* param1)
///
void q_graphicstransform_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QGraphicsTransform*
/// @param param1 const char*
///
void* q_graphicstransform_super_metacast(void* self, const char* param1);

/// @param self QGraphicsTransform*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicstransform_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGraphicsTransform*
/// @param callback int32_t func(QGraphicsTransform* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_graphicstransform_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QGraphicsTransform*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicstransform_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_graphicstransform_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicstransform.html#applyTo)
///
/// @warning This method must be implemented with `q_graphicstransform_on_apply_to` before it can be called.
///
/// @param self const QGraphicsTransform*
/// @param matrix QMatrix4x4*
///
void q_graphicstransform_apply_to(const void* self, void* matrix);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicstransform.html#applyTo)
///
/// Allows for overriding the related default method
///
/// @param self const QGraphicsTransform*
/// @param callback void func(const QGraphicsTransform* self, QMatrix4x4* matrix)
///
void q_graphicstransform_on_apply_to(const void* self, void (*callback)(const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// @param self QGraphicsTransform*
///
void q_graphicstransform_update(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_graphicstransform_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_graphicstransform_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QGraphicsTransform*
///
const char* q_graphicstransform_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGraphicsTransform*
/// @param name const char*
///
void q_graphicstransform_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QGraphicsTransform*
///
bool q_graphicstransform_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QGraphicsTransform*
///
bool q_graphicstransform_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QGraphicsTransform*
///
bool q_graphicstransform_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QGraphicsTransform*
///
bool q_graphicstransform_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGraphicsTransform*
/// @param b bool
///
bool q_graphicstransform_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QGraphicsTransform*
///
QThread* q_graphicstransform_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsTransform*
/// @param thread QThread*
///
bool q_graphicstransform_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsTransform*
/// @param interval int
///
int32_t q_graphicstransform_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsTransform*
/// @param time int64_t of nanoseconds
///
int32_t q_graphicstransform_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsTransform*
/// @param id int
///
void q_graphicstransform_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsTransform*
/// @param id enum Qt__TimerId
///
void q_graphicstransform_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QGraphicsTransform*
///
/// @return libqt_list of QObject*
///
libqt_list q_graphicstransform_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGraphicsTransform*
/// @param parent QObject*
///
void q_graphicstransform_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGraphicsTransform*
/// @param filterObj QObject*
///
void q_graphicstransform_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGraphicsTransform*
/// @param obj QObject*
///
void q_graphicstransform_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_graphicstransform_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_graphicstransform_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QGraphicsTransform*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_graphicstransform_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_graphicstransform_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_graphicstransform_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsTransform*
///
bool q_graphicstransform_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsTransform*
/// @param receiver QObject*
///
bool q_graphicstransform_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_graphicstransform_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QGraphicsTransform*
///
void q_graphicstransform_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QGraphicsTransform*
///
void q_graphicstransform_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGraphicsTransform*
/// @param name const char*
/// @param value QVariant*
///
bool q_graphicstransform_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QGraphicsTransform*
/// @param name const char*
///
QVariant* q_graphicstransform_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QGraphicsTransform*
///
const char** q_graphicstransform_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsTransform*
///
QBindingStorage* q_graphicstransform_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QGraphicsTransform*
///
const QBindingStorage* q_graphicstransform_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsTransform*
///
void q_graphicstransform_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsTransform*
/// @param callback void func(QGraphicsTransform* self)
///
void q_graphicstransform_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QGraphicsTransform*
///
QObject* q_graphicstransform_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QGraphicsTransform*
/// @param classname const char*
///
bool q_graphicstransform_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGraphicsTransform*
///
void q_graphicstransform_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsTransform*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicstransform_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsTransform*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicstransform_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_graphicstransform_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_graphicstransform_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QGraphicsTransform*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_graphicstransform_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsTransform*
/// @param signal const char*
///
bool q_graphicstransform_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsTransform*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_graphicstransform_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsTransform*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_graphicstransform_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsTransform*
/// @param receiver QObject*
/// @param member const char*
///
bool q_graphicstransform_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsTransform*
/// @param param1 QObject*
///
void q_graphicstransform_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsTransform*
/// @param callback void func(QGraphicsTransform* self, QObject* param1)
///
void q_graphicstransform_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param event QEvent*
///
bool q_graphicstransform_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param event QEvent*
///
bool q_graphicstransform_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param callback bool func(QGraphicsTransform* self, QEvent* event)
///
void q_graphicstransform_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_graphicstransform_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_graphicstransform_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param callback bool func(QGraphicsTransform* self, QObject* watched, QEvent* event)
///
void q_graphicstransform_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param event QTimerEvent*
///
void q_graphicstransform_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param event QTimerEvent*
///
void q_graphicstransform_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param callback void func(QGraphicsTransform* self, QTimerEvent* event)
///
void q_graphicstransform_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param event QChildEvent*
///
void q_graphicstransform_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param event QChildEvent*
///
void q_graphicstransform_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param callback void func(QGraphicsTransform* self, QChildEvent* event)
///
void q_graphicstransform_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param event QEvent*
///
void q_graphicstransform_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param event QEvent*
///
void q_graphicstransform_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param callback void func(QGraphicsTransform* self, QEvent* event)
///
void q_graphicstransform_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param signal QMetaMethod*
///
void q_graphicstransform_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param signal QMetaMethod*
///
void q_graphicstransform_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param callback void func(QGraphicsTransform* self, QMetaMethod* signal)
///
void q_graphicstransform_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param signal QMetaMethod*
///
void q_graphicstransform_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param signal QMetaMethod*
///
void q_graphicstransform_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsTransform*
/// @param callback void func(QGraphicsTransform* self, QMetaMethod* signal)
///
void q_graphicstransform_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsTransform*
///
QObject* q_graphicstransform_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsTransform*
///
QObject* q_graphicstransform_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsTransform*
/// @param callback QObject* func(QGraphicsTransform* self)
///
void q_graphicstransform_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsTransform*
///
int32_t q_graphicstransform_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsTransform*
///
int32_t q_graphicstransform_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsTransform*
/// @param callback int32_t func(QGraphicsTransform* self)
///
void q_graphicstransform_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsTransform*
/// @param signal const char*
///
int32_t q_graphicstransform_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsTransform*
/// @param signal const char*
///
int32_t q_graphicstransform_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsTransform*
/// @param callback int32_t func(QGraphicsTransform* self, const char* signal)
///
void q_graphicstransform_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsTransform*
/// @param signal QMetaMethod*
///
bool q_graphicstransform_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsTransform*
/// @param signal QMetaMethod*
///
bool q_graphicstransform_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsTransform*
/// @param callback bool func(QGraphicsTransform* self, QMetaMethod* signal)
///
void q_graphicstransform_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGraphicsTransform*
/// @param callback void func(QGraphicsTransform* self, const char* objectName)
///
void q_graphicstransform_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicstransform.html#dtor.QGraphicsTransform)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsTransform*
///
void q_graphicstransform_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscale.html)

/// q_graphicsscale_new constructs a new QGraphicsScale object.
///
QGraphicsScale* q_graphicsscale_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscale.html)

/// q_graphicsscale_new2 constructs a new QGraphicsScale object.
///
/// @param parent QObject*
///
QGraphicsScale* q_graphicsscale_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QGraphicsScale*
///
const QMetaObject* q_graphicsscale_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QGraphicsScale*
/// @param callback const QMetaObject* func(const QGraphicsScale* self)
///
void q_graphicsscale_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QGraphicsScale*
///
const QMetaObject* q_graphicsscale_super_meta_object(const void* self);

/// @param self QGraphicsScale*
/// @param param1 const char*
///
void* q_graphicsscale_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QGraphicsScale*
/// @param callback void* func(QGraphicsScale* self, const char* param1)
///
void q_graphicsscale_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QGraphicsScale*
/// @param param1 const char*
///
void* q_graphicsscale_super_metacast(void* self, const char* param1);

/// @param self QGraphicsScale*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicsscale_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGraphicsScale*
/// @param callback int32_t func(QGraphicsScale* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_graphicsscale_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QGraphicsScale*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicsscale_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_graphicsscale_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscale.html#origin)
///
/// @param self const QGraphicsScale*
///
QVector3D* q_graphicsscale_origin(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscale.html#setOrigin)
///
/// @param self QGraphicsScale*
/// @param point QVector3D*
///
void q_graphicsscale_set_origin(void* self, const void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscale.html#xScale)
///
/// @param self const QGraphicsScale*
///
double q_graphicsscale_x_scale(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscale.html#setXScale)
///
/// @param self QGraphicsScale*
/// @param xScale double
///
void q_graphicsscale_set_x_scale(void* self, double xScale);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscale.html#yScale)
///
/// @param self const QGraphicsScale*
///
double q_graphicsscale_y_scale(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscale.html#setYScale)
///
/// @param self QGraphicsScale*
/// @param yScale double
///
void q_graphicsscale_set_y_scale(void* self, double yScale);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscale.html#zScale)
///
/// @param self const QGraphicsScale*
///
double q_graphicsscale_z_scale(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscale.html#setZScale)
///
/// @param self QGraphicsScale*
/// @param zScale double
///
void q_graphicsscale_set_z_scale(void* self, double zScale);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscale.html#applyTo)
///
/// @param self const QGraphicsScale*
/// @param matrix QMatrix4x4*
///
void q_graphicsscale_apply_to(const void* self, void* matrix);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscale.html#applyTo)
///
/// Allows for overriding the related default method
///
/// @param self const QGraphicsScale*
/// @param callback void func(const QGraphicsScale* self, QMatrix4x4* matrix)
///
void q_graphicsscale_on_apply_to(const void* self, void (*callback)(const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscale.html#applyTo)
///
/// Base class method implementation
///
/// @param self const QGraphicsScale*
/// @param matrix QMatrix4x4*
///
void q_graphicsscale_super_apply_to(const void* self, void* matrix);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscale.html#originChanged)
///
/// @param self QGraphicsScale*
///
void q_graphicsscale_origin_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscale.html#originChanged)
///
/// @param self QGraphicsScale*
/// @param callback void func(QGraphicsScale* self)
///
void q_graphicsscale_on_origin_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscale.html#xScaleChanged)
///
/// @param self QGraphicsScale*
///
void q_graphicsscale_x_scale_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscale.html#xScaleChanged)
///
/// @param self QGraphicsScale*
/// @param callback void func(QGraphicsScale* self)
///
void q_graphicsscale_on_x_scale_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscale.html#yScaleChanged)
///
/// @param self QGraphicsScale*
///
void q_graphicsscale_y_scale_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscale.html#yScaleChanged)
///
/// @param self QGraphicsScale*
/// @param callback void func(QGraphicsScale* self)
///
void q_graphicsscale_on_y_scale_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscale.html#zScaleChanged)
///
/// @param self QGraphicsScale*
///
void q_graphicsscale_z_scale_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscale.html#zScaleChanged)
///
/// @param self QGraphicsScale*
/// @param callback void func(QGraphicsScale* self)
///
void q_graphicsscale_on_z_scale_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscale.html#scaleChanged)
///
/// @param self QGraphicsScale*
///
void q_graphicsscale_scale_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscale.html#scaleChanged)
///
/// @param self QGraphicsScale*
/// @param callback void func(QGraphicsScale* self)
///
void q_graphicsscale_on_scale_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_graphicsscale_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_graphicsscale_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QGraphicsScale*
///
const char* q_graphicsscale_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGraphicsScale*
/// @param name const char*
///
void q_graphicsscale_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QGraphicsScale*
///
bool q_graphicsscale_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QGraphicsScale*
///
bool q_graphicsscale_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QGraphicsScale*
///
bool q_graphicsscale_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QGraphicsScale*
///
bool q_graphicsscale_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGraphicsScale*
/// @param b bool
///
bool q_graphicsscale_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QGraphicsScale*
///
QThread* q_graphicsscale_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsScale*
/// @param thread QThread*
///
bool q_graphicsscale_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsScale*
/// @param interval int
///
int32_t q_graphicsscale_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsScale*
/// @param time int64_t of nanoseconds
///
int32_t q_graphicsscale_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsScale*
/// @param id int
///
void q_graphicsscale_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsScale*
/// @param id enum Qt__TimerId
///
void q_graphicsscale_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QGraphicsScale*
///
/// @return libqt_list of QObject*
///
libqt_list q_graphicsscale_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGraphicsScale*
/// @param parent QObject*
///
void q_graphicsscale_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGraphicsScale*
/// @param filterObj QObject*
///
void q_graphicsscale_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGraphicsScale*
/// @param obj QObject*
///
void q_graphicsscale_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_graphicsscale_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_graphicsscale_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QGraphicsScale*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_graphicsscale_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_graphicsscale_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_graphicsscale_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsScale*
///
bool q_graphicsscale_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsScale*
/// @param receiver QObject*
///
bool q_graphicsscale_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_graphicsscale_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QGraphicsScale*
///
void q_graphicsscale_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QGraphicsScale*
///
void q_graphicsscale_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGraphicsScale*
/// @param name const char*
/// @param value QVariant*
///
bool q_graphicsscale_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QGraphicsScale*
/// @param name const char*
///
QVariant* q_graphicsscale_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QGraphicsScale*
///
const char** q_graphicsscale_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsScale*
///
QBindingStorage* q_graphicsscale_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QGraphicsScale*
///
const QBindingStorage* q_graphicsscale_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsScale*
///
void q_graphicsscale_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsScale*
/// @param callback void func(QGraphicsScale* self)
///
void q_graphicsscale_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QGraphicsScale*
///
QObject* q_graphicsscale_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QGraphicsScale*
/// @param classname const char*
///
bool q_graphicsscale_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGraphicsScale*
///
void q_graphicsscale_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsScale*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicsscale_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsScale*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicsscale_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_graphicsscale_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_graphicsscale_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QGraphicsScale*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_graphicsscale_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsScale*
/// @param signal const char*
///
bool q_graphicsscale_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsScale*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_graphicsscale_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsScale*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_graphicsscale_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsScale*
/// @param receiver QObject*
/// @param member const char*
///
bool q_graphicsscale_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsScale*
/// @param param1 QObject*
///
void q_graphicsscale_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsScale*
/// @param callback void func(QGraphicsScale* self, QObject* param1)
///
void q_graphicsscale_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScale*
/// @param event QEvent*
///
bool q_graphicsscale_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param event QEvent*
///
bool q_graphicsscale_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param callback bool func(QGraphicsScale* self, QEvent* event)
///
void q_graphicsscale_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScale*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_graphicsscale_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_graphicsscale_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param callback bool func(QGraphicsScale* self, QObject* watched, QEvent* event)
///
void q_graphicsscale_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScale*
/// @param event QTimerEvent*
///
void q_graphicsscale_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param event QTimerEvent*
///
void q_graphicsscale_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param callback void func(QGraphicsScale* self, QTimerEvent* event)
///
void q_graphicsscale_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScale*
/// @param event QChildEvent*
///
void q_graphicsscale_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param event QChildEvent*
///
void q_graphicsscale_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param callback void func(QGraphicsScale* self, QChildEvent* event)
///
void q_graphicsscale_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScale*
/// @param event QEvent*
///
void q_graphicsscale_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param event QEvent*
///
void q_graphicsscale_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param callback void func(QGraphicsScale* self, QEvent* event)
///
void q_graphicsscale_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScale*
/// @param signal QMetaMethod*
///
void q_graphicsscale_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param signal QMetaMethod*
///
void q_graphicsscale_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param callback void func(QGraphicsScale* self, QMetaMethod* signal)
///
void q_graphicsscale_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScale*
/// @param signal QMetaMethod*
///
void q_graphicsscale_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param signal QMetaMethod*
///
void q_graphicsscale_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param callback void func(QGraphicsScale* self, QMetaMethod* signal)
///
void q_graphicsscale_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QGraphicsTransform
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsScale*
///
void q_graphicsscale_update(void* self);

/// Inherited from QGraphicsTransform
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsScale*
///
void q_graphicsscale_super_update(void* self);

/// Inherited from QGraphicsTransform
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsScale*
/// @param callback void func(QGraphicsScale* self)
///
void q_graphicsscale_on_update(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsScale*
///
QObject* q_graphicsscale_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsScale*
///
QObject* q_graphicsscale_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsScale*
/// @param callback QObject* func(QGraphicsScale* self)
///
void q_graphicsscale_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsScale*
///
int32_t q_graphicsscale_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsScale*
///
int32_t q_graphicsscale_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsScale*
/// @param callback int32_t func(QGraphicsScale* self)
///
void q_graphicsscale_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsScale*
/// @param signal const char*
///
int32_t q_graphicsscale_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsScale*
/// @param signal const char*
///
int32_t q_graphicsscale_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsScale*
/// @param callback int32_t func(QGraphicsScale* self, const char* signal)
///
void q_graphicsscale_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsScale*
/// @param signal QMetaMethod*
///
bool q_graphicsscale_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsScale*
/// @param signal QMetaMethod*
///
bool q_graphicsscale_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsScale*
/// @param callback bool func(QGraphicsScale* self, QMetaMethod* signal)
///
void q_graphicsscale_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGraphicsScale*
/// @param callback void func(QGraphicsScale* self, const char* objectName)
///
void q_graphicsscale_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscale.html#dtor.QGraphicsScale)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsScale*
///
void q_graphicsscale_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsrotation.html)

/// q_graphicsrotation_new constructs a new QGraphicsRotation object.
///
QGraphicsRotation* q_graphicsrotation_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsrotation.html)

/// q_graphicsrotation_new2 constructs a new QGraphicsRotation object.
///
/// @param parent QObject*
///
QGraphicsRotation* q_graphicsrotation_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QGraphicsRotation*
///
const QMetaObject* q_graphicsrotation_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QGraphicsRotation*
/// @param callback const QMetaObject* func(const QGraphicsRotation* self)
///
void q_graphicsrotation_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QGraphicsRotation*
///
const QMetaObject* q_graphicsrotation_super_meta_object(const void* self);

/// @param self QGraphicsRotation*
/// @param param1 const char*
///
void* q_graphicsrotation_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QGraphicsRotation*
/// @param callback void* func(QGraphicsRotation* self, const char* param1)
///
void q_graphicsrotation_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QGraphicsRotation*
/// @param param1 const char*
///
void* q_graphicsrotation_super_metacast(void* self, const char* param1);

/// @param self QGraphicsRotation*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicsrotation_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGraphicsRotation*
/// @param callback int32_t func(QGraphicsRotation* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_graphicsrotation_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QGraphicsRotation*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicsrotation_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_graphicsrotation_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsrotation.html#origin)
///
/// @param self const QGraphicsRotation*
///
QVector3D* q_graphicsrotation_origin(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsrotation.html#setOrigin)
///
/// @param self QGraphicsRotation*
/// @param point QVector3D*
///
void q_graphicsrotation_set_origin(void* self, const void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsrotation.html#angle)
///
/// @param self const QGraphicsRotation*
///
double q_graphicsrotation_angle(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsrotation.html#setAngle)
///
/// @param self QGraphicsRotation*
/// @param angle double
///
void q_graphicsrotation_set_angle(void* self, double angle);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsrotation.html#axis)
///
/// @param self const QGraphicsRotation*
///
QVector3D* q_graphicsrotation_axis(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsrotation.html#setAxis)
///
/// @param self QGraphicsRotation*
/// @param axis QVector3D*
///
void q_graphicsrotation_set_axis(void* self, const void* axis);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsrotation.html#setAxis)
///
/// @param self QGraphicsRotation*
/// @param axis enum Qt__Axis
///
void q_graphicsrotation_set_axis2(void* self, int32_t axis);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsrotation.html#applyTo)
///
/// @param self const QGraphicsRotation*
/// @param matrix QMatrix4x4*
///
void q_graphicsrotation_apply_to(const void* self, void* matrix);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsrotation.html#applyTo)
///
/// Allows for overriding the related default method
///
/// @param self const QGraphicsRotation*
/// @param callback void func(const QGraphicsRotation* self, QMatrix4x4* matrix)
///
void q_graphicsrotation_on_apply_to(const void* self, void (*callback)(const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsrotation.html#applyTo)
///
/// Base class method implementation
///
/// @param self const QGraphicsRotation*
/// @param matrix QMatrix4x4*
///
void q_graphicsrotation_super_apply_to(const void* self, void* matrix);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsrotation.html#originChanged)
///
/// @param self QGraphicsRotation*
///
void q_graphicsrotation_origin_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsrotation.html#originChanged)
///
/// @param self QGraphicsRotation*
/// @param callback void func(QGraphicsRotation* self)
///
void q_graphicsrotation_on_origin_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsrotation.html#angleChanged)
///
/// @param self QGraphicsRotation*
///
void q_graphicsrotation_angle_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsrotation.html#angleChanged)
///
/// @param self QGraphicsRotation*
/// @param callback void func(QGraphicsRotation* self)
///
void q_graphicsrotation_on_angle_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsrotation.html#axisChanged)
///
/// @param self QGraphicsRotation*
///
void q_graphicsrotation_axis_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsrotation.html#axisChanged)
///
/// @param self QGraphicsRotation*
/// @param callback void func(QGraphicsRotation* self)
///
void q_graphicsrotation_on_axis_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_graphicsrotation_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_graphicsrotation_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QGraphicsRotation*
///
const char* q_graphicsrotation_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGraphicsRotation*
/// @param name const char*
///
void q_graphicsrotation_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QGraphicsRotation*
///
bool q_graphicsrotation_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QGraphicsRotation*
///
bool q_graphicsrotation_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QGraphicsRotation*
///
bool q_graphicsrotation_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QGraphicsRotation*
///
bool q_graphicsrotation_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGraphicsRotation*
/// @param b bool
///
bool q_graphicsrotation_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QGraphicsRotation*
///
QThread* q_graphicsrotation_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsRotation*
/// @param thread QThread*
///
bool q_graphicsrotation_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsRotation*
/// @param interval int
///
int32_t q_graphicsrotation_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsRotation*
/// @param time int64_t of nanoseconds
///
int32_t q_graphicsrotation_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsRotation*
/// @param id int
///
void q_graphicsrotation_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsRotation*
/// @param id enum Qt__TimerId
///
void q_graphicsrotation_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QGraphicsRotation*
///
/// @return libqt_list of QObject*
///
libqt_list q_graphicsrotation_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGraphicsRotation*
/// @param parent QObject*
///
void q_graphicsrotation_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGraphicsRotation*
/// @param filterObj QObject*
///
void q_graphicsrotation_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGraphicsRotation*
/// @param obj QObject*
///
void q_graphicsrotation_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_graphicsrotation_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_graphicsrotation_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QGraphicsRotation*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_graphicsrotation_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_graphicsrotation_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_graphicsrotation_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsRotation*
///
bool q_graphicsrotation_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsRotation*
/// @param receiver QObject*
///
bool q_graphicsrotation_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_graphicsrotation_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QGraphicsRotation*
///
void q_graphicsrotation_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QGraphicsRotation*
///
void q_graphicsrotation_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGraphicsRotation*
/// @param name const char*
/// @param value QVariant*
///
bool q_graphicsrotation_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QGraphicsRotation*
/// @param name const char*
///
QVariant* q_graphicsrotation_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QGraphicsRotation*
///
const char** q_graphicsrotation_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsRotation*
///
QBindingStorage* q_graphicsrotation_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QGraphicsRotation*
///
const QBindingStorage* q_graphicsrotation_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsRotation*
///
void q_graphicsrotation_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsRotation*
/// @param callback void func(QGraphicsRotation* self)
///
void q_graphicsrotation_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QGraphicsRotation*
///
QObject* q_graphicsrotation_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QGraphicsRotation*
/// @param classname const char*
///
bool q_graphicsrotation_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGraphicsRotation*
///
void q_graphicsrotation_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsRotation*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicsrotation_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsRotation*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicsrotation_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_graphicsrotation_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_graphicsrotation_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QGraphicsRotation*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_graphicsrotation_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsRotation*
/// @param signal const char*
///
bool q_graphicsrotation_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsRotation*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_graphicsrotation_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsRotation*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_graphicsrotation_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGraphicsRotation*
/// @param receiver QObject*
/// @param member const char*
///
bool q_graphicsrotation_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsRotation*
/// @param param1 QObject*
///
void q_graphicsrotation_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsRotation*
/// @param callback void func(QGraphicsRotation* self, QObject* param1)
///
void q_graphicsrotation_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param event QEvent*
///
bool q_graphicsrotation_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param event QEvent*
///
bool q_graphicsrotation_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param callback bool func(QGraphicsRotation* self, QEvent* event)
///
void q_graphicsrotation_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_graphicsrotation_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_graphicsrotation_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param callback bool func(QGraphicsRotation* self, QObject* watched, QEvent* event)
///
void q_graphicsrotation_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param event QTimerEvent*
///
void q_graphicsrotation_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param event QTimerEvent*
///
void q_graphicsrotation_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param callback void func(QGraphicsRotation* self, QTimerEvent* event)
///
void q_graphicsrotation_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param event QChildEvent*
///
void q_graphicsrotation_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param event QChildEvent*
///
void q_graphicsrotation_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param callback void func(QGraphicsRotation* self, QChildEvent* event)
///
void q_graphicsrotation_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param event QEvent*
///
void q_graphicsrotation_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param event QEvent*
///
void q_graphicsrotation_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param callback void func(QGraphicsRotation* self, QEvent* event)
///
void q_graphicsrotation_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param signal QMetaMethod*
///
void q_graphicsrotation_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param signal QMetaMethod*
///
void q_graphicsrotation_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param callback void func(QGraphicsRotation* self, QMetaMethod* signal)
///
void q_graphicsrotation_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param signal QMetaMethod*
///
void q_graphicsrotation_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param signal QMetaMethod*
///
void q_graphicsrotation_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param callback void func(QGraphicsRotation* self, QMetaMethod* signal)
///
void q_graphicsrotation_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QGraphicsTransform
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsRotation*
///
void q_graphicsrotation_update(void* self);

/// Inherited from QGraphicsTransform
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsRotation*
///
void q_graphicsrotation_super_update(void* self);

/// Inherited from QGraphicsTransform
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsRotation*
/// @param callback void func(QGraphicsRotation* self)
///
void q_graphicsrotation_on_update(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsRotation*
///
QObject* q_graphicsrotation_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsRotation*
///
QObject* q_graphicsrotation_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsRotation*
/// @param callback QObject* func(QGraphicsRotation* self)
///
void q_graphicsrotation_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsRotation*
///
int32_t q_graphicsrotation_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsRotation*
///
int32_t q_graphicsrotation_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsRotation*
/// @param callback int32_t func(QGraphicsRotation* self)
///
void q_graphicsrotation_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsRotation*
/// @param signal const char*
///
int32_t q_graphicsrotation_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsRotation*
/// @param signal const char*
///
int32_t q_graphicsrotation_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsRotation*
/// @param callback int32_t func(QGraphicsRotation* self, const char* signal)
///
void q_graphicsrotation_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGraphicsRotation*
/// @param signal QMetaMethod*
///
bool q_graphicsrotation_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGraphicsRotation*
/// @param signal QMetaMethod*
///
bool q_graphicsrotation_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGraphicsRotation*
/// @param callback bool func(QGraphicsRotation* self, QMetaMethod* signal)
///
void q_graphicsrotation_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGraphicsRotation*
/// @param callback void func(QGraphicsRotation* self, const char* objectName)
///
void q_graphicsrotation_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsrotation.html#dtor.QGraphicsRotation)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsRotation*
///
void q_graphicsrotation_delete(void* self);

#endif
