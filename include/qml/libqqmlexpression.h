#pragma once
#ifndef QML_LIBQQMLEXPRESSION_H
#define QML_LIBQQMLEXPRESSION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html)

/// q_qmlexpression_new constructs a new QQmlExpression object.
///
QQmlExpression* q_qmlexpression_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html)

/// q_qmlexpression_new2 constructs a new QQmlExpression object.
///
/// @param param1 QQmlContext*
/// @param param2 QObject*
/// @param param3 const char*
///
QQmlExpression* q_qmlexpression_new2(void* param1, void* param2, const char* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html)

/// q_qmlexpression_new3 constructs a new QQmlExpression object.
///
/// @param param1 QQmlScriptString*
///
QQmlExpression* q_qmlexpression_new3(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html)

/// q_qmlexpression_new4 constructs a new QQmlExpression object.
///
/// @param param1 QQmlContext*
/// @param param2 QObject*
/// @param param3 const char*
/// @param param4 QObject*
///
QQmlExpression* q_qmlexpression_new4(void* param1, void* param2, const char* param3, void* param4);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html)

/// q_qmlexpression_new5 constructs a new QQmlExpression object.
///
/// @param param1 QQmlScriptString*
/// @param param2 QQmlContext*
///
QQmlExpression* q_qmlexpression_new5(void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html)

/// q_qmlexpression_new6 constructs a new QQmlExpression object.
///
/// @param param1 QQmlScriptString*
/// @param param2 QQmlContext*
/// @param param3 QObject*
///
QQmlExpression* q_qmlexpression_new6(void* param1, void* param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html)

/// q_qmlexpression_new7 constructs a new QQmlExpression object.
///
/// @param param1 QQmlScriptString*
/// @param param2 QQmlContext*
/// @param param3 QObject*
/// @param param4 QObject*
///
QQmlExpression* q_qmlexpression_new7(void* param1, void* param2, void* param3, void* param4);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QQmlExpression*
///
const QMetaObject* q_qmlexpression_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQmlExpression*
/// @param callback const QMetaObject* func()
///
void q_qmlexpression_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QQmlExpression*
///
const QMetaObject* q_qmlexpression_super_meta_object(void* self);

/// @param self QQmlExpression*
/// @param param1 const char*
///
void* q_qmlexpression_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQmlExpression*
/// @param callback void* func(QQmlExpression* self, const char* param1)
///
void q_qmlexpression_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQmlExpression*
/// @param param1 const char*
///
void* q_qmlexpression_super_metacast(void* self, const char* param1);

