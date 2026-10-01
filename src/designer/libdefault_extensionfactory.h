#pragma once
#ifndef DESIGNER_LIBDEFAULT_EXTENSIONFACTORY_H
#define DESIGNER_LIBDEFAULT_EXTENSIONFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qextensionfactory.html)

/// q_extensionfactory_new constructs a new QExtensionFactory object.
///
QExtensionFactory* q_extensionfactory_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qextensionfactory.html)

/// q_extensionfactory_new2 constructs a new QExtensionFactory object.
///
/// @param parent QExtensionManager*
///
QExtensionFactory* q_extensionfactory_new2(void* parent);

/// Upcasts to a QAbstractExtensionFactory object
///
/// @param self QExtensionFactory*
///
QAbstractExtensionFactory* q_extensionfactory_as_q_abstract_extension_factory(void* self);

/// Downcasts to a QExtensionFactory object
///
/// @param _qabstractextensionfactory QAbstractExtensionFactory*
///
QExtensionFactory* q_extensionfactory_from_q_abstract_extension_factory(void* _qabstractextensionfactory);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QExtensionFactory*
///
const QMetaObject* q_extensionfactory_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QExtensionFactory*
/// @param callback const QMetaObject* func(const QExtensionFactory* self)
///
void q_extensionfactory_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QExtensionFactory*
///
const QMetaObject* q_extensionfactory_super_meta_object(const void* self);

/// @param self QExtensionFactory*
/// @param param1 const char*
///
void* q_extensionfactory_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QExtensionFactory*
/// @param callback void* func(QExtensionFactory* self, const char* param1)
///
void q_extensionfactory_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QExtensionFactory*
/// @param param1 const char*
///
void* q_extensionfactory_super_metacast(void* self, const char* param1);

/// @param self QExtensionFactory*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_extensionfactory_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QExtensionFactory*
/// @param callback int32_t func(QExtensionFactory* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_extensionfactory_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QExtensionFactory*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_extensionfactory_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_extensionfactory_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qextensionfactory.html#extension)
///
/// @param self const QExtensionFactory*
/// @param object QObject*
/// @param iid const char*
///
QObject* q_extensionfactory_extension(const void* self, void* object, const char* iid);

