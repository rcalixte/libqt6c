#pragma once
#ifndef QUICK_LIBQQUICKITEM_H
#define QUICK_LIBQQUICKITEM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktransform.html)

/// q_quicktransform_new constructs a new QQuickTransform object.
///
QQuickTransform* q_quicktransform_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktransform.html)

/// q_quicktransform_new2 constructs a new QQuickTransform object.
///
/// @param parent QObject*
///
QQuickTransform* q_quicktransform_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QQuickTransform*
///
const QMetaObject* q_quicktransform_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQuickTransform*
/// @param callback const QMetaObject* func()
///
void q_quicktransform_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QQuickTransform*
///
const QMetaObject* q_quicktransform_super_meta_object(void* self);

/// @param self QQuickTransform*
/// @param param1 const char*
///
void* q_quicktransform_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQuickTransform*
/// @param callback void* func(QQuickTransform* self, const char* param1)
///
void q_quicktransform_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQuickTransform*
/// @param param1 const char*
///
void* q_quicktransform_super_metacast(void* self, const char* param1);

/// @param self QQuickTransform*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quicktransform_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQuickTransform*
/// @param callback int32_t func(QQuickTransform* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_quicktransform_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQuickTransform*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quicktransform_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_quicktransform_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktransform.html#appendToItem)
///
/// @param self QQuickTransform*
/// @param param1 QQuickItem*
///
void q_quicktransform_append_to_item(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktransform.html#prependToItem)
///
/// @param self QQuickTransform*
/// @param param1 QQuickItem*
///
void q_quicktransform_prepend_to_item(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktransform.html#applyTo)
///
/// @param self QQuickTransform*
/// @param matrix QMatrix4x4*
///
void q_quicktransform_apply_to(void* self, void* matrix);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktransform.html#applyTo)
///
/// Allows for overriding the related default method
///
/// @param self QQuickTransform*
/// @param callback void func(QQuickTransform* self, QMatrix4x4* matrix)
///
void q_quicktransform_on_apply_to(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktransform.html#applyTo)
///
/// Base class method implementation
///
/// @param self QQuickTransform*
/// @param matrix QMatrix4x4*
///
void q_quicktransform_super_apply_to(void* self, void* matrix);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktransform.html#update)
///
/// @param self QQuickTransform*
///
void q_quicktransform_update(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktransform.html#update)
///
/// Allows for overriding the related default method
///
/// @param self QQuickTransform*
/// @param callback void func()
///
void q_quicktransform_on_update(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktransform.html#update)
///
/// Base class method implementation
///
/// @param self QQuickTransform*
///
void q_quicktransform_super_update(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_quicktransform_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_quicktransform_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickTransform*
///
const char* q_quicktransform_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQuickTransform*
/// @param name const char*
///
void q_quicktransform_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QQuickTransform*
///
bool q_quicktransform_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QQuickTransform*
///
bool q_quicktransform_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QQuickTransform*
///
bool q_quicktransform_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QQuickTransform*
///
bool q_quicktransform_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQuickTransform*
/// @param b bool
///
bool q_quicktransform_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QQuickTransform*
///
QThread* q_quicktransform_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQuickTransform*
/// @param thread QThread*
///
bool q_quicktransform_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickTransform*
/// @param interval int
///
int32_t q_quicktransform_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickTransform*
/// @param time int64_t of nanoseconds
///
int32_t q_quicktransform_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickTransform*
/// @param id int
///
void q_quicktransform_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickTransform*
/// @param id enum Qt__TimerId
///
void q_quicktransform_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QQuickTransform*
///
/// @return libqt_list of QObject*
///
libqt_list q_quicktransform_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQuickTransform*
/// @param parent QObject*
///
void q_quicktransform_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQuickTransform*
/// @param filterObj QObject*
///
void q_quicktransform_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQuickTransform*
/// @param obj QObject*
///
void q_quicktransform_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_quicktransform_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_quicktransform_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickTransform*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_quicktransform_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quicktransform_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_quicktransform_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickTransform*
///
bool q_quicktransform_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickTransform*
/// @param receiver QObject*
///
bool q_quicktransform_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_quicktransform_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QQuickTransform*
///
void q_quicktransform_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QQuickTransform*
///
void q_quicktransform_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQuickTransform*
/// @param name const char*
/// @param value QVariant*
///
bool q_quicktransform_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QQuickTransform*
/// @param name const char*
///
QVariant* q_quicktransform_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQuickTransform*
///
const char** q_quicktransform_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickTransform*
///
QBindingStorage* q_quicktransform_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickTransform*
///
const QBindingStorage* q_quicktransform_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickTransform*
///
void q_quicktransform_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickTransform*
/// @param callback void func(QQuickTransform* self)
///
void q_quicktransform_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QQuickTransform*
///
QObject* q_quicktransform_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QQuickTransform*
/// @param classname const char*
///
bool q_quicktransform_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQuickTransform*
///
void q_quicktransform_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickTransform*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_quicktransform_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickTransform*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_quicktransform_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_quicktransform_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_quicktransform_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickTransform*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quicktransform_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickTransform*
/// @param signal const char*
///
bool q_quicktransform_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickTransform*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_quicktransform_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickTransform*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quicktransform_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickTransform*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quicktransform_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickTransform*
/// @param param1 QObject*
///
void q_quicktransform_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickTransform*
/// @param callback void func(QQuickTransform* self, QObject* param1)
///
void q_quicktransform_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTransform*
/// @param event QEvent*
///
bool q_quicktransform_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTransform*
/// @param event QEvent*
///
bool q_quicktransform_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTransform*
/// @param callback bool func(QQuickTransform* self, QEvent* event)
///
void q_quicktransform_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTransform*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quicktransform_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTransform*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quicktransform_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTransform*
/// @param callback bool func(QQuickTransform* self, QObject* watched, QEvent* event)
///
void q_quicktransform_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTransform*
/// @param event QTimerEvent*
///
void q_quicktransform_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTransform*
/// @param event QTimerEvent*
///
void q_quicktransform_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTransform*
/// @param callback void func(QQuickTransform* self, QTimerEvent* event)
///
void q_quicktransform_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTransform*
/// @param event QChildEvent*
///
void q_quicktransform_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTransform*
/// @param event QChildEvent*
///
void q_quicktransform_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTransform*
/// @param callback void func(QQuickTransform* self, QChildEvent* event)
///
void q_quicktransform_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTransform*
/// @param event QEvent*
///
void q_quicktransform_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTransform*
/// @param event QEvent*
///
void q_quicktransform_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTransform*
/// @param callback void func(QQuickTransform* self, QEvent* event)
///
void q_quicktransform_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTransform*
/// @param signal QMetaMethod*
///
void q_quicktransform_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTransform*
/// @param signal QMetaMethod*
///
void q_quicktransform_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTransform*
/// @param callback void func(QQuickTransform* self, QMetaMethod* signal)
///
void q_quicktransform_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTransform*
/// @param signal QMetaMethod*
///
void q_quicktransform_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTransform*
/// @param signal QMetaMethod*
///
void q_quicktransform_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTransform*
/// @param callback void func(QQuickTransform* self, QMetaMethod* signal)
///
void q_quicktransform_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTransform*
///
QObject* q_quicktransform_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTransform*
///
QObject* q_quicktransform_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTransform*
/// @param callback QObject* func()
///
void q_quicktransform_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTransform*
///
int32_t q_quicktransform_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTransform*
///
int32_t q_quicktransform_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTransform*
/// @param callback int32_t func()
///
void q_quicktransform_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTransform*
/// @param signal const char*
///
int32_t q_quicktransform_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTransform*
/// @param signal const char*
///
int32_t q_quicktransform_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTransform*
/// @param callback int32_t func(QQuickTransform* self, const char* signal)
///
void q_quicktransform_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTransform*
/// @param signal QMetaMethod*
///
bool q_quicktransform_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTransform*
/// @param signal QMetaMethod*
///
bool q_quicktransform_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTransform*
/// @param callback bool func(QQuickTransform* self, QMetaMethod* signal)
///
void q_quicktransform_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQuickTransform*
/// @param callback void func(QQuickTransform* self, const char* objectName)
///
void q_quicktransform_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktransform.html#dtor.QQuickTransform)
///
/// Delete this object from C++ memory.
///
/// @param self QQuickTransform*
///
void q_quicktransform_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html)

/// q_quickitem_new constructs a new QQuickItem object.
///
QQuickItem* q_quickitem_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html)

/// q_quickitem_new2 constructs a new QQuickItem object.
///
/// @param parent QQuickItem*
///
QQuickItem* q_quickitem_new2(void* parent);

/// Upcasts to a QQmlParserStatus object
///
/// @param self QQuickItem*
///
QQmlParserStatus* q_quickitem_as_q_qml_parser_status(void* self);

/// Downcasts to a QQuickItem object
///
/// @param _qqmlparserstatus QQmlParserStatus*
///
QQuickItem* q_quickitem_from_q_qml_parser_status(void* _qqmlparserstatus);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QQuickItem*
///
const QMetaObject* q_quickitem_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback const QMetaObject* func()
///
void q_quickitem_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QQuickItem*
///
const QMetaObject* q_quickitem_super_meta_object(void* self);

/// @param self QQuickItem*
/// @param param1 const char*
///
void* q_quickitem_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void* func(QQuickItem* self, const char* param1)
///
void q_quickitem_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQuickItem*
/// @param param1 const char*
///
void* q_quickitem_super_metacast(void* self, const char* param1);

/// @param self QQuickItem*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickitem_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback int32_t func(QQuickItem* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_quickitem_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQuickItem*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickitem_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_quickitem_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#window)
///
/// @param self QQuickItem*
///
QQuickWindow* q_quickitem_window(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#parentItem)
///
/// @param self QQuickItem*
///
QQuickItem* q_quickitem_parent_item(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setParentItem)
///
/// @param self QQuickItem*
/// @param parent QQuickItem*
///
void q_quickitem_set_parent_item(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#stackBefore)
///
/// @param self QQuickItem*
/// @param param1 QQuickItem*
///
void q_quickitem_stack_before(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#stackAfter)
///
/// @param self QQuickItem*
/// @param param1 QQuickItem*
///
void q_quickitem_stack_after(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenRect)
///
/// @param self QQuickItem*
///
QRectF* q_quickitem_children_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childItems)
///
/// @param self QQuickItem*
///
/// @return libqt_list of QQuickItem*
///
libqt_list q_quickitem_child_items(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clip)
///
/// @param self QQuickItem*
///
bool q_quickitem_clip(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setClip)
///
/// @param self QQuickItem*
/// @param clip bool
///
void q_quickitem_set_clip(void* self, bool clip);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#state)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickItem*
///
const char* q_quickitem_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setState)
///
/// @param self QQuickItem*
/// @param state const char*
///
void q_quickitem_set_state(void* self, const char* state);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#baselineOffset)
///
/// @param self QQuickItem*
///
double q_quickitem_baseline_offset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setBaselineOffset)
///
/// @param self QQuickItem*
/// @param baselineOffset double
///
void q_quickitem_set_baseline_offset(void* self, double baselineOffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#x)
///
/// @param self QQuickItem*
///
double q_quickitem_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#y)
///
/// @param self QQuickItem*
///
double q_quickitem_y(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#position)
///
/// @param self QQuickItem*
///
QPointF* q_quickitem_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setX)
///
/// @param self QQuickItem*
/// @param x double
///
void q_quickitem_set_x(void* self, double x);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setY)
///
/// @param self QQuickItem*
/// @param y double
///
void q_quickitem_set_y(void* self, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setPosition)
///
/// @param self QQuickItem*
/// @param position QPointF*
///
void q_quickitem_set_position(void* self, void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#width)
///
/// @param self QQuickItem*
///
double q_quickitem_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setWidth)
///
/// @param self QQuickItem*
/// @param width double
///
void q_quickitem_set_width(void* self, double width);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#resetWidth)
///
/// @param self QQuickItem*
///
void q_quickitem_reset_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitWidth)
///
/// @param self QQuickItem*
/// @param implicitWidth double
///
void q_quickitem_set_implicit_width(void* self, double implicitWidth);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitWidth)
///
/// @param self QQuickItem*
///
double q_quickitem_implicit_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#height)
///
/// @param self QQuickItem*
///
double q_quickitem_height(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setHeight)
///
/// @param self QQuickItem*
/// @param height double
///
void q_quickitem_set_height(void* self, double height);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#resetHeight)
///
/// @param self QQuickItem*
///
void q_quickitem_reset_height(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitHeight)
///
/// @param self QQuickItem*
/// @param implicitHeight double
///
void q_quickitem_set_implicit_height(void* self, double implicitHeight);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitHeight)
///
/// @param self QQuickItem*
///
double q_quickitem_implicit_height(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#size)
///
/// @param self QQuickItem*
///
QSizeF* q_quickitem_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setSize)
///
/// @param self QQuickItem*
/// @param size QSizeF*
///
void q_quickitem_set_size(void* self, void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#transformOrigin)
///
/// @param self QQuickItem*
///
/// @return enum QQuickItem__TransformOrigin
///
int32_t q_quickitem_transform_origin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setTransformOrigin)
///
/// @param self QQuickItem*
/// @param transformOrigin enum QQuickItem__TransformOrigin
///
void q_quickitem_set_transform_origin(void* self, int32_t transformOrigin);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#transformOriginPoint)
///
/// @param self QQuickItem*
///
QPointF* q_quickitem_transform_origin_point(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setTransformOriginPoint)
///
/// @param self QQuickItem*
/// @param transformOriginPoint QPointF*
///
void q_quickitem_set_transform_origin_point(void* self, void* transformOriginPoint);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#z)
///
/// @param self QQuickItem*
///
double q_quickitem_z(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setZ)
///
/// @param self QQuickItem*
/// @param z double
///
void q_quickitem_set_z(void* self, double z);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#rotation)
///
/// @param self QQuickItem*
///
double q_quickitem_rotation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setRotation)
///
/// @param self QQuickItem*
/// @param rotation double
///
void q_quickitem_set_rotation(void* self, double rotation);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#scale)
///
/// @param self QQuickItem*
///
double q_quickitem_scale(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setScale)
///
/// @param self QQuickItem*
/// @param scale double
///
void q_quickitem_set_scale(void* self, double scale);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#opacity)
///
/// @param self QQuickItem*
///
double q_quickitem_opacity(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setOpacity)
///
/// @param self QQuickItem*
/// @param opacity double
///
void q_quickitem_set_opacity(void* self, double opacity);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isVisible)
///
/// @param self QQuickItem*
///
bool q_quickitem_is_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setVisible)
///
/// @param self QQuickItem*
/// @param visible bool
///
void q_quickitem_set_visible(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isEnabled)
///
/// @param self QQuickItem*
///
bool q_quickitem_is_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setEnabled)
///
/// @param self QQuickItem*
/// @param enabled bool
///
void q_quickitem_set_enabled(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#smooth)
///
/// @param self QQuickItem*
///
bool q_quickitem_smooth(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setSmooth)
///
/// @param self QQuickItem*
/// @param smooth bool
///
void q_quickitem_set_smooth(void* self, bool smooth);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusOnTab)
///
/// @param self QQuickItem*
///
bool q_quickitem_active_focus_on_tab(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setActiveFocusOnTab)
///
/// @param self QQuickItem*
/// @param activeFocusOnTab bool
///
void q_quickitem_set_active_focus_on_tab(void* self, bool activeFocusOnTab);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#antialiasing)
///
/// @param self QQuickItem*
///
bool q_quickitem_antialiasing(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setAntialiasing)
///
/// @param self QQuickItem*
/// @param antialiasing bool
///
void q_quickitem_set_antialiasing(void* self, bool antialiasing);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#resetAntialiasing)
///
/// @param self QQuickItem*
///
void q_quickitem_reset_antialiasing(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#flags)
///
/// @param self QQuickItem*
///
/// @return flag of enum QQuickItem__Flag
///
int32_t q_quickitem_flags(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFlag)
///
/// @param self QQuickItem*
/// @param flag enum QQuickItem__Flag
///
void q_quickitem_set_flag(void* self, int32_t flag);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFlags)
///
/// @param self QQuickItem*
/// @param flags flag of enum QQuickItem__Flag
///
void q_quickitem_set_flags(void* self, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#boundingRect)
///
/// @param self QQuickItem*
///
QRectF* q_quickitem_bounding_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#boundingRect)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback QRectF* func()
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quickitem_on_bounding_rect(void* self, QRectF* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#boundingRect)
///
/// Base class method implementation
///
/// @param self QQuickItem*
///
QRectF* q_quickitem_super_bounding_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipRect)
///
/// @param self QQuickItem*
///
QRectF* q_quickitem_clip_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipRect)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback QRectF* func()
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quickitem_on_clip_rect(void* self, QRectF* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipRect)
///
/// Base class method implementation
///
/// @param self QQuickItem*
///
QRectF* q_quickitem_super_clip_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#viewportItem)
///
/// @param self QQuickItem*
///
QQuickItem* q_quickitem_viewport_item(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hasActiveFocus)
///
/// @param self QQuickItem*
///
bool q_quickitem_has_active_focus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hasFocus)
///
/// @param self QQuickItem*
///
bool q_quickitem_has_focus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFocus)
///
/// @param self QQuickItem*
/// @param focus bool
///
void q_quickitem_set_focus(void* self, bool focus);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFocus)
///
/// @param self QQuickItem*
/// @param focus bool
/// @param reason enum Qt__FocusReason
///
void q_quickitem_set_focus2(void* self, bool focus, int32_t reason);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isFocusScope)
///
/// @param self QQuickItem*
///
bool q_quickitem_is_focus_scope(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#scopedFocusItem)
///
/// @param self QQuickItem*
///
QQuickItem* q_quickitem_scoped_focus_item(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusPolicy)
///
/// @param self QQuickItem*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_quickitem_focus_policy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFocusPolicy)
///
/// @param self QQuickItem*
/// @param policy enum Qt__FocusPolicy
///
void q_quickitem_set_focus_policy(void* self, int32_t policy);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isAncestorOf)
///
/// @param self QQuickItem*
/// @param child QQuickItem*
///
bool q_quickitem_is_ancestor_of(void* self, void* child);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#acceptedMouseButtons)
///
/// @param self QQuickItem*
///
/// @return flag of enum Qt__MouseButton
///
int32_t q_quickitem_accepted_mouse_buttons(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setAcceptedMouseButtons)
///
/// @param self QQuickItem*
/// @param buttons flag of enum Qt__MouseButton
///
void q_quickitem_set_accepted_mouse_buttons(void* self, int32_t buttons);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#acceptHoverEvents)
///
/// @param self QQuickItem*
///
bool q_quickitem_accept_hover_events(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setAcceptHoverEvents)
///
/// @param self QQuickItem*
/// @param enabled bool
///
void q_quickitem_set_accept_hover_events(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#acceptTouchEvents)
///
/// @param self QQuickItem*
///
bool q_quickitem_accept_touch_events(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setAcceptTouchEvents)
///
/// @param self QQuickItem*
/// @param accept bool
///
void q_quickitem_set_accept_touch_events(void* self, bool accept);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#cursor)
///
/// @param self QQuickItem*
///
QCursor* q_quickitem_cursor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setCursor)
///
/// @param self QQuickItem*
/// @param cursor QCursor*
///
void q_quickitem_set_cursor(void* self, void* cursor);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#unsetCursor)
///
/// @param self QQuickItem*
///
void q_quickitem_unset_cursor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isUnderMouse)
///
/// @param self QQuickItem*
///
bool q_quickitem_is_under_mouse(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#grabMouse)
///
/// @param self QQuickItem*
///
void q_quickitem_grab_mouse(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#ungrabMouse)
///
/// @param self QQuickItem*
///
void q_quickitem_ungrab_mouse(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keepMouseGrab)
///
/// @param self QQuickItem*
///
bool q_quickitem_keep_mouse_grab(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setKeepMouseGrab)
///
/// @param self QQuickItem*
/// @param keepMouseGrab bool
///
void q_quickitem_set_keep_mouse_grab(void* self, bool keepMouseGrab);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#filtersChildMouseEvents)
///
/// @param self QQuickItem*
///
bool q_quickitem_filters_child_mouse_events(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFiltersChildMouseEvents)
///
/// @param self QQuickItem*
/// @param filter bool
///
void q_quickitem_set_filters_child_mouse_events(void* self, bool filter);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#grabTouchPoints)
///
/// @param self QQuickItem*
/// @param ids libqt_list of int
///
void q_quickitem_grab_touch_points(void* self, libqt_list ids);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#ungrabTouchPoints)
///
/// @param self QQuickItem*
///
void q_quickitem_ungrab_touch_points(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keepTouchGrab)
///
/// @param self QQuickItem*
///
bool q_quickitem_keep_touch_grab(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setKeepTouchGrab)
///
/// @param self QQuickItem*
/// @param keepTouchGrab bool
///
void q_quickitem_set_keep_touch_grab(void* self, bool keepTouchGrab);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#grabToImage)
///
/// @param self QQuickItem*
/// @param callback QJSValue*
///
bool q_quickitem_grab_to_image(void* self, void* callback);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#contains)
///
/// @param self QQuickItem*
/// @param point QPointF*
///
bool q_quickitem_contains(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#contains)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback bool func(QQuickItem* self, QPointF* point)
///
void q_quickitem_on_contains(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#contains)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param point QPointF*
///
bool q_quickitem_super_contains(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#containmentMask)
///
/// @param self QQuickItem*
///
QObject* q_quickitem_containment_mask(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setContainmentMask)
///
/// @param self QQuickItem*
/// @param mask QObject*
///
void q_quickitem_set_containment_mask(void* self, void* mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#itemTransform)
///
/// @param self QQuickItem*
/// @param param1 QQuickItem*
/// @param param2 bool*
///
QTransform* q_quickitem_item_transform(void* self, void* param1, bool* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToScene)
///
/// @param self QQuickItem*
/// @param point QPointF*
///
QPointF* q_quickitem_map_to_scene(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapRectToItem)
///
/// @param self QQuickItem*
/// @param item QQuickItem*
/// @param rect QRectF*
///
QRectF* q_quickitem_map_rect_to_item(void* self, void* item, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapRectToScene)
///
/// @param self QQuickItem*
/// @param rect QRectF*
///
QRectF* q_quickitem_map_rect_to_scene(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromScene)
///
/// @param self QQuickItem*
/// @param point QPointF*
///
QPointF* q_quickitem_map_from_scene(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapRectFromItem)
///
/// @param self QQuickItem*
/// @param item QQuickItem*
/// @param rect QRectF*
///
QRectF* q_quickitem_map_rect_from_item(void* self, void* item, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapRectFromScene)
///
/// @param self QQuickItem*
/// @param rect QRectF*
///
QRectF* q_quickitem_map_rect_from_scene(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#polish)
///
/// @param self QQuickItem*
///
void q_quickitem_polish(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromItem)
///
/// @param self QQuickItem*
/// @param item QQuickItem*
/// @param point QPointF*
///
QPointF* q_quickitem_map_from_item2(void* self, void* item, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromItem)
///
/// @param self QQuickItem*
/// @param item QQuickItem*
/// @param x double
/// @param y double
///
QPointF* q_quickitem_map_from_item3(void* self, void* item, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromItem)
///
/// @param self QQuickItem*
/// @param item QQuickItem*
/// @param rect QRectF*
///
QRectF* q_quickitem_map_from_item4(void* self, void* item, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromItem)
///
/// @param self QQuickItem*
/// @param item QQuickItem*
/// @param x double
/// @param y double
/// @param width double
/// @param height double
///
QRectF* q_quickitem_map_from_item5(void* self, void* item, double x, double y, double width, double height);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToItem)
///
/// @param self QQuickItem*
/// @param item QQuickItem*
/// @param point QPointF*
///
QPointF* q_quickitem_map_to_item2(void* self, void* item, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToItem)
///
/// @param self QQuickItem*
/// @param item QQuickItem*
/// @param x double
/// @param y double
///
QPointF* q_quickitem_map_to_item3(void* self, void* item, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToItem)
///
/// @param self QQuickItem*
/// @param item QQuickItem*
/// @param rect QRectF*
///
QRectF* q_quickitem_map_to_item4(void* self, void* item, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToItem)
///
/// @param self QQuickItem*
/// @param item QQuickItem*
/// @param x double
/// @param y double
/// @param width double
/// @param height double
///
QRectF* q_quickitem_map_to_item5(void* self, void* item, double x, double y, double width, double height);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromGlobal)
///
/// @param self QQuickItem*
/// @param x double
/// @param y double
///
QPointF* q_quickitem_map_from_global2(void* self, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromGlobal)
///
/// @param self QQuickItem*
/// @param point QPointF*
///
QPointF* q_quickitem_map_from_global3(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToGlobal)
///
/// @param self QQuickItem*
/// @param x double
/// @param y double
///
QPointF* q_quickitem_map_to_global2(void* self, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToGlobal)
///
/// @param self QQuickItem*
/// @param point QPointF*
///
QPointF* q_quickitem_map_to_global3(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#forceActiveFocus)
///
/// @param self QQuickItem*
///
void q_quickitem_force_active_focus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#forceActiveFocus)
///
/// @param self QQuickItem*
/// @param reason enum Qt__FocusReason
///
void q_quickitem_force_active_focus2(void* self, int32_t reason);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#nextItemInFocusChain)
///
/// @param self QQuickItem*
///
QQuickItem* q_quickitem_next_item_in_focus_chain(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childAt)
///
/// @param self QQuickItem*
/// @param x double
/// @param y double
///
QQuickItem* q_quickitem_child_at(void* self, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#ensurePolished)
///
/// @param self QQuickItem*
///
void q_quickitem_ensure_polished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dumpItemTree)
///
/// @param self QQuickItem*
///
void q_quickitem_dump_item_tree(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodQuery)
///
/// @param self QQuickItem*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_quickitem_input_method_query(void* self, int32_t query);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodQuery)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback QVariant* func(QQuickItem* self, enum Qt__InputMethodQuery query)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quickitem_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodQuery)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_quickitem_super_input_method_query(void* self, int32_t query);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isTextureProvider)
///
/// @param self QQuickItem*
///
bool q_quickitem_is_texture_provider(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isTextureProvider)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback bool func()
///
void q_quickitem_on_is_texture_provider(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isTextureProvider)
///
/// Base class method implementation
///
/// @param self QQuickItem*
///
bool q_quickitem_super_is_texture_provider(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#textureProvider)
///
/// @param self QQuickItem*
///
QSGTextureProvider* q_quickitem_texture_provider(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#textureProvider)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback QSGTextureProvider* func()
///
void q_quickitem_on_texture_provider(void* self, QSGTextureProvider* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#textureProvider)
///
/// Base class method implementation
///
/// @param self QQuickItem*
///
QSGTextureProvider* q_quickitem_super_texture_provider(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#update)
///
/// @param self QQuickItem*
///
void q_quickitem_update(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenRectChanged)
///
/// @param self QQuickItem*
/// @param param1 QRectF*
///
void q_quickitem_children_rect_changed(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenRectChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QRectF* param1)
///
void q_quickitem_on_children_rect_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#baselineOffsetChanged)
///
/// @param self QQuickItem*
/// @param param1 double
///
void q_quickitem_baseline_offset_changed(void* self, double param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#baselineOffsetChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, double param1)
///
void q_quickitem_on_baseline_offset_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#stateChanged)
///
/// @param self QQuickItem*
/// @param param1 const char*
///
void q_quickitem_state_changed(void* self, const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#stateChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, const char* param1)
///
void q_quickitem_on_state_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusChanged)
///
/// @param self QQuickItem*
/// @param param1 bool
///
void q_quickitem_focus_changed(void* self, bool param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, bool param1)
///
void q_quickitem_on_focus_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusChanged)
///
/// @param self QQuickItem*
/// @param param1 bool
///
void q_quickitem_active_focus_changed(void* self, bool param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, bool param1)
///
void q_quickitem_on_active_focus_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusPolicyChanged)
///
/// @param self QQuickItem*
/// @param param1 enum Qt__FocusPolicy
///
void q_quickitem_focus_policy_changed(void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusPolicyChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, enum Qt__FocusPolicy param1)
///
void q_quickitem_on_focus_policy_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusOnTabChanged)
///
/// @param self QQuickItem*
/// @param param1 bool
///
void q_quickitem_active_focus_on_tab_changed(void* self, bool param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusOnTabChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, bool param1)
///
void q_quickitem_on_active_focus_on_tab_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#parentChanged)
///
/// @param self QQuickItem*
/// @param param1 QQuickItem*
///
void q_quickitem_parent_changed(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#parentChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QQuickItem* param1)
///
void q_quickitem_on_parent_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#transformOriginChanged)
///
/// @param self QQuickItem*
/// @param param1 enum QQuickItem__TransformOrigin
///
void q_quickitem_transform_origin_changed(void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#transformOriginChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, enum QQuickItem__TransformOrigin param1)
///
void q_quickitem_on_transform_origin_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#smoothChanged)
///
/// @param self QQuickItem*
/// @param param1 bool
///
void q_quickitem_smooth_changed(void* self, bool param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#smoothChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, bool param1)
///
void q_quickitem_on_smooth_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#antialiasingChanged)
///
/// @param self QQuickItem*
/// @param param1 bool
///
void q_quickitem_antialiasing_changed(void* self, bool param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#antialiasingChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, bool param1)
///
void q_quickitem_on_antialiasing_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipChanged)
///
/// @param self QQuickItem*
/// @param param1 bool
///
void q_quickitem_clip_changed(void* self, bool param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, bool param1)
///
void q_quickitem_on_clip_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#windowChanged)
///
/// @param self QQuickItem*
/// @param window QQuickWindow*
///
void q_quickitem_window_changed(void* self, void* window);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#windowChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QQuickWindow* window)
///
void q_quickitem_on_window_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenChanged)
///
/// @param self QQuickItem*
///
void q_quickitem_children_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self)
///
void q_quickitem_on_children_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#opacityChanged)
///
/// @param self QQuickItem*
///
void q_quickitem_opacity_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#opacityChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self)
///
void q_quickitem_on_opacity_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#enabledChanged)
///
/// @param self QQuickItem*
///
void q_quickitem_enabled_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#enabledChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self)
///
void q_quickitem_on_enabled_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#visibleChanged)
///
/// @param self QQuickItem*
///
void q_quickitem_visible_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#visibleChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self)
///
void q_quickitem_on_visible_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#visibleChildrenChanged)
///
/// @param self QQuickItem*
///
void q_quickitem_visible_children_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#visibleChildrenChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self)
///
void q_quickitem_on_visible_children_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#rotationChanged)
///
/// @param self QQuickItem*
///
void q_quickitem_rotation_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#rotationChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self)
///
void q_quickitem_on_rotation_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#scaleChanged)
///
/// @param self QQuickItem*
///
void q_quickitem_scale_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#scaleChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self)
///
void q_quickitem_on_scale_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#xChanged)
///
/// @param self QQuickItem*
///
void q_quickitem_x_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#xChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self)
///
void q_quickitem_on_x_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#yChanged)
///
/// @param self QQuickItem*
///
void q_quickitem_y_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#yChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self)
///
void q_quickitem_on_y_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthChanged)
///
/// @param self QQuickItem*
///
void q_quickitem_width_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self)
///
void q_quickitem_on_width_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightChanged)
///
/// @param self QQuickItem*
///
void q_quickitem_height_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self)
///
void q_quickitem_on_height_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#zChanged)
///
/// @param self QQuickItem*
///
void q_quickitem_z_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#zChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self)
///
void q_quickitem_on_z_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitWidthChanged)
///
/// @param self QQuickItem*
///
void q_quickitem_implicit_width_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitWidthChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self)
///
void q_quickitem_on_implicit_width_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitHeightChanged)
///
/// @param self QQuickItem*
///
void q_quickitem_implicit_height_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitHeightChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self)
///
void q_quickitem_on_implicit_height_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#containmentMaskChanged)
///
/// @param self QQuickItem*
///
void q_quickitem_containment_mask_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#containmentMaskChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self)
///
void q_quickitem_on_containment_mask_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#paletteChanged)
///
/// @param self QQuickItem*
///
void q_quickitem_palette_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#paletteChanged)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self)
///
void q_quickitem_on_palette_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#paletteCreated)
///
/// @param self QQuickItem*
///
void q_quickitem_palette_created(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#paletteCreated)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self)
///
void q_quickitem_on_palette_created(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#event)
///
/// @param self QQuickItem*
/// @param param1 QEvent*
///
bool q_quickitem_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback bool func(QQuickItem* self, QEvent* param1)
///
void q_quickitem_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#event)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param param1 QEvent*
///
bool q_quickitem_super_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isComponentComplete)
///
/// @param self QQuickItem*
///
bool q_quickitem_is_component_complete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isComponentComplete)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback bool func()
///
void q_quickitem_on_is_component_complete(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isComponentComplete)
///
/// Base class method implementation
///
/// @param self QQuickItem*
///
bool q_quickitem_super_is_component_complete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#itemChange)
///
/// @param self QQuickItem*
/// @param param1 enum QQuickItem__ItemChange
/// @param param2 QQuickItem__ItemChangeData*
///
void q_quickitem_item_change(void* self, int32_t param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#itemChange)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, enum QQuickItem__ItemChange param1, QQuickItem__ItemChangeData* param2)
///
void q_quickitem_on_item_change(void* self, void (*callback)(void*, int32_t, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#itemChange)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param param1 enum QQuickItem__ItemChange
/// @param param2 QQuickItem__ItemChangeData*
///
void q_quickitem_super_item_change(void* self, int32_t param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#geometryChange)
///
/// @param self QQuickItem*
/// @param newGeometry QRectF*
/// @param oldGeometry QRectF*
///
void q_quickitem_geometry_change(void* self, void* newGeometry, void* oldGeometry);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#geometryChange)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QRectF* newGeometry, QRectF* oldGeometry)
///
void q_quickitem_on_geometry_change(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#geometryChange)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param newGeometry QRectF*
/// @param oldGeometry QRectF*
///
void q_quickitem_super_geometry_change(void* self, void* newGeometry, void* oldGeometry);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updateInputMethod)
///
/// @param self QQuickItem*
///
void q_quickitem_update_input_method(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updateInputMethod)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func()
///
void q_quickitem_on_update_input_method(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updateInputMethod)
///
/// Base class method implementation
///
/// @param self QQuickItem*
///
void q_quickitem_super_update_input_method(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthValid)
///
/// @param self QQuickItem*
///
bool q_quickitem_width_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthValid)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback bool func()
///
void q_quickitem_on_width_valid(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthValid)
///
/// Base class method implementation
///
/// @param self QQuickItem*
///
bool q_quickitem_super_width_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightValid)
///
/// @param self QQuickItem*
///
bool q_quickitem_height_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightValid)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback bool func()
///
void q_quickitem_on_height_valid(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightValid)
///
/// Base class method implementation
///
/// @param self QQuickItem*
///
bool q_quickitem_super_height_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitSize)
///
/// @param self QQuickItem*
/// @param param1 double
/// @param param2 double
///
void q_quickitem_set_implicit_size(void* self, double param1, double param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitSize)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, double param1, double param2)
///
void q_quickitem_on_set_implicit_size(void* self, void (*callback)(void*, double, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitSize)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param param1 double
/// @param param2 double
///
void q_quickitem_super_set_implicit_size(void* self, double param1, double param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#classBegin)
///
/// @param self QQuickItem*
///
void q_quickitem_class_begin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#classBegin)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func()
///
void q_quickitem_on_class_begin(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#classBegin)
///
/// Base class method implementation
///
/// @param self QQuickItem*
///
void q_quickitem_super_class_begin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#componentComplete)
///
/// @param self QQuickItem*
///
void q_quickitem_component_complete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#componentComplete)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func()
///
void q_quickitem_on_component_complete(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#componentComplete)
///
/// Base class method implementation
///
/// @param self QQuickItem*
///
void q_quickitem_super_component_complete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyPressEvent)
///
/// @param self QQuickItem*
/// @param event QKeyEvent*
///
void q_quickitem_key_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QKeyEvent* event)
///
void q_quickitem_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param event QKeyEvent*
///
void q_quickitem_super_key_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyReleaseEvent)
///
/// @param self QQuickItem*
/// @param event QKeyEvent*
///
void q_quickitem_key_release_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QKeyEvent* event)
///
void q_quickitem_on_key_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param event QKeyEvent*
///
void q_quickitem_super_key_release_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodEvent)
///
/// @param self QQuickItem*
/// @param param1 QInputMethodEvent*
///
void q_quickitem_input_method_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QInputMethodEvent* param1)
///
void q_quickitem_on_input_method_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodEvent)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param param1 QInputMethodEvent*
///
void q_quickitem_super_input_method_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusInEvent)
///
/// @param self QQuickItem*
/// @param param1 QFocusEvent*
///
void q_quickitem_focus_in_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QFocusEvent* param1)
///
void q_quickitem_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param param1 QFocusEvent*
///
void q_quickitem_super_focus_in_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusOutEvent)
///
/// @param self QQuickItem*
/// @param param1 QFocusEvent*
///
void q_quickitem_focus_out_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QFocusEvent* param1)
///
void q_quickitem_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param param1 QFocusEvent*
///
void q_quickitem_super_focus_out_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mousePressEvent)
///
/// @param self QQuickItem*
/// @param event QMouseEvent*
///
void q_quickitem_mouse_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QMouseEvent* event)
///
void q_quickitem_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param event QMouseEvent*
///
void q_quickitem_super_mouse_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseMoveEvent)
///
/// @param self QQuickItem*
/// @param event QMouseEvent*
///
void q_quickitem_mouse_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QMouseEvent* event)
///
void q_quickitem_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param event QMouseEvent*
///
void q_quickitem_super_mouse_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseReleaseEvent)
///
/// @param self QQuickItem*
/// @param event QMouseEvent*
///
void q_quickitem_mouse_release_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QMouseEvent* event)
///
void q_quickitem_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param event QMouseEvent*
///
void q_quickitem_super_mouse_release_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseDoubleClickEvent)
///
/// @param self QQuickItem*
/// @param event QMouseEvent*
///
void q_quickitem_mouse_double_click_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QMouseEvent* event)
///
void q_quickitem_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param event QMouseEvent*
///
void q_quickitem_super_mouse_double_click_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseUngrabEvent)
///
/// @param self QQuickItem*
///
void q_quickitem_mouse_ungrab_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseUngrabEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func()
///
void q_quickitem_on_mouse_ungrab_event(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseUngrabEvent)
///
/// Base class method implementation
///
/// @param self QQuickItem*
///
void q_quickitem_super_mouse_ungrab_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchUngrabEvent)
///
/// @param self QQuickItem*
///
void q_quickitem_touch_ungrab_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchUngrabEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func()
///
void q_quickitem_on_touch_ungrab_event(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchUngrabEvent)
///
/// Base class method implementation
///
/// @param self QQuickItem*
///
void q_quickitem_super_touch_ungrab_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#wheelEvent)
///
/// @param self QQuickItem*
/// @param event QWheelEvent*
///
void q_quickitem_wheel_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QWheelEvent* event)
///
void q_quickitem_on_wheel_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#wheelEvent)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param event QWheelEvent*
///
void q_quickitem_super_wheel_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchEvent)
///
/// @param self QQuickItem*
/// @param event QTouchEvent*
///
void q_quickitem_touch_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QTouchEvent* event)
///
void q_quickitem_on_touch_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchEvent)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param event QTouchEvent*
///
void q_quickitem_super_touch_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverEnterEvent)
///
/// @param self QQuickItem*
/// @param event QHoverEvent*
///
void q_quickitem_hover_enter_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverEnterEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QHoverEvent* event)
///
void q_quickitem_on_hover_enter_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverEnterEvent)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param event QHoverEvent*
///
void q_quickitem_super_hover_enter_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverMoveEvent)
///
/// @param self QQuickItem*
/// @param event QHoverEvent*
///
void q_quickitem_hover_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QHoverEvent* event)
///
void q_quickitem_on_hover_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverMoveEvent)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param event QHoverEvent*
///
void q_quickitem_super_hover_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverLeaveEvent)
///
/// @param self QQuickItem*
/// @param event QHoverEvent*
///
void q_quickitem_hover_leave_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverLeaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QHoverEvent* event)
///
void q_quickitem_on_hover_leave_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverLeaveEvent)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param event QHoverEvent*
///
void q_quickitem_super_hover_leave_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragEnterEvent)
///
/// @param self QQuickItem*
/// @param param1 QDragEnterEvent*
///
void q_quickitem_drag_enter_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragEnterEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QDragEnterEvent* param1)
///
void q_quickitem_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragEnterEvent)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param param1 QDragEnterEvent*
///
void q_quickitem_super_drag_enter_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragMoveEvent)
///
/// @param self QQuickItem*
/// @param param1 QDragMoveEvent*
///
void q_quickitem_drag_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QDragMoveEvent* param1)
///
void q_quickitem_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragMoveEvent)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param param1 QDragMoveEvent*
///
void q_quickitem_super_drag_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragLeaveEvent)
///
/// @param self QQuickItem*
/// @param param1 QDragLeaveEvent*
///
void q_quickitem_drag_leave_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QDragLeaveEvent* param1)
///
void q_quickitem_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param param1 QDragLeaveEvent*
///
void q_quickitem_super_drag_leave_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dropEvent)
///
/// @param self QQuickItem*
/// @param param1 QDropEvent*
///
void q_quickitem_drop_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QDropEvent* param1)
///
void q_quickitem_on_drop_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dropEvent)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param param1 QDropEvent*
///
void q_quickitem_super_drop_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childMouseEventFilter)
///
/// @param self QQuickItem*
/// @param param1 QQuickItem*
/// @param param2 QEvent*
///
bool q_quickitem_child_mouse_event_filter(void* self, void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childMouseEventFilter)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback bool func(QQuickItem* self, QQuickItem* param1, QEvent* param2)
///
void q_quickitem_on_child_mouse_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childMouseEventFilter)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param param1 QQuickItem*
/// @param param2 QEvent*
///
bool q_quickitem_super_child_mouse_event_filter(void* self, void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updatePaintNode)
///
/// @param self QQuickItem*
/// @param param1 QSGNode*
/// @param param2 QQuickItem__UpdatePaintNodeData*
///
QSGNode* q_quickitem_update_paint_node(void* self, void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updatePaintNode)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback QSGNode* func(QQuickItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2)
///
void q_quickitem_on_update_paint_node(void* self, QSGNode* (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updatePaintNode)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param param1 QSGNode*
/// @param param2 QQuickItem__UpdatePaintNodeData*
///
QSGNode* q_quickitem_super_update_paint_node(void* self, void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#releaseResources)
///
/// @param self QQuickItem*
///
void q_quickitem_release_resources(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#releaseResources)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func()
///
void q_quickitem_on_release_resources(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#releaseResources)
///
/// Base class method implementation
///
/// @param self QQuickItem*
///
void q_quickitem_super_release_resources(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updatePolish)
///
/// @param self QQuickItem*
///
void q_quickitem_update_polish(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updatePolish)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func()
///
void q_quickitem_on_update_polish(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updatePolish)
///
/// Base class method implementation
///
/// @param self QQuickItem*
///
void q_quickitem_super_update_polish(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_quickitem_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_quickitem_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFlag)
///
/// @param self QQuickItem*
/// @param flag enum QQuickItem__Flag
/// @param enabled bool
///
void q_quickitem_set_flag2(void* self, int32_t flag, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#grabToImage)
///
/// @param self QQuickItem*
/// @param callback QJSValue*
/// @param targetSize QSize*
///
bool q_quickitem_grab_to_image22(void* self, void* callback, void* targetSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#nextItemInFocusChain)
///
/// @param self QQuickItem*
/// @param forward bool
///
QQuickItem* q_quickitem_next_item_in_focus_chain1(void* self, bool forward);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updateInputMethod)
///
/// @param self QQuickItem*
/// @param queries flag of enum Qt__InputMethodQuery
///
void q_quickitem_update_input_method1(void* self, int32_t queries);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updateInputMethod)
///
/// Allows for overriding the related default method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, flag of enum Qt__InputMethodQuery queries)
///
void q_quickitem_on_update_input_method1(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updateInputMethod)
///
/// Base class method implementation
///
/// @param self QQuickItem*
/// @param queries flag of enum Qt__InputMethodQuery
///
void q_quickitem_super_update_input_method1(void* self, int32_t queries);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickItem*
///
const char* q_quickitem_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQuickItem*
/// @param name const char*
///
void q_quickitem_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QQuickItem*
///
bool q_quickitem_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QQuickItem*
///
bool q_quickitem_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QQuickItem*
///
bool q_quickitem_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QQuickItem*
///
bool q_quickitem_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQuickItem*
/// @param b bool
///
bool q_quickitem_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QQuickItem*
///
QThread* q_quickitem_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQuickItem*
/// @param thread QThread*
///
bool q_quickitem_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickItem*
/// @param interval int
///
int32_t q_quickitem_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickItem*
/// @param time int64_t of nanoseconds
///
int32_t q_quickitem_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickItem*
/// @param id int
///
void q_quickitem_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickItem*
/// @param id enum Qt__TimerId
///
void q_quickitem_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QQuickItem*
///
/// @return libqt_list of QObject*
///
libqt_list q_quickitem_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQuickItem*
/// @param parent QObject*
///
void q_quickitem_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQuickItem*
/// @param filterObj QObject*
///
void q_quickitem_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQuickItem*
/// @param obj QObject*
///
void q_quickitem_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_quickitem_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_quickitem_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickItem*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_quickitem_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickitem_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_quickitem_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickItem*
///
bool q_quickitem_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickItem*
/// @param receiver QObject*
///
bool q_quickitem_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_quickitem_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QQuickItem*
///
void q_quickitem_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QQuickItem*
///
void q_quickitem_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQuickItem*
/// @param name const char*
/// @param value QVariant*
///
bool q_quickitem_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QQuickItem*
/// @param name const char*
///
QVariant* q_quickitem_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQuickItem*
///
const char** q_quickitem_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickItem*
///
QBindingStorage* q_quickitem_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickItem*
///
const QBindingStorage* q_quickitem_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickItem*
///
void q_quickitem_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self)
///
void q_quickitem_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QQuickItem*
///
QObject* q_quickitem_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QQuickItem*
/// @param classname const char*
///
bool q_quickitem_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQuickItem*
///
void q_quickitem_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickItem*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_quickitem_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickItem*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_quickitem_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_quickitem_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_quickitem_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickItem*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quickitem_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickItem*
/// @param signal const char*
///
bool q_quickitem_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickItem*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_quickitem_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickItem*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickitem_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickItem*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickitem_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickItem*
/// @param param1 QObject*
///
void q_quickitem_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QObject* param1)
///
void q_quickitem_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickItem*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickitem_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickItem*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickitem_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickItem*
/// @param callback bool func(QQuickItem* self, QObject* watched, QEvent* event)
///
void q_quickitem_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickItem*
/// @param event QTimerEvent*
///
void q_quickitem_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickItem*
/// @param event QTimerEvent*
///
void q_quickitem_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QTimerEvent* event)
///
void q_quickitem_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickItem*
/// @param event QChildEvent*
///
void q_quickitem_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickItem*
/// @param event QChildEvent*
///
void q_quickitem_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QChildEvent* event)
///
void q_quickitem_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickItem*
/// @param event QEvent*
///
void q_quickitem_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickItem*
/// @param event QEvent*
///
void q_quickitem_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QEvent* event)
///
void q_quickitem_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickItem*
/// @param signal QMetaMethod*
///
void q_quickitem_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickItem*
/// @param signal QMetaMethod*
///
void q_quickitem_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QMetaMethod* signal)
///
void q_quickitem_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickItem*
/// @param signal QMetaMethod*
///
void q_quickitem_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickItem*
/// @param signal QMetaMethod*
///
void q_quickitem_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, QMetaMethod* signal)
///
void q_quickitem_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickItem*
///
QObject* q_quickitem_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickItem*
///
QObject* q_quickitem_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickItem*
/// @param callback QObject* func()
///
void q_quickitem_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickItem*
///
int32_t q_quickitem_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickItem*
///
int32_t q_quickitem_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickItem*
/// @param callback int32_t func()
///
void q_quickitem_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickItem*
/// @param signal const char*
///
int32_t q_quickitem_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickItem*
/// @param signal const char*
///
int32_t q_quickitem_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickItem*
/// @param callback int32_t func(QQuickItem* self, const char* signal)
///
void q_quickitem_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickItem*
/// @param signal QMetaMethod*
///
bool q_quickitem_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickItem*
/// @param signal QMetaMethod*
///
bool q_quickitem_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickItem*
/// @param callback bool func(QQuickItem* self, QMetaMethod* signal)
///
void q_quickitem_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQuickItem*
/// @param callback void func(QQuickItem* self, const char* objectName)
///
void q_quickitem_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dtor.QQuickItem)
///
/// Delete this object from C++ memory.
///
/// @param self QQuickItem*
///
void q_quickitem_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem-itemchangedata.html)

