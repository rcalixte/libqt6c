#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQPLACEDETAILSREPLY_H
#define SRC_LOCATION_QT6C_LIBQPLACEDETAILSREPLY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplacedetailsreply.html)

/// q_placedetailsreply_new constructs a new QPlaceDetailsReply object.
///
QPlaceDetailsReply* q_placedetailsreply_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qplacedetailsreply.html)

/// q_placedetailsreply_new2 constructs a new QPlaceDetailsReply object.
///
/// @param parent QObject*
///
QPlaceDetailsReply* q_placedetailsreply_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPlaceDetailsReply*
///
const QMetaObject* q_placedetailsreply_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceDetailsReply*
/// @param callback const QMetaObject* func()
///
void q_placedetailsreply_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_placedetailsreply_super_meta_object` instead
///
#define q_placedetailsreply_qbase_meta_object q_placedetailsreply_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QPlaceDetailsReply*
///
const QMetaObject* q_placedetailsreply_super_meta_object(void* self);

/// @param self QPlaceDetailsReply*
/// @param param1 const char*
///
void* q_placedetailsreply_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QPlaceDetailsReply*
/// @param callback void* func(QPlaceDetailsReply* self, const char* param1)
///
void q_placedetailsreply_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_placedetailsreply_super_metacast` instead
///
#define q_placedetailsreply_qbase_metacast q_placedetailsreply_super_metacast

/// Base class method implementation
///
/// @param self QPlaceDetailsReply*
/// @param param1 const char*
///
void* q_placedetailsreply_super_metacast(void* self, const char* param1);

/// @param self QPlaceDetailsReply*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_placedetailsreply_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPlaceDetailsReply*
/// @param callback int32_t func(QPlaceDetailsReply* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_placedetailsreply_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_placedetailsreply_super_metacall` instead
///
#define q_placedetailsreply_qbase_metacall q_placedetailsreply_super_metacall

