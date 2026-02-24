#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQGEOCODEREPLY_H
#define SRC_LOCATION_QT6C_LIBQGEOCODEREPLY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html)

/// q_geocodereply_new constructs a new QGeoCodeReply object.
///
/// @param error enum QGeoCodeReply__Error
/// @param errorString const char*
///
QGeoCodeReply* q_geocodereply_new(int32_t error, const char* errorString);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html)

/// q_geocodereply_new2 constructs a new QGeoCodeReply object.
///
/// @param error enum QGeoCodeReply__Error
/// @param errorString const char*
/// @param parent QObject*
///
QGeoCodeReply* q_geocodereply_new2(int32_t error, const char* errorString, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGeoCodeReply*
///
const QMetaObject* q_geocodereply_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QGeoCodeReply*
/// @param callback const QMetaObject* func()
///
void q_geocodereply_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_geocodereply_super_meta_object` instead
///
#define q_geocodereply_qbase_meta_object q_geocodereply_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QGeoCodeReply*
///
const QMetaObject* q_geocodereply_super_meta_object(void* self);

/// @param self QGeoCodeReply*
/// @param param1 const char*
///
void* q_geocodereply_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QGeoCodeReply*
/// @param callback void* func(QGeoCodeReply* self, const char* param1)
///
void q_geocodereply_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_geocodereply_super_metacast` instead
///
#define q_geocodereply_qbase_metacast q_geocodereply_super_metacast

/// Base class method implementation
///
/// @param self QGeoCodeReply*
/// @param param1 const char*
///
void* q_geocodereply_super_metacast(void* self, const char* param1);

/// @param self QGeoCodeReply*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_geocodereply_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGeoCodeReply*
/// @param callback int32_t func(QGeoCodeReply* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_geocodereply_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_geocodereply_super_metacall` instead
///
#define q_geocodereply_qbase_metacall q_geocodereply_super_metacall

/// Base class method implementation
///
/// @param self QGeoCodeReply*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_geocodereply_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_geocodereply_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#isFinished)
///
/// @param self QGeoCodeReply*
///
bool q_geocodereply_is_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#error)
///
/// @param self QGeoCodeReply*
///
/// @return enum QGeoCodeReply__Error
///
int32_t q_geocodereply_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoCodeReply*
///
const char* q_geocodereply_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#viewport)
///
/// @param self QGeoCodeReply*
///
QGeoShape* q_geocodereply_viewport(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#locations)
///
/// @param self QGeoCodeReply*
///
/// @return libqt_list of QGeoLocation*
///
libqt_list q_geocodereply_locations(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#limit)
///
/// @param self QGeoCodeReply*
///
int64_t q_geocodereply_limit(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#offset)
///
/// @param self QGeoCodeReply*
///
int64_t q_geocodereply_offset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#abort)
///
/// @param self QGeoCodeReply*
///
void q_geocodereply_abort(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#abort)
///
/// Allows for overriding the related default method
///
/// @param self QGeoCodeReply*
/// @param callback void func()
///
void q_geocodereply_on_abort(void* self, void (*callback)());

/// @warning DEPRECATED: Use `q_geocodereply_super_abort` instead
///
#define q_geocodereply_qbase_abort q_geocodereply_super_abort

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#abort)
///
/// Base class method implementation
///
/// @param self QGeoCodeReply*
///
void q_geocodereply_super_abort(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#finished)
///
/// @param self QGeoCodeReply*
///
void q_geocodereply_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#finished)
///
/// @param self QGeoCodeReply*
/// @param callback void func(QGeoCodeReply* self)
///
void q_geocodereply_on_finished(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#aborted)
///
/// @param self QGeoCodeReply*
///
void q_geocodereply_aborted(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#aborted)
///
/// @param self QGeoCodeReply*
/// @param callback void func(QGeoCodeReply* self)
///
void q_geocodereply_on_aborted(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#errorOccurred)
///
/// @param self QGeoCodeReply*
/// @param error enum QGeoCodeReply__Error
///
void q_geocodereply_error_occurred(void* self, int32_t error);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#errorOccurred)
///
/// @param self QGeoCodeReply*
/// @param callback void func(QGeoCodeReply* self, enum QGeoCodeReply__Error error)
///
void q_geocodereply_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setError)
///
/// @param self QGeoCodeReply*
/// @param error enum QGeoCodeReply__Error
/// @param errorString const char*
///
void q_geocodereply_set_error(void* self, int32_t error, const char* errorString);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setError)
///
/// Allows for overriding the related default method
///
/// @param self QGeoCodeReply*
/// @param callback void func(QGeoCodeReply* self, enum QGeoCodeReply__Error error, const char* errorString)
///
void q_geocodereply_on_set_error(void* self, void (*callback)(void*, int32_t, const char*));

/// @warning DEPRECATED: Use `q_geocodereply_super_set_error` instead
///
#define q_geocodereply_qbase_set_error q_geocodereply_super_set_error

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setError)
///
/// Base class method implementation
///
/// @param self QGeoCodeReply*
/// @param error enum QGeoCodeReply__Error
/// @param errorString const char*
///
void q_geocodereply_super_set_error(void* self, int32_t error, const char* errorString);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setFinished)
///
/// @param self QGeoCodeReply*
/// @param finished bool
///
void q_geocodereply_set_finished(void* self, bool finished);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setFinished)
///
/// Allows for overriding the related default method
///
/// @param self QGeoCodeReply*
/// @param callback void func(QGeoCodeReply* self, bool finished)
///
void q_geocodereply_on_set_finished(void* self, void (*callback)(void*, bool));

/// @warning DEPRECATED: Use `q_geocodereply_super_set_finished` instead
///
#define q_geocodereply_qbase_set_finished q_geocodereply_super_set_finished

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setFinished)
///
/// Base class method implementation
///
/// @param self QGeoCodeReply*
/// @param finished bool
///
void q_geocodereply_super_set_finished(void* self, bool finished);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setViewport)
///
/// @param self QGeoCodeReply*
/// @param viewport QGeoShape*
///
void q_geocodereply_set_viewport(void* self, void* viewport);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setViewport)
///
/// Allows for overriding the related default method
///
/// @param self QGeoCodeReply*
/// @param callback void func(QGeoCodeReply* self, QGeoShape* viewport)
///
void q_geocodereply_on_set_viewport(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_geocodereply_super_set_viewport` instead
///
#define q_geocodereply_qbase_set_viewport q_geocodereply_super_set_viewport

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setViewport)
///
/// Base class method implementation
///
/// @param self QGeoCodeReply*
/// @param viewport QGeoShape*
///
void q_geocodereply_super_set_viewport(void* self, void* viewport);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#addLocation)
///
/// @param self QGeoCodeReply*
/// @param location QGeoLocation*
///
void q_geocodereply_add_location(void* self, void* location);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#addLocation)
///
/// Allows for overriding the related default method
///
/// @param self QGeoCodeReply*
/// @param callback void func(QGeoCodeReply* self, QGeoLocation* location)
///
void q_geocodereply_on_add_location(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_geocodereply_super_add_location` instead
///
#define q_geocodereply_qbase_add_location q_geocodereply_super_add_location

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#addLocation)
///
/// Base class method implementation
///
/// @param self QGeoCodeReply*
/// @param location QGeoLocation*
///
void q_geocodereply_super_add_location(void* self, void* location);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setLocations)
///
/// @param self QGeoCodeReply*
/// @param locations libqt_list of QGeoLocation*
///
void q_geocodereply_set_locations(void* self, libqt_list locations);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setLocations)
///
/// Allows for overriding the related default method
///
/// @param self QGeoCodeReply*
/// @param callback void func(QGeoCodeReply* self, libqt_list of QGeoLocation* locations)
///
void q_geocodereply_on_set_locations(void* self, void (*callback)(void*, libqt_list));

