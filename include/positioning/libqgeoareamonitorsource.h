#pragma once
#ifndef SRC_POSITIONING_QT6C_LIBQGEOAREAMONITORSOURCE_H
#define SRC_POSITIONING_QT6C_LIBQGEOAREAMONITORSOURCE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html)

/// q_geoareamonitorsource_new constructs a new QGeoAreaMonitorSource object.
///
/// @param parent QObject*
///
QGeoAreaMonitorSource* q_geoareamonitorsource_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGeoAreaMonitorSource*
///
const QMetaObject* q_geoareamonitorsource_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback const QMetaObject* func()
///
void q_geoareamonitorsource_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QGeoAreaMonitorSource*
///
const QMetaObject* q_geoareamonitorsource_qbase_meta_object(void* self);

/// @param self QGeoAreaMonitorSource*
/// @param param1 const char*
///
void* q_geoareamonitorsource_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback void* func(QGeoAreaMonitorSource* self, const char* param1)
///
void q_geoareamonitorsource_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QGeoAreaMonitorSource*
/// @param param1 const char*
///
void* q_geoareamonitorsource_qbase_metacast(void* self, const char* param1);

/// @param self QGeoAreaMonitorSource*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_geoareamonitorsource_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback int32_t func(QGeoAreaMonitorSource* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_geoareamonitorsource_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QGeoAreaMonitorSource*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_geoareamonitorsource_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_geoareamonitorsource_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#createDefaultSource)
///
/// @param parent QObject*
///
QGeoAreaMonitorSource* q_geoareamonitorsource_create_default_source(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#createSource)
///
/// @param sourceName const char*
/// @param parent QObject*
///
QGeoAreaMonitorSource* q_geoareamonitorsource_create_source(const char* sourceName, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#availableSources)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_geoareamonitorsource_available_sources();

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#setPositionInfoSource)
///
/// @param self QGeoAreaMonitorSource*
/// @param source QGeoPositionInfoSource*
///
void q_geoareamonitorsource_set_position_info_source(void* self, void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#setPositionInfoSource)
///
/// Allows for overriding the related default method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback void func(QGeoAreaMonitorSource* self, QGeoPositionInfoSource* source)
///
void q_geoareamonitorsource_on_set_position_info_source(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#setPositionInfoSource)
///
/// Base class method implementation
///
/// @param self QGeoAreaMonitorSource*
/// @param source QGeoPositionInfoSource*
///
void q_geoareamonitorsource_qbase_set_position_info_source(void* self, void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#positionInfoSource)
///
/// @param self QGeoAreaMonitorSource*
///
QGeoPositionInfoSource* q_geoareamonitorsource_position_info_source(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#positionInfoSource)
///
/// Allows for overriding the related default method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback QGeoPositionInfoSource* func()
///
void q_geoareamonitorsource_on_position_info_source(void* self, QGeoPositionInfoSource* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#positionInfoSource)
///
/// Base class method implementation
///
/// @param self QGeoAreaMonitorSource*
///
QGeoPositionInfoSource* q_geoareamonitorsource_qbase_position_info_source(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#sourceName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoAreaMonitorSource*
///
const char* q_geoareamonitorsource_source_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#error)
///
/// @param self QGeoAreaMonitorSource*
///
/// @return enum QGeoAreaMonitorSource__Error
///
int32_t q_geoareamonitorsource_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#error)
///
/// Allows for overriding the related default method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback int32_t func()
///
void q_geoareamonitorsource_on_error(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#error)
///
/// Base class method implementation
///
/// @param self QGeoAreaMonitorSource*
///
/// @return enum QGeoAreaMonitorSource__Error
///
int32_t q_geoareamonitorsource_qbase_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#supportedAreaMonitorFeatures)
///
/// @param self QGeoAreaMonitorSource*
///
/// @return flag of enum QGeoAreaMonitorSource__AreaMonitorFeature
///
int32_t q_geoareamonitorsource_supported_area_monitor_features(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#supportedAreaMonitorFeatures)
///
/// Allows for overriding the related default method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback int32_t func()
///
void q_geoareamonitorsource_on_supported_area_monitor_features(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#supportedAreaMonitorFeatures)
///
/// Base class method implementation
///
/// @param self QGeoAreaMonitorSource*
///
/// @return flag of enum QGeoAreaMonitorSource__AreaMonitorFeature
///
int32_t q_geoareamonitorsource_qbase_supported_area_monitor_features(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#startMonitoring)
///
/// @param self QGeoAreaMonitorSource*
/// @param monitor QGeoAreaMonitorInfo*
///
bool q_geoareamonitorsource_start_monitoring(void* self, void* monitor);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#startMonitoring)
///
/// Allows for overriding the related default method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback bool func(QGeoAreaMonitorSource* self, QGeoAreaMonitorInfo* monitor)
///
void q_geoareamonitorsource_on_start_monitoring(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#startMonitoring)
///
/// Base class method implementation
///
/// @param self QGeoAreaMonitorSource*
/// @param monitor QGeoAreaMonitorInfo*
///
bool q_geoareamonitorsource_qbase_start_monitoring(void* self, void* monitor);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#stopMonitoring)
///
/// @param self QGeoAreaMonitorSource*
/// @param monitor QGeoAreaMonitorInfo*
///
bool q_geoareamonitorsource_stop_monitoring(void* self, void* monitor);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#stopMonitoring)
///
/// Allows for overriding the related default method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback bool func(QGeoAreaMonitorSource* self, QGeoAreaMonitorInfo* monitor)
///
void q_geoareamonitorsource_on_stop_monitoring(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#stopMonitoring)
///
/// Base class method implementation
///
/// @param self QGeoAreaMonitorSource*
/// @param monitor QGeoAreaMonitorInfo*
///
bool q_geoareamonitorsource_qbase_stop_monitoring(void* self, void* monitor);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#requestUpdate)
///
/// @param self QGeoAreaMonitorSource*
/// @param monitor QGeoAreaMonitorInfo*
/// @param signal const char*
///
bool q_geoareamonitorsource_request_update(void* self, void* monitor, const char* signal);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#requestUpdate)
///
/// Allows for overriding the related default method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback bool func(QGeoAreaMonitorSource* self, QGeoAreaMonitorInfo* monitor, const char* signal)
///
void q_geoareamonitorsource_on_request_update(void* self, bool (*callback)(void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#requestUpdate)
///
/// Base class method implementation
///
/// @param self QGeoAreaMonitorSource*
/// @param monitor QGeoAreaMonitorInfo*
/// @param signal const char*
///
bool q_geoareamonitorsource_qbase_request_update(void* self, void* monitor, const char* signal);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#activeMonitors)
///
/// @param self QGeoAreaMonitorSource*
///
/// @return libqt_list of QGeoAreaMonitorInfo*
///
libqt_list q_geoareamonitorsource_active_monitors(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#activeMonitors)
///
/// Allows for overriding the related default method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback QGeoAreaMonitorInfo** func()
///
void q_geoareamonitorsource_on_active_monitors(void* self, QGeoAreaMonitorInfo** (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#activeMonitors)
///
/// Base class method implementation
///
/// @param self QGeoAreaMonitorSource*
///
/// @return libqt_list of QGeoAreaMonitorInfo*
///
libqt_list q_geoareamonitorsource_qbase_active_monitors(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#activeMonitors)
///
/// @param self QGeoAreaMonitorSource*
/// @param lookupArea QGeoShape*
///
/// @return libqt_list of QGeoAreaMonitorInfo*
///
libqt_list q_geoareamonitorsource_active_monitors2(void* self, void* lookupArea);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#activeMonitors)
///
/// Allows for overriding the related default method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback QGeoAreaMonitorInfo** func(QGeoAreaMonitorSource* self, QGeoShape* lookupArea)
///
void q_geoareamonitorsource_on_active_monitors2(void* self, QGeoAreaMonitorInfo** (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#activeMonitors)
///
/// Base class method implementation
///
/// @param self QGeoAreaMonitorSource*
/// @param lookupArea QGeoShape*
///
/// @return libqt_list of QGeoAreaMonitorInfo*
///
libqt_list q_geoareamonitorsource_qbase_active_monitors2(void* self, void* lookupArea);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#setBackendProperty)
///
/// @param self QGeoAreaMonitorSource*
/// @param name const char*
/// @param value QVariant*
///
bool q_geoareamonitorsource_set_backend_property(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#setBackendProperty)
///
/// Allows for overriding the related default method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback bool func(QGeoAreaMonitorSource* self, const char* name, QVariant* value)
///
void q_geoareamonitorsource_on_set_backend_property(void* self, bool (*callback)(void*, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#setBackendProperty)
///
/// Base class method implementation
///
/// @param self QGeoAreaMonitorSource*
/// @param name const char*
/// @param value QVariant*
///
bool q_geoareamonitorsource_qbase_set_backend_property(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#backendProperty)
///
/// @param self QGeoAreaMonitorSource*
/// @param name const char*
///
QVariant* q_geoareamonitorsource_backend_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#backendProperty)
///
/// Allows for overriding the related default method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback QVariant* func(QGeoAreaMonitorSource* self, const char* name)
///
void q_geoareamonitorsource_on_backend_property(void* self, QVariant* (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#backendProperty)
///
/// Base class method implementation
///
/// @param self QGeoAreaMonitorSource*
/// @param name const char*
///
QVariant* q_geoareamonitorsource_qbase_backend_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#areaEntered)
///
/// @param self QGeoAreaMonitorSource*
/// @param monitor QGeoAreaMonitorInfo*
/// @param update QGeoPositionInfo*
///
void q_geoareamonitorsource_area_entered(void* self, void* monitor, void* update);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#areaEntered)
///
/// @param self QGeoAreaMonitorSource*
/// @param callback void func(QGeoAreaMonitorSource* self, QGeoAreaMonitorInfo* monitor, QGeoPositionInfo* update)
///
void q_geoareamonitorsource_on_area_entered(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#areaExited)
///
/// @param self QGeoAreaMonitorSource*
/// @param monitor QGeoAreaMonitorInfo*
/// @param update QGeoPositionInfo*
///
void q_geoareamonitorsource_area_exited(void* self, void* monitor, void* update);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#areaExited)
///
/// @param self QGeoAreaMonitorSource*
/// @param callback void func(QGeoAreaMonitorSource* self, QGeoAreaMonitorInfo* monitor, QGeoPositionInfo* update)
///
void q_geoareamonitorsource_on_area_exited(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#monitorExpired)
///
/// @param self QGeoAreaMonitorSource*
/// @param monitor QGeoAreaMonitorInfo*
///
void q_geoareamonitorsource_monitor_expired(void* self, void* monitor);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#monitorExpired)
///
/// @param self QGeoAreaMonitorSource*
/// @param callback void func(QGeoAreaMonitorSource* self, QGeoAreaMonitorInfo* monitor)
///
void q_geoareamonitorsource_on_monitor_expired(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#errorOccurred)
///
/// @param self QGeoAreaMonitorSource*
/// @param error enum QGeoAreaMonitorSource__Error
///
void q_geoareamonitorsource_error_occurred(void* self, int32_t error);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#errorOccurred)
///
/// @param self QGeoAreaMonitorSource*
/// @param callback void func(QGeoAreaMonitorSource* self, enum QGeoAreaMonitorSource__Error error)
///
void q_geoareamonitorsource_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_geoareamonitorsource_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_geoareamonitorsource_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoAreaMonitorSource*
///
const char* q_geoareamonitorsource_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGeoAreaMonitorSource*
/// @param name char*
///
void q_geoareamonitorsource_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGeoAreaMonitorSource*
///
bool q_geoareamonitorsource_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGeoAreaMonitorSource*
///
bool q_geoareamonitorsource_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGeoAreaMonitorSource*
///
bool q_geoareamonitorsource_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGeoAreaMonitorSource*
///
bool q_geoareamonitorsource_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGeoAreaMonitorSource*
/// @param b bool
///
bool q_geoareamonitorsource_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGeoAreaMonitorSource*
///
QThread* q_geoareamonitorsource_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGeoAreaMonitorSource*
/// @param thread QThread*
///
bool q_geoareamonitorsource_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoAreaMonitorSource*
/// @param interval int
///
int32_t q_geoareamonitorsource_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoAreaMonitorSource*
/// @param time int64_t of nanoseconds
///
int32_t q_geoareamonitorsource_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGeoAreaMonitorSource*
/// @param id int
///
void q_geoareamonitorsource_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGeoAreaMonitorSource*
/// @param id enum Qt__TimerId
///
void q_geoareamonitorsource_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGeoAreaMonitorSource*
///
/// @return libqt_list of QObject*
///
libqt_list q_geoareamonitorsource_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGeoAreaMonitorSource*
/// @param parent QObject*
///
void q_geoareamonitorsource_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGeoAreaMonitorSource*
/// @param filterObj QObject*
///
void q_geoareamonitorsource_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGeoAreaMonitorSource*
/// @param obj QObject*
///
void q_geoareamonitorsource_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_geoareamonitorsource_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_geoareamonitorsource_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGeoAreaMonitorSource*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_geoareamonitorsource_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_geoareamonitorsource_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_geoareamonitorsource_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoAreaMonitorSource*
///
bool q_geoareamonitorsource_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoAreaMonitorSource*
/// @param receiver QObject*
///
bool q_geoareamonitorsource_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_geoareamonitorsource_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGeoAreaMonitorSource*
///
void q_geoareamonitorsource_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGeoAreaMonitorSource*
///
void q_geoareamonitorsource_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGeoAreaMonitorSource*
/// @param name const char*
/// @param value QVariant*
///
bool q_geoareamonitorsource_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGeoAreaMonitorSource*
/// @param name const char*
///
QVariant* q_geoareamonitorsource_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QGeoAreaMonitorSource*
///
const char** q_geoareamonitorsource_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGeoAreaMonitorSource*
///
QBindingStorage* q_geoareamonitorsource_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGeoAreaMonitorSource*
///
const QBindingStorage* q_geoareamonitorsource_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoAreaMonitorSource*
///
void q_geoareamonitorsource_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoAreaMonitorSource*
/// @param callback void func(QGeoAreaMonitorSource* self)
///
void q_geoareamonitorsource_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGeoAreaMonitorSource*
///
QObject* q_geoareamonitorsource_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGeoAreaMonitorSource*
/// @param classname const char*
///
bool q_geoareamonitorsource_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGeoAreaMonitorSource*
///
void q_geoareamonitorsource_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoAreaMonitorSource*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_geoareamonitorsource_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoAreaMonitorSource*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_geoareamonitorsource_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_geoareamonitorsource_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_geoareamonitorsource_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGeoAreaMonitorSource*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_geoareamonitorsource_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoAreaMonitorSource*
/// @param signal const char*
///
bool q_geoareamonitorsource_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoAreaMonitorSource*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_geoareamonitorsource_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoAreaMonitorSource*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_geoareamonitorsource_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoAreaMonitorSource*
/// @param receiver QObject*
/// @param member const char*
///
bool q_geoareamonitorsource_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoAreaMonitorSource*
/// @param param1 QObject*
///
void q_geoareamonitorsource_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoAreaMonitorSource*
/// @param callback void func(QGeoAreaMonitorSource* self, QObject* param1)
///
void q_geoareamonitorsource_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param event QEvent*
///
bool q_geoareamonitorsource_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param event QEvent*
///
bool q_geoareamonitorsource_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback bool func(QGeoAreaMonitorSource* self, QEvent* event)
///
void q_geoareamonitorsource_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_geoareamonitorsource_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_geoareamonitorsource_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback bool func(QGeoAreaMonitorSource* self, QObject* watched, QEvent* event)
///
void q_geoareamonitorsource_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param event QTimerEvent*
///
void q_geoareamonitorsource_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param event QTimerEvent*
///
void q_geoareamonitorsource_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback void func(QGeoAreaMonitorSource* self, QTimerEvent* event)
///
void q_geoareamonitorsource_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param event QChildEvent*
///
void q_geoareamonitorsource_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param event QChildEvent*
///
void q_geoareamonitorsource_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback void func(QGeoAreaMonitorSource* self, QChildEvent* event)
///
void q_geoareamonitorsource_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param event QEvent*
///
void q_geoareamonitorsource_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param event QEvent*
///
void q_geoareamonitorsource_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback void func(QGeoAreaMonitorSource* self, QEvent* event)
///
void q_geoareamonitorsource_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param signal QMetaMethod*
///
void q_geoareamonitorsource_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param signal QMetaMethod*
///
void q_geoareamonitorsource_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback void func(QGeoAreaMonitorSource* self, QMetaMethod* signal)
///
void q_geoareamonitorsource_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param signal QMetaMethod*
///
void q_geoareamonitorsource_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param signal QMetaMethod*
///
void q_geoareamonitorsource_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback void func(QGeoAreaMonitorSource* self, QMetaMethod* signal)
///
void q_geoareamonitorsource_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
///
QObject* q_geoareamonitorsource_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
///
QObject* q_geoareamonitorsource_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback QObject* func()
///
void q_geoareamonitorsource_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
///
int32_t q_geoareamonitorsource_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
///
int32_t q_geoareamonitorsource_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback int32_t func()
///
void q_geoareamonitorsource_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param signal const char*
///
int32_t q_geoareamonitorsource_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param signal const char*
///
int32_t q_geoareamonitorsource_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback int32_t func(QGeoAreaMonitorSource* self, const char* signal)
///
void q_geoareamonitorsource_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param signal QMetaMethod*
///
bool q_geoareamonitorsource_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param signal QMetaMethod*
///
bool q_geoareamonitorsource_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoAreaMonitorSource*
/// @param callback bool func(QGeoAreaMonitorSource* self, QMetaMethod* signal)
///
void q_geoareamonitorsource_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGeoAreaMonitorSource*
/// @param callback void func(QGeoAreaMonitorSource* self, const char* objectName)
///
void q_geoareamonitorsource_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#dtor.QGeoAreaMonitorSource)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoAreaMonitorSource*
///
void q_geoareamonitorsource_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#public-types)

typedef enum {
    QGEOAREAMONITORSOURCE_ERROR_ACCESSERROR = 0,
    QGEOAREAMONITORSOURCE_ERROR_INSUFFICIENTPOSITIONINFO = 1,
    QGEOAREAMONITORSOURCE_ERROR_UNKNOWNSOURCEERROR = 2,
    QGEOAREAMONITORSOURCE_ERROR_NOERROR = 3
} QGeoAreaMonitorSource__Error;

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorsource.html#public-types)

typedef enum {
    QGEOAREAMONITORSOURCE_AREAMONITORFEATURE_PERSISTENTAREAMONITORFEATURE = 1,
    QGEOAREAMONITORSOURCE_AREAMONITORFEATURE_ANYAREAMONITORFEATURE = -1
} QGeoAreaMonitorSource__AreaMonitorFeature;

#endif
