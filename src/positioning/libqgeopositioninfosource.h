#pragma once
#ifndef SRC_POSITIONING_QT6C_LIBQGEOPOSITIONINFOSOURCE_H
#define SRC_POSITIONING_QT6C_LIBQGEOPOSITIONINFOSOURCE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html)

/// q_geopositioninfosource_new constructs a new QGeoPositionInfoSource object.
///
/// @param parent QObject*
///
QGeoPositionInfoSource* q_geopositioninfosource_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGeoPositionInfoSource*
///
const QMetaObject* q_geopositioninfosource_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QGeoPositionInfoSource*
/// @param callback const QMetaObject* func()
///
void q_geopositioninfosource_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QGeoPositionInfoSource*
///
const QMetaObject* q_geopositioninfosource_qbase_meta_object(void* self);

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
void* q_geopositioninfosource_qbase_metacast(void* self, const char* param1);

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
int32_t q_geopositioninfosource_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

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
void q_geopositioninfosource_qbase_set_update_interval(void* self, int msec);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#updateInterval)
///
/// @param self QGeoPositionInfoSource*
///
int32_t q_geopositioninfosource_update_interval(void* self);

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
void q_geopositioninfosource_qbase_set_preferred_positioning_methods(void* self, int32_t methods);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#preferredPositioningMethods)
///
/// @param self QGeoPositionInfoSource*
///
/// @return flag of enum QGeoPositionInfoSource__PositioningMethod
///
int32_t q_geopositioninfosource_preferred_positioning_methods(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#lastKnownPosition)
///
/// @param self QGeoPositionInfoSource*
/// @param fromSatellitePositioningMethodsOnly bool
///
QGeoPositionInfo* q_geopositioninfosource_last_known_position(void* self, bool fromSatellitePositioningMethodsOnly);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#lastKnownPosition)
///
/// Allows for overriding the related default method
///
/// @param self QGeoPositionInfoSource*
/// @param callback QGeoPositionInfo* func(QGeoPositionInfoSource* self, bool fromSatellitePositioningMethodsOnly)
///
void q_geopositioninfosource_on_last_known_position(void* self, QGeoPositionInfo* (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#lastKnownPosition)
///
/// Base class method implementation
///
/// @param self QGeoPositionInfoSource*
/// @param fromSatellitePositioningMethodsOnly bool
///
QGeoPositionInfo* q_geopositioninfosource_qbase_last_known_position(void* self, bool fromSatellitePositioningMethodsOnly);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#supportedPositioningMethods)
///
/// @param self QGeoPositionInfoSource*
///
/// @return flag of enum QGeoPositionInfoSource__PositioningMethod
///
int32_t q_geopositioninfosource_supported_positioning_methods(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#supportedPositioningMethods)
///
/// Allows for overriding the related default method
///
/// @param self QGeoPositionInfoSource*
/// @param callback int32_t func()
///
void q_geopositioninfosource_on_supported_positioning_methods(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#supportedPositioningMethods)
///
/// Base class method implementation
///
/// @param self QGeoPositionInfoSource*
///
/// @return flag of enum QGeoPositionInfoSource__PositioningMethod
///
int32_t q_geopositioninfosource_qbase_supported_positioning_methods(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#minimumUpdateInterval)
///
/// @param self QGeoPositionInfoSource*
///
int32_t q_geopositioninfosource_minimum_update_interval(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#minimumUpdateInterval)
///
/// Allows for overriding the related default method
///
/// @param self QGeoPositionInfoSource*
/// @param callback int32_t func()
///
void q_geopositioninfosource_on_minimum_update_interval(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#minimumUpdateInterval)
///
/// Base class method implementation
///
/// @param self QGeoPositionInfoSource*
///
int32_t q_geopositioninfosource_qbase_minimum_update_interval(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#sourceName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoPositionInfoSource*
///
const char* q_geopositioninfosource_source_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setBackendProperty)
///
/// @param self QGeoPositionInfoSource*
/// @param name const char*
/// @param value QVariant*
///
bool q_geopositioninfosource_set_backend_property(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setBackendProperty)
///
/// Allows for overriding the related default method
///
/// @param self QGeoPositionInfoSource*
/// @param callback bool func(QGeoPositionInfoSource* self, const char* name, QVariant* value)
///
void q_geopositioninfosource_on_set_backend_property(void* self, bool (*callback)(void*, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setBackendProperty)
///
/// Base class method implementation
///
/// @param self QGeoPositionInfoSource*
/// @param name const char*
/// @param value QVariant*
///
bool q_geopositioninfosource_qbase_set_backend_property(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#backendProperty)
///
/// @param self QGeoPositionInfoSource*
/// @param name const char*
///
QVariant* q_geopositioninfosource_backend_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#backendProperty)
///
/// Allows for overriding the related default method
///
/// @param self QGeoPositionInfoSource*
/// @param callback QVariant* func(QGeoPositionInfoSource* self, const char* name)
///
void q_geopositioninfosource_on_backend_property(void* self, QVariant* (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#backendProperty)
///
/// Base class method implementation
///
/// @param self QGeoPositionInfoSource*
/// @param name const char*
///
QVariant* q_geopositioninfosource_qbase_backend_property(void* self, const char* name);

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
/// @param self QGeoPositionInfoSource*
///
/// @return enum QGeoPositionInfoSource__Error
///
int32_t q_geopositioninfosource_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#error)
///
/// Allows for overriding the related default method
///
/// @param self QGeoPositionInfoSource*
/// @param callback int32_t func()
///
void q_geopositioninfosource_on_error(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#error)
///
/// Base class method implementation
///
/// @param self QGeoPositionInfoSource*
///
/// @return enum QGeoPositionInfoSource__Error
///
int32_t q_geopositioninfosource_qbase_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#startUpdates)
///
/// @param self QGeoPositionInfoSource*
///
void q_geopositioninfosource_start_updates(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#startUpdates)
///
/// Allows for overriding the related default method
///
/// @param self QGeoPositionInfoSource*
/// @param callback void func()
///
void q_geopositioninfosource_on_start_updates(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#startUpdates)
///
/// Base class method implementation
///
/// @param self QGeoPositionInfoSource*
///
void q_geopositioninfosource_qbase_start_updates(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#stopUpdates)
///
/// @param self QGeoPositionInfoSource*
///
void q_geopositioninfosource_stop_updates(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#stopUpdates)
///
/// Allows for overriding the related default method
///
/// @param self QGeoPositionInfoSource*
/// @param callback void func()
///
void q_geopositioninfosource_on_stop_updates(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#stopUpdates)
///
/// Base class method implementation
///
/// @param self QGeoPositionInfoSource*
///
void q_geopositioninfosource_qbase_stop_updates(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#requestUpdate)
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

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#requestUpdate)
///
/// Base class method implementation
///
/// @param self QGeoPositionInfoSource*
/// @param timeout int
///
void q_geopositioninfosource_qbase_request_update(void* self, int timeout);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#positionUpdated)
///
/// @param self QGeoPositionInfoSource*
/// @param update QGeoPositionInfo*
///
void q_geopositioninfosource_position_updated(void* self, void* update);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#positionUpdated)
///
/// @param self QGeoPositionInfoSource*
/// @param callback void func(QGeoPositionInfoSource* self, QGeoPositionInfo* update)
///
void q_geopositioninfosource_on_position_updated(void* self, void (*callback)(void*, void*));

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
/// @param self QGeoPositionInfoSource*
///
const char* q_geopositioninfosource_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGeoPositionInfoSource*
/// @param name char*
///
void q_geopositioninfosource_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGeoPositionInfoSource*
///
bool q_geopositioninfosource_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGeoPositionInfoSource*
///
bool q_geopositioninfosource_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGeoPositionInfoSource*
///
bool q_geopositioninfosource_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGeoPositionInfoSource*
///
bool q_geopositioninfosource_signals_blocked(void* self);

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
/// @param self QGeoPositionInfoSource*
///
QThread* q_geopositioninfosource_thread(void* self);

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
/// @param self QGeoPositionInfoSource*
///
/// @return libqt_list of QObject*
///
libqt_list q_geopositioninfosource_children(void* self);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_geopositioninfosource_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGeoPositionInfoSource*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_geopositioninfosource_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_geopositioninfosource_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_geopositioninfosource_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGeoPositionInfoSource*
///
void q_geopositioninfosource_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGeoPositionInfoSource*
///
void q_geopositioninfosource_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGeoPositionInfoSource*
/// @param name const char*
/// @param value QVariant*
///
bool q_geopositioninfosource_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGeoPositionInfoSource*
/// @param name const char*
///
QVariant* q_geopositioninfosource_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QGeoPositionInfoSource*
///
const char** q_geopositioninfosource_dynamic_property_names(void* self);

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
/// @param self QGeoPositionInfoSource*
///
const QBindingStorage* q_geopositioninfosource_binding_storage2(void* self);

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
/// @param self QGeoPositionInfoSource*
///
QObject* q_geopositioninfosource_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGeoPositionInfoSource*
/// @param classname const char*
///
bool q_geopositioninfosource_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGeoPositionInfoSource*
///
void q_geopositioninfosource_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGeoPositionInfoSource*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_geopositioninfosource_move_to_thread2(void* self, void* thread, void* param2);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_geopositioninfosource_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGeoPositionInfoSource*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_geopositioninfosource_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

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
bool q_geopositioninfosource_qbase_event(void* self, void* event);

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
bool q_geopositioninfosource_qbase_event_filter(void* self, void* watched, void* event);

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
void q_geopositioninfosource_qbase_timer_event(void* self, void* event);

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
void q_geopositioninfosource_qbase_child_event(void* self, void* event);

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
void q_geopositioninfosource_qbase_custom_event(void* self, void* event);

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
void q_geopositioninfosource_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param signal QMetaMethod*
///
void q_geopositioninfosource_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param callback void func(QGeoPositionInfoSource* self, QMetaMethod* signal)
///
void q_geopositioninfosource_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param signal QMetaMethod*
///
void q_geopositioninfosource_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param signal QMetaMethod*
///
void q_geopositioninfosource_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param callback void func(QGeoPositionInfoSource* self, QMetaMethod* signal)
///
void q_geopositioninfosource_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoPositionInfoSource*
///
QObject* q_geopositioninfosource_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
///
QObject* q_geopositioninfosource_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param callback QObject* func()
///
void q_geopositioninfosource_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoPositionInfoSource*
///
int32_t q_geopositioninfosource_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
///
int32_t q_geopositioninfosource_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param callback int32_t func()
///
void q_geopositioninfosource_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param signal const char*
///
int32_t q_geopositioninfosource_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param signal const char*
///
int32_t q_geopositioninfosource_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param callback int32_t func(QGeoPositionInfoSource* self, const char* signal)
///
void q_geopositioninfosource_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param signal QMetaMethod*
///
bool q_geopositioninfosource_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param signal QMetaMethod*
///
bool q_geopositioninfosource_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoPositionInfoSource*
/// @param callback bool func(QGeoPositionInfoSource* self, QMetaMethod* signal)
///
void q_geopositioninfosource_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

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
