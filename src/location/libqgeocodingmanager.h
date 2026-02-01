#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQGEOCODINGMANAGER_H
#define SRC_LOCATION_QT6C_LIBQGEOCODINGMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanager.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGeoCodingManager*
///
const QMetaObject* q_geocodingmanager_meta_object(void* self);

/// @param self QGeoCodingManager*
/// @param param1 const char*
///
void* q_geocodingmanager_metacast(void* self, const char* param1);

/// @param self QGeoCodingManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_geocodingmanager_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_geocodingmanager_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanager.html#managerName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoCodingManager*
///
const char* q_geocodingmanager_manager_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanager.html#managerVersion)
///
/// @param self QGeoCodingManager*
///
int32_t q_geocodingmanager_manager_version(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanager.html#geocode)
///
/// @param self QGeoCodingManager*
/// @param address QGeoAddress*
///
QGeoCodeReply* q_geocodingmanager_geocode(void* self, void* address);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanager.html#geocode)
///
/// @param self QGeoCodingManager*
/// @param searchString const char*
///
QGeoCodeReply* q_geocodingmanager_geocode2(void* self, const char* searchString);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanager.html#reverseGeocode)
///
/// @param self QGeoCodingManager*
/// @param coordinate QGeoCoordinate*
///
QGeoCodeReply* q_geocodingmanager_reverse_geocode(void* self, void* coordinate);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanager.html#setLocale)
///
/// @param self QGeoCodingManager*
/// @param locale QLocale*
///
void q_geocodingmanager_set_locale(void* self, void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanager.html#locale)
///
/// @param self QGeoCodingManager*
///
QLocale* q_geocodingmanager_locale(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanager.html#finished)
///
/// @param self QGeoCodingManager*
/// @param reply QGeoCodeReply*
///
void q_geocodingmanager_finished(void* self, void* reply);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanager.html#finished)
///
/// @param self QGeoCodingManager*
/// @param callback void func(QGeoCodingManager* self, QGeoCodeReply* reply)
///
void q_geocodingmanager_on_finished(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanager.html#errorOccurred)
///
/// @param self QGeoCodingManager*
/// @param reply QGeoCodeReply*
/// @param error enum QGeoCodeReply__Error
///
void q_geocodingmanager_error_occurred(void* self, void* reply, int32_t error);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanager.html#errorOccurred)
///
/// @param self QGeoCodingManager*
/// @param callback void func(QGeoCodingManager* self, QGeoCodeReply* reply, enum QGeoCodeReply__Error error)
///
void q_geocodingmanager_on_error_occurred(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_geocodingmanager_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_geocodingmanager_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanager.html#geocode)
///
/// @param self QGeoCodingManager*
/// @param address QGeoAddress*
/// @param bounds QGeoShape*
///
QGeoCodeReply* q_geocodingmanager_geocode22(void* self, void* address, void* bounds);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanager.html#geocode)
///
/// @param self QGeoCodingManager*
/// @param searchString const char*
/// @param limit int
///
QGeoCodeReply* q_geocodingmanager_geocode23(void* self, const char* searchString, int limit);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanager.html#geocode)
///
/// @param self QGeoCodingManager*
/// @param searchString const char*
/// @param limit int
/// @param offset int
///
QGeoCodeReply* q_geocodingmanager_geocode3(void* self, const char* searchString, int limit, int offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanager.html#geocode)
///
/// @param self QGeoCodingManager*
/// @param searchString const char*
/// @param limit int
/// @param offset int
/// @param bounds QGeoShape*
///
QGeoCodeReply* q_geocodingmanager_geocode4(void* self, const char* searchString, int limit, int offset, void* bounds);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanager.html#reverseGeocode)
///
/// @param self QGeoCodingManager*
/// @param coordinate QGeoCoordinate*
/// @param bounds QGeoShape*
///
QGeoCodeReply* q_geocodingmanager_reverse_geocode2(void* self, void* coordinate, void* bounds);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanager.html#errorOccurred)
///
/// @param self QGeoCodingManager*
/// @param reply QGeoCodeReply*
/// @param error enum QGeoCodeReply__Error
/// @param errorString const char*
///
void q_geocodingmanager_error_occurred3(void* self, void* reply, int32_t error, const char* errorString);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanager.html#errorOccurred)
///
/// @param self QGeoCodingManager*
/// @param callback void func(QGeoCodingManager* self, QGeoCodeReply* reply, enum QGeoCodeReply__Error error, const char* errorString)
///
void q_geocodingmanager_on_error_occurred3(void* self, void (*callback)(void*, void*, int32_t, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QGeoCodingManager*
/// @param event QEvent*
///
bool q_geocodingmanager_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QGeoCodingManager*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_geocodingmanager_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoCodingManager*
///
const char* q_geocodingmanager_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGeoCodingManager*
/// @param name char*
///
void q_geocodingmanager_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGeoCodingManager*
///
bool q_geocodingmanager_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGeoCodingManager*
///
bool q_geocodingmanager_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGeoCodingManager*
///
bool q_geocodingmanager_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGeoCodingManager*
///
bool q_geocodingmanager_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGeoCodingManager*
/// @param b bool
///
bool q_geocodingmanager_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGeoCodingManager*
///
QThread* q_geocodingmanager_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGeoCodingManager*
/// @param thread QThread*
///
bool q_geocodingmanager_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoCodingManager*
/// @param interval int
///
int32_t q_geocodingmanager_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoCodingManager*
/// @param time int64_t of nanoseconds
///
int32_t q_geocodingmanager_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGeoCodingManager*
/// @param id int
///
void q_geocodingmanager_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGeoCodingManager*
/// @param id enum Qt__TimerId
///
void q_geocodingmanager_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGeoCodingManager*
///
/// @return libqt_list of QObject*
///
libqt_list q_geocodingmanager_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGeoCodingManager*
/// @param parent QObject*
///
void q_geocodingmanager_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGeoCodingManager*
/// @param filterObj QObject*
///
void q_geocodingmanager_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGeoCodingManager*
/// @param obj QObject*
///
void q_geocodingmanager_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_geocodingmanager_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_geocodingmanager_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGeoCodingManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_geocodingmanager_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_geocodingmanager_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_geocodingmanager_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoCodingManager*
///
bool q_geocodingmanager_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoCodingManager*
/// @param receiver QObject*
///
bool q_geocodingmanager_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_geocodingmanager_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGeoCodingManager*
///
void q_geocodingmanager_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGeoCodingManager*
///
void q_geocodingmanager_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGeoCodingManager*
/// @param name const char*
/// @param value QVariant*
///
bool q_geocodingmanager_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGeoCodingManager*
/// @param name const char*
///
QVariant* q_geocodingmanager_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QGeoCodingManager*
///
const char** q_geocodingmanager_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGeoCodingManager*
///
QBindingStorage* q_geocodingmanager_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGeoCodingManager*
///
const QBindingStorage* q_geocodingmanager_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoCodingManager*
///
void q_geocodingmanager_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoCodingManager*
/// @param callback void func(QGeoCodingManager* self)
///
void q_geocodingmanager_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGeoCodingManager*
///
QObject* q_geocodingmanager_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGeoCodingManager*
/// @param classname const char*
///
bool q_geocodingmanager_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGeoCodingManager*
///
void q_geocodingmanager_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoCodingManager*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_geocodingmanager_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoCodingManager*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_geocodingmanager_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_geocodingmanager_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_geocodingmanager_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGeoCodingManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_geocodingmanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoCodingManager*
/// @param signal const char*
///
bool q_geocodingmanager_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoCodingManager*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_geocodingmanager_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoCodingManager*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_geocodingmanager_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoCodingManager*
/// @param receiver QObject*
/// @param member const char*
///
bool q_geocodingmanager_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoCodingManager*
/// @param param1 QObject*
///
void q_geocodingmanager_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoCodingManager*
/// @param callback void func(QGeoCodingManager* self, QObject* param1)
///
void q_geocodingmanager_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGeoCodingManager*
/// @param callback void func(QGeoCodingManager* self, const char* objectName)
///
void q_geocodingmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeocodingmanager.html#dtor.QGeoCodingManager)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoCodingManager*
///
void q_geocodingmanager_delete(void* self);

#endif
