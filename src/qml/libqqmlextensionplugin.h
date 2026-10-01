#pragma once
#ifndef QML_LIBQQMLEXTENSIONPLUGIN_H
#define QML_LIBQQMLEXTENSIONPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlextensionplugin.html)

/// q_qmlextensionplugin_new constructs a new QQmlExtensionPlugin object.
///
QQmlExtensionPlugin* q_qmlextensionplugin_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlextensionplugin.html)

/// q_qmlextensionplugin_new2 constructs a new QQmlExtensionPlugin object.
///
/// @param parent QObject*
///
QQmlExtensionPlugin* q_qmlextensionplugin_new2(void* parent);

/// Upcasts to a QQmlExtensionInterface object
///
/// @param self QQmlExtensionPlugin*
///
QQmlExtensionInterface* q_qmlextensionplugin_as_q_qml_extension_interface(void* self);

/// Downcasts to a QQmlExtensionPlugin object
///
/// @param _qqmlextensioninterface QQmlExtensionInterface*
///
QQmlExtensionPlugin* q_qmlextensionplugin_from_q_qml_extension_interface(void* _qqmlextensioninterface);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QQmlExtensionPlugin*
///
const QMetaObject* q_qmlextensionplugin_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QQmlExtensionPlugin*
/// @param callback const QMetaObject* func(const QQmlExtensionPlugin* self)
///
void q_qmlextensionplugin_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QQmlExtensionPlugin*
///
const QMetaObject* q_qmlextensionplugin_super_meta_object(const void* self);

/// @param self QQmlExtensionPlugin*
/// @param param1 const char*
///
void* q_qmlextensionplugin_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQmlExtensionPlugin*
/// @param callback void* func(QQmlExtensionPlugin* self, const char* param1)
///
void q_qmlextensionplugin_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQmlExtensionPlugin*
/// @param param1 const char*
///
void* q_qmlextensionplugin_super_metacast(void* self, const char* param1);

