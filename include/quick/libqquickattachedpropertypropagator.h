#pragma once
#ifndef QUICK_LIBQQUICKATTACHEDPROPERTYPROPAGATOR_H
#define QUICK_LIBQQUICKATTACHEDPROPERTYPROPAGATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qquickattachedpropertypropagator.html)

/// q_quickattachedpropertypropagator_new constructs a new QQuickAttachedPropertyPropagator object.
///
QQuickAttachedPropertyPropagator* q_quickattachedpropertypropagator_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qquickattachedpropertypropagator.html)

/// q_quickattachedpropertypropagator_new2 constructs a new QQuickAttachedPropertyPropagator object.
///
/// @param parent QObject*
///
QQuickAttachedPropertyPropagator* q_quickattachedpropertypropagator_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QQuickAttachedPropertyPropagator*
///
const QMetaObject* q_quickattachedpropertypropagator_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param callback const QMetaObject* func()
///
void q_quickattachedpropertypropagator_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QQuickAttachedPropertyPropagator*
///
const QMetaObject* q_quickattachedpropertypropagator_super_meta_object(void* self);

/// @param self QQuickAttachedPropertyPropagator*
/// @param param1 const char*
///
void* q_quickattachedpropertypropagator_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param callback void* func(QQuickAttachedPropertyPropagator* self, const char* param1)
///
void q_quickattachedpropertypropagator_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param param1 const char*
///
void* q_quickattachedpropertypropagator_super_metacast(void* self, const char* param1);

