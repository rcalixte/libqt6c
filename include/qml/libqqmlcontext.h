#pragma once
#ifndef QML_LIBQQMLCONTEXT_H
#define QML_LIBQQMLCONTEXT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext.html)

/// q_qmlcontext_new constructs a new QQmlContext object.
///
/// @param parent QQmlEngine*
///
QQmlContext* q_qmlcontext_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext.html)

/// q_qmlcontext_new2 constructs a new QQmlContext object.
///
/// @param parent QQmlContext*
///
QQmlContext* q_qmlcontext_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext.html)

/// q_qmlcontext_new3 constructs a new QQmlContext object.
///
/// @param parent QQmlEngine*
/// @param objParent QObject*
///
QQmlContext* q_qmlcontext_new3(void* parent, void* objParent);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext.html)

/// q_qmlcontext_new4 constructs a new QQmlContext object.
///
/// @param parent QQmlContext*
/// @param objParent QObject*
///
QQmlContext* q_qmlcontext_new4(void* parent, void* objParent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QQmlContext*
///
const QMetaObject* q_qmlcontext_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQmlContext*
/// @param callback const QMetaObject* func()
///
void q_qmlcontext_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QQmlContext*
///
const QMetaObject* q_qmlcontext_super_meta_object(void* self);

/// @param self QQmlContext*
/// @param param1 const char*
///
void* q_qmlcontext_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQmlContext*
/// @param callback void* func(QQmlContext* self, const char* param1)
///
void q_qmlcontext_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQmlContext*
/// @param param1 const char*
///
void* q_qmlcontext_super_metacast(void* self, const char* param1);

/// @param self QQmlContext*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_qmlcontext_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQmlContext*
/// @param callback int32_t func(QQmlContext* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_qmlcontext_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQmlContext*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_qmlcontext_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_qmlcontext_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext.html#isValid)
///
/// @param self QQmlContext*
///
bool q_qmlcontext_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext.html#engine)
///
/// @param self QQmlContext*
///
QQmlEngine* q_qmlcontext_engine(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext.html#parentContext)
///
/// @param self QQmlContext*
///
QQmlContext* q_qmlcontext_parent_context(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext.html#contextObject)
///
/// @param self QQmlContext*
///
QObject* q_qmlcontext_context_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext.html#setContextObject)
///
/// @param self QQmlContext*
/// @param contextObject QObject*
///
void q_qmlcontext_set_context_object(void* self, void* contextObject);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext.html#contextProperty)
///
/// @param self QQmlContext*
/// @param param1 const char*
///
QVariant* q_qmlcontext_context_property(void* self, const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext.html#setContextProperty)
///
/// @param self QQmlContext*
/// @param param1 const char*
/// @param param2 QObject*
///
void q_qmlcontext_set_context_property(void* self, const char* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext.html#setContextProperty)
///
/// @param self QQmlContext*
/// @param param1 const char*
/// @param param2 QVariant*
///
void q_qmlcontext_set_context_property2(void* self, const char* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext.html#setContextProperties)
///
/// @param self QQmlContext*
/// @param properties libqt_list of QQmlContext__PropertyPair*
///
void q_qmlcontext_set_context_properties(void* self, libqt_list properties);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext.html#nameForObject)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQmlContext*
/// @param param1 QObject*
///
const char* q_qmlcontext_name_for_object(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext.html#objectForName)
///
/// @param self QQmlContext*
/// @param param1 const char*
///
QObject* q_qmlcontext_object_for_name(void* self, const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext.html#resolvedUrl)
///
/// @param self QQmlContext*
/// @param param1 QUrl*
///
QUrl* q_qmlcontext_resolved_url(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext.html#setBaseUrl)
///
/// @param self QQmlContext*
/// @param baseUrl QUrl*
///
void q_qmlcontext_set_base_url(void* self, void* baseUrl);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext.html#baseUrl)
///
/// @param self QQmlContext*
///
QUrl* q_qmlcontext_base_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext.html#importedScript)
///
/// @param self QQmlContext*
/// @param name const char*
///
QJSValue* q_qmlcontext_imported_script(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_qmlcontext_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_qmlcontext_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQmlContext*
///
const char* q_qmlcontext_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQmlContext*
/// @param name const char*
///
void q_qmlcontext_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QQmlContext*
///
bool q_qmlcontext_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QQmlContext*
///
bool q_qmlcontext_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QQmlContext*
///
bool q_qmlcontext_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QQmlContext*
///
bool q_qmlcontext_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQmlContext*
/// @param b bool
///
bool q_qmlcontext_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QQmlContext*
///
QThread* q_qmlcontext_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQmlContext*
/// @param thread QThread*
///
bool q_qmlcontext_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlContext*
/// @param interval int
///
int32_t q_qmlcontext_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlContext*
/// @param time int64_t of nanoseconds
///
int32_t q_qmlcontext_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQmlContext*
/// @param id int
///
void q_qmlcontext_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQmlContext*
/// @param id enum Qt__TimerId
///
void q_qmlcontext_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QQmlContext*
///
/// @return libqt_list of QObject*
///
libqt_list q_qmlcontext_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQmlContext*
/// @param parent QObject*
///
void q_qmlcontext_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQmlContext*
/// @param filterObj QObject*
///
void q_qmlcontext_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQmlContext*
/// @param obj QObject*
///
void q_qmlcontext_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_qmlcontext_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_qmlcontext_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQmlContext*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_qmlcontext_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlcontext_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_qmlcontext_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlContext*
///
bool q_qmlcontext_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlContext*
/// @param receiver QObject*
///
bool q_qmlcontext_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_qmlcontext_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QQmlContext*
///
void q_qmlcontext_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QQmlContext*
///
void q_qmlcontext_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQmlContext*
/// @param name const char*
/// @param value QVariant*
///
bool q_qmlcontext_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QQmlContext*
/// @param name const char*
///
QVariant* q_qmlcontext_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQmlContext*
///
const char** q_qmlcontext_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQmlContext*
///
QBindingStorage* q_qmlcontext_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQmlContext*
///
const QBindingStorage* q_qmlcontext_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlContext*
///
void q_qmlcontext_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlContext*
/// @param callback void func(QQmlContext* self)
///
void q_qmlcontext_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QQmlContext*
///
QObject* q_qmlcontext_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QQmlContext*
/// @param classname const char*
///
bool q_qmlcontext_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQmlContext*
///
void q_qmlcontext_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlContext*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_qmlcontext_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlContext*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_qmlcontext_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_qmlcontext_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_qmlcontext_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQmlContext*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_qmlcontext_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlContext*
/// @param signal const char*
///
bool q_qmlcontext_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlContext*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_qmlcontext_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlContext*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlcontext_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlContext*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlcontext_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlContext*
/// @param param1 QObject*
///
void q_qmlcontext_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlContext*
/// @param callback void func(QQmlContext* self, QObject* param1)
///
void q_qmlcontext_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlContext*
/// @param event QEvent*
///
bool q_qmlcontext_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlContext*
/// @param event QEvent*
///
bool q_qmlcontext_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlContext*
/// @param callback bool func(QQmlContext* self, QEvent* event)
///
void q_qmlcontext_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlContext*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_qmlcontext_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlContext*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_qmlcontext_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlContext*
/// @param callback bool func(QQmlContext* self, QObject* watched, QEvent* event)
///
void q_qmlcontext_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlContext*
/// @param event QTimerEvent*
///
void q_qmlcontext_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlContext*
/// @param event QTimerEvent*
///
void q_qmlcontext_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlContext*
/// @param callback void func(QQmlContext* self, QTimerEvent* event)
///
void q_qmlcontext_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlContext*
/// @param event QChildEvent*
///
void q_qmlcontext_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlContext*
/// @param event QChildEvent*
///
void q_qmlcontext_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlContext*
/// @param callback void func(QQmlContext* self, QChildEvent* event)
///
void q_qmlcontext_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlContext*
/// @param event QEvent*
///
void q_qmlcontext_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlContext*
/// @param event QEvent*
///
void q_qmlcontext_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlContext*
/// @param callback void func(QQmlContext* self, QEvent* event)
///
void q_qmlcontext_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlContext*
/// @param signal QMetaMethod*
///
void q_qmlcontext_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlContext*
/// @param signal QMetaMethod*
///
void q_qmlcontext_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlContext*
/// @param callback void func(QQmlContext* self, QMetaMethod* signal)
///
void q_qmlcontext_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlContext*
/// @param signal QMetaMethod*
///
void q_qmlcontext_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlContext*
/// @param signal QMetaMethod*
///
void q_qmlcontext_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlContext*
/// @param callback void func(QQmlContext* self, QMetaMethod* signal)
///
void q_qmlcontext_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlContext*
///
QObject* q_qmlcontext_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlContext*
///
QObject* q_qmlcontext_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlContext*
/// @param callback QObject* func()
///
void q_qmlcontext_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlContext*
///
int32_t q_qmlcontext_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlContext*
///
int32_t q_qmlcontext_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlContext*
/// @param callback int32_t func()
///
void q_qmlcontext_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlContext*
/// @param signal const char*
///
int32_t q_qmlcontext_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlContext*
/// @param signal const char*
///
int32_t q_qmlcontext_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlContext*
/// @param callback int32_t func(QQmlContext* self, const char* signal)
///
void q_qmlcontext_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlContext*
/// @param signal QMetaMethod*
///
bool q_qmlcontext_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlContext*
/// @param signal QMetaMethod*
///
bool q_qmlcontext_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlContext*
/// @param callback bool func(QQmlContext* self, QMetaMethod* signal)
///
void q_qmlcontext_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQmlContext*
/// @param callback void func(QQmlContext* self, const char* objectName)
///
void q_qmlcontext_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext.html#dtor.QQmlContext)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlContext*
///
void q_qmlcontext_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext-propertypair.html)

/// q_qmlcontext__propertypair_new constructs a new QQmlContext::PropertyPair object.
///
QQmlContext__PropertyPair* q_qmlcontext__propertypair_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext-propertypair.html)

/// q_qmlcontext__propertypair_new2 constructs a new QQmlContext::PropertyPair object.
///
/// @param param1 QQmlContext__PropertyPair*
///
QQmlContext__PropertyPair* q_qmlcontext__propertypair_new2(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext-propertypair.html#name-var)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQmlContext__PropertyPair*
///
const char* q_qmlcontext__propertypair_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext-propertypair.html#name-var)
///
/// @param self QQmlContext__PropertyPair*
/// @param name const char*
///
void q_qmlcontext__propertypair_set_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext-propertypair.html#value-var)
///
/// @param self QQmlContext__PropertyPair*
///
QVariant* q_qmlcontext__propertypair_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext-propertypair.html#value-var)
///
/// @param self QQmlContext__PropertyPair*
/// @param value QVariant*
///
void q_qmlcontext__propertypair_set_value(void* self, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlcontext-propertypair.html#operator-eq)
///
/// @param self QQmlContext__PropertyPair*
/// @param param1 QQmlContext__PropertyPair*
///
void q_qmlcontext__propertypair_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self QQmlContext__PropertyPair*
///
void q_qmlcontext__propertypair_delete(void* self);

#endif
