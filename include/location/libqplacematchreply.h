#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQPLACEMATCHREPLY_H
#define SRC_LOCATION_QT6C_LIBQPLACEMATCHREPLY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchreply.html)

/// q_placematchreply_new constructs a new QPlaceMatchReply object.
///
QPlaceMatchReply* q_placematchreply_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchreply.html)

/// q_placematchreply_new2 constructs a new QPlaceMatchReply object.
///
/// @param parent QObject*
///
QPlaceMatchReply* q_placematchreply_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPlaceMatchReply*
///
const QMetaObject* q_placematchreply_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceMatchReply*
/// @param callback const QMetaObject* func()
///
void q_placematchreply_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_placematchreply_super_meta_object` instead
///
#define q_placematchreply_qbase_meta_object q_placematchreply_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QPlaceMatchReply*
///
const QMetaObject* q_placematchreply_super_meta_object(void* self);

/// @param self QPlaceMatchReply*
/// @param param1 const char*
///
void* q_placematchreply_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QPlaceMatchReply*
/// @param callback void* func(QPlaceMatchReply* self, const char* param1)
///
void q_placematchreply_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_placematchreply_super_metacast` instead
///
#define q_placematchreply_qbase_metacast q_placematchreply_super_metacast

/// Base class method implementation
///
/// @param self QPlaceMatchReply*
/// @param param1 const char*
///
void* q_placematchreply_super_metacast(void* self, const char* param1);

/// @param self QPlaceMatchReply*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_placematchreply_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPlaceMatchReply*
/// @param callback int32_t func(QPlaceMatchReply* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_placematchreply_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_placematchreply_super_metacall` instead
///
#define q_placematchreply_qbase_metacall q_placematchreply_super_metacall

