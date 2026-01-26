#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQPLACESEARCHSUGGESTIONREPLY_H
#define SRC_LOCATION_QT6C_LIBQPLACESEARCHSUGGESTIONREPLY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchsuggestionreply.html)

/// q_placesearchsuggestionreply_new constructs a new QPlaceSearchSuggestionReply object.
///
QPlaceSearchSuggestionReply* q_placesearchsuggestionreply_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchsuggestionreply.html)

/// q_placesearchsuggestionreply_new2 constructs a new QPlaceSearchSuggestionReply object.
///
/// @param parent QObject*
///
QPlaceSearchSuggestionReply* q_placesearchsuggestionreply_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPlaceSearchSuggestionReply*
///
const QMetaObject* q_placesearchsuggestionreply_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback const QMetaObject* func()
///
void q_placesearchsuggestionreply_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QPlaceSearchSuggestionReply*
///
const QMetaObject* q_placesearchsuggestionreply_qbase_meta_object(void* self);

/// @param self QPlaceSearchSuggestionReply*
/// @param param1 const char*
///
void* q_placesearchsuggestionreply_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback void* func(QPlaceSearchSuggestionReply* self, const char* param1)
///
void q_placesearchsuggestionreply_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QPlaceSearchSuggestionReply*
/// @param param1 const char*
///
void* q_placesearchsuggestionreply_qbase_metacast(void* self, const char* param1);

