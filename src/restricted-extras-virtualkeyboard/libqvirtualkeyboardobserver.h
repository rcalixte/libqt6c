#pragma once
#ifndef RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDOBSERVER_H
#define RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDOBSERVER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardobserver.html)

/// q_virtualkeyboardobserver_new constructs a new QVirtualKeyboardObserver object.
///
QVirtualKeyboardObserver* q_virtualkeyboardobserver_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardobserver.html)

/// q_virtualkeyboardobserver_new2 constructs a new QVirtualKeyboardObserver object.
///
/// @param parent QObject*
///
QVirtualKeyboardObserver* q_virtualkeyboardobserver_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QVirtualKeyboardObserver*
///
const QMetaObject* q_virtualkeyboardobserver_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardObserver*
/// @param callback const QMetaObject* func(const QVirtualKeyboardObserver* self)
///
void q_virtualkeyboardobserver_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QVirtualKeyboardObserver*
///
const QMetaObject* q_virtualkeyboardobserver_super_meta_object(const void* self);

/// @param self QVirtualKeyboardObserver*
/// @param param1 const char*
///
void* q_virtualkeyboardobserver_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardObserver*
/// @param callback void* func(QVirtualKeyboardObserver* self, const char* param1)
///
void q_virtualkeyboardobserver_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QVirtualKeyboardObserver*
/// @param param1 const char*
///
void* q_virtualkeyboardobserver_super_metacast(void* self, const char* param1);

