#pragma once
#ifndef POSITIONING_LIBQNMEAPOSITIONINFOSOURCE_H
#define POSITIONING_LIBQNMEAPOSITIONINFOSOURCE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html)

/// q_nmeapositioninfosource_new constructs a new QNmeaPositionInfoSource object.
///
/// @param updateMode enum QNmeaPositionInfoSource__UpdateMode
///
QNmeaPositionInfoSource* q_nmeapositioninfosource_new(int32_t updateMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html)

/// q_nmeapositioninfosource_new2 constructs a new QNmeaPositionInfoSource object.
///
/// @param updateMode enum QNmeaPositionInfoSource__UpdateMode
/// @param parent QObject*
///
QNmeaPositionInfoSource* q_nmeapositioninfosource_new2(int32_t updateMode, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QNmeaPositionInfoSource*
///
const QMetaObject* q_nmeapositioninfosource_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QNmeaPositionInfoSource*
/// @param callback const QMetaObject* func(const QNmeaPositionInfoSource* self)
///
void q_nmeapositioninfosource_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QNmeaPositionInfoSource*
///
const QMetaObject* q_nmeapositioninfosource_super_meta_object(const void* self);

/// @param self QNmeaPositionInfoSource*
/// @param param1 const char*
///
void* q_nmeapositioninfosource_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QNmeaPositionInfoSource*
/// @param callback void* func(QNmeaPositionInfoSource* self, const char* param1)
///
void q_nmeapositioninfosource_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QNmeaPositionInfoSource*
/// @param param1 const char*
///
void* q_nmeapositioninfosource_super_metacast(void* self, const char* param1);

/// @param self QNmeaPositionInfoSource*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_nmeapositioninfosource_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QNmeaPositionInfoSource*
/// @param callback int32_t func(QNmeaPositionInfoSource* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_nmeapositioninfosource_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QNmeaPositionInfoSource*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_nmeapositioninfosource_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_nmeapositioninfosource_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setUserEquivalentRangeError)
///
/// @param self QNmeaPositionInfoSource*
/// @param uere double
///
void q_nmeapositioninfosource_set_user_equivalent_range_error(void* self, double uere);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#userEquivalentRangeError)
///
/// @param self const QNmeaPositionInfoSource*
///
double q_nmeapositioninfosource_user_equivalent_range_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#updateMode)
///
/// @param self const QNmeaPositionInfoSource*
///
/// @return enum QNmeaPositionInfoSource__UpdateMode
///
int32_t q_nmeapositioninfosource_update_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setDevice)
///
/// @param self QNmeaPositionInfoSource*
/// @param source QIODevice*
///
void q_nmeapositioninfosource_set_device(void* self, void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#device)
///
/// @param self const QNmeaPositionInfoSource*
///
QIODevice* q_nmeapositioninfosource_device(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setUpdateInterval)
///
/// @param self QNmeaPositionInfoSource*
/// @param msec int
///
void q_nmeapositioninfosource_set_update_interval(void* self, int msec);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setUpdateInterval)
///
/// Allows for overriding the related default method
///
/// @param self QNmeaPositionInfoSource*
/// @param callback void func(QNmeaPositionInfoSource* self, int msec)
///
void q_nmeapositioninfosource_on_set_update_interval(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setUpdateInterval)
///
/// Base class method implementation
///
/// @param self QNmeaPositionInfoSource*
/// @param msec int
///
void q_nmeapositioninfosource_super_set_update_interval(void* self, int msec);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#lastKnownPosition)
///
/// @param self const QNmeaPositionInfoSource*
/// @param fromSatellitePositioningMethodsOnly bool
///
QGeoPositionInfo* q_nmeapositioninfosource_last_known_position(const void* self, bool fromSatellitePositioningMethodsOnly);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#lastKnownPosition)
///
/// Allows for overriding the related default method
///
/// @param self const QNmeaPositionInfoSource*
/// @param callback QGeoPositionInfo* func(const QNmeaPositionInfoSource* self, bool fromSatellitePositioningMethodsOnly)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_nmeapositioninfosource_on_last_known_position(const void* self, QGeoPositionInfo* (*callback)(const void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#lastKnownPosition)
///
/// Base class method implementation
///
/// @param self const QNmeaPositionInfoSource*
/// @param fromSatellitePositioningMethodsOnly bool
///
QGeoPositionInfo* q_nmeapositioninfosource_super_last_known_position(const void* self, bool fromSatellitePositioningMethodsOnly);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#supportedPositioningMethods)
///
/// @param self const QNmeaPositionInfoSource*
///
/// @return flag of enum QGeoPositionInfoSource__PositioningMethod
///
int32_t q_nmeapositioninfosource_supported_positioning_methods(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#supportedPositioningMethods)
///
/// Allows for overriding the related default method
///
/// @param self const QNmeaPositionInfoSource*
/// @param callback int32_t func(const QNmeaPositionInfoSource* self)
///
void q_nmeapositioninfosource_on_supported_positioning_methods(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#supportedPositioningMethods)
///
/// Base class method implementation
///
/// @param self const QNmeaPositionInfoSource*
///
/// @return flag of enum QGeoPositionInfoSource__PositioningMethod
///
int32_t q_nmeapositioninfosource_super_supported_positioning_methods(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#minimumUpdateInterval)
///
/// @param self const QNmeaPositionInfoSource*
///
int32_t q_nmeapositioninfosource_minimum_update_interval(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#minimumUpdateInterval)
///
/// Allows for overriding the related default method
///
/// @param self const QNmeaPositionInfoSource*
/// @param callback int32_t func(const QNmeaPositionInfoSource* self)
///
void q_nmeapositioninfosource_on_minimum_update_interval(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#minimumUpdateInterval)
///
/// Base class method implementation
///
/// @param self const QNmeaPositionInfoSource*
///
int32_t q_nmeapositioninfosource_super_minimum_update_interval(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#error)
///
/// @param self const QNmeaPositionInfoSource*
///
/// @return enum QGeoPositionInfoSource__Error
///
int32_t q_nmeapositioninfosource_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#error)
///
/// Allows for overriding the related default method
///
/// @param self const QNmeaPositionInfoSource*
/// @param callback int32_t func(const QNmeaPositionInfoSource* self)
///
void q_nmeapositioninfosource_on_error(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#error)
///
/// Base class method implementation
///
/// @param self const QNmeaPositionInfoSource*
///
/// @return enum QGeoPositionInfoSource__Error
///
int32_t q_nmeapositioninfosource_super_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#startUpdates)
///
/// @param self QNmeaPositionInfoSource*
///
void q_nmeapositioninfosource_start_updates(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#startUpdates)
///
/// Allows for overriding the related default method
///
/// @param self QNmeaPositionInfoSource*
/// @param callback void func(QNmeaPositionInfoSource* self)
///
void q_nmeapositioninfosource_on_start_updates(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#startUpdates)
///
/// Base class method implementation
///
/// @param self QNmeaPositionInfoSource*
///
void q_nmeapositioninfosource_super_start_updates(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#stopUpdates)
///
/// @param self QNmeaPositionInfoSource*
///
void q_nmeapositioninfosource_stop_updates(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#stopUpdates)
///
/// Allows for overriding the related default method
///
/// @param self QNmeaPositionInfoSource*
/// @param callback void func(QNmeaPositionInfoSource* self)
///
void q_nmeapositioninfosource_on_stop_updates(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#stopUpdates)
///
/// Base class method implementation
///
/// @param self QNmeaPositionInfoSource*
///
void q_nmeapositioninfosource_super_stop_updates(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#requestUpdate)
///
/// @param self QNmeaPositionInfoSource*
/// @param timeout int
///
void q_nmeapositioninfosource_request_update(void* self, int timeout);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#requestUpdate)
///
/// Allows for overriding the related default method
///
/// @param self QNmeaPositionInfoSource*
/// @param callback void func(QNmeaPositionInfoSource* self, int timeout)
///
void q_nmeapositioninfosource_on_request_update(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#requestUpdate)
///
/// Base class method implementation
///
/// @param self QNmeaPositionInfoSource*
/// @param timeout int
///
void q_nmeapositioninfosource_super_request_update(void* self, int timeout);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#parsePosInfoFromNmeaData)
///
/// @param self QNmeaPositionInfoSource*
/// @param data const char*
/// @param size int
/// @param posInfo QGeoPositionInfo*
/// @param hasFix bool*
///
bool q_nmeapositioninfosource_parse_pos_info_from_nmea_data(void* self, const char* data, int size, void* posInfo, bool* hasFix);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#parsePosInfoFromNmeaData)
///
/// Allows for overriding the related default method
///
/// @param self QNmeaPositionInfoSource*
/// @param callback bool func(QNmeaPositionInfoSource* self, const char* data, int size, QGeoPositionInfo* posInfo, bool* hasFix)
///
void q_nmeapositioninfosource_on_parse_pos_info_from_nmea_data(void* self, bool (*callback)(void*, const char*, int, void*, bool*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#parsePosInfoFromNmeaData)
///
/// Base class method implementation
///
/// @param self QNmeaPositionInfoSource*
/// @param data const char*
/// @param size int
/// @param posInfo QGeoPositionInfo*
/// @param hasFix bool*
///
bool q_nmeapositioninfosource_super_parse_pos_info_from_nmea_data(void* self, const char* data, int size, void* posInfo, bool* hasFix);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#parsePosInfoFromNmeaData)
///
/// @param self QNmeaPositionInfoSource*
/// @param data char*
/// @param posInfo QGeoPositionInfo*
/// @param hasFix bool*
///
bool q_nmeapositioninfosource_parse_pos_info_from_nmea_data2(void* self, char* data, void* posInfo, bool* hasFix);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#setError)
///
/// @param self QNmeaPositionInfoSource*
/// @param positionError enum QGeoPositionInfoSource__Error
///
void q_nmeapositioninfosource_set_error(void* self, int32_t positionError);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_nmeapositioninfosource_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_nmeapositioninfosource_tr3(const char* s, const char* c, int n);

/// Inherited from QGeoPositionInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#updateInterval)
///
/// @param self const QNmeaPositionInfoSource*
///
int32_t q_nmeapositioninfosource_update_interval(const void* self);

/// Inherited from QGeoPositionInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#preferredPositioningMethods)
///
/// @param self const QNmeaPositionInfoSource*
///
/// @return flag of enum QGeoPositionInfoSource__PositioningMethod
///
int32_t q_nmeapositioninfosource_preferred_positioning_methods(const void* self);

/// Inherited from QGeoPositionInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#sourceName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QNmeaPositionInfoSource*
///
const char* q_nmeapositioninfosource_source_name(const void* self);

/// Inherited from QGeoPositionInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#createDefaultSource)
///
/// @param parent QObject*
///
QGeoPositionInfoSource* q_nmeapositioninfosource_create_default_source(void* parent);

/// Inherited from QGeoPositionInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#createDefaultSource)
///
/// @param parameters libqt_map of const char* to QVariant*
/// @param parent QObject*
///
QGeoPositionInfoSource* q_nmeapositioninfosource_create_default_source2(libqt_map parameters, void* parent);

/// Inherited from QGeoPositionInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#createSource)
///
/// @param sourceName const char*
/// @param parent QObject*
///
QGeoPositionInfoSource* q_nmeapositioninfosource_create_source(const char* sourceName, void* parent);

/// Inherited from QGeoPositionInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#createSource)
///
/// @param sourceName const char*
/// @param parameters libqt_map of const char* to QVariant*
/// @param parent QObject*
///
QGeoPositionInfoSource* q_nmeapositioninfosource_create_source2(const char* sourceName, libqt_map parameters, void* parent);

/// Inherited from QGeoPositionInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#availableSources)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_nmeapositioninfosource_available_sources();

/// Inherited from QGeoPositionInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#positionUpdated)
///
/// @param self QNmeaPositionInfoSource*
/// @param update QGeoPositionInfo*
///
void q_nmeapositioninfosource_position_updated(void* self, const void* update);

/// Inherited from QGeoPositionInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#positionUpdated)
///
/// @param self QNmeaPositionInfoSource*
/// @param callback void func(QNmeaPositionInfoSource* self, QGeoPositionInfo* update)
///
void q_nmeapositioninfosource_on_position_updated(void* self, void (*callback)(void*, const void*));

/// Inherited from QGeoPositionInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#errorOccurred)
///
/// @param self QNmeaPositionInfoSource*
/// @param param1 enum QGeoPositionInfoSource__Error
///
void q_nmeapositioninfosource_error_occurred(void* self, int32_t param1);

/// Inherited from QGeoPositionInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#errorOccurred)
///
/// @param self QNmeaPositionInfoSource*
/// @param callback void func(QNmeaPositionInfoSource* self, enum QGeoPositionInfoSource__Error param1)
///
void q_nmeapositioninfosource_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// Inherited from QGeoPositionInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#supportedPositioningMethodsChanged)
///
/// @param self QNmeaPositionInfoSource*
///
void q_nmeapositioninfosource_supported_positioning_methods_changed(void* self);

/// Inherited from QGeoPositionInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#supportedPositioningMethodsChanged)
///
/// @param self QNmeaPositionInfoSource*
/// @param callback void func(QNmeaPositionInfoSource* self)
///
void q_nmeapositioninfosource_on_supported_positioning_methods_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QNmeaPositionInfoSource*
///
const char* q_nmeapositioninfosource_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QNmeaPositionInfoSource*
/// @param name const char*
///
void q_nmeapositioninfosource_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QNmeaPositionInfoSource*
///
bool q_nmeapositioninfosource_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QNmeaPositionInfoSource*
///
bool q_nmeapositioninfosource_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QNmeaPositionInfoSource*
///
bool q_nmeapositioninfosource_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QNmeaPositionInfoSource*
///
bool q_nmeapositioninfosource_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QNmeaPositionInfoSource*
/// @param b bool
///
bool q_nmeapositioninfosource_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QNmeaPositionInfoSource*
///
QThread* q_nmeapositioninfosource_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QNmeaPositionInfoSource*
/// @param thread QThread*
///
bool q_nmeapositioninfosource_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QNmeaPositionInfoSource*
/// @param interval int
///
int32_t q_nmeapositioninfosource_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QNmeaPositionInfoSource*
/// @param time int64_t of nanoseconds
///
int32_t q_nmeapositioninfosource_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QNmeaPositionInfoSource*
/// @param id int
///
void q_nmeapositioninfosource_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QNmeaPositionInfoSource*
/// @param id enum Qt__TimerId
///
void q_nmeapositioninfosource_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QNmeaPositionInfoSource*
///
/// @return libqt_list of QObject*
///
libqt_list q_nmeapositioninfosource_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QNmeaPositionInfoSource*
/// @param parent QObject*
///
void q_nmeapositioninfosource_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QNmeaPositionInfoSource*
/// @param filterObj QObject*
///
void q_nmeapositioninfosource_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QNmeaPositionInfoSource*
/// @param obj QObject*
///
void q_nmeapositioninfosource_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_nmeapositioninfosource_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_nmeapositioninfosource_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QNmeaPositionInfoSource*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_nmeapositioninfosource_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_nmeapositioninfosource_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_nmeapositioninfosource_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QNmeaPositionInfoSource*
///
bool q_nmeapositioninfosource_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QNmeaPositionInfoSource*
/// @param receiver QObject*
///
bool q_nmeapositioninfosource_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_nmeapositioninfosource_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QNmeaPositionInfoSource*
///
void q_nmeapositioninfosource_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QNmeaPositionInfoSource*
///
void q_nmeapositioninfosource_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QNmeaPositionInfoSource*
/// @param name const char*
/// @param value QVariant*
///
bool q_nmeapositioninfosource_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QNmeaPositionInfoSource*
/// @param name const char*
///
QVariant* q_nmeapositioninfosource_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QNmeaPositionInfoSource*
///
const char** q_nmeapositioninfosource_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QNmeaPositionInfoSource*
///
QBindingStorage* q_nmeapositioninfosource_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QNmeaPositionInfoSource*
///
const QBindingStorage* q_nmeapositioninfosource_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNmeaPositionInfoSource*
///
void q_nmeapositioninfosource_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNmeaPositionInfoSource*
/// @param callback void func(QNmeaPositionInfoSource* self)
///
void q_nmeapositioninfosource_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QNmeaPositionInfoSource*
///
QObject* q_nmeapositioninfosource_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QNmeaPositionInfoSource*
/// @param classname const char*
///
bool q_nmeapositioninfosource_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QNmeaPositionInfoSource*
///
void q_nmeapositioninfosource_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QNmeaPositionInfoSource*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_nmeapositioninfosource_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QNmeaPositionInfoSource*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_nmeapositioninfosource_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_nmeapositioninfosource_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_nmeapositioninfosource_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QNmeaPositionInfoSource*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_nmeapositioninfosource_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QNmeaPositionInfoSource*
/// @param signal const char*
///
bool q_nmeapositioninfosource_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QNmeaPositionInfoSource*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_nmeapositioninfosource_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QNmeaPositionInfoSource*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_nmeapositioninfosource_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QNmeaPositionInfoSource*
/// @param receiver QObject*
/// @param member const char*
///
bool q_nmeapositioninfosource_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNmeaPositionInfoSource*
/// @param param1 QObject*
///
void q_nmeapositioninfosource_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNmeaPositionInfoSource*
/// @param callback void func(QNmeaPositionInfoSource* self, QObject* param1)
///
void q_nmeapositioninfosource_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QGeoPositionInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setPreferredPositioningMethods)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param methods flag of enum QGeoPositionInfoSource__PositioningMethod
///
void q_nmeapositioninfosource_set_preferred_positioning_methods(void* self, int32_t methods);

/// Inherited from QGeoPositionInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setPreferredPositioningMethods)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param methods flag of enum QGeoPositionInfoSource__PositioningMethod
///
void q_nmeapositioninfosource_super_set_preferred_positioning_methods(void* self, int32_t methods);

/// Inherited from QGeoPositionInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setPreferredPositioningMethods)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param callback void func(QNmeaPositionInfoSource* self, flag of enum QGeoPositionInfoSource__PositioningMethod methods)
///
void q_nmeapositioninfosource_on_set_preferred_positioning_methods(void* self, void (*callback)(void*, int32_t));

/// Inherited from QGeoPositionInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setBackendProperty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param name const char*
/// @param value QVariant*
///
bool q_nmeapositioninfosource_set_backend_property(void* self, const char* name, const void* value);

/// Inherited from QGeoPositionInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setBackendProperty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param name const char*
/// @param value QVariant*
///
bool q_nmeapositioninfosource_super_set_backend_property(void* self, const char* name, const void* value);

/// Inherited from QGeoPositionInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#setBackendProperty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param callback bool func(QNmeaPositionInfoSource* self, const char* name, QVariant* value)
///
void q_nmeapositioninfosource_on_set_backend_property(void* self, bool (*callback)(void*, const char*, const void*));

/// Inherited from QGeoPositionInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#backendProperty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QNmeaPositionInfoSource*
/// @param name const char*
///
QVariant* q_nmeapositioninfosource_backend_property(const void* self, const char* name);

/// Inherited from QGeoPositionInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#backendProperty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QNmeaPositionInfoSource*
/// @param name const char*
///
QVariant* q_nmeapositioninfosource_super_backend_property(const void* self, const char* name);

/// Inherited from QGeoPositionInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosource.html#backendProperty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QNmeaPositionInfoSource*
/// @param callback QVariant* func(QNmeaPositionInfoSource* self, const char* name)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_nmeapositioninfosource_on_backend_property(const void* self, QVariant* (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param event QEvent*
///
bool q_nmeapositioninfosource_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param event QEvent*
///
bool q_nmeapositioninfosource_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param callback bool func(QNmeaPositionInfoSource* self, QEvent* event)
///
void q_nmeapositioninfosource_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_nmeapositioninfosource_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_nmeapositioninfosource_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param callback bool func(QNmeaPositionInfoSource* self, QObject* watched, QEvent* event)
///
void q_nmeapositioninfosource_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param event QTimerEvent*
///
void q_nmeapositioninfosource_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param event QTimerEvent*
///
void q_nmeapositioninfosource_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param callback void func(QNmeaPositionInfoSource* self, QTimerEvent* event)
///
void q_nmeapositioninfosource_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param event QChildEvent*
///
void q_nmeapositioninfosource_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param event QChildEvent*
///
void q_nmeapositioninfosource_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param callback void func(QNmeaPositionInfoSource* self, QChildEvent* event)
///
void q_nmeapositioninfosource_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param event QEvent*
///
void q_nmeapositioninfosource_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param event QEvent*
///
void q_nmeapositioninfosource_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param callback void func(QNmeaPositionInfoSource* self, QEvent* event)
///
void q_nmeapositioninfosource_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param signal QMetaMethod*
///
void q_nmeapositioninfosource_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param signal QMetaMethod*
///
void q_nmeapositioninfosource_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param callback void func(QNmeaPositionInfoSource* self, QMetaMethod* signal)
///
void q_nmeapositioninfosource_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param signal QMetaMethod*
///
void q_nmeapositioninfosource_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param signal QMetaMethod*
///
void q_nmeapositioninfosource_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNmeaPositionInfoSource*
/// @param callback void func(QNmeaPositionInfoSource* self, QMetaMethod* signal)
///
void q_nmeapositioninfosource_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QNmeaPositionInfoSource*
///
QObject* q_nmeapositioninfosource_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QNmeaPositionInfoSource*
///
QObject* q_nmeapositioninfosource_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QNmeaPositionInfoSource*
/// @param callback QObject* func(QNmeaPositionInfoSource* self)
///
void q_nmeapositioninfosource_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QNmeaPositionInfoSource*
///
int32_t q_nmeapositioninfosource_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QNmeaPositionInfoSource*
///
int32_t q_nmeapositioninfosource_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QNmeaPositionInfoSource*
/// @param callback int32_t func(QNmeaPositionInfoSource* self)
///
void q_nmeapositioninfosource_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QNmeaPositionInfoSource*
/// @param signal const char*
///
int32_t q_nmeapositioninfosource_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QNmeaPositionInfoSource*
/// @param signal const char*
///
int32_t q_nmeapositioninfosource_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QNmeaPositionInfoSource*
/// @param callback int32_t func(QNmeaPositionInfoSource* self, const char* signal)
///
void q_nmeapositioninfosource_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QNmeaPositionInfoSource*
/// @param signal QMetaMethod*
///
bool q_nmeapositioninfosource_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QNmeaPositionInfoSource*
/// @param signal QMetaMethod*
///
bool q_nmeapositioninfosource_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QNmeaPositionInfoSource*
/// @param callback bool func(QNmeaPositionInfoSource* self, QMetaMethod* signal)
///
void q_nmeapositioninfosource_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QNmeaPositionInfoSource*
/// @param callback void func(QNmeaPositionInfoSource* self, const char* objectName)
///
void q_nmeapositioninfosource_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#dtor.QNmeaPositionInfoSource)
///
/// Delete this object from C++ memory.
///
/// @param self QNmeaPositionInfoSource*
///
void q_nmeapositioninfosource_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeapositioninfosource.html#public-types)

typedef enum {
    QNMEAPOSITIONINFOSOURCE_UPDATEMODE_REALTIMEMODE = 1,
    QNMEAPOSITIONINFOSOURCE_UPDATEMODE_SIMULATIONMODE = 2
} QNmeaPositionInfoSource__UpdateMode;

#endif
