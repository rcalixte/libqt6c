#pragma once
#ifndef LOCATION_LIBQGEOROUTINGMANAGERENGINE_H
#define LOCATION_LIBQGEOROUTINGMANAGERENGINE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html)

/// q_georoutingmanagerengine_new constructs a new QGeoRoutingManagerEngine object.
///
/// @param parameters libqt_map of const char* to QVariant*
///
QGeoRoutingManagerEngine* q_georoutingmanagerengine_new(libqt_map parameters);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html)

/// q_georoutingmanagerengine_new2 constructs a new QGeoRoutingManagerEngine object.
///
/// @param parameters libqt_map of const char* to QVariant*
/// @param parent QObject*
///
QGeoRoutingManagerEngine* q_georoutingmanagerengine_new2(libqt_map parameters, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QGeoRoutingManagerEngine*
///
const QMetaObject* q_georoutingmanagerengine_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback const QMetaObject* func(const QGeoRoutingManagerEngine* self)
///
void q_georoutingmanagerengine_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QGeoRoutingManagerEngine*
///
const QMetaObject* q_georoutingmanagerengine_super_meta_object(const void* self);

/// @param self QGeoRoutingManagerEngine*
/// @param param1 const char*
///
void* q_georoutingmanagerengine_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback void* func(QGeoRoutingManagerEngine* self, const char* param1)
///
void q_georoutingmanagerengine_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QGeoRoutingManagerEngine*
/// @param param1 const char*
///
void* q_georoutingmanagerengine_super_metacast(void* self, const char* param1);

/// @param self QGeoRoutingManagerEngine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_georoutingmanagerengine_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback int32_t func(QGeoRoutingManagerEngine* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_georoutingmanagerengine_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QGeoRoutingManagerEngine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_georoutingmanagerengine_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_georoutingmanagerengine_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#managerName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QGeoRoutingManagerEngine*
///
const char* q_georoutingmanagerengine_manager_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#managerVersion)
///
/// @param self const QGeoRoutingManagerEngine*
///
int32_t q_georoutingmanagerengine_manager_version(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#calculateRoute)
///
/// @warning This method must be implemented with `q_georoutingmanagerengine_on_calculate_route` before it can be called.
///
/// @param self QGeoRoutingManagerEngine*
/// @param request QGeoRouteRequest*
///
QGeoRouteReply* q_georoutingmanagerengine_calculate_route(void* self, const void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#calculateRoute)
///
/// Allows for overriding the related default method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback QGeoRouteReply* func(QGeoRoutingManagerEngine* self, QGeoRouteRequest* request)
///
void q_georoutingmanagerengine_on_calculate_route(void* self, QGeoRouteReply* (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#updateRoute)
///
/// @param self QGeoRoutingManagerEngine*
/// @param route QGeoRoute*
/// @param position QGeoCoordinate*
///
QGeoRouteReply* q_georoutingmanagerengine_update_route(void* self, const void* route, const void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#updateRoute)
///
/// Allows for overriding the related default method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback QGeoRouteReply* func(QGeoRoutingManagerEngine* self, QGeoRoute* route, QGeoCoordinate* position)
///
void q_georoutingmanagerengine_on_update_route(void* self, QGeoRouteReply* (*callback)(void*, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#updateRoute)
///
/// Base class method implementation
///
/// @param self QGeoRoutingManagerEngine*
/// @param route QGeoRoute*
/// @param position QGeoCoordinate*
///
QGeoRouteReply* q_georoutingmanagerengine_super_update_route(void* self, const void* route, const void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#supportedTravelModes)
///
/// @param self const QGeoRoutingManagerEngine*
///
/// @return flag of enum QGeoRouteRequest__TravelMode
///
int32_t q_georoutingmanagerengine_supported_travel_modes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#supportedFeatureTypes)
///
/// @param self const QGeoRoutingManagerEngine*
///
/// @return flag of enum QGeoRouteRequest__FeatureType
///
int32_t q_georoutingmanagerengine_supported_feature_types(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#supportedFeatureWeights)
///
/// @param self const QGeoRoutingManagerEngine*
///
/// @return flag of enum QGeoRouteRequest__FeatureWeight
///
int32_t q_georoutingmanagerengine_supported_feature_weights(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#supportedRouteOptimizations)
///
/// @param self const QGeoRoutingManagerEngine*
///
/// @return flag of enum QGeoRouteRequest__RouteOptimization
///
int32_t q_georoutingmanagerengine_supported_route_optimizations(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#supportedSegmentDetails)
///
/// @param self const QGeoRoutingManagerEngine*
///
/// @return flag of enum QGeoRouteRequest__SegmentDetail
///
int32_t q_georoutingmanagerengine_supported_segment_details(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#supportedManeuverDetails)
///
/// @param self const QGeoRoutingManagerEngine*
///
/// @return flag of enum QGeoRouteRequest__ManeuverDetail
///
int32_t q_georoutingmanagerengine_supported_maneuver_details(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setLocale)
///
/// @param self QGeoRoutingManagerEngine*
/// @param locale QLocale*
///
void q_georoutingmanagerengine_set_locale(void* self, const void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#locale)
///
/// @param self const QGeoRoutingManagerEngine*
///
QLocale* q_georoutingmanagerengine_locale(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setMeasurementSystem)
///
/// @param self QGeoRoutingManagerEngine*
/// @param system enum QLocale__MeasurementSystem
///
void q_georoutingmanagerengine_set_measurement_system(void* self, int32_t system);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#measurementSystem)
///
/// @param self const QGeoRoutingManagerEngine*
///
/// @return enum QLocale__MeasurementSystem
///
int32_t q_georoutingmanagerengine_measurement_system(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#finished)
///
/// @param self QGeoRoutingManagerEngine*
/// @param reply QGeoRouteReply*
///
void q_georoutingmanagerengine_finished(void* self, void* reply);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#finished)
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback void func(QGeoRoutingManagerEngine* self, QGeoRouteReply* reply)
///
void q_georoutingmanagerengine_on_finished(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#errorOccurred)
///
/// @param self QGeoRoutingManagerEngine*
/// @param reply QGeoRouteReply*
/// @param error enum QGeoRouteReply__Error
///
void q_georoutingmanagerengine_error_occurred(void* self, void* reply, int32_t error);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#errorOccurred)
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback void func(QGeoRoutingManagerEngine* self, QGeoRouteReply* reply, enum QGeoRouteReply__Error error)
///
void q_georoutingmanagerengine_on_error_occurred(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedTravelModes)
///
/// @param self QGeoRoutingManagerEngine*
/// @param travelModes flag of enum QGeoRouteRequest__TravelMode
///
void q_georoutingmanagerengine_set_supported_travel_modes(void* self, int32_t travelModes);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedFeatureTypes)
///
/// @param self QGeoRoutingManagerEngine*
/// @param featureTypes flag of enum QGeoRouteRequest__FeatureType
///
void q_georoutingmanagerengine_set_supported_feature_types(void* self, int32_t featureTypes);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedFeatureWeights)
///
/// @param self QGeoRoutingManagerEngine*
/// @param featureWeights flag of enum QGeoRouteRequest__FeatureWeight
///
void q_georoutingmanagerengine_set_supported_feature_weights(void* self, int32_t featureWeights);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedRouteOptimizations)
///
/// @param self QGeoRoutingManagerEngine*
/// @param optimizations flag of enum QGeoRouteRequest__RouteOptimization
///
void q_georoutingmanagerengine_set_supported_route_optimizations(void* self, int32_t optimizations);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedSegmentDetails)
///
/// @param self QGeoRoutingManagerEngine*
/// @param segmentDetails flag of enum QGeoRouteRequest__SegmentDetail
///
void q_georoutingmanagerengine_set_supported_segment_details(void* self, int32_t segmentDetails);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedManeuverDetails)
///
/// @param self QGeoRoutingManagerEngine*
/// @param maneuverDetails flag of enum QGeoRouteRequest__ManeuverDetail
///
void q_georoutingmanagerengine_set_supported_maneuver_details(void* self, int32_t maneuverDetails);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_georoutingmanagerengine_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_georoutingmanagerengine_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#errorOccurred)
///
/// @param self QGeoRoutingManagerEngine*
/// @param reply QGeoRouteReply*
/// @param error enum QGeoRouteReply__Error
/// @param errorString const char*
///
void q_georoutingmanagerengine_error_occurred3(void* self, void* reply, int32_t error, const char* errorString);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#errorOccurred)
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback void func(QGeoRoutingManagerEngine* self, QGeoRouteReply* reply, enum QGeoRouteReply__Error error, const char* errorString)
///
void q_georoutingmanagerengine_on_error_occurred3(void* self, void (*callback)(void*, void*, int32_t, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QGeoRoutingManagerEngine*
///
const char* q_georoutingmanagerengine_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGeoRoutingManagerEngine*
/// @param name const char*
///
void q_georoutingmanagerengine_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QGeoRoutingManagerEngine*
///
bool q_georoutingmanagerengine_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QGeoRoutingManagerEngine*
///
bool q_georoutingmanagerengine_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QGeoRoutingManagerEngine*
///
bool q_georoutingmanagerengine_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QGeoRoutingManagerEngine*
///
bool q_georoutingmanagerengine_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGeoRoutingManagerEngine*
/// @param b bool
///
bool q_georoutingmanagerengine_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QGeoRoutingManagerEngine*
///
QThread* q_georoutingmanagerengine_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGeoRoutingManagerEngine*
/// @param thread QThread*
///
bool q_georoutingmanagerengine_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoRoutingManagerEngine*
/// @param interval int
///
int32_t q_georoutingmanagerengine_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoRoutingManagerEngine*
/// @param time int64_t of nanoseconds
///
int32_t q_georoutingmanagerengine_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGeoRoutingManagerEngine*
/// @param id int
///
void q_georoutingmanagerengine_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGeoRoutingManagerEngine*
/// @param id enum Qt__TimerId
///
void q_georoutingmanagerengine_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QGeoRoutingManagerEngine*
///
/// @return libqt_list of QObject*
///
libqt_list q_georoutingmanagerengine_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGeoRoutingManagerEngine*
/// @param parent QObject*
///
void q_georoutingmanagerengine_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGeoRoutingManagerEngine*
/// @param filterObj QObject*
///
void q_georoutingmanagerengine_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGeoRoutingManagerEngine*
/// @param obj QObject*
///
void q_georoutingmanagerengine_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_georoutingmanagerengine_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_georoutingmanagerengine_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QGeoRoutingManagerEngine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_georoutingmanagerengine_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_georoutingmanagerengine_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_georoutingmanagerengine_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGeoRoutingManagerEngine*
///
bool q_georoutingmanagerengine_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGeoRoutingManagerEngine*
/// @param receiver QObject*
///
bool q_georoutingmanagerengine_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_georoutingmanagerengine_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QGeoRoutingManagerEngine*
///
void q_georoutingmanagerengine_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QGeoRoutingManagerEngine*
///
void q_georoutingmanagerengine_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGeoRoutingManagerEngine*
/// @param name const char*
/// @param value QVariant*
///
bool q_georoutingmanagerengine_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QGeoRoutingManagerEngine*
/// @param name const char*
///
QVariant* q_georoutingmanagerengine_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QGeoRoutingManagerEngine*
///
const char** q_georoutingmanagerengine_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGeoRoutingManagerEngine*
///
QBindingStorage* q_georoutingmanagerengine_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QGeoRoutingManagerEngine*
///
const QBindingStorage* q_georoutingmanagerengine_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoRoutingManagerEngine*
///
void q_georoutingmanagerengine_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback void func(QGeoRoutingManagerEngine* self)
///
void q_georoutingmanagerengine_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QGeoRoutingManagerEngine*
///
QObject* q_georoutingmanagerengine_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QGeoRoutingManagerEngine*
/// @param classname const char*
///
bool q_georoutingmanagerengine_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGeoRoutingManagerEngine*
///
void q_georoutingmanagerengine_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoRoutingManagerEngine*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_georoutingmanagerengine_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGeoRoutingManagerEngine*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_georoutingmanagerengine_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_georoutingmanagerengine_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_georoutingmanagerengine_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QGeoRoutingManagerEngine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_georoutingmanagerengine_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGeoRoutingManagerEngine*
/// @param signal const char*
///
bool q_georoutingmanagerengine_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGeoRoutingManagerEngine*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_georoutingmanagerengine_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGeoRoutingManagerEngine*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_georoutingmanagerengine_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGeoRoutingManagerEngine*
/// @param receiver QObject*
/// @param member const char*
///
bool q_georoutingmanagerengine_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoRoutingManagerEngine*
/// @param param1 QObject*
///
void q_georoutingmanagerengine_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback void func(QGeoRoutingManagerEngine* self, QObject* param1)
///
void q_georoutingmanagerengine_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param event QEvent*
///
bool q_georoutingmanagerengine_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param event QEvent*
///
bool q_georoutingmanagerengine_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback bool func(QGeoRoutingManagerEngine* self, QEvent* event)
///
void q_georoutingmanagerengine_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_georoutingmanagerengine_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_georoutingmanagerengine_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback bool func(QGeoRoutingManagerEngine* self, QObject* watched, QEvent* event)
///
void q_georoutingmanagerengine_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param event QTimerEvent*
///
void q_georoutingmanagerengine_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param event QTimerEvent*
///
void q_georoutingmanagerengine_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback void func(QGeoRoutingManagerEngine* self, QTimerEvent* event)
///
void q_georoutingmanagerengine_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param event QChildEvent*
///
void q_georoutingmanagerengine_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param event QChildEvent*
///
void q_georoutingmanagerengine_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback void func(QGeoRoutingManagerEngine* self, QChildEvent* event)
///
void q_georoutingmanagerengine_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param event QEvent*
///
void q_georoutingmanagerengine_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param event QEvent*
///
void q_georoutingmanagerengine_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback void func(QGeoRoutingManagerEngine* self, QEvent* event)
///
void q_georoutingmanagerengine_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param signal QMetaMethod*
///
void q_georoutingmanagerengine_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param signal QMetaMethod*
///
void q_georoutingmanagerengine_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback void func(QGeoRoutingManagerEngine* self, QMetaMethod* signal)
///
void q_georoutingmanagerengine_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param signal QMetaMethod*
///
void q_georoutingmanagerengine_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param signal QMetaMethod*
///
void q_georoutingmanagerengine_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback void func(QGeoRoutingManagerEngine* self, QMetaMethod* signal)
///
void q_georoutingmanagerengine_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGeoRoutingManagerEngine*
///
QObject* q_georoutingmanagerengine_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGeoRoutingManagerEngine*
///
QObject* q_georoutingmanagerengine_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback QObject* func(QGeoRoutingManagerEngine* self)
///
void q_georoutingmanagerengine_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGeoRoutingManagerEngine*
///
int32_t q_georoutingmanagerengine_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGeoRoutingManagerEngine*
///
int32_t q_georoutingmanagerengine_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback int32_t func(QGeoRoutingManagerEngine* self)
///
void q_georoutingmanagerengine_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGeoRoutingManagerEngine*
/// @param signal const char*
///
int32_t q_georoutingmanagerengine_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGeoRoutingManagerEngine*
/// @param signal const char*
///
int32_t q_georoutingmanagerengine_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback int32_t func(QGeoRoutingManagerEngine* self, const char* signal)
///
void q_georoutingmanagerengine_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGeoRoutingManagerEngine*
/// @param signal QMetaMethod*
///
bool q_georoutingmanagerengine_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGeoRoutingManagerEngine*
/// @param signal QMetaMethod*
///
bool q_georoutingmanagerengine_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback bool func(QGeoRoutingManagerEngine* self, QMetaMethod* signal)
///
void q_georoutingmanagerengine_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback void func(QGeoRoutingManagerEngine* self, const char* objectName)
///
void q_georoutingmanagerengine_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#dtor.QGeoRoutingManagerEngine)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoRoutingManagerEngine*
///
void q_georoutingmanagerengine_delete(void* self);

#endif