/// @warning DEPRECATED: Use `q_geocodereply_super_set_locations` instead
///
#define q_geocodereply_qbase_set_locations q_geocodereply_super_set_locations

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setLocations)
///
/// Base class method implementation
///
/// @param self QGeoCodeReply*
/// @param locations libqt_list of QGeoLocation*
///
void q_geocodereply_super_set_locations(void* self, libqt_list locations);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setLimit)
///
/// @param self QGeoCodeReply*
/// @param limit int64_t
///
void q_geocodereply_set_limit(void* self, int64_t limit);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setLimit)
///
/// Allows for overriding the related default method
///
/// @param self QGeoCodeReply*
/// @param callback void func(QGeoCodeReply* self, int64_t limit)
///
void q_geocodereply_on_set_limit(void* self, void (*callback)(void*, int64_t));

/// @warning DEPRECATED: Use `q_geocodereply_super_set_limit` instead
///
#define q_geocodereply_qbase_set_limit q_geocodereply_super_set_limit

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setLimit)
///
/// Base class method implementation
///
/// @param self QGeoCodeReply*
/// @param limit int64_t
///
void q_geocodereply_super_set_limit(void* self, int64_t limit);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setOffset)
///
/// @param self QGeoCodeReply*
/// @param offset int64_t
///
void q_geocodereply_set_offset(void* self, int64_t offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setOffset)
///
/// Allows for overriding the related default method
///
/// @param self QGeoCodeReply*
/// @param callback void func(QGeoCodeReply* self, int64_t offset)
///
void q_geocodereply_on_set_offset(void* self, void (*callback)(void*, int64_t));

