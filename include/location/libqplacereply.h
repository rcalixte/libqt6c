#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQPLACEREPLY_H
#define SRC_LOCATION_QT6C_LIBQPLACEREPLY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html)

/// q_placereply_new constructs a new QPlaceReply object.
///
QPlaceReply* q_placereply_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html)

/// q_placereply_new2 constructs a new QPlaceReply object.
///
/// @param parent QObject*
///
QPlaceReply* q_placereply_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPlaceReply*
///
const QMetaObject* q_placereply_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceReply*
/// @param callback const QMetaObject* func()
///
void q_placereply_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QPlaceReply*
///
const QMetaObject* q_placereply_qbase_meta_object(void* self);

/// @param self QPlaceReply*
/// @param param1 const char*
///
void* q_placereply_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QPlaceReply*
/// @param callback void* func(QPlaceReply* self, const char* param1)
///
void q_placereply_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QPlaceReply*
/// @param param1 const char*
///
void* q_placereply_qbase_metacast(void* self, const char* param1);

/// @param self QPlaceReply*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_placereply_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPlaceReply*
/// @param callback int32_t func(QPlaceReply* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_placereply_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPlaceReply*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_placereply_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_placereply_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#isFinished)
///
/// @param self QPlaceReply*
///
bool q_placereply_is_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#type)
///
/// @param self QPlaceReply*
///
/// @return enum QPlaceReply__Type
///
int32_t q_placereply_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceReply*
/// @param callback int32_t func()
///
void q_placereply_on_type(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#type)
///
/// Base class method implementation
///
/// @param self QPlaceReply*
///
/// @return enum QPlaceReply__Type
///
int32_t q_placereply_qbase_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceReply*
///
const char* q_placereply_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#error)
///
/// @param self QPlaceReply*
///
/// @return enum QPlaceReply__Error
///
int32_t q_placereply_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#abort)
///
/// @param self QPlaceReply*
///
void q_placereply_abort(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#abort)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceReply*
/// @param callback void func()
///
void q_placereply_on_abort(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#abort)
///
/// Base class method implementation
///
/// @param self QPlaceReply*
///
void q_placereply_qbase_abort(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#finished)
///
/// @param self QPlaceReply*
///
void q_placereply_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#finished)
///
/// @param self QPlaceReply*
/// @param callback void func(QPlaceReply* self)
///
void q_placereply_on_finished(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#contentUpdated)
///
/// @param self QPlaceReply*
///
void q_placereply_content_updated(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#contentUpdated)
///
/// @param self QPlaceReply*
/// @param callback void func(QPlaceReply* self)
///
void q_placereply_on_content_updated(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#aborted)
///
/// @param self QPlaceReply*
///
void q_placereply_aborted(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#aborted)
///
/// @param self QPlaceReply*
/// @param callback void func(QPlaceReply* self)
///
void q_placereply_on_aborted(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
///
/// @param self QPlaceReply*
/// @param error enum QPlaceReply__Error
///
void q_placereply_error_occurred(void* self, int32_t error);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
///
/// @param self QPlaceReply*
/// @param callback void func(QPlaceReply* self, enum QPlaceReply__Error error)
///
void q_placereply_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setFinished)
///
/// @param self QPlaceReply*
/// @param finished bool
///
void q_placereply_set_finished(void* self, bool finished);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setFinished)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceReply*
/// @param callback void func(QPlaceReply* self, bool finished)
///
void q_placereply_on_set_finished(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setFinished)
///
/// Base class method implementation
///
/// @param self QPlaceReply*
/// @param finished bool
///
void q_placereply_qbase_set_finished(void* self, bool finished);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setError)
///
/// @param self QPlaceReply*
/// @param error enum QPlaceReply__Error
/// @param errorString const char*
///
void q_placereply_set_error(void* self, int32_t error, const char* errorString);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setError)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceReply*
/// @param callback void func(QPlaceReply* self, enum QPlaceReply__Error error, const char* errorString)
///
void q_placereply_on_set_error(void* self, void (*callback)(void*, int32_t, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setError)
///
/// Base class method implementation
///
/// @param self QPlaceReply*
/// @param error enum QPlaceReply__Error
/// @param errorString const char*
///
void q_placereply_qbase_set_error(void* self, int32_t error, const char* errorString);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_placereply_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_placereply_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
///
/// @param self QPlaceReply*
/// @param error enum QPlaceReply__Error
/// @param errorString const char*
///
void q_placereply_error_occurred2(void* self, int32_t error, const char* errorString);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
///
/// @param self QPlaceReply*
/// @param callback void func(QPlaceReply* self, enum QPlaceReply__Error error, const char* errorString)
///
void q_placereply_on_error_occurred2(void* self, void (*callback)(void*, int32_t, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceReply*
///
const char* q_placereply_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPlaceReply*
/// @param name char*
///
void q_placereply_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPlaceReply*
///
bool q_placereply_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPlaceReply*
///
bool q_placereply_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPlaceReply*
///
bool q_placereply_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPlaceReply*
///
bool q_placereply_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPlaceReply*
/// @param b bool
///
bool q_placereply_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QPlaceReply*
///
QThread* q_placereply_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPlaceReply*
/// @param thread QThread*
///
bool q_placereply_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceReply*
/// @param interval int
///
int32_t q_placereply_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceReply*
/// @param time int64_t of nanoseconds
///
int32_t q_placereply_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPlaceReply*
/// @param id int
///
void q_placereply_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPlaceReply*
/// @param id enum Qt__TimerId
///
void q_placereply_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QPlaceReply*
///
/// @return libqt_list of QObject*
///
libqt_list q_placereply_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPlaceReply*
/// @param parent QObject*
///
void q_placereply_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPlaceReply*
/// @param filterObj QObject*
///
void q_placereply_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPlaceReply*
/// @param obj QObject*
///
void q_placereply_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_placereply_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPlaceReply*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_placereply_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_placereply_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_placereply_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPlaceReply*
///
void q_placereply_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPlaceReply*
///
void q_placereply_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPlaceReply*
/// @param name const char*
/// @param value QVariant*
///
bool q_placereply_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPlaceReply*
/// @param name const char*
///
QVariant* q_placereply_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QPlaceReply*
///
const char** q_placereply_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPlaceReply*
///
QBindingStorage* q_placereply_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPlaceReply*
///
const QBindingStorage* q_placereply_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceReply*
///
void q_placereply_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceReply*
/// @param callback void func(QPlaceReply* self)
///
void q_placereply_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QPlaceReply*
///
QObject* q_placereply_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPlaceReply*
/// @param classname const char*
///
bool q_placereply_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPlaceReply*
///
void q_placereply_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceReply*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_placereply_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceReply*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_placereply_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_placereply_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPlaceReply*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_placereply_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceReply*
/// @param param1 QObject*
///
void q_placereply_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceReply*
/// @param callback void func(QPlaceReply* self, QObject* param1)
///
void q_placereply_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceReply*
/// @param event QEvent*
///
bool q_placereply_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceReply*
/// @param event QEvent*
///
bool q_placereply_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceReply*
/// @param callback bool func(QPlaceReply* self, QEvent* event)
///
void q_placereply_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceReply*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_placereply_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceReply*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_placereply_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceReply*
/// @param callback bool func(QPlaceReply* self, QObject* watched, QEvent* event)
///
void q_placereply_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceReply*
/// @param event QTimerEvent*
///
void q_placereply_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceReply*
/// @param event QTimerEvent*
///
void q_placereply_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceReply*
/// @param callback void func(QPlaceReply* self, QTimerEvent* event)
///
void q_placereply_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceReply*
/// @param event QChildEvent*
///
void q_placereply_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceReply*
/// @param event QChildEvent*
///
void q_placereply_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceReply*
/// @param callback void func(QPlaceReply* self, QChildEvent* event)
///
void q_placereply_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceReply*
/// @param event QEvent*
///
void q_placereply_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceReply*
/// @param event QEvent*
///
void q_placereply_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceReply*
/// @param callback void func(QPlaceReply* self, QEvent* event)
///
void q_placereply_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceReply*
/// @param signal QMetaMethod*
///
void q_placereply_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceReply*
/// @param signal QMetaMethod*
///
void q_placereply_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceReply*
/// @param callback void func(QPlaceReply* self, QMetaMethod* signal)
///
void q_placereply_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceReply*
/// @param signal QMetaMethod*
///
void q_placereply_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceReply*
/// @param signal QMetaMethod*
///
void q_placereply_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceReply*
/// @param callback void func(QPlaceReply* self, QMetaMethod* signal)
///
void q_placereply_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceReply*
///
QObject* q_placereply_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceReply*
///
QObject* q_placereply_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceReply*
/// @param callback QObject* func()
///
void q_placereply_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceReply*
///
int32_t q_placereply_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceReply*
///
int32_t q_placereply_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceReply*
/// @param callback int32_t func()
///
void q_placereply_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceReply*
/// @param signal const char*
///
int32_t q_placereply_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceReply*
/// @param signal const char*
///
int32_t q_placereply_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceReply*
/// @param callback int32_t func(QPlaceReply* self, const char* signal)
///
void q_placereply_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceReply*
/// @param signal QMetaMethod*
///
bool q_placereply_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceReply*
/// @param signal QMetaMethod*
///
bool q_placereply_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceReply*
/// @param callback bool func(QPlaceReply* self, QMetaMethod* signal)
///
void q_placereply_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPlaceReply*
/// @param callback void func(QPlaceReply* self, const char* objectName)
///
void q_placereply_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#dtor.QPlaceReply)
///
/// Delete this object from C++ memory.
///
/// @param self QPlaceReply*
///
void q_placereply_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#public-types)

typedef enum {
    QPLACEREPLY_ERROR_NOERROR = 0,
    QPLACEREPLY_ERROR_PLACEDOESNOTEXISTERROR = 1,
    QPLACEREPLY_ERROR_CATEGORYDOESNOTEXISTERROR = 2,
    QPLACEREPLY_ERROR_COMMUNICATIONERROR = 3,
    QPLACEREPLY_ERROR_PARSEERROR = 4,
    QPLACEREPLY_ERROR_PERMISSIONSERROR = 5,
    QPLACEREPLY_ERROR_UNSUPPORTEDERROR = 6,
    QPLACEREPLY_ERROR_BADARGUMENTERROR = 7,
    QPLACEREPLY_ERROR_CANCELERROR = 8,
    QPLACEREPLY_ERROR_UNKNOWNERROR = 9
} QPlaceReply__Error;

/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#public-types)

typedef enum {
    QPLACEREPLY_TYPE_REPLY = 0,
    QPLACEREPLY_TYPE_DETAILSREPLY = 1,
    QPLACEREPLY_TYPE_SEARCHREPLY = 2,
    QPLACEREPLY_TYPE_SEARCHSUGGESTIONREPLY = 3,
    QPLACEREPLY_TYPE_CONTENTREPLY = 4,
    QPLACEREPLY_TYPE_IDREPLY = 5,
    QPLACEREPLY_TYPE_MATCHREPLY = 6
} QPlaceReply__Type;

#endif
