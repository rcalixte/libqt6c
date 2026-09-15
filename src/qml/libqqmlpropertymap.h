#pragma once
#ifndef QML_LIBQQMLPROPERTYMAP_H
#define QML_LIBQQMLPROPERTYMAP_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html)

/// q_qmlpropertymap_new constructs a new QQmlPropertyMap object.
///
QQmlPropertyMap* q_qmlpropertymap_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html)

/// q_qmlpropertymap_new2 constructs a new QQmlPropertyMap object.
///
/// @param parent QObject*
///
QQmlPropertyMap* q_qmlpropertymap_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QQmlPropertyMap*
///
const QMetaObject* q_qmlpropertymap_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQmlPropertyMap*
/// @param callback const QMetaObject* func()
///
void q_qmlpropertymap_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QQmlPropertyMap*
///
const QMetaObject* q_qmlpropertymap_super_meta_object(void* self);

/// @param self QQmlPropertyMap*
/// @param param1 const char*
///
void* q_qmlpropertymap_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQmlPropertyMap*
/// @param callback void* func(QQmlPropertyMap* self, const char* param1)
///
void q_qmlpropertymap_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQmlPropertyMap*
/// @param param1 const char*
///
void* q_qmlpropertymap_super_metacast(void* self, const char* param1);

/// @param self QQmlPropertyMap*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_qmlpropertymap_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQmlPropertyMap*
/// @param callback int32_t func(QQmlPropertyMap* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_qmlpropertymap_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQmlPropertyMap*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_qmlpropertymap_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_qmlpropertymap_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#value)
///
/// @param self QQmlPropertyMap*
/// @param key const char*
///
QVariant* q_qmlpropertymap_value(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#insert)
///
/// @param self QQmlPropertyMap*
/// @param key const char*
/// @param value QVariant*
///
void q_qmlpropertymap_insert(void* self, const char* key, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#insert)
///
/// @param self QQmlPropertyMap*
/// @param values libqt_map of const char* to QVariant*
///
void q_qmlpropertymap_insert2(void* self, libqt_map values);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#clear)
///
/// @param self QQmlPropertyMap*
/// @param key const char*
///
void q_qmlpropertymap_clear(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#freeze)
///
/// @param self QQmlPropertyMap*
///
void q_qmlpropertymap_freeze(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#keys)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQmlPropertyMap*
///
const char** q_qmlpropertymap_keys(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#count)
///
/// @param self QQmlPropertyMap*
///
int32_t q_qmlpropertymap_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#size)
///
/// @param self QQmlPropertyMap*
///
int32_t q_qmlpropertymap_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#isEmpty)
///
/// @param self QQmlPropertyMap*
///
bool q_qmlpropertymap_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#contains)
///
/// @param self QQmlPropertyMap*
/// @param key const char*
///
bool q_qmlpropertymap_contains(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#operator-5b-5d)
///
/// @param self QQmlPropertyMap*
/// @param key const char*
///
QVariant* q_qmlpropertymap_operator_subscript(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#operator-5b-5d)
///
/// @param self QQmlPropertyMap*
/// @param key const char*
///
QVariant* q_qmlpropertymap_operator_subscript2(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#valueChanged)
///
/// @param self QQmlPropertyMap*
/// @param key const char*
/// @param value QVariant*
///
void q_qmlpropertymap_value_changed(void* self, const char* key, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#valueChanged)
///
/// @param self QQmlPropertyMap*
/// @param callback void func(QQmlPropertyMap* self, const char* key, QVariant* value)
///
void q_qmlpropertymap_on_value_changed(void* self, void (*callback)(void*, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#updateValue)
///
/// @param self QQmlPropertyMap*
/// @param key const char*
/// @param input QVariant*
///
QVariant* q_qmlpropertymap_update_value(void* self, const char* key, void* input);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#updateValue)
///
/// Allows for overriding the related default method
///
/// @param self QQmlPropertyMap*
/// @param callback QVariant* func(QQmlPropertyMap* self, const char* key, QVariant* input)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_qmlpropertymap_on_update_value(void* self, QVariant* (*callback)(void*, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#updateValue)
///
/// Base class method implementation
///
/// @param self QQmlPropertyMap*
/// @param key const char*
/// @param input QVariant*
///
QVariant* q_qmlpropertymap_super_update_value(void* self, const char* key, void* input);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_qmlpropertymap_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_qmlpropertymap_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQmlPropertyMap*
///
const char* q_qmlpropertymap_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQmlPropertyMap*
/// @param name const char*
///
void q_qmlpropertymap_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QQmlPropertyMap*
///
bool q_qmlpropertymap_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QQmlPropertyMap*
///
bool q_qmlpropertymap_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QQmlPropertyMap*
///
bool q_qmlpropertymap_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QQmlPropertyMap*
///
bool q_qmlpropertymap_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQmlPropertyMap*
/// @param b bool
///
bool q_qmlpropertymap_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QQmlPropertyMap*
///
QThread* q_qmlpropertymap_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQmlPropertyMap*
/// @param thread QThread*
///
bool q_qmlpropertymap_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlPropertyMap*
/// @param interval int
///
int32_t q_qmlpropertymap_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlPropertyMap*
/// @param time int64_t of nanoseconds
///
int32_t q_qmlpropertymap_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQmlPropertyMap*
/// @param id int
///
void q_qmlpropertymap_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQmlPropertyMap*
/// @param id enum Qt__TimerId
///
void q_qmlpropertymap_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QQmlPropertyMap*
///
/// @return libqt_list of QObject*
///
libqt_list q_qmlpropertymap_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQmlPropertyMap*
/// @param parent QObject*
///
void q_qmlpropertymap_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQmlPropertyMap*
/// @param filterObj QObject*
///
void q_qmlpropertymap_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQmlPropertyMap*
/// @param obj QObject*
///
void q_qmlpropertymap_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_qmlpropertymap_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_qmlpropertymap_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQmlPropertyMap*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_qmlpropertymap_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlpropertymap_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_qmlpropertymap_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlPropertyMap*
///
bool q_qmlpropertymap_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlPropertyMap*
/// @param receiver QObject*
///
bool q_qmlpropertymap_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_qmlpropertymap_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QQmlPropertyMap*
///
void q_qmlpropertymap_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QQmlPropertyMap*
///
void q_qmlpropertymap_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQmlPropertyMap*
/// @param name const char*
/// @param value QVariant*
///
bool q_qmlpropertymap_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QQmlPropertyMap*
/// @param name const char*
///
QVariant* q_qmlpropertymap_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQmlPropertyMap*
///
const char** q_qmlpropertymap_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQmlPropertyMap*
///
QBindingStorage* q_qmlpropertymap_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQmlPropertyMap*
///
const QBindingStorage* q_qmlpropertymap_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlPropertyMap*
///
void q_qmlpropertymap_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlPropertyMap*
/// @param callback void func(QQmlPropertyMap* self)
///
void q_qmlpropertymap_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QQmlPropertyMap*
///
QObject* q_qmlpropertymap_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QQmlPropertyMap*
/// @param classname const char*
///
bool q_qmlpropertymap_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQmlPropertyMap*
///
void q_qmlpropertymap_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlPropertyMap*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_qmlpropertymap_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlPropertyMap*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_qmlpropertymap_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_qmlpropertymap_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_qmlpropertymap_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQmlPropertyMap*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_qmlpropertymap_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlPropertyMap*
/// @param signal const char*
///
bool q_qmlpropertymap_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlPropertyMap*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_qmlpropertymap_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlPropertyMap*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlpropertymap_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlPropertyMap*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlpropertymap_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlPropertyMap*
/// @param param1 QObject*
///
void q_qmlpropertymap_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlPropertyMap*
/// @param callback void func(QQmlPropertyMap* self, QObject* param1)
///
void q_qmlpropertymap_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param event QEvent*
///
bool q_qmlpropertymap_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param event QEvent*
///
bool q_qmlpropertymap_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param callback bool func(QQmlPropertyMap* self, QEvent* event)
///
void q_qmlpropertymap_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_qmlpropertymap_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_qmlpropertymap_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param callback bool func(QQmlPropertyMap* self, QObject* watched, QEvent* event)
///
void q_qmlpropertymap_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param event QTimerEvent*
///
void q_qmlpropertymap_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param event QTimerEvent*
///
void q_qmlpropertymap_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param callback void func(QQmlPropertyMap* self, QTimerEvent* event)
///
void q_qmlpropertymap_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param event QChildEvent*
///
void q_qmlpropertymap_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param event QChildEvent*
///
void q_qmlpropertymap_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param callback void func(QQmlPropertyMap* self, QChildEvent* event)
///
void q_qmlpropertymap_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param event QEvent*
///
void q_qmlpropertymap_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param event QEvent*
///
void q_qmlpropertymap_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param callback void func(QQmlPropertyMap* self, QEvent* event)
///
void q_qmlpropertymap_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param signal QMetaMethod*
///
void q_qmlpropertymap_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param signal QMetaMethod*
///
void q_qmlpropertymap_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param callback void func(QQmlPropertyMap* self, QMetaMethod* signal)
///
void q_qmlpropertymap_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param signal QMetaMethod*
///
void q_qmlpropertymap_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param signal QMetaMethod*
///
void q_qmlpropertymap_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param callback void func(QQmlPropertyMap* self, QMetaMethod* signal)
///
void q_qmlpropertymap_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlPropertyMap*
///
QObject* q_qmlpropertymap_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlPropertyMap*
///
QObject* q_qmlpropertymap_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param callback QObject* func()
///
void q_qmlpropertymap_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlPropertyMap*
///
int32_t q_qmlpropertymap_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlPropertyMap*
///
int32_t q_qmlpropertymap_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param callback int32_t func()
///
void q_qmlpropertymap_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param signal const char*
///
int32_t q_qmlpropertymap_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param signal const char*
///
int32_t q_qmlpropertymap_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param callback int32_t func(QQmlPropertyMap* self, const char* signal)
///
void q_qmlpropertymap_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param signal QMetaMethod*
///
bool q_qmlpropertymap_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param signal QMetaMethod*
///
bool q_qmlpropertymap_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlPropertyMap*
/// @param callback bool func(QQmlPropertyMap* self, QMetaMethod* signal)
///
void q_qmlpropertymap_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQmlPropertyMap*
/// @param callback void func(QQmlPropertyMap* self, const char* objectName)
///
void q_qmlpropertymap_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#dtor.QQmlPropertyMap)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlPropertyMap*
///
void q_qmlpropertymap_delete(void* self);

#endif
