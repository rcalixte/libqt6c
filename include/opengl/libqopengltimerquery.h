#pragma once
#ifndef OPENGL_LIBQOPENGLTIMERQUERY_H
#define OPENGL_LIBQOPENGLTIMERQUERY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimerquery.html)

/// q_opengltimerquery_new constructs a new QOpenGLTimerQuery object.
///
QOpenGLTimerQuery* q_opengltimerquery_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimerquery.html)

/// q_opengltimerquery_new2 constructs a new QOpenGLTimerQuery object.
///
/// @param parent QObject*
///
QOpenGLTimerQuery* q_opengltimerquery_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QOpenGLTimerQuery*
///
const QMetaObject* q_opengltimerquery_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLTimerQuery*
/// @param callback const QMetaObject* func(const QOpenGLTimerQuery* self)
///
void q_opengltimerquery_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QOpenGLTimerQuery*
///
const QMetaObject* q_opengltimerquery_super_meta_object(const void* self);

/// @param self QOpenGLTimerQuery*
/// @param param1 const char*
///
void* q_opengltimerquery_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QOpenGLTimerQuery*
/// @param callback void* func(QOpenGLTimerQuery* self, const char* param1)
///
void q_opengltimerquery_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QOpenGLTimerQuery*
/// @param param1 const char*
///
void* q_opengltimerquery_super_metacast(void* self, const char* param1);

