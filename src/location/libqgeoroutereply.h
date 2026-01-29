#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQGEOROUTEREPLY_H
#define SRC_LOCATION_QT6C_LIBQGEOROUTEREPLY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html)

/// q_georoutereply_new constructs a new QGeoRouteReply object.
///
/// @param error enum QGeoRouteReply__Error
/// @param errorString const char*
///
QGeoRouteReply* q_georoutereply_new(int32_t error, const char* errorString);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html)

/// q_georoutereply_new2 constructs a new QGeoRouteReply object.
///
/// @param error enum QGeoRouteReply__Error
/// @param errorString const char*
/// @param parent QObject*
///
QGeoRouteReply* q_georoutereply_new2(int32_t error, const char* errorString, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGeoRouteReply*
///
const QMetaObject* q_georoutereply_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QGeoRouteReply*
/// @param callback const QMetaObject* func()
///
void q_georoutereply_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QGeoRouteReply*
///
const QMetaObject* q_georoutereply_qbase_meta_object(void* self);

/// @param self QGeoRouteReply*
/// @param param1 const char*
///
void* q_georoutereply_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QGeoRouteReply*
/// @param callback void* func(QGeoRouteReply* self, const char* param1)
///
void q_georoutereply_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QGeoRouteReply*
/// @param param1 const char*
///
void* q_georoutereply_qbase_metacast(void* self, const char* param1);

/// @param self QGeoRouteReply*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_georoutereply_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGeoRouteReply*
/// @param callback int32_t func(QGeoRouteReply* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_georoutereply_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QGeoRouteReply*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_georoutereply_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_georoutereply_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#isFinished)
///
/// @param self QGeoRouteReply*
///
bool q_georoutereply_is_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#error)
///
/// @param self QGeoRouteReply*
///
/// @return enum QGeoRouteReply__Error
///
int32_t q_georoutereply_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoRouteReply*
///
const char* q_georoutereply_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#request)
///
/// @param self QGeoRouteReply*
///
QGeoRouteRequest* q_georoutereply_request(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#routes)
///
/// @param self QGeoRouteReply*
///
/// @return libqt_list of QGeoRoute*
///
libqt_list q_georoutereply_routes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#abort)
///
/// @param self QGeoRouteReply*
///
void q_georoutereply_abort(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#abort)
///
/// Allows for overriding the related default method
///
/// @param self QGeoRouteReply*
/// @param callback void func()
///
void q_georoutereply_on_abort(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#abort)
///
/// Base class method implementation
///
/// @param self QGeoRouteReply*
///
void q_georoutereply_qbase_abort(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#finished)
///
/// @param self QGeoRouteReply*
///
void q_georoutereply_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#finished)
///
/// @param self QGeoRouteReply*
/// @param callback void func(QGeoRouteReply* self)
///
void q_georoutereply_on_finished(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#aborted)
///
/// @param self QGeoRouteReply*
///
void q_georoutereply_aborted(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#aborted)
///
/// @param self QGeoRouteReply*
/// @param callback void func(QGeoRouteReply* self)
///
void q_georoutereply_on_aborted(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#errorOccurred)
///
/// @param self QGeoRouteReply*
/// @param error enum QGeoRouteReply__Error
///
void q_georoutereply_error_occurred(void* self, int32_t error);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#errorOccurred)
///
/// @param self QGeoRouteReply*
/// @param callback void func(QGeoRouteReply* self, enum QGeoRouteReply__Error error)
///
void q_georoutereply_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#setError)
///
/// @param self QGeoRouteReply*
/// @param error enum QGeoRouteReply__Error
/// @param errorString const char*
///
void q_georoutereply_set_error(void* self, int32_t error, const char* errorString);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#setError)
///
/// Allows for overriding the related default method
///
/// @param self QGeoRouteReply*
/// @param callback void func(QGeoRouteReply* self, enum QGeoRouteReply__Error error, const char* errorString)
///
void q_georoutereply_on_set_error(void* self, void (*callback)(void*, int32_t, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#setError)
///
/// Base class method implementation
///
/// @param self QGeoRouteReply*
/// @param error enum QGeoRouteReply__Error
/// @param errorString const char*
///
void q_georoutereply_qbase_set_error(void* self, int32_t error, const char* errorString);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#setFinished)
///
/// @param self QGeoRouteReply*
/// @param finished bool
///
void q_georoutereply_set_finished(void* self, bool finished);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#setFinished)
///
/// Allows for overriding the related default method
///
/// @param self QGeoRouteReply*
/// @param callback void func(QGeoRouteReply* self, bool finished)
///
void q_georoutereply_on_set_finished(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#setFinished)
///
/// Base class method implementation
///
/// @param self QGeoRouteReply*
/// @param finished bool
///
void q_georoutereply_qbase_set_finished(void* self, bool finished);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#setRoutes)
///
/// @param self QGeoRouteReply*
/// @param routes libqt_list of QGeoRoute*
///
void q_georoutereply_set_routes(void* self, libqt_list /* of QGeoRoute* */ routes);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#setRoutes)
///
/// Allows for overriding the related default method
///
/// @param self QGeoRouteReply*
/// @param callback void func(QGeoRouteReply* self, QGeoRoute** routes)
///
void q_georoutereply_on_set_routes(void* self, void (*callback)(void*, QGeoRoute**));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#setRoutes)
///
/// Base class method implementation
///
/// @param self QGeoRouteReply*
/// @param routes libqt_list of QGeoRoute*
///
void q_georoutereply_qbase_set_routes(void* self, libqt_list /* of QGeoRoute* */ routes);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#addRoutes)
///
/// @param self QGeoRouteReply*
/// @param routes libqt_list of QGeoRoute*
///
void q_georoutereply_add_routes(void* self, libqt_list /* of QGeoRoute* */ routes);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#addRoutes)
///
/// Allows for overriding the related default method
///
/// @param self QGeoRouteReply*
/// @param callback void func(QGeoRouteReply* self, QGeoRoute** routes)
///
void q_georoutereply_on_add_routes(void* self, void (*callback)(void*, QGeoRoute**));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#addRoutes)
///
/// Base class method implementation
///
/// @param self QGeoRouteReply*
/// @param routes libqt_list of QGeoRoute*
///
void q_georoutereply_qbase_add_routes(void* self, libqt_list /* of QGeoRoute* */ routes);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_georoutereply_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_georoutereply_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#errorOccurred)
///
/// @param self QGeoRouteReply*
/// @param error enum QGeoRouteReply__Error
/// @param errorString const char*
///
void q_georoutereply_error_occurred2(void* self, int32_t error, const char* errorString);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#errorOccurred)
///
/// @param self QGeoRouteReply*
/// @param callback void func(QGeoRouteReply* self, enum QGeoRouteReply__Error error, const char* errorString)
///
void q_georoutereply_on_error_occurred2(void* self, void (*callback)(void*, int32_t, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoRouteReply*
///
const char* q_georoutereply_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGeoRouteReply*
/// @param name char*
///
void q_georoutereply_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGeoRouteReply*
///
bool q_georoutereply_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGeoRouteReply*
///
bool q_georoutereply_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGeoRouteReply*
///
bool q_georoutereply_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGeoRouteReply*
///
bool q_georoutereply_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGeoRouteReply*
/// @param b bool
///
bool q_georoutereply_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGeoRouteReply*
///
QThread* q_georoutereply_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGeoRouteReply*
/// @param thread QThread*
///
bool q_georoutereply_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoRouteReply*
/// @param interval int
///
int32_t q_georoutereply_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoRouteReply*
/// @param time int64_t of nanoseconds
///
int32_t q_georoutereply_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGeoRouteReply*
/// @param id int
///
void q_georoutereply_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGeoRouteReply*
/// @param id enum Qt__TimerId
///
void q_georoutereply_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGeoRouteReply*
///
/// @return libqt_list of QObject*
///
libqt_list q_georoutereply_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGeoRouteReply*
/// @param parent QObject*
///
void q_georoutereply_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGeoRouteReply*
/// @param filterObj QObject*
///
void q_georoutereply_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGeoRouteReply*
/// @param obj QObject*
///
void q_georoutereply_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_georoutereply_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGeoRouteReply*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_georoutereply_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_georoutereply_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_georoutereply_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGeoRouteReply*
///
void q_georoutereply_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGeoRouteReply*
///
void q_georoutereply_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGeoRouteReply*
/// @param name const char*
/// @param value QVariant*
///
bool q_georoutereply_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGeoRouteReply*
/// @param name const char*
///
QVariant* q_georoutereply_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QGeoRouteReply*
///
const char** q_georoutereply_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGeoRouteReply*
///
QBindingStorage* q_georoutereply_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGeoRouteReply*
///
const QBindingStorage* q_georoutereply_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoRouteReply*
///
void q_georoutereply_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoRouteReply*
/// @param callback void func(QGeoRouteReply* self)
///
void q_georoutereply_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGeoRouteReply*
///
QObject* q_georoutereply_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGeoRouteReply*
/// @param classname const char*
///
bool q_georoutereply_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGeoRouteReply*
///
void q_georoutereply_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoRouteReply*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_georoutereply_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoRouteReply*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_georoutereply_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_georoutereply_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGeoRouteReply*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_georoutereply_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoRouteReply*
/// @param param1 QObject*
///
void q_georoutereply_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoRouteReply*
/// @param callback void func(QGeoRouteReply* self, QObject* param1)
///
void q_georoutereply_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param event QEvent*
///
bool q_georoutereply_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param event QEvent*
///
bool q_georoutereply_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param callback bool func(QGeoRouteReply* self, QEvent* event)
///
void q_georoutereply_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_georoutereply_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_georoutereply_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param callback bool func(QGeoRouteReply* self, QObject* watched, QEvent* event)
///
void q_georoutereply_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param event QTimerEvent*
///
void q_georoutereply_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param event QTimerEvent*
///
void q_georoutereply_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param callback void func(QGeoRouteReply* self, QTimerEvent* event)
///
void q_georoutereply_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param event QChildEvent*
///
void q_georoutereply_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param event QChildEvent*
///
void q_georoutereply_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param callback void func(QGeoRouteReply* self, QChildEvent* event)
///
void q_georoutereply_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param event QEvent*
///
void q_georoutereply_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param event QEvent*
///
void q_georoutereply_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param callback void func(QGeoRouteReply* self, QEvent* event)
///
void q_georoutereply_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param signal QMetaMethod*
///
void q_georoutereply_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param signal QMetaMethod*
///
void q_georoutereply_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param callback void func(QGeoRouteReply* self, QMetaMethod* signal)
///
void q_georoutereply_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param signal QMetaMethod*
///
void q_georoutereply_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param signal QMetaMethod*
///
void q_georoutereply_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param callback void func(QGeoRouteReply* self, QMetaMethod* signal)
///
void q_georoutereply_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoRouteReply*
///
QObject* q_georoutereply_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoRouteReply*
///
QObject* q_georoutereply_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param callback QObject* func()
///
void q_georoutereply_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoRouteReply*
///
int32_t q_georoutereply_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoRouteReply*
///
int32_t q_georoutereply_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param callback int32_t func()
///
void q_georoutereply_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param signal const char*
///
int32_t q_georoutereply_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param signal const char*
///
int32_t q_georoutereply_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param callback int32_t func(QGeoRouteReply* self, const char* signal)
///
void q_georoutereply_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param signal QMetaMethod*
///
bool q_georoutereply_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param signal QMetaMethod*
///
bool q_georoutereply_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRouteReply*
/// @param callback bool func(QGeoRouteReply* self, QMetaMethod* signal)
///
void q_georoutereply_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGeoRouteReply*
/// @param callback void func(QGeoRouteReply* self, const char* objectName)
///
void q_georoutereply_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#dtor.QGeoRouteReply)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoRouteReply*
///
void q_georoutereply_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutereply.html#public-types)

typedef enum {
    QGEOROUTEREPLY_ERROR_NOERROR = 0,
    QGEOROUTEREPLY_ERROR_ENGINENOTSETERROR = 1,
    QGEOROUTEREPLY_ERROR_COMMUNICATIONERROR = 2,
    QGEOROUTEREPLY_ERROR_PARSEERROR = 3,
    QGEOROUTEREPLY_ERROR_UNSUPPORTEDOPTIONERROR = 4,
    QGEOROUTEREPLY_ERROR_UNKNOWNERROR = 5
} QGeoRouteReply__Error;

#endif
