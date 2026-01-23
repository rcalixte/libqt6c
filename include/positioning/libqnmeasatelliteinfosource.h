#pragma once
#ifndef SRC_POSITIONING_QT6C_LIBQNMEASATELLITEINFOSOURCE_H
#define SRC_POSITIONING_QT6C_LIBQNMEASATELLITEINFOSOURCE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html)

/// q_nmeasatelliteinfosource_new constructs a new QNmeaSatelliteInfoSource object.
///
/// @param mode enum QNmeaSatelliteInfoSource__UpdateMode
///
QNmeaSatelliteInfoSource* q_nmeasatelliteinfosource_new(int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html)

/// q_nmeasatelliteinfosource_new2 constructs a new QNmeaSatelliteInfoSource object.
///
/// @param mode enum QNmeaSatelliteInfoSource__UpdateMode
/// @param parent QObject*
///
QNmeaSatelliteInfoSource* q_nmeasatelliteinfosource_new2(int32_t mode, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QNmeaSatelliteInfoSource*
///
const QMetaObject* q_nmeasatelliteinfosource_meta_object(void* self);

/// @param self QNmeaSatelliteInfoSource*
/// @param param1 const char*
///
void* q_nmeasatelliteinfosource_metacast(void* self, const char* param1);

/// @param self QNmeaSatelliteInfoSource*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_nmeasatelliteinfosource_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback int32_t func(QNmeaSatelliteInfoSource* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_nmeasatelliteinfosource_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QNmeaSatelliteInfoSource*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_nmeasatelliteinfosource_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_nmeasatelliteinfosource_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#updateMode)
///
/// @param self QNmeaSatelliteInfoSource*
///
/// @return enum QNmeaSatelliteInfoSource__UpdateMode
///
int32_t q_nmeasatelliteinfosource_update_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setDevice)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param source QIODevice*
///
void q_nmeasatelliteinfosource_set_device(void* self, void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#device)
///
/// @param self QNmeaSatelliteInfoSource*
///
QIODevice* q_nmeasatelliteinfosource_device(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setUpdateInterval)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param msec int
///
void q_nmeasatelliteinfosource_set_update_interval(void* self, int msec);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setUpdateInterval)
///
/// Allows for overriding the related default method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback void func(QNmeaSatelliteInfoSource* self, int msec)
///
void q_nmeasatelliteinfosource_on_set_update_interval(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setUpdateInterval)
///
/// Base class method implementation
///
/// @param self QNmeaSatelliteInfoSource*
/// @param msec int
///
void q_nmeasatelliteinfosource_qbase_set_update_interval(void* self, int msec);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#minimumUpdateInterval)
///
/// @param self QNmeaSatelliteInfoSource*
///
int32_t q_nmeasatelliteinfosource_minimum_update_interval(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#minimumUpdateInterval)
///
/// Allows for overriding the related default method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback int32_t func()
///
void q_nmeasatelliteinfosource_on_minimum_update_interval(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#minimumUpdateInterval)
///
/// Base class method implementation
///
/// @param self QNmeaSatelliteInfoSource*
///
int32_t q_nmeasatelliteinfosource_qbase_minimum_update_interval(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#error)
///
/// @param self QNmeaSatelliteInfoSource*
///
/// @return enum QGeoSatelliteInfoSource__Error
///
int32_t q_nmeasatelliteinfosource_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#error)
///
/// Allows for overriding the related default method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback int32_t func()
///
void q_nmeasatelliteinfosource_on_error(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#error)
///
/// Base class method implementation
///
/// @param self QNmeaSatelliteInfoSource*
///
/// @return enum QGeoSatelliteInfoSource__Error
///
int32_t q_nmeasatelliteinfosource_qbase_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setBackendProperty)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param name const char*
/// @param value QVariant*
///
bool q_nmeasatelliteinfosource_set_backend_property(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setBackendProperty)
///
/// Allows for overriding the related default method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback bool func(QNmeaSatelliteInfoSource* self, const char* name, QVariant* value)
///
void q_nmeasatelliteinfosource_on_set_backend_property(void* self, bool (*callback)(void*, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setBackendProperty)
///
/// Base class method implementation
///
/// @param self QNmeaSatelliteInfoSource*
/// @param name const char*
/// @param value QVariant*
///
bool q_nmeasatelliteinfosource_qbase_set_backend_property(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#backendProperty)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param name const char*
///
QVariant* q_nmeasatelliteinfosource_backend_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#backendProperty)
///
/// Allows for overriding the related default method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback QVariant* func(QNmeaSatelliteInfoSource* self, const char* name)
///
void q_nmeasatelliteinfosource_on_backend_property(void* self, QVariant* (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#backendProperty)
///
/// Base class method implementation
///
/// @param self QNmeaSatelliteInfoSource*
/// @param name const char*
///
QVariant* q_nmeasatelliteinfosource_qbase_backend_property(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#startUpdates)
///
/// @param self QNmeaSatelliteInfoSource*
///
void q_nmeasatelliteinfosource_start_updates(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#startUpdates)
///
/// Allows for overriding the related default method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback void func()
///
void q_nmeasatelliteinfosource_on_start_updates(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#startUpdates)
///
/// Base class method implementation
///
/// @param self QNmeaSatelliteInfoSource*
///
void q_nmeasatelliteinfosource_qbase_start_updates(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#stopUpdates)
///
/// @param self QNmeaSatelliteInfoSource*
///
void q_nmeasatelliteinfosource_stop_updates(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#stopUpdates)
///
/// Allows for overriding the related default method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback void func()
///
void q_nmeasatelliteinfosource_on_stop_updates(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#stopUpdates)
///
/// Base class method implementation
///
/// @param self QNmeaSatelliteInfoSource*
///
void q_nmeasatelliteinfosource_qbase_stop_updates(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#requestUpdate)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param timeout int
///
void q_nmeasatelliteinfosource_request_update(void* self, int timeout);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#requestUpdate)
///
/// Allows for overriding the related default method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback void func(QNmeaSatelliteInfoSource* self, int timeout)
///
void q_nmeasatelliteinfosource_on_request_update(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#requestUpdate)
///
/// Base class method implementation
///
/// @param self QNmeaSatelliteInfoSource*
/// @param timeout int
///
void q_nmeasatelliteinfosource_qbase_request_update(void* self, int timeout);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatellitesInUseFromNmea)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param data const char*
/// @param size int
/// @param pnrsInUse libqt_list of int
///
/// @return enum QGeoSatelliteInfo__SatelliteSystem
///
int32_t q_nmeasatelliteinfosource_parse_satellites_in_use_from_nmea(void* self, const char* data, int size, libqt_list /* of int */ pnrsInUse);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatellitesInUseFromNmea)
///
/// Allows for overriding the related default method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback int32_t func(QNmeaSatelliteInfoSource* self, const char* data, int size, int* )
///
void q_nmeasatelliteinfosource_on_parse_satellites_in_use_from_nmea(void* self, int32_t (*callback)(void*, const char*, int, libqt_list /* of int */));

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatellitesInUseFromNmea)
///
/// Base class method implementation
///
/// @param self QNmeaSatelliteInfoSource*
/// @param data const char*
/// @param size int
/// @param pnrsInUse libqt_list of int
///
/// @return enum QGeoSatelliteInfo__SatelliteSystem
///
int32_t q_nmeasatelliteinfosource_qbase_parse_satellites_in_use_from_nmea(void* self, const char* data, int size, libqt_list /* of int */ pnrsInUse);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatellitesInUseFromNmea)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param data const char*
/// @param pnrsInUse libqt_list of int
///
/// @return enum QGeoSatelliteInfo__SatelliteSystem
///
int32_t q_nmeasatelliteinfosource_parse_satellites_in_use_from_nmea2(void* self, const char* data, libqt_list /* of int */ pnrsInUse);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatellitesInUseFromNmea)
///
/// Allows for overriding the related default method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback int32_t func(QNmeaSatelliteInfoSource* self, const char* data, int* )
///
void q_nmeasatelliteinfosource_on_parse_satellites_in_use_from_nmea2(void* self, int32_t (*callback)(void*, const char*, libqt_list /* of int */));

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatellitesInUseFromNmea)
///
/// Base class method implementation
///
/// @param self QNmeaSatelliteInfoSource*
/// @param data const char*
/// @param pnrsInUse libqt_list of int
///
/// @return enum QGeoSatelliteInfo__SatelliteSystem
///
int32_t q_nmeasatelliteinfosource_qbase_parse_satellites_in_use_from_nmea2(void* self, const char* data, libqt_list /* of int */ pnrsInUse);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatelliteInfoFromNmea)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param data const char*
/// @param size int
/// @param infos libqt_list of QGeoSatelliteInfo*
/// @param system enum QGeoSatelliteInfo__SatelliteSystem*
///
/// @return enum QNmeaSatelliteInfoSource__SatelliteInfoParseStatus
///
int32_t q_nmeasatelliteinfosource_parse_satellite_info_from_nmea(void* self, const char* data, int size, libqt_list /* of QGeoSatelliteInfo* */ infos, int32_t* system);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatelliteInfoFromNmea)
///
/// Allows for overriding the related default method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback int32_t func(QNmeaSatelliteInfoSource* self, const char* data, int size, QGeoSatelliteInfo** infos, enum QGeoSatelliteInfo__SatelliteSystem* system)
///
void q_nmeasatelliteinfosource_on_parse_satellite_info_from_nmea(void* self, int32_t (*callback)(void*, const char*, int, QGeoSatelliteInfo**, int32_t*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatelliteInfoFromNmea)
///
/// Base class method implementation
///
/// @param self QNmeaSatelliteInfoSource*
/// @param data const char*
/// @param size int
/// @param infos libqt_list of QGeoSatelliteInfo*
/// @param system enum QGeoSatelliteInfo__SatelliteSystem*
///
/// @return enum QNmeaSatelliteInfoSource__SatelliteInfoParseStatus
///
int32_t q_nmeasatelliteinfosource_qbase_parse_satellite_info_from_nmea(void* self, const char* data, int size, libqt_list /* of QGeoSatelliteInfo* */ infos, int32_t* system);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatelliteInfoFromNmea)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param data const char*
/// @param infos libqt_list of QGeoSatelliteInfo*
/// @param system enum QGeoSatelliteInfo__SatelliteSystem*
///
/// @return enum QNmeaSatelliteInfoSource__SatelliteInfoParseStatus
///
int32_t q_nmeasatelliteinfosource_parse_satellite_info_from_nmea2(void* self, const char* data, libqt_list /* of QGeoSatelliteInfo* */ infos, int32_t* system);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatelliteInfoFromNmea)
///
/// Allows for overriding the related default method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback int32_t func(QNmeaSatelliteInfoSource* self, const char* data, QGeoSatelliteInfo** infos, enum QGeoSatelliteInfo__SatelliteSystem* system)
///
void q_nmeasatelliteinfosource_on_parse_satellite_info_from_nmea2(void* self, int32_t (*callback)(void*, const char*, QGeoSatelliteInfo**, int32_t*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#parseSatelliteInfoFromNmea)
///
/// Base class method implementation
///
/// @param self QNmeaSatelliteInfoSource*
/// @param data const char*
/// @param infos libqt_list of QGeoSatelliteInfo*
/// @param system enum QGeoSatelliteInfo__SatelliteSystem*
///
/// @return enum QNmeaSatelliteInfoSource__SatelliteInfoParseStatus
///
int32_t q_nmeasatelliteinfosource_qbase_parse_satellite_info_from_nmea2(void* self, const char* data, libqt_list /* of QGeoSatelliteInfo* */ infos, int32_t* system);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setError)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param satelliteError enum QGeoSatelliteInfoSource__Error
///
void q_nmeasatelliteinfosource_set_error(void* self, int32_t satelliteError);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setError)
///
/// Allows for overriding the related default method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback void func(QNmeaSatelliteInfoSource* self, enum QGeoSatelliteInfoSource__Error satelliteError)
///
void q_nmeasatelliteinfosource_on_set_error(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#setError)
///
/// Base class method implementation
///
/// @param self QNmeaSatelliteInfoSource*
/// @param satelliteError enum QGeoSatelliteInfoSource__Error
///
void q_nmeasatelliteinfosource_qbase_set_error(void* self, int32_t satelliteError);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_nmeasatelliteinfosource_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_nmeasatelliteinfosource_tr3(const char* s, const char* c, int n);

/// Inherited from QGeoSatelliteInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#createDefaultSource)
///
/// @param parent QObject*
///
QGeoSatelliteInfoSource* q_nmeasatelliteinfosource_create_default_source(void* parent);

/// Inherited from QGeoSatelliteInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#createSource)
///
/// @param sourceName const char*
/// @param parent QObject*
///
QGeoSatelliteInfoSource* q_nmeasatelliteinfosource_create_source(const char* sourceName, void* parent);

/// Inherited from QGeoSatelliteInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#createDefaultSource)
///
/// @param parameters libqt_map of const char* to QVariant*
/// @param parent QObject*
///
QGeoSatelliteInfoSource* q_nmeasatelliteinfosource_create_default_source2(libqt_map parameters, void* parent);

/// Inherited from QGeoSatelliteInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#createSource)
///
/// @param sourceName const char*
/// @param parameters libqt_map of const char* to QVariant*
/// @param parent QObject*
///
QGeoSatelliteInfoSource* q_nmeasatelliteinfosource_create_source2(const char* sourceName, libqt_map parameters, void* parent);

/// Inherited from QGeoSatelliteInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#availableSources)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_nmeasatelliteinfosource_available_sources();

/// Inherited from QGeoSatelliteInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#sourceName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QNmeaSatelliteInfoSource*
///
const char* q_nmeasatelliteinfosource_source_name(void* self);

/// Inherited from QGeoSatelliteInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#updateInterval)
///
/// @param self QNmeaSatelliteInfoSource*
///
int32_t q_nmeasatelliteinfosource_update_interval(void* self);

/// Inherited from QGeoSatelliteInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#satellitesInViewUpdated)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param satellites libqt_list of QGeoSatelliteInfo*
///
void q_nmeasatelliteinfosource_satellites_in_view_updated(void* self, libqt_list /* of QGeoSatelliteInfo* */ satellites);

/// Inherited from QGeoSatelliteInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#satellitesInViewUpdated)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback void func(QNmeaSatelliteInfoSource* self, QGeoSatelliteInfo** satellites)
///
void q_nmeasatelliteinfosource_on_satellites_in_view_updated(void* self, void (*callback)(void*, QGeoSatelliteInfo**));

/// Inherited from QGeoSatelliteInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#satellitesInUseUpdated)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param satellites libqt_list of QGeoSatelliteInfo*
///
void q_nmeasatelliteinfosource_satellites_in_use_updated(void* self, libqt_list /* of QGeoSatelliteInfo* */ satellites);

/// Inherited from QGeoSatelliteInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#satellitesInUseUpdated)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback void func(QNmeaSatelliteInfoSource* self, QGeoSatelliteInfo** satellites)
///
void q_nmeasatelliteinfosource_on_satellites_in_use_updated(void* self, void (*callback)(void*, QGeoSatelliteInfo**));

/// Inherited from QGeoSatelliteInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#errorOccurred)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param param1 enum QGeoSatelliteInfoSource__Error
///
void q_nmeasatelliteinfosource_error_occurred(void* self, int32_t param1);

/// Inherited from QGeoSatelliteInfoSource
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfosource.html#errorOccurred)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback void func(QNmeaSatelliteInfoSource* self, enum QGeoSatelliteInfoSource__Error param1)
///
void q_nmeasatelliteinfosource_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QNmeaSatelliteInfoSource*
///
const char* q_nmeasatelliteinfosource_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param name char*
///
void q_nmeasatelliteinfosource_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QNmeaSatelliteInfoSource*
///
bool q_nmeasatelliteinfosource_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QNmeaSatelliteInfoSource*
///
bool q_nmeasatelliteinfosource_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QNmeaSatelliteInfoSource*
///
bool q_nmeasatelliteinfosource_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QNmeaSatelliteInfoSource*
///
bool q_nmeasatelliteinfosource_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param b bool
///
bool q_nmeasatelliteinfosource_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QNmeaSatelliteInfoSource*
///
QThread* q_nmeasatelliteinfosource_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param thread QThread*
///
bool q_nmeasatelliteinfosource_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param interval int
///
int32_t q_nmeasatelliteinfosource_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param time int64_t of nanoseconds
///
int32_t q_nmeasatelliteinfosource_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param id int
///
void q_nmeasatelliteinfosource_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param id enum Qt__TimerId
///
void q_nmeasatelliteinfosource_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QNmeaSatelliteInfoSource*
///
/// @return libqt_list of QObject*
///
libqt_list q_nmeasatelliteinfosource_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param parent QObject*
///
void q_nmeasatelliteinfosource_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param filterObj QObject*
///
void q_nmeasatelliteinfosource_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param obj QObject*
///
void q_nmeasatelliteinfosource_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_nmeasatelliteinfosource_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_nmeasatelliteinfosource_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_nmeasatelliteinfosource_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_nmeasatelliteinfosource_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QNmeaSatelliteInfoSource*
///
void q_nmeasatelliteinfosource_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QNmeaSatelliteInfoSource*
///
void q_nmeasatelliteinfosource_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param name const char*
/// @param value QVariant*
///
bool q_nmeasatelliteinfosource_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param name const char*
///
QVariant* q_nmeasatelliteinfosource_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QNmeaSatelliteInfoSource*
///
const char** q_nmeasatelliteinfosource_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QNmeaSatelliteInfoSource*
///
QBindingStorage* q_nmeasatelliteinfosource_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QNmeaSatelliteInfoSource*
///
const QBindingStorage* q_nmeasatelliteinfosource_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNmeaSatelliteInfoSource*
///
void q_nmeasatelliteinfosource_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback void func(QNmeaSatelliteInfoSource* self)
///
void q_nmeasatelliteinfosource_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QNmeaSatelliteInfoSource*
///
QObject* q_nmeasatelliteinfosource_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param classname const char*
///
bool q_nmeasatelliteinfosource_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QNmeaSatelliteInfoSource*
///
void q_nmeasatelliteinfosource_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_nmeasatelliteinfosource_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_nmeasatelliteinfosource_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_nmeasatelliteinfosource_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_nmeasatelliteinfosource_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_nmeasatelliteinfosource_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param param1 QObject*
///
void q_nmeasatelliteinfosource_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback void func(QNmeaSatelliteInfoSource* self, QObject* param1)
///
void q_nmeasatelliteinfosource_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param event QEvent*
///
bool q_nmeasatelliteinfosource_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param event QEvent*
///
bool q_nmeasatelliteinfosource_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback bool func(QNmeaSatelliteInfoSource* self, QEvent* event)
///
void q_nmeasatelliteinfosource_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_nmeasatelliteinfosource_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_nmeasatelliteinfosource_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback bool func(QNmeaSatelliteInfoSource* self, QObject* watched, QEvent* event)
///
void q_nmeasatelliteinfosource_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param event QTimerEvent*
///
void q_nmeasatelliteinfosource_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param event QTimerEvent*
///
void q_nmeasatelliteinfosource_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback void func(QNmeaSatelliteInfoSource* self, QTimerEvent* event)
///
void q_nmeasatelliteinfosource_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param event QChildEvent*
///
void q_nmeasatelliteinfosource_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param event QChildEvent*
///
void q_nmeasatelliteinfosource_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback void func(QNmeaSatelliteInfoSource* self, QChildEvent* event)
///
void q_nmeasatelliteinfosource_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param event QEvent*
///
void q_nmeasatelliteinfosource_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param event QEvent*
///
void q_nmeasatelliteinfosource_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback void func(QNmeaSatelliteInfoSource* self, QEvent* event)
///
void q_nmeasatelliteinfosource_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param signal QMetaMethod*
///
void q_nmeasatelliteinfosource_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param signal QMetaMethod*
///
void q_nmeasatelliteinfosource_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback void func(QNmeaSatelliteInfoSource* self, QMetaMethod* signal)
///
void q_nmeasatelliteinfosource_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param signal QMetaMethod*
///
void q_nmeasatelliteinfosource_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param signal QMetaMethod*
///
void q_nmeasatelliteinfosource_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback void func(QNmeaSatelliteInfoSource* self, QMetaMethod* signal)
///
void q_nmeasatelliteinfosource_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
///
QObject* q_nmeasatelliteinfosource_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
///
QObject* q_nmeasatelliteinfosource_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback QObject* func()
///
void q_nmeasatelliteinfosource_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
///
int32_t q_nmeasatelliteinfosource_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
///
int32_t q_nmeasatelliteinfosource_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback int32_t func()
///
void q_nmeasatelliteinfosource_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param signal const char*
///
int32_t q_nmeasatelliteinfosource_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param signal const char*
///
int32_t q_nmeasatelliteinfosource_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback int32_t func(QNmeaSatelliteInfoSource* self, const char* signal)
///
void q_nmeasatelliteinfosource_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param signal QMetaMethod*
///
bool q_nmeasatelliteinfosource_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param signal QMetaMethod*
///
bool q_nmeasatelliteinfosource_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback bool func(QNmeaSatelliteInfoSource* self, QMetaMethod* signal)
///
void q_nmeasatelliteinfosource_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QNmeaSatelliteInfoSource*
/// @param callback void func(QNmeaSatelliteInfoSource* self, const char* objectName)
///
void q_nmeasatelliteinfosource_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#dtor.QNmeaSatelliteInfoSource)
///
/// Delete this object from C++ memory.
///
/// @param self QNmeaSatelliteInfoSource*
///
void q_nmeasatelliteinfosource_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#public-types)

typedef enum {
    QNMEASATELLITEINFOSOURCE_UPDATEMODE_REALTIMEMODE = 1,
    QNMEASATELLITEINFOSOURCE_UPDATEMODE_SIMULATIONMODE = 2
} QNmeaSatelliteInfoSource__UpdateMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qnmeasatelliteinfosource.html#public-types)

typedef enum {
    QNMEASATELLITEINFOSOURCE_SATELLITEINFOPARSESTATUS_NOTPARSED = 0,
    QNMEASATELLITEINFOSOURCE_SATELLITEINFOPARSESTATUS_PARTIALLYPARSED = 1,
    QNMEASATELLITEINFOSOURCE_SATELLITEINFOPARSESTATUS_FULLYPARSED = 2
} QNmeaSatelliteInfoSource__SatelliteInfoParseStatus;

#endif
