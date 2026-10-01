#pragma once
#ifndef LOCATION_LIBQGEOROUTINGMANAGER_H
#define LOCATION_LIBQGEOROUTINGMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QGeoRoutingManager*
///
const QMetaObject* q_georoutingmanager_meta_object(const void* self);

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
/// @param self const QGeoRoutingManager*
///
const char* q_georoutingmanager_manager_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#managerVersion)
///
/// @param self const QGeoRoutingManager*
///
int32_t q_georoutingmanager_manager_version(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#calculateRoute)
///
/// @param self QGeoRoutingManager*
/// @param request QGeoRouteRequest*
///
QGeoRouteReply* q_georoutingmanager_calculate_route(void* self, const void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#updateRoute)
///
/// @param self QGeoRoutingManager*
/// @param route QGeoRoute*
/// @param position QGeoCoordinate*
///
QGeoRouteReply* q_georoutingmanager_update_route(void* self, const void* route, const void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#supportedTravelModes)
///
/// @param self const QGeoRoutingManager*
///
/// @return flag of enum QGeoRouteRequest__TravelMode
///
int32_t q_georoutingmanager_supported_travel_modes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#supportedFeatureTypes)
///
/// @param self const QGeoRoutingManager*
///
/// @return flag of enum QGeoRouteRequest__FeatureType
///
int32_t q_georoutingmanager_supported_feature_types(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#supportedFeatureWeights)
///
/// @param self const QGeoRoutingManager*
///
/// @return flag of enum QGeoRouteRequest__FeatureWeight
///
int32_t q_georoutingmanager_supported_feature_weights(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#supportedRouteOptimizations)
///
/// @param self const QGeoRoutingManager*
///
/// @return flag of enum QGeoRouteRequest__RouteOptimization
///
int32_t q_georoutingmanager_supported_route_optimizations(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#supportedSegmentDetails)
///
/// @param self const QGeoRoutingManager*
///
/// @return flag of enum QGeoRouteRequest__SegmentDetail
///
int32_t q_georoutingmanager_supported_segment_details(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#supportedManeuverDetails)
///
/// @param self const QGeoRoutingManager*
///
/// @return flag of enum QGeoRouteRequest__ManeuverDetail
///
int32_t q_georoutingmanager_supported_maneuver_details(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#setLocale)
///
/// @param self QGeoRoutingManager*
/// @param locale QLocale*
///
void q_georoutingmanager_set_locale(void* self, const void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#locale)
///
/// @param self const QGeoRoutingManager*
///
QLocale* q_georoutingmanager_locale(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#setMeasurementSystem)
///
/// @param self QGeoRoutingManager*
/// @param system enum QLocale__MeasurementSystem
///
void q_georoutingmanager_set_measurement_system(void* self, int32_t system);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanager.html#measurementSystem)
///
/// @param self const QGeoRoutingManager*
///
/// @return enum QLocale__MeasurementSystem
///
int32_t q_georoutingmanager_measurement_system(const void* self);

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
/// @param self const QGeoRoutingManager*
///
const char* q_georoutingmanager_object_name(const void* self);

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
/// @param self const QGeoRoutingManager*
///
bool q_georoutingmanager_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QGeoRoutingManager*
///
bool q_georoutingmanager_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QGeoRoutingManager*
///
bool q_georoutingmanager_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QGeoRoutingManager*
///
bool q_georoutingmanager_signals_blocked(const void* self);

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
/// @param self const QGeoRoutingManager*
///
QThread* q_georoutingmanager_thread(const void* self);

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
/// @param self const QGeoRoutingManager*
///
/// @return libqt_list of QObject*
///
libqt_list q_georoutingmanager_children(const void* self);

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
QMetaObject__Connection* q_georoutingmanager_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_georoutingmanager_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QGeoRoutingManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_georoutingmanager_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_georoutingmanager_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_georoutingmanager_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGeoRoutingManager*
///
bool q_georoutingmanager_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGeoRoutingManager*
/// @param receiver QObject*
///
bool q_georoutingmanager_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_georoutingmanager_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QGeoRoutingManager*
///
void q_georoutingmanager_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QGeoRoutingManager*
///
void q_georoutingmanager_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGeoRoutingManager*
/// @param name const char*
/// @param value QVariant*
///
bool q_georoutingmanager_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QGeoRoutingManager*
/// @param name const char*
///
QVariant* q_georoutingmanager_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QGeoRoutingManager*
///
const char** q_georoutingmanager_dynamic_property_names(const void* self);

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
/// @param self const QGeoRoutingManager*
///
const QBindingStorage* q_georoutingmanager_binding_storage2(const void* self);

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
/// @param self const QGeoRoutingManager*
///
QObject* q_georoutingmanager_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QGeoRoutingManager*
/// @param classname const char*
///
bool q_georoutingmanager_inherits(const void* self, const char* classname);

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
QMetaObject__Connection* q_georoutingmanager_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_georoutingmanager_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QGeoRoutingManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_georoutingmanager_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGeoRoutingManager*
/// @param signal const char*
///
bool q_georoutingmanager_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGeoRoutingManager*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_georoutingmanager_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGeoRoutingManager*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_georoutingmanager_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGeoRoutingManager*
/// @param receiver QObject*
/// @param member const char*
///
bool q_georoutingmanager_disconnect23(const void* self, const void* receiver, const char* member);

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