/// Base class method implementation
///
/// @param self QPlaceDetailsReply*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_placedetailsreply_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_placedetailsreply_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacedetailsreply.html#type)
///
/// @param self QPlaceDetailsReply*
///
/// @return enum QPlaceReply__Type
///
int32_t q_placedetailsreply_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacedetailsreply.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceDetailsReply*
/// @param callback int32_t func()
///
void q_placedetailsreply_on_type(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_placedetailsreply_super_type` instead
///
#define q_placedetailsreply_qbase_type q_placedetailsreply_super_type

/// [Upstream resources](https://doc.qt.io/qt-6/qplacedetailsreply.html#type)
///
/// Base class method implementation
///
/// @param self QPlaceDetailsReply*
///
/// @return enum QPlaceReply__Type
///
int32_t q_placedetailsreply_super_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacedetailsreply.html#place)
///
/// @param self QPlaceDetailsReply*
///
QPlace* q_placedetailsreply_place(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacedetailsreply.html#setPlace)
///
/// @param self QPlaceDetailsReply*
/// @param place QPlace*
///
void q_placedetailsreply_set_place(void* self, void* place);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacedetailsreply.html#setPlace)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceDetailsReply*
/// @param callback void func(QPlaceDetailsReply* self, QPlace* place)
///
void q_placedetailsreply_on_set_place(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_placedetailsreply_super_set_place` instead
///
#define q_placedetailsreply_qbase_set_place q_placedetailsreply_super_set_place

/// [Upstream resources](https://doc.qt.io/qt-6/qplacedetailsreply.html#setPlace)
///
/// Base class method implementation
///
/// @param self QPlaceDetailsReply*
/// @param place QPlace*
///
void q_placedetailsreply_super_set_place(void* self, void* place);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_placedetailsreply_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_placedetailsreply_tr3(const char* s, const char* c, int n);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#isFinished)
///
/// @param self QPlaceDetailsReply*
///
bool q_placedetailsreply_is_finished(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceDetailsReply*
///
const char* q_placedetailsreply_error_string(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#error)
///
/// @param self QPlaceDetailsReply*
///
/// @return enum QPlaceReply__Error
///
int32_t q_placedetailsreply_error(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#finished)
///
/// @param self QPlaceDetailsReply*
///
void q_placedetailsreply_finished(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#finished)
///
/// @param self QPlaceDetailsReply*
/// @param callback void func(QPlaceDetailsReply* self)
///
void q_placedetailsreply_on_finished(void* self, void (*callback)(void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#contentUpdated)
///
/// @param self QPlaceDetailsReply*
///
void q_placedetailsreply_content_updated(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#contentUpdated)
///
/// @param self QPlaceDetailsReply*
/// @param callback void func(QPlaceDetailsReply* self)
///
void q_placedetailsreply_on_content_updated(void* self, void (*callback)(void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#aborted)
///
/// @param self QPlaceDetailsReply*
///
void q_placedetailsreply_aborted(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#aborted)
///
/// @param self QPlaceDetailsReply*
/// @param callback void func(QPlaceDetailsReply* self)
///
void q_placedetailsreply_on_aborted(void* self, void (*callback)(void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
///
/// @param self QPlaceDetailsReply*
/// @param error enum QPlaceReply__Error
///
void q_placedetailsreply_error_occurred(void* self, int32_t error);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
///
/// @param self QPlaceDetailsReply*
/// @param callback void func(QPlaceDetailsReply* self, enum QPlaceReply__Error error)
///
void q_placedetailsreply_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
///
/// @param self QPlaceDetailsReply*
/// @param error enum QPlaceReply__Error
/// @param errorString const char*
///
void q_placedetailsreply_error_occurred2(void* self, int32_t error, const char* errorString);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#errorOccurred)
///
/// @param self QPlaceDetailsReply*
/// @param callback void func(QPlaceDetailsReply* self, enum QPlaceReply__Error error, const char* errorString)
///
void q_placedetailsreply_on_error_occurred2(void* self, void (*callback)(void*, int32_t, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceDetailsReply*
///
const char* q_placedetailsreply_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPlaceDetailsReply*
/// @param name const char*
///
void q_placedetailsreply_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPlaceDetailsReply*
///
bool q_placedetailsreply_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPlaceDetailsReply*
///
bool q_placedetailsreply_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPlaceDetailsReply*
///
bool q_placedetailsreply_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPlaceDetailsReply*
///
bool q_placedetailsreply_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPlaceDetailsReply*
/// @param b bool
///
bool q_placedetailsreply_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QPlaceDetailsReply*
///
QThread* q_placedetailsreply_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPlaceDetailsReply*
/// @param thread QThread*
///
bool q_placedetailsreply_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceDetailsReply*
/// @param interval int
///
int32_t q_placedetailsreply_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceDetailsReply*
/// @param time int64_t of nanoseconds
///
int32_t q_placedetailsreply_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPlaceDetailsReply*
/// @param id int
///
void q_placedetailsreply_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPlaceDetailsReply*
/// @param id enum Qt__TimerId
///
void q_placedetailsreply_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QPlaceDetailsReply*
///
/// @return libqt_list of QObject*
///
libqt_list q_placedetailsreply_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPlaceDetailsReply*
/// @param parent QObject*
///
void q_placedetailsreply_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPlaceDetailsReply*
/// @param filterObj QObject*
///
void q_placedetailsreply_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPlaceDetailsReply*
/// @param obj QObject*
///
void q_placedetailsreply_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_placedetailsreply_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_placedetailsreply_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPlaceDetailsReply*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_placedetailsreply_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_placedetailsreply_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_placedetailsreply_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QPlaceDetailsReply*
///
bool q_placedetailsreply_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QPlaceDetailsReply*
/// @param receiver QObject*
///
bool q_placedetailsreply_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_placedetailsreply_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPlaceDetailsReply*
///
void q_placedetailsreply_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPlaceDetailsReply*
///
void q_placedetailsreply_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPlaceDetailsReply*
/// @param name const char*
/// @param value QVariant*
///
bool q_placedetailsreply_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPlaceDetailsReply*
/// @param name const char*
///
QVariant* q_placedetailsreply_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QPlaceDetailsReply*
///
const char** q_placedetailsreply_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPlaceDetailsReply*
///
QBindingStorage* q_placedetailsreply_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPlaceDetailsReply*
///
const QBindingStorage* q_placedetailsreply_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceDetailsReply*
///
void q_placedetailsreply_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceDetailsReply*
/// @param callback void func(QPlaceDetailsReply* self)
///
void q_placedetailsreply_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QPlaceDetailsReply*
///
QObject* q_placedetailsreply_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPlaceDetailsReply*
/// @param classname const char*
///
bool q_placedetailsreply_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPlaceDetailsReply*
///
void q_placedetailsreply_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceDetailsReply*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_placedetailsreply_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceDetailsReply*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_placedetailsreply_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_placedetailsreply_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_placedetailsreply_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPlaceDetailsReply*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_placedetailsreply_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QPlaceDetailsReply*
/// @param signal const char*
///
bool q_placedetailsreply_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QPlaceDetailsReply*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_placedetailsreply_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QPlaceDetailsReply*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_placedetailsreply_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QPlaceDetailsReply*
/// @param receiver QObject*
/// @param member const char*
///
bool q_placedetailsreply_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceDetailsReply*
/// @param param1 QObject*
///
void q_placedetailsreply_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceDetailsReply*
/// @param callback void func(QPlaceDetailsReply* self, QObject* param1)
///
void q_placedetailsreply_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#abort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceDetailsReply*
///
void q_placedetailsreply_abort(void* self);

/// @warning DEPRECATED: Use `q_placedetailsreply_super_abort` instead
///
#define q_placedetailsreply_qbase_abort q_placedetailsreply_super_abort

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#abort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
///
void q_placedetailsreply_super_abort(void* self);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#abort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param callback void func()
///
void q_placedetailsreply_on_abort(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param event QEvent*
///
bool q_placedetailsreply_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_placedetailsreply_super_event` instead
///
#define q_placedetailsreply_qbase_event q_placedetailsreply_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param event QEvent*
///
bool q_placedetailsreply_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param callback bool func(QPlaceDetailsReply* self, QEvent* event)
///
void q_placedetailsreply_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_placedetailsreply_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_placedetailsreply_super_event_filter` instead
///
#define q_placedetailsreply_qbase_event_filter q_placedetailsreply_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_placedetailsreply_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param callback bool func(QPlaceDetailsReply* self, QObject* watched, QEvent* event)
///
void q_placedetailsreply_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param event QTimerEvent*
///
void q_placedetailsreply_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_placedetailsreply_super_timer_event` instead
///
#define q_placedetailsreply_qbase_timer_event q_placedetailsreply_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param event QTimerEvent*
///
void q_placedetailsreply_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param callback void func(QPlaceDetailsReply* self, QTimerEvent* event)
///
void q_placedetailsreply_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param event QChildEvent*
///
void q_placedetailsreply_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_placedetailsreply_super_child_event` instead
///
#define q_placedetailsreply_qbase_child_event q_placedetailsreply_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param event QChildEvent*
///
void q_placedetailsreply_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param callback void func(QPlaceDetailsReply* self, QChildEvent* event)
///
void q_placedetailsreply_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param event QEvent*
///
void q_placedetailsreply_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_placedetailsreply_super_custom_event` instead
///
#define q_placedetailsreply_qbase_custom_event q_placedetailsreply_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param event QEvent*
///
void q_placedetailsreply_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param callback void func(QPlaceDetailsReply* self, QEvent* event)
///
void q_placedetailsreply_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param signal QMetaMethod*
///
void q_placedetailsreply_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_placedetailsreply_super_connect_notify` instead
///
#define q_placedetailsreply_qbase_connect_notify q_placedetailsreply_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param signal QMetaMethod*
///
void q_placedetailsreply_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param callback void func(QPlaceDetailsReply* self, QMetaMethod* signal)
///
void q_placedetailsreply_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param signal QMetaMethod*
///
void q_placedetailsreply_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_placedetailsreply_super_disconnect_notify` instead
///
#define q_placedetailsreply_qbase_disconnect_notify q_placedetailsreply_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param signal QMetaMethod*
///
void q_placedetailsreply_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param callback void func(QPlaceDetailsReply* self, QMetaMethod* signal)
///
void q_placedetailsreply_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setFinished)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param finished bool
///
void q_placedetailsreply_set_finished(void* self, bool finished);

/// @warning DEPRECATED: Use `q_placedetailsreply_super_set_finished` instead
///
#define q_placedetailsreply_qbase_set_finished q_placedetailsreply_super_set_finished

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setFinished)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param finished bool
///
void q_placedetailsreply_super_set_finished(void* self, bool finished);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setFinished)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param callback void func(QPlaceDetailsReply* self, bool finished)
///
void q_placedetailsreply_on_set_finished(void* self, void (*callback)(void*, bool));

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setError)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param error enum QPlaceReply__Error
/// @param errorString const char*
///
void q_placedetailsreply_set_error(void* self, int32_t error, const char* errorString);

/// @warning DEPRECATED: Use `q_placedetailsreply_super_set_error` instead
///
#define q_placedetailsreply_qbase_set_error q_placedetailsreply_super_set_error

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setError)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param error enum QPlaceReply__Error
/// @param errorString const char*
///
void q_placedetailsreply_super_set_error(void* self, int32_t error, const char* errorString);

/// Inherited from QPlaceReply
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacereply.html#setError)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param callback void func(QPlaceDetailsReply* self, enum QPlaceReply__Error error, const char* errorString)
///
void q_placedetailsreply_on_set_error(void* self, void (*callback)(void*, int32_t, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceDetailsReply*
///
QObject* q_placedetailsreply_sender(void* self);

/// @warning DEPRECATED: Use `q_placedetailsreply_super_sender` instead
///
#define q_placedetailsreply_qbase_sender q_placedetailsreply_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
///
QObject* q_placedetailsreply_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param callback QObject* func()
///
void q_placedetailsreply_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceDetailsReply*
///
int32_t q_placedetailsreply_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_placedetailsreply_super_sender_signal_index` instead
///
#define q_placedetailsreply_qbase_sender_signal_index q_placedetailsreply_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
///
int32_t q_placedetailsreply_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param callback int32_t func()
///
void q_placedetailsreply_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param signal const char*
///
int32_t q_placedetailsreply_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_placedetailsreply_super_receivers` instead
///
#define q_placedetailsreply_qbase_receivers q_placedetailsreply_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param signal const char*
///
int32_t q_placedetailsreply_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param callback int32_t func(QPlaceDetailsReply* self, const char* signal)
///
void q_placedetailsreply_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param signal QMetaMethod*
///
bool q_placedetailsreply_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_placedetailsreply_super_is_signal_connected` instead
///
#define q_placedetailsreply_qbase_is_signal_connected q_placedetailsreply_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param signal QMetaMethod*
///
bool q_placedetailsreply_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceDetailsReply*
/// @param callback bool func(QPlaceDetailsReply* self, QMetaMethod* signal)
///
void q_placedetailsreply_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPlaceDetailsReply*
/// @param callback void func(QPlaceDetailsReply* self, const char* objectName)
///
void q_placedetailsreply_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacedetailsreply.html#dtor.QPlaceDetailsReply)
///
/// Delete this object from C++ memory.
///
/// @param self QPlaceDetailsReply*
///
void q_placedetailsreply_delete(void* self);

#endif