/// q_quickitem__itemchangedata_new constructs a new QQuickItem::ItemChangeData object.
///
/// @param other QQuickItem__ItemChangeData*
///
QQuickItem__ItemChangeData* q_quickitem__itemchangedata_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem-itemchangedata.html)

/// q_quickitem__itemchangedata_new2 constructs a new QQuickItem::ItemChangeData object and invalidates the source QQuickItem::ItemChangeData object.
///
/// @param other QQuickItem__ItemChangeData*
///
QQuickItem__ItemChangeData* q_quickitem__itemchangedata_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem-itemchangedata.html)

/// q_quickitem__itemchangedata_new3 constructs a new QQuickItem::ItemChangeData object.
///
/// @param v QQuickItem*
///
QQuickItem__ItemChangeData* q_quickitem__itemchangedata_new3(void* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem-itemchangedata.html)

/// q_quickitem__itemchangedata_new4 constructs a new QQuickItem::ItemChangeData object.
///
/// @param v QQuickWindow*
///
QQuickItem__ItemChangeData* q_quickitem__itemchangedata_new4(void* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem-itemchangedata.html)

/// q_quickitem__itemchangedata_new5 constructs a new QQuickItem::ItemChangeData object.
///
/// @param v double
///
QQuickItem__ItemChangeData* q_quickitem__itemchangedata_new5(double v);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem-itemchangedata.html)

