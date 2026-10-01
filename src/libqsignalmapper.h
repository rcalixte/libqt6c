#pragma once
#ifndef LIBQSIGNALMAPPER_H
#define LIBQSIGNALMAPPER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsignalmapper.html)

/// q_signalmapper_new constructs a new QSignalMapper object.
///
QSignalMapper* q_signalmapper_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsignalmapper.html)

/// q_signalmapper_new2 constructs a new QSignalMapper object.
///
/// @param parent QObject*
///
QSignalMapper* q_signalmapper_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QSignalMapper*
///
const QMetaObject* q_signalmapper_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QSignalMapper*
/// @param callback const QMetaObject* func(const QSignalMapper* self)
///
void q_signalmapper_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QSignalMapper*
///
const QMetaObject* q_signalmapper_super_meta_object(const void* self);

/// @param self QSignalMapper*
/// @param param1 const char*
///
void* q_signalmapper_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QSignalMapper*
/// @param callback void* func(QSignalMapper* self, const char* param1)
///
void q_signalmapper_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QSignalMapper*
/// @param param1 const char*
///
void* q_signalmapper_super_metacast(void* self, const char* param1);

/// @param self QSignalMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_signalmapper_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSignalMapper*
/// @param callback int32_t func(QSignalMapper* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_signalmapper_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QSignalMapper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_signalmapper_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_signalmapper_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignalmapper.html#setMapping)
///
/// @param self QSignalMapper*
/// @param sender QObject*
/// @param id int
///
void q_signalmapper_set_mapping(void* self, void* sender, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignalmapper.html#setMapping)
///
/// @param self QSignalMapper*
/// @param sender QObject*
/// @param text const char*
///
void q_signalmapper_set_mapping2(void* self, void* sender, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignalmapper.html#setMapping)
///
/// @param self QSignalMapper*
/// @param sender QObject*
/// @param object QObject*
///
void q_signalmapper_set_mapping3(void* self, void* sender, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignalmapper.html#removeMappings)
///
/// @param self QSignalMapper*
/// @param sender QObject*
///
void q_signalmapper_remove_mappings(void* self, void* sender);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignalmapper.html#mapping)
///
/// @param self const QSignalMapper*
/// @param id int
///
QObject* q_signalmapper_mapping(const void* self, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignalmapper.html#mapping)
///
/// @param self const QSignalMapper*
/// @param text const char*
///
QObject* q_signalmapper_mapping2(const void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignalmapper.html#mapping)
///
/// @param self const QSignalMapper*
/// @param object QObject*
///
QObject* q_signalmapper_mapping3(const void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignalmapper.html#mappedInt)
///
/// @param self QSignalMapper*
/// @param param1 int
///
void q_signalmapper_mapped_int(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignalmapper.html#mappedInt)
///
/// @param self QSignalMapper*
/// @param callback void func(QSignalMapper* self, int param1)
///
void q_signalmapper_on_mapped_int(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsignalmapper.html#mappedString)
///
/// @param self QSignalMapper*
/// @param param1 const char*
///
void q_signalmapper_mapped_string(void* self, const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignalmapper.html#mappedString)
///
/// @param self QSignalMapper*
/// @param callback void func(QSignalMapper* self, const char* param1)
///
void q_signalmapper_on_mapped_string(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsignalmapper.html#mappedObject)
///
/// @param self QSignalMapper*
/// @param param1 QObject*
///
void q_signalmapper_mapped_object(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignalmapper.html#mappedObject)
///
/// @param self QSignalMapper*
/// @param callback void func(QSignalMapper* self, QObject* param1)
///
void q_signalmapper_on_mapped_object(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsignalmapper.html#map)
///
/// @param self QSignalMapper*
///
void q_signalmapper_map(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignalmapper.html#map)
///
/// @param self QSignalMapper*
/// @param sender QObject*
///
void q_signalmapper_map2(void* self, void* sender);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_signalmapper_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_signalmapper_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSignalMapper*
///
const char* q_signalmapper_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSignalMapper*
/// @param name const char*
///
void q_signalmapper_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QSignalMapper*
///
bool q_signalmapper_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QSignalMapper*
///
bool q_signalmapper_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QSignalMapper*
///
bool q_signalmapper_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QSignalMapper*
///
bool q_signalmapper_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSignalMapper*
/// @param b bool
///
bool q_signalmapper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QSignalMapper*
///
QThread* q_signalmapper_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSignalMapper*
/// @param thread QThread*
///
bool q_signalmapper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSignalMapper*
/// @param interval int
///
int32_t q_signalmapper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSignalMapper*
/// @param time int64_t of nanoseconds
///
int32_t q_signalmapper_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSignalMapper*
/// @param id int
///
void q_signalmapper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSignalMapper*
/// @param id enum Qt__TimerId
///
void q_signalmapper_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QSignalMapper*
///
/// @return libqt_list of QObject*
///
libqt_list q_signalmapper_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSignalMapper*
/// @param parent QObject*
///
void q_signalmapper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSignalMapper*
/// @param filterObj QObject*
///
void q_signalmapper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSignalMapper*
/// @param obj QObject*
///
void q_signalmapper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_signalmapper_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_signalmapper_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QSignalMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_signalmapper_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_signalmapper_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_signalmapper_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSignalMapper*
///
bool q_signalmapper_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSignalMapper*
/// @param receiver QObject*
///
bool q_signalmapper_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_signalmapper_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QSignalMapper*
///
void q_signalmapper_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QSignalMapper*
///
void q_signalmapper_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSignalMapper*
/// @param name const char*
/// @param value QVariant*
///
bool q_signalmapper_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QSignalMapper*
/// @param name const char*
///
QVariant* q_signalmapper_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QSignalMapper*
///
const char** q_signalmapper_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSignalMapper*
///
QBindingStorage* q_signalmapper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QSignalMapper*
///
const QBindingStorage* q_signalmapper_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSignalMapper*
///
void q_signalmapper_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSignalMapper*
/// @param callback void func(QSignalMapper* self)
///
void q_signalmapper_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QSignalMapper*
///
QObject* q_signalmapper_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QSignalMapper*
/// @param classname const char*
///
bool q_signalmapper_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSignalMapper*
///
void q_signalmapper_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSignalMapper*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_signalmapper_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSignalMapper*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_signalmapper_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_signalmapper_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_signalmapper_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QSignalMapper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_signalmapper_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSignalMapper*
/// @param signal const char*
///
bool q_signalmapper_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSignalMapper*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_signalmapper_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSignalMapper*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_signalmapper_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSignalMapper*
/// @param receiver QObject*
/// @param member const char*
///
bool q_signalmapper_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSignalMapper*
/// @param param1 QObject*
///
void q_signalmapper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSignalMapper*
/// @param callback void func(QSignalMapper* self, QObject* param1)
///
void q_signalmapper_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalMapper*
/// @param event QEvent*
///
bool q_signalmapper_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param event QEvent*
///
bool q_signalmapper_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param callback bool func(QSignalMapper* self, QEvent* event)
///
void q_signalmapper_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalMapper*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_signalmapper_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_signalmapper_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param callback bool func(QSignalMapper* self, QObject* watched, QEvent* event)
///
void q_signalmapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalMapper*
/// @param event QTimerEvent*
///
void q_signalmapper_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param event QTimerEvent*
///
void q_signalmapper_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param callback void func(QSignalMapper* self, QTimerEvent* event)
///
void q_signalmapper_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalMapper*
/// @param event QChildEvent*
///
void q_signalmapper_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param event QChildEvent*
///
void q_signalmapper_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param callback void func(QSignalMapper* self, QChildEvent* event)
///
void q_signalmapper_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalMapper*
/// @param event QEvent*
///
void q_signalmapper_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param event QEvent*
///
void q_signalmapper_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param callback void func(QSignalMapper* self, QEvent* event)
///
void q_signalmapper_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalMapper*
/// @param signal QMetaMethod*
///
void q_signalmapper_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param signal QMetaMethod*
///
void q_signalmapper_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param callback void func(QSignalMapper* self, QMetaMethod* signal)
///
void q_signalmapper_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalMapper*
/// @param signal QMetaMethod*
///
void q_signalmapper_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param signal QMetaMethod*
///
void q_signalmapper_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalMapper*
/// @param callback void func(QSignalMapper* self, QMetaMethod* signal)
///
void q_signalmapper_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSignalMapper*
///
QObject* q_signalmapper_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSignalMapper*
///
QObject* q_signalmapper_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSignalMapper*
/// @param callback QObject* func(QSignalMapper* self)
///
void q_signalmapper_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSignalMapper*
///
int32_t q_signalmapper_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSignalMapper*
///
int32_t q_signalmapper_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSignalMapper*
/// @param callback int32_t func(QSignalMapper* self)
///
void q_signalmapper_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSignalMapper*
/// @param signal const char*
///
int32_t q_signalmapper_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSignalMapper*
/// @param signal const char*
///
int32_t q_signalmapper_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSignalMapper*
/// @param callback int32_t func(QSignalMapper* self, const char* signal)
///
void q_signalmapper_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSignalMapper*
/// @param signal QMetaMethod*
///
bool q_signalmapper_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSignalMapper*
/// @param signal QMetaMethod*
///
bool q_signalmapper_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSignalMapper*
/// @param callback bool func(QSignalMapper* self, QMetaMethod* signal)
///
void q_signalmapper_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSignalMapper*
/// @param callback void func(QSignalMapper* self, const char* objectName)
///
void q_signalmapper_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsignalmapper.html#dtor.QSignalMapper)
///
/// Delete this object from C++ memory.
///
/// @param self QSignalMapper*
///
void q_signalmapper_delete(void* self);

#endif
