#pragma once
#ifndef DESIGNER_LIBQEXTENSIONMANAGER_H
#define DESIGNER_LIBQEXTENSIONMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qextensionmanager.html)

/// q_extensionmanager_new constructs a new QExtensionManager object.
///
QExtensionManager* q_extensionmanager_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qextensionmanager.html)

/// q_extensionmanager_new2 constructs a new QExtensionManager object.
///
/// @param parent QObject*
///
QExtensionManager* q_extensionmanager_new2(void* parent);

/// Upcasts to a QAbstractExtensionManager object
///
/// @param self QExtensionManager*
///
QAbstractExtensionManager* q_extensionmanager_as_q_abstract_extension_manager(void* self);

/// Downcasts to a QExtensionManager object
///
/// @param _qabstractextensionmanager QAbstractExtensionManager*
///
QExtensionManager* q_extensionmanager_from_q_abstract_extension_manager(void* _qabstractextensionmanager);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QExtensionManager*
///
const QMetaObject* q_extensionmanager_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QExtensionManager*
/// @param callback const QMetaObject* func(const QExtensionManager* self)
///
void q_extensionmanager_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QExtensionManager*
///
const QMetaObject* q_extensionmanager_super_meta_object(const void* self);

/// @param self QExtensionManager*
/// @param param1 const char*
///
void* q_extensionmanager_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QExtensionManager*
/// @param callback void* func(QExtensionManager* self, const char* param1)
///
void q_extensionmanager_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QExtensionManager*
/// @param param1 const char*
///
void* q_extensionmanager_super_metacast(void* self, const char* param1);

/// @param self QExtensionManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_extensionmanager_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QExtensionManager*
/// @param callback int32_t func(QExtensionManager* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_extensionmanager_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QExtensionManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_extensionmanager_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_extensionmanager_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qextensionmanager.html#registerExtensions)
///
/// @param self QExtensionManager*
/// @param factory QAbstractExtensionFactory*
/// @param iid const char*
///
void q_extensionmanager_register_extensions(void* self, void* factory, const char* iid);