/// q_quickitem__itemchangedata_new6 constructs a new QQuickItem::ItemChangeData object.
///
/// @param v bool
///
QQuickItem__ItemChangeData* q_quickitem__itemchangedata_new6(bool v);

/// q_quickitem__itemchangedata_copy_assign shallow copies `other` into `self`.
///
/// @param self QQuickItem__ItemChangeData*
/// @param other QQuickItem__ItemChangeData*
///
void q_quickitem__itemchangedata_copy_assign(void* self, void* other);

/// q_quickitem__itemchangedata_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QQuickItem__ItemChangeData*
/// @param other QQuickItem__ItemChangeData*
///
void q_quickitem__itemchangedata_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem-itemchangedata.html#item-var)
///
/// @param self QQuickItem__ItemChangeData*
///
QQuickItem* q_quickitem__itemchangedata_item(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem-itemchangedata.html#item-var)
///
/// @param self QQuickItem__ItemChangeData*
/// @param item QQuickItem*
///
void q_quickitem__itemchangedata_set_item(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem-itemchangedata.html#window-var)
///
/// @param self QQuickItem__ItemChangeData*
///
QQuickWindow* q_quickitem__itemchangedata_window(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem-itemchangedata.html#window-var)
///
/// @param self QQuickItem__ItemChangeData*
/// @param window QQuickWindow*
///
void q_quickitem__itemchangedata_set_window(void* self, void* window);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem-itemchangedata.html#realValue-var)
///
/// @param self QQuickItem__ItemChangeData*
///
double q_quickitem__itemchangedata_real_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem-itemchangedata.html#realValue-var)
///
/// @param self QQuickItem__ItemChangeData*
/// @param realValue double
///
void q_quickitem__itemchangedata_set_real_value(void* self, double realValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem-itemchangedata.html#boolValue-var)
///
/// @param self QQuickItem__ItemChangeData*
///
bool q_quickitem__itemchangedata_bool_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem-itemchangedata.html#boolValue-var)
///
/// @param self QQuickItem__ItemChangeData*
/// @param boolValue bool
///
void q_quickitem__itemchangedata_set_bool_value(void* self, bool boolValue);

/// Delete this object from C++ memory.
///
/// @param self QQuickItem__ItemChangeData*
///
void q_quickitem__itemchangedata_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem-updatepaintnodedata.html)

/// q_quickitem__updatepaintnodedata_new constructs a new QQuickItem::UpdatePaintNodeData object.
///
/// @param other QQuickItem__UpdatePaintNodeData*
///
QQuickItem__UpdatePaintNodeData* q_quickitem__updatepaintnodedata_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem-updatepaintnodedata.html)

/// q_quickitem__updatepaintnodedata_new2 constructs a new QQuickItem::UpdatePaintNodeData object and invalidates the source QQuickItem::UpdatePaintNodeData object.
///
/// @param other QQuickItem__UpdatePaintNodeData*
///
QQuickItem__UpdatePaintNodeData* q_quickitem__updatepaintnodedata_new2(void* other);

/// q_quickitem__updatepaintnodedata_copy_assign shallow copies `other` into `self`.
///
/// @param self QQuickItem__UpdatePaintNodeData*
/// @param other QQuickItem__UpdatePaintNodeData*
///
void q_quickitem__updatepaintnodedata_copy_assign(void* self, void* other);

/// q_quickitem__updatepaintnodedata_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QQuickItem__UpdatePaintNodeData*
/// @param other QQuickItem__UpdatePaintNodeData*
///
void q_quickitem__updatepaintnodedata_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem-updatepaintnodedata.html#transformNode-var)
///
/// @param self QQuickItem__UpdatePaintNodeData*
///
QSGTransformNode* q_quickitem__updatepaintnodedata_transform_node(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem-updatepaintnodedata.html#transformNode-var)
///
/// @param self QQuickItem__UpdatePaintNodeData*
/// @param transformNode QSGTransformNode*
///
void q_quickitem__updatepaintnodedata_set_transform_node(void* self, void* transformNode);

/// Delete this object from C++ memory.
///
/// @param self QQuickItem__UpdatePaintNodeData*
///
void q_quickitem__updatepaintnodedata_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#public-types)

typedef enum {
    QQUICKITEM_FLAG_ITEMCLIPSCHILDRENTOSHAPE = 1,
    QQUICKITEM_FLAG_ITEMACCEPTSINPUTMETHOD = 2,
    QQUICKITEM_FLAG_ITEMISFOCUSSCOPE = 4,
    QQUICKITEM_FLAG_ITEMHASCONTENTS = 8,
    QQUICKITEM_FLAG_ITEMACCEPTSDROPS = 16,
    QQUICKITEM_FLAG_ITEMISVIEWPORT = 32,
    QQUICKITEM_FLAG_ITEMOBSERVESVIEWPORT = 64
} QQuickItem__Flag;

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#public-types)

typedef enum {
    QQUICKITEM_ITEMCHANGE_ITEMCHILDADDEDCHANGE = 0,
    QQUICKITEM_ITEMCHANGE_ITEMCHILDREMOVEDCHANGE = 1,
    QQUICKITEM_ITEMCHANGE_ITEMSCENECHANGE = 2,
    QQUICKITEM_ITEMCHANGE_ITEMVISIBLEHASCHANGED = 3,
    QQUICKITEM_ITEMCHANGE_ITEMPARENTHASCHANGED = 4,
    QQUICKITEM_ITEMCHANGE_ITEMOPACITYHASCHANGED = 5,
    QQUICKITEM_ITEMCHANGE_ITEMACTIVEFOCUSHASCHANGED = 6,
    QQUICKITEM_ITEMCHANGE_ITEMROTATIONHASCHANGED = 7,
    QQUICKITEM_ITEMCHANGE_ITEMANTIALIASINGHASCHANGED = 8,
    QQUICKITEM_ITEMCHANGE_ITEMDEVICEPIXELRATIOHASCHANGED = 9,
    QQUICKITEM_ITEMCHANGE_ITEMENABLEDHASCHANGED = 10
} QQuickItem__ItemChange;

/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#public-types)

typedef enum {
    QQUICKITEM_TRANSFORMORIGIN_TOPLEFT = 0,
    QQUICKITEM_TRANSFORMORIGIN_TOP = 1,
    QQUICKITEM_TRANSFORMORIGIN_TOPRIGHT = 2,
    QQUICKITEM_TRANSFORMORIGIN_LEFT = 3,
    QQUICKITEM_TRANSFORMORIGIN_CENTER = 4,
    QQUICKITEM_TRANSFORMORIGIN_RIGHT = 5,
    QQUICKITEM_TRANSFORMORIGIN_BOTTOMLEFT = 6,
    QQUICKITEM_TRANSFORMORIGIN_BOTTOM = 7,
    QQUICKITEM_TRANSFORMORIGIN_BOTTOMRIGHT = 8
} QQuickItem__TransformOrigin;

#endif