/// @param self QQuickAttachedPropertyPropagator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickattachedpropertypropagator_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param callback int32_t func(QQuickAttachedPropertyPropagator* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_quickattachedpropertypropagator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickattachedpropertypropagator_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_quickattachedpropertypropagator_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickattachedpropertypropagator.html#attachedChildren)
///
/// @param self QQuickAttachedPropertyPropagator*
///
/// @return libqt_list of QQuickAttachedPropertyPropagator*
///
libqt_list q_quickattachedpropertypropagator_attached_children(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickattachedpropertypropagator.html#attachedParent)
///
/// @param self QQuickAttachedPropertyPropagator*
///
QQuickAttachedPropertyPropagator* q_quickattachedpropertypropagator_attached_parent(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickattachedpropertypropagator.html#initialize)
///
/// @param self QQuickAttachedPropertyPropagator*
///
void q_quickattachedpropertypropagator_initialize(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickattachedpropertypropagator.html#initialize)
///
/// Allows for overriding the related default method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param callback void func()
///
void q_quickattachedpropertypropagator_on_initialize(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickattachedpropertypropagator.html#initialize)
///
/// Base class method implementation
///
/// @param self QQuickAttachedPropertyPropagator*
///
void q_quickattachedpropertypropagator_super_initialize(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickattachedpropertypropagator.html#attachedParentChange)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param newParent QQuickAttachedPropertyPropagator*
/// @param oldParent QQuickAttachedPropertyPropagator*
///
void q_quickattachedpropertypropagator_attached_parent_change(void* self, void* newParent, void* oldParent);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickattachedpropertypropagator.html#attachedParentChange)
///
/// Allows for overriding the related default method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param callback void func(QQuickAttachedPropertyPropagator* self, QQuickAttachedPropertyPropagator* newParent, QQuickAttachedPropertyPropagator* oldParent)
///
void q_quickattachedpropertypropagator_on_attached_parent_change(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickattachedpropertypropagator.html#attachedParentChange)
///
/// Base class method implementation
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param newParent QQuickAttachedPropertyPropagator*
/// @param oldParent QQuickAttachedPropertyPropagator*
///
void q_quickattachedpropertypropagator_super_attached_parent_change(void* self, void* newParent, void* oldParent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_quickattachedpropertypropagator_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_quickattachedpropertypropagator_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickAttachedPropertyPropagator*
///
const char* q_quickattachedpropertypropagator_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param name const char*
///
void q_quickattachedpropertypropagator_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QQuickAttachedPropertyPropagator*
///
bool q_quickattachedpropertypropagator_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QQuickAttachedPropertyPropagator*
///
bool q_quickattachedpropertypropagator_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QQuickAttachedPropertyPropagator*
///
bool q_quickattachedpropertypropagator_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QQuickAttachedPropertyPropagator*
///
bool q_quickattachedpropertypropagator_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param b bool
///
bool q_quickattachedpropertypropagator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QQuickAttachedPropertyPropagator*
///
QThread* q_quickattachedpropertypropagator_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param thread QThread*
///
bool q_quickattachedpropertypropagator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param interval int
///
int32_t q_quickattachedpropertypropagator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param time int64_t of nanoseconds
///
int32_t q_quickattachedpropertypropagator_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param id int
///
void q_quickattachedpropertypropagator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param id enum Qt__TimerId
///
void q_quickattachedpropertypropagator_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QQuickAttachedPropertyPropagator*
///
/// @return libqt_list of QObject*
///
libqt_list q_quickattachedpropertypropagator_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param parent QObject*
///
void q_quickattachedpropertypropagator_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param filterObj QObject*
///
void q_quickattachedpropertypropagator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param obj QObject*
///
void q_quickattachedpropertypropagator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_quickattachedpropertypropagator_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_quickattachedpropertypropagator_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_quickattachedpropertypropagator_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickattachedpropertypropagator_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_quickattachedpropertypropagator_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickAttachedPropertyPropagator*
///
bool q_quickattachedpropertypropagator_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param receiver QObject*
///
bool q_quickattachedpropertypropagator_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_quickattachedpropertypropagator_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QQuickAttachedPropertyPropagator*
///
void q_quickattachedpropertypropagator_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QQuickAttachedPropertyPropagator*
///
void q_quickattachedpropertypropagator_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param name const char*
/// @param value QVariant*
///
bool q_quickattachedpropertypropagator_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param name const char*
///
QVariant* q_quickattachedpropertypropagator_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQuickAttachedPropertyPropagator*
///
const char** q_quickattachedpropertypropagator_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickAttachedPropertyPropagator*
///
QBindingStorage* q_quickattachedpropertypropagator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickAttachedPropertyPropagator*
///
const QBindingStorage* q_quickattachedpropertypropagator_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickAttachedPropertyPropagator*
///
void q_quickattachedpropertypropagator_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param callback void func(QQuickAttachedPropertyPropagator* self)
///
void q_quickattachedpropertypropagator_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QQuickAttachedPropertyPropagator*
///
QObject* q_quickattachedpropertypropagator_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param classname const char*
///
bool q_quickattachedpropertypropagator_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQuickAttachedPropertyPropagator*
///
void q_quickattachedpropertypropagator_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_quickattachedpropertypropagator_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_quickattachedpropertypropagator_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_quickattachedpropertypropagator_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_quickattachedpropertypropagator_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quickattachedpropertypropagator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param signal const char*
///
bool q_quickattachedpropertypropagator_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_quickattachedpropertypropagator_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickattachedpropertypropagator_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickattachedpropertypropagator_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param param1 QObject*
///
void q_quickattachedpropertypropagator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param callback void func(QQuickAttachedPropertyPropagator* self, QObject* param1)
///
void q_quickattachedpropertypropagator_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param event QEvent*
///
bool q_quickattachedpropertypropagator_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param event QEvent*
///
bool q_quickattachedpropertypropagator_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param callback bool func(QQuickAttachedPropertyPropagator* self, QEvent* event)
///
void q_quickattachedpropertypropagator_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickattachedpropertypropagator_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickattachedpropertypropagator_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param callback bool func(QQuickAttachedPropertyPropagator* self, QObject* watched, QEvent* event)
///
void q_quickattachedpropertypropagator_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param event QTimerEvent*
///
void q_quickattachedpropertypropagator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param event QTimerEvent*
///
void q_quickattachedpropertypropagator_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param callback void func(QQuickAttachedPropertyPropagator* self, QTimerEvent* event)
///
void q_quickattachedpropertypropagator_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param event QChildEvent*
///
void q_quickattachedpropertypropagator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param event QChildEvent*
///
void q_quickattachedpropertypropagator_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param callback void func(QQuickAttachedPropertyPropagator* self, QChildEvent* event)
///
void q_quickattachedpropertypropagator_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param event QEvent*
///
void q_quickattachedpropertypropagator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param event QEvent*
///
void q_quickattachedpropertypropagator_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param callback void func(QQuickAttachedPropertyPropagator* self, QEvent* event)
///
void q_quickattachedpropertypropagator_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param signal QMetaMethod*
///
void q_quickattachedpropertypropagator_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param signal QMetaMethod*
///
void q_quickattachedpropertypropagator_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param callback void func(QQuickAttachedPropertyPropagator* self, QMetaMethod* signal)
///
void q_quickattachedpropertypropagator_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param signal QMetaMethod*
///
void q_quickattachedpropertypropagator_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param signal QMetaMethod*
///
void q_quickattachedpropertypropagator_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param callback void func(QQuickAttachedPropertyPropagator* self, QMetaMethod* signal)
///
void q_quickattachedpropertypropagator_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
///
QObject* q_quickattachedpropertypropagator_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
///
QObject* q_quickattachedpropertypropagator_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param callback QObject* func()
///
void q_quickattachedpropertypropagator_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
///
int32_t q_quickattachedpropertypropagator_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
///
int32_t q_quickattachedpropertypropagator_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param callback int32_t func()
///
void q_quickattachedpropertypropagator_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param signal const char*
///
int32_t q_quickattachedpropertypropagator_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param signal const char*
///
int32_t q_quickattachedpropertypropagator_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param callback int32_t func(QQuickAttachedPropertyPropagator* self, const char* signal)
///
void q_quickattachedpropertypropagator_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param signal QMetaMethod*
///
bool q_quickattachedpropertypropagator_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param signal QMetaMethod*
///
bool q_quickattachedpropertypropagator_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param callback bool func(QQuickAttachedPropertyPropagator* self, QMetaMethod* signal)
///
void q_quickattachedpropertypropagator_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQuickAttachedPropertyPropagator*
/// @param callback void func(QQuickAttachedPropertyPropagator* self, const char* objectName)
///
void q_quickattachedpropertypropagator_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickattachedpropertypropagator.html#dtor.QQuickAttachedPropertyPropagator)
///
/// Delete this object from C++ memory.
///
/// @param self QQuickAttachedPropertyPropagator*
///
void q_quickattachedpropertypropagator_delete(void* self);

#endif