/// @param self QQmlExpression*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_qmlexpression_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQmlExpression*
/// @param callback int32_t func(QQmlExpression* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_qmlexpression_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQmlExpression*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_qmlexpression_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_qmlexpression_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html#engine)
///
/// @param self QQmlExpression*
///
QQmlEngine* q_qmlexpression_engine(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html#context)
///
/// @param self QQmlExpression*
///
QQmlContext* q_qmlexpression_context(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html#expression)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQmlExpression*
///
const char* q_qmlexpression_expression(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html#setExpression)
///
/// @param self QQmlExpression*
/// @param expression const char*
///
void q_qmlexpression_set_expression(void* self, const char* expression);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html#notifyOnValueChanged)
///
/// @param self QQmlExpression*
///
bool q_qmlexpression_notify_on_value_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html#setNotifyOnValueChanged)
///
/// @param self QQmlExpression*
/// @param notifyOnValueChanged bool
///
void q_qmlexpression_set_notify_on_value_changed(void* self, bool notifyOnValueChanged);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html#sourceFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQmlExpression*
///
const char* q_qmlexpression_source_file(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html#lineNumber)
///
/// @param self QQmlExpression*
///
int32_t q_qmlexpression_line_number(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html#columnNumber)
///
/// @param self QQmlExpression*
///
int32_t q_qmlexpression_column_number(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html#setSourceLocation)
///
/// @param self QQmlExpression*
/// @param fileName const char*
/// @param line int
///
void q_qmlexpression_set_source_location(void* self, const char* fileName, int line);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html#scopeObject)
///
/// @param self QQmlExpression*
///
QObject* q_qmlexpression_scope_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html#hasError)
///
/// @param self QQmlExpression*
///
bool q_qmlexpression_has_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html#clearError)
///
/// @param self QQmlExpression*
///
void q_qmlexpression_clear_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html#error)
///
/// @param self QQmlExpression*
///
QQmlError* q_qmlexpression_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html#evaluate)
///
/// @param self QQmlExpression*
///
QVariant* q_qmlexpression_evaluate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html#valueChanged)
///
/// @param self QQmlExpression*
///
void q_qmlexpression_value_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html#valueChanged)
///
/// @param self QQmlExpression*
/// @param callback void func(QQmlExpression* self)
///
void q_qmlexpression_on_value_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_qmlexpression_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_qmlexpression_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html#setSourceLocation)
///
/// @param self QQmlExpression*
/// @param fileName const char*
/// @param line int
/// @param column int
///
void q_qmlexpression_set_source_location3(void* self, const char* fileName, int line, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html#evaluate)
///
/// @param self QQmlExpression*
/// @param valueIsUndefined bool*
///
QVariant* q_qmlexpression_evaluate1(void* self, bool* valueIsUndefined);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQmlExpression*
///
const char* q_qmlexpression_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQmlExpression*
/// @param name const char*
///
void q_qmlexpression_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QQmlExpression*
///
bool q_qmlexpression_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QQmlExpression*
///
bool q_qmlexpression_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QQmlExpression*
///
bool q_qmlexpression_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QQmlExpression*
///
bool q_qmlexpression_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQmlExpression*
/// @param b bool
///
bool q_qmlexpression_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QQmlExpression*
///
QThread* q_qmlexpression_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQmlExpression*
/// @param thread QThread*
///
bool q_qmlexpression_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlExpression*
/// @param interval int
///
int32_t q_qmlexpression_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlExpression*
/// @param time int64_t of nanoseconds
///
int32_t q_qmlexpression_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQmlExpression*
/// @param id int
///
void q_qmlexpression_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQmlExpression*
/// @param id enum Qt__TimerId
///
void q_qmlexpression_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QQmlExpression*
///
/// @return libqt_list of QObject*
///
libqt_list q_qmlexpression_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQmlExpression*
/// @param parent QObject*
///
void q_qmlexpression_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQmlExpression*
/// @param filterObj QObject*
///
void q_qmlexpression_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQmlExpression*
/// @param obj QObject*
///
void q_qmlexpression_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_qmlexpression_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_qmlexpression_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQmlExpression*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_qmlexpression_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlexpression_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_qmlexpression_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlExpression*
///
bool q_qmlexpression_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlExpression*
/// @param receiver QObject*
///
bool q_qmlexpression_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_qmlexpression_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QQmlExpression*
///
void q_qmlexpression_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QQmlExpression*
///
void q_qmlexpression_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQmlExpression*
/// @param name const char*
/// @param value QVariant*
///
bool q_qmlexpression_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QQmlExpression*
/// @param name const char*
///
QVariant* q_qmlexpression_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQmlExpression*
///
const char** q_qmlexpression_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQmlExpression*
///
QBindingStorage* q_qmlexpression_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQmlExpression*
///
const QBindingStorage* q_qmlexpression_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlExpression*
///
void q_qmlexpression_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlExpression*
/// @param callback void func(QQmlExpression* self)
///
void q_qmlexpression_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QQmlExpression*
///
QObject* q_qmlexpression_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QQmlExpression*
/// @param classname const char*
///
bool q_qmlexpression_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQmlExpression*
///
void q_qmlexpression_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlExpression*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_qmlexpression_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlExpression*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_qmlexpression_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_qmlexpression_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_qmlexpression_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQmlExpression*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_qmlexpression_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlExpression*
/// @param signal const char*
///
bool q_qmlexpression_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlExpression*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_qmlexpression_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlExpression*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlexpression_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlExpression*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlexpression_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlExpression*
/// @param param1 QObject*
///
void q_qmlexpression_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlExpression*
/// @param callback void func(QQmlExpression* self, QObject* param1)
///
void q_qmlexpression_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlExpression*
/// @param event QEvent*
///
bool q_qmlexpression_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlExpression*
/// @param event QEvent*
///
bool q_qmlexpression_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlExpression*
/// @param callback bool func(QQmlExpression* self, QEvent* event)
///
void q_qmlexpression_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlExpression*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_qmlexpression_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlExpression*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_qmlexpression_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlExpression*
/// @param callback bool func(QQmlExpression* self, QObject* watched, QEvent* event)
///
void q_qmlexpression_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlExpression*
/// @param event QTimerEvent*
///
void q_qmlexpression_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlExpression*
/// @param event QTimerEvent*
///
void q_qmlexpression_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlExpression*
/// @param callback void func(QQmlExpression* self, QTimerEvent* event)
///
void q_qmlexpression_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlExpression*
/// @param event QChildEvent*
///
void q_qmlexpression_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlExpression*
/// @param event QChildEvent*
///
void q_qmlexpression_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlExpression*
/// @param callback void func(QQmlExpression* self, QChildEvent* event)
///
void q_qmlexpression_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlExpression*
/// @param event QEvent*
///
void q_qmlexpression_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlExpression*
/// @param event QEvent*
///
void q_qmlexpression_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlExpression*
/// @param callback void func(QQmlExpression* self, QEvent* event)
///
void q_qmlexpression_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlExpression*
/// @param signal QMetaMethod*
///
void q_qmlexpression_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlExpression*
/// @param signal QMetaMethod*
///
void q_qmlexpression_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlExpression*
/// @param callback void func(QQmlExpression* self, QMetaMethod* signal)
///
void q_qmlexpression_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlExpression*
/// @param signal QMetaMethod*
///
void q_qmlexpression_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlExpression*
/// @param signal QMetaMethod*
///
void q_qmlexpression_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlExpression*
/// @param callback void func(QQmlExpression* self, QMetaMethod* signal)
///
void q_qmlexpression_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlExpression*
///
QObject* q_qmlexpression_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlExpression*
///
QObject* q_qmlexpression_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlExpression*
/// @param callback QObject* func()
///
void q_qmlexpression_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlExpression*
///
int32_t q_qmlexpression_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlExpression*
///
int32_t q_qmlexpression_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlExpression*
/// @param callback int32_t func()
///
void q_qmlexpression_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlExpression*
/// @param signal const char*
///
int32_t q_qmlexpression_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlExpression*
/// @param signal const char*
///
int32_t q_qmlexpression_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlExpression*
/// @param callback int32_t func(QQmlExpression* self, const char* signal)
///
void q_qmlexpression_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlExpression*
/// @param signal QMetaMethod*
///
bool q_qmlexpression_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlExpression*
/// @param signal QMetaMethod*
///
bool q_qmlexpression_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlExpression*
/// @param callback bool func(QQmlExpression* self, QMetaMethod* signal)
///
void q_qmlexpression_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQmlExpression*
/// @param callback void func(QQmlExpression* self, const char* objectName)
///
void q_qmlexpression_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlexpression.html#dtor.QQmlExpression)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlExpression*
///
void q_qmlexpression_delete(void* self);

#endif
