#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQPLACESEARCHREPLY_H
#define SRC_LOCATION_QT6C_LIBQPLACESEARCHREPLY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchreply.html)

/// q_placesearchreply_new constructs a new QPlaceSearchReply object.
///
QPlaceSearchReply* q_placesearchreply_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchreply.html)

/// q_placesearchreply_new2 constructs a new QPlaceSearchReply object.
///
/// @param parent QObject*
///
QPlaceSearchReply* q_placesearchreply_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPlaceSearchReply*
///
const QMetaObject* q_placesearchreply_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceSearchReply*
/// @param callback const QMetaObject* func()
///
void q_placesearchreply_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QPlaceSearchReply*
///
const QMetaObject* q_placesearchreply_qbase_meta_object(void* self);

/// @param self QPlaceSearchReply*
/// @param param1 const char*
///
void* q_placesearchreply_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QPlaceSearchReply*
/// @param callback void* func(QPlaceSearchReply* self, const char* param1)
///
void q_placesearchreply_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QPlaceSearchReply*
/// @param param1 const char*
///
void* q_placesearchreply_qbase_metacast(void* self, const char* param1);

/// @param self QPlaceSearchReply*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_placesearchreply_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPlaceSearchReply*
/// @param callback int32_t func(QPlaceSearchReply* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_placesearchreply_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPlaceSearchReply*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_placesearchreply_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_placesearchreply_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchreply.html#type)
///
/// @param self QPlaceSearchReply*
///
/// @return enum QPlaceReply__Type
///
int32_t q_placesearchreply_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchreply.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceSearchReply*
/// @param callback int32_t func()
///
void q_placesearchreply_on_type(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchreply.html#type)
///
/// Base class method implementation
///
/// @param self QPlaceSearchReply*
///
/// @return enum QPlaceReply__Type
///
int32_t q_placesearchreply_qbase_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchreply.html#results)
///
/// @param self QPlaceSearchReply*
///
/// @return libqt_list of QPlaceSearchResult*
///
libqt_list q_placesearchreply_results(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchreply.html#request)
///
/// @param self QPlaceSearchReply*
///
QPlaceSearchRequest* q_placesearchreply_request(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchreply.html#previousPageRequest)
///
/// @param self QPlaceSearchReply*
///
QPlaceSearchRequest* q_placesearchreply_previous_page_request(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchreply.html#nextPageRequest)
///
/// @param self QPlaceSearchReply*
///
QPlaceSearchRequest* q_placesearchreply_next_page_request(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchreply.html#setResults)
///
/// @param self QPlaceSearchReply*
/// @param results libqt_list of QPlaceSearchResult*
///
void q_placesearchreply_set_results(void* self, libqt_list /* of QPlaceSearchResult* */ results);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchreply.html#setResults)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceSearchReply*
/// @param callback void func(QPlaceSearchReply* self, QPlaceSearchResult** results)
///
void q_placesearchreply_on_set_results(void* self, void (*callback)(void*, QPlaceSearchResult**));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchreply.html#setResults)
///
/// Base class method implementation
///
/// @param self QPlaceSearchReply*
/// @param results libqt_list of QPlaceSearchResult*
///
void q_placesearchreply_qbase_set_results(void* self, libqt_list /* of QPlaceSearchResult* */ results);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchreply.html#setRequest)
///
/// @param self QPlaceSearchReply*
/// @param request QPlaceSearchRequest*
///
void q_placesearchreply_set_request(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchreply.html#setRequest)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceSearchReply*
/// @param callback void func(QPlaceSearchReply* self, QPlaceSearchRequest* request)
///
void q_placesearchreply_on_set_request(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchreply.html#setRequest)
///
/// Base class method implementation
///
/// @param self QPlaceSearchReply*
/// @param request QPlaceSearchRequest*
///
void q_placesearchreply_qbase_set_request(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchreply.html#setPreviousPageRequest)
///
/// @param self QPlaceSearchReply*
/// @param previous QPlaceSearchRequest*
///
void q_placesearchreply_set_previous_page_request(void* self, void* previous);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchreply.html#setPreviousPageRequest)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceSearchReply*
/// @param callback void func(QPlaceSearchReply* self, QPlaceSearchRequest* previous)
///
void q_placesearchreply_on_set_previous_page_request(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchreply.html#setPreviousPageRequest)
///
/// Base class method implementation
///
/// @param self QPlaceSearchReply*
/// @param previous QPlaceSearchRequest*
///
void q_placesearchreply_qbase_set_previous_page_request(void* self, void* previous);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchreply.html#setNextPageRequest)
///
/// @param self QPlaceSearchReply*
/// @param next QPlaceSearchRequest*
///
void q_placesearchreply_set_next_page_request(void* self, void* next);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchreply.html#setNextPageRequest)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceSearchReply*
/// @param callback void func(QPlaceSearchReply* self, QPlaceSearchRequest* next)
///
void q_placesearchreply_on_set_next_page_request(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchreply.html#setNextPageRequest)
///
/// Base class method implementation
///
/// @param self QPlaceSearchReply*
/// @param next QPlaceSearchRequest*
///
void q_placesearchreply_qbase_set_next_page_request(void* self, void* next);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_placesearchreply_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_placesearchreply_tr3(const char* s, const char* c, int n);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#isFinished)
///
/// @param self QPlaceSearchReply*
///
bool q_placesearchreply_is_finished(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceSearchReply*
///
const char* q_placesearchreply_error_string(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#error)
///
/// @param self QPlaceSearchReply*
///
/// @return enum QPlaceReply__Error
///
int32_t q_placesearchreply_error(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#finished)
///
/// @param self QPlaceSearchReply*
///
void q_placesearchreply_finished(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#finished)
///
/// @param self QPlaceSearchReply*
/// @param callback void func(QPlaceSearchReply* self)
///
void q_placesearchreply_on_finished(void* self, void (*callback)(void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#contentUpdated)
///
/// @param self QPlaceSearchReply*
///
void q_placesearchreply_content_updated(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#contentUpdated)
///
/// @param self QPlaceSearchReply*
/// @param callback void func(QPlaceSearchReply* self)
///
void q_placesearchreply_on_content_updated(void* self, void (*callback)(void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#aborted)
///
/// @param self QPlaceSearchReply*
///
void q_placesearchreply_aborted(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#aborted)
///
/// @param self QPlaceSearchReply*
/// @param callback void func(QPlaceSearchReply* self)
///
void q_placesearchreply_on_aborted(void* self, void (*callback)(void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
///
/// @param self QPlaceSearchReply*
/// @param error enum QPlaceReply__Error
///
void q_placesearchreply_error_occurred(void* self, int32_t error);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
///
/// @param self QPlaceSearchReply*
/// @param callback void func(QPlaceSearchReply* self, enum QPlaceReply__Error error)
///
void q_placesearchreply_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
///
/// @param self QPlaceSearchReply*
/// @param error enum QPlaceReply__Error
/// @param errorString const char*
///
void q_placesearchreply_error_occurred2(void* self, int32_t error, const char* errorString);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
///
/// @param self QPlaceSearchReply*
/// @param callback void func(QPlaceSearchReply* self, enum QPlaceReply__Error error, const char* errorString)
///
void q_placesearchreply_on_error_occurred2(void* self, void (*callback)(void*, int32_t, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceSearchReply*
///
const char* q_placesearchreply_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPlaceSearchReply*
/// @param name char*
///
void q_placesearchreply_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPlaceSearchReply*
///
bool q_placesearchreply_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPlaceSearchReply*
///
bool q_placesearchreply_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPlaceSearchReply*
///
bool q_placesearchreply_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPlaceSearchReply*
///
bool q_placesearchreply_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPlaceSearchReply*
/// @param b bool
///
bool q_placesearchreply_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QPlaceSearchReply*
///
QThread* q_placesearchreply_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPlaceSearchReply*
/// @param thread QThread*
///
bool q_placesearchreply_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceSearchReply*
/// @param interval int
///
int32_t q_placesearchreply_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceSearchReply*
/// @param time int64_t of nanoseconds
///
int32_t q_placesearchreply_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPlaceSearchReply*
/// @param id int
///
void q_placesearchreply_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPlaceSearchReply*
/// @param id enum Qt__TimerId
///
void q_placesearchreply_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QPlaceSearchReply*
///
/// @return libqt_list of QObject*
///
libqt_list q_placesearchreply_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPlaceSearchReply*
/// @param parent QObject*
///
void q_placesearchreply_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPlaceSearchReply*
/// @param filterObj QObject*
///
void q_placesearchreply_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPlaceSearchReply*
/// @param obj QObject*
///
void q_placesearchreply_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_placesearchreply_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_placesearchreply_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPlaceSearchReply*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_placesearchreply_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_placesearchreply_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_placesearchreply_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QPlaceSearchReply*
///
bool q_placesearchreply_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QPlaceSearchReply*
/// @param receiver QObject*
///
bool q_placesearchreply_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_placesearchreply_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPlaceSearchReply*
///
void q_placesearchreply_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPlaceSearchReply*
///
void q_placesearchreply_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPlaceSearchReply*
/// @param name const char*
/// @param value QVariant*
///
bool q_placesearchreply_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPlaceSearchReply*
/// @param name const char*
///
QVariant* q_placesearchreply_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QPlaceSearchReply*
///
const char** q_placesearchreply_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPlaceSearchReply*
///
QBindingStorage* q_placesearchreply_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPlaceSearchReply*
///
const QBindingStorage* q_placesearchreply_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceSearchReply*
///
void q_placesearchreply_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceSearchReply*
/// @param callback void func(QPlaceSearchReply* self)
///
void q_placesearchreply_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QPlaceSearchReply*
///
QObject* q_placesearchreply_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPlaceSearchReply*
/// @param classname const char*
///
bool q_placesearchreply_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPlaceSearchReply*
///
void q_placesearchreply_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceSearchReply*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_placesearchreply_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceSearchReply*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_placesearchreply_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_placesearchreply_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_placesearchreply_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPlaceSearchReply*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_placesearchreply_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QPlaceSearchReply*
/// @param signal const char*
///
bool q_placesearchreply_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QPlaceSearchReply*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_placesearchreply_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QPlaceSearchReply*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_placesearchreply_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QPlaceSearchReply*
/// @param receiver QObject*
/// @param member const char*
///
bool q_placesearchreply_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceSearchReply*
/// @param param1 QObject*
///
void q_placesearchreply_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceSearchReply*
/// @param callback void func(QPlaceSearchReply* self, QObject* param1)
///
void q_placesearchreply_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#abort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchReply*
///
void q_placesearchreply_abort(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#abort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchReply*
///
void q_placesearchreply_qbase_abort(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#abort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param callback void func()
///
void q_placesearchreply_on_abort(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param event QEvent*
///
bool q_placesearchreply_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param event QEvent*
///
bool q_placesearchreply_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param callback bool func(QPlaceSearchReply* self, QEvent* event)
///
void q_placesearchreply_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_placesearchreply_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_placesearchreply_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param callback bool func(QPlaceSearchReply* self, QObject* watched, QEvent* event)
///
void q_placesearchreply_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param event QTimerEvent*
///
void q_placesearchreply_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param event QTimerEvent*
///
void q_placesearchreply_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param callback void func(QPlaceSearchReply* self, QTimerEvent* event)
///
void q_placesearchreply_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param event QChildEvent*
///
void q_placesearchreply_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param event QChildEvent*
///
void q_placesearchreply_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param callback void func(QPlaceSearchReply* self, QChildEvent* event)
///
void q_placesearchreply_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param event QEvent*
///
void q_placesearchreply_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param event QEvent*
///
void q_placesearchreply_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param callback void func(QPlaceSearchReply* self, QEvent* event)
///
void q_placesearchreply_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param signal QMetaMethod*
///
void q_placesearchreply_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param signal QMetaMethod*
///
void q_placesearchreply_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param callback void func(QPlaceSearchReply* self, QMetaMethod* signal)
///
void q_placesearchreply_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param signal QMetaMethod*
///
void q_placesearchreply_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param signal QMetaMethod*
///
void q_placesearchreply_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param callback void func(QPlaceSearchReply* self, QMetaMethod* signal)
///
void q_placesearchreply_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setFinished)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param finished bool
///
void q_placesearchreply_set_finished(void* self, bool finished);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setFinished)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param finished bool
///
void q_placesearchreply_qbase_set_finished(void* self, bool finished);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setFinished)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param callback void func(QPlaceSearchReply* self, bool finished)
///
void q_placesearchreply_on_set_finished(void* self, void (*callback)(void*, bool));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setError)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param error enum QPlaceReply__Error
/// @param errorString const char*
///
void q_placesearchreply_set_error(void* self, int32_t error, const char* errorString);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setError)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param error enum QPlaceReply__Error
/// @param errorString const char*
///
void q_placesearchreply_qbase_set_error(void* self, int32_t error, const char* errorString);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setError)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param callback void func(QPlaceSearchReply* self, enum QPlaceReply__Error error, const char* errorString)
///
void q_placesearchreply_on_set_error(void* self, void (*callback)(void*, int32_t, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchReply*
///
QObject* q_placesearchreply_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchReply*
///
QObject* q_placesearchreply_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param callback QObject* func()
///
void q_placesearchreply_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchReply*
///
int32_t q_placesearchreply_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchReply*
///
int32_t q_placesearchreply_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param callback int32_t func()
///
void q_placesearchreply_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param signal const char*
///
int32_t q_placesearchreply_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param signal const char*
///
int32_t q_placesearchreply_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param callback int32_t func(QPlaceSearchReply* self, const char* signal)
///
void q_placesearchreply_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param signal QMetaMethod*
///
bool q_placesearchreply_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param signal QMetaMethod*
///
bool q_placesearchreply_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchReply*
/// @param callback bool func(QPlaceSearchReply* self, QMetaMethod* signal)
///
void q_placesearchreply_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPlaceSearchReply*
/// @param callback void func(QPlaceSearchReply* self, const char* objectName)
///
void q_placesearchreply_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchreply.html#dtor.QPlaceSearchReply)
///
/// Delete this object from C++ memory.
///
/// @param self QPlaceSearchReply*
///
void q_placesearchreply_delete(void* self);

#endif
