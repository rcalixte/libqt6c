#pragma once
#ifndef LOCATION_LIBQPLACECONTENTREPLY_H
#define LOCATION_LIBQPLACECONTENTREPLY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html)

/// q_placecontentreply_new constructs a new QPlaceContentReply object.
///
QPlaceContentReply* q_placecontentreply_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html)

/// q_placecontentreply_new2 constructs a new QPlaceContentReply object.
///
/// @param parent QObject*
///
QPlaceContentReply* q_placecontentreply_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QPlaceContentReply*
///
const QMetaObject* q_placecontentreply_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QPlaceContentReply*
/// @param callback const QMetaObject* func(const QPlaceContentReply* self)
///
void q_placecontentreply_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QPlaceContentReply*
///
const QMetaObject* q_placecontentreply_super_meta_object(const void* self);

/// @param self QPlaceContentReply*
/// @param param1 const char*
///
void* q_placecontentreply_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QPlaceContentReply*
/// @param callback void* func(QPlaceContentReply* self, const char* param1)
///
void q_placecontentreply_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QPlaceContentReply*
/// @param param1 const char*
///
void* q_placecontentreply_super_metacast(void* self, const char* param1);

/// @param self QPlaceContentReply*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_placecontentreply_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPlaceContentReply*
/// @param callback int32_t func(QPlaceContentReply* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_placecontentreply_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPlaceContentReply*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_placecontentreply_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_placecontentreply_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#type)
///
/// @param self const QPlaceContentReply*
///
/// @return enum QPlaceReply__Type
///
int32_t q_placecontentreply_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#type)
///
/// Allows for overriding the related default method
///
/// @param self const QPlaceContentReply*
/// @param callback int32_t func(const QPlaceContentReply* self)
///
void q_placecontentreply_on_type(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#type)
///
/// Base class method implementation
///
/// @param self const QPlaceContentReply*
///
/// @return enum QPlaceReply__Type
///
int32_t q_placecontentreply_super_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#content)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to QPlaceContent*
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QPlaceContent*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self const QPlaceContentReply*
///
/// @return libqt_map of int to QPlaceContent*
///
libqt_map q_placecontentreply_content(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#totalCount)
///
/// @param self const QPlaceContentReply*
///
int32_t q_placecontentreply_total_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#request)
///
/// @param self const QPlaceContentReply*
///
QPlaceContentRequest* q_placecontentreply_request(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#previousPageRequest)
///
/// @param self const QPlaceContentReply*
///
QPlaceContentRequest* q_placecontentreply_previous_page_request(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#nextPageRequest)
///
/// @param self const QPlaceContentReply*
///
QPlaceContentRequest* q_placecontentreply_next_page_request(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#setContent)
///
/// @param self QPlaceContentReply*
/// @param content libqt_map of int to QPlaceContent*
///
void q_placecontentreply_set_content(void* self, libqt_map content);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#setTotalCount)
///
/// @param self QPlaceContentReply*
/// @param total int
///
void q_placecontentreply_set_total_count(void* self, int total);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#setRequest)
///
/// @param self QPlaceContentReply*
/// @param request QPlaceContentRequest*
///
void q_placecontentreply_set_request(void* self, const void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#setPreviousPageRequest)
///
/// @param self QPlaceContentReply*
/// @param previous QPlaceContentRequest*
///
void q_placecontentreply_set_previous_page_request(void* self, const void* previous);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#setNextPageRequest)
///
/// @param self QPlaceContentReply*
/// @param next QPlaceContentRequest*
///
void q_placecontentreply_set_next_page_request(void* self, const void* next);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_placecontentreply_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_placecontentreply_tr3(const char* s, const char* c, int n);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#isFinished)
///
/// @param self const QPlaceContentReply*
///
bool q_placecontentreply_is_finished(const void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlaceContentReply*
///
const char* q_placecontentreply_error_string(const void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#error)
///
/// @param self const QPlaceContentReply*
///
/// @return enum QPlaceReply__Error
///
int32_t q_placecontentreply_error(const void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#finished)
///
/// @param self QPlaceContentReply*
///
void q_placecontentreply_finished(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#finished)
///
/// @param self QPlaceContentReply*
/// @param callback void func(QPlaceContentReply* self)
///
void q_placecontentreply_on_finished(void* self, void (*callback)(void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#contentUpdated)
///
/// @param self QPlaceContentReply*
///
void q_placecontentreply_content_updated(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#contentUpdated)
///
/// @param self QPlaceContentReply*
/// @param callback void func(QPlaceContentReply* self)
///
void q_placecontentreply_on_content_updated(void* self, void (*callback)(void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#aborted)
///
/// @param self QPlaceContentReply*
///
void q_placecontentreply_aborted(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#aborted)
///
/// @param self QPlaceContentReply*
/// @param callback void func(QPlaceContentReply* self)
///
void q_placecontentreply_on_aborted(void* self, void (*callback)(void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
///
/// @param self QPlaceContentReply*
/// @param error enum QPlaceReply__Error
///
void q_placecontentreply_error_occurred(void* self, int32_t error);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
///
/// @param self QPlaceContentReply*
/// @param callback void func(QPlaceContentReply* self, enum QPlaceReply__Error error)
///
void q_placecontentreply_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
///
/// @param self QPlaceContentReply*
/// @param error enum QPlaceReply__Error
/// @param errorString const char*
///
void q_placecontentreply_error_occurred2(void* self, int32_t error, const char* errorString);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
///
/// @param self QPlaceContentReply*
/// @param callback void func(QPlaceContentReply* self, enum QPlaceReply__Error error, const char* errorString)
///
void q_placecontentreply_on_error_occurred2(void* self, void (*callback)(void*, int32_t, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlaceContentReply*
///
const char* q_placecontentreply_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPlaceContentReply*
/// @param name const char*
///
void q_placecontentreply_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QPlaceContentReply*
///
bool q_placecontentreply_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QPlaceContentReply*
///
bool q_placecontentreply_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QPlaceContentReply*
///
bool q_placecontentreply_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QPlaceContentReply*
///
bool q_placecontentreply_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPlaceContentReply*
/// @param b bool
///
bool q_placecontentreply_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QPlaceContentReply*
///
QThread* q_placecontentreply_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPlaceContentReply*
/// @param thread QThread*
///
bool q_placecontentreply_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceContentReply*
/// @param interval int
///
int32_t q_placecontentreply_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceContentReply*
/// @param time int64_t of nanoseconds
///
int32_t q_placecontentreply_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPlaceContentReply*
/// @param id int
///
void q_placecontentreply_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPlaceContentReply*
/// @param id enum Qt__TimerId
///
void q_placecontentreply_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QPlaceContentReply*
///
/// @return libqt_list of QObject*
///
libqt_list q_placecontentreply_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPlaceContentReply*
/// @param parent QObject*
///
void q_placecontentreply_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPlaceContentReply*
/// @param filterObj QObject*
///
void q_placecontentreply_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPlaceContentReply*
/// @param obj QObject*
///
void q_placecontentreply_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_placecontentreply_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_placecontentreply_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QPlaceContentReply*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_placecontentreply_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_placecontentreply_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_placecontentreply_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPlaceContentReply*
///
bool q_placecontentreply_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPlaceContentReply*
/// @param receiver QObject*
///
bool q_placecontentreply_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_placecontentreply_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QPlaceContentReply*
///
void q_placecontentreply_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QPlaceContentReply*
///
void q_placecontentreply_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPlaceContentReply*
/// @param name const char*
/// @param value QVariant*
///
bool q_placecontentreply_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QPlaceContentReply*
/// @param name const char*
///
QVariant* q_placecontentreply_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QPlaceContentReply*
///
const char** q_placecontentreply_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPlaceContentReply*
///
QBindingStorage* q_placecontentreply_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QPlaceContentReply*
///
const QBindingStorage* q_placecontentreply_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceContentReply*
///
void q_placecontentreply_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceContentReply*
/// @param callback void func(QPlaceContentReply* self)
///
void q_placecontentreply_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QPlaceContentReply*
///
QObject* q_placecontentreply_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QPlaceContentReply*
/// @param classname const char*
///
bool q_placecontentreply_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPlaceContentReply*
///
void q_placecontentreply_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceContentReply*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_placecontentreply_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceContentReply*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_placecontentreply_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_placecontentreply_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_placecontentreply_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QPlaceContentReply*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_placecontentreply_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPlaceContentReply*
/// @param signal const char*
///
bool q_placecontentreply_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPlaceContentReply*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_placecontentreply_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPlaceContentReply*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_placecontentreply_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPlaceContentReply*
/// @param receiver QObject*
/// @param member const char*
///
bool q_placecontentreply_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceContentReply*
/// @param param1 QObject*
///
void q_placecontentreply_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceContentReply*
/// @param callback void func(QPlaceContentReply* self, QObject* param1)
///
void q_placecontentreply_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#abort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceContentReply*
///
void q_placecontentreply_abort(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#abort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceContentReply*
///
void q_placecontentreply_super_abort(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#abort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param callback void func(QPlaceContentReply* self)
///
void q_placecontentreply_on_abort(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param event QEvent*
///
bool q_placecontentreply_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param event QEvent*
///
bool q_placecontentreply_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param callback bool func(QPlaceContentReply* self, QEvent* event)
///
void q_placecontentreply_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_placecontentreply_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_placecontentreply_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param callback bool func(QPlaceContentReply* self, QObject* watched, QEvent* event)
///
void q_placecontentreply_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param event QTimerEvent*
///
void q_placecontentreply_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param event QTimerEvent*
///
void q_placecontentreply_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param callback void func(QPlaceContentReply* self, QTimerEvent* event)
///
void q_placecontentreply_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param event QChildEvent*
///
void q_placecontentreply_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param event QChildEvent*
///
void q_placecontentreply_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param callback void func(QPlaceContentReply* self, QChildEvent* event)
///
void q_placecontentreply_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param event QEvent*
///
void q_placecontentreply_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param event QEvent*
///
void q_placecontentreply_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param callback void func(QPlaceContentReply* self, QEvent* event)
///
void q_placecontentreply_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param signal QMetaMethod*
///
void q_placecontentreply_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param signal QMetaMethod*
///
void q_placecontentreply_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param callback void func(QPlaceContentReply* self, QMetaMethod* signal)
///
void q_placecontentreply_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param signal QMetaMethod*
///
void q_placecontentreply_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param signal QMetaMethod*
///
void q_placecontentreply_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param callback void func(QPlaceContentReply* self, QMetaMethod* signal)
///
void q_placecontentreply_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setFinished)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param finished bool
///
void q_placecontentreply_set_finished(void* self, bool finished);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setFinished)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param finished bool
///
void q_placecontentreply_super_set_finished(void* self, bool finished);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setFinished)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param callback void func(QPlaceContentReply* self, bool finished)
///
void q_placecontentreply_on_set_finished(void* self, void (*callback)(void*, bool));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setError)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param error enum QPlaceReply__Error
/// @param errorString const char*
///
void q_placecontentreply_set_error(void* self, int32_t error, const char* errorString);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setError)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param error enum QPlaceReply__Error
/// @param errorString const char*
///
void q_placecontentreply_super_set_error(void* self, int32_t error, const char* errorString);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setError)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceContentReply*
/// @param callback void func(QPlaceContentReply* self, enum QPlaceReply__Error error, const char* errorString)
///
void q_placecontentreply_on_set_error(void* self, void (*callback)(void*, int32_t, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlaceContentReply*
///
QObject* q_placecontentreply_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlaceContentReply*
///
QObject* q_placecontentreply_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlaceContentReply*
/// @param callback QObject* func(QPlaceContentReply* self)
///
void q_placecontentreply_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlaceContentReply*
///
int32_t q_placecontentreply_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlaceContentReply*
///
int32_t q_placecontentreply_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlaceContentReply*
/// @param callback int32_t func(QPlaceContentReply* self)
///
void q_placecontentreply_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlaceContentReply*
/// @param signal const char*
///
int32_t q_placecontentreply_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlaceContentReply*
/// @param signal const char*
///
int32_t q_placecontentreply_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlaceContentReply*
/// @param callback int32_t func(QPlaceContentReply* self, const char* signal)
///
void q_placecontentreply_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlaceContentReply*
/// @param signal QMetaMethod*
///
bool q_placecontentreply_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlaceContentReply*
/// @param signal QMetaMethod*
///
bool q_placecontentreply_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlaceContentReply*
/// @param callback bool func(QPlaceContentReply* self, QMetaMethod* signal)
///
void q_placecontentreply_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPlaceContentReply*
/// @param callback void func(QPlaceContentReply* self, const char* objectName)
///
void q_placecontentreply_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentreply.html#dtor.QPlaceContentReply)
///
/// Delete this object from C++ memory.
///
/// @param self QPlaceContentReply*
///
void q_placecontentreply_delete(void* self);

#endif