/// @param self QPlaceSearchSuggestionReply*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_placesearchsuggestionreply_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback int32_t func(QPlaceSearchSuggestionReply* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_placesearchsuggestionreply_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPlaceSearchSuggestionReply*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_placesearchsuggestionreply_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_placesearchsuggestionreply_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchsuggestionreply.html#suggestions)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QPlaceSearchSuggestionReply*
///
const char** q_placesearchsuggestionreply_suggestions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchsuggestionreply.html#type)
///
/// @param self QPlaceSearchSuggestionReply*
///
/// @return enum QPlaceReply__Type
///
int32_t q_placesearchsuggestionreply_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchsuggestionreply.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback int32_t func()
///
void q_placesearchsuggestionreply_on_type(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchsuggestionreply.html#type)
///
/// Base class method implementation
///
/// @param self QPlaceSearchSuggestionReply*
///
/// @return enum QPlaceReply__Type
///
int32_t q_placesearchsuggestionreply_qbase_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchsuggestionreply.html#setSuggestions)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param suggestions const char**
///
void q_placesearchsuggestionreply_set_suggestions(void* self, const char* suggestions[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchsuggestionreply.html#setSuggestions)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback void func(QPlaceSearchSuggestionReply* self, const char** suggestions)
///
void q_placesearchsuggestionreply_on_set_suggestions(void* self, void (*callback)(void*, const char**));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchsuggestionreply.html#setSuggestions)
///
/// Base class method implementation
///
/// @param self QPlaceSearchSuggestionReply*
/// @param suggestions const char**
///
void q_placesearchsuggestionreply_qbase_set_suggestions(void* self, const char* suggestions[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_placesearchsuggestionreply_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_placesearchsuggestionreply_tr3(const char* s, const char* c, int n);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#isFinished)
///
/// @param self QPlaceSearchSuggestionReply*
///
bool q_placesearchsuggestionreply_is_finished(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceSearchSuggestionReply*
///
const char* q_placesearchsuggestionreply_error_string(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#error)
///
/// @param self QPlaceSearchSuggestionReply*
///
/// @return enum QPlaceReply__Error
///
int32_t q_placesearchsuggestionreply_error(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#finished)
///
/// @param self QPlaceSearchSuggestionReply*
///
void q_placesearchsuggestionreply_finished(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#finished)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback void func(QPlaceSearchSuggestionReply* self)
///
void q_placesearchsuggestionreply_on_finished(void* self, void (*callback)(void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#contentUpdated)
///
/// @param self QPlaceSearchSuggestionReply*
///
void q_placesearchsuggestionreply_content_updated(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#contentUpdated)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback void func(QPlaceSearchSuggestionReply* self)
///
void q_placesearchsuggestionreply_on_content_updated(void* self, void (*callback)(void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#aborted)
///
/// @param self QPlaceSearchSuggestionReply*
///
void q_placesearchsuggestionreply_aborted(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#aborted)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback void func(QPlaceSearchSuggestionReply* self)
///
void q_placesearchsuggestionreply_on_aborted(void* self, void (*callback)(void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param error enum QPlaceReply__Error
///
void q_placesearchsuggestionreply_error_occurred(void* self, int32_t error);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback void func(QPlaceSearchSuggestionReply* self, enum QPlaceReply__Error error)
///
void q_placesearchsuggestionreply_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param error enum QPlaceReply__Error
/// @param errorString const char*
///
void q_placesearchsuggestionreply_error_occurred2(void* self, int32_t error, const char* errorString);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback void func(QPlaceSearchSuggestionReply* self, enum QPlaceReply__Error error, const char* errorString)
///
void q_placesearchsuggestionreply_on_error_occurred2(void* self, void (*callback)(void*, int32_t, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceSearchSuggestionReply*
///
const char* q_placesearchsuggestionreply_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param name char*
///
void q_placesearchsuggestionreply_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPlaceSearchSuggestionReply*
///
bool q_placesearchsuggestionreply_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPlaceSearchSuggestionReply*
///
bool q_placesearchsuggestionreply_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPlaceSearchSuggestionReply*
///
bool q_placesearchsuggestionreply_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPlaceSearchSuggestionReply*
///
bool q_placesearchsuggestionreply_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param b bool
///
bool q_placesearchsuggestionreply_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QPlaceSearchSuggestionReply*
///
QThread* q_placesearchsuggestionreply_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param thread QThread*
///
bool q_placesearchsuggestionreply_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param interval int
///
int32_t q_placesearchsuggestionreply_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param time int64_t of nanoseconds
///
int32_t q_placesearchsuggestionreply_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param id int
///
void q_placesearchsuggestionreply_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param id enum Qt__TimerId
///
void q_placesearchsuggestionreply_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QPlaceSearchSuggestionReply*
///
/// @return libqt_list of QObject*
///
libqt_list q_placesearchsuggestionreply_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param parent QObject*
///
void q_placesearchsuggestionreply_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param filterObj QObject*
///
void q_placesearchsuggestionreply_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param obj QObject*
///
void q_placesearchsuggestionreply_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_placesearchsuggestionreply_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_placesearchsuggestionreply_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_placesearchsuggestionreply_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_placesearchsuggestionreply_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPlaceSearchSuggestionReply*
///
void q_placesearchsuggestionreply_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPlaceSearchSuggestionReply*
///
void q_placesearchsuggestionreply_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param name const char*
/// @param value QVariant*
///
bool q_placesearchsuggestionreply_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param name const char*
///
QVariant* q_placesearchsuggestionreply_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QPlaceSearchSuggestionReply*
///
const char** q_placesearchsuggestionreply_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPlaceSearchSuggestionReply*
///
QBindingStorage* q_placesearchsuggestionreply_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPlaceSearchSuggestionReply*
///
const QBindingStorage* q_placesearchsuggestionreply_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceSearchSuggestionReply*
///
void q_placesearchsuggestionreply_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback void func(QPlaceSearchSuggestionReply* self)
///
void q_placesearchsuggestionreply_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QPlaceSearchSuggestionReply*
///
QObject* q_placesearchsuggestionreply_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param classname const char*
///
bool q_placesearchsuggestionreply_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPlaceSearchSuggestionReply*
///
void q_placesearchsuggestionreply_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_placesearchsuggestionreply_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_placesearchsuggestionreply_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_placesearchsuggestionreply_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_placesearchsuggestionreply_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_placesearchsuggestionreply_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param param1 QObject*
///
void q_placesearchsuggestionreply_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback void func(QPlaceSearchSuggestionReply* self, QObject* param1)
///
void q_placesearchsuggestionreply_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#abort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
///
void q_placesearchsuggestionreply_abort(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#abort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
///
void q_placesearchsuggestionreply_qbase_abort(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#abort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback void func()
///
void q_placesearchsuggestionreply_on_abort(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param event QEvent*
///
bool q_placesearchsuggestionreply_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param event QEvent*
///
bool q_placesearchsuggestionreply_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback bool func(QPlaceSearchSuggestionReply* self, QEvent* event)
///
void q_placesearchsuggestionreply_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_placesearchsuggestionreply_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_placesearchsuggestionreply_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback bool func(QPlaceSearchSuggestionReply* self, QObject* watched, QEvent* event)
///
void q_placesearchsuggestionreply_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param event QTimerEvent*
///
void q_placesearchsuggestionreply_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param event QTimerEvent*
///
void q_placesearchsuggestionreply_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback void func(QPlaceSearchSuggestionReply* self, QTimerEvent* event)
///
void q_placesearchsuggestionreply_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param event QChildEvent*
///
void q_placesearchsuggestionreply_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param event QChildEvent*
///
void q_placesearchsuggestionreply_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback void func(QPlaceSearchSuggestionReply* self, QChildEvent* event)
///
void q_placesearchsuggestionreply_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param event QEvent*
///
void q_placesearchsuggestionreply_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param event QEvent*
///
void q_placesearchsuggestionreply_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback void func(QPlaceSearchSuggestionReply* self, QEvent* event)
///
void q_placesearchsuggestionreply_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param signal QMetaMethod*
///
void q_placesearchsuggestionreply_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param signal QMetaMethod*
///
void q_placesearchsuggestionreply_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback void func(QPlaceSearchSuggestionReply* self, QMetaMethod* signal)
///
void q_placesearchsuggestionreply_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param signal QMetaMethod*
///
void q_placesearchsuggestionreply_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param signal QMetaMethod*
///
void q_placesearchsuggestionreply_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback void func(QPlaceSearchSuggestionReply* self, QMetaMethod* signal)
///
void q_placesearchsuggestionreply_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setFinished)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param finished bool
///
void q_placesearchsuggestionreply_set_finished(void* self, bool finished);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setFinished)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param finished bool
///
void q_placesearchsuggestionreply_qbase_set_finished(void* self, bool finished);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setFinished)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback void func(QPlaceSearchSuggestionReply* self, bool finished)
///
void q_placesearchsuggestionreply_on_set_finished(void* self, void (*callback)(void*, bool));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setError)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param error enum QPlaceReply__Error
/// @param errorString const char*
///
void q_placesearchsuggestionreply_set_error(void* self, int32_t error, const char* errorString);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setError)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param error enum QPlaceReply__Error
/// @param errorString const char*
///
void q_placesearchsuggestionreply_qbase_set_error(void* self, int32_t error, const char* errorString);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setError)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback void func(QPlaceSearchSuggestionReply* self, enum QPlaceReply__Error error, const char* errorString)
///
void q_placesearchsuggestionreply_on_set_error(void* self, void (*callback)(void*, int32_t, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
///
QObject* q_placesearchsuggestionreply_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
///
QObject* q_placesearchsuggestionreply_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback QObject* func()
///
void q_placesearchsuggestionreply_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
///
int32_t q_placesearchsuggestionreply_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
///
int32_t q_placesearchsuggestionreply_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback int32_t func()
///
void q_placesearchsuggestionreply_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param signal const char*
///
int32_t q_placesearchsuggestionreply_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param signal const char*
///
int32_t q_placesearchsuggestionreply_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback int32_t func(QPlaceSearchSuggestionReply* self, const char* signal)
///
void q_placesearchsuggestionreply_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param signal QMetaMethod*
///
bool q_placesearchsuggestionreply_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param signal QMetaMethod*
///
bool q_placesearchsuggestionreply_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback bool func(QPlaceSearchSuggestionReply* self, QMetaMethod* signal)
///
void q_placesearchsuggestionreply_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPlaceSearchSuggestionReply*
/// @param callback void func(QPlaceSearchSuggestionReply* self, const char* objectName)
///
void q_placesearchsuggestionreply_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchsuggestionreply.html#dtor.QPlaceSearchSuggestionReply)
///
/// Delete this object from C++ memory.
///
/// @param self QPlaceSearchSuggestionReply*
///
void q_placesearchsuggestionreply_delete(void* self);

#endif
