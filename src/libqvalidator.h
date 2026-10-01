#pragma once
#ifndef LIBQVALIDATOR_H
#define LIBQVALIDATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html)

/// q_validator_new constructs a new QValidator object.
///
QValidator* q_validator_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html)

/// q_validator_new2 constructs a new QValidator object.
///
/// @param parent QObject*
///
QValidator* q_validator_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QValidator*
///
const QMetaObject* q_validator_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QValidator*
/// @param callback const QMetaObject* func(const QValidator* self)
///
void q_validator_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QValidator*
///
const QMetaObject* q_validator_super_meta_object(const void* self);

/// @param self QValidator*
/// @param param1 const char*
///
void* q_validator_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QValidator*
/// @param callback void* func(QValidator* self, const char* param1)
///
void q_validator_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QValidator*
/// @param param1 const char*
///
void* q_validator_super_metacast(void* self, const char* param1);

/// @param self QValidator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_validator_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QValidator*
/// @param callback int32_t func(QValidator* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_validator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QValidator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_validator_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_validator_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#setLocale)
///
/// @param self QValidator*
/// @param locale QLocale*
///
void q_validator_set_locale(void* self, const void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#locale)
///
/// @param self const QValidator*
///
QLocale* q_validator_locale(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#validate)
///
/// @warning This method must be implemented with `q_validator_on_validate` before it can be called.
///
/// @param self const QValidator*
/// @param param1 const char*
/// @param param2 int*
///
/// @return enum QValidator__State
///
int32_t q_validator_validate(const void* self, const char* param1, int* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#validate)
///
/// Allows for overriding the related default method
///
/// @param self const QValidator*
/// @param callback int32_t func(const QValidator* self, const char* param1, int* param2)
///
void q_validator_on_validate(const void* self, int32_t (*callback)(const void*, const char*, int*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#fixup)
///
/// @param self const QValidator*
/// @param param1 const char*
///
void q_validator_fixup(const void* self, const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#fixup)
///
/// Allows for overriding the related default method
///
/// @param self const QValidator*
/// @param callback void func(const QValidator* self, const char* param1)
///
void q_validator_on_fixup(const void* self, void (*callback)(const void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#fixup)
///
/// Base class method implementation
///
/// @param self const QValidator*
/// @param param1 const char*
///
void q_validator_super_fixup(const void* self, const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// @param self QValidator*
///
void q_validator_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// @param self QValidator*
/// @param callback void func(QValidator* self)
///
void q_validator_on_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_validator_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_validator_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QValidator*
///
const char* q_validator_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QValidator*
/// @param name const char*
///
void q_validator_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QValidator*
///
bool q_validator_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QValidator*
///
bool q_validator_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QValidator*
///
bool q_validator_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QValidator*
///
bool q_validator_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QValidator*
/// @param b bool
///
bool q_validator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QValidator*
///
QThread* q_validator_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QValidator*
/// @param thread QThread*
///
bool q_validator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QValidator*
/// @param interval int
///
int32_t q_validator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QValidator*
/// @param time int64_t of nanoseconds
///
int32_t q_validator_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QValidator*
/// @param id int
///
void q_validator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QValidator*
/// @param id enum Qt__TimerId
///
void q_validator_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QValidator*
///
/// @return libqt_list of QObject*
///
libqt_list q_validator_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QValidator*
/// @param parent QObject*
///
void q_validator_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QValidator*
/// @param filterObj QObject*
///
void q_validator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QValidator*
/// @param obj QObject*
///
void q_validator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_validator_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_validator_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QValidator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_validator_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_validator_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_validator_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QValidator*
///
bool q_validator_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QValidator*
/// @param receiver QObject*
///
bool q_validator_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_validator_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QValidator*
///
void q_validator_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QValidator*
///
void q_validator_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QValidator*
/// @param name const char*
/// @param value QVariant*
///
bool q_validator_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QValidator*
/// @param name const char*
///
QVariant* q_validator_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QValidator*
///
const char** q_validator_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QValidator*
///
QBindingStorage* q_validator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QValidator*
///
const QBindingStorage* q_validator_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QValidator*
///
void q_validator_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QValidator*
/// @param callback void func(QValidator* self)
///
void q_validator_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QValidator*
///
QObject* q_validator_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QValidator*
/// @param classname const char*
///
bool q_validator_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QValidator*
///
void q_validator_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QValidator*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_validator_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QValidator*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_validator_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_validator_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_validator_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QValidator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_validator_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QValidator*
/// @param signal const char*
///
bool q_validator_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QValidator*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_validator_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QValidator*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_validator_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QValidator*
/// @param receiver QObject*
/// @param member const char*
///
bool q_validator_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QValidator*
/// @param param1 QObject*
///
void q_validator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QValidator*
/// @param callback void func(QValidator* self, QObject* param1)
///
void q_validator_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValidator*
/// @param event QEvent*
///
bool q_validator_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValidator*
/// @param event QEvent*
///
bool q_validator_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValidator*
/// @param callback bool func(QValidator* self, QEvent* event)
///
void q_validator_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValidator*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_validator_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValidator*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_validator_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValidator*
/// @param callback bool func(QValidator* self, QObject* watched, QEvent* event)
///
void q_validator_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValidator*
/// @param event QTimerEvent*
///
void q_validator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValidator*
/// @param event QTimerEvent*
///
void q_validator_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValidator*
/// @param callback void func(QValidator* self, QTimerEvent* event)
///
void q_validator_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValidator*
/// @param event QChildEvent*
///
void q_validator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValidator*
/// @param event QChildEvent*
///
void q_validator_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValidator*
/// @param callback void func(QValidator* self, QChildEvent* event)
///
void q_validator_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValidator*
/// @param event QEvent*
///
void q_validator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValidator*
/// @param event QEvent*
///
void q_validator_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValidator*
/// @param callback void func(QValidator* self, QEvent* event)
///
void q_validator_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValidator*
/// @param signal QMetaMethod*
///
void q_validator_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValidator*
/// @param signal QMetaMethod*
///
void q_validator_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValidator*
/// @param callback void func(QValidator* self, QMetaMethod* signal)
///
void q_validator_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QValidator*
/// @param signal QMetaMethod*
///
void q_validator_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QValidator*
/// @param signal QMetaMethod*
///
void q_validator_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QValidator*
/// @param callback void func(QValidator* self, QMetaMethod* signal)
///
void q_validator_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QValidator*
///
QObject* q_validator_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QValidator*
///
QObject* q_validator_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QValidator*
/// @param callback QObject* func(QValidator* self)
///
void q_validator_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QValidator*
///
int32_t q_validator_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QValidator*
///
int32_t q_validator_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QValidator*
/// @param callback int32_t func(QValidator* self)
///
void q_validator_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QValidator*
/// @param signal const char*
///
int32_t q_validator_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QValidator*
/// @param signal const char*
///
int32_t q_validator_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QValidator*
/// @param callback int32_t func(QValidator* self, const char* signal)
///
void q_validator_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QValidator*
/// @param signal QMetaMethod*
///
bool q_validator_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QValidator*
/// @param signal QMetaMethod*
///
bool q_validator_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QValidator*
/// @param callback bool func(QValidator* self, QMetaMethod* signal)
///
void q_validator_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QValidator*
/// @param callback void func(QValidator* self, const char* objectName)
///
void q_validator_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#dtor.QValidator)
///
/// Delete this object from C++ memory.
///
/// @param self QValidator*
///
void q_validator_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qintvalidator.html)

/// q_intvalidator_new constructs a new QIntValidator object.
///
QIntValidator* q_intvalidator_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qintvalidator.html)

/// q_intvalidator_new2 constructs a new QIntValidator object.
///
/// @param bottom int
/// @param top int
///
QIntValidator* q_intvalidator_new2(int bottom, int top);

/// [Upstream resources](https://doc.qt.io/qt-6/qintvalidator.html)

/// q_intvalidator_new3 constructs a new QIntValidator object.
///
/// @param parent QObject*
///
QIntValidator* q_intvalidator_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qintvalidator.html)

/// q_intvalidator_new4 constructs a new QIntValidator object.
///
/// @param bottom int
/// @param top int
/// @param parent QObject*
///
QIntValidator* q_intvalidator_new4(int bottom, int top, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QIntValidator*
///
const QMetaObject* q_intvalidator_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QIntValidator*
/// @param callback const QMetaObject* func(const QIntValidator* self)
///
void q_intvalidator_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QIntValidator*
///
const QMetaObject* q_intvalidator_super_meta_object(const void* self);

/// @param self QIntValidator*
/// @param param1 const char*
///
void* q_intvalidator_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QIntValidator*
/// @param callback void* func(QIntValidator* self, const char* param1)
///
void q_intvalidator_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QIntValidator*
/// @param param1 const char*
///
void* q_intvalidator_super_metacast(void* self, const char* param1);

/// @param self QIntValidator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_intvalidator_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QIntValidator*
/// @param callback int32_t func(QIntValidator* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_intvalidator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QIntValidator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_intvalidator_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_intvalidator_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qintvalidator.html#validate)
///
/// @param self const QIntValidator*
/// @param param1 const char*
/// @param param2 int*
///
/// @return enum QValidator__State
///
int32_t q_intvalidator_validate(const void* self, const char* param1, int* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qintvalidator.html#validate)
///
/// Allows for overriding the related default method
///
/// @param self const QIntValidator*
/// @param callback int32_t func(const QIntValidator* self, const char* param1, int* param2)
///
void q_intvalidator_on_validate(const void* self, int32_t (*callback)(const void*, const char*, int*));

/// [Upstream resources](https://doc.qt.io/qt-6/qintvalidator.html#validate)
///
/// Base class method implementation
///
/// @param self const QIntValidator*
/// @param param1 const char*
/// @param param2 int*
///
/// @return enum QValidator__State
///
int32_t q_intvalidator_super_validate(const void* self, const char* param1, int* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qintvalidator.html#fixup)
///
/// @param self const QIntValidator*
/// @param input const char*
///
void q_intvalidator_fixup(const void* self, const char* input);

/// [Upstream resources](https://doc.qt.io/qt-6/qintvalidator.html#fixup)
///
/// Allows for overriding the related default method
///
/// @param self const QIntValidator*
/// @param callback void func(const QIntValidator* self, const char* input)
///
void q_intvalidator_on_fixup(const void* self, void (*callback)(const void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qintvalidator.html#fixup)
///
/// Base class method implementation
///
/// @param self const QIntValidator*
/// @param input const char*
///
void q_intvalidator_super_fixup(const void* self, const char* input);

/// [Upstream resources](https://doc.qt.io/qt-6/qintvalidator.html#setBottom)
///
/// @param self QIntValidator*
/// @param bottom int
///
void q_intvalidator_set_bottom(void* self, int bottom);

/// [Upstream resources](https://doc.qt.io/qt-6/qintvalidator.html#setTop)
///
/// @param self QIntValidator*
/// @param top int
///
void q_intvalidator_set_top(void* self, int top);

/// [Upstream resources](https://doc.qt.io/qt-6/qintvalidator.html#setRange)
///
/// @param self QIntValidator*
/// @param bottom int
/// @param top int
///
void q_intvalidator_set_range(void* self, int bottom, int top);

/// [Upstream resources](https://doc.qt.io/qt-6/qintvalidator.html#bottom)
///
/// @param self const QIntValidator*
///
int32_t q_intvalidator_bottom(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qintvalidator.html#top)
///
/// @param self const QIntValidator*
///
int32_t q_intvalidator_top(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qintvalidator.html#bottomChanged)
///
/// @param self QIntValidator*
/// @param bottom int
///
void q_intvalidator_bottom_changed(void* self, int bottom);

/// [Upstream resources](https://doc.qt.io/qt-6/qintvalidator.html#bottomChanged)
///
/// @param self QIntValidator*
/// @param callback void func(QIntValidator* self, int bottom)
///
void q_intvalidator_on_bottom_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qintvalidator.html#topChanged)
///
/// @param self QIntValidator*
/// @param top int
///
void q_intvalidator_top_changed(void* self, int top);

/// [Upstream resources](https://doc.qt.io/qt-6/qintvalidator.html#topChanged)
///
/// @param self QIntValidator*
/// @param callback void func(QIntValidator* self, int top)
///
void q_intvalidator_on_top_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_intvalidator_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_intvalidator_tr3(const char* s, const char* c, int n);

/// Inherited from QValidator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#setLocale)
///
/// @param self QIntValidator*
/// @param locale QLocale*
///
void q_intvalidator_set_locale(void* self, const void* locale);

/// Inherited from QValidator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#locale)
///
/// @param self const QIntValidator*
///
QLocale* q_intvalidator_locale(const void* self);

/// Inherited from QValidator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// @param self QIntValidator*
///
void q_intvalidator_changed(void* self);

/// Inherited from QValidator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// @param self QIntValidator*
/// @param callback void func(QIntValidator* self)
///
void q_intvalidator_on_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QIntValidator*
///
const char* q_intvalidator_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QIntValidator*
/// @param name const char*
///
void q_intvalidator_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QIntValidator*
///
bool q_intvalidator_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QIntValidator*
///
bool q_intvalidator_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QIntValidator*
///
bool q_intvalidator_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QIntValidator*
///
bool q_intvalidator_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QIntValidator*
/// @param b bool
///
bool q_intvalidator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QIntValidator*
///
QThread* q_intvalidator_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QIntValidator*
/// @param thread QThread*
///
bool q_intvalidator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QIntValidator*
/// @param interval int
///
int32_t q_intvalidator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QIntValidator*
/// @param time int64_t of nanoseconds
///
int32_t q_intvalidator_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QIntValidator*
/// @param id int
///
void q_intvalidator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QIntValidator*
/// @param id enum Qt__TimerId
///
void q_intvalidator_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QIntValidator*
///
/// @return libqt_list of QObject*
///
libqt_list q_intvalidator_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QIntValidator*
/// @param parent QObject*
///
void q_intvalidator_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QIntValidator*
/// @param filterObj QObject*
///
void q_intvalidator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QIntValidator*
/// @param obj QObject*
///
void q_intvalidator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_intvalidator_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_intvalidator_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QIntValidator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_intvalidator_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_intvalidator_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_intvalidator_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QIntValidator*
///
bool q_intvalidator_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QIntValidator*
/// @param receiver QObject*
///
bool q_intvalidator_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_intvalidator_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QIntValidator*
///
void q_intvalidator_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QIntValidator*
///
void q_intvalidator_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QIntValidator*
/// @param name const char*
/// @param value QVariant*
///
bool q_intvalidator_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QIntValidator*
/// @param name const char*
///
QVariant* q_intvalidator_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QIntValidator*
///
const char** q_intvalidator_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QIntValidator*
///
QBindingStorage* q_intvalidator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QIntValidator*
///
const QBindingStorage* q_intvalidator_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QIntValidator*
///
void q_intvalidator_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QIntValidator*
/// @param callback void func(QIntValidator* self)
///
void q_intvalidator_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QIntValidator*
///
QObject* q_intvalidator_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QIntValidator*
/// @param classname const char*
///
bool q_intvalidator_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QIntValidator*
///
void q_intvalidator_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QIntValidator*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_intvalidator_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QIntValidator*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_intvalidator_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_intvalidator_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_intvalidator_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QIntValidator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_intvalidator_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QIntValidator*
/// @param signal const char*
///
bool q_intvalidator_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QIntValidator*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_intvalidator_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QIntValidator*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_intvalidator_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QIntValidator*
/// @param receiver QObject*
/// @param member const char*
///
bool q_intvalidator_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QIntValidator*
/// @param param1 QObject*
///
void q_intvalidator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QIntValidator*
/// @param callback void func(QIntValidator* self, QObject* param1)
///
void q_intvalidator_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIntValidator*
/// @param event QEvent*
///
bool q_intvalidator_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIntValidator*
/// @param event QEvent*
///
bool q_intvalidator_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIntValidator*
/// @param callback bool func(QIntValidator* self, QEvent* event)
///
void q_intvalidator_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIntValidator*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_intvalidator_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIntValidator*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_intvalidator_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIntValidator*
/// @param callback bool func(QIntValidator* self, QObject* watched, QEvent* event)
///
void q_intvalidator_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIntValidator*
/// @param event QTimerEvent*
///
void q_intvalidator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIntValidator*
/// @param event QTimerEvent*
///
void q_intvalidator_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIntValidator*
/// @param callback void func(QIntValidator* self, QTimerEvent* event)
///
void q_intvalidator_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIntValidator*
/// @param event QChildEvent*
///
void q_intvalidator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIntValidator*
/// @param event QChildEvent*
///
void q_intvalidator_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIntValidator*
/// @param callback void func(QIntValidator* self, QChildEvent* event)
///
void q_intvalidator_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIntValidator*
/// @param event QEvent*
///
void q_intvalidator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIntValidator*
/// @param event QEvent*
///
void q_intvalidator_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIntValidator*
/// @param callback void func(QIntValidator* self, QEvent* event)
///
void q_intvalidator_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIntValidator*
/// @param signal QMetaMethod*
///
void q_intvalidator_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIntValidator*
/// @param signal QMetaMethod*
///
void q_intvalidator_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIntValidator*
/// @param callback void func(QIntValidator* self, QMetaMethod* signal)
///
void q_intvalidator_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QIntValidator*
/// @param signal QMetaMethod*
///
void q_intvalidator_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QIntValidator*
/// @param signal QMetaMethod*
///
void q_intvalidator_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QIntValidator*
/// @param callback void func(QIntValidator* self, QMetaMethod* signal)
///
void q_intvalidator_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIntValidator*
///
QObject* q_intvalidator_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIntValidator*
///
QObject* q_intvalidator_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIntValidator*
/// @param callback QObject* func(QIntValidator* self)
///
void q_intvalidator_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIntValidator*
///
int32_t q_intvalidator_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIntValidator*
///
int32_t q_intvalidator_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIntValidator*
/// @param callback int32_t func(QIntValidator* self)
///
void q_intvalidator_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIntValidator*
/// @param signal const char*
///
int32_t q_intvalidator_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIntValidator*
/// @param signal const char*
///
int32_t q_intvalidator_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIntValidator*
/// @param callback int32_t func(QIntValidator* self, const char* signal)
///
void q_intvalidator_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QIntValidator*
/// @param signal QMetaMethod*
///
bool q_intvalidator_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QIntValidator*
/// @param signal QMetaMethod*
///
bool q_intvalidator_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QIntValidator*
/// @param callback bool func(QIntValidator* self, QMetaMethod* signal)
///
void q_intvalidator_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QIntValidator*
/// @param callback void func(QIntValidator* self, const char* objectName)
///
void q_intvalidator_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qintvalidator.html#dtor.QIntValidator)
///
/// Delete this object from C++ memory.
///
/// @param self QIntValidator*
///
void q_intvalidator_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html)

/// q_doublevalidator_new constructs a new QDoubleValidator object.
///
QDoubleValidator* q_doublevalidator_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html)

/// q_doublevalidator_new2 constructs a new QDoubleValidator object.
///
/// @param bottom double
/// @param top double
/// @param decimals int
///
QDoubleValidator* q_doublevalidator_new2(double bottom, double top, int decimals);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html)

/// q_doublevalidator_new3 constructs a new QDoubleValidator object.
///
/// @param parent QObject*
///
QDoubleValidator* q_doublevalidator_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html)

/// q_doublevalidator_new4 constructs a new QDoubleValidator object.
///
/// @param bottom double
/// @param top double
/// @param decimals int
/// @param parent QObject*
///
QDoubleValidator* q_doublevalidator_new4(double bottom, double top, int decimals, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QDoubleValidator*
///
const QMetaObject* q_doublevalidator_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QDoubleValidator*
/// @param callback const QMetaObject* func(const QDoubleValidator* self)
///
void q_doublevalidator_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QDoubleValidator*
///
const QMetaObject* q_doublevalidator_super_meta_object(const void* self);

/// @param self QDoubleValidator*
/// @param param1 const char*
///
void* q_doublevalidator_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QDoubleValidator*
/// @param callback void* func(QDoubleValidator* self, const char* param1)
///
void q_doublevalidator_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QDoubleValidator*
/// @param param1 const char*
///
void* q_doublevalidator_super_metacast(void* self, const char* param1);

/// @param self QDoubleValidator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_doublevalidator_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDoubleValidator*
/// @param callback int32_t func(QDoubleValidator* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_doublevalidator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDoubleValidator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_doublevalidator_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_doublevalidator_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#validate)
///
/// @param self const QDoubleValidator*
/// @param param1 const char*
/// @param param2 int*
///
/// @return enum QValidator__State
///
int32_t q_doublevalidator_validate(const void* self, const char* param1, int* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#validate)
///
/// Allows for overriding the related default method
///
/// @param self const QDoubleValidator*
/// @param callback int32_t func(const QDoubleValidator* self, const char* param1, int* param2)
///
void q_doublevalidator_on_validate(const void* self, int32_t (*callback)(const void*, const char*, int*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#validate)
///
/// Base class method implementation
///
/// @param self const QDoubleValidator*
/// @param param1 const char*
/// @param param2 int*
///
/// @return enum QValidator__State
///
int32_t q_doublevalidator_super_validate(const void* self, const char* param1, int* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#fixup)
///
/// @param self const QDoubleValidator*
/// @param input const char*
///
void q_doublevalidator_fixup(const void* self, const char* input);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#fixup)
///
/// Allows for overriding the related default method
///
/// @param self const QDoubleValidator*
/// @param callback void func(const QDoubleValidator* self, const char* input)
///
void q_doublevalidator_on_fixup(const void* self, void (*callback)(const void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#fixup)
///
/// Base class method implementation
///
/// @param self const QDoubleValidator*
/// @param input const char*
///
void q_doublevalidator_super_fixup(const void* self, const char* input);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#setRange)
///
/// @param self QDoubleValidator*
/// @param bottom double
/// @param top double
/// @param decimals int
///
void q_doublevalidator_set_range(void* self, double bottom, double top, int decimals);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#setRange)
///
/// @param self QDoubleValidator*
/// @param bottom double
/// @param top double
///
void q_doublevalidator_set_range2(void* self, double bottom, double top);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#setBottom)
///
/// @param self QDoubleValidator*
/// @param bottom double
///
void q_doublevalidator_set_bottom(void* self, double bottom);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#setTop)
///
/// @param self QDoubleValidator*
/// @param top double
///
void q_doublevalidator_set_top(void* self, double top);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#setDecimals)
///
/// @param self QDoubleValidator*
/// @param decimals int
///
void q_doublevalidator_set_decimals(void* self, int decimals);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#setNotation)
///
/// @param self QDoubleValidator*
/// @param notation enum QDoubleValidator__Notation
///
void q_doublevalidator_set_notation(void* self, int32_t notation);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#bottom)
///
/// @param self const QDoubleValidator*
///
double q_doublevalidator_bottom(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#top)
///
/// @param self const QDoubleValidator*
///
double q_doublevalidator_top(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#decimals)
///
/// @param self const QDoubleValidator*
///
int32_t q_doublevalidator_decimals(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#notation)
///
/// @param self const QDoubleValidator*
///
/// @return enum QDoubleValidator__Notation
///
int32_t q_doublevalidator_notation(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#bottomChanged)
///
/// @param self QDoubleValidator*
/// @param bottom double
///
void q_doublevalidator_bottom_changed(void* self, double bottom);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#bottomChanged)
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self, double bottom)
///
void q_doublevalidator_on_bottom_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#topChanged)
///
/// @param self QDoubleValidator*
/// @param top double
///
void q_doublevalidator_top_changed(void* self, double top);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#topChanged)
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self, double top)
///
void q_doublevalidator_on_top_changed(void* self, void (*callback)(void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#decimalsChanged)
///
/// @param self QDoubleValidator*
/// @param decimals int
///
void q_doublevalidator_decimals_changed(void* self, int decimals);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#decimalsChanged)
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self, int decimals)
///
void q_doublevalidator_on_decimals_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#notationChanged)
///
/// @param self QDoubleValidator*
/// @param notation enum QDoubleValidator__Notation
///
void q_doublevalidator_notation_changed(void* self, int32_t notation);

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#notationChanged)
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self, enum QDoubleValidator__Notation notation)
///
void q_doublevalidator_on_notation_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_doublevalidator_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_doublevalidator_tr3(const char* s, const char* c, int n);

/// Inherited from QValidator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#setLocale)
///
/// @param self QDoubleValidator*
/// @param locale QLocale*
///
void q_doublevalidator_set_locale(void* self, const void* locale);

/// Inherited from QValidator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#locale)
///
/// @param self const QDoubleValidator*
///
QLocale* q_doublevalidator_locale(const void* self);

/// Inherited from QValidator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// @param self QDoubleValidator*
///
void q_doublevalidator_changed(void* self);

/// Inherited from QValidator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self)
///
void q_doublevalidator_on_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDoubleValidator*
///
const char* q_doublevalidator_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDoubleValidator*
/// @param name const char*
///
void q_doublevalidator_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QDoubleValidator*
///
bool q_doublevalidator_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QDoubleValidator*
///
bool q_doublevalidator_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QDoubleValidator*
///
bool q_doublevalidator_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QDoubleValidator*
///
bool q_doublevalidator_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDoubleValidator*
/// @param b bool
///
bool q_doublevalidator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QDoubleValidator*
///
QThread* q_doublevalidator_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDoubleValidator*
/// @param thread QThread*
///
bool q_doublevalidator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDoubleValidator*
/// @param interval int
///
int32_t q_doublevalidator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDoubleValidator*
/// @param time int64_t of nanoseconds
///
int32_t q_doublevalidator_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDoubleValidator*
/// @param id int
///
void q_doublevalidator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDoubleValidator*
/// @param id enum Qt__TimerId
///
void q_doublevalidator_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QDoubleValidator*
///
/// @return libqt_list of QObject*
///
libqt_list q_doublevalidator_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QDoubleValidator*
/// @param parent QObject*
///
void q_doublevalidator_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDoubleValidator*
/// @param filterObj QObject*
///
void q_doublevalidator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDoubleValidator*
/// @param obj QObject*
///
void q_doublevalidator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_doublevalidator_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_doublevalidator_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QDoubleValidator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_doublevalidator_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_doublevalidator_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_doublevalidator_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDoubleValidator*
///
bool q_doublevalidator_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDoubleValidator*
/// @param receiver QObject*
///
bool q_doublevalidator_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_doublevalidator_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QDoubleValidator*
///
void q_doublevalidator_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QDoubleValidator*
///
void q_doublevalidator_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDoubleValidator*
/// @param name const char*
/// @param value QVariant*
///
bool q_doublevalidator_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QDoubleValidator*
/// @param name const char*
///
QVariant* q_doublevalidator_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QDoubleValidator*
///
const char** q_doublevalidator_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDoubleValidator*
///
QBindingStorage* q_doublevalidator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QDoubleValidator*
///
const QBindingStorage* q_doublevalidator_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDoubleValidator*
///
void q_doublevalidator_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self)
///
void q_doublevalidator_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QDoubleValidator*
///
QObject* q_doublevalidator_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QDoubleValidator*
/// @param classname const char*
///
bool q_doublevalidator_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDoubleValidator*
///
void q_doublevalidator_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDoubleValidator*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_doublevalidator_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDoubleValidator*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_doublevalidator_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_doublevalidator_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_doublevalidator_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QDoubleValidator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_doublevalidator_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDoubleValidator*
/// @param signal const char*
///
bool q_doublevalidator_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDoubleValidator*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_doublevalidator_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDoubleValidator*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_doublevalidator_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDoubleValidator*
/// @param receiver QObject*
/// @param member const char*
///
bool q_doublevalidator_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDoubleValidator*
/// @param param1 QObject*
///
void q_doublevalidator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self, QObject* param1)
///
void q_doublevalidator_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleValidator*
/// @param event QEvent*
///
bool q_doublevalidator_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param event QEvent*
///
bool q_doublevalidator_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param callback bool func(QDoubleValidator* self, QEvent* event)
///
void q_doublevalidator_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleValidator*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_doublevalidator_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_doublevalidator_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param callback bool func(QDoubleValidator* self, QObject* watched, QEvent* event)
///
void q_doublevalidator_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleValidator*
/// @param event QTimerEvent*
///
void q_doublevalidator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param event QTimerEvent*
///
void q_doublevalidator_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self, QTimerEvent* event)
///
void q_doublevalidator_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleValidator*
/// @param event QChildEvent*
///
void q_doublevalidator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param event QChildEvent*
///
void q_doublevalidator_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self, QChildEvent* event)
///
void q_doublevalidator_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleValidator*
/// @param event QEvent*
///
void q_doublevalidator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param event QEvent*
///
void q_doublevalidator_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self, QEvent* event)
///
void q_doublevalidator_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleValidator*
/// @param signal QMetaMethod*
///
void q_doublevalidator_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param signal QMetaMethod*
///
void q_doublevalidator_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self, QMetaMethod* signal)
///
void q_doublevalidator_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDoubleValidator*
/// @param signal QMetaMethod*
///
void q_doublevalidator_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param signal QMetaMethod*
///
void q_doublevalidator_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self, QMetaMethod* signal)
///
void q_doublevalidator_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QDoubleValidator*
///
QObject* q_doublevalidator_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QDoubleValidator*
///
QObject* q_doublevalidator_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QDoubleValidator*
/// @param callback QObject* func(QDoubleValidator* self)
///
void q_doublevalidator_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QDoubleValidator*
///
int32_t q_doublevalidator_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QDoubleValidator*
///
int32_t q_doublevalidator_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QDoubleValidator*
/// @param callback int32_t func(QDoubleValidator* self)
///
void q_doublevalidator_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QDoubleValidator*
/// @param signal const char*
///
int32_t q_doublevalidator_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QDoubleValidator*
/// @param signal const char*
///
int32_t q_doublevalidator_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QDoubleValidator*
/// @param callback int32_t func(QDoubleValidator* self, const char* signal)
///
void q_doublevalidator_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QDoubleValidator*
/// @param signal QMetaMethod*
///
bool q_doublevalidator_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QDoubleValidator*
/// @param signal QMetaMethod*
///
bool q_doublevalidator_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QDoubleValidator*
/// @param callback bool func(QDoubleValidator* self, QMetaMethod* signal)
///
void q_doublevalidator_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDoubleValidator*
/// @param callback void func(QDoubleValidator* self, const char* objectName)
///
void q_doublevalidator_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdoublevalidator.html#dtor.QDoubleValidator)
///
/// Delete this object from C++ memory.
///
/// @param self QDoubleValidator*
///
void q_doublevalidator_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionvalidator.html)

/// q_regularexpressionvalidator_new constructs a new QRegularExpressionValidator object.
///
QRegularExpressionValidator* q_regularexpressionvalidator_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionvalidator.html)

/// q_regularexpressionvalidator_new2 constructs a new QRegularExpressionValidator object.
///
/// @param re QRegularExpression*
///
QRegularExpressionValidator* q_regularexpressionvalidator_new2(const void* re);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionvalidator.html)

/// q_regularexpressionvalidator_new3 constructs a new QRegularExpressionValidator object.
///
/// @param parent QObject*
///
QRegularExpressionValidator* q_regularexpressionvalidator_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionvalidator.html)

/// q_regularexpressionvalidator_new4 constructs a new QRegularExpressionValidator object.
///
/// @param re QRegularExpression*
/// @param parent QObject*
///
QRegularExpressionValidator* q_regularexpressionvalidator_new4(const void* re, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QRegularExpressionValidator*
///
const QMetaObject* q_regularexpressionvalidator_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QRegularExpressionValidator*
/// @param callback const QMetaObject* func(const QRegularExpressionValidator* self)
///
void q_regularexpressionvalidator_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QRegularExpressionValidator*
///
const QMetaObject* q_regularexpressionvalidator_super_meta_object(const void* self);

/// @param self QRegularExpressionValidator*
/// @param param1 const char*
///
void* q_regularexpressionvalidator_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QRegularExpressionValidator*
/// @param callback void* func(QRegularExpressionValidator* self, const char* param1)
///
void q_regularexpressionvalidator_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QRegularExpressionValidator*
/// @param param1 const char*
///
void* q_regularexpressionvalidator_super_metacast(void* self, const char* param1);

/// @param self QRegularExpressionValidator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_regularexpressionvalidator_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QRegularExpressionValidator*
/// @param callback int32_t func(QRegularExpressionValidator* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_regularexpressionvalidator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QRegularExpressionValidator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_regularexpressionvalidator_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_regularexpressionvalidator_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionvalidator.html#validate)
///
/// @param self const QRegularExpressionValidator*
/// @param input const char*
/// @param pos int*
///
/// @return enum QValidator__State
///
int32_t q_regularexpressionvalidator_validate(const void* self, const char* input, int* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionvalidator.html#validate)
///
/// Allows for overriding the related default method
///
/// @param self const QRegularExpressionValidator*
/// @param callback int32_t func(const QRegularExpressionValidator* self, const char* input, int* pos)
///
void q_regularexpressionvalidator_on_validate(const void* self, int32_t (*callback)(const void*, const char*, int*));

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionvalidator.html#validate)
///
/// Base class method implementation
///
/// @param self const QRegularExpressionValidator*
/// @param input const char*
/// @param pos int*
///
/// @return enum QValidator__State
///
int32_t q_regularexpressionvalidator_super_validate(const void* self, const char* input, int* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionvalidator.html#regularExpression)
///
/// @param self const QRegularExpressionValidator*
///
QRegularExpression* q_regularexpressionvalidator_regular_expression(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionvalidator.html#setRegularExpression)
///
/// @param self QRegularExpressionValidator*
/// @param re QRegularExpression*
///
void q_regularexpressionvalidator_set_regular_expression(void* self, const void* re);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionvalidator.html#regularExpressionChanged)
///
/// @param self QRegularExpressionValidator*
/// @param re QRegularExpression*
///
void q_regularexpressionvalidator_regular_expression_changed(void* self, const void* re);

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionvalidator.html#regularExpressionChanged)
///
/// @param self QRegularExpressionValidator*
/// @param callback void func(QRegularExpressionValidator* self, QRegularExpression* re)
///
void q_regularexpressionvalidator_on_regular_expression_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_regularexpressionvalidator_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_regularexpressionvalidator_tr3(const char* s, const char* c, int n);

/// Inherited from QValidator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#setLocale)
///
/// @param self QRegularExpressionValidator*
/// @param locale QLocale*
///
void q_regularexpressionvalidator_set_locale(void* self, const void* locale);

/// Inherited from QValidator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#locale)
///
/// @param self const QRegularExpressionValidator*
///
QLocale* q_regularexpressionvalidator_locale(const void* self);

/// Inherited from QValidator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// @param self QRegularExpressionValidator*
///
void q_regularexpressionvalidator_changed(void* self);

/// Inherited from QValidator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#changed)
///
/// @param self QRegularExpressionValidator*
/// @param callback void func(QRegularExpressionValidator* self)
///
void q_regularexpressionvalidator_on_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QRegularExpressionValidator*
///
const char* q_regularexpressionvalidator_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QRegularExpressionValidator*
/// @param name const char*
///
void q_regularexpressionvalidator_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QRegularExpressionValidator*
///
bool q_regularexpressionvalidator_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QRegularExpressionValidator*
///
bool q_regularexpressionvalidator_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QRegularExpressionValidator*
///
bool q_regularexpressionvalidator_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QRegularExpressionValidator*
///
bool q_regularexpressionvalidator_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QRegularExpressionValidator*
/// @param b bool
///
bool q_regularexpressionvalidator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QRegularExpressionValidator*
///
QThread* q_regularexpressionvalidator_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QRegularExpressionValidator*
/// @param thread QThread*
///
bool q_regularexpressionvalidator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QRegularExpressionValidator*
/// @param interval int
///
int32_t q_regularexpressionvalidator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QRegularExpressionValidator*
/// @param time int64_t of nanoseconds
///
int32_t q_regularexpressionvalidator_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QRegularExpressionValidator*
/// @param id int
///
void q_regularexpressionvalidator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QRegularExpressionValidator*
/// @param id enum Qt__TimerId
///
void q_regularexpressionvalidator_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QRegularExpressionValidator*
///
/// @return libqt_list of QObject*
///
libqt_list q_regularexpressionvalidator_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QRegularExpressionValidator*
/// @param parent QObject*
///
void q_regularexpressionvalidator_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QRegularExpressionValidator*
/// @param filterObj QObject*
///
void q_regularexpressionvalidator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QRegularExpressionValidator*
/// @param obj QObject*
///
void q_regularexpressionvalidator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_regularexpressionvalidator_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_regularexpressionvalidator_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QRegularExpressionValidator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_regularexpressionvalidator_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_regularexpressionvalidator_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_regularexpressionvalidator_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QRegularExpressionValidator*
///
bool q_regularexpressionvalidator_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QRegularExpressionValidator*
/// @param receiver QObject*
///
bool q_regularexpressionvalidator_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_regularexpressionvalidator_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QRegularExpressionValidator*
///
void q_regularexpressionvalidator_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QRegularExpressionValidator*
///
void q_regularexpressionvalidator_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QRegularExpressionValidator*
/// @param name const char*
/// @param value QVariant*
///
bool q_regularexpressionvalidator_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QRegularExpressionValidator*
/// @param name const char*
///
QVariant* q_regularexpressionvalidator_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QRegularExpressionValidator*
///
const char** q_regularexpressionvalidator_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QRegularExpressionValidator*
///
QBindingStorage* q_regularexpressionvalidator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QRegularExpressionValidator*
///
const QBindingStorage* q_regularexpressionvalidator_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QRegularExpressionValidator*
///
void q_regularexpressionvalidator_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QRegularExpressionValidator*
/// @param callback void func(QRegularExpressionValidator* self)
///
void q_regularexpressionvalidator_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QRegularExpressionValidator*
///
QObject* q_regularexpressionvalidator_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QRegularExpressionValidator*
/// @param classname const char*
///
bool q_regularexpressionvalidator_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QRegularExpressionValidator*
///
void q_regularexpressionvalidator_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QRegularExpressionValidator*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_regularexpressionvalidator_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QRegularExpressionValidator*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_regularexpressionvalidator_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_regularexpressionvalidator_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_regularexpressionvalidator_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QRegularExpressionValidator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_regularexpressionvalidator_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QRegularExpressionValidator*
/// @param signal const char*
///
bool q_regularexpressionvalidator_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QRegularExpressionValidator*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_regularexpressionvalidator_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QRegularExpressionValidator*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_regularexpressionvalidator_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QRegularExpressionValidator*
/// @param receiver QObject*
/// @param member const char*
///
bool q_regularexpressionvalidator_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QRegularExpressionValidator*
/// @param param1 QObject*
///
void q_regularexpressionvalidator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QRegularExpressionValidator*
/// @param callback void func(QRegularExpressionValidator* self, QObject* param1)
///
void q_regularexpressionvalidator_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QValidator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#fixup)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QRegularExpressionValidator*
/// @param param1 const char*
///
void q_regularexpressionvalidator_fixup(const void* self, const char* param1);

/// Inherited from QValidator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#fixup)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QRegularExpressionValidator*
/// @param param1 const char*
///
void q_regularexpressionvalidator_super_fixup(const void* self, const char* param1);

/// Inherited from QValidator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#fixup)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QRegularExpressionValidator*
/// @param callback void func(QRegularExpressionValidator* self, const char* param1)
///
void q_regularexpressionvalidator_on_fixup(const void* self, void (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param event QEvent*
///
bool q_regularexpressionvalidator_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param event QEvent*
///
bool q_regularexpressionvalidator_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param callback bool func(QRegularExpressionValidator* self, QEvent* event)
///
void q_regularexpressionvalidator_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_regularexpressionvalidator_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_regularexpressionvalidator_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param callback bool func(QRegularExpressionValidator* self, QObject* watched, QEvent* event)
///
void q_regularexpressionvalidator_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param event QTimerEvent*
///
void q_regularexpressionvalidator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param event QTimerEvent*
///
void q_regularexpressionvalidator_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param callback void func(QRegularExpressionValidator* self, QTimerEvent* event)
///
void q_regularexpressionvalidator_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param event QChildEvent*
///
void q_regularexpressionvalidator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param event QChildEvent*
///
void q_regularexpressionvalidator_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param callback void func(QRegularExpressionValidator* self, QChildEvent* event)
///
void q_regularexpressionvalidator_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param event QEvent*
///
void q_regularexpressionvalidator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param event QEvent*
///
void q_regularexpressionvalidator_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param callback void func(QRegularExpressionValidator* self, QEvent* event)
///
void q_regularexpressionvalidator_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param signal QMetaMethod*
///
void q_regularexpressionvalidator_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param signal QMetaMethod*
///
void q_regularexpressionvalidator_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param callback void func(QRegularExpressionValidator* self, QMetaMethod* signal)
///
void q_regularexpressionvalidator_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param signal QMetaMethod*
///
void q_regularexpressionvalidator_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param signal QMetaMethod*
///
void q_regularexpressionvalidator_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRegularExpressionValidator*
/// @param callback void func(QRegularExpressionValidator* self, QMetaMethod* signal)
///
void q_regularexpressionvalidator_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QRegularExpressionValidator*
///
QObject* q_regularexpressionvalidator_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QRegularExpressionValidator*
///
QObject* q_regularexpressionvalidator_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QRegularExpressionValidator*
/// @param callback QObject* func(QRegularExpressionValidator* self)
///
void q_regularexpressionvalidator_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QRegularExpressionValidator*
///
int32_t q_regularexpressionvalidator_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QRegularExpressionValidator*
///
int32_t q_regularexpressionvalidator_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QRegularExpressionValidator*
/// @param callback int32_t func(QRegularExpressionValidator* self)
///
void q_regularexpressionvalidator_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QRegularExpressionValidator*
/// @param signal const char*
///
int32_t q_regularexpressionvalidator_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QRegularExpressionValidator*
/// @param signal const char*
///
int32_t q_regularexpressionvalidator_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QRegularExpressionValidator*
/// @param callback int32_t func(QRegularExpressionValidator* self, const char* signal)
///
void q_regularexpressionvalidator_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QRegularExpressionValidator*
/// @param signal QMetaMethod*
///
bool q_regularexpressionvalidator_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QRegularExpressionValidator*
/// @param signal QMetaMethod*
///
bool q_regularexpressionvalidator_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QRegularExpressionValidator*
/// @param callback bool func(QRegularExpressionValidator* self, QMetaMethod* signal)
///
void q_regularexpressionvalidator_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QRegularExpressionValidator*
/// @param callback void func(QRegularExpressionValidator* self, const char* objectName)
///
void q_regularexpressionvalidator_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qregularexpressionvalidator.html#dtor.QRegularExpressionValidator)
///
/// Delete this object from C++ memory.
///
/// @param self QRegularExpressionValidator*
///
void q_regularexpressionvalidator_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#public-types)

typedef enum {
    QVALIDATOR_STATE_INVALID = 0,
    QVALIDATOR_STATE_INTERMEDIATE = 1,
    QVALIDATOR_STATE_ACCEPTABLE = 2
} QValidator__State;

/// [Upstream resources](https://doc.qt.io/qt-6/qvalidator.html#public-types)

typedef enum {
    QDOUBLEVALIDATOR_NOTATION_STANDARDNOTATION = 0,
    QDOUBLEVALIDATOR_NOTATION_SCIENTIFICNOTATION = 1
} QDoubleValidator__Notation;

#endif