/// [Upstream resources](https://doc.qt.io/qt-6/qextensionmanager.html#registerExtensions)
///
/// Allows for overriding the related default method
///
/// @param self QExtensionManager*
/// @param callback void func(QExtensionManager* self, QAbstractExtensionFactory* factory, const char* iid)
///
void q_extensionmanager_on_register_extensions(void* self, void (*callback)(void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qextensionmanager.html#registerExtensions)
///
/// Base class method implementation
///
/// @param self QExtensionManager*
/// @param factory QAbstractExtensionFactory*
/// @param iid const char*
///
void q_extensionmanager_super_register_extensions(void* self, void* factory, const char* iid);

/// [Upstream resources](https://doc.qt.io/qt-6/qextensionmanager.html#unregisterExtensions)
///
/// @param self QExtensionManager*
/// @param factory QAbstractExtensionFactory*
/// @param iid const char*
///
void q_extensionmanager_unregister_extensions(void* self, void* factory, const char* iid);

/// [Upstream resources](https://doc.qt.io/qt-6/qextensionmanager.html#unregisterExtensions)
///
/// Allows for overriding the related default method
///
/// @param self QExtensionManager*
/// @param callback void func(QExtensionManager* self, QAbstractExtensionFactory* factory, const char* iid)
///
void q_extensionmanager_on_unregister_extensions(void* self, void (*callback)(void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qextensionmanager.html#unregisterExtensions)
///
/// Base class method implementation
///
/// @param self QExtensionManager*
/// @param factory QAbstractExtensionFactory*
/// @param iid const char*
///
void q_extensionmanager_super_unregister_extensions(void* self, void* factory, const char* iid);

/// [Upstream resources](https://doc.qt.io/qt-6/qextensionmanager.html#extension)
///
/// @param self const QExtensionManager*
/// @param object QObject*
/// @param iid const char*
///
QObject* q_extensionmanager_extension(const void* self, void* object, const char* iid);

/// [Upstream resources](https://doc.qt.io/qt-6/qextensionmanager.html#extension)
///
/// Allows for overriding the related default method
///
/// @param self const QExtensionManager*
/// @param callback QObject* func(const QExtensionManager* self, QObject* object, const char* iid)
///
void q_extensionmanager_on_extension(const void* self, QObject* (*callback)(const void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qextensionmanager.html#extension)
///
/// Base class method implementation
///
/// @param self const QExtensionManager*
/// @param object QObject*
/// @param iid const char*
///
QObject* q_extensionmanager_super_extension(const void* self, void* object, const char* iid);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_extensionmanager_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_extensionmanager_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QExtensionManager*
///
const char* q_extensionmanager_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QExtensionManager*
/// @param name const char*
///
void q_extensionmanager_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QExtensionManager*
///
bool q_extensionmanager_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QExtensionManager*
///
bool q_extensionmanager_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QExtensionManager*
///
bool q_extensionmanager_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QExtensionManager*
///
bool q_extensionmanager_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QExtensionManager*
/// @param b bool
///
bool q_extensionmanager_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QExtensionManager*
///
QThread* q_extensionmanager_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QExtensionManager*
/// @param thread QThread*
///
bool q_extensionmanager_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QExtensionManager*
/// @param interval int
///
int32_t q_extensionmanager_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QExtensionManager*
/// @param time int64_t of nanoseconds
///
int32_t q_extensionmanager_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QExtensionManager*
/// @param id int
///
void q_extensionmanager_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QExtensionManager*
/// @param id enum Qt__TimerId
///
void q_extensionmanager_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QExtensionManager*
///
/// @return libqt_list of QObject*
///
libqt_list q_extensionmanager_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QExtensionManager*
/// @param parent QObject*
///
void q_extensionmanager_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QExtensionManager*
/// @param filterObj QObject*
///
void q_extensionmanager_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QExtensionManager*
/// @param obj QObject*
///
void q_extensionmanager_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_extensionmanager_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_extensionmanager_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QExtensionManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_extensionmanager_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_extensionmanager_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_extensionmanager_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QExtensionManager*
///
bool q_extensionmanager_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QExtensionManager*
/// @param receiver QObject*
///
bool q_extensionmanager_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_extensionmanager_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QExtensionManager*
///
void q_extensionmanager_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QExtensionManager*
///
void q_extensionmanager_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QExtensionManager*
/// @param name const char*
/// @param value QVariant*
///
bool q_extensionmanager_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QExtensionManager*
/// @param name const char*
///
QVariant* q_extensionmanager_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QExtensionManager*
///
const char** q_extensionmanager_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QExtensionManager*
///
QBindingStorage* q_extensionmanager_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QExtensionManager*
///
const QBindingStorage* q_extensionmanager_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QExtensionManager*
///
void q_extensionmanager_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QExtensionManager*
/// @param callback void func(QExtensionManager* self)
///
void q_extensionmanager_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QExtensionManager*
///
QObject* q_extensionmanager_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QExtensionManager*
/// @param classname const char*
///
bool q_extensionmanager_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QExtensionManager*
///
void q_extensionmanager_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QExtensionManager*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_extensionmanager_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QExtensionManager*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_extensionmanager_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_extensionmanager_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_extensionmanager_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QExtensionManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_extensionmanager_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QExtensionManager*
/// @param signal const char*
///
bool q_extensionmanager_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QExtensionManager*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_extensionmanager_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QExtensionManager*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_extensionmanager_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QExtensionManager*
/// @param receiver QObject*
/// @param member const char*
///
bool q_extensionmanager_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QExtensionManager*
/// @param param1 QObject*
///
void q_extensionmanager_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QExtensionManager*
/// @param callback void func(QExtensionManager* self, QObject* param1)
///
void q_extensionmanager_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractExtensionManager
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionmanager.html#operator-eq)
///
/// @param self QExtensionManager*
/// @param param1 QAbstractExtensionManager*
///
void q_extensionmanager_operator_assign(void* self, const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QExtensionManager*
/// @param event QEvent*
///
bool q_extensionmanager_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QExtensionManager*
/// @param event QEvent*
///
bool q_extensionmanager_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QExtensionManager*
/// @param callback bool func(QExtensionManager* self, QEvent* event)
///
void q_extensionmanager_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QExtensionManager*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_extensionmanager_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QExtensionManager*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_extensionmanager_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QExtensionManager*
/// @param callback bool func(QExtensionManager* self, QObject* watched, QEvent* event)
///
void q_extensionmanager_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QExtensionManager*
/// @param event QTimerEvent*
///
void q_extensionmanager_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QExtensionManager*
/// @param event QTimerEvent*
///
void q_extensionmanager_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QExtensionManager*
/// @param callback void func(QExtensionManager* self, QTimerEvent* event)
///
void q_extensionmanager_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QExtensionManager*
/// @param event QChildEvent*
///
void q_extensionmanager_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QExtensionManager*
/// @param event QChildEvent*
///
void q_extensionmanager_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QExtensionManager*
/// @param callback void func(QExtensionManager* self, QChildEvent* event)
///
void q_extensionmanager_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QExtensionManager*
/// @param event QEvent*
///
void q_extensionmanager_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QExtensionManager*
/// @param event QEvent*
///
void q_extensionmanager_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QExtensionManager*
/// @param callback void func(QExtensionManager* self, QEvent* event)
///
void q_extensionmanager_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QExtensionManager*
/// @param signal QMetaMethod*
///
void q_extensionmanager_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QExtensionManager*
/// @param signal QMetaMethod*
///
void q_extensionmanager_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QExtensionManager*
/// @param callback void func(QExtensionManager* self, QMetaMethod* signal)
///
void q_extensionmanager_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QExtensionManager*
/// @param signal QMetaMethod*
///
void q_extensionmanager_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QExtensionManager*
/// @param signal QMetaMethod*
///
void q_extensionmanager_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QExtensionManager*
/// @param callback void func(QExtensionManager* self, QMetaMethod* signal)
///
void q_extensionmanager_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QExtensionManager*
///
QObject* q_extensionmanager_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QExtensionManager*
///
QObject* q_extensionmanager_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QExtensionManager*
/// @param callback QObject* func(QExtensionManager* self)
///
void q_extensionmanager_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QExtensionManager*
///
int32_t q_extensionmanager_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QExtensionManager*
///
int32_t q_extensionmanager_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QExtensionManager*
/// @param callback int32_t func(QExtensionManager* self)
///
void q_extensionmanager_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QExtensionManager*
/// @param signal const char*
///
int32_t q_extensionmanager_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QExtensionManager*
/// @param signal const char*
///
int32_t q_extensionmanager_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QExtensionManager*
/// @param callback int32_t func(QExtensionManager* self, const char* signal)
///
void q_extensionmanager_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QExtensionManager*
/// @param signal QMetaMethod*
///
bool q_extensionmanager_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QExtensionManager*
/// @param signal QMetaMethod*
///
bool q_extensionmanager_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QExtensionManager*
/// @param callback bool func(QExtensionManager* self, QMetaMethod* signal)
///
void q_extensionmanager_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QExtensionManager*
/// @param callback void func(QExtensionManager* self, const char* objectName)
///
void q_extensionmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qextensionmanager.html#dtor.QExtensionManager)
///
/// Delete this object from C++ memory.
///
/// @param self QExtensionManager*
///
void q_extensionmanager_delete(void* self);

#endif