/// [Upstream resources](https://doc.qt.io/qt-6/qextensionfactory.html#extension)
///
/// Allows for overriding the related default method
///
/// @param self const QExtensionFactory*
/// @param callback QObject* func(const QExtensionFactory* self, QObject* object, const char* iid)
///
void q_extensionfactory_on_extension(const void* self, QObject* (*callback)(const void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qextensionfactory.html#extension)
///
/// Base class method implementation
///
/// @param self const QExtensionFactory*
/// @param object QObject*
/// @param iid const char*
///
QObject* q_extensionfactory_super_extension(const void* self, void* object, const char* iid);

/// [Upstream resources](https://doc.qt.io/qt-6/qextensionfactory.html#extensionManager)
///
/// @param self const QExtensionFactory*
///
QExtensionManager* q_extensionfactory_extension_manager(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qextensionfactory.html#createExtension)
///
/// @param self const QExtensionFactory*
/// @param object QObject*
/// @param iid const char*
/// @param parent QObject*
///
QObject* q_extensionfactory_create_extension(const void* self, void* object, const char* iid, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qextensionfactory.html#createExtension)
///
/// Allows for overriding the related default method
///
/// @param self const QExtensionFactory*
/// @param callback QObject* func(const QExtensionFactory* self, QObject* object, const char* iid, QObject* parent)
///
void q_extensionfactory_on_create_extension(const void* self, QObject* (*callback)(const void*, void*, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qextensionfactory.html#createExtension)
///
/// Base class method implementation
///
/// @param self const QExtensionFactory*
/// @param object QObject*
/// @param iid const char*
/// @param parent QObject*
///
QObject* q_extensionfactory_super_create_extension(const void* self, void* object, const char* iid, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_extensionfactory_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_extensionfactory_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QExtensionFactory*
///
const char* q_extensionfactory_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QExtensionFactory*
/// @param name const char*
///
void q_extensionfactory_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QExtensionFactory*
///
bool q_extensionfactory_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QExtensionFactory*
///
bool q_extensionfactory_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QExtensionFactory*
///
bool q_extensionfactory_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QExtensionFactory*
///
bool q_extensionfactory_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QExtensionFactory*
/// @param b bool
///
bool q_extensionfactory_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QExtensionFactory*
///
QThread* q_extensionfactory_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QExtensionFactory*
/// @param thread QThread*
///
bool q_extensionfactory_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QExtensionFactory*
/// @param interval int
///
int32_t q_extensionfactory_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QExtensionFactory*
/// @param time int64_t of nanoseconds
///
int32_t q_extensionfactory_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QExtensionFactory*
/// @param id int
///
void q_extensionfactory_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QExtensionFactory*
/// @param id enum Qt__TimerId
///
void q_extensionfactory_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QExtensionFactory*
///
/// @return libqt_list of QObject*
///
libqt_list q_extensionfactory_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QExtensionFactory*
/// @param parent QObject*
///
void q_extensionfactory_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QExtensionFactory*
/// @param filterObj QObject*
///
void q_extensionfactory_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QExtensionFactory*
/// @param obj QObject*
///
void q_extensionfactory_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_extensionfactory_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_extensionfactory_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QExtensionFactory*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_extensionfactory_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_extensionfactory_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_extensionfactory_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QExtensionFactory*
///
bool q_extensionfactory_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QExtensionFactory*
/// @param receiver QObject*
///
bool q_extensionfactory_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_extensionfactory_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QExtensionFactory*
///
void q_extensionfactory_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QExtensionFactory*
///
void q_extensionfactory_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QExtensionFactory*
/// @param name const char*
/// @param value QVariant*
///
bool q_extensionfactory_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QExtensionFactory*
/// @param name const char*
///
QVariant* q_extensionfactory_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QExtensionFactory*
///
const char** q_extensionfactory_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QExtensionFactory*
///
QBindingStorage* q_extensionfactory_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QExtensionFactory*
///
const QBindingStorage* q_extensionfactory_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QExtensionFactory*
///
void q_extensionfactory_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QExtensionFactory*
/// @param callback void func(QExtensionFactory* self)
///
void q_extensionfactory_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QExtensionFactory*
///
QObject* q_extensionfactory_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QExtensionFactory*
/// @param classname const char*
///
bool q_extensionfactory_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QExtensionFactory*
///
void q_extensionfactory_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QExtensionFactory*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_extensionfactory_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QExtensionFactory*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_extensionfactory_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_extensionfactory_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_extensionfactory_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QExtensionFactory*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_extensionfactory_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QExtensionFactory*
/// @param signal const char*
///
bool q_extensionfactory_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QExtensionFactory*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_extensionfactory_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QExtensionFactory*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_extensionfactory_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QExtensionFactory*
/// @param receiver QObject*
/// @param member const char*
///
bool q_extensionfactory_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QExtensionFactory*
/// @param param1 QObject*
///
void q_extensionfactory_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QExtensionFactory*
/// @param callback void func(QExtensionFactory* self, QObject* param1)
///
void q_extensionfactory_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractExtensionFactory
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionfactory.html#operator-eq)
///
/// @param self QExtensionFactory*
/// @param param1 QAbstractExtensionFactory*
///
void q_extensionfactory_operator_assign(void* self, const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QExtensionFactory*
/// @param event QEvent*
///
bool q_extensionfactory_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QExtensionFactory*
/// @param event QEvent*
///
bool q_extensionfactory_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QExtensionFactory*
/// @param callback bool func(QExtensionFactory* self, QEvent* event)
///
void q_extensionfactory_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QExtensionFactory*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_extensionfactory_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QExtensionFactory*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_extensionfactory_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QExtensionFactory*
/// @param callback bool func(QExtensionFactory* self, QObject* watched, QEvent* event)
///
void q_extensionfactory_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QExtensionFactory*
/// @param event QTimerEvent*
///
void q_extensionfactory_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QExtensionFactory*
/// @param event QTimerEvent*
///
void q_extensionfactory_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QExtensionFactory*
/// @param callback void func(QExtensionFactory* self, QTimerEvent* event)
///
void q_extensionfactory_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QExtensionFactory*
/// @param event QChildEvent*
///
void q_extensionfactory_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QExtensionFactory*
/// @param event QChildEvent*
///
void q_extensionfactory_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QExtensionFactory*
/// @param callback void func(QExtensionFactory* self, QChildEvent* event)
///
void q_extensionfactory_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QExtensionFactory*
/// @param event QEvent*
///
void q_extensionfactory_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QExtensionFactory*
/// @param event QEvent*
///
void q_extensionfactory_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QExtensionFactory*
/// @param callback void func(QExtensionFactory* self, QEvent* event)
///
void q_extensionfactory_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QExtensionFactory*
/// @param signal QMetaMethod*
///
void q_extensionfactory_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QExtensionFactory*
/// @param signal QMetaMethod*
///
void q_extensionfactory_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QExtensionFactory*
/// @param callback void func(QExtensionFactory* self, QMetaMethod* signal)
///
void q_extensionfactory_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QExtensionFactory*
/// @param signal QMetaMethod*
///
void q_extensionfactory_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QExtensionFactory*
/// @param signal QMetaMethod*
///
void q_extensionfactory_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QExtensionFactory*
/// @param callback void func(QExtensionFactory* self, QMetaMethod* signal)
///
void q_extensionfactory_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QExtensionFactory*
///
QObject* q_extensionfactory_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QExtensionFactory*
///
QObject* q_extensionfactory_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QExtensionFactory*
/// @param callback QObject* func(QExtensionFactory* self)
///
void q_extensionfactory_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QExtensionFactory*
///
int32_t q_extensionfactory_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QExtensionFactory*
///
int32_t q_extensionfactory_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QExtensionFactory*
/// @param callback int32_t func(QExtensionFactory* self)
///
void q_extensionfactory_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QExtensionFactory*
/// @param signal const char*
///
int32_t q_extensionfactory_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QExtensionFactory*
/// @param signal const char*
///
int32_t q_extensionfactory_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QExtensionFactory*
/// @param callback int32_t func(QExtensionFactory* self, const char* signal)
///
void q_extensionfactory_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QExtensionFactory*
/// @param signal QMetaMethod*
///
bool q_extensionfactory_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QExtensionFactory*
/// @param signal QMetaMethod*
///
bool q_extensionfactory_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QExtensionFactory*
/// @param callback bool func(QExtensionFactory* self, QMetaMethod* signal)
///
void q_extensionfactory_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QExtensionFactory*
/// @param callback void func(QExtensionFactory* self, const char* objectName)
///
void q_extensionfactory_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qextensionfactory.html#dtor.QExtensionFactory)
///
/// Delete this object from C++ memory.
///
/// @param self QExtensionFactory*
///
void q_extensionfactory_delete(void* self);

#endif
