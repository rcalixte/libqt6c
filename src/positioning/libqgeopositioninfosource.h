#pragma once
#ifndef POSITIONING_LIBQGEOPOSITIONINFOSOURCE_H
#define POSITIONING_LIBQGEOPOSITIONINFOSOURCE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html)

/// q_geopositioninfosource_new constructs a new QGeoPositionInfoSource object.
///
/// @param parent QObject*
///
QGeoPositionInfoSource* q_geopositioninfosource_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QGeoPositionInfoSource*
///
const QMetaObject* q_geopositioninfosource_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QGeoPositionInfoSource*
/// @param callback const QMetaObject* func(const QGeoPositionInfoSource* self)
///
void q_geopositioninfosource_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QGeoPositionInfoSource*
///
const QMetaObject* q_geopositioninfosource_super_meta_object(const void* self);

/// @param self QGeoPositionInfoSource*
/// @param param1 const char*
///
void* q_geopositioninfosource_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QGeoPositionInfoSource*
/// @param callback void* func(QGeoPositionInfoSource* self, const char* param1)
///
void q_geopositioninfosource_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QGeoPositionInfoSource*
/// @param param1 const char*
///
void* q_geopositioninfosource_super_metacast(void* self, const char* param1);

/// @param self QGeoPositionInfoSource*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_geopositioninfosource_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGeoPositionInfoSource*
/// @param callback int32_t func(QGeoPositionInfoSource* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_geopositioninfosource_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QGeoPositionInfoSource*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_geopositioninfosource_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_geopositioninfosource_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setUpdateInterval)
///
/// @param self QGeoPositionInfoSource*
/// @param msec int
///
void q_geopositioninfosource_set_update_interval(void* self, int msec);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setUpdateInterval)
///
/// Allows for overriding the related default method
///
/// @param self QGeoPositionInfoSource*
/// @param callback void func(QGeoPositionInfoSource* self, int msec)
///
void q_geopositioninfosource_on_set_update_interval(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setUpdateInterval)
///
/// Base class method implementation
///
/// @param self QGeoPositionInfoSource*
/// @param msec int
///
void q_geopositioninfosource_super_set_update_interval(void* self, int msec);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#updateInterval)
///
/// @param self const QGeoPositionInfoSource*
///
int32_t q_geopositioninfosource_update_interval(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setPreferredPositioningMethods)
///
/// @param self QGeoPositionInfoSource*
/// @param methods flag of enum QGeoPositionInfoSource__PositioningMethod
///
void q_geopositioninfosource_set_preferred_positioning_methods(void* self, int32_t methods);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setPreferredPositioningMethods)
///
/// Allows for overriding the related default method
///
/// @param self QGeoPositionInfoSource*
/// @param callback void func(QGeoPositionInfoSource* self, flag of enum QGeoPositionInfoSource__PositioningMethod methods)
///
void q_geopositioninfosource_on_set_preferred_positioning_methods(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setPreferredPositioningMethods)
///
/// Base class method implementation
///
/// @param self QGeoPositionInfoSource*
/// @param methods flag of enum QGeoPositionInfoSource__PositioningMethod
///
void q_geopositioninfosource_super_set_preferred_positioning_methods(void* self, int32_t methods);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#preferredPositioningMethods)
///
/// @param self const QGeoPositionInfoSource*
///
/// @return flag of enum QGeoPositionInfoSource__PositioningMethod
///
int32_t q_geopositioninfosource_preferred_positioning_methods(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#lastKnownPosition)
///
/// @warning This method must be implemented with `q_geopositioninfosource_on_last_known_position` before it can be called.
///
/// @param self const QGeoPositionInfoSource*
/// @param fromSatellitePositioningMethodsOnly bool
///
QGeoPositionInfo* q_geopositioninfosource_last_known_position(const void* self, bool fromSatellitePositioningMethodsOnly);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#lastKnownPosition)
///
/// Allows for overriding the related default method
///
/// @param self const QGeoPositionInfoSource*
/// @param callback QGeoPositionInfo* func(const QGeoPositionInfoSource* self, bool fromSatellitePositioningMethodsOnly)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_geopositioninfosource_on_last_known_position(const void* self, QGeoPositionInfo* (*callback)(const void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#supportedPositioningMethods)
///
/// @warning This method must be implemented with `q_geopositioninfosource_on_supported_positioning_methods` before it can be called.
///
/// @param self const QGeoPositionInfoSource*
///
/// @return flag of enum QGeoPositionInfoSource__PositioningMethod
///
int32_t q_geopositioninfosource_supported_positioning_methods(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#supportedPositioningMethods)
///
/// Allows for overriding the related default method
///
/// @param self const QGeoPositionInfoSource*
/// @param callback int32_t func(const QGeoPositionInfoSource* self)
///
void q_geopositioninfosource_on_supported_positioning_methods(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#minimumUpdateInterval)
///
/// @warning This method must be implemented with `q_geopositioninfosource_on_minimum_update_interval` before it can be called.
///
/// @param self const QGeoPositionInfoSource*
///
int32_t q_geopositioninfosource_minimum_update_interval(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#minimumUpdateInterval)
///
/// Allows for overriding the related default method
///
/// @param self const QGeoPositionInfoSource*
/// @param callback int32_t func(const QGeoPositionInfoSource* self)
///
void q_geopositioninfosource_on_minimum_update_interval(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#sourceName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QGeoPositionInfoSource*
///
const char* q_geopositioninfosource_source_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setBackendProperty)
///
/// @param self QGeoPositionInfoSource*
/// @param name const char*
/// @param value QVariant*
///
bool q_geopositioninfosource_set_backend_property(void* self, const char* name, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setBackendProperty)
///
/// Allows for overriding the related default method
///
/// @param self QGeoPositionInfoSource*
/// @param callback bool func(QGeoPositionInfoSource* self, const char* name, QVariant* value)
///
void q_geopositioninfosource_on_set_backend_property(void* self, bool (*callback)(void*, const char*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setBackendProperty)
///
/// Base class method implementation
///
/// @param self QGeoPositionInfoSource*
/// @param name const char*
/// @param value QVariant*
///
bool q_geopositioninfosource_super_set_backend_property(void* self, const char* name, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#backendProperty)
///
/// @param self const QGeoPositionInfoSource*
/// @param name const char*
///
QVariant* q_geopositioninfosource_backend_property(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#backendProperty)
///
/// Allows for overriding the related default method
///
/// @param self const QGeoPositionInfoSource*
/// @param callback QVariant* func(const QGeoPositionInfoSource* self, const char* name)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_geopositioninfosource_on_backend_property(const void* self, QVariant* (*callback)(const void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#backendProperty)
///
/// Base class method implementation
///
/// @param self const QGeoPositionInfoSource*
/// @param name const char*
///
QVariant* q_geopositioninfosource_super_backend_property(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#createDefaultSource)
///
/// @param parent QObject*
///
QGeoPositionInfoSource* q_geopositioninfosource_create_default_source(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#createDefaultSource)
///
/// @param parameters libqt_map of const char* to QVariant*
/// @param parent QObject*
///
QGeoPositionInfoSource* q_geopositioninfosource_create_default_source2(libqt_map parameters, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#createSource)
///
/// @param sourceName const char*
/// @param parent QObject*
///
QGeoPositionInfoSource* q_geopositioninfosource_create_source(const char* sourceName, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#createSource)
///
/// @param sourceName const char*
/// @param parameters libqt_map of const char* to QVariant*
/// @param parent QObject*
///
QGeoPositionInfoSource* q_geopositioninfosource_create_source2(const char* sourceName, libqt_map parameters, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#availableSources)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_geopositioninfosource_available_sources();

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#error)
///
/// @warning This method must be implemented with `q_geopositioninfosource_on_error` before it can be called.
///
/// @param self const QGeoPositionInfoSource*
///
/// @return enum QGeoPositionInfoSource__Error
///
int32_t q_geopositioninfosource_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#error)
///
/// Allows for overriding the related default method
///
/// @param self const QGeoPositionInfoSource*
/// @param callback int32_t func(const QGeoPositionInfoSource* self)
///
void q_geopositioninfosource_on_error(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#startUpdates)
///
/// @warning This method must be implemented with `q_geopositioninfosource_on_start_updates` before it can be called.
///
/// @param self QGeoPositionInfoSource*
///
void q_geopositioninfosource_start_updates(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#startUpdates)
///
/// Allows for overriding the related default method
///
/// @param self QGeoPositionInfoSource*
/// @param callback void func(QGeoPositionInfoSource* self)
///
void q_geopositioninfosource_on_start_updates(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#stopUpdates)
///
/// @warning This method must be implemented with `q_geopositioninfosource_on_stop_updates` before it can be called.
///
/// @param self QGeoPositionInfoSource*
///
void q_geopositioninfosource_stop_updates(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#stopUpdates)
///
/// Allows for overriding the related default method
///
/// @param self QGeoPositionInfoSource*
/// @param callback void func(QGeoPositionInfoSource* self)
///
void q_geopositioninfosource_on_stop_updates(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#requestUpdate)
///
/// @warning This method must be implemented with `q_geopositioninfosource_on_request_update` before it can be called.
///
/// @param self QGeoPositionInfoSource*
/// @param timeout int
///
void q_geopositioninfosource_request_update(void* self, int timeout);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#requestUpdate)
///
/// Allows for overriding the related default method
///
/// @param self QGeoPositionInfoSource*
/// @param callback void func(QGeoPositionInfoSource* self, int timeout)
///
void q_geopositioninfosource_on_request_update(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#positionUpdated)
///
/// @param self QGeoPositionInfoSource*
/// @param update QGeoPositionInfo*
///
void q_geopositioninfosource_position_updated(void* self, const void* update);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#positionUpdated)
///
/// @param self QGeoPositionInfoSource*
/// @param callback void func(QGeoPositionInfoSource* self, QGeoPositionInfo* update)
///
void q_geopositioninfosource_on_position_updated(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#errorOccurred)
///
/// @param self QGeoPositionInfoSource*
/// @param param1 enum QGeoPositionInfoSource__Error
///
void q_geopositioninfosource_error_occurred(void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#errorOccurred)
///
/// @param self QGeoPositionInfoSource*
/// @param callback void func(QGeoPositionInfoSource* self, enum QGeoPositionInfoSource__Error param1)
///
void q_geopositioninfosource_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#supportedPositioningMethodsChanged)
///
/// @param self QGeoPositionInfoSource*
///
void q_geopositioninfosource_supported_positioning_methods_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#supportedPositioningMethodsChanged)
///
/// @param self QGeoPositionInfoSource*
/// @param callback void func(QGeoPositionInfoSource* self)
///
void q_geopositioninfosource_on_supported_positioning_methods_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_geopositioninfosource_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_geopositioninfosource_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QGeoPositionInfoSource*
///
const char* q_geopositioninfosource_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGeoPositionInfoSource*
/// @param name const char*
///
void q_geopositioninfosource_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QGeoPositionInfoSource*
///
bool q_geopositioninfosource_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QGeoPositionInfoSource*
///
bool q_geopositioninfosource_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QGeoPositionInfoSource*
///
bool q_geopositioninfosource_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QGeoPositionInfoSource*
///
bool q_geopositioninfosource_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGeoPositionInfoSource*
/// @param b bool
///
bool q_geopositioninfosource_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QGeoPositionInfoSource*
///
QThread* q_geopositioninfosource_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGeoPositionInfoSource*
/// @param thread QThread*
///
bool q_geopositioninfosource_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoPositionInfoSource*
/// @param interval int
///
int32_t q_geopositioninfosource_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoPositionInfoSource*
/// @param time int64_t of nanoseconds
///
int32_t q_geopositioninfosource_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGeoPositionInfoSource*
/// @param id int
///
void q_geopositioninfosource_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGeoPositionInfoSource*
/// @param id enum Qt__TimerId
///
void q_geopositioninfosource_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QGeoPositionInfoSource*
///
/// @return libqt_list of QObject*
///
libqt_list q_geopositioninfosource_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGeoPositionInfoSource*
/// @param parent QObject*
///
void q_geopositioninfosource_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGeoPositionInfoSource*
/// @param filterObj QObject*
///
void q_geopositioninfosource_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGeoPositionInfoSource*
/// @param obj QObject*
///
void q_geopositioninfosource_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_geopositioninfosource_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_geopositioninfosource_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QGeoPositionInfoSource*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_geopositioninfosource_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_geopositioninfosource_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_geopositioninfosource_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGeoPositionInfoSource*
///
bool q_geopositioninfosource_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGeoPositionInfoSource*
/// @param receiver QObject*
///
bool q_geopositioninfosource_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_geopositioninfosource_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QGeoPositionInfoSource*
///
void q_geopositioninfosource_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QGeoPositionInfoSource*
///
void q_geopositioninfosource_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGeoPositionInfoSource*
/// @param name const char*
/// @param value QVariant*
///
bool q_geopositioninfosource_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QGeoPositionInfoSource*
/// @param name const char*
///
QVariant* q_geopositioninfosource_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QGeoPositionInfoSource*
///
const char** q_geopositioninfosource_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGeoPositionInfoSource*
///
QBindingStorage* q_geopositioninfosource_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QGeoPositionInfoSource*
///
const QBindingStorage* q_geopositioninfosource_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoPositionInfoSource*
///
void q_geopositioninfosource_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoPositionInfoSource*
/// @param callback void func(QGeoPositionInfoSource* self)
///
void q_geopositioninfosource_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QGeoPositionInfoSource*
///
QObject* q_geopositioninfosource_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QGeoPositionInfoSource*
/// @param classname const char*
///
bool q_geopositioninfosource_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGeoPositionInfoSource*
///
void q_geopositioninfosource_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoPositionInfoSource*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_geopositioninfosource_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoPositionInfoSource*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_geopositioninfosource_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_geopositioninfosource_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_geopositioninfosource_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QGeoPositionInfoSource*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_geopositioninfosource_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGeoPositionInfoSource*
/// @param signal const char*
///
bool q_geopositioninfosource_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGeoPositionInfoSource*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_geopositioninfosource_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGeoPositionInfoSource*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_geopositioninfosource_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGeoPositionInfoSource*
/// @param receiver QObject*
/// @param member const char*
///
bool q_geopositioninfosource_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoPositionInfoSource*
/// @param param1 QObject*
///
void q_geopositioninfosource_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoPositionInfoSource*
/// @param callback void func(QGeoPositionInfoSource* self, QObject* param1)
///
void q_geopositioninfosource_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param event QEvent*
///
bool q_geopositioninfosource_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param event QEvent*
///
bool q_geopositioninfosource_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param callback bool func(QGeoPositionInfoSource* self, QEvent* event)
///
void q_geopositioninfosource_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_geopositioninfosource_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_geopositioninfosource_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param callback bool func(QGeoPositionInfoSource* self, QObject* watched, QEvent* event)
///
void q_geopositioninfosource_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param event QTimerEvent*
///
void q_geopositioninfosource_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param event QTimerEvent*
///
void q_geopositioninfosource_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param callback void func(QGeoPositionInfoSource* self, QTimerEvent* event)
///
void q_geopositioninfosource_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param event QChildEvent*
///
void q_geopositioninfosource_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param event QChildEvent*
///
void q_geopositioninfosource_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param callback void func(QGeoPositionInfoSource* self, QChildEvent* event)
///
void q_geopositioninfosource_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param event QEvent*
///
void q_geopositioninfosource_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param event QEvent*
///
void q_geopositioninfosource_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param callback void func(QGeoPositionInfoSource* self, QEvent* event)
///
void q_geopositioninfosource_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param signal QMetaMethod*
///
void q_geopositioninfosource_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param signal QMetaMethod*
///
void q_geopositioninfosource_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param callback void func(QGeoPositionInfoSource* self, QMetaMethod* signal)
///
void q_geopositioninfosource_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param signal QMetaMethod*
///
void q_geopositioninfosource_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param signal QMetaMethod*
///
void q_geopositioninfosource_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param callback void func(QGeoPositionInfoSource* self, QMetaMethod* signal)
///
void q_geopositioninfosource_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGeoPositionInfoSource*
///
QObject* q_geopositioninfosource_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGeoPositionInfoSource*
///
QObject* q_geopositioninfosource_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGeoPositionInfoSource*
/// @param callback QObject* func(QGeoPositionInfoSource* self)
///
void q_geopositioninfosource_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGeoPositionInfoSource*
///
int32_t q_geopositioninfosource_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGeoPositionInfoSource*
///
int32_t q_geopositioninfosource_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGeoPositionInfoSource*
/// @param callback int32_t func(QGeoPositionInfoSource* self)
///
void q_geopositioninfosource_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGeoPositionInfoSource*
/// @param signal const char*
///
int32_t q_geopositioninfosource_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGeoPositionInfoSource*
/// @param signal const char*
///
int32_t q_geopositioninfosource_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGeoPositionInfoSource*
/// @param callback int32_t func(QGeoPositionInfoSource* self, const char* signal)
///
void q_geopositioninfosource_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGeoPositionInfoSource*
/// @param signal QMetaMethod*
///
bool q_geopositioninfosource_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGeoPositionInfoSource*
/// @param signal QMetaMethod*
///
bool q_geopositioninfosource_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QGeoPositionInfoSource*
/// @param callback bool func(QGeoPositionInfoSource* self, QMetaMethod* signal)
///
void q_geopositioninfosource_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGeoPositionInfoSource*
/// @param callback void func(QGeoPositionInfoSource* self, const char* objectName)
///
void q_geopositioninfosource_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#dtor.QGeoPositionInfoSource)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoPositionInfoSource*
///
void q_geopositioninfosource_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#public-types)

typedef enum {
    QGEOPOSITIONINFOSOURCE_ERROR_ACCESSERROR = 0,
    QGEOPOSITIONINFOSOURCE_ERROR_CLOSEDERROR = 1,
    QGEOPOSITIONINFOSOURCE_ERROR_UNKNOWNSOURCEERROR = 2,
    QGEOPOSITIONINFOSOURCE_ERROR_NOERROR = 3,
    QGEOPOSITIONINFOSOURCE_ERROR_UPDATETIMEOUTERROR = 4
} QGeoPositionInfoSource__Error;

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#public-types)

typedef enum {
    QGEOPOSITIONINFOSOURCE_POSITIONINGMETHOD_NOPOSITIONINGMETHODS = 0,
    QGEOPOSITIONINFOSOURCE_POSITIONINGMETHOD_SATELLITEPOSITIONINGMETHODS = 255,
    QGEOPOSITIONINFOSOURCE_POSITIONINGMETHOD_NONSATELLITEPOSITIONINGMETHODS = -256,
    QGEOPOSITIONINFOSOURCE_POSITIONINGMETHOD_ALLPOSITIONINGMETHODS = -1
} QGeoPositionInfoSource__PositioningMethod;

#endif
