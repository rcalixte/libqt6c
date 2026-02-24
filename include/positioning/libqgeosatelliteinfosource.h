#pragma once
#ifndef SRC_POSITIONING_QT6C_LIBQGEOSATELLITEINFOSOURCE_H
#define SRC_POSITIONING_QT6C_LIBQGEOSATELLITEINFOSOURCE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html)

/// q_geosatelliteinfosource_new constructs a new QGeoSatelliteInfoSource object.
///
/// @param parent QObject*
///
QGeoSatelliteInfoSource* q_geosatelliteinfosource_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGeoSatelliteInfoSource*
///
const QMetaObject* q_geosatelliteinfosource_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback const QMetaObject* func()
///
void q_geosatelliteinfosource_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_geosatelliteinfosource_super_meta_object` instead
///
#define q_geosatelliteinfosource_qbase_meta_object q_geosatelliteinfosource_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QGeoSatelliteInfoSource*
///
const QMetaObject* q_geosatelliteinfosource_super_meta_object(void* self);

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

/// @warning DEPRECATED: Use `q_geosatelliteinfosource_super_metacast` instead
///
#define q_geosatelliteinfosource_qbase_metacast q_geosatelliteinfosource_super_metacast

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

/// @warning DEPRECATED: Use `q_geosatelliteinfosource_super_metacall` instead
///
#define q_geosatelliteinfosource_qbase_metacall q_geosatelliteinfosource_super_metacall

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
/// @param self QGeoSatelliteInfoSource*
///
const char* q_geosatelliteinfosource_source_name(void* self);

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

/// @warning DEPRECATED: Use `q_geosatelliteinfosource_super_set_update_interval` instead
///
#define q_geosatelliteinfosource_qbase_set_update_interval q_geosatelliteinfosource_super_set_update_interval

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
/// @param self QGeoSatelliteInfoSource*
///
int32_t q_geosatelliteinfosource_update_interval(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#minimumUpdateInterval)
///
/// @param self QGeoSatelliteInfoSource*
///
int32_t q_geosatelliteinfosource_minimum_update_interval(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#minimumUpdateInterval)
///
/// Allows for overriding the related default method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback int32_t func()
///
void q_geosatelliteinfosource_on_minimum_update_interval(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_geosatelliteinfosource_super_minimum_update_interval` instead
///
#define q_geosatelliteinfosource_qbase_minimum_update_interval q_geosatelliteinfosource_super_minimum_update_interval

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#minimumUpdateInterval)
///
/// Base class method implementation
///
/// @param self QGeoSatelliteInfoSource*
///
int32_t q_geosatelliteinfosource_super_minimum_update_interval(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#error)
///
/// @param self QGeoSatelliteInfoSource*
///
/// @return enum QGeoSatelliteInfoSource__Error
///
int32_t q_geosatelliteinfosource_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#error)
///
/// Allows for overriding the related default method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback int32_t func()
///
void q_geosatelliteinfosource_on_error(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_geosatelliteinfosource_super_error` instead
///
#define q_geosatelliteinfosource_qbase_error q_geosatelliteinfosource_super_error

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#error)
///
/// Base class method implementation
///
/// @param self QGeoSatelliteInfoSource*
///
/// @return enum QGeoSatelliteInfoSource__Error
///
int32_t q_geosatelliteinfosource_super_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#setBackendProperty)
///
/// @param self QGeoSatelliteInfoSource*
/// @param name const char*
/// @param value QVariant*
///
bool q_geosatelliteinfosource_set_backend_property(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#setBackendProperty)
///
/// Allows for overriding the related default method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback bool func(QGeoSatelliteInfoSource* self, const char* name, QVariant* value)
///
void q_geosatelliteinfosource_on_set_backend_property(void* self, bool (*callback)(void*, const char*, void*));

/// @warning DEPRECATED: Use `q_geosatelliteinfosource_super_set_backend_property` instead
///
#define q_geosatelliteinfosource_qbase_set_backend_property q_geosatelliteinfosource_super_set_backend_property

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#setBackendProperty)
///
/// Base class method implementation
///
/// @param self QGeoSatelliteInfoSource*
/// @param name const char*
/// @param value QVariant*
///
bool q_geosatelliteinfosource_super_set_backend_property(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#backendProperty)
///
/// @param self QGeoSatelliteInfoSource*
/// @param name const char*
///
QVariant* q_geosatelliteinfosource_backend_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#backendProperty)
///
/// Allows for overriding the related default method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback QVariant* func(QGeoSatelliteInfoSource* self, const char* name)
///
void q_geosatelliteinfosource_on_backend_property(void* self, QVariant* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_geosatelliteinfosource_super_backend_property` instead
///
#define q_geosatelliteinfosource_qbase_backend_property q_geosatelliteinfosource_super_backend_property

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#backendProperty)
///
/// Base class method implementation
///
/// @param self QGeoSatelliteInfoSource*
/// @param name const char*
///
QVariant* q_geosatelliteinfosource_super_backend_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#startUpdates)
///
/// @param self QGeoSatelliteInfoSource*
///
void q_geosatelliteinfosource_start_updates(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#startUpdates)
///
/// Allows for overriding the related default method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback void func()
///
void q_geosatelliteinfosource_on_start_updates(void* self, void (*callback)());

/// @warning DEPRECATED: Use `q_geosatelliteinfosource_super_start_updates` instead
///
#define q_geosatelliteinfosource_qbase_start_updates q_geosatelliteinfosource_super_start_updates

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#startUpdates)
///
/// Base class method implementation
///
/// @param self QGeoSatelliteInfoSource*
///
void q_geosatelliteinfosource_super_start_updates(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#stopUpdates)
///
/// @param self QGeoSatelliteInfoSource*
///
void q_geosatelliteinfosource_stop_updates(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#stopUpdates)
///
/// Allows for overriding the related default method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback void func()
///
void q_geosatelliteinfosource_on_stop_updates(void* self, void (*callback)());

/// @warning DEPRECATED: Use `q_geosatelliteinfosource_super_stop_updates` instead
///
#define q_geosatelliteinfosource_qbase_stop_updates q_geosatelliteinfosource_super_stop_updates

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#stopUpdates)
///
/// Base class method implementation
///
/// @param self QGeoSatelliteInfoSource*
///
void q_geosatelliteinfosource_super_stop_updates(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#requestUpdate)
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

/// @warning DEPRECATED: Use `q_geosatelliteinfosource_super_request_update` instead
///
#define q_geosatelliteinfosource_qbase_request_update q_geosatelliteinfosource_super_request_update

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#requestUpdate)
///
/// Base class method implementation
///
/// @param self QGeoSatelliteInfoSource*
/// @param timeout int
///
void q_geosatelliteinfosource_super_request_update(void* self, int timeout);

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
/// @param self QGeoSatelliteInfoSource*
///
const char* q_geosatelliteinfosource_object_name(void* self);

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
/// @param self QGeoSatelliteInfoSource*
///
bool q_geosatelliteinfosource_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGeoSatelliteInfoSource*
///
bool q_geosatelliteinfosource_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGeoSatelliteInfoSource*
///
bool q_geosatelliteinfosource_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGeoSatelliteInfoSource*
///
bool q_geosatelliteinfosource_signals_blocked(void* self);

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
/// @param self QGeoSatelliteInfoSource*
///
QThread* q_geosatelliteinfosource_thread(void* self);

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
/// @param self QGeoSatelliteInfoSource*
///
/// @return libqt_list of QObject*
///
libqt_list q_geosatelliteinfosource_children(void* self);

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
QMetaObject__Connection* q_geosatelliteinfosource_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_geosatelliteinfosource_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGeoSatelliteInfoSource*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_geosatelliteinfosource_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_geosatelliteinfosource_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_geosatelliteinfosource_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoSatelliteInfoSource*
///
bool q_geosatelliteinfosource_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoSatelliteInfoSource*
/// @param receiver QObject*
///
bool q_geosatelliteinfosource_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_geosatelliteinfosource_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGeoSatelliteInfoSource*
///
void q_geosatelliteinfosource_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGeoSatelliteInfoSource*
///
void q_geosatelliteinfosource_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGeoSatelliteInfoSource*
/// @param name const char*
/// @param value QVariant*
///
bool q_geosatelliteinfosource_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGeoSatelliteInfoSource*
/// @param name const char*
///
QVariant* q_geosatelliteinfosource_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QGeoSatelliteInfoSource*
///
const char** q_geosatelliteinfosource_dynamic_property_names(void* self);

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
/// @param self QGeoSatelliteInfoSource*
///
const QBindingStorage* q_geosatelliteinfosource_binding_storage2(void* self);

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
/// @param self QGeoSatelliteInfoSource*
///
QObject* q_geosatelliteinfosource_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGeoSatelliteInfoSource*
/// @param classname const char*
///
bool q_geosatelliteinfosource_inherits(void* self, const char* classname);

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
QMetaObject__Connection* q_geosatelliteinfosource_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_geosatelliteinfosource_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGeoSatelliteInfoSource*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_geosatelliteinfosource_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoSatelliteInfoSource*
/// @param signal const char*
///
bool q_geosatelliteinfosource_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoSatelliteInfoSource*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_geosatelliteinfosource_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoSatelliteInfoSource*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_geosatelliteinfosource_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoSatelliteInfoSource*
/// @param receiver QObject*
/// @param member const char*
///
bool q_geosatelliteinfosource_disconnect23(void* self, void* receiver, const char* member);

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

/// @warning DEPRECATED: Use `q_geosatelliteinfosource_super_event` instead
///
#define q_geosatelliteinfosource_qbase_event q_geosatelliteinfosource_super_event

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

/// @warning DEPRECATED: Use `q_geosatelliteinfosource_super_event_filter` instead
///
#define q_geosatelliteinfosource_qbase_event_filter q_geosatelliteinfosource_super_event_filter

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

/// @warning DEPRECATED: Use `q_geosatelliteinfosource_super_timer_event` instead
///
#define q_geosatelliteinfosource_qbase_timer_event q_geosatelliteinfosource_super_timer_event

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

/// @warning DEPRECATED: Use `q_geosatelliteinfosource_super_child_event` instead
///
#define q_geosatelliteinfosource_qbase_child_event q_geosatelliteinfosource_super_child_event

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

/// @warning DEPRECATED: Use `q_geosatelliteinfosource_super_custom_event` instead
///
#define q_geosatelliteinfosource_qbase_custom_event q_geosatelliteinfosource_super_custom_event

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
void q_geosatelliteinfosource_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_geosatelliteinfosource_super_connect_notify` instead
///
#define q_geosatelliteinfosource_qbase_connect_notify q_geosatelliteinfosource_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param signal QMetaMethod*
///
void q_geosatelliteinfosource_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback void func(QGeoSatelliteInfoSource* self, QMetaMethod* signal)
///
void q_geosatelliteinfosource_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param signal QMetaMethod*
///
void q_geosatelliteinfosource_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_geosatelliteinfosource_super_disconnect_notify` instead
///
#define q_geosatelliteinfosource_qbase_disconnect_notify q_geosatelliteinfosource_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param signal QMetaMethod*
///
void q_geosatelliteinfosource_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback void func(QGeoSatelliteInfoSource* self, QMetaMethod* signal)
///
void q_geosatelliteinfosource_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
///
QObject* q_geosatelliteinfosource_sender(void* self);

/// @warning DEPRECATED: Use `q_geosatelliteinfosource_super_sender` instead
///
#define q_geosatelliteinfosource_qbase_sender q_geosatelliteinfosource_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
///
QObject* q_geosatelliteinfosource_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback QObject* func()
///
void q_geosatelliteinfosource_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
///
int32_t q_geosatelliteinfosource_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_geosatelliteinfosource_super_sender_signal_index` instead
///
#define q_geosatelliteinfosource_qbase_sender_signal_index q_geosatelliteinfosource_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
///
int32_t q_geosatelliteinfosource_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback int32_t func()
///
void q_geosatelliteinfosource_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param signal const char*
///
int32_t q_geosatelliteinfosource_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_geosatelliteinfosource_super_receivers` instead
///
#define q_geosatelliteinfosource_qbase_receivers q_geosatelliteinfosource_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param signal const char*
///
int32_t q_geosatelliteinfosource_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback int32_t func(QGeoSatelliteInfoSource* self, const char* signal)
///
void q_geosatelliteinfosource_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param signal QMetaMethod*
///
bool q_geosatelliteinfosource_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_geosatelliteinfosource_super_is_signal_connected` instead
///
#define q_geosatelliteinfosource_qbase_is_signal_connected q_geosatelliteinfosource_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param signal QMetaMethod*
///
bool q_geosatelliteinfosource_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoSatelliteInfoSource*
/// @param callback bool func(QGeoSatelliteInfoSource* self, QMetaMethod* signal)
///
void q_geosatelliteinfosource_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

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
