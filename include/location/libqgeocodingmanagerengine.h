#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQGEOCODINGMANAGERENGINE_H
#define SRC_LOCATION_QT6C_LIBQGEOCODINGMANAGERENGINE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html)

/// q_geocodingmanagerengine_new constructs a new QGeoCodingManagerEngine object.
///
/// @param parameters libqt_map of const char* to QVariant*
///
QGeoCodingManagerEngine* q_geocodingmanagerengine_new(libqt_map parameters);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html)

/// q_geocodingmanagerengine_new2 constructs a new QGeoCodingManagerEngine object.
///
/// @param parameters libqt_map of const char* to QVariant*
/// @param parent QObject*
///
QGeoCodingManagerEngine* q_geocodingmanagerengine_new2(libqt_map parameters, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGeoCodingManagerEngine*
///
const QMetaObject* q_geocodingmanagerengine_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QGeoCodingManagerEngine*
/// @param callback const QMetaObject* func()
///
void q_geocodingmanagerengine_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_geocodingmanagerengine_super_meta_object` instead
///
#define q_geocodingmanagerengine_qbase_meta_object q_geocodingmanagerengine_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QGeoCodingManagerEngine*
///
const QMetaObject* q_geocodingmanagerengine_super_meta_object(void* self);

/// @param self QGeoCodingManagerEngine*
/// @param param1 const char*
///
void* q_geocodingmanagerengine_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QGeoCodingManagerEngine*
/// @param callback void* func(QGeoCodingManagerEngine* self, const char* param1)
///
void q_geocodingmanagerengine_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_geocodingmanagerengine_super_metacast` instead
///
#define q_geocodingmanagerengine_qbase_metacast q_geocodingmanagerengine_super_metacast

/// Base class method implementation
///
/// @param self QGeoCodingManagerEngine*
/// @param param1 const char*
///
void* q_geocodingmanagerengine_super_metacast(void* self, const char* param1);

/// @param self QGeoCodingManagerEngine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_geocodingmanagerengine_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGeoCodingManagerEngine*
/// @param callback int32_t func(QGeoCodingManagerEngine* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_geocodingmanagerengine_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_geocodingmanagerengine_super_metacall` instead
///
#define q_geocodingmanagerengine_qbase_metacall q_geocodingmanagerengine_super_metacall

/// Base class method implementation
///
/// @param self QGeoCodingManagerEngine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_geocodingmanagerengine_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_geocodingmanagerengine_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#managerName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoCodingManagerEngine*
///
const char* q_geocodingmanagerengine_manager_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#managerVersion)
///
/// @param self QGeoCodingManagerEngine*
///
int32_t q_geocodingmanagerengine_manager_version(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#geocode)
///
/// @param self QGeoCodingManagerEngine*
/// @param address QGeoAddress*
/// @param bounds QGeoShape*
///
QGeoCodeReply* q_geocodingmanagerengine_geocode(void* self, void* address, void* bounds);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#geocode)
///
/// Allows for overriding the related default method
///
/// @param self QGeoCodingManagerEngine*
/// @param callback QGeoCodeReply* func(QGeoCodingManagerEngine* self, QGeoAddress* address, QGeoShape* bounds)
///
void q_geocodingmanagerengine_on_geocode(void* self, QGeoCodeReply* (*callback)(void*, void*, void*));

/// @warning DEPRECATED: Use `q_geocodingmanagerengine_super_geocode` instead
///
#define q_geocodingmanagerengine_qbase_geocode q_geocodingmanagerengine_super_geocode

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#geocode)
///
/// Base class method implementation
///
/// @param self QGeoCodingManagerEngine*
/// @param address QGeoAddress*
/// @param bounds QGeoShape*
///
QGeoCodeReply* q_geocodingmanagerengine_super_geocode(void* self, void* address, void* bounds);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#geocode)
///
/// @param self QGeoCodingManagerEngine*
/// @param address const char*
/// @param limit int
/// @param offset int
/// @param bounds QGeoShape*
///
QGeoCodeReply* q_geocodingmanagerengine_geocode2(void* self, const char* address, int limit, int offset, void* bounds);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#geocode)
///
/// Allows for overriding the related default method
///
/// @param self QGeoCodingManagerEngine*
/// @param callback QGeoCodeReply* func(QGeoCodingManagerEngine* self, const char* address, int limit, int offset, QGeoShape* bounds)
///
void q_geocodingmanagerengine_on_geocode2(void* self, QGeoCodeReply* (*callback)(void*, const char*, int, int, void*));

/// @warning DEPRECATED: Use `q_geocodingmanagerengine_super_geocode2` instead
///
#define q_geocodingmanagerengine_qbase_geocode2 q_geocodingmanagerengine_super_geocode2

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#geocode)
///
/// Base class method implementation
///
/// @param self QGeoCodingManagerEngine*
/// @param address const char*
/// @param limit int
/// @param offset int
/// @param bounds QGeoShape*
///
QGeoCodeReply* q_geocodingmanagerengine_super_geocode2(void* self, const char* address, int limit, int offset, void* bounds);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#reverseGeocode)
///
/// @param self QGeoCodingManagerEngine*
/// @param coordinate QGeoCoordinate*
/// @param bounds QGeoShape*
///
QGeoCodeReply* q_geocodingmanagerengine_reverse_geocode(void* self, void* coordinate, void* bounds);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#reverseGeocode)
///
/// Allows for overriding the related default method
///
/// @param self QGeoCodingManagerEngine*
/// @param callback QGeoCodeReply* func(QGeoCodingManagerEngine* self, QGeoCoordinate* coordinate, QGeoShape* bounds)
///
void q_geocodingmanagerengine_on_reverse_geocode(void* self, QGeoCodeReply* (*callback)(void*, void*, void*));

/// @warning DEPRECATED: Use `q_geocodingmanagerengine_super_reverse_geocode` instead
///
#define q_geocodingmanagerengine_qbase_reverse_geocode q_geocodingmanagerengine_super_reverse_geocode

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#reverseGeocode)
///
/// Base class method implementation
///
/// @param self QGeoCodingManagerEngine*
/// @param coordinate QGeoCoordinate*
/// @param bounds QGeoShape*
///
QGeoCodeReply* q_geocodingmanagerengine_super_reverse_geocode(void* self, void* coordinate, void* bounds);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#setLocale)
///
/// @param self QGeoCodingManagerEngine*
/// @param locale QLocale*
///
void q_geocodingmanagerengine_set_locale(void* self, void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#locale)
///
/// @param self QGeoCodingManagerEngine*
///
QLocale* q_geocodingmanagerengine_locale(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#finished)
///
/// @param self QGeoCodingManagerEngine*
/// @param reply QGeoCodeReply*
///
void q_geocodingmanagerengine_finished(void* self, void* reply);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#finished)
///
/// @param self QGeoCodingManagerEngine*
/// @param callback void func(QGeoCodingManagerEngine* self, QGeoCodeReply* reply)
///
void q_geocodingmanagerengine_on_finished(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#errorOccurred)
///
/// @param self QGeoCodingManagerEngine*
/// @param reply QGeoCodeReply*
/// @param error enum QGeoCodeReply__Error
///
void q_geocodingmanagerengine_error_occurred(void* self, void* reply, int32_t error);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#errorOccurred)
///
/// @param self QGeoCodingManagerEngine*
/// @param callback void func(QGeoCodingManagerEngine* self, QGeoCodeReply* reply, enum QGeoCodeReply__Error error)
///
void q_geocodingmanagerengine_on_error_occurred(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_geocodingmanagerengine_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_geocodingmanagerengine_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#errorOccurred)
///
/// @param self QGeoCodingManagerEngine*
/// @param reply QGeoCodeReply*
/// @param error enum QGeoCodeReply__Error
/// @param errorString const char*
///
void q_geocodingmanagerengine_error_occurred3(void* self, void* reply, int32_t error, const char* errorString);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#errorOccurred)
///
/// @param self QGeoCodingManagerEngine*
/// @param callback void func(QGeoCodingManagerEngine* self, QGeoCodeReply* reply, enum QGeoCodeReply__Error error, const char* errorString)
///
void q_geocodingmanagerengine_on_error_occurred3(void* self, void (*callback)(void*, void*, int32_t, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoCodingManagerEngine*
///
const char* q_geocodingmanagerengine_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGeoCodingManagerEngine*
/// @param name const char*
///
void q_geocodingmanagerengine_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGeoCodingManagerEngine*
///
bool q_geocodingmanagerengine_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGeoCodingManagerEngine*
///
bool q_geocodingmanagerengine_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGeoCodingManagerEngine*
///
bool q_geocodingmanagerengine_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGeoCodingManagerEngine*
///
bool q_geocodingmanagerengine_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGeoCodingManagerEngine*
/// @param b bool
///
bool q_geocodingmanagerengine_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGeoCodingManagerEngine*
///
QThread* q_geocodingmanagerengine_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGeoCodingManagerEngine*
/// @param thread QThread*
///
bool q_geocodingmanagerengine_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoCodingManagerEngine*
/// @param interval int
///
int32_t q_geocodingmanagerengine_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoCodingManagerEngine*
/// @param time int64_t of nanoseconds
///
int32_t q_geocodingmanagerengine_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGeoCodingManagerEngine*
/// @param id int
///
void q_geocodingmanagerengine_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGeoCodingManagerEngine*
/// @param id enum Qt__TimerId
///
void q_geocodingmanagerengine_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGeoCodingManagerEngine*
///
/// @return libqt_list of QObject*
///
libqt_list q_geocodingmanagerengine_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGeoCodingManagerEngine*
/// @param parent QObject*
///
void q_geocodingmanagerengine_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGeoCodingManagerEngine*
/// @param filterObj QObject*
///
void q_geocodingmanagerengine_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGeoCodingManagerEngine*
/// @param obj QObject*
///
void q_geocodingmanagerengine_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_geocodingmanagerengine_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_geocodingmanagerengine_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGeoCodingManagerEngine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_geocodingmanagerengine_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_geocodingmanagerengine_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_geocodingmanagerengine_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoCodingManagerEngine*
///
bool q_geocodingmanagerengine_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoCodingManagerEngine*
/// @param receiver QObject*
///
bool q_geocodingmanagerengine_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_geocodingmanagerengine_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGeoCodingManagerEngine*
///
void q_geocodingmanagerengine_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGeoCodingManagerEngine*
///
void q_geocodingmanagerengine_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGeoCodingManagerEngine*
/// @param name const char*
/// @param value QVariant*
///
bool q_geocodingmanagerengine_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGeoCodingManagerEngine*
/// @param name const char*
///
QVariant* q_geocodingmanagerengine_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QGeoCodingManagerEngine*
///
const char** q_geocodingmanagerengine_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGeoCodingManagerEngine*
///
QBindingStorage* q_geocodingmanagerengine_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGeoCodingManagerEngine*
///
const QBindingStorage* q_geocodingmanagerengine_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoCodingManagerEngine*
///
void q_geocodingmanagerengine_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoCodingManagerEngine*
/// @param callback void func(QGeoCodingManagerEngine* self)
///
void q_geocodingmanagerengine_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGeoCodingManagerEngine*
///
QObject* q_geocodingmanagerengine_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGeoCodingManagerEngine*
/// @param classname const char*
///
bool q_geocodingmanagerengine_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGeoCodingManagerEngine*
///
void q_geocodingmanagerengine_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoCodingManagerEngine*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_geocodingmanagerengine_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoCodingManagerEngine*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_geocodingmanagerengine_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_geocodingmanagerengine_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_geocodingmanagerengine_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGeoCodingManagerEngine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_geocodingmanagerengine_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoCodingManagerEngine*
/// @param signal const char*
///
bool q_geocodingmanagerengine_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoCodingManagerEngine*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_geocodingmanagerengine_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoCodingManagerEngine*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_geocodingmanagerengine_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoCodingManagerEngine*
/// @param receiver QObject*
/// @param member const char*
///
bool q_geocodingmanagerengine_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoCodingManagerEngine*
/// @param param1 QObject*
///
void q_geocodingmanagerengine_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoCodingManagerEngine*
/// @param callback void func(QGeoCodingManagerEngine* self, QObject* param1)
///
void q_geocodingmanagerengine_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param event QEvent*
///
bool q_geocodingmanagerengine_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_geocodingmanagerengine_super_event` instead
///
#define q_geocodingmanagerengine_qbase_event q_geocodingmanagerengine_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param event QEvent*
///
bool q_geocodingmanagerengine_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param callback bool func(QGeoCodingManagerEngine* self, QEvent* event)
///
void q_geocodingmanagerengine_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_geocodingmanagerengine_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_geocodingmanagerengine_super_event_filter` instead
///
#define q_geocodingmanagerengine_qbase_event_filter q_geocodingmanagerengine_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_geocodingmanagerengine_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param callback bool func(QGeoCodingManagerEngine* self, QObject* watched, QEvent* event)
///
void q_geocodingmanagerengine_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param event QTimerEvent*
///
void q_geocodingmanagerengine_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_geocodingmanagerengine_super_timer_event` instead
///
#define q_geocodingmanagerengine_qbase_timer_event q_geocodingmanagerengine_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param event QTimerEvent*
///
void q_geocodingmanagerengine_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param callback void func(QGeoCodingManagerEngine* self, QTimerEvent* event)
///
void q_geocodingmanagerengine_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param event QChildEvent*
///
void q_geocodingmanagerengine_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_geocodingmanagerengine_super_child_event` instead
///
#define q_geocodingmanagerengine_qbase_child_event q_geocodingmanagerengine_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param event QChildEvent*
///
void q_geocodingmanagerengine_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param callback void func(QGeoCodingManagerEngine* self, QChildEvent* event)
///
void q_geocodingmanagerengine_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param event QEvent*
///
void q_geocodingmanagerengine_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_geocodingmanagerengine_super_custom_event` instead
///
#define q_geocodingmanagerengine_qbase_custom_event q_geocodingmanagerengine_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param event QEvent*
///
void q_geocodingmanagerengine_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param callback void func(QGeoCodingManagerEngine* self, QEvent* event)
///
void q_geocodingmanagerengine_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param signal QMetaMethod*
///
void q_geocodingmanagerengine_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_geocodingmanagerengine_super_connect_notify` instead
///
#define q_geocodingmanagerengine_qbase_connect_notify q_geocodingmanagerengine_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param signal QMetaMethod*
///
void q_geocodingmanagerengine_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param callback void func(QGeoCodingManagerEngine* self, QMetaMethod* signal)
///
void q_geocodingmanagerengine_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param signal QMetaMethod*
///
void q_geocodingmanagerengine_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_geocodingmanagerengine_super_disconnect_notify` instead
///
#define q_geocodingmanagerengine_qbase_disconnect_notify q_geocodingmanagerengine_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param signal QMetaMethod*
///
void q_geocodingmanagerengine_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param callback void func(QGeoCodingManagerEngine* self, QMetaMethod* signal)
///
void q_geocodingmanagerengine_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
///
QObject* q_geocodingmanagerengine_sender(void* self);

/// @warning DEPRECATED: Use `q_geocodingmanagerengine_super_sender` instead
///
#define q_geocodingmanagerengine_qbase_sender q_geocodingmanagerengine_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
///
QObject* q_geocodingmanagerengine_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param callback QObject* func()
///
void q_geocodingmanagerengine_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
///
int32_t q_geocodingmanagerengine_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_geocodingmanagerengine_super_sender_signal_index` instead
///
#define q_geocodingmanagerengine_qbase_sender_signal_index q_geocodingmanagerengine_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
///
int32_t q_geocodingmanagerengine_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param callback int32_t func()
///
void q_geocodingmanagerengine_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param signal const char*
///
int32_t q_geocodingmanagerengine_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_geocodingmanagerengine_super_receivers` instead
///
#define q_geocodingmanagerengine_qbase_receivers q_geocodingmanagerengine_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param signal const char*
///
int32_t q_geocodingmanagerengine_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param callback int32_t func(QGeoCodingManagerEngine* self, const char* signal)
///
void q_geocodingmanagerengine_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param signal QMetaMethod*
///
bool q_geocodingmanagerengine_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_geocodingmanagerengine_super_is_signal_connected` instead
///
#define q_geocodingmanagerengine_qbase_is_signal_connected q_geocodingmanagerengine_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param signal QMetaMethod*
///
bool q_geocodingmanagerengine_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoCodingManagerEngine*
/// @param callback bool func(QGeoCodingManagerEngine* self, QMetaMethod* signal)
///
void q_geocodingmanagerengine_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGeoCodingManagerEngine*
/// @param callback void func(QGeoCodingManagerEngine* self, const char* objectName)
///
void q_geocodingmanagerengine_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanagerengine.html#dtor.QGeoCodingManagerEngine)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoCodingManagerEngine*
///
void q_geocodingmanagerengine_delete(void* self);

#endif
