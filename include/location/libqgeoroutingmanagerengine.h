#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQGEOROUTINGMANAGERENGINE_H
#define SRC_LOCATION_QT6C_LIBQGEOROUTINGMANAGERENGINE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
/// @param self QGeoRoutingManagerEngine*
///
const QMetaObject* q_georoutingmanagerengine_meta_object(void* self);

/// @param self QGeoRoutingManagerEngine*
/// @param param1 const char*
///
void* q_georoutingmanagerengine_metacast(void* self, const char* param1);

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
int32_t q_georoutingmanagerengine_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

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
/// @param self QGeoRoutingManagerEngine*
///
const char* q_georoutingmanagerengine_manager_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#managerVersion)
///
/// @param self QGeoRoutingManagerEngine*
///
int32_t q_georoutingmanagerengine_manager_version(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#calculateRoute)
///
/// @param self QGeoRoutingManagerEngine*
/// @param request QGeoRouteRequest*
///
QGeoRouteReply* q_georoutingmanagerengine_calculate_route(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#calculateRoute)
///
/// Allows for overriding the related default method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback QGeoRouteReply* func(QGeoRoutingManagerEngine* self, QGeoRouteRequest* request)
///
void q_georoutingmanagerengine_on_calculate_route(void* self, QGeoRouteReply* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#calculateRoute)
///
/// Base class method implementation
///
/// @param self QGeoRoutingManagerEngine*
/// @param request QGeoRouteRequest*
///
QGeoRouteReply* q_georoutingmanagerengine_qbase_calculate_route(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#updateRoute)
///
/// @param self QGeoRoutingManagerEngine*
/// @param route QGeoRoute*
/// @param position QGeoCoordinate*
///
QGeoRouteReply* q_georoutingmanagerengine_update_route(void* self, void* route, void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#updateRoute)
///
/// Allows for overriding the related default method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback QGeoRouteReply* func(QGeoRoutingManagerEngine* self, QGeoRoute* route, QGeoCoordinate* position)
///
void q_georoutingmanagerengine_on_update_route(void* self, QGeoRouteReply* (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#updateRoute)
///
/// Base class method implementation
///
/// @param self QGeoRoutingManagerEngine*
/// @param route QGeoRoute*
/// @param position QGeoCoordinate*
///
QGeoRouteReply* q_georoutingmanagerengine_qbase_update_route(void* self, void* route, void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#supportedTravelModes)
///
/// @param self QGeoRoutingManagerEngine*
///
/// @return flag of enum QGeoRouteRequest__TravelMode
///
int32_t q_georoutingmanagerengine_supported_travel_modes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#supportedFeatureTypes)
///
/// @param self QGeoRoutingManagerEngine*
///
/// @return flag of enum QGeoRouteRequest__FeatureType
///
int32_t q_georoutingmanagerengine_supported_feature_types(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#supportedFeatureWeights)
///
/// @param self QGeoRoutingManagerEngine*
///
/// @return flag of enum QGeoRouteRequest__FeatureWeight
///
int32_t q_georoutingmanagerengine_supported_feature_weights(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#supportedRouteOptimizations)
///
/// @param self QGeoRoutingManagerEngine*
///
/// @return flag of enum QGeoRouteRequest__RouteOptimization
///
int32_t q_georoutingmanagerengine_supported_route_optimizations(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#supportedSegmentDetails)
///
/// @param self QGeoRoutingManagerEngine*
///
/// @return flag of enum QGeoRouteRequest__SegmentDetail
///
int32_t q_georoutingmanagerengine_supported_segment_details(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#supportedManeuverDetails)
///
/// @param self QGeoRoutingManagerEngine*
///
/// @return flag of enum QGeoRouteRequest__ManeuverDetail
///
int32_t q_georoutingmanagerengine_supported_maneuver_details(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setLocale)
///
/// @param self QGeoRoutingManagerEngine*
/// @param locale QLocale*
///
void q_georoutingmanagerengine_set_locale(void* self, void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#locale)
///
/// @param self QGeoRoutingManagerEngine*
///
QLocale* q_georoutingmanagerengine_locale(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setMeasurementSystem)
///
/// @param self QGeoRoutingManagerEngine*
/// @param system enum QLocale__MeasurementSystem
///
void q_georoutingmanagerengine_set_measurement_system(void* self, int32_t system);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#measurementSystem)
///
/// @param self QGeoRoutingManagerEngine*
///
/// @return enum QLocale__MeasurementSystem
///
int32_t q_georoutingmanagerengine_measurement_system(void* self);

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

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedTravelModes)
///
/// Allows for overriding the related default method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback void func(QGeoRoutingManagerEngine* self, flag of enum QGeoRouteRequest__TravelMode travelModes)
///
void q_georoutingmanagerengine_on_set_supported_travel_modes(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedTravelModes)
///
/// Base class method implementation
///
/// @param self QGeoRoutingManagerEngine*
/// @param travelModes flag of enum QGeoRouteRequest__TravelMode
///
void q_georoutingmanagerengine_qbase_set_supported_travel_modes(void* self, int32_t travelModes);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedFeatureTypes)
///
/// @param self QGeoRoutingManagerEngine*
/// @param featureTypes flag of enum QGeoRouteRequest__FeatureType
///
void q_georoutingmanagerengine_set_supported_feature_types(void* self, int32_t featureTypes);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedFeatureTypes)
///
/// Allows for overriding the related default method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback void func(QGeoRoutingManagerEngine* self, flag of enum QGeoRouteRequest__FeatureType featureTypes)
///
void q_georoutingmanagerengine_on_set_supported_feature_types(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedFeatureTypes)
///
/// Base class method implementation
///
/// @param self QGeoRoutingManagerEngine*
/// @param featureTypes flag of enum QGeoRouteRequest__FeatureType
///
void q_georoutingmanagerengine_qbase_set_supported_feature_types(void* self, int32_t featureTypes);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedFeatureWeights)
///
/// @param self QGeoRoutingManagerEngine*
/// @param featureWeights flag of enum QGeoRouteRequest__FeatureWeight
///
void q_georoutingmanagerengine_set_supported_feature_weights(void* self, int32_t featureWeights);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedFeatureWeights)
///
/// Allows for overriding the related default method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback void func(QGeoRoutingManagerEngine* self, flag of enum QGeoRouteRequest__FeatureWeight featureWeights)
///
void q_georoutingmanagerengine_on_set_supported_feature_weights(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedFeatureWeights)
///
/// Base class method implementation
///
/// @param self QGeoRoutingManagerEngine*
/// @param featureWeights flag of enum QGeoRouteRequest__FeatureWeight
///
void q_georoutingmanagerengine_qbase_set_supported_feature_weights(void* self, int32_t featureWeights);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedRouteOptimizations)
///
/// @param self QGeoRoutingManagerEngine*
/// @param optimizations flag of enum QGeoRouteRequest__RouteOptimization
///
void q_georoutingmanagerengine_set_supported_route_optimizations(void* self, int32_t optimizations);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedRouteOptimizations)
///
/// Allows for overriding the related default method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback void func(QGeoRoutingManagerEngine* self, flag of enum QGeoRouteRequest__RouteOptimization optimizations)
///
void q_georoutingmanagerengine_on_set_supported_route_optimizations(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedRouteOptimizations)
///
/// Base class method implementation
///
/// @param self QGeoRoutingManagerEngine*
/// @param optimizations flag of enum QGeoRouteRequest__RouteOptimization
///
void q_georoutingmanagerengine_qbase_set_supported_route_optimizations(void* self, int32_t optimizations);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedSegmentDetails)
///
/// @param self QGeoRoutingManagerEngine*
/// @param segmentDetails flag of enum QGeoRouteRequest__SegmentDetail
///
void q_georoutingmanagerengine_set_supported_segment_details(void* self, int32_t segmentDetails);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedSegmentDetails)
///
/// Allows for overriding the related default method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback void func(QGeoRoutingManagerEngine* self, flag of enum QGeoRouteRequest__SegmentDetail segmentDetails)
///
void q_georoutingmanagerengine_on_set_supported_segment_details(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedSegmentDetails)
///
/// Base class method implementation
///
/// @param self QGeoRoutingManagerEngine*
/// @param segmentDetails flag of enum QGeoRouteRequest__SegmentDetail
///
void q_georoutingmanagerengine_qbase_set_supported_segment_details(void* self, int32_t segmentDetails);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedManeuverDetails)
///
/// @param self QGeoRoutingManagerEngine*
/// @param maneuverDetails flag of enum QGeoRouteRequest__ManeuverDetail
///
void q_georoutingmanagerengine_set_supported_maneuver_details(void* self, int32_t maneuverDetails);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedManeuverDetails)
///
/// Allows for overriding the related default method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback void func(QGeoRoutingManagerEngine* self, flag of enum QGeoRouteRequest__ManeuverDetail maneuverDetails)
///
void q_georoutingmanagerengine_on_set_supported_maneuver_details(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoroutingmanagerengine.html#setSupportedManeuverDetails)
///
/// Base class method implementation
///
/// @param self QGeoRoutingManagerEngine*
/// @param maneuverDetails flag of enum QGeoRouteRequest__ManeuverDetail
///
void q_georoutingmanagerengine_qbase_set_supported_maneuver_details(void* self, int32_t maneuverDetails);

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
/// @param self QGeoRoutingManagerEngine*
///
const char* q_georoutingmanagerengine_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGeoRoutingManagerEngine*
/// @param name char*
///
void q_georoutingmanagerengine_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGeoRoutingManagerEngine*
///
bool q_georoutingmanagerengine_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGeoRoutingManagerEngine*
///
bool q_georoutingmanagerengine_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGeoRoutingManagerEngine*
///
bool q_georoutingmanagerengine_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGeoRoutingManagerEngine*
///
bool q_georoutingmanagerengine_signals_blocked(void* self);

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
/// @param self QGeoRoutingManagerEngine*
///
QThread* q_georoutingmanagerengine_thread(void* self);

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
/// @param self QGeoRoutingManagerEngine*
///
/// @return libqt_list of QObject*
///
libqt_list q_georoutingmanagerengine_children(void* self);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_georoutingmanagerengine_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGeoRoutingManagerEngine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_georoutingmanagerengine_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_georoutingmanagerengine_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_georoutingmanagerengine_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGeoRoutingManagerEngine*
///
void q_georoutingmanagerengine_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGeoRoutingManagerEngine*
///
void q_georoutingmanagerengine_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGeoRoutingManagerEngine*
/// @param name const char*
/// @param value QVariant*
///
bool q_georoutingmanagerengine_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGeoRoutingManagerEngine*
/// @param name const char*
///
QVariant* q_georoutingmanagerengine_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QGeoRoutingManagerEngine*
///
const char** q_georoutingmanagerengine_dynamic_property_names(void* self);

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
/// @param self QGeoRoutingManagerEngine*
///
const QBindingStorage* q_georoutingmanagerengine_binding_storage2(void* self);

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
/// @param self QGeoRoutingManagerEngine*
///
QObject* q_georoutingmanagerengine_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGeoRoutingManagerEngine*
/// @param classname const char*
///
bool q_georoutingmanagerengine_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGeoRoutingManagerEngine*
///
void q_georoutingmanagerengine_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGeoRoutingManagerEngine*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_georoutingmanagerengine_move_to_thread2(void* self, void* thread, void* param2);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_georoutingmanagerengine_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGeoRoutingManagerEngine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_georoutingmanagerengine_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

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
bool q_georoutingmanagerengine_qbase_event(void* self, void* event);

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
bool q_georoutingmanagerengine_qbase_event_filter(void* self, void* watched, void* event);

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
void q_georoutingmanagerengine_qbase_timer_event(void* self, void* event);

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
void q_georoutingmanagerengine_qbase_child_event(void* self, void* event);

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
void q_georoutingmanagerengine_qbase_custom_event(void* self, void* event);

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
void q_georoutingmanagerengine_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param signal QMetaMethod*
///
void q_georoutingmanagerengine_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback void func(QGeoRoutingManagerEngine* self, QMetaMethod* signal)
///
void q_georoutingmanagerengine_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param signal QMetaMethod*
///
void q_georoutingmanagerengine_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param signal QMetaMethod*
///
void q_georoutingmanagerengine_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback void func(QGeoRoutingManagerEngine* self, QMetaMethod* signal)
///
void q_georoutingmanagerengine_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
///
QObject* q_georoutingmanagerengine_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
///
QObject* q_georoutingmanagerengine_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback QObject* func()
///
void q_georoutingmanagerengine_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
///
int32_t q_georoutingmanagerengine_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
///
int32_t q_georoutingmanagerengine_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback int32_t func()
///
void q_georoutingmanagerengine_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param signal const char*
///
int32_t q_georoutingmanagerengine_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param signal const char*
///
int32_t q_georoutingmanagerengine_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback int32_t func(QGeoRoutingManagerEngine* self, const char* signal)
///
void q_georoutingmanagerengine_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param signal QMetaMethod*
///
bool q_georoutingmanagerengine_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param signal QMetaMethod*
///
bool q_georoutingmanagerengine_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGeoRoutingManagerEngine*
/// @param callback bool func(QGeoRoutingManagerEngine* self, QMetaMethod* signal)
///
void q_georoutingmanagerengine_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

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