/// @warning DEPRECATED: Use `q_geocodereply_super_set_offset` instead
///
#define q_geocodereply_qbase_set_offset q_geocodereply_super_set_offset

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#setOffset)
///
/// Base class method implementation
///
/// @param self QGeoCodeReply*
/// @param offset int64_t
///
void q_geocodereply_super_set_offset(void* self, int64_t offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_geocodereply_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_geocodereply_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#errorOccurred)
///
/// @param self QGeoCodeReply*
/// @param error enum QGeoCodeReply__Error
/// @param errorString const char*
///
void q_geocodereply_error_occurred2(void* self, int32_t error, const char* errorString);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#errorOccurred)
///
/// @param self QGeoCodeReply*
/// @param callback void func(QGeoCodeReply* self, enum QGeoCodeReply__Error error, const char* errorString)
///
void q_geocodereply_on_error_occurred2(void* self, void (*callback)(void*, int32_t, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoCodeReply*
///
const char* q_geocodereply_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGeoCodeReply*
/// @param name const char*
///
void q_geocodereply_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGeoCodeReply*
///
bool q_geocodereply_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGeoCodeReply*
///
bool q_geocodereply_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGeoCodeReply*
///
bool q_geocodereply_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGeoCodeReply*
///
bool q_geocodereply_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGeoCodeReply*
/// @param b bool
///
bool q_geocodereply_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGeoCodeReply*
///
QThread* q_geocodereply_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGeoCodeReply*
/// @param thread QThread*
///
bool q_geocodereply_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoCodeReply*
/// @param interval int
///
int32_t q_geocodereply_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoCodeReply*
/// @param time int64_t of nanoseconds
///
int32_t q_geocodereply_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGeoCodeReply*
/// @param id int
///
void q_geocodereply_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGeoCodeReply*
/// @param id enum Qt__TimerId
///
void q_geocodereply_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGeoCodeReply*
///
/// @return libqt_list of QObject*
///
libqt_list q_geocodereply_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGeoCodeReply*
/// @param parent QObject*
///
void q_geocodereply_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGeoCodeReply*
/// @param filterObj QObject*
///
void q_geocodereply_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGeoCodeReply*
/// @param obj QObject*
///
void q_geocodereply_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_geocodereply_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_geocodereply_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGeoCodeReply*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_geocodereply_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_geocodereply_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_geocodereply_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoCodeReply*
///
bool q_geocodereply_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoCodeReply*
/// @param receiver QObject*
///
bool q_geocodereply_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_geocodereply_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGeoCodeReply*
///
void q_geocodereply_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGeoCodeReply*
///
void q_geocodereply_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGeoCodeReply*
/// @param name const char*
/// @param value QVariant*
///
bool q_geocodereply_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGeoCodeReply*
/// @param name const char*
///
QVariant* q_geocodereply_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QGeoCodeReply*
///
const char** q_geocodereply_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGeoCodeReply*
///
QBindingStorage* q_geocodereply_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGeoCodeReply*
///
const QBindingStorage* q_geocodereply_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoCodeReply*
///
void q_geocodereply_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoCodeReply*
/// @param callback void func(QGeoCodeReply* self)
///
void q_geocodereply_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGeoCodeReply*
///
QObject* q_geocodereply_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGeoCodeReply*
/// @param classname const char*
///
bool q_geocodereply_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGeoCodeReply*
///
void q_geocodereply_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoCodeReply*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_geocodereply_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoCodeReply*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_geocodereply_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_geocodereply_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_geocodereply_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGeoCodeReply*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_geocodereply_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoCodeReply*
/// @param signal const char*
///
bool q_geocodereply_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoCodeReply*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_geocodereply_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoCodeReply*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_geocodereply_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoCodeReply*
/// @param receiver QObject*
/// @param member const char*
///
bool q_geocodereply_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoCodeReply*
/// @param param1 QObject*
///
void q_geocodereply_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoCodeReply*
/// @param callback void func(QGeoCodeReply* self, QObject* param1)
///
void q_geocodereply_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param event QEvent*
///
bool q_geocodereply_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_geocodereply_super_event` instead
///
#define q_geocodereply_qbase_event q_geocodereply_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param event QEvent*
///
bool q_geocodereply_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param callback bool func(QGeoCodeReply* self, QEvent* event)
///
void q_geocodereply_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_geocodereply_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_geocodereply_super_event_filter` instead
///
#define q_geocodereply_qbase_event_filter q_geocodereply_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_geocodereply_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param callback bool func(QGeoCodeReply* self, QObject* watched, QEvent* event)
///
void q_geocodereply_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param event QTimerEvent*
///
void q_geocodereply_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_geocodereply_super_timer_event` instead
///
#define q_geocodereply_qbase_timer_event q_geocodereply_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param event QTimerEvent*
///
void q_geocodereply_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param callback void func(QGeoCodeReply* self, QTimerEvent* event)
///
void q_geocodereply_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param event QChildEvent*
///
void q_geocodereply_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_geocodereply_super_child_event` instead
///
#define q_geocodereply_qbase_child_event q_geocodereply_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param event QChildEvent*
///
void q_geocodereply_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param callback void func(QGeoCodeReply* self, QChildEvent* event)
///
void q_geocodereply_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param event QEvent*
///
void q_geocodereply_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_geocodereply_super_custom_event` instead
///
#define q_geocodereply_qbase_custom_event q_geocodereply_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param event QEvent*
///
void q_geocodereply_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param callback void func(QGeoCodeReply* self, QEvent* event)
///
void q_geocodereply_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param signal QMetaMethod*
///
void q_geocodereply_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_geocodereply_super_connect_notify` instead
///
#define q_geocodereply_qbase_connect_notify q_geocodereply_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param signal QMetaMethod*
///
void q_geocodereply_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param callback void func(QGeoCodeReply* self, QMetaMethod* signal)
///
void q_geocodereply_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param signal QMetaMethod*
///
void q_geocodereply_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_geocodereply_super_disconnect_notify` instead
///
#define q_geocodereply_qbase_disconnect_notify q_geocodereply_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param signal QMetaMethod*
///
void q_geocodereply_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param callback void func(QGeoCodeReply* self, QMetaMethod* signal)
///
void q_geocodereply_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoCodeReply*
///
QObject* q_geocodereply_sender(void* self);

/// @warning DEPRECATED: Use `q_geocodereply_super_sender` instead
///
#define q_geocodereply_qbase_sender q_geocodereply_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoCodeReply*
///
QObject* q_geocodereply_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param callback QObject* func()
///
void q_geocodereply_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoCodeReply*
///
int32_t q_geocodereply_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_geocodereply_super_sender_signal_index` instead
///
#define q_geocodereply_qbase_sender_signal_index q_geocodereply_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoCodeReply*
///
int32_t q_geocodereply_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param callback int32_t func()
///
void q_geocodereply_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param signal const char*
///
int32_t q_geocodereply_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_geocodereply_super_receivers` instead
///
#define q_geocodereply_qbase_receivers q_geocodereply_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param signal const char*
///
int32_t q_geocodereply_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param callback int32_t func(QGeoCodeReply* self, const char* signal)
///
void q_geocodereply_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param signal QMetaMethod*
///
bool q_geocodereply_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_geocodereply_super_is_signal_connected` instead
///
#define q_geocodereply_qbase_is_signal_connected q_geocodereply_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param signal QMetaMethod*
///
bool q_geocodereply_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoCodeReply*
/// @param callback bool func(QGeoCodeReply* self, QMetaMethod* signal)
///
void q_geocodereply_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGeoCodeReply*
/// @param callback void func(QGeoCodeReply* self, const char* objectName)
///
void q_geocodereply_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#dtor.QGeoCodeReply)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoCodeReply*
///
void q_geocodereply_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodereply.html#public-types)

typedef enum {
    QGEOCODEREPLY_ERROR_NOERROR = 0,
    QGEOCODEREPLY_ERROR_ENGINENOTSETERROR = 1,
    QGEOCODEREPLY_ERROR_COMMUNICATIONERROR = 2,
    QGEOCODEREPLY_ERROR_PARSEERROR = 3,
    QGEOCODEREPLY_ERROR_UNSUPPORTEDOPTIONERROR = 4,
    QGEOCODEREPLY_ERROR_COMBINATIONERROR = 5,
    QGEOCODEREPLY_ERROR_UNKNOWNERROR = 6
} QGeoCodeReply__Error;

#endif