/// @param self QOpenGLTimerQuery*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_opengltimerquery_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QOpenGLTimerQuery*
/// @param callback int32_t func(QOpenGLTimerQuery* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_opengltimerquery_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QOpenGLTimerQuery*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_opengltimerquery_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_opengltimerquery_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimerquery.html#create)
///
/// @param self QOpenGLTimerQuery*
///
bool q_opengltimerquery_create(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimerquery.html#destroy)
///
/// @param self QOpenGLTimerQuery*
///
void q_opengltimerquery_destroy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimerquery.html#isCreated)
///
/// @param self const QOpenGLTimerQuery*
///
bool q_opengltimerquery_is_created(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimerquery.html#objectId)
///
/// @param self const QOpenGLTimerQuery*
///
uint32_t q_opengltimerquery_object_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimerquery.html#begin)
///
/// @param self QOpenGLTimerQuery*
///
void q_opengltimerquery_begin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimerquery.html#end)
///
/// @param self QOpenGLTimerQuery*
///
void q_opengltimerquery_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimerquery.html#waitForTimestamp)
///
/// @param self const QOpenGLTimerQuery*
///
uint64_t q_opengltimerquery_wait_for_timestamp(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimerquery.html#recordTimestamp)
///
/// @param self QOpenGLTimerQuery*
///
void q_opengltimerquery_record_timestamp(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimerquery.html#isResultAvailable)
///
/// @param self const QOpenGLTimerQuery*
///
bool q_opengltimerquery_is_result_available(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimerquery.html#waitForResult)
///
/// @param self const QOpenGLTimerQuery*
///
uint64_t q_opengltimerquery_wait_for_result(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_opengltimerquery_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_opengltimerquery_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QOpenGLTimerQuery*
///
const char* q_opengltimerquery_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QOpenGLTimerQuery*
/// @param name const char*
///
void q_opengltimerquery_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QOpenGLTimerQuery*
///
bool q_opengltimerquery_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QOpenGLTimerQuery*
///
bool q_opengltimerquery_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QOpenGLTimerQuery*
///
bool q_opengltimerquery_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QOpenGLTimerQuery*
///
bool q_opengltimerquery_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QOpenGLTimerQuery*
/// @param b bool
///
bool q_opengltimerquery_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QOpenGLTimerQuery*
///
QThread* q_opengltimerquery_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QOpenGLTimerQuery*
/// @param thread QThread*
///
bool q_opengltimerquery_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLTimerQuery*
/// @param interval int
///
int32_t q_opengltimerquery_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLTimerQuery*
/// @param time int64_t of nanoseconds
///
int32_t q_opengltimerquery_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QOpenGLTimerQuery*
/// @param id int
///
void q_opengltimerquery_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QOpenGLTimerQuery*
/// @param id enum Qt__TimerId
///
void q_opengltimerquery_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QOpenGLTimerQuery*
///
/// @return libqt_list of QObject*
///
libqt_list q_opengltimerquery_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QOpenGLTimerQuery*
/// @param parent QObject*
///
void q_opengltimerquery_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QOpenGLTimerQuery*
/// @param filterObj QObject*
///
void q_opengltimerquery_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QOpenGLTimerQuery*
/// @param obj QObject*
///
void q_opengltimerquery_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_opengltimerquery_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_opengltimerquery_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QOpenGLTimerQuery*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_opengltimerquery_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_opengltimerquery_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_opengltimerquery_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QOpenGLTimerQuery*
///
bool q_opengltimerquery_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QOpenGLTimerQuery*
/// @param receiver QObject*
///
bool q_opengltimerquery_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_opengltimerquery_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QOpenGLTimerQuery*
///
void q_opengltimerquery_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QOpenGLTimerQuery*
///
void q_opengltimerquery_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QOpenGLTimerQuery*
/// @param name const char*
/// @param value QVariant*
///
bool q_opengltimerquery_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QOpenGLTimerQuery*
/// @param name const char*
///
QVariant* q_opengltimerquery_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QOpenGLTimerQuery*
///
const char** q_opengltimerquery_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QOpenGLTimerQuery*
///
QBindingStorage* q_opengltimerquery_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QOpenGLTimerQuery*
///
const QBindingStorage* q_opengltimerquery_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLTimerQuery*
///
void q_opengltimerquery_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLTimerQuery*
/// @param callback void func(QOpenGLTimerQuery* self)
///
void q_opengltimerquery_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QOpenGLTimerQuery*
///
QObject* q_opengltimerquery_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QOpenGLTimerQuery*
/// @param classname const char*
///
bool q_opengltimerquery_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QOpenGLTimerQuery*
///
void q_opengltimerquery_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLTimerQuery*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_opengltimerquery_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLTimerQuery*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_opengltimerquery_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_opengltimerquery_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_opengltimerquery_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QOpenGLTimerQuery*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_opengltimerquery_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QOpenGLTimerQuery*
/// @param signal const char*
///
bool q_opengltimerquery_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QOpenGLTimerQuery*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_opengltimerquery_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QOpenGLTimerQuery*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_opengltimerquery_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QOpenGLTimerQuery*
/// @param receiver QObject*
/// @param member const char*
///
bool q_opengltimerquery_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLTimerQuery*
/// @param param1 QObject*
///
void q_opengltimerquery_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLTimerQuery*
/// @param callback void func(QOpenGLTimerQuery* self, QObject* param1)
///
void q_opengltimerquery_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param event QEvent*
///
bool q_opengltimerquery_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param event QEvent*
///
bool q_opengltimerquery_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param callback bool func(QOpenGLTimerQuery* self, QEvent* event)
///
void q_opengltimerquery_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_opengltimerquery_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_opengltimerquery_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param callback bool func(QOpenGLTimerQuery* self, QObject* watched, QEvent* event)
///
void q_opengltimerquery_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param event QTimerEvent*
///
void q_opengltimerquery_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param event QTimerEvent*
///
void q_opengltimerquery_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param callback void func(QOpenGLTimerQuery* self, QTimerEvent* event)
///
void q_opengltimerquery_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param event QChildEvent*
///
void q_opengltimerquery_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param event QChildEvent*
///
void q_opengltimerquery_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param callback void func(QOpenGLTimerQuery* self, QChildEvent* event)
///
void q_opengltimerquery_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param event QEvent*
///
void q_opengltimerquery_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param event QEvent*
///
void q_opengltimerquery_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param callback void func(QOpenGLTimerQuery* self, QEvent* event)
///
void q_opengltimerquery_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param signal QMetaMethod*
///
void q_opengltimerquery_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param signal QMetaMethod*
///
void q_opengltimerquery_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param callback void func(QOpenGLTimerQuery* self, QMetaMethod* signal)
///
void q_opengltimerquery_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param signal QMetaMethod*
///
void q_opengltimerquery_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param signal QMetaMethod*
///
void q_opengltimerquery_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param callback void func(QOpenGLTimerQuery* self, QMetaMethod* signal)
///
void q_opengltimerquery_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QOpenGLTimerQuery*
///
QObject* q_opengltimerquery_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QOpenGLTimerQuery*
///
QObject* q_opengltimerquery_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param callback QObject* func(QOpenGLTimerQuery* self)
///
void q_opengltimerquery_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QOpenGLTimerQuery*
///
int32_t q_opengltimerquery_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QOpenGLTimerQuery*
///
int32_t q_opengltimerquery_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param callback int32_t func(QOpenGLTimerQuery* self)
///
void q_opengltimerquery_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QOpenGLTimerQuery*
/// @param signal const char*
///
int32_t q_opengltimerquery_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QOpenGLTimerQuery*
/// @param signal const char*
///
int32_t q_opengltimerquery_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param callback int32_t func(QOpenGLTimerQuery* self, const char* signal)
///
void q_opengltimerquery_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QOpenGLTimerQuery*
/// @param signal QMetaMethod*
///
bool q_opengltimerquery_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QOpenGLTimerQuery*
/// @param signal QMetaMethod*
///
bool q_opengltimerquery_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLTimerQuery*
/// @param callback bool func(QOpenGLTimerQuery* self, QMetaMethod* signal)
///
void q_opengltimerquery_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QOpenGLTimerQuery*
/// @param callback void func(QOpenGLTimerQuery* self, const char* objectName)
///
void q_opengltimerquery_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimerquery.html#dtor.QOpenGLTimerQuery)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLTimerQuery*
///
void q_opengltimerquery_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimemonitor.html)

/// q_opengltimemonitor_new constructs a new QOpenGLTimeMonitor object.
///
QOpenGLTimeMonitor* q_opengltimemonitor_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimemonitor.html)

/// q_opengltimemonitor_new2 constructs a new QOpenGLTimeMonitor object.
///
/// @param parent QObject*
///
QOpenGLTimeMonitor* q_opengltimemonitor_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QOpenGLTimeMonitor*
///
const QMetaObject* q_opengltimemonitor_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLTimeMonitor*
/// @param callback const QMetaObject* func(const QOpenGLTimeMonitor* self)
///
void q_opengltimemonitor_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QOpenGLTimeMonitor*
///
const QMetaObject* q_opengltimemonitor_super_meta_object(const void* self);

/// @param self QOpenGLTimeMonitor*
/// @param param1 const char*
///
void* q_opengltimemonitor_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QOpenGLTimeMonitor*
/// @param callback void* func(QOpenGLTimeMonitor* self, const char* param1)
///
void q_opengltimemonitor_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QOpenGLTimeMonitor*
/// @param param1 const char*
///
void* q_opengltimemonitor_super_metacast(void* self, const char* param1);

/// @param self QOpenGLTimeMonitor*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_opengltimemonitor_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QOpenGLTimeMonitor*
/// @param callback int32_t func(QOpenGLTimeMonitor* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_opengltimemonitor_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QOpenGLTimeMonitor*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_opengltimemonitor_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_opengltimemonitor_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimemonitor.html#setSampleCount)
///
/// @param self QOpenGLTimeMonitor*
/// @param sampleCount int
///
void q_opengltimemonitor_set_sample_count(void* self, int sampleCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimemonitor.html#sampleCount)
///
/// @param self const QOpenGLTimeMonitor*
///
int32_t q_opengltimemonitor_sample_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimemonitor.html#create)
///
/// @param self QOpenGLTimeMonitor*
///
bool q_opengltimemonitor_create(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimemonitor.html#destroy)
///
/// @param self QOpenGLTimeMonitor*
///
void q_opengltimemonitor_destroy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimemonitor.html#isCreated)
///
/// @param self const QOpenGLTimeMonitor*
///
bool q_opengltimemonitor_is_created(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimemonitor.html#objectIds)
///
/// @param self const QOpenGLTimeMonitor*
///
/// @return libqt_list of uint32_t
///
libqt_list q_opengltimemonitor_object_ids(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimemonitor.html#recordSample)
///
/// @param self QOpenGLTimeMonitor*
///
int32_t q_opengltimemonitor_record_sample(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimemonitor.html#isResultAvailable)
///
/// @param self const QOpenGLTimeMonitor*
///
bool q_opengltimemonitor_is_result_available(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimemonitor.html#waitForSamples)
///
/// @param self const QOpenGLTimeMonitor*
///
/// @return libqt_list of uint64_t
///
libqt_list q_opengltimemonitor_wait_for_samples(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimemonitor.html#waitForIntervals)
///
/// @param self const QOpenGLTimeMonitor*
///
/// @return libqt_list of uint64_t
///
libqt_list q_opengltimemonitor_wait_for_intervals(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimemonitor.html#reset)
///
/// @param self QOpenGLTimeMonitor*
///
void q_opengltimemonitor_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_opengltimemonitor_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_opengltimemonitor_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QOpenGLTimeMonitor*
///
const char* q_opengltimemonitor_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QOpenGLTimeMonitor*
/// @param name const char*
///
void q_opengltimemonitor_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QOpenGLTimeMonitor*
///
bool q_opengltimemonitor_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QOpenGLTimeMonitor*
///
bool q_opengltimemonitor_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QOpenGLTimeMonitor*
///
bool q_opengltimemonitor_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QOpenGLTimeMonitor*
///
bool q_opengltimemonitor_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QOpenGLTimeMonitor*
/// @param b bool
///
bool q_opengltimemonitor_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QOpenGLTimeMonitor*
///
QThread* q_opengltimemonitor_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QOpenGLTimeMonitor*
/// @param thread QThread*
///
bool q_opengltimemonitor_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLTimeMonitor*
/// @param interval int
///
int32_t q_opengltimemonitor_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLTimeMonitor*
/// @param time int64_t of nanoseconds
///
int32_t q_opengltimemonitor_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QOpenGLTimeMonitor*
/// @param id int
///
void q_opengltimemonitor_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QOpenGLTimeMonitor*
/// @param id enum Qt__TimerId
///
void q_opengltimemonitor_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QOpenGLTimeMonitor*
///
/// @return libqt_list of QObject*
///
libqt_list q_opengltimemonitor_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QOpenGLTimeMonitor*
/// @param parent QObject*
///
void q_opengltimemonitor_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QOpenGLTimeMonitor*
/// @param filterObj QObject*
///
void q_opengltimemonitor_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QOpenGLTimeMonitor*
/// @param obj QObject*
///
void q_opengltimemonitor_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_opengltimemonitor_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_opengltimemonitor_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QOpenGLTimeMonitor*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_opengltimemonitor_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_opengltimemonitor_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_opengltimemonitor_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QOpenGLTimeMonitor*
///
bool q_opengltimemonitor_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QOpenGLTimeMonitor*
/// @param receiver QObject*
///
bool q_opengltimemonitor_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_opengltimemonitor_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QOpenGLTimeMonitor*
///
void q_opengltimemonitor_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QOpenGLTimeMonitor*
///
void q_opengltimemonitor_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QOpenGLTimeMonitor*
/// @param name const char*
/// @param value QVariant*
///
bool q_opengltimemonitor_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QOpenGLTimeMonitor*
/// @param name const char*
///
QVariant* q_opengltimemonitor_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QOpenGLTimeMonitor*
///
const char** q_opengltimemonitor_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QOpenGLTimeMonitor*
///
QBindingStorage* q_opengltimemonitor_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QOpenGLTimeMonitor*
///
const QBindingStorage* q_opengltimemonitor_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLTimeMonitor*
///
void q_opengltimemonitor_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLTimeMonitor*
/// @param callback void func(QOpenGLTimeMonitor* self)
///
void q_opengltimemonitor_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QOpenGLTimeMonitor*
///
QObject* q_opengltimemonitor_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QOpenGLTimeMonitor*
/// @param classname const char*
///
bool q_opengltimemonitor_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QOpenGLTimeMonitor*
///
void q_opengltimemonitor_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLTimeMonitor*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_opengltimemonitor_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLTimeMonitor*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_opengltimemonitor_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_opengltimemonitor_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_opengltimemonitor_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QOpenGLTimeMonitor*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_opengltimemonitor_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QOpenGLTimeMonitor*
/// @param signal const char*
///
bool q_opengltimemonitor_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QOpenGLTimeMonitor*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_opengltimemonitor_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QOpenGLTimeMonitor*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_opengltimemonitor_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QOpenGLTimeMonitor*
/// @param receiver QObject*
/// @param member const char*
///
bool q_opengltimemonitor_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLTimeMonitor*
/// @param param1 QObject*
///
void q_opengltimemonitor_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLTimeMonitor*
/// @param callback void func(QOpenGLTimeMonitor* self, QObject* param1)
///
void q_opengltimemonitor_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param event QEvent*
///
bool q_opengltimemonitor_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param event QEvent*
///
bool q_opengltimemonitor_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param callback bool func(QOpenGLTimeMonitor* self, QEvent* event)
///
void q_opengltimemonitor_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_opengltimemonitor_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_opengltimemonitor_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param callback bool func(QOpenGLTimeMonitor* self, QObject* watched, QEvent* event)
///
void q_opengltimemonitor_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param event QTimerEvent*
///
void q_opengltimemonitor_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param event QTimerEvent*
///
void q_opengltimemonitor_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param callback void func(QOpenGLTimeMonitor* self, QTimerEvent* event)
///
void q_opengltimemonitor_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param event QChildEvent*
///
void q_opengltimemonitor_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param event QChildEvent*
///
void q_opengltimemonitor_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param callback void func(QOpenGLTimeMonitor* self, QChildEvent* event)
///
void q_opengltimemonitor_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param event QEvent*
///
void q_opengltimemonitor_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param event QEvent*
///
void q_opengltimemonitor_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param callback void func(QOpenGLTimeMonitor* self, QEvent* event)
///
void q_opengltimemonitor_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param signal QMetaMethod*
///
void q_opengltimemonitor_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param signal QMetaMethod*
///
void q_opengltimemonitor_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param callback void func(QOpenGLTimeMonitor* self, QMetaMethod* signal)
///
void q_opengltimemonitor_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param signal QMetaMethod*
///
void q_opengltimemonitor_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param signal QMetaMethod*
///
void q_opengltimemonitor_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param callback void func(QOpenGLTimeMonitor* self, QMetaMethod* signal)
///
void q_opengltimemonitor_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QOpenGLTimeMonitor*
///
QObject* q_opengltimemonitor_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QOpenGLTimeMonitor*
///
QObject* q_opengltimemonitor_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param callback QObject* func(QOpenGLTimeMonitor* self)
///
void q_opengltimemonitor_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QOpenGLTimeMonitor*
///
int32_t q_opengltimemonitor_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QOpenGLTimeMonitor*
///
int32_t q_opengltimemonitor_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param callback int32_t func(QOpenGLTimeMonitor* self)
///
void q_opengltimemonitor_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QOpenGLTimeMonitor*
/// @param signal const char*
///
int32_t q_opengltimemonitor_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QOpenGLTimeMonitor*
/// @param signal const char*
///
int32_t q_opengltimemonitor_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param callback int32_t func(QOpenGLTimeMonitor* self, const char* signal)
///
void q_opengltimemonitor_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QOpenGLTimeMonitor*
/// @param signal QMetaMethod*
///
bool q_opengltimemonitor_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QOpenGLTimeMonitor*
/// @param signal QMetaMethod*
///
bool q_opengltimemonitor_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLTimeMonitor*
/// @param callback bool func(QOpenGLTimeMonitor* self, QMetaMethod* signal)
///
void q_opengltimemonitor_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QOpenGLTimeMonitor*
/// @param callback void func(QOpenGLTimeMonitor* self, const char* objectName)
///
void q_opengltimemonitor_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltimemonitor.html#dtor.QOpenGLTimeMonitor)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLTimeMonitor*
///
void q_opengltimemonitor_delete(void* self);

#endif