/// Base class method implementation
///
/// @param self QPlaceMatchReply*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_placematchreply_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_placematchreply_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchreply.html#type)
///
/// @param self QPlaceMatchReply*
///
/// @return enum QPlaceReply__Type
///
int32_t q_placematchreply_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchreply.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceMatchReply*
/// @param callback int32_t func()
///
void q_placematchreply_on_type(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_placematchreply_super_type` instead
///
#define q_placematchreply_qbase_type q_placematchreply_super_type

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchreply.html#type)
///
/// Base class method implementation
///
/// @param self QPlaceMatchReply*
///
/// @return enum QPlaceReply__Type
///
int32_t q_placematchreply_super_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchreply.html#places)
///
/// @param self QPlaceMatchReply*
///
/// @return libqt_list of QPlace*
///
libqt_list q_placematchreply_places(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchreply.html#request)
///
/// @param self QPlaceMatchReply*
///
QPlaceMatchRequest* q_placematchreply_request(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchreply.html#setPlaces)
///
/// @param self QPlaceMatchReply*
/// @param results libqt_list of QPlace*
///
void q_placematchreply_set_places(void* self, libqt_list results);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchreply.html#setPlaces)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceMatchReply*
/// @param callback void func(QPlaceMatchReply* self, libqt_list of QPlace* results)
///
void q_placematchreply_on_set_places(void* self, void (*callback)(void*, libqt_list));

/// @warning DEPRECATED: Use `q_placematchreply_super_set_places` instead
///
#define q_placematchreply_qbase_set_places q_placematchreply_super_set_places

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchreply.html#setPlaces)
///
/// Base class method implementation
///
/// @param self QPlaceMatchReply*
/// @param results libqt_list of QPlace*
///
void q_placematchreply_super_set_places(void* self, libqt_list results);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchreply.html#setRequest)
///
/// @param self QPlaceMatchReply*
/// @param request QPlaceMatchRequest*
///
void q_placematchreply_set_request(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchreply.html#setRequest)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceMatchReply*
/// @param callback void func(QPlaceMatchReply* self, QPlaceMatchRequest* request)
///
void q_placematchreply_on_set_request(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_placematchreply_super_set_request` instead
///
#define q_placematchreply_qbase_set_request q_placematchreply_super_set_request

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchreply.html#setRequest)
///
/// Base class method implementation
///
/// @param self QPlaceMatchReply*
/// @param request QPlaceMatchRequest*
///
void q_placematchreply_super_set_request(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_placematchreply_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_placematchreply_tr3(const char* s, const char* c, int n);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#isFinished)
///
/// @param self QPlaceMatchReply*
///
bool q_placematchreply_is_finished(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceMatchReply*
///
const char* q_placematchreply_error_string(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#error)
///
/// @param self QPlaceMatchReply*
///
/// @return enum QPlaceReply__Error
///
int32_t q_placematchreply_error(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#finished)
///
/// @param self QPlaceMatchReply*
///
void q_placematchreply_finished(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#finished)
///
/// @param self QPlaceMatchReply*
/// @param callback void func(QPlaceMatchReply* self)
///
void q_placematchreply_on_finished(void* self, void (*callback)(void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#contentUpdated)
///
/// @param self QPlaceMatchReply*
///
void q_placematchreply_content_updated(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#contentUpdated)
///
/// @param self QPlaceMatchReply*
/// @param callback void func(QPlaceMatchReply* self)
///
void q_placematchreply_on_content_updated(void* self, void (*callback)(void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#aborted)
///
/// @param self QPlaceMatchReply*
///
void q_placematchreply_aborted(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#aborted)
///
/// @param self QPlaceMatchReply*
/// @param callback void func(QPlaceMatchReply* self)
///
void q_placematchreply_on_aborted(void* self, void (*callback)(void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
///
/// @param self QPlaceMatchReply*
/// @param error enum QPlaceReply__Error
///
void q_placematchreply_error_occurred(void* self, int32_t error);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
///
/// @param self QPlaceMatchReply*
/// @param callback void func(QPlaceMatchReply* self, enum QPlaceReply__Error error)
///
void q_placematchreply_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
///
/// @param self QPlaceMatchReply*
/// @param error enum QPlaceReply__Error
/// @param errorString const char*
///
void q_placematchreply_error_occurred2(void* self, int32_t error, const char* errorString);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
///
/// @param self QPlaceMatchReply*
/// @param callback void func(QPlaceMatchReply* self, enum QPlaceReply__Error error, const char* errorString)
///
void q_placematchreply_on_error_occurred2(void* self, void (*callback)(void*, int32_t, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceMatchReply*
///
const char* q_placematchreply_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPlaceMatchReply*
/// @param name const char*
///
void q_placematchreply_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPlaceMatchReply*
///
bool q_placematchreply_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPlaceMatchReply*
///
bool q_placematchreply_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPlaceMatchReply*
///
bool q_placematchreply_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPlaceMatchReply*
///
bool q_placematchreply_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPlaceMatchReply*
/// @param b bool
///
bool q_placematchreply_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QPlaceMatchReply*
///
QThread* q_placematchreply_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPlaceMatchReply*
/// @param thread QThread*
///
bool q_placematchreply_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceMatchReply*
/// @param interval int
///
int32_t q_placematchreply_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceMatchReply*
/// @param time int64_t of nanoseconds
///
int32_t q_placematchreply_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPlaceMatchReply*
/// @param id int
///
void q_placematchreply_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPlaceMatchReply*
/// @param id enum Qt__TimerId
///
void q_placematchreply_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QPlaceMatchReply*
///
/// @return libqt_list of QObject*
///
libqt_list q_placematchreply_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPlaceMatchReply*
/// @param parent QObject*
///
void q_placematchreply_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPlaceMatchReply*
/// @param filterObj QObject*
///
void q_placematchreply_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPlaceMatchReply*
/// @param obj QObject*
///
void q_placematchreply_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_placematchreply_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_placematchreply_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPlaceMatchReply*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_placematchreply_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_placematchreply_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_placematchreply_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QPlaceMatchReply*
///
bool q_placematchreply_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QPlaceMatchReply*
/// @param receiver QObject*
///
bool q_placematchreply_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_placematchreply_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPlaceMatchReply*
///
void q_placematchreply_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPlaceMatchReply*
///
void q_placematchreply_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPlaceMatchReply*
/// @param name const char*
/// @param value QVariant*
///
bool q_placematchreply_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPlaceMatchReply*
/// @param name const char*
///
QVariant* q_placematchreply_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QPlaceMatchReply*
///
const char** q_placematchreply_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPlaceMatchReply*
///
QBindingStorage* q_placematchreply_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPlaceMatchReply*
///
const QBindingStorage* q_placematchreply_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceMatchReply*
///
void q_placematchreply_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceMatchReply*
/// @param callback void func(QPlaceMatchReply* self)
///
void q_placematchreply_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QPlaceMatchReply*
///
QObject* q_placematchreply_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPlaceMatchReply*
/// @param classname const char*
///
bool q_placematchreply_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPlaceMatchReply*
///
void q_placematchreply_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceMatchReply*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_placematchreply_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceMatchReply*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_placematchreply_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_placematchreply_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_placematchreply_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPlaceMatchReply*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_placematchreply_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QPlaceMatchReply*
/// @param signal const char*
///
bool q_placematchreply_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QPlaceMatchReply*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_placematchreply_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QPlaceMatchReply*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_placematchreply_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QPlaceMatchReply*
/// @param receiver QObject*
/// @param member const char*
///
bool q_placematchreply_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceMatchReply*
/// @param param1 QObject*
///
void q_placematchreply_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceMatchReply*
/// @param callback void func(QPlaceMatchReply* self, QObject* param1)
///
void q_placematchreply_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#abort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceMatchReply*
///
void q_placematchreply_abort(void* self);

/// @warning DEPRECATED: Use `q_placematchreply_super_abort` instead
///
#define q_placematchreply_qbase_abort q_placematchreply_super_abort

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#abort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceMatchReply*
///
void q_placematchreply_super_abort(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#abort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param callback void func()
///
void q_placematchreply_on_abort(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param event QEvent*
///
bool q_placematchreply_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_placematchreply_super_event` instead
///
#define q_placematchreply_qbase_event q_placematchreply_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param event QEvent*
///
bool q_placematchreply_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param callback bool func(QPlaceMatchReply* self, QEvent* event)
///
void q_placematchreply_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_placematchreply_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_placematchreply_super_event_filter` instead
///
#define q_placematchreply_qbase_event_filter q_placematchreply_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_placematchreply_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param callback bool func(QPlaceMatchReply* self, QObject* watched, QEvent* event)
///
void q_placematchreply_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param event QTimerEvent*
///
void q_placematchreply_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_placematchreply_super_timer_event` instead
///
#define q_placematchreply_qbase_timer_event q_placematchreply_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param event QTimerEvent*
///
void q_placematchreply_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param callback void func(QPlaceMatchReply* self, QTimerEvent* event)
///
void q_placematchreply_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param event QChildEvent*
///
void q_placematchreply_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_placematchreply_super_child_event` instead
///
#define q_placematchreply_qbase_child_event q_placematchreply_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param event QChildEvent*
///
void q_placematchreply_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param callback void func(QPlaceMatchReply* self, QChildEvent* event)
///
void q_placematchreply_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param event QEvent*
///
void q_placematchreply_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_placematchreply_super_custom_event` instead
///
#define q_placematchreply_qbase_custom_event q_placematchreply_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param event QEvent*
///
void q_placematchreply_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param callback void func(QPlaceMatchReply* self, QEvent* event)
///
void q_placematchreply_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param signal QMetaMethod*
///
void q_placematchreply_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_placematchreply_super_connect_notify` instead
///
#define q_placematchreply_qbase_connect_notify q_placematchreply_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param signal QMetaMethod*
///
void q_placematchreply_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param callback void func(QPlaceMatchReply* self, QMetaMethod* signal)
///
void q_placematchreply_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param signal QMetaMethod*
///
void q_placematchreply_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_placematchreply_super_disconnect_notify` instead
///
#define q_placematchreply_qbase_disconnect_notify q_placematchreply_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param signal QMetaMethod*
///
void q_placematchreply_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param callback void func(QPlaceMatchReply* self, QMetaMethod* signal)
///
void q_placematchreply_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setFinished)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param finished bool
///
void q_placematchreply_set_finished(void* self, bool finished);

/// @warning DEPRECATED: Use `q_placematchreply_super_set_finished` instead
///
#define q_placematchreply_qbase_set_finished q_placematchreply_super_set_finished

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setFinished)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param finished bool
///
void q_placematchreply_super_set_finished(void* self, bool finished);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setFinished)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param callback void func(QPlaceMatchReply* self, bool finished)
///
void q_placematchreply_on_set_finished(void* self, void (*callback)(void*, bool));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setError)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param error enum QPlaceReply__Error
/// @param errorString const char*
///
void q_placematchreply_set_error(void* self, int32_t error, const char* errorString);

/// @warning DEPRECATED: Use `q_placematchreply_super_set_error` instead
///
#define q_placematchreply_qbase_set_error q_placematchreply_super_set_error

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setError)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param error enum QPlaceReply__Error
/// @param errorString const char*
///
void q_placematchreply_super_set_error(void* self, int32_t error, const char* errorString);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setError)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param callback void func(QPlaceMatchReply* self, enum QPlaceReply__Error error, const char* errorString)
///
void q_placematchreply_on_set_error(void* self, void (*callback)(void*, int32_t, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceMatchReply*
///
QObject* q_placematchreply_sender(void* self);

/// @warning DEPRECATED: Use `q_placematchreply_super_sender` instead
///
#define q_placematchreply_qbase_sender q_placematchreply_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceMatchReply*
///
QObject* q_placematchreply_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param callback QObject* func()
///
void q_placematchreply_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceMatchReply*
///
int32_t q_placematchreply_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_placematchreply_super_sender_signal_index` instead
///
#define q_placematchreply_qbase_sender_signal_index q_placematchreply_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceMatchReply*
///
int32_t q_placematchreply_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param callback int32_t func()
///
void q_placematchreply_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param signal const char*
///
int32_t q_placematchreply_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_placematchreply_super_receivers` instead
///
#define q_placematchreply_qbase_receivers q_placematchreply_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param signal const char*
///
int32_t q_placematchreply_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param callback int32_t func(QPlaceMatchReply* self, const char* signal)
///
void q_placematchreply_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param signal QMetaMethod*
///
bool q_placematchreply_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_placematchreply_super_is_signal_connected` instead
///
#define q_placematchreply_qbase_is_signal_connected q_placematchreply_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param signal QMetaMethod*
///
bool q_placematchreply_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceMatchReply*
/// @param callback bool func(QPlaceMatchReply* self, QMetaMethod* signal)
///
void q_placematchreply_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPlaceMatchReply*
/// @param callback void func(QPlaceMatchReply* self, const char* objectName)
///
void q_placematchreply_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchreply.html#dtor.QPlaceMatchReply)
///
/// Delete this object from C++ memory.
///
/// @param self QPlaceMatchReply*
///
void q_placematchreply_delete(void* self);

#endif
