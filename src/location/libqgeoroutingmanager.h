#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQGEOROUTINGMANAGER_H
#define SRC_LOCATION_QT6C_LIBQGEOROUTINGMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGeoRoutingManager*
///
const QMetaObject* q_georoutingmanager_meta_object(void* self);

/// @param self QGeoRoutingManager*
/// @param param1 const char*
///
void* q_georoutingmanager_metacast(void* self, const char* param1);

/// @param self QGeoRoutingManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_georoutingmanager_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_georoutingmanager_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#managerName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoRoutingManager*
///
const char* q_georoutingmanager_manager_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#managerVersion)
///
/// @param self QGeoRoutingManager*
///
int32_t q_georoutingmanager_manager_version(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#calculateRoute)
///
/// @param self QGeoRoutingManager*
/// @param request QGeoRouteRequest*
///
QGeoRouteReply* q_georoutingmanager_calculate_route(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#updateRoute)
///
/// @param self QGeoRoutingManager*
/// @param route QGeoRoute*
/// @param position QGeoCoordinate*
///
QGeoRouteReply* q_georoutingmanager_update_route(void* self, void* route, void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#supportedTravelModes)
///
/// @param self QGeoRoutingManager*
///
/// @return flag of enum QGeoRouteRequest__TravelMode
///
int32_t q_georoutingmanager_supported_travel_modes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#supportedFeatureTypes)
///
/// @param self QGeoRoutingManager*
///
/// @return flag of enum QGeoRouteRequest__FeatureType
///
int32_t q_georoutingmanager_supported_feature_types(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#supportedFeatureWeights)
///
/// @param self QGeoRoutingManager*
///
/// @return flag of enum QGeoRouteRequest__FeatureWeight
///
int32_t q_georoutingmanager_supported_feature_weights(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#supportedRouteOptimizations)
///
/// @param self QGeoRoutingManager*
///
/// @return flag of enum QGeoRouteRequest__RouteOptimization
///
int32_t q_georoutingmanager_supported_route_optimizations(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#supportedSegmentDetails)
///
/// @param self QGeoRoutingManager*
///
/// @return flag of enum QGeoRouteRequest__SegmentDetail
///
int32_t q_georoutingmanager_supported_segment_details(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#supportedManeuverDetails)
///
/// @param self QGeoRoutingManager*
///
/// @return flag of enum QGeoRouteRequest__ManeuverDetail
///
int32_t q_georoutingmanager_supported_maneuver_details(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#setLocale)
///
/// @param self QGeoRoutingManager*
/// @param locale QLocale*
///
void q_georoutingmanager_set_locale(void* self, void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#locale)
///
/// @param self QGeoRoutingManager*
///
QLocale* q_georoutingmanager_locale(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#setMeasurementSystem)
///
/// @param self QGeoRoutingManager*
/// @param system enum QLocale__MeasurementSystem
///
void q_georoutingmanager_set_measurement_system(void* self, int32_t system);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#measurementSystem)
///
/// @param self QGeoRoutingManager*
///
/// @return enum QLocale__MeasurementSystem
///
int32_t q_georoutingmanager_measurement_system(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#finished)
///
/// @param self QGeoRoutingManager*
/// @param reply QGeoRouteReply*
///
void q_georoutingmanager_finished(void* self, void* reply);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#finished)
///
/// @param self QGeoRoutingManager*
/// @param callback void func(QGeoRoutingManager* self, QGeoRouteReply* reply)
///
void q_georoutingmanager_on_finished(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#errorOccurred)
///
/// @param self QGeoRoutingManager*
/// @param reply QGeoRouteReply*
/// @param error enum QGeoRouteReply__Error
///
void q_georoutingmanager_error_occurred(void* self, void* reply, int32_t error);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#errorOccurred)
///
/// @param self QGeoRoutingManager*
/// @param callback void func(QGeoRoutingManager* self, QGeoRouteReply* reply, enum QGeoRouteReply__Error error)
///
void q_georoutingmanager_on_error_occurred(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_georoutingmanager_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_georoutingmanager_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#errorOccurred)
///
/// @param self QGeoRoutingManager*
/// @param reply QGeoRouteReply*
/// @param error enum QGeoRouteReply__Error
/// @param errorString const char*
///
void q_georoutingmanager_error_occurred3(void* self, void* reply, int32_t error, const char* errorString);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#errorOccurred)
///
/// @param self QGeoRoutingManager*
/// @param callback void func(QGeoRoutingManager* self, QGeoRouteReply* reply, enum QGeoRouteReply__Error error, const char* errorString)
///
void q_georoutingmanager_on_error_occurred3(void* self, void (*callback)(void*, void*, int32_t, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QGeoRoutingManager*
/// @param event QEvent*
///
bool q_georoutingmanager_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QGeoRoutingManager*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_georoutingmanager_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoRoutingManager*
///
const char* q_georoutingmanager_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGeoRoutingManager*
/// @param name const char*
///
void q_georoutingmanager_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGeoRoutingManager*
///
bool q_georoutingmanager_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGeoRoutingManager*
///
bool q_georoutingmanager_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGeoRoutingManager*
///
bool q_georoutingmanager_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGeoRoutingManager*
///
bool q_georoutingmanager_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGeoRoutingManager*
/// @param b bool
///
bool q_georoutingmanager_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGeoRoutingManager*
///
QThread* q_georoutingmanager_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGeoRoutingManager*
/// @param thread QThread*
///
bool q_georoutingmanager_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoRoutingManager*
/// @param interval int
///
int32_t q_georoutingmanager_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoRoutingManager*
/// @param time int64_t of nanoseconds
///
int32_t q_georoutingmanager_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGeoRoutingManager*
/// @param id int
///
void q_georoutingmanager_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGeoRoutingManager*
/// @param id enum Qt__TimerId
///
void q_georoutingmanager_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGeoRoutingManager*
///
/// @return libqt_list of QObject*
///
libqt_list q_georoutingmanager_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGeoRoutingManager*
/// @param parent QObject*
///
void q_georoutingmanager_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGeoRoutingManager*
/// @param filterObj QObject*
///
void q_georoutingmanager_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGeoRoutingManager*
/// @param obj QObject*
///
void q_georoutingmanager_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_georoutingmanager_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_georoutingmanager_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGeoRoutingManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_georoutingmanager_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_georoutingmanager_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_georoutingmanager_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoRoutingManager*
///
bool q_georoutingmanager_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoRoutingManager*
/// @param receiver QObject*
///
bool q_georoutingmanager_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_georoutingmanager_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGeoRoutingManager*
///
void q_georoutingmanager_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGeoRoutingManager*
///
void q_georoutingmanager_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGeoRoutingManager*
/// @param name const char*
/// @param value QVariant*
///
bool q_georoutingmanager_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGeoRoutingManager*
/// @param name const char*
///
QVariant* q_georoutingmanager_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QGeoRoutingManager*
///
const char** q_georoutingmanager_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGeoRoutingManager*
///
QBindingStorage* q_georoutingmanager_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGeoRoutingManager*
///
const QBindingStorage* q_georoutingmanager_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoRoutingManager*
///
void q_georoutingmanager_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoRoutingManager*
/// @param callback void func(QGeoRoutingManager* self)
///
void q_georoutingmanager_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGeoRoutingManager*
///
QObject* q_georoutingmanager_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGeoRoutingManager*
/// @param classname const char*
///
bool q_georoutingmanager_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGeoRoutingManager*
///
void q_georoutingmanager_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoRoutingManager*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_georoutingmanager_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoRoutingManager*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_georoutingmanager_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_georoutingmanager_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_georoutingmanager_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGeoRoutingManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_georoutingmanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoRoutingManager*
/// @param signal const char*
///
bool q_georoutingmanager_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoRoutingManager*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_georoutingmanager_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoRoutingManager*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_georoutingmanager_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QGeoRoutingManager*
/// @param receiver QObject*
/// @param member const char*
///
bool q_georoutingmanager_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoRoutingManager*
/// @param param1 QObject*
///
void q_georoutingmanager_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoRoutingManager*
/// @param callback void func(QGeoRoutingManager* self, QObject* param1)
///
void q_georoutingmanager_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGeoRoutingManager*
/// @param callback void func(QGeoRoutingManager* self, const char* objectName)
///
void q_georoutingmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#dtor.QGeoRoutingManager)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoRoutingManager*
///
void q_georoutingmanager_delete(void* self);

#endif
