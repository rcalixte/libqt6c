#pragma once
#ifndef POSITIONING_LIBQGEOSATELLITEINFOSOURCE_H
#define POSITIONING_LIBQGEOSATELLITEINFOSOURCE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html)

/// q_geosatelliteinfosource_new constructs a new QGeoSatelliteInfoSource object.
///
/// @param parent QObject*
///
QGeoSatelliteInfoSource* q_geosatelliteinfosource_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QGeoSatelliteInfoSource*
///
const QMetaObject* q_geosatelliteinfosource_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QGeoSatelliteInfoSource*
/// @param callback const QMetaObject* func(const QGeoSatelliteInfoSource* self)
///
void q_geosatelliteinfosource_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QGeoSatelliteInfoSource*
///
const QMetaObject* q_geosatelliteinfosource_super_meta_object(const void* self);

/// @param self QGeoSatelliteInfoSource*
/// @param param1 const char*
///
void* q_geosatelliteinfosource_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback void* func(QGeoSatelliteInfoSource* self, const char* param1)
///
void q_geosatelliteinfosource_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QGeoSatelliteInfoSource*
/// @param param1 const char*
///
void* q_geosatelliteinfosource_super_metacast(void* self, const char* param1);

/// @param self QGeoSatelliteInfoSource*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_geosatelliteinfosource_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback int32_t func(QGeoSatelliteInfoSource* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_geosatelliteinfosource_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QGeoSatelliteInfoSource*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_geosatelliteinfosource_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_geosatelliteinfosource_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#createDefaultSource)
///
/// @param parent QObject*
///
QGeoSatelliteInfoSource* q_geosatelliteinfosource_create_default_source(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#createSource)
///
/// @param sourceName const char*
/// @param parent QObject*
///
QGeoSatelliteInfoSource* q_geosatelliteinfosource_create_source(const char* sourceName, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#createDefaultSource)
///
/// @param parameters libqt_map of const char* to QVariant*
/// @param parent QObject*
///
QGeoSatelliteInfoSource* q_geosatelliteinfosource_create_default_source2(libqt_map parameters, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#createSource)
///
/// @param sourceName const char*
/// @param parameters libqt_map of const char* to QVariant*
/// @param parent QObject*
///
QGeoSatelliteInfoSource* q_geosatelliteinfosource_create_source2(const char* sourceName, libqt_map parameters, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#availableSources)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_geosatelliteinfosource_available_sources();

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#sourceName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QGeoSatelliteInfoSource*
///
const char* q_geosatelliteinfosource_source_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#setUpdateInterval)
///
/// @param self QGeoSatelliteInfoSource*
/// @param msec int
///
void q_geosatelliteinfosource_set_update_interval(void* self, int msec);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#setUpdateInterval)
///
/// Allows for overriding the related default method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback void func(QGeoSatelliteInfoSource* self, int msec)
///
void q_geosatelliteinfosource_on_set_update_interval(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#setUpdateInterval)
///
/// Base class method implementation
///
/// @param self QGeoSatelliteInfoSource*
/// @param msec int
///
void q_geosatelliteinfosource_super_set_update_interval(void* self, int msec);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#updateInterval)
///
/// @param self const QGeoSatelliteInfoSource*
///
int32_t q_geosatelliteinfosource_update_interval(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#minimumUpdateInterval)
///
/// @warning This method must be implemented with `q_geosatelliteinfosource_on_minimum_update_interval` before it can be called.
///
/// @param self const QGeoSatelliteInfoSource*
///
int32_t q_geosatelliteinfosource_minimum_update_interval(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#minimumUpdateInterval)
///
/// Allows for overriding the related default method
///
/// @param self const QGeoSatelliteInfoSource*
/// @param callback int32_t func(const QGeoSatelliteInfoSource* self)
///
void q_geosatelliteinfosource_on_minimum_update_interval(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#error)
///
/// @warning This method must be implemented with `q_geosatelliteinfosource_on_error` before it can be called.
///
/// @param self const QGeoSatelliteInfoSource*
///
/// @return enum QGeoSatelliteInfoSource__Error
///
int32_t q_geosatelliteinfosource_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#error)
///
/// Allows for overriding the related default method
///
/// @param self const QGeoSatelliteInfoSource*
/// @param callback int32_t func(const QGeoSatelliteInfoSource* self)
///
void q_geosatelliteinfosource_on_error(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#setBackendProperty)
///
/// @param self QGeoSatelliteInfoSource*
/// @param name const char*
/// @param value QVariant*
///
bool q_geosatelliteinfosource_set_backend_property(void* self, const char* name, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#setBackendProperty)
///
/// Allows for overriding the related default method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback bool func(QGeoSatelliteInfoSource* self, const char* name, QVariant* value)
///
void q_geosatelliteinfosource_on_set_backend_property(void* self, bool (*callback)(void*, const char*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#setBackendProperty)
///
/// Base class method implementation
///
/// @param self QGeoSatelliteInfoSource*
/// @param name const char*
/// @param value QVariant*
///
bool q_geosatelliteinfosource_super_set_backend_property(void* self, const char* name, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#backendProperty)
///
/// @param self const QGeoSatelliteInfoSource*
/// @param name const char*
///
QVariant* q_geosatelliteinfosource_backend_property(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#backendProperty)
///
/// Allows for overriding the related default method
///
/// @param self const QGeoSatelliteInfoSource*
/// @param callback QVariant* func(const QGeoSatelliteInfoSource* self, const char* name)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_geosatelliteinfosource_on_backend_property(const void* self, QVariant* (*callback)(const void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#backendProperty)
///
/// Base class method implementation
///
/// @param self const QGeoSatelliteInfoSource*
/// @param name const char*
///
QVariant* q_geosatelliteinfosource_super_backend_property(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#startUpdates)
///
/// @warning This method must be implemented with `q_geosatelliteinfosource_on_start_updates` before it can be called.
///
/// @param self QGeoSatelliteInfoSource*
///
void q_geosatelliteinfosource_start_updates(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#startUpdates)
///
/// Allows for overriding the related default method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback void func(QGeoSatelliteInfoSource* self)
///
void q_geosatelliteinfosource_on_start_updates(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#stopUpdates)
///
/// @warning This method must be implemented with `q_geosatelliteinfosource_on_stop_updates` before it can be called.
///
/// @param self QGeoSatelliteInfoSource*
///
void q_geosatelliteinfosource_stop_updates(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#stopUpdates)
///
/// Allows for overriding the related default method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback void func(QGeoSatelliteInfoSource* self)
///
void q_geosatelliteinfosource_on_stop_updates(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#requestUpdate)
///
/// @warning This method must be implemented with `q_geosatelliteinfosource_on_request_update` before it can be called.
///
/// @param self QGeoSatelliteInfoSource*
/// @param timeout int
///
void q_geosatelliteinfosource_request_update(void* self, int timeout);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#requestUpdate)
///
/// Allows for overriding the related default method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback void func(QGeoSatelliteInfoSource* self, int timeout)
///
void q_geosatelliteinfosource_on_request_update(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#satellitesInViewUpdated)
///
/// @param self QGeoSatelliteInfoSource*
/// @param satellites libqt_list of QGeoSatelliteInfo*
///
void q_geosatelliteinfosource_satellites_in_view_updated(void* self, libqt_list satellites);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#satellitesInViewUpdated)
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback void func(QGeoSatelliteInfoSource* self, libqt_list of QGeoSatelliteInfo* satellites)
///
void q_geosatelliteinfosource_on_satellites_in_view_updated(void* self, void (*callback)(void*, libqt_list));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#satellitesInUseUpdated)
///
/// @param self QGeoSatelliteInfoSource*
/// @param satellites libqt_list of QGeoSatelliteInfo*
///
void q_geosatelliteinfosource_satellites_in_use_updated(void* self, libqt_list satellites);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#satellitesInUseUpdated)
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback void func(QGeoSatelliteInfoSource* self, libqt_list of QGeoSatelliteInfo* satellites)
///
void q_geosatelliteinfosource_on_satellites_in_use_updated(void* self, void (*callback)(void*, libqt_list));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#errorOccurred)
///
/// @param self QGeoSatelliteInfoSource*
/// @param param1 enum QGeoSatelliteInfoSource__Error
///
void q_geosatelliteinfosource_error_occurred(void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#errorOccurred)
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback void func(QGeoSatelliteInfoSource* self, enum QGeoSatelliteInfoSource__Error param1)
///
void q_geosatelliteinfosource_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_geosatelliteinfosource_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_geosatelliteinfosource_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QGeoSatelliteInfoSource*
///
const char* q_geosatelliteinfosource_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGeoSatelliteInfoSource*
/// @param name const char*
///
void q_geosatelliteinfosource_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QGeoSatelliteInfoSource*
///
bool q_geosatelliteinfosource_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QGeoSatelliteInfoSource*
///
bool q_geosatelliteinfosource_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QGeoSatelliteInfoSource*
///
bool q_geosatelliteinfosource_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QGeoSatelliteInfoSource*
///
bool q_geosatelliteinfosource_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGeoSatelliteInfoSource*
/// @param b bool
///
bool q_geosatelliteinfosource_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QGeoSatelliteInfoSource*
///
QThread* q_geosatelliteinfosource_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGeoSatelliteInfoSource*
/// @param thread QThread*
///
bool q_geosatelliteinfosource_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoSatelliteInfoSource*
/// @param interval int
///
int32_t q_geosatelliteinfosource_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoSatelliteInfoSource*
/// @param time int64_t of nanoseconds
///
int32_t q_geosatelliteinfosource_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGeoSatelliteInfoSource*
/// @param id int
///
void q_geosatelliteinfosource_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGeoSatelliteInfoSource*
/// @param id enum Qt__TimerId
///
void q_geosatelliteinfosource_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QGeoSatelliteInfoSource*
///
/// @return libqt_list of QObject*
///
libqt_list q_geosatelliteinfosource_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGeoSatelliteInfoSource*
/// @param parent QObject*
///
void q_geosatelliteinfosource_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGeoSatelliteInfoSource*
/// @param filterObj QObject*
///
void q_geosatelliteinfosource_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGeoSatelliteInfoSource*
/// @param obj QObject*
///
void q_geosatelliteinfosource_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_geosatelliteinfosource_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_geosatelliteinfosource_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QGeoSatelliteInfoSource*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_geosatelliteinfosource_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_geosatelliteinfosource_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_geosatelliteinfosource_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGeoSatelliteInfoSource*
///
bool q_geosatelliteinfosource_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGeoSatelliteInfoSource*
/// @param receiver QObject*
///
bool q_geosatelliteinfosource_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_geosatelliteinfosource_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QGeoSatelliteInfoSource*
///
void q_geosatelliteinfosource_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QGeoSatelliteInfoSource*
///
void q_geosatelliteinfosource_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGeoSatelliteInfoSource*
/// @param name const char*
/// @param value QVariant*
///
bool q_geosatelliteinfosource_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QGeoSatelliteInfoSource*
/// @param name const char*
///
QVariant* q_geosatelliteinfosource_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QGeoSatelliteInfoSource*
///
const char** q_geosatelliteinfosource_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGeoSatelliteInfoSource*
///
QBindingStorage* q_geosatelliteinfosource_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QGeoSatelliteInfoSource*
///
const QBindingStorage* q_geosatelliteinfosource_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoSatelliteInfoSource*
///
void q_geosatelliteinfosource_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback void func(QGeoSatelliteInfoSource* self)
///
void q_geosatelliteinfosource_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QGeoSatelliteInfoSource*
///
QObject* q_geosatelliteinfosource_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QGeoSatelliteInfoSource*
/// @param classname const char*
///
bool q_geosatelliteinfosource_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGeoSatelliteInfoSource*
///
void q_geosatelliteinfosource_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoSatelliteInfoSource*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_geosatelliteinfosource_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoSatelliteInfoSource*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_geosatelliteinfosource_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_geosatelliteinfosource_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_geosatelliteinfosource_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QGeoSatelliteInfoSource*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_geosatelliteinfosource_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGeoSatelliteInfoSource*
/// @param signal const char*
///
bool q_geosatelliteinfosource_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGeoSatelliteInfoSource*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_geosatelliteinfosource_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGeoSatelliteInfoSource*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_geosatelliteinfosource_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGeoSatelliteInfoSource*
/// @param receiver QObject*
/// @param member const char*
///
bool q_geosatelliteinfosource_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoSatelliteInfoSource*
/// @param param1 QObject*
///
void q_geosatelliteinfosource_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback void func(QGeoSatelliteInfoSource* self, QObject* param1)
///
void q_geosatelliteinfosource_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param event QEvent*
///
bool q_geosatelliteinfosource_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param event QEvent*
///
bool q_geosatelliteinfosource_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback bool func(QGeoSatelliteInfoSource* self, QEvent* event)
///
void q_geosatelliteinfosource_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_geosatelliteinfosource_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_geosatelliteinfosource_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback bool func(QGeoSatelliteInfoSource* self, QObject* watched, QEvent* event)
///
void q_geosatelliteinfosource_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param event QTimerEvent*
///
void q_geosatelliteinfosource_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param event QTimerEvent*
///
void q_geosatelliteinfosource_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback void func(QGeoSatelliteInfoSource* self, QTimerEvent* event)
///
void q_geosatelliteinfosource_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param event QChildEvent*
///
void q_geosatelliteinfosource_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param event QChildEvent*
///
void q_geosatelliteinfosource_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback void func(QGeoSatelliteInfoSource* self, QChildEvent* event)
///
void q_geosatelliteinfosource_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param event QEvent*
///
void q_geosatelliteinfosource_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param event QEvent*
///
void q_geosatelliteinfosource_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback void func(QGeoSatelliteInfoSource* self, QEvent* event)
///
void q_geosatelliteinfosource_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param signal QMetaMethod*
///
void q_geosatelliteinfosource_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param signal QMetaMethod*
///
void q_geosatelliteinfosource_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback void func(QGeoSatelliteInfoSource* self, QMetaMethod* signal)
///
void q_geosatelliteinfosource_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param signal QMetaMethod*
///
void q_geosatelliteinfosource_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param signal QMetaMethod*
///
void q_geosatelliteinfosource_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback void func(QGeoSatelliteInfoSource* self, QMetaMethod* signal)
///
void q_geosatelliteinfosource_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGeoSatelliteInfoSource*
///
QObject* q_geosatelliteinfosource_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGeoSatelliteInfoSource*
///
QObject* q_geosatelliteinfosource_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGeoSatelliteInfoSource*
/// @param callback QObject* func(QGeoSatelliteInfoSource* self)
///
void q_geosatelliteinfosource_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGeoSatelliteInfoSource*
///
int32_t q_geosatelliteinfosource_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGeoSatelliteInfoSource*
///
int32_t q_geosatelliteinfosource_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGeoSatelliteInfoSource*
/// @param callback int32_t func(QGeoSatelliteInfoSource* self)
///
void q_geosatelliteinfosource_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGeoSatelliteInfoSource*
/// @param signal const char*
///
int32_t q_geosatelliteinfosource_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGeoSatelliteInfoSource*
/// @param signal const char*
///
int32_t q_geosatelliteinfosource_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGeoSatelliteInfoSource*
/// @param callback int32_t func(QGeoSatelliteInfoSource* self, const char* signal)
///
void q_geosatelliteinfosource_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGeoSatelliteInfoSource*
/// @param signal QMetaMethod*
///
bool q_geosatelliteinfosource_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGeoSatelliteInfoSource*
/// @param signal QMetaMethod*
///
bool q_geosatelliteinfosource_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGeoSatelliteInfoSource*
/// @param callback bool func(QGeoSatelliteInfoSource* self, QMetaMethod* signal)
///
void q_geosatelliteinfosource_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback void func(QGeoSatelliteInfoSource* self, const char* objectName)
///
void q_geosatelliteinfosource_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#dtor.QGeoSatelliteInfoSource)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoSatelliteInfoSource*
///
void q_geosatelliteinfosource_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#public-types)

typedef enum {
    QGEOSATELLITEINFOSOURCE_ERROR_ACCESSERROR = 0,
    QGEOSATELLITEINFOSOURCE_ERROR_CLOSEDERROR = 1,
    QGEOSATELLITEINFOSOURCE_ERROR_NOERROR = 2,
    QGEOSATELLITEINFOSOURCE_ERROR_UNKNOWNSOURCEERROR = -1,
    QGEOSATELLITEINFOSOURCE_ERROR_UPDATETIMEOUTERROR = 3
} QGeoSatelliteInfoSource__Error;

#endif