/// @param self QQmlExtensionPlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_qmlextensionplugin_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQmlExtensionPlugin*
/// @param callback int32_t func(QQmlExtensionPlugin* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_qmlextensionplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQmlExtensionPlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_qmlextensionplugin_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_qmlextensionplugin_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlextensionplugin.html#baseUrl)
///
/// @param self const QQmlExtensionPlugin*
///
QUrl* q_qmlextensionplugin_base_url(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlextensionplugin.html#registerTypes)
///
/// @warning This method must be implemented with `q_qmlextensionplugin_on_register_types` before it can be called.
///
/// @param self QQmlExtensionPlugin*
/// @param uri const char*
///
void q_qmlextensionplugin_register_types(void* self, const char* uri);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlextensionplugin.html#registerTypes)
///
/// Allows for overriding the related default method
///
/// @param self QQmlExtensionPlugin*
/// @param callback void func(QQmlExtensionPlugin* self, const char* uri)
///
void q_qmlextensionplugin_on_register_types(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlextensionplugin.html#unregisterTypes)
///
/// @param self QQmlExtensionPlugin*
///
void q_qmlextensionplugin_unregister_types(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlextensionplugin.html#unregisterTypes)
///
/// Allows for overriding the related default method
///
/// @param self QQmlExtensionPlugin*
/// @param callback void func(QQmlExtensionPlugin* self)
///
void q_qmlextensionplugin_on_unregister_types(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlextensionplugin.html#unregisterTypes)
///
/// Base class method implementation
///
/// @param self QQmlExtensionPlugin*
///
void q_qmlextensionplugin_super_unregister_types(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlextensionplugin.html#initializeEngine)
///
/// @param self QQmlExtensionPlugin*
/// @param engine QQmlEngine*
/// @param uri const char*
///
void q_qmlextensionplugin_initialize_engine(void* self, void* engine, const char* uri);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlextensionplugin.html#initializeEngine)
///
/// Allows for overriding the related default method
///
/// @param self QQmlExtensionPlugin*
/// @param callback void func(QQmlExtensionPlugin* self, QQmlEngine* engine, const char* uri)
///
void q_qmlextensionplugin_on_initialize_engine(void* self, void (*callback)(void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlextensionplugin.html#initializeEngine)
///
/// Base class method implementation
///
/// @param self QQmlExtensionPlugin*
/// @param engine QQmlEngine*
/// @param uri const char*
///
void q_qmlextensionplugin_super_initialize_engine(void* self, void* engine, const char* uri);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_qmlextensionplugin_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_qmlextensionplugin_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQmlExtensionPlugin*
///
const char* q_qmlextensionplugin_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQmlExtensionPlugin*
/// @param name const char*
///
void q_qmlextensionplugin_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QQmlExtensionPlugin*
///
bool q_qmlextensionplugin_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QQmlExtensionPlugin*
///
bool q_qmlextensionplugin_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QQmlExtensionPlugin*
///
bool q_qmlextensionplugin_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QQmlExtensionPlugin*
///
bool q_qmlextensionplugin_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQmlExtensionPlugin*
/// @param b bool
///
bool q_qmlextensionplugin_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QQmlExtensionPlugin*
///
QThread* q_qmlextensionplugin_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQmlExtensionPlugin*
/// @param thread QThread*
///
bool q_qmlextensionplugin_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlExtensionPlugin*
/// @param interval int
///
int32_t q_qmlextensionplugin_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlExtensionPlugin*
/// @param time int64_t of nanoseconds
///
int32_t q_qmlextensionplugin_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQmlExtensionPlugin*
/// @param id int
///
void q_qmlextensionplugin_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQmlExtensionPlugin*
/// @param id enum Qt__TimerId
///
void q_qmlextensionplugin_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QQmlExtensionPlugin*
///
/// @return libqt_list of QObject*
///
libqt_list q_qmlextensionplugin_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQmlExtensionPlugin*
/// @param parent QObject*
///
void q_qmlextensionplugin_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQmlExtensionPlugin*
/// @param filterObj QObject*
///
void q_qmlextensionplugin_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQmlExtensionPlugin*
/// @param obj QObject*
///
void q_qmlextensionplugin_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_qmlextensionplugin_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_qmlextensionplugin_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QQmlExtensionPlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_qmlextensionplugin_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlextensionplugin_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_qmlextensionplugin_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQmlExtensionPlugin*
///
bool q_qmlextensionplugin_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQmlExtensionPlugin*
/// @param receiver QObject*
///
bool q_qmlextensionplugin_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_qmlextensionplugin_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QQmlExtensionPlugin*
///
void q_qmlextensionplugin_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QQmlExtensionPlugin*
///
void q_qmlextensionplugin_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQmlExtensionPlugin*
/// @param name const char*
/// @param value QVariant*
///
bool q_qmlextensionplugin_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QQmlExtensionPlugin*
/// @param name const char*
///
QVariant* q_qmlextensionplugin_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QQmlExtensionPlugin*
///
const char** q_qmlextensionplugin_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQmlExtensionPlugin*
///
QBindingStorage* q_qmlextensionplugin_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QQmlExtensionPlugin*
///
const QBindingStorage* q_qmlextensionplugin_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlExtensionPlugin*
///
void q_qmlextensionplugin_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlExtensionPlugin*
/// @param callback void func(QQmlExtensionPlugin* self)
///
void q_qmlextensionplugin_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QQmlExtensionPlugin*
///
QObject* q_qmlextensionplugin_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QQmlExtensionPlugin*
/// @param classname const char*
///
bool q_qmlextensionplugin_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQmlExtensionPlugin*
///
void q_qmlextensionplugin_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlExtensionPlugin*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_qmlextensionplugin_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlExtensionPlugin*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_qmlextensionplugin_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_qmlextensionplugin_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_qmlextensionplugin_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QQmlExtensionPlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_qmlextensionplugin_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQmlExtensionPlugin*
/// @param signal const char*
///
bool q_qmlextensionplugin_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQmlExtensionPlugin*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_qmlextensionplugin_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQmlExtensionPlugin*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlextensionplugin_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQmlExtensionPlugin*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlextensionplugin_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlExtensionPlugin*
/// @param param1 QObject*
///
void q_qmlextensionplugin_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlExtensionPlugin*
/// @param callback void func(QQmlExtensionPlugin* self, QObject* param1)
///
void q_qmlextensionplugin_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QQmlExtensionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlextensioninterface.html#operator-eq)
///
/// @param self QQmlExtensionPlugin*
/// @param param1 QQmlExtensionInterface*
///
void q_qmlextensionplugin_operator_assign(void* self, const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlExtensionPlugin*
/// @param event QEvent*
///
bool q_qmlextensionplugin_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlExtensionPlugin*
/// @param event QEvent*
///
bool q_qmlextensionplugin_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlExtensionPlugin*
/// @param callback bool func(QQmlExtensionPlugin* self, QEvent* event)
///
void q_qmlextensionplugin_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlExtensionPlugin*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_qmlextensionplugin_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlExtensionPlugin*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_qmlextensionplugin_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlExtensionPlugin*
/// @param callback bool func(QQmlExtensionPlugin* self, QObject* watched, QEvent* event)
///
void q_qmlextensionplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlExtensionPlugin*
/// @param event QTimerEvent*
///
void q_qmlextensionplugin_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlExtensionPlugin*
/// @param event QTimerEvent*
///
void q_qmlextensionplugin_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlExtensionPlugin*
/// @param callback void func(QQmlExtensionPlugin* self, QTimerEvent* event)
///
void q_qmlextensionplugin_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlExtensionPlugin*
/// @param event QChildEvent*
///
void q_qmlextensionplugin_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlExtensionPlugin*
/// @param event QChildEvent*
///
void q_qmlextensionplugin_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlExtensionPlugin*
/// @param callback void func(QQmlExtensionPlugin* self, QChildEvent* event)
///
void q_qmlextensionplugin_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlExtensionPlugin*
/// @param event QEvent*
///
void q_qmlextensionplugin_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlExtensionPlugin*
/// @param event QEvent*
///
void q_qmlextensionplugin_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlExtensionPlugin*
/// @param callback void func(QQmlExtensionPlugin* self, QEvent* event)
///
void q_qmlextensionplugin_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlExtensionPlugin*
/// @param signal QMetaMethod*
///
void q_qmlextensionplugin_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlExtensionPlugin*
/// @param signal QMetaMethod*
///
void q_qmlextensionplugin_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlExtensionPlugin*
/// @param callback void func(QQmlExtensionPlugin* self, QMetaMethod* signal)
///
void q_qmlextensionplugin_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlExtensionPlugin*
/// @param signal QMetaMethod*
///
void q_qmlextensionplugin_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlExtensionPlugin*
/// @param signal QMetaMethod*
///
void q_qmlextensionplugin_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlExtensionPlugin*
/// @param callback void func(QQmlExtensionPlugin* self, QMetaMethod* signal)
///
void q_qmlextensionplugin_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQmlExtensionPlugin*
///
QObject* q_qmlextensionplugin_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQmlExtensionPlugin*
///
QObject* q_qmlextensionplugin_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QQmlExtensionPlugin*
/// @param callback QObject* func(QQmlExtensionPlugin* self)
///
void q_qmlextensionplugin_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQmlExtensionPlugin*
///
int32_t q_qmlextensionplugin_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQmlExtensionPlugin*
///
int32_t q_qmlextensionplugin_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QQmlExtensionPlugin*
/// @param callback int32_t func(QQmlExtensionPlugin* self)
///
void q_qmlextensionplugin_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQmlExtensionPlugin*
/// @param signal const char*
///
int32_t q_qmlextensionplugin_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQmlExtensionPlugin*
/// @param signal const char*
///
int32_t q_qmlextensionplugin_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QQmlExtensionPlugin*
/// @param callback int32_t func(QQmlExtensionPlugin* self, const char* signal)
///
void q_qmlextensionplugin_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQmlExtensionPlugin*
/// @param signal QMetaMethod*
///
bool q_qmlextensionplugin_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQmlExtensionPlugin*
/// @param signal QMetaMethod*
///
bool q_qmlextensionplugin_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QQmlExtensionPlugin*
/// @param callback bool func(QQmlExtensionPlugin* self, QMetaMethod* signal)
///
void q_qmlextensionplugin_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQmlExtensionPlugin*
/// @param callback void func(QQmlExtensionPlugin* self, const char* objectName)
///
void q_qmlextensionplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlextensionplugin.html#dtor.QQmlExtensionPlugin)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlExtensionPlugin*
///
void q_qmlextensionplugin_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengineextensionplugin.html)

/// q_qmlengineextensionplugin_new constructs a new QQmlEngineExtensionPlugin object.
///
QQmlEngineExtensionPlugin* q_qmlengineextensionplugin_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengineextensionplugin.html)

/// q_qmlengineextensionplugin_new2 constructs a new QQmlEngineExtensionPlugin object.
///
/// @param parent QObject*
///
QQmlEngineExtensionPlugin* q_qmlengineextensionplugin_new2(void* parent);

/// Upcasts to a QQmlEngineExtensionInterface object
///
/// @param self QQmlEngineExtensionPlugin*
///
QQmlEngineExtensionInterface* q_qmlengineextensionplugin_as_q_qml_engine_extension_interface(void* self);

/// Downcasts to a QQmlEngineExtensionPlugin object
///
/// @param _qqmlengineextensioninterface QQmlEngineExtensionInterface*
///
QQmlEngineExtensionPlugin* q_qmlengineextensionplugin_from_q_qml_engine_extension_interface(void* _qqmlengineextensioninterface);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QQmlEngineExtensionPlugin*
///
const QMetaObject* q_qmlengineextensionplugin_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QQmlEngineExtensionPlugin*
/// @param callback const QMetaObject* func(const QQmlEngineExtensionPlugin* self)
///
void q_qmlengineextensionplugin_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QQmlEngineExtensionPlugin*
///
const QMetaObject* q_qmlengineextensionplugin_super_meta_object(const void* self);

/// @param self QQmlEngineExtensionPlugin*
/// @param param1 const char*
///
void* q_qmlengineextensionplugin_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQmlEngineExtensionPlugin*
/// @param callback void* func(QQmlEngineExtensionPlugin* self, const char* param1)
///
void q_qmlengineextensionplugin_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQmlEngineExtensionPlugin*
/// @param param1 const char*
///
void* q_qmlengineextensionplugin_super_metacast(void* self, const char* param1);

/// @param self QQmlEngineExtensionPlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_qmlengineextensionplugin_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQmlEngineExtensionPlugin*
/// @param callback int32_t func(QQmlEngineExtensionPlugin* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_qmlengineextensionplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQmlEngineExtensionPlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_qmlengineextensionplugin_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_qmlengineextensionplugin_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengineextensionplugin.html#initializeEngine)
///
/// @param self QQmlEngineExtensionPlugin*
/// @param engine QQmlEngine*
/// @param uri const char*
///
void q_qmlengineextensionplugin_initialize_engine(void* self, void* engine, const char* uri);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengineextensionplugin.html#initializeEngine)
///
/// Allows for overriding the related default method
///
/// @param self QQmlEngineExtensionPlugin*
/// @param callback void func(QQmlEngineExtensionPlugin* self, QQmlEngine* engine, const char* uri)
///
void q_qmlengineextensionplugin_on_initialize_engine(void* self, void (*callback)(void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengineextensionplugin.html#initializeEngine)
///
/// Base class method implementation
///
/// @param self QQmlEngineExtensionPlugin*
/// @param engine QQmlEngine*
/// @param uri const char*
///
void q_qmlengineextensionplugin_super_initialize_engine(void* self, void* engine, const char* uri);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_qmlengineextensionplugin_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_qmlengineextensionplugin_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQmlEngineExtensionPlugin*
///
const char* q_qmlengineextensionplugin_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQmlEngineExtensionPlugin*
/// @param name const char*
///
void q_qmlengineextensionplugin_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QQmlEngineExtensionPlugin*
///
bool q_qmlengineextensionplugin_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QQmlEngineExtensionPlugin*
///
bool q_qmlengineextensionplugin_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QQmlEngineExtensionPlugin*
///
bool q_qmlengineextensionplugin_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QQmlEngineExtensionPlugin*
///
bool q_qmlengineextensionplugin_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQmlEngineExtensionPlugin*
/// @param b bool
///
bool q_qmlengineextensionplugin_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QQmlEngineExtensionPlugin*
///
QThread* q_qmlengineextensionplugin_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQmlEngineExtensionPlugin*
/// @param thread QThread*
///
bool q_qmlengineextensionplugin_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlEngineExtensionPlugin*
/// @param interval int
///
int32_t q_qmlengineextensionplugin_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlEngineExtensionPlugin*
/// @param time int64_t of nanoseconds
///
int32_t q_qmlengineextensionplugin_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQmlEngineExtensionPlugin*
/// @param id int
///
void q_qmlengineextensionplugin_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQmlEngineExtensionPlugin*
/// @param id enum Qt__TimerId
///
void q_qmlengineextensionplugin_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QQmlEngineExtensionPlugin*
///
/// @return libqt_list of QObject*
///
libqt_list q_qmlengineextensionplugin_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQmlEngineExtensionPlugin*
/// @param parent QObject*
///
void q_qmlengineextensionplugin_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQmlEngineExtensionPlugin*
/// @param filterObj QObject*
///
void q_qmlengineextensionplugin_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQmlEngineExtensionPlugin*
/// @param obj QObject*
///
void q_qmlengineextensionplugin_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_qmlengineextensionplugin_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_qmlengineextensionplugin_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QQmlEngineExtensionPlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_qmlengineextensionplugin_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlengineextensionplugin_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_qmlengineextensionplugin_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQmlEngineExtensionPlugin*
///
bool q_qmlengineextensionplugin_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQmlEngineExtensionPlugin*
/// @param receiver QObject*
///
bool q_qmlengineextensionplugin_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_qmlengineextensionplugin_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QQmlEngineExtensionPlugin*
///
void q_qmlengineextensionplugin_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QQmlEngineExtensionPlugin*
///
void q_qmlengineextensionplugin_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQmlEngineExtensionPlugin*
/// @param name const char*
/// @param value QVariant*
///
bool q_qmlengineextensionplugin_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QQmlEngineExtensionPlugin*
/// @param name const char*
///
QVariant* q_qmlengineextensionplugin_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QQmlEngineExtensionPlugin*
///
const char** q_qmlengineextensionplugin_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQmlEngineExtensionPlugin*
///
QBindingStorage* q_qmlengineextensionplugin_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QQmlEngineExtensionPlugin*
///
const QBindingStorage* q_qmlengineextensionplugin_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlEngineExtensionPlugin*
///
void q_qmlengineextensionplugin_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlEngineExtensionPlugin*
/// @param callback void func(QQmlEngineExtensionPlugin* self)
///
void q_qmlengineextensionplugin_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QQmlEngineExtensionPlugin*
///
QObject* q_qmlengineextensionplugin_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QQmlEngineExtensionPlugin*
/// @param classname const char*
///
bool q_qmlengineextensionplugin_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQmlEngineExtensionPlugin*
///
void q_qmlengineextensionplugin_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlEngineExtensionPlugin*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_qmlengineextensionplugin_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlEngineExtensionPlugin*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_qmlengineextensionplugin_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_qmlengineextensionplugin_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_qmlengineextensionplugin_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QQmlEngineExtensionPlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_qmlengineextensionplugin_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQmlEngineExtensionPlugin*
/// @param signal const char*
///
bool q_qmlengineextensionplugin_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQmlEngineExtensionPlugin*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_qmlengineextensionplugin_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQmlEngineExtensionPlugin*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlengineextensionplugin_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQmlEngineExtensionPlugin*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlengineextensionplugin_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlEngineExtensionPlugin*
/// @param param1 QObject*
///
void q_qmlengineextensionplugin_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlEngineExtensionPlugin*
/// @param callback void func(QQmlEngineExtensionPlugin* self, QObject* param1)
///
void q_qmlengineextensionplugin_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QQmlEngineExtensionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengineextensioninterface.html#operator-eq)
///
/// @param self QQmlEngineExtensionPlugin*
/// @param param1 QQmlEngineExtensionInterface*
///
void q_qmlengineextensionplugin_operator_assign(void* self, const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlEngineExtensionPlugin*
/// @param event QEvent*
///
bool q_qmlengineextensionplugin_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlEngineExtensionPlugin*
/// @param event QEvent*
///
bool q_qmlengineextensionplugin_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlEngineExtensionPlugin*
/// @param callback bool func(QQmlEngineExtensionPlugin* self, QEvent* event)
///
void q_qmlengineextensionplugin_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlEngineExtensionPlugin*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_qmlengineextensionplugin_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlEngineExtensionPlugin*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_qmlengineextensionplugin_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlEngineExtensionPlugin*
/// @param callback bool func(QQmlEngineExtensionPlugin* self, QObject* watched, QEvent* event)
///
void q_qmlengineextensionplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlEngineExtensionPlugin*
/// @param event QTimerEvent*
///
void q_qmlengineextensionplugin_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlEngineExtensionPlugin*
/// @param event QTimerEvent*
///
void q_qmlengineextensionplugin_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlEngineExtensionPlugin*
/// @param callback void func(QQmlEngineExtensionPlugin* self, QTimerEvent* event)
///
void q_qmlengineextensionplugin_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlEngineExtensionPlugin*
/// @param event QChildEvent*
///
void q_qmlengineextensionplugin_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlEngineExtensionPlugin*
/// @param event QChildEvent*
///
void q_qmlengineextensionplugin_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlEngineExtensionPlugin*
/// @param callback void func(QQmlEngineExtensionPlugin* self, QChildEvent* event)
///
void q_qmlengineextensionplugin_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlEngineExtensionPlugin*
/// @param event QEvent*
///
void q_qmlengineextensionplugin_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlEngineExtensionPlugin*
/// @param event QEvent*
///
void q_qmlengineextensionplugin_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlEngineExtensionPlugin*
/// @param callback void func(QQmlEngineExtensionPlugin* self, QEvent* event)
///
void q_qmlengineextensionplugin_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlEngineExtensionPlugin*
/// @param signal QMetaMethod*
///
void q_qmlengineextensionplugin_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlEngineExtensionPlugin*
/// @param signal QMetaMethod*
///
void q_qmlengineextensionplugin_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlEngineExtensionPlugin*
/// @param callback void func(QQmlEngineExtensionPlugin* self, QMetaMethod* signal)
///
void q_qmlengineextensionplugin_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlEngineExtensionPlugin*
/// @param signal QMetaMethod*
///
void q_qmlengineextensionplugin_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlEngineExtensionPlugin*
/// @param signal QMetaMethod*
///
void q_qmlengineextensionplugin_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlEngineExtensionPlugin*
/// @param callback void func(QQmlEngineExtensionPlugin* self, QMetaMethod* signal)
///
void q_qmlengineextensionplugin_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQmlEngineExtensionPlugin*
///
QObject* q_qmlengineextensionplugin_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQmlEngineExtensionPlugin*
///
QObject* q_qmlengineextensionplugin_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QQmlEngineExtensionPlugin*
/// @param callback QObject* func(QQmlEngineExtensionPlugin* self)
///
void q_qmlengineextensionplugin_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQmlEngineExtensionPlugin*
///
int32_t q_qmlengineextensionplugin_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQmlEngineExtensionPlugin*
///
int32_t q_qmlengineextensionplugin_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QQmlEngineExtensionPlugin*
/// @param callback int32_t func(QQmlEngineExtensionPlugin* self)
///
void q_qmlengineextensionplugin_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQmlEngineExtensionPlugin*
/// @param signal const char*
///
int32_t q_qmlengineextensionplugin_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQmlEngineExtensionPlugin*
/// @param signal const char*
///
int32_t q_qmlengineextensionplugin_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QQmlEngineExtensionPlugin*
/// @param callback int32_t func(QQmlEngineExtensionPlugin* self, const char* signal)
///
void q_qmlengineextensionplugin_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQmlEngineExtensionPlugin*
/// @param signal QMetaMethod*
///
bool q_qmlengineextensionplugin_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQmlEngineExtensionPlugin*
/// @param signal QMetaMethod*
///
bool q_qmlengineextensionplugin_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QQmlEngineExtensionPlugin*
/// @param callback bool func(QQmlEngineExtensionPlugin* self, QMetaMethod* signal)
///
void q_qmlengineextensionplugin_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQmlEngineExtensionPlugin*
/// @param callback void func(QQmlEngineExtensionPlugin* self, const char* objectName)
///
void q_qmlengineextensionplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengineextensionplugin.html#dtor.QQmlEngineExtensionPlugin)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlEngineExtensionPlugin*
///
void q_qmlengineextensionplugin_delete(void* self);

#endif