/// @param self QVirtualKeyboardObserver*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_virtualkeyboardobserver_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QVirtualKeyboardObserver*
/// @param callback int32_t func(QVirtualKeyboardObserver* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_virtualkeyboardobserver_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QVirtualKeyboardObserver*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_virtualkeyboardobserver_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_virtualkeyboardobserver_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardobserver.html#layout)
///
/// @param self QVirtualKeyboardObserver*
///
QVariant* q_virtualkeyboardobserver_layout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardobserver.html#layoutChanged)
///
/// @param self QVirtualKeyboardObserver*
///
void q_virtualkeyboardobserver_layout_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardobserver.html#layoutChanged)
///
/// @param self QVirtualKeyboardObserver*
/// @param callback void func(QVirtualKeyboardObserver* self)
///
void q_virtualkeyboardobserver_on_layout_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_virtualkeyboardobserver_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_virtualkeyboardobserver_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QVirtualKeyboardObserver*
///
const char* q_virtualkeyboardobserver_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QVirtualKeyboardObserver*
/// @param name const char*
///
void q_virtualkeyboardobserver_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QVirtualKeyboardObserver*
///
bool q_virtualkeyboardobserver_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QVirtualKeyboardObserver*
///
bool q_virtualkeyboardobserver_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QVirtualKeyboardObserver*
///
bool q_virtualkeyboardobserver_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QVirtualKeyboardObserver*
///
bool q_virtualkeyboardobserver_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QVirtualKeyboardObserver*
/// @param b bool
///
bool q_virtualkeyboardobserver_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QVirtualKeyboardObserver*
///
QThread* q_virtualkeyboardobserver_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QVirtualKeyboardObserver*
/// @param thread QThread*
///
bool q_virtualkeyboardobserver_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardObserver*
/// @param interval int
///
int32_t q_virtualkeyboardobserver_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardObserver*
/// @param time int64_t of nanoseconds
///
int32_t q_virtualkeyboardobserver_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVirtualKeyboardObserver*
/// @param id int
///
void q_virtualkeyboardobserver_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVirtualKeyboardObserver*
/// @param id enum Qt__TimerId
///
void q_virtualkeyboardobserver_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QVirtualKeyboardObserver*
///
/// @return libqt_list of QObject*
///
libqt_list q_virtualkeyboardobserver_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QVirtualKeyboardObserver*
/// @param parent QObject*
///
void q_virtualkeyboardobserver_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QVirtualKeyboardObserver*
/// @param filterObj QObject*
///
void q_virtualkeyboardobserver_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QVirtualKeyboardObserver*
/// @param obj QObject*
///
void q_virtualkeyboardobserver_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_virtualkeyboardobserver_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_virtualkeyboardobserver_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QVirtualKeyboardObserver*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_virtualkeyboardobserver_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_virtualkeyboardobserver_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_virtualkeyboardobserver_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardObserver*
///
bool q_virtualkeyboardobserver_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardObserver*
/// @param receiver QObject*
///
bool q_virtualkeyboardobserver_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_virtualkeyboardobserver_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QVirtualKeyboardObserver*
///
void q_virtualkeyboardobserver_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QVirtualKeyboardObserver*
///
void q_virtualkeyboardobserver_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QVirtualKeyboardObserver*
/// @param name const char*
/// @param value QVariant*
///
bool q_virtualkeyboardobserver_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QVirtualKeyboardObserver*
/// @param name const char*
///
QVariant* q_virtualkeyboardobserver_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QVirtualKeyboardObserver*
///
const char** q_virtualkeyboardobserver_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QVirtualKeyboardObserver*
///
QBindingStorage* q_virtualkeyboardobserver_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QVirtualKeyboardObserver*
///
const QBindingStorage* q_virtualkeyboardobserver_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardObserver*
///
void q_virtualkeyboardobserver_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardObserver*
/// @param callback void func(QVirtualKeyboardObserver* self)
///
void q_virtualkeyboardobserver_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QVirtualKeyboardObserver*
///
QObject* q_virtualkeyboardobserver_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QVirtualKeyboardObserver*
/// @param classname const char*
///
bool q_virtualkeyboardobserver_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QVirtualKeyboardObserver*
///
void q_virtualkeyboardobserver_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardObserver*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_virtualkeyboardobserver_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVirtualKeyboardObserver*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_virtualkeyboardobserver_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_virtualkeyboardobserver_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_virtualkeyboardobserver_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QVirtualKeyboardObserver*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_virtualkeyboardobserver_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardObserver*
/// @param signal const char*
///
bool q_virtualkeyboardobserver_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardObserver*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_virtualkeyboardobserver_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardObserver*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_virtualkeyboardobserver_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVirtualKeyboardObserver*
/// @param receiver QObject*
/// @param member const char*
///
bool q_virtualkeyboardobserver_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardObserver*
/// @param param1 QObject*
///
void q_virtualkeyboardobserver_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVirtualKeyboardObserver*
/// @param callback void func(QVirtualKeyboardObserver* self, QObject* param1)
///
void q_virtualkeyboardobserver_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param event QEvent*
///
bool q_virtualkeyboardobserver_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param event QEvent*
///
bool q_virtualkeyboardobserver_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param callback bool func(QVirtualKeyboardObserver* self, QEvent* event)
///
void q_virtualkeyboardobserver_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_virtualkeyboardobserver_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_virtualkeyboardobserver_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param callback bool func(QVirtualKeyboardObserver* self, QObject* watched, QEvent* event)
///
void q_virtualkeyboardobserver_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param event QTimerEvent*
///
void q_virtualkeyboardobserver_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param event QTimerEvent*
///
void q_virtualkeyboardobserver_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param callback void func(QVirtualKeyboardObserver* self, QTimerEvent* event)
///
void q_virtualkeyboardobserver_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param event QChildEvent*
///
void q_virtualkeyboardobserver_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param event QChildEvent*
///
void q_virtualkeyboardobserver_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param callback void func(QVirtualKeyboardObserver* self, QChildEvent* event)
///
void q_virtualkeyboardobserver_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param event QEvent*
///
void q_virtualkeyboardobserver_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param event QEvent*
///
void q_virtualkeyboardobserver_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param callback void func(QVirtualKeyboardObserver* self, QEvent* event)
///
void q_virtualkeyboardobserver_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param signal QMetaMethod*
///
void q_virtualkeyboardobserver_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param signal QMetaMethod*
///
void q_virtualkeyboardobserver_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param callback void func(QVirtualKeyboardObserver* self, QMetaMethod* signal)
///
void q_virtualkeyboardobserver_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param signal QMetaMethod*
///
void q_virtualkeyboardobserver_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param signal QMetaMethod*
///
void q_virtualkeyboardobserver_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param callback void func(QVirtualKeyboardObserver* self, QMetaMethod* signal)
///
void q_virtualkeyboardobserver_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QVirtualKeyboardObserver*
///
QObject* q_virtualkeyboardobserver_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QVirtualKeyboardObserver*
///
QObject* q_virtualkeyboardobserver_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param callback QObject* func(QVirtualKeyboardObserver* self)
///
void q_virtualkeyboardobserver_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QVirtualKeyboardObserver*
///
int32_t q_virtualkeyboardobserver_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QVirtualKeyboardObserver*
///
int32_t q_virtualkeyboardobserver_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param callback int32_t func(QVirtualKeyboardObserver* self)
///
void q_virtualkeyboardobserver_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QVirtualKeyboardObserver*
/// @param signal const char*
///
int32_t q_virtualkeyboardobserver_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QVirtualKeyboardObserver*
/// @param signal const char*
///
int32_t q_virtualkeyboardobserver_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param callback int32_t func(QVirtualKeyboardObserver* self, const char* signal)
///
void q_virtualkeyboardobserver_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QVirtualKeyboardObserver*
/// @param signal QMetaMethod*
///
bool q_virtualkeyboardobserver_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QVirtualKeyboardObserver*
/// @param signal QMetaMethod*
///
bool q_virtualkeyboardobserver_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVirtualKeyboardObserver*
/// @param callback bool func(QVirtualKeyboardObserver* self, QMetaMethod* signal)
///
void q_virtualkeyboardobserver_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QVirtualKeyboardObserver*
/// @param callback void func(QVirtualKeyboardObserver* self, const char* objectName)
///
void q_virtualkeyboardobserver_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvirtualkeyboardobserver.html#dtor.QVirtualKeyboardObserver)
///
/// Delete this object from C++ memory.
///
/// @param self QVirtualKeyboardObserver*
///
void q_virtualkeyboardobserver_delete(void* self);

#endif
